void PartyServantListViewItem___cctor(const MethodInfo *method)
{
  struct PartyServantListViewItem_StaticFields *static_fields; // x8

  if ( (byte_596C21A & 1) == 0 )
  {
    sub_2213A60(&PartyServantListViewItem_TypeInfo);
    byte_596C21A = 1;
  }
  static_fields = PartyServantListViewItem_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->PRIORITY_NORMAL = xmmword_E9C340;
  *(_OWORD *)&static_fields->PRIORITY_LOWEST = xmmword_E9CEC0;
  static_fields->PriorityGrandServantOnActiveGrandBoard = 20;
}


void PartyServantListViewItem___ctor(
        PartyServantListViewItem_o *this,
        int32_t index,
        UserServantEntity_o *userServantEntity,
        PartyListViewItem_array *baseDeckItemList,
        PartyListViewItem_o *partyItem,
        int32_t num,
        int32_t tutorialMode,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        bool isGrandSameServant,
        bool isEnableRemove,
        const MethodInfo *method)
{
  IconLabelInfo_o *v17; // x24
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  IconLabelInfo_o *v24; // x24
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  IconLabelInfo_o *v31; // x24
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int64_t Instance; // x0
  int64_t NotSamePartyKey; // x1
  struct PartyOrganizationListViewItem_o *Member; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct UserServantEntity_o *v54; // x8
  UserServantEntity_o **p_userServantEntity; // x25
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  struct ServantEntity_o *ServantEntity; // x0
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  struct ServantEntity_o *BaseServantEntity; // x0
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  const MethodInfo_47A29F8 *v82; // x0
  __int64 v83; // x2
  UserServantEntity_o *v84; // x8
  UserServantCollectionMaster_o *v85; // x21
  __int128 v86; // q1
  int64_t v87; // x24
  const MethodInfo *v88; // x1
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  __int64 v90; // x1
  __int64 v91; // x2
  int32_t v92; // w21
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  System_Collections_Generic_List_object__o *v111; // x24
  System_String_o *v112; // x2
  System_String_o *v113; // x3
  int32_t v114; // w4
  int32_t v115; // w5
  bool v116; // w6
  bool v117; // w7
  __int64 v118; // x1
  __int64 v119; // x2
  PartyListViewItem_o *v120; // x24
  __int64 v121; // x2
  int32_t i; // w29
  BalanceConfig_c *v123; // x0
  PartyOrganizationListViewItem_o *v124; // x28
  UserServantEntity_o *v125; // x8
  __int128 v126; // q1
  struct UserServantEntity_o *v127; // x8
  __int128 v128; // q1
  int64_t v129; // x21
  __int128 v130; // q1
  int v131; // w8
  const MethodInfo_45E5BF4 *v132; // x3
  struct PartyOrganizationListViewItem_o *v133; // x8
  struct UserServantEntity_o *v134; // x8
  __int128 v135; // q1
  int64_t v136; // x21
  const MethodInfo_45E4A50 *v137; // x3
  struct ServantEntity_o *v138; // x8
  __int64 v139; // x21
  __int64 v140; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v141; // x8
  int v142; // w21
  int v143; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v145; // x9
  __int64 size; // x10
  struct ServantEntity_o *v147; // x8
  __int64 v148; // x21
  __int64 v149; // x24
  struct ServantEntity_o *v150; // x8
  int32_t v151; // w21
  __int64 v152; // x1
  __int64 v153; // x2
  int32_t v154; // w24
  int32_t IncludedRestrictionIds; // w0
  struct PartyOrganizationListViewItem_o *v156; // x8
  struct ServantEntity_o *v157; // x8
  __int64 v158; // x21
  __int64 v159; // x24
  __int64 v160; // x21
  __int64 v161; // x24
  __int64 v162; // x2
  const MethodInfo_45E5738 *v163; // x4
  struct PartyOrganizationListViewItem_o *v164; // x8
  struct UserServantEntity_o *v165; // x8
  int v166; // w21
  __int64 v167; // x24
  __int64 v168; // x27
  int32_t v169; // w0
  System_Int64_array *EquipList; // x0
  const MethodInfo *v171; // x2
  struct ServantEntity_o *BaseServantEntity_k__BackingField; // x8
  __int64 v173; // x21
  __int64 v174; // x24
  System_Int64_array *EquipUserServantIdList; // x0
  const MethodInfo *v176; // x2
  __int128 v177; // q1
  int v178; // w8
  UserServantGrandEntity_o *FirstByUserSvtId; // x0
  System_Int64_array *v180; // x0
  const MethodInfo *v181; // x2
  bool v182; // cc
  __int128 v183; // q1
  int v184; // w8
  __int64 v185; // x1
  __int64 v186; // x2
  BalanceConfig_c *v187; // x0
  System_Collections_Generic_List_int__o *v188; // x21
  __int64 v189; // x2
  PartyListViewItem_array *v190; // x9
  il2cpp_array_size_t max_length; // x8
  int32_t v192; // w27
  unsigned __int64 v193; // x24
  int32_t v194; // w26
  int32_t v195; // w28
  PartyListViewItem_o *v196; // x27
  PartyOrganizationListViewItem_o *v197; // x29
  struct System_Int32_array *v198; // x8
  _QWORD *v199; // x9
  __int64 v200; // x10
  UserServantEntity_o *v201; // x20
  struct UserServantEntity_o *v202; // x8
  __int128 v203; // q1
  System_Int64_array *v204; // x0
  const MethodInfo *v205; // x2
  const MethodInfo *v206; // x1
  const MethodInfo *v207; // x1
  bool IsLock; // w8
  bool IsChoice; // w0
  __int64 v210; // x2
  UserServantEntity_o *v211; // x9
  __int128 v212; // q1
  __int64 v213; // x20
  int64_t v214; // x8
  bool IsEventJoin; // w8
  const MethodInfo *v216; // x1
  bool v217; // w8
  bool UniqueSvtRestriction_50190092; // w8
  bool IsUniqueIndividualityRestriction_50190496; // w0
  const MethodInfo *v220; // x1
  struct QuestRestrictionInfo_o *v221; // x8
  UserEventServantFatigueMaster_o *v222; // x26
  int32_t eventId; // w27
  bool FatigueInfo; // w0
  __int64 v225; // x2
  int64_t v226; // x20
  bool AllOutBattleAlreadyUsed; // w0
  __int64 v228; // x1
  __int64 v229; // x2
  struct QuestRestrictionInfo_o *v230; // x8
  __int64 v231; // x2
  Il2CppObject *v232; // x21
  __int64 v233; // x2
  UserServantEntity_o *v234; // x8
  __int64 v235; // x24
  __int64 v236; // x26
  UserEventDataLostEntity_o *v237; // x21
  __int64 v238; // x2
  UserEventDataLostEntity_o *v239; // x21
  UserServantEntity_o *v240; // x8
  __int64 v241; // x24
  __int64 v242; // x26
  int32_t v243; // w21
  struct PartyOrganizationListViewItem_o *v244; // x8
  UserServantGrandEntity_o *EntityFromSvtId; // x0
  System_Int64_array *v246; // x0
  const MethodInfo *v247; // x2
  __int64 v248; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr10_16
  __int64 v250; // x2
  __int64 v251; // x2
  UserServantEntity_o *v252; // x8
  int64_t v253; // x26
  __int64 v254; // x24
  __int64 v255; // x27
  int32_t v256; // w27
  int32_t Rarity; // w28
  const MethodInfo *v258; // x7
  System_String_o **p_skillName; // x1
  int32_t *p_actMaxRarity; // x2
  int32_t v261; // w3
  int32_t v262; // w4
  __int64 partyIndex; // x1
  __int64 v264; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v265; // kr20_16
  __int64 v266; // x2
  UserServantEntity_o *v267; // x8
  int64_t v268; // x24
  __int64 v269; // x26
  __int64 v270; // x27
  int32_t v271; // w26
  int32_t v272; // w27
  struct QuestRestrictionInfo_o *v273; // x8
  EventServantPointRankMaster_o *v274; // x23
  __int64 v275; // x1
  __int64 v276; // x2
  __int64 v277; // x2
  UserServantEntity_o *v278; // x8
  UserEventServantPointMaster_o *v279; // x24
  __int128 v280; // q1
  int64_t v281; // x26
  int32_t *p_SvtPoint_k__BackingField; // x20
  int32_t v283; // w24
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  System_Collections_Generic_List_T__o *v286; // x21
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v288; // x24
  Il2CppObject *v289; // x23
  _BOOL8 v290; // x0
  __int64 v291; // x1
  __int64 v292; // x2
  EventCampaignEntity_o *current; // x24
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x25
  __int64 v295; // x26
  __int64 v296; // x27
  int32_t v297; // w1
  int32_t v298; // w25
  int32_t FriendshipBonusValue; // w0
  int32_t calcType; // w3
  int32_t v301; // w2
  const MethodInfo_3D01BE0 *v302; // x5
  __int64 v303; // x0
  System_ValueTuple_int__int__Int32Enum__o v304; // x1
  struct System_Object_array *v305; // x8
  _QWORD *v306; // x9
  int32_t v307; // w10
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v308; // x0
  System_String_o *v309; // x2
  System_String_o *v310; // x3
  int32_t v311; // w4
  int32_t v312; // w5
  bool v313; // w6
  bool v314; // w7
  __int64 v315; // x1
  __int64 v316; // x2
  BalanceConfig_c *v317; // x0
  int32_t adjustHp; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 v320; // x2
  __int64 v321; // x20
  __int64 v322; // x21
  int32_t v323; // w0
  IconLabelInfo_o *iconLabelInfo1; // x8
  __int64 v325; // x24
  __int64 v326; // x26
  __int128 v327; // q1
  int v328; // w8
  UserServantGrandEntity_o *v329; // x0
  UserServantGrandEntity_o *v330; // x21
  System_Int64_array *v331; // x0
  const MethodInfo *v332; // x2
  UserServantGrandEntity_o *v333; // x21
  System_Int64_array *v334; // x0
  const MethodInfo *v335; // x2
  bool v336; // w8
  System_Collections_Generic_List_int__o *v337; // [xsp+8h] [xbp-348h]
  UserServantGrandMaster_o *Master_object; // [xsp+18h] [xbp-338h]
  bool IsNotSameParty; // [xsp+30h] [xbp-320h]
  int32_t numa; // [xsp+44h] [xbp-30Ch]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+58h] [xbp-2F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v345; // [xsp+60h] [xbp-2F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v346; // [xsp+80h] [xbp-2D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v347; // [xsp+A0h] [xbp-2B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v348; // [xsp+C0h] [xbp-290h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v349; // [xsp+E0h] [xbp-270h] BYREF
  __int128 v350; // [xsp+100h] [xbp-250h]
  __int128 v351; // [xsp+110h] [xbp-240h]
  _BYTE v352[40]; // [xsp+120h] [xbp-230h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v353; // [xsp+150h] [xbp-200h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v354; // [xsp+170h] [xbp-1E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v355; // [xsp+190h] [xbp-1C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v356; // [xsp+1B0h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v357; // [xsp+1D0h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v358; // [xsp+1F0h] [xbp-160h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v359; // [xsp+210h] [xbp-140h] BYREF
  UserEventServantPointEntity_o *v360; // [xsp+230h] [xbp-120h] BYREF
  int32_t actMaxRarity; // [xsp+23Ch] [xbp-114h] BYREF
  System_String_o *skillName; // [xsp+240h] [xbp-110h] BYREF
  int v363; // [xsp+24Ch] [xbp-104h] BYREF
  __int64 v364; // [xsp+250h] [xbp-100h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+258h] [xbp-F8h] BYREF
  int64_t recoverAt; // [xsp+260h] [xbp-F0h] BYREF
  int32_t friendshipRank; // [xsp+26Ch] [xbp-E4h] BYREF
  _OWORD item[2]; // [xsp+270h] [xbp-E0h] BYREF
  __int128 v369; // [xsp+290h] [xbp-C0h]
  _OWORD v370[2]; // [xsp+2A0h] [xbp-B0h] BYREF
  _BYTE v371[39]; // [xsp+2C0h] [xbp-90h] BYREF
  __int64 v372; // [xsp+2E8h] [xbp-68h]
  System_ValueTuple_int__int__Int32Enum__o v373; // 0:x0.12
  System_Nullable_T__o v374; // 0:x0.16
  System_Nullable_long__o v375; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v376; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v377; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v378; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v379; // 0:x0.16
  System_Nullable_T__o v380; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v381; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v382; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v383; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v384; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v385; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v386; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v387; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v388; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v389; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v390; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v391; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v392; // 0:x2.16

  v372 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_596C20A & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CommonRestrictionMaster_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_ObscuredInt__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_long___ctor__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_System_Nullable_ObscuredInt___ctor__);
    sub_2213A60(&Method_System_Nullable_ObscuredLong___ctor__);
    sub_2213A60(&Method_System_Nullable_ObscuredLong__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_ObscuredInt__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_long__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__);
    byte_596C20A = 1;
  }
  friendshipRank = 0;
  recoverAt = 0;
  memset(v371, 0, sizeof(v371));
  entity = 0;
  v364 = 0;
  v363 = 0;
  skillName = 0;
  actMaxRarity = 0;
  v360 = 0;
  memset(&v359, 0, sizeof(v359));
  v369 = 0u;
  memset(v370, 0, 23);
  v17 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0);
  this->fields.iconLabelInfo1 = v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0);
  this->fields.iconLabelInfo2 = v24;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v31, 0);
  this->fields.iconLabelInfo3 = v31;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo3,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_301;
  Member = PartyListViewItem__GetMember(partyItem, num, 0);
  this->fields.baseItem = Member;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.baseItem, (int32_t)Member, v41, v42, v43, v44, v45, v46);
  baseItem = this->fields.baseItem;
  this->fields._PartyListViewItemMenuKind_k__BackingField = partyItem->fields.menuKind;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_301;
  v54 = baseItem->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  this->fields.isSelectEmpty = v54 == 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  if ( !userServantEntity )
    goto LABEL_301;
  ServantEntity = UserServantEntity__GetServantEntity(userServantEntity, -1, 0);
  this->fields._ServantEntity_k__BackingField = ServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantEntity_k__BackingField,
    (int32_t)ServantEntity,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  BaseServantEntity = UserServantEntity__get_BaseServantEntity(userServantEntity, 0);
  this->fields._BaseServantEntity_k__BackingField = BaseServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BaseServantEntity_k__BackingField,
    (int32_t)BaseServantEntity,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  v82 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields._IsGrandSameServant_k__BackingField = isGrandSameServant;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v82);
  if ( !Instance )
    goto LABEL_301;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v84 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_301;
  v85 = (UserServantCollectionMaster_o *)Instance;
  v86 = *(_OWORD *)&v84->fields.userId.fields.fakeValue;
  *(_OWORD *)v352 = *(_OWORD *)&v84->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v352[16] = v86;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, NotSamePartyKey, v83);
  v358 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v352;
  v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v358, 0);
  Instance = PartyServantListViewItem__get_BaseServantId(this, v88);
  if ( !v85 )
    goto LABEL_301;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v85, v87, Instance, 0);
  ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
  if ( !ServantEntity_k__BackingField )
    goto LABEL_301;
  this->fields.classId = ServantEntity_k__BackingField->fields.classId;
  if ( !Instance )
    goto LABEL_301;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &friendshipRank,
    &this->fields.friendshipMax,
    0);
  v92 = friendshipRank;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v90, v91);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v92, 0);
  this->fields.isBase = 0;
  this->fields.partyIndex = -1;
  this->fields.isSame = 0;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipUserServantEntity, 0, v93, v94, v95, v96, v97, v98);
  this->fields.equipServantEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipServantEntity,
    0,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  this->fields.equipIdList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList, 0, v105, v106, v107, v108, v109, v110);
  v111 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v111,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v111;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipServantEntityList,
    (int32_t)v111,
    v112,
    v113,
    v114,
    v115,
    v116,
    v117);
  Instance = (int64_t)this->fields._BaseServantEntity_k__BackingField;
  this->fields._IsEquipFriendShipSkillChangeOnParty_k__BackingField = 0;
  if ( !Instance )
    goto LABEL_301;
  numa = num;
  IsNotSameParty = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0);
  v337 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v337,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v120 = partyItem;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v118, v119);
  Master_object = (UserServantGrandMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  for ( i = 0; ; ++i )
  {
    v123 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, NotSamePartyKey, v121);
      v123 = BalanceConfig_TypeInfo;
    }
    if ( i >= v123->static_fields->DeckMemberMax )
      goto LABEL_111;
    Instance = (int64_t)PartyListViewItem__GetMember(v120, i, 0);
    if ( !Instance )
      goto LABEL_301;
    v124 = (PartyOrganizationListViewItem_o *)Instance;
    if ( !*(_QWORD *)(Instance + 120) )
      continue;
    v125 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_301;
    v126 = *(_OWORD *)&v125->fields.id.fields.fakeValue;
    *(_OWORD *)v352 = *(_OWORD *)&v125->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v352[16] = v126;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, NotSamePartyKey, v121);
    v357 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v352;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v357, 0);
    v127 = v124->fields.userServantEntity;
    if ( !v127 )
      goto LABEL_301;
    v128 = *(_OWORD *)&v127->fields.id.fields.fakeValue;
    v129 = Instance;
    *(_OWORD *)&v356.fields.currentCryptoKey = *(_OWORD *)&v127->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v356.fields.fakeValue = v128;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v356, 0);
    if ( v129 == Instance )
      break;
    if ( isGrandSameServant )
    {
      v130 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      v131 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)v352 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v352[16] = v130;
      if ( !v131 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, NotSamePartyKey, v121);
      v353 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v352;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v353, 0);
      v133 = this->fields.baseItem;
      if ( !v133 )
        goto LABEL_301;
      v134 = v133->fields.userServantEntity;
      if ( !v134 )
      {
        v369 = 0u;
        memset(v370, 0, 23);
        memset(v371, 0, sizeof(v371));
LABEL_78:
        this->fields.isBase = 0;
        this->fields.isSame = 0;
        v160 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v161 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, NotSamePartyKey, v121);
        *(_QWORD *)&v379.fields.currentCryptoKey = v160;
        *(_QWORD *)&v379.fields.fakeValue = v161;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v379, 0);
        v164 = this->fields.baseItem;
        if ( !v164 )
          goto LABEL_301;
        v165 = v164->fields.userServantEntity;
        if ( v165 )
        {
          v166 = Instance;
          *(_QWORD *)&v380.fields.hasValue = v352;
          v380.fields.value = *(Il2CppObject **)&v165->fields.svtId.fields.currentCryptoKey;
          *(_QWORD *)&v392.fields.currentCryptoKey = *(_QWORD *)&v165->fields.svtId.fields.fakeValue;
          memset(v352, 0, 20);
          *(_QWORD *)&v392.fields.fakeValue = Method_System_Nullable_ObscuredInt___ctor__;
          System_Nullable_ObscuredInt____ctor(v380, v392, v163);
          if ( v352[0] )
          {
            v167 = *(_QWORD *)&v352[4];
            v168 = *(_QWORD *)&v352[12];
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(
                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                NotSamePartyKey,
                v162);
            *(_QWORD *)&v381.fields.currentCryptoKey = v167;
            *(_QWORD *)&v381.fields.fakeValue = v168;
            v169 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v381, 0);
            *(_QWORD *)v352 = 0;
            System_Nullable_int____ctor(
              (System_Nullable_int__o)v352,
              v169,
              (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
            if ( v352[0] )
            {
              if ( v166 == *(_DWORD *)&v352[4] )
              {
                Instance = (int64_t)this->fields.baseItem;
                if ( !Instance )
                  goto LABEL_301;
                EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0);
                PartyServantListViewItem__SetEquipStatus(this, EquipList, v171);
                v120 = partyItem;
                goto LABEL_111;
              }
            }
          }
        }
        BaseServantEntity_k__BackingField = v124->fields._BaseServantEntity_k__BackingField;
        if ( !BaseServantEntity_k__BackingField )
          goto LABEL_301;
        v173 = *(_QWORD *)&BaseServantEntity_k__BackingField->fields.baseSvtId.fields.currentCryptoKey;
        v174 = *(_QWORD *)&BaseServantEntity_k__BackingField->fields.baseSvtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, NotSamePartyKey, v162);
        *(_QWORD *)&v382.fields.currentCryptoKey = v173;
        *(_QWORD *)&v382.fields.fakeValue = v174;
        NotSamePartyKey = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v382, 0);
        Instance = (int64_t)Master_object;
        if ( !Master_object )
          goto LABEL_301;
        Instance = (int64_t)UserServantGrandMaster__GetEntityFromSvtId(Master_object, NotSamePartyKey, 0);
        v120 = partyItem;
        if ( !Instance )
          goto LABEL_301;
        goto LABEL_94;
      }
      v135 = *(_OWORD *)&v134->fields.id.fields.fakeValue;
      v136 = Instance;
      *(_QWORD *)&v374.fields.hasValue = v352;
      v374.fields.value = (Il2CppObject *)item;
      v350 = *(_OWORD *)&v134->fields.id.fields.currentCryptoKey;
      v351 = v135;
      memset(v352, 0, sizeof(v352));
      item[0] = v350;
      item[1] = v135;
      System_Nullable_ObscuredLong____ctor(
        v374,
        (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
        v132);
      *(_QWORD *)((char *)v370 + 15) = *(_QWORD *)&v352[32];
      v369 = *(_OWORD *)&v352[1];
      v370[0] = *(_OWORD *)&v352[17];
      *(_OWORD *)v371 = *(_OWORD *)&v352[1];
      *(_OWORD *)&v371[16] = *(_OWORD *)&v352[17];
      *(_QWORD *)&v371[31] = *(_QWORD *)((char *)v370 + 15);
      if ( !v352[0] )
        goto LABEL_78;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, NotSamePartyKey, v121);
      v349 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)&v371[7];
      v375.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v349, 0);
      *(_QWORD *)&v375.fields.hasValue = v352;
      *(_OWORD *)v352 = 0u;
      System_Nullable_long____ctor(v375, Method_System_Nullable_long___ctor__, v137);
      if ( !v352[0] || v136 != *(_QWORD *)&v352[8] )
        goto LABEL_78;
    }
    if ( num != i )
    {
      v138 = this->fields._BaseServantEntity_k__BackingField;
      if ( !v138 )
        goto LABEL_301;
      v139 = *(_QWORD *)&v138->fields.baseSvtId.fields.currentCryptoKey;
      v140 = *(_QWORD *)&v138->fields.baseSvtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, NotSamePartyKey, v121);
      *(_QWORD *)&v376.fields.currentCryptoKey = v139;
      *(_QWORD *)&v376.fields.fakeValue = v140;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v376, 0);
      v141 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v124->fields._BaseServantEntity_k__BackingField;
      if ( !v141 )
        goto LABEL_301;
      v142 = Instance;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v141[2], 0);
      v120 = partyItem;
      if ( v142 == (_DWORD)Instance )
      {
        this->fields.isSame = 1;
      }
      else
      {
        if ( !IsNotSameParty )
          goto LABEL_57;
        Instance = (int64_t)v124->fields._BaseServantEntity_k__BackingField;
        if ( !Instance )
          goto LABEL_301;
        Instance = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0);
        if ( (Instance & 1) == 0 )
          goto LABEL_57;
        Instance = (int64_t)this->fields._BaseServantEntity_k__BackingField;
        if ( !Instance )
          goto LABEL_301;
        Instance = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0);
        if ( !v124->fields._BaseServantEntity_k__BackingField )
          goto LABEL_301;
        v143 = Instance;
        Instance = ServantEntity__GetNotSamePartyKey(v124->fields._BaseServantEntity_k__BackingField, 0);
        if ( v143 == (_DWORD)Instance )
        {
          this->fields.isNotSameParty = 1;
          Instance = (int64_t)v124->fields._ServantEntity_k__BackingField;
          if ( !Instance )
            goto LABEL_301;
          NotSamePartyKey = (unsigned int)ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0);
          Instance = (int64_t)v337;
          if ( !v337 )
            goto LABEL_301;
          items = v337->fields._items;
          v145 = Method_System_Collections_Generic_List_int__Add__;
          ++v337->fields._version;
          if ( !items )
            goto LABEL_301;
          size = v337->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v337,
              NotSamePartyKey,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
          }
          else
          {
            v337->fields._size = size + 1;
            items->m_Items[size] = NotSamePartyKey;
          }
        }
        else
        {
LABEL_57:
          if ( this->fields.commonRestrictionId == -1 )
          {
            v147 = v124->fields._BaseServantEntity_k__BackingField;
            if ( !v147 )
              goto LABEL_301;
            v148 = *(_QWORD *)&v147->fields.baseSvtId.fields.currentCryptoKey;
            v149 = *(_QWORD *)&v147->fields.baseSvtId.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(
                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                NotSamePartyKey,
                v121);
            *(_QWORD *)&v377.fields.currentCryptoKey = v148;
            *(_QWORD *)&v377.fields.fakeValue = v149;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v377, 0);
            v150 = this->fields._BaseServantEntity_k__BackingField;
            if ( !v150 )
              goto LABEL_301;
            v151 = Instance;
            v154 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v150->fields.baseSvtId, 0);
            if ( !*(&CommonRestrictionMaster_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo, v152, v153);
            IncludedRestrictionIds = CommonRestrictionMaster__GetIncludedRestrictionIds(v151, v154, 0);
            v120 = partyItem;
            if ( (IncludedRestrictionIds & 0x80000000) == 0 )
              this->fields.commonRestrictionId = IncludedRestrictionIds;
          }
        }
      }
    }
  }
  v156 = this->fields.baseItem;
  this->fields.isSame = 0;
  this->fields.partyIndex = i;
  this->fields.isBase = num == i && isEnableRemove;
  if ( !v156 )
    goto LABEL_309;
  if ( v156->fields.isRestrictionGrandServant )
  {
    if ( num != i )
    {
      v157 = v124->fields._BaseServantEntity_k__BackingField;
      if ( !v157 )
        goto LABEL_301;
      v158 = *(_QWORD *)&v157->fields.baseSvtId.fields.currentCryptoKey;
      v159 = *(_QWORD *)&v157->fields.baseSvtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, NotSamePartyKey, v121);
      *(_QWORD *)&v378.fields.currentCryptoKey = v158;
      *(_QWORD *)&v378.fields.fakeValue = v159;
      NotSamePartyKey = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v378, 0);
      Instance = (int64_t)Master_object;
      if ( !Master_object )
        goto LABEL_301;
      Instance = (int64_t)UserServantGrandMaster__GetEntityFromSvtId(Master_object, NotSamePartyKey, 0);
      v120 = partyItem;
      if ( !Instance )
        goto LABEL_111;
LABEL_94:
      EquipUserServantIdList = UserServantGrandEntity__GetEquipUserServantIdList(
                                 (UserServantGrandEntity_o *)Instance,
                                 0);
LABEL_110:
      PartyServantListViewItem__SetEquipStatus(this, EquipUserServantIdList, v176);
      goto LABEL_111;
    }
LABEL_109:
    EquipUserServantIdList = PartyOrganizationListViewItem__GetEquipList(v124, 0);
    goto LABEL_110;
  }
  if ( !v156->fields.isRestrictionActiveGrandBoard )
  {
LABEL_309:
    if ( v124->fields.isRestrictionActiveGrandBoard )
    {
      v183 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      v184 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)v352 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v352[16] = v183;
      if ( !v184 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, NotSamePartyKey, v121);
      v354 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v352;
      NotSamePartyKey = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v354, 0);
      Instance = (int64_t)Master_object;
      if ( !Master_object )
        goto LABEL_301;
      if ( UserServantGrandMaster__GetFirstByUserSvtId(Master_object, NotSamePartyKey, 0) )
      {
        v187 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v185, v186);
          v187 = BalanceConfig_TypeInfo;
        }
        EquipUserServantIdList = (System_Int64_array *)sub_2213B20(
                                                         long___TypeInfo,
                                                         (unsigned int)v187->static_fields->SvtEquipMax);
        goto LABEL_110;
      }
    }
    goto LABEL_109;
  }
  v177 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v178 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)v352 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v352[16] = v177;
  if ( !v178 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, NotSamePartyKey, v121);
  v355 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v352;
  NotSamePartyKey = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v355, 0);
  Instance = (int64_t)Master_object;
  if ( !Master_object )
    goto LABEL_301;
  FirstByUserSvtId = UserServantGrandMaster__GetFirstByUserSvtId(Master_object, NotSamePartyKey, 0);
  if ( num == i || v124->fields.isRestrictionActiveGrandBoard || (v333 = FirstByUserSvtId) == 0 )
  {
    v180 = PartyOrganizationListViewItem__GetEquipList(v124, 0);
    PartyServantListViewItem__SetEquipStatus(this, v180, v181);
    v182 = v124->fields._EquipFriendShipSkillChange_k__BackingField <= 0;
  }
  else
  {
    v334 = UserServantGrandEntity__GetEquipUserServantIdList(FirstByUserSvtId, 0);
    PartyServantListViewItem__SetEquipStatus(this, v334, v335);
    v182 = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(v333, 0) <= 0;
  }
  v336 = !v182;
  this->fields._IsEquipFriendShipSkillChangeOnParty_k__BackingField = v336;
LABEL_111:
  if ( this->fields.partyIndex < 0 )
  {
    v244 = this->fields.baseItem;
    if ( v244 )
    {
      if ( v244->fields.isRestrictionGrandServant )
      {
        NotSamePartyKey = (unsigned int)PartyServantListViewItem__get_BaseServantId(
                                          this,
                                          (const MethodInfo *)NotSamePartyKey);
        Instance = (int64_t)Master_object;
        if ( !Master_object )
          goto LABEL_301;
        EntityFromSvtId = UserServantGrandMaster__GetEntityFromSvtId(Master_object, NotSamePartyKey, 0);
        if ( EntityFromSvtId )
        {
          v246 = UserServantGrandEntity__GetEquipUserServantIdList(EntityFromSvtId, 0);
          PartyServantListViewItem__SetEquipStatus(this, v246, v247);
        }
      }
      else if ( v244->fields.isRestrictionActiveGrandBoard )
      {
        v327 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        v328 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)v352 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v352[16] = v327;
        if ( !v328 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, NotSamePartyKey, v121);
        v348 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v352;
        NotSamePartyKey = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v348, 0);
        Instance = (int64_t)Master_object;
        if ( !Master_object )
          goto LABEL_301;
        v329 = UserServantGrandMaster__GetFirstByUserSvtId(Master_object, NotSamePartyKey, 0);
        if ( v329 )
        {
          v330 = v329;
          v331 = UserServantGrandEntity__GetEquipUserServantIdList(v329, 0);
          PartyServantListViewItem__SetEquipStatus(this, v331, v332);
          this->fields._IsEquipFriendShipSkillChangeOnParty_k__BackingField = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(
                                                                                v330,
                                                                                0) > 0;
        }
      }
    }
  }
  if ( this->fields._PartyListViewItemMenuKind_k__BackingField != 9 )
  {
    v192 = num;
    this->fields._OrganizedWave_k__BackingField = 0;
    goto LABEL_147;
  }
  v188 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v188,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v190 = baseDeckItemList;
  if ( !baseDeckItemList )
    goto LABEL_301;
  max_length = baseDeckItemList->max_length;
  v192 = num;
  this->fields._MaxWave_k__BackingField = max_length;
  if ( (int)max_length < 1 )
    goto LABEL_142;
  v193 = 0;
  v194 = 1;
  while ( 2 )
  {
    if ( v193 >= (unsigned int)max_length )
      sub_2213CE4(Instance);
    v195 = 0;
    v196 = v190->m_Items[v193];
    while ( 2 )
    {
      Instance = (int64_t)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, NotSamePartyKey, v189);
        Instance = (int64_t)BalanceConfig_TypeInfo;
      }
      if ( v195 < *(_DWORD *)(*(_QWORD *)(Instance + 184) + 176LL) )
      {
        if ( !v196 )
          goto LABEL_301;
        Instance = (int64_t)PartyListViewItem__GetMember(v196, v195, 0);
        if ( !Instance )
          goto LABEL_301;
        v197 = (PartyOrganizationListViewItem_o *)Instance;
        if ( !*(_QWORD *)(Instance + 120) )
          goto LABEL_136;
        Instance = PartyOrganizationListViewItem__get_BaseServantId((PartyOrganizationListViewItem_o *)Instance, 0);
        if ( !v188 )
          goto LABEL_301;
        v198 = v188->fields._items;
        v199 = Method_System_Collections_Generic_List_int__Add__;
        ++v188->fields._version;
        if ( !v198 )
          goto LABEL_301;
        v200 = v188->fields._size;
        NotSamePartyKey = (unsigned int)Instance;
        if ( (unsigned int)v200 >= LODWORD(v198->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v188,
            Instance,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v199[4] + 192LL) + 112LL));
          if ( !v194 )
          {
LABEL_136:
            ++v195;
            continue;
          }
        }
        else
        {
          v188->fields._size = v200 + 1;
          v198->m_Items[v200] = Instance;
          if ( !v194 )
            goto LABEL_136;
        }
        v201 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_301;
        v202 = v197->fields.userServantEntity;
        if ( !v202 )
          goto LABEL_301;
        v203 = *(_OWORD *)&v202->fields.id.fields.fakeValue;
        *(_OWORD *)v352 = *(_OWORD *)&v202->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v352[16] = v203;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, NotSamePartyKey, v189);
        v347 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v352;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_56001160(&v201->fields.id, &v347, 0) )
        {
          v204 = PartyOrganizationListViewItem__GetEquipList(v197, 0);
          PartyServantListViewItem__SetEquipStatus(this, v204, v205);
          this->fields._OrganizedWave_k__BackingField = v194;
          v194 = 0;
          this->fields._IsClearedWave_k__BackingField = v196->fields._IsClearedWave_k__BackingField;
        }
        goto LABEL_136;
      }
      break;
    }
    v190 = baseDeckItemList;
    ++v193;
    if ( v194 )
      ++v194;
    else
      v194 = 0;
    LODWORD(max_length) = baseDeckItemList->max_length;
    if ( (__int64)v193 < (int)max_length )
      continue;
    break;
  }
  v120 = partyItem;
  v192 = numa;
  if ( !v194 )
    goto LABEL_147;
LABEL_142:
  Instance = PartyServantListViewItem__get_BaseServantId(this, (const MethodInfo *)NotSamePartyKey);
  if ( !v188 )
    goto LABEL_301;
  if ( System_Collections_Generic_List_int___Contains(
         v188,
         Instance,
         (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__)
    && !this->fields.isNotSameParty )
  {
    this->fields.isSame = 1;
  }
LABEL_147:
  PartyServantListViewItem__CheckConvertOverwriteImage(this, (const MethodInfo *)NotSamePartyKey);
  PartyServantListViewItem__ModifyLimitCount(this, v206);
  PartyServantListViewItem__ModifyOverwriteStatus(this, v207);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.updateCategoryIdList = 1;
  if ( !Instance )
    goto LABEL_301;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isLock = IsLock;
  if ( !Instance )
    goto LABEL_301;
  IsChoice = UserServantEntity__IsChoice((UserServantEntity_o *)Instance, 0);
  *(_WORD *)&this->fields.isSwapLock = 0;
  *(_WORD *)&this->fields.isLockMode = 0;
  this->fields.isChoice = IsChoice;
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_301;
  v211 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_301;
  v212 = *(_OWORD *)&v211->fields.id.fields.fakeValue;
  v213 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)v352 = *(_OWORD *)&v211->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v352[16] = v212;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, NotSamePartyKey, v210);
  v346 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v352;
  v214 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v346, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isEnabled = 1;
  this->fields.isPush = v213 == v214;
  if ( !Instance )
    goto LABEL_301;
  IsEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isEventJoin = IsEventJoin;
  if ( !Instance )
    goto LABEL_301;
  this->fields.isLeave = UserServantEntity__IsLeave((UserServantEntity_o *)Instance, 0);
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1;
  v217 = PartyServantListViewItem__ChkQuestRestriction(this, v216);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isQuestRestriction = v217;
  if ( !Instance )
    goto LABEL_301;
  UniqueSvtRestriction_50190092 = UserServantEntity__getUniqueSvtRestriction_50190092(
                                    (UserServantEntity_o *)Instance,
                                    this->fields.questRestrictionInfo,
                                    v120,
                                    v192,
                                    this->fields.partyIndex,
                                    0);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = UniqueSvtRestriction_50190092;
  if ( !Instance )
    goto LABEL_301;
  IsUniqueIndividualityRestriction_50190496 = UserServantEntity__IsUniqueIndividualityRestriction_50190496(
                                                (UserServantEntity_o *)Instance,
                                                this->fields.questRestrictionInfo,
                                                v120,
                                                v192,
                                                this->fields.partyIndex,
                                                0);
  v221 = this->fields.questRestrictionInfo;
  this->fields.isFatigureRecover = 0;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_50190496;
  this->fields.fatigureTime = -1;
  if ( !v221 || !v221->fields.isFatigure )
    goto LABEL_167;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_301;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
  if ( !*p_questRestrictionInfo )
    goto LABEL_301;
  v222 = (UserEventServantFatigueMaster_o *)Instance;
  eventId = (*p_questRestrictionInfo)->fields.eventId;
  Instance = PartyServantListViewItem__get_BaseServantId(this, (const MethodInfo *)NotSamePartyKey);
  if ( !v222 )
    goto LABEL_301;
  FatigueInfo = UserEventServantFatigueMaster__GetFatigueInfo(
                  v222,
                  &recoverAt,
                  &this->fields.isFatigureRecover,
                  eventId,
                  Instance,
                  0);
  v192 = numa;
  if ( FatigueInfo )
  {
    v226 = recoverAt;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v220, v225);
    if ( v226 > NetworkManager__getTime(0) )
      this->fields.fatigureTime = recoverAt;
  }
LABEL_167:
  AllOutBattleAlreadyUsed = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v220);
  v230 = this->fields.questRestrictionInfo;
  this->fields._IsAllOutBattle_k__BackingField = AllOutBattleAlreadyUsed;
  if ( v230 && v230->fields.isDataLostBattle )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v228, v229);
    v232 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, NotSamePartyKey, v231);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    Instance = (int64_t)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, NotSamePartyKey, v231);
      Instance = (int64_t)NetworkManager_TypeInfo;
    }
    if ( !*p_questRestrictionInfo || !v232 )
      goto LABEL_301;
    Instance = UserEventDataLostMaster__TryGetEntity(
                 (UserEventDataLostMaster_o *)v232,
                 &entity,
                 *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                 (*p_questRestrictionInfo)->fields.dataLostBattleId,
                 0);
    if ( (Instance & 1) == 0 )
      goto LABEL_191;
    v234 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_301;
    v235 = *(_QWORD *)&v234->fields.svtId.fields.currentCryptoKey;
    v236 = *(_QWORD *)&v234->fields.svtId.fields.fakeValue;
    v237 = entity;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, NotSamePartyKey, v233);
    *(_QWORD *)&v383.fields.currentCryptoKey = v235;
    *(_QWORD *)&v383.fields.fakeValue = v236;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v383, 0);
    if ( !v237 )
      goto LABEL_301;
    Instance = UserEventDataLostEntity__IsRestart(v237, Instance, 0);
    v239 = entity;
    v240 = *p_userServantEntity;
    if ( (Instance & 1) != 0 )
    {
      if ( v240 )
      {
        v241 = *(_QWORD *)&v240->fields.svtId.fields.currentCryptoKey;
        v242 = *(_QWORD *)&v240->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, NotSamePartyKey, v238);
        *(_QWORD *)&v384.fields.currentCryptoKey = v241;
        *(_QWORD *)&v384.fields.fakeValue = v242;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v384, 0);
        if ( v239 )
        {
          v120 = partyItem;
          this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(v239, Instance, 0);
          goto LABEL_191;
        }
      }
      goto LABEL_301;
    }
    if ( !v240 )
      goto LABEL_301;
    v325 = *(_QWORD *)&v240->fields.svtId.fields.currentCryptoKey;
    v326 = *(_QWORD *)&v240->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, NotSamePartyKey, v238);
    *(_QWORD *)&v391.fields.currentCryptoKey = v325;
    *(_QWORD *)&v391.fields.fakeValue = v326;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v391, 0);
    if ( !v239 )
      goto LABEL_301;
    v120 = partyItem;
    if ( UserEventDataLostEntity__IsDataLost(v239, Instance, 0) )
      this->fields._IsDataLost_k__BackingField = 1;
  }
  else
  {
    this->fields._IsDataLost_k__BackingField = 0;
    this->fields._TimesToRestart_k__BackingField = -1;
  }
LABEL_191:
  if ( *p_questRestrictionInfo )
    v243 = (*p_questRestrictionInfo)->fields.eventId;
  else
    v243 = -1;
  if ( !this->fields.isBase )
  {
    LODWORD(partyIndex) = this->fields.partyIndex;
    if ( (partyIndex & 0x80000000) == 0 )
      goto LABEL_214;
  }
  Instance = (int64_t)PartyListViewItem__GetMember(v120, v192, 0);
  if ( !Instance )
    goto LABEL_301;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      *(_QWORD *)&EquipSvtId.fields.fakeValue,
      v248);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(EquipSvtId, 0) >= 1 )
  {
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v252 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_301;
    v253 = Instance;
    v254 = *(_QWORD *)&v252->fields.svtId.fields.currentCryptoKey;
    v255 = *(_QWORD *)&v252->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, NotSamePartyKey, v251);
    *(_QWORD *)&v385.fields.currentCryptoKey = v254;
    *(_QWORD *)&v385.fields.fakeValue = v255;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v385, 0);
    if ( !*p_userServantEntity )
      goto LABEL_301;
    v256 = Instance;
    Rarity = UserServantEntity__getRarity(*p_userServantEntity, 0);
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, numa, 0);
    if ( !Instance )
      goto LABEL_301;
    v386 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v386, 0);
    if ( !v253 )
      goto LABEL_301;
    p_skillName = (System_String_o **)&v364;
    p_actMaxRarity = &v363;
    v261 = v256;
    v262 = Rarity;
    goto LABEL_225;
  }
  partyIndex = (unsigned int)this->fields.partyIndex;
  v120 = partyItem;
  if ( (partyIndex & 0x80000000) == 0 )
  {
LABEL_214:
    Instance = (int64_t)PartyListViewItem__GetMember(v120, partyIndex, 0);
    if ( !Instance )
      goto LABEL_301;
    v265 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        *(_QWORD *)&v265.fields.fakeValue,
        v264);
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v265, 0) >= 1 )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v267 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_301;
      v268 = Instance;
      v269 = *(_QWORD *)&v267->fields.svtId.fields.currentCryptoKey;
      v270 = *(_QWORD *)&v267->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, NotSamePartyKey, v266);
      *(_QWORD *)&v387.fields.currentCryptoKey = v269;
      *(_QWORD *)&v387.fields.fakeValue = v270;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v387, 0);
      if ( !*p_userServantEntity )
        goto LABEL_301;
      v271 = Instance;
      v272 = UserServantEntity__getRarity(*p_userServantEntity, 0);
      Instance = (int64_t)PartyListViewItem__GetMember(partyItem, this->fields.partyIndex, 0);
      if ( !Instance )
        goto LABEL_301;
      v388 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0);
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v388, 0);
      if ( !v268 )
        goto LABEL_301;
      p_skillName = &skillName;
      p_actMaxRarity = &actMaxRarity;
      v261 = v271;
      v262 = v272;
LABEL_225:
      this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                       (PartyOrganizationUtility_o *)Instance,
                                       p_skillName,
                                       p_actMaxRarity,
                                       v261,
                                       v262,
                                       Instance,
                                       v243,
                                       v258);
    }
  }
  v273 = this->fields.questRestrictionInfo;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  this->fields._SvtPointRank_k__BackingField = 0;
  this->fields._SvtPoint_k__BackingField = 0;
  if ( v273 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, partyIndex, v250);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Instance )
      goto LABEL_301;
    v274 = (EventServantPointRankMaster_o *)Instance;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v243, 0) )
    {
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v275, v276);
      Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v278 = *p_userServantEntity;
      if ( *p_userServantEntity )
      {
        v279 = (UserEventServantPointMaster_o *)Instance;
        v280 = *(_OWORD *)&v278->fields.userId.fields.fakeValue;
        *(_OWORD *)v352 = *(_OWORD *)&v278->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&v352[16] = v280;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, NotSamePartyKey, v277);
        v345 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v352;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v345, 0);
        if ( *p_userServantEntity )
        {
          v281 = Instance;
          Instance = UserServantEntity__getSvtId(*p_userServantEntity, 0);
          if ( v279 )
          {
            p_SvtPoint_k__BackingField = &this->fields._SvtPoint_k__BackingField;
            if ( UserEventServantPointMaster__TryGetEntity(v279, &v360, v281, v243, Instance, 0) )
            {
              Instance = (int64_t)v360;
              if ( !v360 )
                goto LABEL_301;
              *p_SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v360, 0);
            }
            Instance = (int64_t)*p_userServantEntity;
            if ( *p_userServantEntity )
            {
              v283 = *p_SvtPoint_k__BackingField;
              SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0);
              EnableEntity = EventServantPointRankMaster__GetEnableEntity(v274, v243, v283, SvtId, 0);
              if ( EnableEntity )
                this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
              goto LABEL_244;
            }
          }
        }
      }
LABEL_301:
      sub_2213CDC(Instance, NotSamePartyKey);
    }
  }
LABEL_244:
  v286 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
  System_Collections_Generic_List_ValueTuple_int__int__Int32Enum_____ctor(
    v286,
    (const MethodInfo_44010E4 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
  if ( *p_questRestrictionInfo )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_301;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance || !MasterData_object )
      goto LABEL_301;
    Instance = (int64_t)EventCampaignMaster__GetFriendshipUpCampaigns(
                          (EventCampaignMaster_o *)MasterData_object,
                          *(_QWORD *)(Instance + 136),
                          0);
    if ( Instance )
    {
      v288 = (System_Collections_Generic_List_object__o *)Instance;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_301;
      v289 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventQuestMaster___);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v352,
        v288,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
      v359 = *(System_Collections_Generic_List_Enumerator_object__o *)v352;
      *(_QWORD *)v352 = 0;
      *(_QWORD *)&v352[8] = &v359;
      while ( 1 )
      {
        v290 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v359,
                 (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v290 )
          break;
        current = (EventCampaignEntity_o *)v359.fields._current;
        if ( !v359.fields._current )
          sub_2213CDC(v290, v291);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v359.fields._current[2].monitor;
        if ( monitor && monitor[1].monitor )
        {
          v295 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
          v296 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v291, v292);
          *(_QWORD *)&v389.fields.currentCryptoKey = v295;
          *(_QWORD *)&v389.fields.fakeValue = v296;
          v297 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v389, 0);
          v290 = System_Linq_Enumerable__Contains_int_(
                   monitor,
                   v297,
                   (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( !v290 )
            continue;
        }
        if ( !*p_questRestrictionInfo )
          sub_2213CDC(v290, v291);
        if ( !v289 )
          sub_2213CDC(v290, v291);
        if ( !EventQuestMaster__IsEventNotIncluded(
                (EventQuestMaster_o *)v289,
                current->fields.eventId,
                (*p_questRestrictionInfo)->fields.questId,
                (*p_questRestrictionInfo)->fields.questPhase,
                7,
                0,
                0) )
        {
          v298 = current->fields.eventId;
          FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0);
          DWORD2(item[0]) = 0;
          calcType = current->fields.calcType;
          v301 = FriendshipBonusValue;
          *(_QWORD *)&item[0] = 0;
          *(_QWORD *)&v373.fields.Item1 = item;
          v373.fields.Item3 = v298;
          System_ValueTuple_int__int__Int32Enum____ctor(
            v373,
            v301,
            calcType,
            Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__,
            v302);
          if ( !v286
            || (v304 = *(System_ValueTuple_int__int__Int32Enum__o *)item,
                v305 = v286->fields._items,
                v306 = Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__,
                ++v286->fields._version,
                !v305) )
          {
            sub_2213CDC(v303, *(_QWORD *)&v304.fields.Item1);
          }
          v307 = v286->fields._size;
          if ( (unsigned int)v307 >= LODWORD(v305->max_length) )
          {
            System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____AddWithResize(
              v286,
              v304,
              *(const MethodInfo_44019A0 **)(*(_QWORD *)(v306[4] + 192LL) + 112LL));
          }
          else
          {
            v286->fields._size = v307 + 1;
            *((System_ValueTuple_int__int__Int32Enum__o *)v305->m_Items + v307) = v304;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v359,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    }
  }
  if ( !v286 )
    goto LABEL_301;
  v308 = (struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *)System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____ToArray(
                                                                                    v286,
                                                                                    (const MethodInfo_4403518 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
  this->fields._FriendshipUpValTuple_k__BackingField = v308;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (int32_t)v308,
    v309,
    v310,
    v311,
    v312,
    v313,
    v314);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_301;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_301;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_301;
  this->fields.priority = *(_DWORD *)(Instance + 52);
  PartyServantListViewItem__InitAfterSecondSort(this, (const MethodInfo *)NotSamePartyKey);
  v317 = BalanceConfig_TypeInfo;
  adjustHp = userServantEntity->fields.adjustHp;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v315, v316);
    v317 = BalanceConfig_TypeInfo;
  }
  static_fields = v317->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * adjustHp;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * userServantEntity->fields.adjustAtk;
  UserServantEntity__GetAdjustMaxData(
    userServantEntity,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Instance = 0;
  if ( questRestrictionInfo && (this->fields.partyIndex & 0x80000000) == 0 )
  {
    v322 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v321 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, NotSamePartyKey, v320);
    *(_QWORD *)&v390.fields.currentCryptoKey = v322;
    *(_QWORD *)&v390.fields.fakeValue = v321;
    v323 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v390, 0);
    Instance = QuestRestrictionInfo__GetOverwriteTempTreasureDeviceLv(questRestrictionInfo, v323, 0);
  }
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = Instance;
  this->fields.amountSortValue = -1;
  if ( !iconLabelInfo1 )
    goto LABEL_301;
  IconLabelInfo__Clear(iconLabelInfo1, 0);
  Instance = (int64_t)this->fields.iconLabelInfo2;
  if ( !Instance )
    goto LABEL_301;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (int64_t)this->fields.iconLabelInfo3;
  if ( !Instance )
    goto LABEL_301;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void PartyServantListViewItem___ctor_41288904(
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
  IconLabelInfo_o *v16; // x27
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  IconLabelInfo_o *v23; // x27
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  IconLabelInfo_o *v30; // x27
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int64_t Instance; // x0
  const MethodInfo *v38; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct UserServantEntity_o *v53; // x8
  struct UserServantEntity_o **p_userServantEntity; // x24
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  struct ServantEntity_o *ServantEntity; // x0
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  struct ServantEntity_o *BaseServantEntity; // x0
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  __int64 v81; // x2
  struct UserServantEntity_o *v82; // x8
  UserServantCollectionMaster_o *v83; // x25
  __int128 v84; // q1
  int64_t v85; // x26
  const MethodInfo *v86; // x1
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  __int64 v88; // x1
  __int64 v89; // x2
  int32_t v90; // w25
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  System_String_o *v103; // x2
  System_String_o *v104; // x3
  int32_t v105; // w4
  int32_t v106; // w5
  bool v107; // w6
  bool v108; // w7
  System_Collections_Generic_List_object__o *v109; // x26
  System_String_o *v110; // x2
  System_String_o *v111; // x3
  int32_t v112; // w4
  int32_t v113; // w5
  bool v114; // w6
  bool v115; // w7
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  char v117; // w26
  int32_t v118; // w25
  __int64 v119; // x2
  PartyOrganizationListViewItem_o *v120; // x27
  struct UserServantEntity_o *v121; // x8
  __int128 v122; // q0
  __int128 v123; // q1
  int v124; // w8
  struct UserServantEntity_o *v125; // x8
  __int128 v126; // q1
  int64_t v127; // x28
  __int64 v128; // x2
  struct ServantEntity_o *BaseServantEntity_k__BackingField; // x8
  __int64 v130; // x28
  __int64 v131; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v132; // x8
  int v133; // w28
  __int64 v134; // x2
  int v135; // w28
  struct ServantEntity_o *v136; // x8
  __int64 v137; // x27
  __int64 v138; // x28
  struct ServantEntity_o *v139; // x8
  int32_t v140; // w27
  __int64 v141; // x1
  __int64 v142; // x2
  int32_t v143; // w28
  System_Int64_array *EquipList; // x0
  const MethodInfo *v145; // x2
  const MethodInfo *v146; // x1
  const MethodInfo *v147; // x1
  bool IsLock; // w8
  bool IsChoice; // w8
  bool IsEventJoin; // w8
  const MethodInfo *v151; // x1
  bool v152; // w8
  bool UniqueSvtRestriction_50190092; // w8
  bool IsUniqueIndividualityRestriction_50190496; // w0
  const MethodInfo *v155; // x1
  struct QuestRestrictionInfo_o *v156; // x8
  UserEventServantFatigueMaster_o *v157; // x22
  int32_t eventId; // w23
  __int64 v159; // x2
  int64_t v160; // x20
  bool AllOutBattleAlreadyUsed; // w0
  const MethodInfo_47A29F8 *v162; // x8
  __int64 v163; // x1
  __int64 v164; // x2
  BalanceConfig_c *v165; // x0
  int32_t adjustHp; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+10h] [xbp-100h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v170; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v171; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v172; // [xsp+60h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v173; // [xsp+80h] [xbp-90h]
  int64_t recoverAt; // [xsp+A0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+ACh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v177; // 0:x0.16

  if ( (byte_596C20B & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CommonRestrictionMaster_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C20B = 1;
  }
  friendshipRank = 0;
  recoverAt = 0;
  v16 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0);
  this->fields.iconLabelInfo1 = v16;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo1,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v23, 0);
  this->fields.iconLabelInfo2 = v23;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo2,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v30, 0);
  this->fields.iconLabelInfo3 = v30;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.iconLabelInfo3,
    (int32_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_50;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, num, 0);
  this->fields.baseItem = MemberItem;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseItem,
    (int32_t)MemberItem,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  baseItem = this->fields.baseItem;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_50;
  v53 = baseItem->fields.userServantEntity;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  this->fields.isSelectEmpty = v53 == 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  if ( !userServantEntity )
    goto LABEL_50;
  ServantEntity = UserServantEntity__GetServantEntity(userServantEntity, -1, 0);
  this->fields._ServantEntity_k__BackingField = ServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantEntity_k__BackingField,
    (int32_t)ServantEntity,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  BaseServantEntity = UserServantEntity__get_BaseServantEntity(userServantEntity, 0);
  this->fields._BaseServantEntity_k__BackingField = BaseServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BaseServantEntity_k__BackingField,
    (int32_t)BaseServantEntity,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v82 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_50;
  v83 = (UserServantCollectionMaster_o *)Instance;
  v84 = *(_OWORD *)&v82->fields.userId.fields.fakeValue;
  *(_OWORD *)&v173.fields.currentCryptoKey = *(_OWORD *)&v82->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v173.fields.fakeValue = v84;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v38, v81);
  v172 = v173;
  v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v172, 0);
  Instance = PartyServantListViewItem__get_BaseServantId(this, v86);
  if ( !v83 )
    goto LABEL_50;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v83, v85, Instance, 0);
  ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
  if ( !ServantEntity_k__BackingField )
    goto LABEL_50;
  this->fields.classId = ServantEntity_k__BackingField->fields.classId;
  if ( !Instance )
    goto LABEL_50;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &friendshipRank,
    &this->fields.friendshipMax,
    0);
  v90 = friendshipRank;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v88, v89);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v90, 0);
  this->fields.isBase = 0;
  this->fields.partyIndex = -1;
  this->fields.isSame = 0;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipUserServantEntity, 0, v91, v92, v93, v94, v95, v96);
  this->fields.equipServantEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipServantEntity, 0, v97, v98, v99, v100, v101, v102);
  this->fields.equipIdList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList, 0, v103, v104, v105, v106, v107, v108);
  v109 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v109,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v109;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipServantEntityList,
    (int32_t)v109,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  Instance = (int64_t)this->fields._BaseServantEntity_k__BackingField;
  if ( !Instance )
    goto LABEL_50;
  Instance = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0);
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_50;
  v117 = Instance;
  v118 = 0;
  while ( v118 < SLODWORD(memberItemList->max_length) )
  {
    Instance = (int64_t)WarBoardPartyListViewItem__GetMemberItem(partyItem, v118, 0);
    if ( !Instance )
      goto LABEL_50;
    v120 = (PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 120) )
    {
      v121 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_50;
      v122 = *(_OWORD *)&v121->fields.id.fields.currentCryptoKey;
      v123 = *(_OWORD *)&v121->fields.id.fields.fakeValue;
      v124 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v173.fields.currentCryptoKey = v122;
      *(_OWORD *)&v173.fields.fakeValue = v123;
      if ( !v124 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v38, v119);
      v171 = v173;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v171, 0);
      v125 = v120->fields.userServantEntity;
      if ( !v125 )
        goto LABEL_50;
      v126 = *(_OWORD *)&v125->fields.id.fields.fakeValue;
      v127 = Instance;
      *(_OWORD *)&v170.fields.currentCryptoKey = *(_OWORD *)&v125->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v170.fields.fakeValue = v126;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v170, 0);
      if ( v127 == Instance )
      {
        this->fields.isSame = 0;
        this->fields.isBase = num == v118;
        this->fields.partyIndex = v118;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v120, 0);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v145);
        break;
      }
      if ( num != v118 )
      {
        BaseServantEntity_k__BackingField = this->fields._BaseServantEntity_k__BackingField;
        if ( !BaseServantEntity_k__BackingField )
          goto LABEL_50;
        v130 = *(_QWORD *)&BaseServantEntity_k__BackingField->fields.baseSvtId.fields.currentCryptoKey;
        v131 = *(_QWORD *)&BaseServantEntity_k__BackingField->fields.baseSvtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v38, v128);
        *(_QWORD *)&v176.fields.currentCryptoKey = v130;
        *(_QWORD *)&v176.fields.fakeValue = v131;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v176, 0);
        v132 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v120->fields._BaseServantEntity_k__BackingField;
        if ( !v132 )
          goto LABEL_50;
        v133 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v132[2], 0);
        if ( v133 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else
        {
          if ( (v117 & 1) == 0 )
            goto LABEL_40;
          Instance = (int64_t)v120->fields._BaseServantEntity_k__BackingField;
          if ( !Instance )
            goto LABEL_50;
          Instance = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0);
          if ( (Instance & 1) == 0 )
            goto LABEL_40;
          Instance = (int64_t)this->fields._BaseServantEntity_k__BackingField;
          if ( !Instance )
            goto LABEL_50;
          Instance = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0);
          if ( !v120->fields._BaseServantEntity_k__BackingField )
            goto LABEL_50;
          v135 = Instance;
          Instance = ServantEntity__GetNotSamePartyKey(v120->fields._BaseServantEntity_k__BackingField, 0);
          if ( v135 == (_DWORD)Instance )
          {
            this->fields.isNotSameParty = 1;
          }
          else
          {
LABEL_40:
            if ( this->fields.commonRestrictionId == -1 )
            {
              v136 = v120->fields._BaseServantEntity_k__BackingField;
              if ( !v136 )
                goto LABEL_50;
              v137 = *(_QWORD *)&v136->fields.baseSvtId.fields.currentCryptoKey;
              v138 = *(_QWORD *)&v136->fields.baseSvtId.fields.fakeValue;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v38, v134);
              *(_QWORD *)&v177.fields.currentCryptoKey = v137;
              *(_QWORD *)&v177.fields.fakeValue = v138;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v177, 0);
              v139 = this->fields._BaseServantEntity_k__BackingField;
              if ( !v139 )
                goto LABEL_50;
              v140 = Instance;
              v143 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v139->fields.baseSvtId, 0);
              if ( !*(&CommonRestrictionMaster_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo, v141, v142);
              Instance = CommonRestrictionMaster__GetIncludedRestrictionIds(v140, v143, 0);
              if ( (Instance & 0x80000000) == 0 )
                this->fields.commonRestrictionId = Instance;
            }
          }
        }
      }
    }
    memberItemList = partyItem->fields.memberItemList;
    ++v118;
    if ( !memberItemList )
      goto LABEL_50;
  }
  PartyServantListViewItem__CheckConvertOverwriteImage(this, v38);
  PartyServantListViewItem__ModifyLimitCount(this, v146);
  PartyServantListViewItem__ModifyOverwriteStatus(this, v147);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.updateCategoryIdList = 1;
  if ( !Instance )
    goto LABEL_50;
  IsLock = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isLock = IsLock;
  if ( !Instance )
    goto LABEL_50;
  IsChoice = UserServantEntity__IsChoice((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isChoice = IsChoice;
  this->fields.isInvalidRarity = 0;
  *(_DWORD *)&this->fields.isLockMode = 0;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_50;
  IsEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isEventJoin = IsEventJoin;
  if ( !Instance )
    goto LABEL_50;
  this->fields.isLeave = UserServantEntity__IsLeave((UserServantEntity_o *)Instance, 0);
  this->fields.isEventUpVal = 0;
  *(_QWORD *)&this->fields.bonusKind = 1;
  v152 = PartyServantListViewItem__ChkQuestRestriction(this, v151);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isQuestRestriction = v152;
  if ( !Instance )
    goto LABEL_50;
  UniqueSvtRestriction_50190092 = UserServantEntity__getUniqueSvtRestriction_50190092(
                                    (UserServantEntity_o *)Instance,
                                    this->fields.questRestrictionInfo,
                                    0,
                                    num,
                                    this->fields.partyIndex,
                                    0);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = UniqueSvtRestriction_50190092;
  if ( !Instance )
    goto LABEL_50;
  IsUniqueIndividualityRestriction_50190496 = UserServantEntity__IsUniqueIndividualityRestriction_50190496(
                                                (UserServantEntity_o *)Instance,
                                                this->fields.questRestrictionInfo,
                                                0,
                                                num,
                                                this->fields.partyIndex,
                                                0);
  v156 = this->fields.questRestrictionInfo;
  this->fields.isFatigureRecover = 0;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_50190496;
  this->fields.fatigureTime = -1;
  if ( v156 && v156->fields.isFatigure )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !*p_questRestrictionInfo )
      goto LABEL_50;
    v157 = (UserEventServantFatigueMaster_o *)Instance;
    eventId = (*p_questRestrictionInfo)->fields.eventId;
    Instance = PartyServantListViewItem__get_BaseServantId(this, v38);
    if ( !v157 )
      goto LABEL_50;
    if ( UserEventServantFatigueMaster__GetFatigueInfo(
           v157,
           &recoverAt,
           &this->fields.isFatigureRecover,
           eventId,
           Instance,
           0) )
    {
      v160 = recoverAt;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v155, v159);
      if ( v160 > NetworkManager__getTime(0) )
        this->fields.fatigureTime = recoverAt;
    }
  }
  AllOutBattleAlreadyUsed = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v155);
  v162 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields._IsAllOutBattle_k__BackingField = AllOutBattleAlreadyUsed;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v162);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_50;
  this->fields.priority = *(_DWORD *)(Instance + 52);
  PartyServantListViewItem__InitAfterSecondSort(this, v38);
  v165 = BalanceConfig_TypeInfo;
  adjustHp = userServantEntity->fields.adjustHp;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v163, v164);
    v165 = BalanceConfig_TypeInfo;
  }
  static_fields = v165->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * adjustHp;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * userServantEntity->fields.adjustAtk;
  UserServantEntity__GetAdjustMaxData(
    userServantEntity,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.amountSortValue = -1;
  if ( !Instance
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0), (Instance = (int64_t)this->fields.iconLabelInfo2) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0), (Instance = (int64_t)this->fields.iconLabelInfo3) == 0) )
  {
LABEL_50:
    sub_2213CDC(Instance, v38);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void PartyServantListViewItem__CheckConvertOverwriteImage(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyServantListViewItem_o *v3; // x19
  int32_t partyIndex; // w8
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  __int64 v7; // x21
  __int64 v8; // x22
  int32_t v9; // w0
  __int64 v10; // x2
  struct ServantEntity_o *v11; // x8
  __int64 v12; // x21
  __int64 v13; // x22
  QuestRestrictionInfo_o *v14; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v3 = this;
  if ( (byte_596C20F & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C20F = 1;
  }
  partyIndex = v3->fields.partyIndex;
  v3->fields.isConvertOverwriteImage = 0;
  if ( (partyIndex & 0x80000000) == 0 || v3->fields._OrganizedWave_k__BackingField >= 1 )
  {
    questRestrictionInfo = v3->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      ServantEntity_k__BackingField = v3->fields._ServantEntity_k__BackingField;
      if ( !ServantEntity_k__BackingField )
        goto LABEL_17;
      v7 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
      v8 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
      *(_QWORD *)&v15.fields.currentCryptoKey = v7;
      *(_QWORD *)&v15.fields.fakeValue = v8;
      v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v15, 0);
      this = (PartyServantListViewItem_o *)QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v9, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v11 = v3->fields._ServantEntity_k__BackingField;
        if ( v11 )
        {
          v12 = *(_QWORD *)&v11->fields.id.fields.currentCryptoKey;
          v13 = *(_QWORD *)&v11->fields.id.fields.fakeValue;
          v14 = v3->fields.questRestrictionInfo;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v10);
          *(_QWORD *)&v16.fields.currentCryptoKey = v12;
          *(_QWORD *)&v16.fields.fakeValue = v13;
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                 v16,
                                                 0);
          if ( v14 )
          {
            if ( !QuestRestrictionInfo__UnapplyOverwriteLimitCountAtServantStatus(v14, (int32_t)this, 0, 0) )
              v3->fields.isConvertOverwriteImage = 1;
            return;
          }
        }
LABEL_17:
        sub_2213CDC(this, method);
      }
    }
  }
}


bool PartyServantListViewItem__ChkQuestRestriction(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  QuestRestrictionInfo_o *BaseServantId; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  int32_t v7; // w20
  __int64 v8; // x22
  __int64 v9; // x23
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v12; // w22
  struct UserServantEntity_o *v13; // x8
  struct PartyOrganizationListViewItem_o *baseItem; // x9
  bool v15; // w23
  const MethodInfo *v16; // x1
  QuestRestrictionInfo_o *v17; // x21
  __int64 v18; // x2
  struct UserServantEntity_o *v19; // x8
  int32_t v20; // w22
  __int64 v21; // x23
  __int64 v22; // x24
  int32_t v23; // w23
  const MethodInfo *v24; // x1
  QuestRestrictionInfo_o *v25; // x21
  struct PartyOrganizationListViewItem_o *v26; // x8
  __int64 v27; // x2
  struct PartyOrganizationListViewItem_o *v28; // x8
  struct ServantEntity_o *v29; // x8
  __int64 v30; // x22
  __int64 v31; // x23
  QuestRestrictionInfo_o *v32; // x21
  struct UserServantEntity_o *v33; // x8
  int32_t v34; // w22
  struct PartyOrganizationListViewItem_o *v35; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_596C20C & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C20C = 1;
  }
  if ( !this->fields.questRestrictionInfo )
    return 0;
  BaseServantId = (QuestRestrictionInfo_o *)LimitCountUtility__ConvertLimitCountStageIndexOneToZero(
                                              this->fields.dispLimitCountStage,
                                              0);
  ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
  if ( !ServantEntity_k__BackingField )
    goto LABEL_35;
  v7 = (int)BaseServantId;
  v8 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  v9 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.fakeValue;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
  *(_QWORD *)&v37.fields.currentCryptoKey = v8;
  *(_QWORD *)&v37.fields.fakeValue = v9;
  BaseServantId = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v37, 0);
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_35;
  v12 = (int)BaseServantId;
  BaseServantId = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                              userServantEntity->fields.limitCount,
                                              0);
  v13 = this->fields.userServantEntity;
  if ( !v13 )
    goto LABEL_35;
  baseItem = this->fields.baseItem;
  if ( !baseItem || !questRestrictionInfo )
    goto LABEL_35;
  v15 = 1;
  if ( !QuestRestrictionInfo__IsRestriction_50437612(
          questRestrictionInfo,
          &this->fields.isQuestRestrictionWhole,
          v12,
          (int32_t)BaseServantId,
          v7,
          this->fields.rarityId,
          v13->fields.lv,
          baseItem->fields._InitPos_k__BackingField,
          1,
          0) )
  {
    BaseServantId = this->fields.questRestrictionInfo;
    if ( !BaseServantId )
      goto LABEL_35;
    if ( QuestRestrictionInfo__IsSupportOnly(BaseServantId, 0) )
      return 1;
    v17 = this->fields.questRestrictionInfo;
    BaseServantId = (QuestRestrictionInfo_o *)PartyServantListViewItem__get_BaseServantId(this, v16);
    v19 = this->fields.userServantEntity;
    if ( !v19 )
      goto LABEL_35;
    v20 = (int)BaseServantId;
    v21 = *(_QWORD *)&v19->fields.limitCount.fields.currentCryptoKey;
    v22 = *(_QWORD *)&v19->fields.limitCount.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v18);
    *(_QWORD *)&v38.fields.currentCryptoKey = v21;
    *(_QWORD *)&v38.fields.fakeValue = v22;
    BaseServantId = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                v38,
                                                0);
    if ( !this->fields.userServantEntity )
      goto LABEL_35;
    v23 = (int)BaseServantId;
    BaseServantId = (QuestRestrictionInfo_o *)UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0);
    if ( !v17 )
      goto LABEL_35;
    if ( QuestRestrictionInfo__GetFixedMyServantSingleRestriction(
           v17,
           v20,
           v23,
           (int32_t)BaseServantId,
           this->fields.memberIndex,
           0) )
    {
      return 1;
    }
    v25 = this->fields.questRestrictionInfo;
    BaseServantId = (QuestRestrictionInfo_o *)PartyServantListViewItem__get_BaseServantId(this, v24);
    v26 = this->fields.baseItem;
    if ( !v26 || !v25 )
      goto LABEL_35;
    BaseServantId = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsServantNumAndFixedServantPositionRestriction(
                                                v25,
                                                (int32_t)BaseServantId,
                                                v26->fields._InitPos_k__BackingField,
                                                0);
    if ( ((unsigned __int8)BaseServantId & 1) != 0 )
      return 1;
    v28 = this->fields.baseItem;
    if ( v28 )
    {
      if ( !v28->fields.isMyServantOrNpcRestriction )
        return 0;
      v29 = this->fields._ServantEntity_k__BackingField;
      if ( v29 )
      {
        v30 = *(_QWORD *)&v29->fields.id.fields.currentCryptoKey;
        v31 = *(_QWORD *)&v29->fields.id.fields.fakeValue;
        v32 = this->fields.questRestrictionInfo;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v27);
        *(_QWORD *)&v39.fields.currentCryptoKey = v30;
        *(_QWORD *)&v39.fields.fakeValue = v31;
        BaseServantId = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                    v39,
                                                    0);
        v33 = this->fields.userServantEntity;
        if ( v33 )
        {
          v34 = (int)BaseServantId;
          BaseServantId = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                      v33->fields.limitCount,
                                                      0);
          v35 = this->fields.baseItem;
          if ( v35 )
          {
            if ( v32 )
              return QuestRestrictionInfo__IsRestrictionServantIndividuality(
                       v32,
                       v34,
                       (int32_t)BaseServantId,
                       v7,
                       v35->fields._InitPos_k__BackingField,
                       0,
                       0);
          }
        }
      }
    }
LABEL_35:
    sub_2213CDC(BaseServantId, v4);
  }
  return v15;
}


void PartyServantListViewItem__ClearFatigure(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  this->fields.fatigureTime = -1;
}


void PartyServantListViewItem__Finalize(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


void PartyServantListViewItem__ForceConvertOverwriteImage(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyServantListViewItem_o *v3; // x19
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w0
  const MethodInfo *v9; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v3 = this;
  if ( (byte_596C20E & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C20E = 1;
  }
  questRestrictionInfo = v3->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    ServantEntity_k__BackingField = v3->fields._ServantEntity_k__BackingField;
    if ( !ServantEntity_k__BackingField )
      sub_2213CDC(this, method);
    v6 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
    v7 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    *(_QWORD *)&v10.fields.currentCryptoKey = v6;
    *(_QWORD *)&v10.fields.fakeValue = v7;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v10, 0);
    if ( QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v8, 0) )
      v3->fields.isConvertOverwriteImage = 1;
  }
  PartyServantListViewItem__ModifyLimitCount(v3, method);
  PartyServantListViewItem__ModifyOverwriteStatus(v3, v9);
}


bool PartyServantListViewItem__GetAllOutBattleAlreadyUsed(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t allOutBattleGroupNo; // w20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v8; // x1
  struct QuestRestrictionInfo_o *v9; // x8

  if ( (byte_596C216 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C216 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = questRestrictionInfo->fields.allOutBattleGroupNo;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___),
        Instance = (Il2CppObject *)PartyServantListViewItem__get_BaseServantId(this, v8),
        (v9 = this->fields.questRestrictionInfo) == 0)
    || !MasterData_object )
  {
    sub_2213CDC(Instance, v6);
  }
  return UserEventAlloutBattleMaster__IsAlreadyUsedServant(
           (UserEventAlloutBattleMaster_o *)MasterData_object,
           (int32_t)Instance,
           v9->fields.eventId,
           allOutBattleGroupNo,
           0);
}


System_Int64_array *PartyServantListViewItem__GetEquipList(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.equipIdList;
}


EventUpValSetupInfo_o *PartyServantListViewItem__GetEventUpValSetupInfo(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.setupInfo;
}


PartyOrganizationListViewItem_o *PartyServantListViewItem__GetPartyBaseItem(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.baseItem;
}


System_String_o *PartyServantListViewItem__GetRestrictionMessage(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t commonRestrictionId; // w19

  if ( (byte_596C215 & 1) == 0 )
  {
    sub_2213A60(&CommonRestrictionMaster_TypeInfo);
    byte_596C215 = 1;
  }
  commonRestrictionId = this->fields.commonRestrictionId;
  if ( commonRestrictionId < 0 )
    return 0;
  if ( !*(&CommonRestrictionMaster_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo, method, v2);
  return CommonRestrictionMaster__GetRestrictionMessageFromId(commonRestrictionId, 0);
}


void PartyServantListViewItem__InitAfterSecondSort(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyServantListViewItem_o *v3; // x19
  struct UserServantEntity_o *v4; // x9
  __int128 v5; // q1
  int v6; // w8
  struct ServantEntity_o *BaseServantEntity_k__BackingField; // x10
  struct UserServantEntity_o *userServantEntity; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_c *v9; // x0
  __int128 v10; // q1
  int v11; // w8
  struct UserServantEntity_o *v12; // x8
  __int128 v13; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+40h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+60h] [xbp-40h]

  v3 = this;
  if ( (byte_596C219 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596C219 = 1;
  }
  if ( !v3->fields.tutorialMode )
  {
    BaseServantEntity_k__BackingField = v3->fields._BaseServantEntity_k__BackingField;
    v3->fields.sortValue1B = v3->fields.priority;
    if ( BaseServantEntity_k__BackingField )
    {
      userServantEntity = v3->fields.userServantEntity;
      if ( userServantEntity )
      {
        v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo;
        v3->fields.sortValue2 = ((__int64)BaseServantEntity_k__BackingField->fields.collectionNo << 16)
                              | ((unsigned __int64)(unsigned int)v3->fields.rarityId << 48)
                              | userServantEntity->fields.lv;
        v10 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        v11 = *(&v9->_2.cctor_finished + 1);
        *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v17.fields.fakeValue = v10;
        if ( !v11 )
          j_il2cpp_runtime_class_init_0(v9, method, v2);
        v16 = v17;
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                               &v16,
                                               0);
        v12 = v3->fields.userServantEntity;
        v3->fields.sortValue2B = (int64_t)this;
        if ( v12 )
        {
          v13 = *(_OWORD *)&v12->fields.id.fields.fakeValue;
          *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&v12->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v15.fields.fakeValue = v13;
          v3->fields.sortValueLast = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v15, 0);
          return;
        }
      }
    }
LABEL_15:
    sub_2213CDC(this, method);
  }
  v4 = v3->fields.userServantEntity;
  v3->fields.sortValue1B = 0;
  if ( !v4 )
    goto LABEL_15;
  v5 = *(_OWORD *)&v4->fields.id.fields.fakeValue;
  v6 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&v4->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v5;
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
  v14 = v17;
  v3->fields.sortValue2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v14, 0);
  v3->fields.sortValue2B = 0;
}


bool PartyServantListViewItem__IsMatchFilter(
        PartyServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  __int64 ClassGroupFilterKindList; // x0
  __int64 v7; // x2
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  __int64 v10; // x2
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  __int64 v13; // x2
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w21
  UserServantEntity_o *userServantEntity; // x22
  __int64 v21; // x2
  _BOOL4 isChoice; // w8
  FilterKindList_c *v23; // x0
  ListViewSort_FilterKind_array *v24; // x21
  int32_t dispLimitCountStage; // w0
  int32_t v27; // w21
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v43; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v45; // w0

  if ( (byte_596C213 & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&ListViewSort_FilterKind___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_2213A60(&ServantEventBonusFilterController_TypeInfo);
    byte_596C213 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_67;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v8 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v7);
      v8 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v8->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v9, 0)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields._ServantEntity_k__BackingField, 0) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields._ServantEntity_k__BackingField, 0) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v10);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v11->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v13);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0)
    && !ListViewSort__IsMatchNPEffectFilter(sort, this->fields.userServantEntity, 0) )
  {
    return 0;
  }
  if ( !ListViewSort__CheckSvtEventBonusFilterDefaultAll(sort, -1, 0) )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
      eventId = questRestrictionInfo->fields.eventId;
    else
      eventId = -1;
    userServantEntity = this->fields.userServantEntity;
    if ( !*(&ServantEventBonusFilterController_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo, v16, v17);
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, sort, eventId, 0) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
  {
    if ( this->fields.userServantEntity && this->fields.updateCategoryIdList )
    {
      dispLimitCountStage = this->fields.dispLimitCountStage;
      this->fields.updateCategoryIdList = 0;
      ClassGroupFilterKindList = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(dispLimitCountStage, 0);
      if ( !this->fields.userServantEntity )
        goto LABEL_67;
      v27 = ClassGroupFilterKindList;
      SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(
                              this->fields.userServantEntity,
                              -1,
                              ClassGroupFilterKindList,
                              0);
      this->fields.skillCategoryIdList = SkillCategoryIdList;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.skillCategoryIdList,
        (int32_t)SkillCategoryIdList,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
      if ( !ClassGroupFilterKindList )
        goto LABEL_67;
      TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                       (UserServantEntity_o *)ClassGroupFilterKindList,
                                       0,
                                       v27,
                                       0);
      this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.tdCategoryIdList,
        (int32_t)TreasureDeviceCategoryIdList,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    ClassGroupFilterKindList = sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_68;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0);
    ClassGroupFilterKindList = sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_68:
      sub_2213CE4(ClassGroupFilterKindList);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v43 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0);
    v45 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
    if ( IsUnSelectedAllTargetFilters && v43 || !IsUnSelectedAllTargetFilters && !v43 )
    {
      if ( !IsMatchEffectCategory && !v45 )
        return 0;
    }
    else if ( IsUnSelectedAllTargetFilters )
    {
      if ( !v45 )
        return 0;
    }
    else if ( !IsMatchEffectCategory )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(
          sort,
          this->fields.userServantEntity,
          this->fields._ServantEntity_k__BackingField,
          0)
    || !ListViewSort__IsMatchServantSubAttriFilter(
          sort,
          this->fields.userServantEntity,
          this->fields._ServantEntity_k__BackingField,
          0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_2213B20(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_67:
    sub_2213CDC(ClassGroupFilterKindList, sort);
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_68;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    && ListViewSort__GetFilter(sort, 39, 0) )
  {
    isChoice = this->fields.isChoice;
    if ( this->fields.isSwapChoice )
      isChoice = !this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v23 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v21);
    v23 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v23->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v24 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v24, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v24, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarityId, 0);
}


bool PartyServantListViewItem__IsRestrictionActiveGrandBoard(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_o *baseItem; // x8

  baseItem = this->fields.baseItem;
  return baseItem && baseItem->fields.isRestrictionActiveGrandBoard;
}


bool PartyServantListViewItem__IsRestrictionGrandServant(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_o *baseItem; // x8

  baseItem = this->fields.baseItem;
  return baseItem && baseItem->fields.isRestrictionGrandServant;
}


void PartyServantListViewItem__ModifyChoiceItem(PartyServantListViewItem_o *this, const MethodInfo *method)
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


void PartyServantListViewItem__ModifyItem(
        PartyServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  UserServantEntity_o *IsLeave; // x0
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  __int64 v13; // x21
  __int64 v14; // x22
  struct ServantEntity_o *ServantEntity; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t dispLimitCountStage; // w23
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  __int64 v25; // x1
  __int64 v26; // x2
  struct ServantEntity_o *v27; // x8
  const MethodInfo *v28; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_596C20D & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C20D = 1;
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
  IsLeave = this->fields.userServantEntity;
  if ( !IsLeave )
    goto LABEL_13;
  IsLeave = (UserServantEntity_o *)UserServantEntity__IsLeave(IsLeave, 0);
  this->fields.isEventUpVal = 0;
  ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
  this->fields.isLeave = (unsigned __int8)IsLeave & 1;
  *(_QWORD *)&this->fields.bonusKind = 1;
  if ( !ServantEntity_k__BackingField || !userServantEntity )
    goto LABEL_13;
  v13 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  v14 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.fakeValue;
  ServantEntity = UserServantEntity__GetServantEntity(userServantEntity, -1, 0);
  this->fields._ServantEntity_k__BackingField = ServantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantEntity_k__BackingField,
    (int32_t)ServantEntity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  dispLimitCountStage = this->fields.dispLimitCountStage;
  PartyServantListViewItem__ModifyLimitCount(this, v23);
  PartyServantListViewItem__ModifyOverwriteStatus(this, v24);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25, v26);
  *(_QWORD *)&v29.fields.currentCryptoKey = v13;
  *(_QWORD *)&v29.fields.fakeValue = v14;
  IsLeave = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v29, 0);
  v27 = this->fields._ServantEntity_k__BackingField;
  if ( !v27 )
LABEL_13:
    sub_2213CDC(IsLeave, v10);
  if ( (_DWORD)IsLeave != CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v27->fields.id, 0)
    || dispLimitCountStage != this->fields.dispLimitCountStage )
  {
    this->fields.updateCategoryIdList = 1;
  }
  this->fields.isQuestRestriction = PartyServantListViewItem__ChkQuestRestriction(this, v28);
}


void PartyServantListViewItem__ModifyLimitCount(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  __int64 v4; // x2
  struct UserServantEntity_o *v5; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_596C210 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C210 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity
    || (userServantEntity = (UserServantEntity_o *)UserServantEntity__GetDispLimitCountStageSealAfter(
                                                     userServantEntity,
                                                     -1,
                                                     0,
                                                     this->fields.questRestrictionInfo,
                                                     0),
        v5 = this->fields.userServantEntity,
        this->fields.dispLimitCountStage = (int)userServantEntity,
        !v5) )
  {
    sub_2213CDC(userServantEntity, method);
  }
  v6 = *(_QWORD *)&v5->fields.limitCount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&v5->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v4);
  *(_QWORD *)&v9.fields.currentCryptoKey = v6;
  *(_QWORD *)&v9.fields.fakeValue = v7;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v9, 0);
  this->fields.stageLimitCount = LimitCountUtility__ConvertStageToLimitCount(v8, this->fields.dispLimitCountStage, 0, 0);
}


void PartyServantListViewItem__ModifyLockItem(PartyServantListViewItem_o *this, const MethodInfo *method)
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


void PartyServantListViewItem__ModifyOverwriteStatus(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  int64_t userServantEntity; // x0
  __int64 v4; // x2
  const MethodInfo_45E5BF4 *v5; // x3
  _BOOL4 IsGrandSameServant_k__BackingField; // w8
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct UserServantEntity_o *v8; // x8
  __int128 v9; // q2
  const MethodInfo_45E4A50 *v10; // x3
  int v11; // w24
  __int64 v12; // x23
  struct UserServantEntity_o *v13; // x8
  __int128 v14; // q0
  __int128 v15; // q1
  int v16; // w8
  __int64 v17; // x2
  const MethodInfo_45E5BF4 *v18; // x3
  struct PartyOrganizationListViewItem_o *v19; // x8
  struct UserServantEntity_o *v20; // x8
  __int128 v21; // q2
  const MethodInfo_45E4A50 *v22; // x3
  __int64 v23; // x24
  bool v24; // w23
  struct UserServantEntity_o *v25; // x8
  __int128 v26; // q0
  __int128 v27; // q1
  int v28; // w8
  int32_t v30; // w20
  int32_t v31; // w8
  int32_t v32; // w20
  int32_t v33; // w8
  UserServantEntity_o *v34; // x20
  int32_t hp; // w22
  UserServantGrandInfo_o *v36; // x20
  int32_t AddedHp; // w0
  int32_t atk; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-1E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-1C0h] BYREF
  __int128 v41; // [xsp+40h] [xbp-1A0h]
  __int128 v42; // [xsp+50h] [xbp-190h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+60h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+80h] [xbp-160h] BYREF
  __int128 v45; // [xsp+A0h] [xbp-140h]
  __int128 v46; // [xsp+B0h] [xbp-130h]
  _BYTE v47[40]; // [xsp+C0h] [xbp-120h] BYREF
  __int128 v48; // [xsp+F0h] [xbp-F0h] BYREF
  __int128 v49; // [xsp+100h] [xbp-E0h]
  __int128 v50; // [xsp+110h] [xbp-D0h]
  _OWORD v51[2]; // [xsp+120h] [xbp-C0h] BYREF
  __int128 v52; // [xsp+140h] [xbp-A0h]
  _OWORD v53[2]; // [xsp+150h] [xbp-90h] BYREF
  _BYTE v54[39]; // [xsp+170h] [xbp-70h] BYREF
  __int64 v55; // [xsp+198h] [xbp-48h]
  System_Nullable_T__o v56; // 0:x0.16
  System_Nullable_long__o v57; // 0:x0.16
  System_Nullable_T__o v58; // 0:x0.16
  System_Nullable_long__o v59; // 0:x0.16

  v55 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_596C211 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_long___ctor__);
    sub_2213A60(&Method_System_Nullable_ObscuredLong___ctor__);
    sub_2213A60(&Method_System_Nullable_ObscuredLong__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_long__get_HasValue__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&UserServantGrandInfo_TypeInfo);
    byte_596C211 = 1;
  }
  userServantEntity = (int64_t)this->fields.userServantEntity;
  v50 = 0u;
  memset(v51, 0, 23);
  v52 = 0u;
  memset(v53, 0, 23);
  memset(v54, 0, sizeof(v54));
  if ( !userServantEntity )
    goto LABEL_50;
  userServantEntity = (int64_t)UserServantEntity__GetOverwriteStatus_50203912(
                                 (UserServantEntity_o *)userServantEntity,
                                 this->fields.stageLimitCount,
                                 0);
  if ( !userServantEntity )
    goto LABEL_50;
  this->fields.cost = *(_DWORD *)(userServantEntity + 28);
  *(_QWORD *)&this->fields.hp = *(_QWORD *)(userServantEntity + 16);
  this->fields.rarityId = *(_DWORD *)(userServantEntity + 24);
  method = (const MethodInfo *)*(unsigned int *)(userServantEntity + 40);
  userServantEntity = (int64_t)this->fields.userServantEntity;
  this->fields.actualRarity = (int)method;
  if ( !userServantEntity )
    goto LABEL_50;
  userServantEntity = UserServantEntity__GetFrameType((UserServantEntity_o *)userServantEntity, (int32_t)method, 0);
  IsGrandSameServant_k__BackingField = this->fields._IsGrandSameServant_k__BackingField;
  this->fields.frameType = userServantEntity;
  if ( !IsGrandSameServant_k__BackingField )
    return;
  baseItem = this->fields.baseItem;
  if ( baseItem && (v8 = baseItem->fields.userServantEntity) != 0 )
  {
    v9 = *(_OWORD *)&v8->fields.id.fields.fakeValue;
    *(_QWORD *)&v56.fields.hasValue = v47;
    v56.fields.value = (Il2CppObject *)&v48;
    v45 = *(_OWORD *)&v8->fields.id.fields.currentCryptoKey;
    v46 = v9;
    v48 = v45;
    v49 = v9;
    memset(v47, 0, sizeof(v47));
    System_Nullable_ObscuredLong____ctor(
      v56,
      (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
      v5);
    *(_QWORD *)((char *)v53 + 15) = *(_QWORD *)&v47[32];
    v52 = *(_OWORD *)&v47[1];
    v53[0] = *(_OWORD *)&v47[17];
    *(_OWORD *)v54 = *(_OWORD *)&v47[1];
    *(_OWORD *)&v54[16] = *(_OWORD *)&v47[17];
    *(_QWORD *)&v54[31] = *(_QWORD *)((char *)v53 + 15);
    if ( v47[0] )
    {
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v4);
      v44 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)&v54[7];
      v57.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v44, 0);
      *(_QWORD *)&v57.fields.hasValue = v47;
      *(_OWORD *)v47 = 0u;
      System_Nullable_long____ctor(v57, Method_System_Nullable_long___ctor__, v10);
      v11 = v47[0];
      v12 = *(_QWORD *)&v47[8];
    }
    else
    {
      v12 = 0;
      v11 = 0;
    }
  }
  else
  {
    v12 = 0;
    v11 = 0;
    v52 = 0u;
    memset(v53, 0, 23);
    memset(v54, 0, sizeof(v54));
  }
  v13 = this->fields.userServantEntity;
  if ( !v13 )
    goto LABEL_50;
  v14 = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
  v15 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
  v16 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)v47 = v14;
  *(_OWORD *)&v47[16] = v15;
  if ( !v16 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v4);
  v43 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v47;
  userServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v43, 0);
  if ( v11 && v12 == userServantEntity )
  {
    userServantEntity = (int64_t)this->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_50;
    userServantEntity = UserServantEntity__IsGrandServant((UserServantEntity_o *)userServantEntity, 0);
    if ( (userServantEntity & 1) == 0 )
    {
      v34 = this->fields.userServantEntity;
      if ( !*(&UserServantGrandInfo_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo, method, v17);
      userServantEntity = (int64_t)UserServantGrandInfo__Make(v34, 1, 0);
      if ( userServantEntity )
      {
        hp = this->fields.hp;
        v36 = (UserServantGrandInfo_o *)userServantEntity;
        AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)userServantEntity, 0);
        atk = this->fields.atk;
        this->fields.hp = AddedHp + hp;
        v33 = UserServantGrandInfo__get_AddedAtk(v36, 0) + atk;
        goto LABEL_46;
      }
LABEL_50:
      sub_2213CDC(userServantEntity, method);
    }
  }
  v19 = this->fields.baseItem;
  if ( v19 && (v20 = v19->fields.userServantEntity) != 0 )
  {
    v21 = *(_OWORD *)&v20->fields.id.fields.fakeValue;
    *(_QWORD *)&v58.fields.hasValue = v47;
    v58.fields.value = (Il2CppObject *)&v48;
    v41 = *(_OWORD *)&v20->fields.id.fields.currentCryptoKey;
    v42 = v21;
    v48 = v41;
    v49 = v21;
    memset(v47, 0, sizeof(v47));
    System_Nullable_ObscuredLong____ctor(
      v58,
      (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
      v18);
    *(_QWORD *)((char *)v51 + 15) = *(_QWORD *)&v47[32];
    v50 = *(_OWORD *)&v47[1];
    v51[0] = *(_OWORD *)&v47[17];
    *(_OWORD *)v54 = *(_OWORD *)&v47[1];
    *(_OWORD *)&v54[16] = *(_OWORD *)&v47[17];
    *(_QWORD *)&v54[31] = *(_QWORD *)((char *)v51 + 15);
    if ( v47[0] )
    {
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v17);
      v40 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)&v54[7];
      v59.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v40, 0);
      *(_QWORD *)&v59.fields.hasValue = v47;
      *(_OWORD *)v47 = 0u;
      System_Nullable_long____ctor(v59, Method_System_Nullable_long___ctor__, v22);
      v23 = *(_QWORD *)&v47[8];
      v24 = v47[0] != 0;
    }
    else
    {
      v24 = 0;
      v23 = 0;
    }
  }
  else
  {
    v24 = 0;
    v23 = 0;
    v50 = 0u;
    memset(v51, 0, 23);
    memset(v54, 0, sizeof(v54));
  }
  v25 = this->fields.userServantEntity;
  if ( !v25 )
    goto LABEL_50;
  v26 = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
  v27 = *(_OWORD *)&v25->fields.id.fields.fakeValue;
  v28 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)v47 = v26;
  *(_OWORD *)&v47[16] = v27;
  if ( !v28 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v17);
  v39 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v47;
  if ( v23 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v39, 0) || !v24 )
  {
    userServantEntity = (int64_t)this->fields.userServantEntity;
    if ( userServantEntity )
    {
      if ( !UserServantEntity__IsGrandServant((UserServantEntity_o *)userServantEntity, 0) )
        return;
      userServantEntity = (int64_t)this->fields.userServantEntity;
      if ( userServantEntity )
      {
        v30 = this->fields.hp;
        userServantEntity = (int64_t)UserServantEntity__get_GrandInfo((UserServantEntity_o *)userServantEntity, 0);
        if ( userServantEntity )
        {
          v31 = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)userServantEntity, 0);
          userServantEntity = (int64_t)this->fields.userServantEntity;
          this->fields.hp = v30 - v31;
          if ( userServantEntity )
          {
            v32 = this->fields.atk;
            userServantEntity = (int64_t)UserServantEntity__get_GrandInfo((UserServantEntity_o *)userServantEntity, 0);
            if ( userServantEntity )
            {
              v33 = v32 - UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)userServantEntity, 0);
LABEL_46:
              this->fields.atk = v33;
              return;
            }
          }
        }
      }
    }
    goto LABEL_50;
  }
}


void PartyServantListViewItem__SetEquipStatus(
        PartyServantListViewItem_o *this,
        System_Int64_array *equipIds,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Int64_array **p_equipIdList; // x19
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_List_object__o *v23; // x22
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Int64_array *Master_object; // x0
  Il2CppObject *v31; // x1
  __int64 v32; // x2
  Il2CppObject *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  Il2CppObject *v40; // x21
  Il2CppClass *v41; // x22
  __int64 v42; // x1
  BalanceConfig_c *v43; // x0
  System_Int64_array *v44; // x8
  struct UserServantEntity_o *equipUserServantEntity; // x8
  __int64 v46; // x21
  __int64 v47; // x22
  __int64 v48; // x2
  struct UserServantEntity_o *v49; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v50; // x21
  __int64 v51; // x22
  __int64 v52; // x23
  Il2CppObject *v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_Int64_array *v60; // x23
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v62; // x20
  unsigned __int64 v63; // x24
  int64_t v64; // x2
  __int64 v65; // x2
  Il2CppClass *klass; // x21
  void *monitor; // x22
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  Il2CppClass *bounds; // x8
  _QWORD *v75; // x9
  __int64 max_length_low; // x10
  void **v77; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  if ( (byte_596C212 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C212 = 1;
  }
  entity = 0;
  this->fields.equipUserServantEntity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipUserServantEntity,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.equipServantEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipServantEntity, 0, v10, v11, v12, v13, v14, v15);
  this->fields.equipIdList = 0;
  p_equipIdList = &this->fields.equipIdList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList, 0, v17, v18, v19, v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v23;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipServantEntityList,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( !this->fields.userServantEntity )
    return;
  if ( equipIds )
  {
    if ( *p_equipIdList == equipIds )
      goto LABEL_14;
    v33 = System_Array__Clone((System_Array_o *)equipIds, 0);
    if ( !v33 )
    {
      v42 = 0;
      goto LABEL_13;
    }
    v40 = v33;
    v41 = long___TypeInfo;
    v42 = sub_2213BB4(v33, long___TypeInfo);
    if ( v42 )
      goto LABEL_13;
    sub_221405C(v40, v41, v34, v35);
  }
  v43 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v31, v32);
    v43 = BalanceConfig_TypeInfo;
  }
  v42 = sub_2213B20(long___TypeInfo, (unsigned int)v43->static_fields->SvtEquipMax);
LABEL_13:
  *p_equipIdList = (struct System_Int64_array *)v42;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.equipIdList, v42, v34, v35, v36, v37, v38, v39);
  equipIds = *p_equipIdList;
  if ( !*p_equipIdList )
    goto LABEL_55;
LABEL_14:
  if ( !LODWORD(equipIds->max_length) )
    goto LABEL_56;
  if ( equipIds->m_Items[0] >= 1 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31, v32);
    Master_object = (struct System_Int64_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
    v44 = *p_equipIdList;
    if ( !*p_equipIdList )
      goto LABEL_55;
    if ( !LODWORD(v44->max_length) )
      goto LABEL_56;
    if ( !Master_object )
      goto LABEL_55;
    Master_object = (struct System_Int64_array *)DataMasterBase_object__object__long___TryGetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                   (Il2CppObject **)&this->fields.equipUserServantEntity,
                                                   v44->m_Items[0],
                                                   (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      equipUserServantEntity = this->fields.equipUserServantEntity;
      if ( !equipUserServantEntity )
        goto LABEL_55;
      v46 = *(_QWORD *)&equipUserServantEntity->fields.svtId.fields.currentCryptoKey;
      v47 = *(_QWORD *)&equipUserServantEntity->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31, v32);
      *(_QWORD *)&v79.fields.currentCryptoKey = v46;
      *(_QWORD *)&v79.fields.fakeValue = v47;
      Master_object = (struct System_Int64_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                     v79,
                                                     0);
      if ( (int)Master_object >= 1 )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31, v32);
        Master_object = (struct System_Int64_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
        v49 = this->fields.equipUserServantEntity;
        if ( !v49 )
          goto LABEL_55;
        v50 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        v51 = *(_QWORD *)&v49->fields.svtId.fields.currentCryptoKey;
        v52 = *(_QWORD *)&v49->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31, v48);
        *(_QWORD *)&v80.fields.currentCryptoKey = v51;
        *(_QWORD *)&v80.fields.fakeValue = v52;
        Master_object = (struct System_Int64_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                       v80,
                                                       0);
        if ( !v50 )
          goto LABEL_55;
        v53 = DataMasterBase_object__object__int___GetEntity(
                v50,
                (int32_t)Master_object,
                (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        this->fields.equipServantEntity = (struct ServantEntity_o *)v53;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.equipServantEntity,
          (int32_t)v53,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59);
      }
    }
  }
  if ( !*p_equipIdList )
    goto LABEL_55;
  if ( SLODWORD((*p_equipIdList)->max_length) < 2 )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31, v32);
  Master_object = (struct System_Int64_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  v60 = *p_equipIdList;
  if ( !*p_equipIdList )
LABEL_55:
    sub_2213CDC(Master_object, v31);
  max_length = v60->max_length;
  if ( (int)max_length >= 1 )
  {
    v62 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v63 = 0;
    while ( v63 < (unsigned int)max_length )
    {
      v64 = v60->m_Items[v63];
      if ( v64 >= 1 )
      {
        if ( !v62 )
          goto LABEL_55;
        Master_object = (struct System_Int64_array *)DataMasterBase_object__object__long___TryGetEntity(
                                                       v62,
                                                       &entity,
                                                       v64,
                                                       (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_55;
          klass = entity[5].klass;
          monitor = entity[5].monitor;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31, v65);
          *(_QWORD *)&v81.fields.currentCryptoKey = klass;
          *(_QWORD *)&v81.fields.fakeValue = monitor;
          Master_object = (struct System_Int64_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                         v81,
                                                         0);
          if ( (int)Master_object >= 1 )
          {
            Master_object = p_equipIdList[21];
            if ( !Master_object )
              goto LABEL_55;
            bounds = (Il2CppClass *)Master_object->bounds;
            v31 = entity;
            v75 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++HIDWORD(Master_object->max_length);
            if ( !bounds )
              goto LABEL_55;
            max_length_low = SLODWORD(Master_object->max_length);
            if ( (unsigned int)max_length_low >= LODWORD(bounds->_1.namespaze) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Master_object,
                v31,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
            }
            else
            {
              v77 = &bounds->_1.image + max_length_low;
              LODWORD(Master_object->max_length) = max_length_low + 1;
              v77[4] = v31;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v77 + 4), (int32_t)v31, v68, v69, v70, v71, v72, v73);
            }
          }
        }
      }
      LODWORD(max_length) = v60->max_length;
      if ( (__int64)++v63 >= (int)max_length )
        return;
    }
LABEL_56:
    sub_2213CE4(Master_object);
  }
}


bool PartyServantListViewItem__SetSortValue(
        PartyServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  ListViewSort_o *v3; // x20
  PartyServantListViewItem_o *v4; // x19
  _BOOL4 isChoice; // w22
  struct PartyServantListViewItem_StaticFields *static_fields; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x9
  int64_t PRIORITY_NORMAL; // x10
  __int64 PRIORITY_LOWEST; // x8
  struct PartyOrganizationListViewItem_o *v10; // x8
  __int64 v11; // x2
  __int64 v12; // x2
  PartyServantListViewItem_c *v13; // x0
  __int64 PRIORITY_LOWEST_HEROIN_LEAVE; // x8
  struct PartyOrganizationListViewItem_o *v15; // x8
  PartyServantListViewItem_c *v16; // x0
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t cost; // w4
  __int64 v19; // x2
  struct UserServantEntity_o *v20; // x8
  __int128 v21; // q1
  struct UserServantEntity_o *v22; // x8
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v26; // x21
  PartyServantListViewItem_c *v27; // x0
  struct PartyServantListViewItem_StaticFields *v28; // x8
  int64_t fatigureTime; // x8
  int64_t hpReinforceValue; // x2
  __int64 v31; // x2
  int32_t v32; // w20
  struct PartyOrganizationListViewItem_o *v33; // x8
  struct UserServantEntity_o *v34; // x8
  __int128 v35; // q1
  struct UserServantEntity_o *v36; // x8
  __int128 v37; // q1
  PartyServantListViewItem_o *v38; // x21
  __int64 v39; // x2
  struct PartyOrganizationListViewItem_o *v40; // x8
  struct UserServantEntity_o *v41; // x8
  __int128 v42; // q0
  __int128 v43; // q1
  int v44; // w8
  struct UserServantEntity_o *v45; // x8
  __int128 v46; // q1
  struct QuestRestrictionInfo_o *v47; // x8
  int64_t v48; // x20
  int64_t priority; // x9
  struct ServantEntity_o *v50; // x8
  IconLabelInfo_o *v51; // x21
  __int64 v52; // x2
  struct PartyOrganizationListViewItem_o *v53; // x8
  struct UserServantEntity_o *v54; // x8
  __int128 v55; // q1
  struct UserServantEntity_o *v56; // x8
  __int128 v57; // q1
  PartyServantListViewItem_o *v58; // x21
  __int64 v59; // x2
  struct PartyOrganizationListViewItem_o *v60; // x8
  struct UserServantEntity_o *v61; // x8
  __int128 v62; // q0
  __int128 v63; // q1
  int v64; // w8
  struct UserServantEntity_o *v65; // x8
  __int128 v66; // q1
  int64_t atkReinforceValue; // x2
  int32_t TempOverwriteTreasureDeviceLv_k__BackingField; // w7
  int32_t v69; // w2
  int32_t v70; // w8
  IconLabelInfo_o *iconLabelInfo2; // x20
  int32_t MaxWave_k__BackingField; // w21
  int32_t v73; // w7
  int32_t v74; // w3
  IconLabelInfo_o *v75; // x0
  int32_t v76; // w2
  int64_t rarityId; // x2
  struct UserServantEntity_o *v78; // x8
  int64_t v79; // x8
  PartyServantListViewManager_o *v80; // x20
  __int64 v81; // x10
  int32_t v82; // w0
  struct ServantEntity_o *BaseServantEntity_k__BackingField; // x8
  unsigned __int64 v84; // x9
  IconLabelInfo_o *v85; // x19
  __int64 v86; // x20
  __int64 v87; // x21
  int64_t v88; // x8
  IconLabelInfo_o *iconLabelInfo1; // x20
  struct EventUpValSetupInfo_o *setupInfo; // x8
  int bonusKind; // w8
  EventUpValSetupInfo_o *v92; // x21
  UserServantEntity_o *v93; // x22
  int32_t ServantFilterEventId; // w23
  struct EventUpValSetupInfo_o *v95; // x3
  UserServantEntity_o *v96; // x0
  EventUpValSetupInfo_o *v97; // x1
  int32_t v98; // w2
  int bonusKind2; // w8
  int32_t bonusKind2Id; // w21
  int32_t v101; // w8
  DataManager_c *v102; // x0
  Il2CppObject *Master_object; // x21
  const MethodInfo *v104; // x1
  bool v105; // w0
  int32_t bonusKindId; // w9
  int32_t v107; // w8
  int32_t v108; // w8
  UserServantEntity_o *userServantEntity; // x22
  EventUpValSetupInfo_o *v110; // x23
  bool IsEnableServant; // w0
  int32_t v112; // w8
  UserServantEntity_o *v113; // x21
  struct UserServantEntity_o *equipUserServantEntity; // x8
  int64_t hp; // x2
  int32_t atk; // w4
  int32_t v117; // w1
  int32_t v118; // w21
  int v119; // w8
  UserServantEntity_o *v120; // x21
  struct UserServantEntity_o *v121; // x8
  int v122; // w8
  int32_t v123; // w3
  int32_t v124; // w20
  Il2CppObject *v125; // x21
  const MethodInfo *v126; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v128; // x1
  __int64 v129; // x1
  __int64 v130; // x2
  int32_t BaseServantId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // kr00_16
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v134; // x0
  intptr_t *v135; // x8
  System_Func_T__bool__o *v136; // x22
  __int64 v137; // x0
  __int64 v138; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v140; // [xsp+10h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v141; // [xsp+30h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v142; // [xsp+50h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v143; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v144; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v145; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v146; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v147; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v148; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v149; // [xsp+130h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v150; // [xsp+158h] [xbp-58h] BYREF
  int32_t tdMaxLv[2]; // [xsp+178h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v152; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16

  v3 = sort;
  v4 = this;
  if ( (byte_596C214 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_2213A60(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_PartyServantListViewItem__SetSortValue_b__139_0__);
    sub_2213A60(&Method_PartyServantListViewItem__SetSortValue_b__139_1__);
    sub_2213A60(&PartyServantListViewItem_TypeInfo);
    sub_2213A60(&PartyServantListViewManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&TutorialFlag_TypeInfo);
    this = (PartyServantListViewItem_o *)sub_2213A60(&UserServantGrandInfo_TypeInfo);
    byte_596C214 = 1;
  }
  memset(&v150, 0, sizeof(v150));
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1;
  if ( !v3 )
    goto LABEL_297;
  if ( v3->fields.isBonusKind && !v4->fields.isBase )
  {
    baseItem = v4->fields.baseItem;
    if ( !baseItem || !baseItem->fields.isRestrictionGrandServant )
    {
      manager = v3->fields.manager;
      if ( manager
        && (naturalAligment = PartyServantListViewManager_TypeInfo->_2.naturalAligment,
            manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (PartyServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == PartyServantListViewManager_TypeInfo )
          v26 = v3->fields.manager;
        else
          v26 = 0;
      }
      else
      {
        v26 = 0;
      }
      setupInfo = v4->fields.setupInfo;
      if ( setupInfo )
      {
        if ( !setupInfo->fields.isQuestStart )
        {
LABEL_187:
          bonusKind2 = v3->fields.bonusKind2;
          if ( bonusKind2 > 3 )
          {
            if ( (unsigned int)(bonusKind2 - 4) < 2 )
            {
              if ( v4->fields.bonusKind == bonusKind2 )
              {
                bonusKind2Id = v3->fields.bonusKind2Id;
                if ( v4->fields.bonusKindId == bonusKind2Id )
                  goto LABEL_295;
              }
              else
              {
                bonusKind2Id = v3->fields.bonusKind2Id;
              }
              userServantEntity = v4->fields.userServantEntity;
              v110 = v4->fields.setupInfo;
              v4->fields.bonusKind = bonusKind2;
              v4->fields.bonusKindId = bonusKind2Id;
              this = (PartyServantListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( !this || !userServantEntity )
                goto LABEL_297;
              v95 = this->fields.setupInfo;
              v96 = userServantEntity;
              v97 = v110;
              v98 = bonusKind2Id;
              goto LABEL_218;
            }
            if ( bonusKind2 != 7 )
              goto LABEL_6;
            if ( v4->fields.bonusKind != 7 )
            {
              v107 = v3->fields.bonusKind2Id;
              goto LABEL_271;
            }
            bonusKindId = v4->fields.bonusKindId;
            v107 = v3->fields.bonusKind2Id;
LABEL_210:
            if ( bonusKindId == v107 )
            {
LABEL_295:
              if ( !v4->fields.isEventUpVal )
                goto LABEL_296;
              goto LABEL_6;
            }
LABEL_271:
            v4->fields.bonusKind = 7;
            v4->fields.bonusKindId = v107;
            this = (PartyServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !this )
              goto LABEL_297;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantFilterMaster___);
            BaseServantId = PartyServantListViewItem__get_BaseServantId(v4, v128);
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v129, v130);
            v132 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(BaseServantId, 0);
            sort = *(ListViewSort_o **)&v132.fields.fakeValue;
            this = *(PartyServantListViewItem_o **)&v132.fields.currentCryptoKey;
            if ( !MasterData_object )
              goto LABEL_297;
            IsEnableServant = ServantFilterMaster__IsEnableServant(
                                (ServantFilterMaster_o *)MasterData_object,
                                v132,
                                v4->fields.bonusKindId,
                                0);
            goto LABEL_276;
          }
          if ( bonusKind2 )
          {
            if ( bonusKind2 == 3 )
            {
              v4->fields.bonusKind = 3;
              v102 = DataManager_TypeInfo;
              v4->fields.bonusKindId = v3->fields.bonusKind2Id;
              if ( !*(&v102->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(v102, sort, method);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
              this = (PartyServantListViewItem_o *)PartyServantListViewItem__get_BaseServantId(v4, v104);
              if ( !Master_object )
                goto LABEL_297;
              v105 = EventCampaignMaster__IsEnableServant(
                       (EventCampaignMaster_o *)Master_object,
                       (int32_t)this,
                       v4->fields.bonusKindId,
                       0);
              v4->fields.isEventUpVal = v105;
              if ( !v105 )
                goto LABEL_296;
            }
            goto LABEL_6;
          }
          if ( v4->fields.bonusKind )
          {
            v112 = v3->fields.bonusKind2Id;
          }
          else
          {
            v112 = v3->fields.bonusKind2Id;
            if ( v4->fields.bonusKindId == v112 )
              goto LABEL_295;
          }
          v4->fields.bonusKind = 0;
          v4->fields.bonusKindId = v112;
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort, method);
          this = (PartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventGroupMaster___);
          if ( !this )
            goto LABEL_297;
          EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                (EventGroupMaster_o *)this,
                                v4->fields.bonusKindId,
                                0);
          this = (PartyServantListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                 0);
          if ( ((unsigned __int8)this & 1) != 0 )
            goto LABEL_295;
          if ( !EntitiesByGroupId )
            goto LABEL_297;
          if ( EntitiesByGroupId->fields._size < 2 )
            goto LABEL_295;
          v134 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventGroupEntity__bool__TypeInfo);
          v135 = &Method_PartyServantListViewItem__SetSortValue_b__139_1__;
LABEL_294:
          v136 = (System_Func_T__bool__o *)v134;
          System_Func_object__bool____ctor(v134, (Il2CppObject *)v4, *v135, 0);
          v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                      (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                      v136,
                                      (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_EventGroupEntity___);
          goto LABEL_295;
        }
      }
      else
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sort, method);
        this = (PartyServantListViewItem_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_187;
        if ( !v26 )
          goto LABEL_297;
        if ( !BYTE5(v26[1].fields.dropList) )
          goto LABEL_187;
      }
      bonusKind = v3->fields.bonusKind;
      if ( bonusKind > 3 )
      {
        if ( (unsigned int)(bonusKind - 4) < 2 )
        {
          if ( v4->fields.bonusKind == bonusKind )
            goto LABEL_295;
          v4->fields.bonusKind = bonusKind;
          v92 = v4->fields.setupInfo;
          v4->fields.bonusKindId = v3->fields.bonusKindId;
          if ( !v92 )
            goto LABEL_297;
          v93 = v4->fields.userServantEntity;
          ServantFilterEventId = EventUpValSetupInfo__get_ServantFilterEventId(v92, 0);
          this = (PartyServantListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !this || !v93 )
            goto LABEL_297;
          v95 = this->fields.setupInfo;
          v96 = v93;
          v97 = v92;
          v98 = ServantFilterEventId;
LABEL_218:
          IsEnableServant = UserServantEntity__getEventUpVal(v96, v97, v98, (int64_t)v95, 0);
LABEL_276:
          v4->fields.isEventUpVal = IsEnableServant;
          if ( !IsEnableServant )
            goto LABEL_296;
          goto LABEL_6;
        }
        if ( bonusKind != 7 )
          goto LABEL_6;
        if ( v4->fields.bonusKind != 7 )
        {
          v107 = v3->fields.bonusKindId;
          goto LABEL_271;
        }
        bonusKindId = v4->fields.bonusKindId;
        v107 = v3->fields.bonusKindId;
        goto LABEL_210;
      }
      if ( bonusKind )
      {
        if ( bonusKind != 3 )
          goto LABEL_6;
        if ( v4->fields.bonusKind == 3 )
        {
          v101 = v3->fields.bonusKindId;
          if ( v4->fields.bonusKindId == v101 )
            goto LABEL_295;
        }
        else
        {
          v101 = v3->fields.bonusKindId;
        }
        v4->fields.bonusKind = 3;
        v4->fields.bonusKindId = v101;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort, method);
        v125 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
        this = (PartyServantListViewItem_o *)PartyServantListViewItem__get_BaseServantId(v4, v126);
        if ( !v125 )
          goto LABEL_297;
        IsEnableServant = EventCampaignMaster__IsEnableServant(
                            (EventCampaignMaster_o *)v125,
                            (int32_t)this,
                            v4->fields.bonusKindId,
                            0);
        goto LABEL_276;
      }
      if ( v4->fields.bonusKind )
      {
        v108 = v3->fields.bonusKindId;
      }
      else
      {
        v108 = v3->fields.bonusKindId;
        if ( v4->fields.bonusKindId == v108 )
          goto LABEL_295;
      }
      v4->fields.bonusKind = 0;
      v4->fields.bonusKindId = v108;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort, method);
      this = (PartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventGroupMaster___);
      if ( !this )
        goto LABEL_297;
      EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId((EventGroupMaster_o *)this, v4->fields.bonusKindId, 0);
      this = (PartyServantListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                             (System_Collections_ICollection_o *)EntitiesByGroupId,
                                             0);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_295;
      if ( !EntitiesByGroupId )
        goto LABEL_297;
      if ( EntitiesByGroupId->fields._size < 2 )
        goto LABEL_295;
      v134 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventGroupEntity__bool__TypeInfo);
      v135 = &Method_PartyServantListViewItem__SetSortValue_b__139_0__;
      goto LABEL_294;
    }
  }
LABEL_6:
  if ( !v4->fields.isBase )
  {
    v10 = v4->fields.baseItem;
    if ( !v10 || !v10->fields.isRestrictionGrandServant )
    {
      this = (PartyServantListViewItem_o *)v4->fields._BaseServantEntity_k__BackingField;
      if ( !this )
        goto LABEL_297;
      if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0) )
      {
LABEL_296:
        LOBYTE(this) = 0;
        return (char)this;
      }
      this = (PartyServantListViewItem_o *)v4->fields._BaseServantEntity_k__BackingField;
      if ( !this )
        goto LABEL_297;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0)
        || (((__int64 (__fastcall *)(PartyServantListViewItem_o *, ListViewSort_o *, const MethodInfo *))v4->klass->vtable._5_IsMatchFilter.methodPtr)(
              v4,
              v3,
              v4->klass->vtable._5_IsMatchFilter.method)
          & 1) == 0 )
      {
        goto LABEL_296;
      }
    }
  }
  this = (PartyServantListViewItem_o *)PartyServantListViewItem_TypeInfo;
  if ( v4->fields.isSwapChoice )
    isChoice = !v4->fields.isChoice;
  else
    isChoice = v4->fields.isChoice;
  if ( !*(&PartyServantListViewItem_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo, sort, method);
    this = (PartyServantListViewItem_o *)PartyServantListViewItem_TypeInfo;
  }
  static_fields = *(struct PartyServantListViewItem_StaticFields **)&this->fields.friendship.fields.hiddenValue;
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  PRIORITY_NORMAL = static_fields->PRIORITY_NORMAL;
  v4->fields.sortValue0 = static_fields->PRIORITY_NORMAL;
  v4->fields.sortValue0B = PRIORITY_NORMAL;
  if ( questRestrictionInfo )
  {
    if ( questRestrictionInfo->fields.isFatigure && v3->fields.isSmartSort )
    {
      if ( v4->fields.fatigureTime >= 1 )
      {
LABEL_16:
        if ( !this->fields.bonusKindId )
        {
          j_il2cpp_runtime_class_init_0(this, sort, method);
          this = (PartyServantListViewItem_o *)PartyServantListViewItem_TypeInfo;
          static_fields = PartyServantListViewItem_TypeInfo->static_fields;
        }
        PRIORITY_LOWEST = static_fields->PRIORITY_LOWEST;
        goto LABEL_32;
      }
LABEL_30:
      if ( !v4->fields.isQuestRestriction )
        goto LABEL_33;
      PRIORITY_LOWEST = -1;
LABEL_32:
      v4->fields.sortValue0 = PRIORITY_LOWEST;
LABEL_33:
      if ( isChoice && v3->fields.isChoiceSort )
      {
        if ( !this->fields.bonusKindId )
        {
          j_il2cpp_runtime_class_init_0(this, sort, method);
          this = (PartyServantListViewItem_o *)PartyServantListViewItem_TypeInfo;
        }
        v4->fields.sortValue0B = *(_QWORD *)(*(_QWORD *)&this->fields.friendship.fields.hiddenValue + 8LL);
      }
      this = (PartyServantListViewItem_o *)v4->fields._BaseServantEntity_k__BackingField;
      if ( !this )
        goto LABEL_297;
      if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)this, 0) )
        goto LABEL_59;
      if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, sort, v11);
      if ( !TutorialFlag__Get_47388504(126, 0) )
        goto LABEL_59;
      v13 = PartyServantListViewItem_TypeInfo;
      if ( !*(&PartyServantListViewItem_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo, sort, v12);
        v13 = PartyServantListViewItem_TypeInfo;
      }
      PRIORITY_LOWEST_HEROIN_LEAVE = v13->static_fields->PRIORITY_LOWEST_HEROIN_LEAVE;
LABEL_58:
      v4->fields.sortValue0 = PRIORITY_LOWEST_HEROIN_LEAVE;
      goto LABEL_59;
    }
    if ( questRestrictionInfo->fields.isAllOutBattle && v3->fields.isSmartSort )
    {
      if ( v4->fields._IsAllOutBattle_k__BackingField )
        goto LABEL_16;
      goto LABEL_30;
    }
  }
  v15 = v4->fields.baseItem;
  if ( !v15 )
    goto LABEL_297;
  if ( !v15->fields.isRestrictionActiveGrandBoard )
    goto LABEL_302;
  this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
  if ( !this )
    goto LABEL_297;
  if ( !UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0) || v4->fields.isQuestRestriction )
  {
LABEL_302:
    if ( isChoice && v3->fields.isChoiceSort )
    {
      v16 = PartyServantListViewItem_TypeInfo;
      if ( !*(&PartyServantListViewItem_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo, sort, method);
        v16 = PartyServantListViewItem_TypeInfo;
      }
      PRIORITY_LOWEST_HEROIN_LEAVE = v16->static_fields->PRIORITY_TOP;
    }
    else
    {
      if ( !v4->fields.isQuestRestriction )
        goto LABEL_59;
      PRIORITY_LOWEST_HEROIN_LEAVE = -1;
    }
    goto LABEL_58;
  }
  v27 = PartyServantListViewItem_TypeInfo;
  if ( !*(&PartyServantListViewItem_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo, sort, method);
    v27 = PartyServantListViewItem_TypeInfo;
  }
  v28 = v27->static_fields;
  v4->fields.sortValue0 = v28->PriorityGrandServantOnActiveGrandBoard;
  if ( isChoice && v3->fields.isChoiceSort )
  {
    if ( !*(&v27->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v27, sort, method);
      v28 = PartyServantListViewItem_TypeInfo->static_fields;
    }
    v4->fields.sortValue0B = v28->PRIORITY_TOP;
  }
LABEL_59:
  PartyServantListViewItem__InitAfterSecondSort(v4, (const MethodInfo *)sort);
  this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_297;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
  equipServantEntity = v4->fields.equipServantEntity;
  this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo3;
  if ( equipServantEntity )
  {
    cost = equipServantEntity->fields.cost;
    if ( !this )
      goto LABEL_297;
  }
  else
  {
    cost = 0;
    if ( !this )
      goto LABEL_297;
  }
  IconLabelInfo__Set_47880948((IconLabelInfo_o *)this, 7, v4->fields.cost, 0, cost, 0, 0, 0, 0, 0);
  this = (PartyServantListViewItem_o *)(&dword_0 + 1);
  switch ( v3->fields.sortKind )
  {
    case 1:
      v20 = v4->fields.userServantEntity;
      if ( !v20 )
        goto LABEL_297;
      v21 = *(_OWORD *)&v20->fields.id.fields.fakeValue;
      *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)&v20->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v149.fields.fakeValue = v21;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort, v19);
      v140 = v149;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                             &v140,
                                             0);
      v22 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v22 )
        goto LABEL_297;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_297;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v22->fields.createdAt, 0, 0, 0, 0);
      goto LABEL_258;
    case 2:
      rarityId = v4->fields.rarityId;
      v78 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = rarityId;
      if ( !v78 )
        goto LABEL_297;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_297;
      IconLabelInfo__Set_47880948(
        (IconLabelInfo_o *)this,
        36,
        rarityId,
        v78->fields.exceedCount,
        0,
        0,
        0,
        v78->fields.lv,
        v4->fields.actualRarity,
        0);
      goto LABEL_263;
    case 3:
      goto LABEL_165;
    case 4:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_297;
      UserServantEntity__getTreasureDeviceInfo_50192116((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0);
      TempOverwriteTreasureDeviceLv_k__BackingField = v4->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
      v69 = tdMaxLv[1];
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v70 = TempOverwriteTreasureDeviceLv_k__BackingField <= 0
          ? tdMaxLv[1]
          : v4->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
      v4->fields.sortValue1 = v70;
      if ( !this )
        goto LABEL_297;
      IconLabelInfo__Set_47880948(
        (IconLabelInfo_o *)this,
        33,
        v69,
        tdMaxLv[0],
        0,
        0,
        0,
        TempOverwriteTreasureDeviceLv_k__BackingField,
        0,
        0);
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_297;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
      MaxWave_k__BackingField = this->fields._MaxWave_k__BackingField;
      this = (PartyServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !iconLabelInfo2 )
        goto LABEL_297;
      v73 = v4->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
      v74 = (int)this;
      v75 = iconLabelInfo2;
      v76 = MaxWave_k__BackingField;
      goto LABEL_262;
    case 5:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_297;
      this = (PartyServantListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0);
      v32 = (int)this;
      if ( !v4->fields._IsGrandSameServant_k__BackingField )
        goto LABEL_225;
      v33 = v4->fields.baseItem;
      if ( !v33 )
        goto LABEL_297;
      v34 = v33->fields.userServantEntity;
      if ( !v34 )
        goto LABEL_297;
      v35 = *(_OWORD *)&v34->fields.id.fields.fakeValue;
      *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)&v34->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v149.fields.fakeValue = v35;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort, v31);
      v148 = v149;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                             &v148,
                                             0);
      v36 = v4->fields.userServantEntity;
      if ( !v36 )
        goto LABEL_297;
      v37 = *(_OWORD *)&v36->fields.id.fields.fakeValue;
      v38 = this;
      *(_OWORD *)&v147.fields.currentCryptoKey = *(_OWORD *)&v36->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v147.fields.fakeValue = v37;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                             &v147,
                                             0);
      if ( v38 != this )
        goto LABEL_97;
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_297;
      this = (PartyServantListViewItem_o *)UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_97:
        v40 = v4->fields.baseItem;
        if ( !v40 )
          goto LABEL_297;
        v41 = v40->fields.userServantEntity;
        if ( !v41 )
          goto LABEL_297;
        v42 = *(_OWORD *)&v41->fields.id.fields.currentCryptoKey;
        v43 = *(_OWORD *)&v41->fields.id.fields.fakeValue;
        v44 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v149.fields.currentCryptoKey = v42;
        *(_OWORD *)&v149.fields.fakeValue = v43;
        if ( !v44 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort, v39);
        v146 = v149;
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                               &v146,
                                               0);
        v45 = v4->fields.userServantEntity;
        if ( !v45 )
          goto LABEL_297;
        v46 = *(_OWORD *)&v45->fields.id.fields.fakeValue;
        *(_OWORD *)&v145.fields.currentCryptoKey = *(_OWORD *)&v45->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v145.fields.fakeValue = v46;
        if ( this != (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                     &v145,
                                                     0) )
        {
          this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
          if ( !this )
            goto LABEL_297;
          if ( UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0) )
          {
            this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
            if ( !this )
              goto LABEL_297;
            this = (PartyServantListViewItem_o *)UserServantEntity__get_GrandInfo((UserServantEntity_o *)this, 0);
            if ( !this )
              goto LABEL_297;
            v32 -= UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)this, 0);
          }
        }
      }
      else
      {
        v113 = v4->fields.userServantEntity;
        if ( !*(&UserServantGrandInfo_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo, sort, v39);
        this = (PartyServantListViewItem_o *)UserServantGrandInfo__Make(v113, 1, 0);
        if ( !this )
          goto LABEL_297;
        v32 += UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)this, 0);
      }
LABEL_225:
      if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v4->fields.equipServantEntityList, 0) )
      {
        equipUserServantEntity = v4->fields.equipUserServantEntity;
        hp = v4->fields.hp;
        if ( equipUserServantEntity )
        {
          atk = equipUserServantEntity->fields.hp;
          this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = atk + (int)hp;
          if ( !this )
            goto LABEL_297;
          v117 = 46;
        }
        else
        {
          this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = hp;
          if ( !this )
            goto LABEL_297;
          atk = 0;
          v117 = 3;
        }
LABEL_256:
        v123 = v32;
LABEL_257:
        IconLabelInfo__Set_47880948((IconLabelInfo_o *)this, v117, hp, v123, atk, 0, 0, 0, 0, 0);
LABEL_258:
        this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
        if ( this )
        {
          v85 = v4->fields.iconLabelInfo2;
LABEL_260:
          v124 = this->fields._MaxWave_k__BackingField;
          this = (PartyServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
          if ( v85 )
          {
            v74 = (int)this;
            v73 = 0;
            v75 = v85;
            v76 = v124;
            goto LABEL_262;
          }
        }
LABEL_297:
        sub_2213CDC(this, sort);
      }
      this = (PartyServantListViewItem_o *)v4->fields.equipServantEntityList;
      if ( !this )
        goto LABEL_297;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v150,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v118 = 0;
      v149.fields.currentCryptoKey = 0;
      v149.fields.hiddenValue = (int64_t)&v150;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v150,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
      {
        if ( v150.fields._current )
        {
          v119 = *(_DWORD *)((char *)&v150.fields._current->klass + (unsigned __int64)&qword_198 + 4);
          v118 += v119;
          v4->fields.sortValue1 = v119 + v4->fields.hp;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v150,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_297;
      LODWORD(hp) = v4->fields.hp;
      v117 = 46;
      break;
    case 6:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_297;
      this = (PartyServantListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0);
      v32 = (int)this;
      if ( !v4->fields._IsGrandSameServant_k__BackingField )
        goto LABEL_242;
      v53 = v4->fields.baseItem;
      if ( !v53 )
        goto LABEL_297;
      v54 = v53->fields.userServantEntity;
      if ( !v54 )
        goto LABEL_297;
      v55 = *(_OWORD *)&v54->fields.id.fields.fakeValue;
      *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)&v54->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v149.fields.fakeValue = v55;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort, v52);
      v144 = v149;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                             &v144,
                                             0);
      v56 = v4->fields.userServantEntity;
      if ( !v56 )
        goto LABEL_297;
      v57 = *(_OWORD *)&v56->fields.id.fields.fakeValue;
      v58 = this;
      *(_OWORD *)&v143.fields.currentCryptoKey = *(_OWORD *)&v56->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v143.fields.fakeValue = v57;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                             &v143,
                                             0);
      if ( v58 != this )
        goto LABEL_124;
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_297;
      this = (PartyServantListViewItem_o *)UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_124:
        v60 = v4->fields.baseItem;
        if ( !v60 )
          goto LABEL_297;
        v61 = v60->fields.userServantEntity;
        if ( !v61 )
          goto LABEL_297;
        v62 = *(_OWORD *)&v61->fields.id.fields.currentCryptoKey;
        v63 = *(_OWORD *)&v61->fields.id.fields.fakeValue;
        v64 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v149.fields.currentCryptoKey = v62;
        *(_OWORD *)&v149.fields.fakeValue = v63;
        if ( !v64 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort, v59);
        v142 = v149;
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                               &v142,
                                               0);
        v65 = v4->fields.userServantEntity;
        if ( !v65 )
          goto LABEL_297;
        v66 = *(_OWORD *)&v65->fields.id.fields.fakeValue;
        *(_OWORD *)&v141.fields.currentCryptoKey = *(_OWORD *)&v65->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v141.fields.fakeValue = v66;
        if ( this != (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                     &v141,
                                                     0) )
        {
          this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
          if ( !this )
            goto LABEL_297;
          if ( UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0) )
          {
            this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
            if ( !this )
              goto LABEL_297;
            this = (PartyServantListViewItem_o *)UserServantEntity__get_GrandInfo((UserServantEntity_o *)this, 0);
            if ( !this )
              goto LABEL_297;
            v32 -= UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0);
          }
        }
      }
      else
      {
        v120 = v4->fields.userServantEntity;
        if ( !*(&UserServantGrandInfo_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo, sort, v59);
        this = (PartyServantListViewItem_o *)UserServantGrandInfo__Make(v120, 1, 0);
        if ( !this )
          goto LABEL_297;
        v32 += UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0);
      }
LABEL_242:
      if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v4->fields.equipServantEntityList, 0) )
      {
        v121 = v4->fields.equipUserServantEntity;
        hp = v4->fields.atk;
        if ( v121 )
        {
          atk = v121->fields.atk;
          this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = atk + (int)hp;
          if ( !this )
            goto LABEL_297;
          v117 = 47;
        }
        else
        {
          this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = hp;
          if ( !this )
            goto LABEL_297;
          atk = 0;
          v117 = 5;
        }
        goto LABEL_256;
      }
      this = (PartyServantListViewItem_o *)v4->fields.equipServantEntityList;
      if ( !this )
        goto LABEL_297;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v150,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v118 = 0;
      v149.fields.currentCryptoKey = 0;
      v149.fields.hiddenValue = (int64_t)&v150;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v150,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
      {
        if ( v150.fields._current )
        {
          v122 = *(_DWORD *)((char *)&v150.fields._current->klass + (unsigned __int64)&qword_198);
          v118 += v122;
          v4->fields.sortValue1 = v122 + v4->fields.atk;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v150,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_297;
      LODWORD(hp) = v4->fields.atk;
      v117 = 47;
      break;
    case 7:
      v79 = v4->fields.cost;
      goto LABEL_150;
    case 8:
      v79 = -v4->fields.priority;
LABEL_150:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      goto LABEL_158;
    case 0xA:
      v86 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
      v87 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort, v19);
      *(_QWORD *)&v152.fields.currentCryptoKey = v86;
      *(_QWORD *)&v152.fields.fakeValue = v87;
      v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v152, 0);
      friendship = v4->fields.friendship;
      iconLabelInfo1 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = v88;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                             friendship,
                                             0);
      if ( !iconLabelInfo1 )
        goto LABEL_297;
      IconLabelInfo__Set_47880948(iconLabelInfo1, 32, (int32_t)this, v4->fields.friendshipMax, 0, 0, 0, 0, 0, 0);
      goto LABEL_258;
    case 0xE:
      this = (PartyServantListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) != 0 )
      {
        v80 = (PartyServantListViewManager_o *)v3->fields.manager;
        if ( !v80
          || (v81 = PartyServantListViewManager_TypeInfo->_2.naturalAligment,
              v80->klass->_2.naturalAligment < (unsigned int)v81)
          || (PartyServantListViewManager_c *)v80->klass->_2.typeHierarchy[v81 - 1] != PartyServantListViewManager_TypeInfo )
        {
          v137 = PartyServantListViewItem__get_BaseServantId(v4, (const MethodInfo *)sort);
          sub_2213CDC(v137, v138);
        }
        v82 = PartyServantListViewItem__get_BaseServantId(v4, (const MethodInfo *)sort);
        this = (PartyServantListViewItem_o *)PartyServantListViewManager__GetAmountSortValue(v80, v82, 0);
        v4->fields.amountSortValue = (int64_t)this;
      }
      BaseServantEntity_k__BackingField = v4->fields._BaseServantEntity_k__BackingField;
      if ( !BaseServantEntity_k__BackingField )
        goto LABEL_297;
      v84 = ((unsigned __int64)(unsigned int)v4->fields.rarityId << 32) + ((_QWORD)this << 48);
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      v79 = v84 | BaseServantEntity_k__BackingField->fields.collectionNo;
LABEL_158:
      v4->fields.sortValue1 = v79;
      if ( !this )
        goto LABEL_297;
      v85 = v4->fields.iconLabelInfo1;
      goto LABEL_260;
    case 0xF:
      hpReinforceValue = v4->fields.hpReinforceValue;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hpReinforceValue;
      if ( !this )
        goto LABEL_297;
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
      goto LABEL_258;
    case 0x10:
      atkReinforceValue = v4->fields.atkReinforceValue;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = atkReinforceValue;
      if ( !this )
        goto LABEL_297;
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
      goto LABEL_258;
    case 0x19:
      v47 = v4->fields.questRestrictionInfo;
      if ( !v47 || !v47->fields.isFatigure )
        goto LABEL_164;
      fatigureTime = v4->fields.fatigureTime;
      goto LABEL_111;
    case 0x1C:
      if ( v4->fields._IsDispSvtPoint_k__BackingField )
      {
        fatigureTime = v4->fields._SvtPoint_k__BackingField;
LABEL_111:
        this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
        v4->fields.sortValue1 = fatigureTime;
        if ( !this )
          goto LABEL_297;
        v48 = this->fields._MaxWave_k__BackingField;
        priority = v4->fields.priority;
        v50 = v4->fields._BaseServantEntity_k__BackingField;
        v4->fields.sortValue1B = v48;
        v4->fields.sortValue2 = priority;
        if ( !v50 )
          goto LABEL_297;
        v51 = v4->fields.iconLabelInfo1;
        v4->fields.sortValue2B = ((unsigned __int64)(unsigned int)v4->fields.rarityId << 48)
                               | ((__int64)v50->fields.collectionNo << 16)
                               | v48;
      }
      else
      {
LABEL_164:
        v3->fields.sortKind = 3;
LABEL_165:
        this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_297;
        v48 = this->fields._MaxWave_k__BackingField;
        v51 = v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = v48;
      }
      this = (PartyServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !v51 )
        goto LABEL_297;
      v74 = (int)this;
      v73 = 0;
      v75 = v51;
      v76 = v48;
LABEL_262:
      IconLabelInfo__Set_47880948(v75, 2, v76, v74, 0, 0, 0, v73, 0, 0);
LABEL_263:
      LOBYTE(this) = 1;
      return (char)this;
    default:
      return (char)this;
  }
  v123 = v32;
  atk = v118;
  goto LABEL_257;
}


bool PartyServantListViewItem__SwapChoice(PartyServantListViewItem_o *this, const MethodInfo *method)
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


bool PartyServantListViewItem__SwapLock(PartyServantListViewItem_o *this, const MethodInfo *method)
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


bool PartyServantListViewItem___SetSortValue_b__139_0(
        PartyServantListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  const MethodInfo *v6; // x1
  Il2CppObject *BaseServantId; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *v11; // x21
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t v15; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // kr00_16
  UserServantEntity_o *userServantEntity; // x21
  EventUpValSetupInfo_o *setupInfo; // x20
  int32_t eventId; // w19

  if ( (byte_596C21B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_596C21B = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  BaseServantId = (Il2CppObject *)PartyServantListViewItem__get_BaseServantId(this, v6);
  if ( !entity || !Master_object )
    goto LABEL_18;
  if ( EventCampaignMaster__IsEnableServant(
         (EventCampaignMaster_o *)Master_object,
         (int32_t)BaseServantId,
         entity->fields.eventId,
         0) )
  {
    return 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
  v11 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  v15 = PartyServantListViewItem__get_BaseServantId(this, v12);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v15, 0);
  v8 = *(_QWORD *)&v16.fields.fakeValue;
  BaseServantId = *(Il2CppObject **)&v16.fields.currentCryptoKey;
  if ( !v11 )
    goto LABEL_18;
  if ( ServantFilterMaster__IsEnableServant((ServantFilterMaster_o *)v11, v16, entity->fields.eventId, 0) )
    return 1;
  userServantEntity = this->fields.userServantEntity;
  setupInfo = this->fields.setupInfo;
  eventId = entity->fields.eventId;
  BaseServantId = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !BaseServantId || !userServantEntity )
LABEL_18:
    sub_2213CDC(BaseServantId, v8);
  return UserServantEntity__getEventUpVal(userServantEntity, setupInfo, eventId, (int64_t)BaseServantId[8].monitor, 0);
}


bool PartyServantListViewItem___SetSortValue_b__139_1(
        PartyServantListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  const MethodInfo *v6; // x1
  Il2CppObject *BaseServantId; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *v11; // x21
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t v15; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // kr00_16
  UserServantEntity_o *userServantEntity; // x21
  EventUpValSetupInfo_o *setupInfo; // x20
  int32_t eventId; // w19

  if ( (byte_596C21C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_596C21C = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  BaseServantId = (Il2CppObject *)PartyServantListViewItem__get_BaseServantId(this, v6);
  if ( !entity || !Master_object )
    goto LABEL_18;
  if ( EventCampaignMaster__IsEnableServant(
         (EventCampaignMaster_o *)Master_object,
         (int32_t)BaseServantId,
         entity->fields.eventId,
         0) )
  {
    return 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
  v11 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  v15 = PartyServantListViewItem__get_BaseServantId(this, v12);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v15, 0);
  v8 = *(_QWORD *)&v16.fields.fakeValue;
  BaseServantId = *(Il2CppObject **)&v16.fields.currentCryptoKey;
  if ( !v11 )
    goto LABEL_18;
  if ( ServantFilterMaster__IsEnableServant((ServantFilterMaster_o *)v11, v16, entity->fields.eventId, 0) )
    return 1;
  userServantEntity = this->fields.userServantEntity;
  setupInfo = this->fields.setupInfo;
  eventId = entity->fields.eventId;
  BaseServantId = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !BaseServantId || !userServantEntity )
LABEL_18:
    sub_2213CDC(BaseServantId, v8);
  return UserServantEntity__getEventUpVal(userServantEntity, setupInfo, eventId, (int64_t)BaseServantId[8].monitor, 0);
}


int32_t PartyServantListViewItem__get_ActualRarity(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.actualRarity;
}


int32_t PartyServantListViewItem__get_Atk(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.atk;
}


ServantEntity_o *PartyServantListViewItem__get_BaseServantEntity(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._BaseServantEntity_k__BackingField;
}


int32_t PartyServantListViewItem__get_BaseServantId(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyServantListViewItem_o *v3; // x19
  struct ServantEntity_o *BaseServantEntity_k__BackingField; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v3 = this;
  if ( (byte_596C218 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C218 = 1;
  }
  BaseServantEntity_k__BackingField = v3->fields._BaseServantEntity_k__BackingField;
  if ( !BaseServantEntity_k__BackingField )
    sub_2213CDC(this, method);
  v5 = *(_QWORD *)&BaseServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&BaseServantEntity_k__BackingField->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v8.fields.currentCryptoKey = v5;
  *(_QWORD *)&v8.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v8, 0);
}


int32_t PartyServantListViewItem__get_ClassId(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.classId;
}


int32_t PartyServantListViewItem__get_Cost(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.cost;
}


int32_t PartyServantListViewItem__get_EquipCost(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *equipServantEntity; // x8

  equipServantEntity = this->fields.equipServantEntity;
  if ( equipServantEntity )
    return equipServantEntity->fields.cost;
  else
    return 0;
}


int64_t PartyServantListViewItem__get_FatigureTime(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.fatigureTime;
}


int32_t PartyServantListViewItem__get_FrameType(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.frameType;
}


System_ValueTuple_int__int__EventCombineEntity_CalcType__array *PartyServantListViewItem__get_FriendshipUpValTuple(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._FriendshipUpValTuple_k__BackingField;
}


int32_t PartyServantListViewItem__get_Hp(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.hp;
}


IconLabelInfo_o *PartyServantListViewItem__get_IconInfo1(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo1;
}


IconLabelInfo_o *PartyServantListViewItem__get_IconInfo2(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo2;
}


IconLabelInfo_o *PartyServantListViewItem__get_IconInfo3(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconLabelInfo3;
}


bool PartyServantListViewItem__get_IsAllOutBattle(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsAllOutBattle_k__BackingField;
}


bool PartyServantListViewItem__get_IsBase(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isBase;
}


bool PartyServantListViewItem__get_IsChoice(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isChoice;
}


bool PartyServantListViewItem__get_IsClearedWave(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsClearedWave_k__BackingField;
}


bool PartyServantListViewItem__get_IsConvertOverwriteImage(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isConvertOverwriteImage;
}


bool PartyServantListViewItem__get_IsDataLost(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsDataLost_k__BackingField;
}


bool PartyServantListViewItem__get_IsDispChoice(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool PartyServantListViewItem__get_IsDispLock(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
}


bool PartyServantListViewItem__get_IsDispSvtPoint(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsDispSvtPoint_k__BackingField;
}


bool PartyServantListViewItem__get_IsEnabled(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEnabled;
}


bool PartyServantListViewItem__get_IsEquip(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.equipServantEntity != 0;
}


bool PartyServantListViewItem__get_IsEquipFriendShipSkillChangeOnParty(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsEquipFriendShipSkillChangeOnParty_k__BackingField;
}


bool PartyServantListViewItem__get_IsEventJoin(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isEventJoin;
}


bool PartyServantListViewItem__get_IsFatigureRecover(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isFatigureRecover;
}


bool PartyServantListViewItem__get_IsFocus(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsFocus_k__BackingField;
}


bool PartyServantListViewItem__get_IsGrandSameServant(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsGrandSameServant_k__BackingField;
}


bool PartyServantListViewItem__get_IsInvalidRarity(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isInvalidRarity;
}


bool PartyServantListViewItem__get_IsLeave(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLeave;
}


bool PartyServantListViewItem__get_IsLock(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLock;
}


bool PartyServantListViewItem__get_IsLockMode(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isLockMode;
}


bool PartyServantListViewItem__get_IsNotSameParty(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isNotSameParty;
}


bool PartyServantListViewItem__get_IsOrganizedWave(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._OrganizedWave_k__BackingField > 0;
}


bool PartyServantListViewItem__get_IsParty(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex >= 0;
}


bool PartyServantListViewItem__get_IsPush(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPush;
}


bool PartyServantListViewItem__get_IsPushMode(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPushMode;
}


bool PartyServantListViewItem__get_IsQuestRestriction(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isQuestRestriction;
}


bool PartyServantListViewItem__get_IsQuestRestrictionWhole(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isQuestRestrictionWhole;
}


bool PartyServantListViewItem__get_IsRestricted(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.commonRestrictionId >= 0;
}


bool PartyServantListViewItem__get_IsSame(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSame;
}


bool PartyServantListViewItem__get_IsSelectMode(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSelectMode;
}


bool PartyServantListViewItem__get_IsSwapChoice(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapChoice;
}


bool PartyServantListViewItem__get_IsSwapLock(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSwapLock;
}


bool PartyServantListViewItem__get_IsUniqueIndividualityRestriction(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isUniqueIndividualityRestriction;
}


bool PartyServantListViewItem__get_IsUniqueSvtRestriction(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isUniqueSvtRestriction;
}


bool PartyServantListViewItem__get_IsValidDataLostDisplay(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return !this->fields.isLockMode && !this->fields.isSelectMode && !this->fields.isPushMode;
}


int32_t PartyServantListViewItem__get_MaxWave(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._MaxWave_k__BackingField;
}


int32_t PartyServantListViewItem__get_OrganizedWave(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._OrganizedWave_k__BackingField;
}


int32_t PartyServantListViewItem__get_PartyIndex(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyIndex;
}


int32_t PartyServantListViewItem__get_PartyListViewItemMenuKind(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._PartyListViewItemMenuKind_k__BackingField;
}


QuestRestrictionInfo_o *PartyServantListViewItem__get_QuestRestriction(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.questRestrictionInfo;
}


int32_t PartyServantListViewItem__get_RarityId(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rarityId;
}


ServantEntity_o *PartyServantListViewItem__get_ServantEntity(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantEntity_k__BackingField;
}


int32_t PartyServantListViewItem__get_ServantId(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyServantListViewItem_o *v3; // x19
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v3 = this;
  if ( (byte_596C217 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596C217 = 1;
  }
  ServantEntity_k__BackingField = v3->fields._ServantEntity_k__BackingField;
  if ( !ServantEntity_k__BackingField )
    sub_2213CDC(this, method);
  v5 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  v6 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v8.fields.currentCryptoKey = v5;
  *(_QWORD *)&v8.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v8, 0);
}


int32_t PartyServantListViewItem__get_SvtPoint(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._SvtPoint_k__BackingField;
}


int32_t PartyServantListViewItem__get_SvtPointRank(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._SvtPointRank_k__BackingField;
}


int32_t PartyServantListViewItem__get_TempOverwriteTreasureDeviceLv(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
}


int32_t PartyServantListViewItem__get_TimesToRestart(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._TimesToRestart_k__BackingField;
}


UserServantEntity_o *PartyServantListViewItem__get_UserServant(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.userServantEntity;
}


System_Int32_array *PartyServantListViewItem__get_WaveBattleEnemyClassIds(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_o *baseItem; // x8

  baseItem = this->fields.baseItem;
  if ( !baseItem )
    sub_2213CDC(this, method);
  return baseItem->fields._WaveEnemyClassIds_k__BackingField;
}


void PartyServantListViewItem__set_BaseServantEntity(
        PartyServantListViewItem_o *this,
        ServantEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BaseServantEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BaseServantEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PartyServantListViewItem__set_FriendshipUpValTuple(
        PartyServantListViewItem_o *this,
        System_ValueTuple_int__int__EventCombineEntity_CalcType__array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._FriendshipUpValTuple_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PartyServantListViewItem__set_IsAllOutBattle(
        PartyServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsAllOutBattle_k__BackingField = value;
}


void PartyServantListViewItem__set_IsClearedWave(
        PartyServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsClearedWave_k__BackingField = value;
}


void PartyServantListViewItem__set_IsDataLost(PartyServantListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsDataLost_k__BackingField = value;
}


void PartyServantListViewItem__set_IsDispSvtPoint(
        PartyServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDispSvtPoint_k__BackingField = value;
}


void PartyServantListViewItem__set_IsEnabled(PartyServantListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isEnabled = value;
}


void PartyServantListViewItem__set_IsFocus(PartyServantListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsFocus_k__BackingField = value;
}


void PartyServantListViewItem__set_IsGrandSameServant(
        PartyServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsGrandSameServant_k__BackingField = value;
}


void PartyServantListViewItem__set_IsLockMode(PartyServantListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isLockMode = value;
}


void PartyServantListViewItem__set_IsPush(PartyServantListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isPush = value;
}


void PartyServantListViewItem__set_IsPushMode(PartyServantListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isPushMode = value;
}


void PartyServantListViewItem__set_IsSelectMode(PartyServantListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isSelectMode = value;
}


void PartyServantListViewItem__set_MaxWave(PartyServantListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._MaxWave_k__BackingField = value;
}


void PartyServantListViewItem__set_OrganizedWave(
        PartyServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._OrganizedWave_k__BackingField = value;
}


void PartyServantListViewItem__set_PartyListViewItemMenuKind(
        PartyServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._PartyListViewItemMenuKind_k__BackingField = value;
}


void PartyServantListViewItem__set_ServantEntity(
        PartyServantListViewItem_o *this,
        ServantEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ServantEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PartyServantListViewItem__set_SvtPoint(PartyServantListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._SvtPoint_k__BackingField = value;
}


void PartyServantListViewItem__set_SvtPointRank(
        PartyServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SvtPointRank_k__BackingField = value;
}


void PartyServantListViewItem__set_TempOverwriteTreasureDeviceLv(
        PartyServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = value;
}


void PartyServantListViewItem__set_TimesToRestart(
        PartyServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TimesToRestart_k__BackingField = value;
}