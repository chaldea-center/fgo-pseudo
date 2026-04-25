void PartyServantListViewItem___cctor(const MethodInfo *method)
{
  struct PartyServantListViewItem_StaticFields *static_fields; // x8

  if ( (byte_4E005B7 & 1) == 0 )
  {
    sub_1CE6700(&PartyServantListViewItem_TypeInfo);
    byte_4E005B7 = 1;
  }
  static_fields = PartyServantListViewItem_TypeInfo->static_fields;
  static_fields->PriorityGrandServantOnActiveGrandBoard = 20;
  *(_OWORD *)&static_fields->PRIORITY_NORMAL = xmmword_D24D30;
  *(_OWORD *)&static_fields->PRIORITY_LOWEST = xmmword_D254B0;
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
  IconLabelInfo_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  IconLabelInfo_o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  IconLabelInfo_o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int64_t Instance; // x0
  int64_t NotSamePartyKey; // x1
  struct PartyOrganizationListViewItem_o *Member; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  UserServantEntity_o **p_userServantEntity; // x24
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  struct ServantEntity_o *ServantEntity; // x0
  struct ServantEntity_o **p_ServantEntity_k__BackingField; // x20
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  struct ServantEntity_o *BaseServantEntity; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  UserServantEntity_o *v82; // x8
  __int128 v83; // q1
  UserServantCollectionMaster_o *v84; // x21
  int64_t v85; // x23
  const MethodInfo *v86; // x1
  int32_t v87; // w20
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  System_Collections_Generic_List_object__o *v106; // x21
  int32_t v107; // w2
  int32_t v108; // w3
  System_String_o *v109; // x4
  int32_t v110; // w5
  int64_t v111; // x6
  System_String_o *v112; // x7
  PartyListViewItem_o *v113; // x22
  int32_t i; // w23
  BalanceConfig_c *v115; // x0
  PartyOrganizationListViewItem_o *v116; // x29
  UserServantEntity_o *v117; // x8
  __int128 v118; // q0
  struct UserServantEntity_o *v119; // x8
  __int128 v120; // q0
  int64_t v121; // x20
  __int128 v122; // q0
  const MethodInfo_3A2F810 *v123; // x3
  struct UserServantEntity_o *v124; // x27
  int64_t v125; // x20
  int64_t v126; // x22
  __int128 v127; // q0
  __int128 v128; // q1
  const MethodInfo_3A2E600 *v129; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v130; // x8
  __int64 v131; // x20
  __int64 v132; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v133; // x8
  int v134; // w20
  int v135; // w20
  struct System_Int32_array *items; // x8
  _QWORD *v137; // x9
  __int64 size; // x10
  struct ServantEntity_o *v139; // x8
  __int64 v140; // x20
  __int64 v141; // x27
  int32_t v142; // w20
  int32_t v143; // w29
  int32_t IncludedRestrictionIds; // w0
  struct PartyOrganizationListViewItem_o *v145; // x8
  struct ServantEntity_o *v146; // x8
  __int64 v147; // x20
  __int64 v148; // x21
  __int64 v149; // x20
  __int64 v150; // x21
  const MethodInfo_3A2F334 *v151; // x4
  struct UserServantEntity_o *v152; // x8
  int v153; // w22
  __int64 v154; // x20
  __int64 v155; // x21
  int32_t v156; // w1
  System_Nullable_int__o v157; // x0
  System_Int64_array *EquipList; // x0
  const MethodInfo *v159; // x2
  struct ServantEntity_o *BaseServantEntity_k__BackingField; // x8
  __int64 v161; // x20
  __int64 v162; // x21
  System_Int64_array *EquipUserServantIdList; // x0
  const MethodInfo *v164; // x2
  __int128 v165; // q0
  UserServantGrandEntity_o *FirstByUserSvtId; // x0
  System_Int64_array *v167; // x0
  const MethodInfo *v168; // x2
  bool v169; // cc
  __int128 v170; // q0
  BalanceConfig_c *v171; // x0
  System_Collections_Generic_List_int__o *v172; // x21
  PartyListViewItem_array *v173; // x9
  il2cpp_array_size_t max_length; // x8
  int32_t v175; // w23
  unsigned __int64 v176; // x20
  int32_t v177; // w27
  PartyListViewItem_o *v178; // x22
  int32_t v179; // w23
  PartyOrganizationListViewItem_o *v180; // x29
  struct System_Int32_array *v181; // x8
  _QWORD *v182; // x9
  __int64 v183; // x10
  UserServantEntity_o *v184; // x26
  struct UserServantEntity_o *v185; // x8
  __int128 v186; // q0
  System_Int64_array *v187; // x0
  const MethodInfo *v188; // x2
  const MethodInfo *v189; // x1
  const MethodInfo *v190; // x1
  UserServantEntity_o *v191; // x27
  bool IsChoice; // w0
  UserServantEntity_o *v193; // x8
  __int128 v194; // q0
  __int64 v195; // x20
  bool v196; // zf
  bool v197; // w8
  UserServantEntity_o *v198; // x8
  const MethodInfo *v199; // x1
  UserServantEntity_o *v200; // x8
  UserServantEntity_o *v201; // x8
  bool IsUniqueIndividualityRestriction_44309036; // w0
  const MethodInfo *v203; // x1
  struct QuestRestrictionInfo_o *v204; // x8
  int32_t eventId; // w22
  UserEventServantFatigueMaster_o *v206; // x21
  bool FatigueInfo; // w0
  int64_t v208; // x20
  bool AllOutBattleAlreadyUsed; // w0
  struct QuestRestrictionInfo_o *v210; // x8
  Il2CppObject *v211; // x20
  UserServantEntity_o *v212; // x8
  UserEventDataLostEntity_o *v213; // x20
  __int64 v214; // x21
  __int64 v215; // x22
  UserServantEntity_o *v216; // x8
  char v217; // w20
  UserEventDataLostEntity_o *v218; // x21
  __int64 v219; // x22
  __int64 v220; // x23
  int32_t v221; // w21
  struct PartyOrganizationListViewItem_o *v222; // x8
  UserServantGrandEntity_o *EntityFromSvtId; // x0
  System_Int64_array *v224; // x0
  const MethodInfo *v225; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr10_16
  UserServantEntity_o *v227; // x8
  int64_t v228; // x20
  __int64 v229; // x22
  __int64 v230; // x23
  int32_t v231; // w22
  int32_t Rarity; // w23
  const MethodInfo *v233; // x7
  System_String_o **p_skillName; // x1
  int32_t *p_actMaxRarity; // x2
  int32_t partyIndex; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v237; // kr20_16
  UserServantEntity_o *v238; // x8
  int64_t v239; // x20
  __int64 v240; // x22
  __int64 v241; // x23
  struct QuestRestrictionInfo_o *v242; // x8
  EventServantPointRankMaster_o *v243; // x22
  UserServantEntity_o *v244; // x8
  __int128 v245; // q0
  UserEventServantPointMaster_o *v246; // x20
  int64_t v247; // x23
  int32_t *p_SvtPoint_k__BackingField; // x26
  int32_t v249; // w20
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  System_Collections_Generic_List_T__o *v252; // x21
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v254; // x20
  Il2CppObject *v255; // x22
  _BOOL8 v256; // x0
  __int64 v257; // x1
  EventCampaignEntity_o *current; // x23
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x20
  __int64 v260; // x26
  __int64 v261; // x27
  int32_t v262; // w1
  int32_t v263; // w20
  int32_t FriendshipBonusValue; // w0
  int32_t calcType; // w3
  int32_t v266; // w2
  const MethodInfo_3C8C094 *v267; // x5
  __int64 v268; // x0
  __int64 v269; // x1
  System_ValueTuple_int__int__Int32Enum__o v270; // x1 OVERLAPPED
  struct System_Object_array *v271; // x8
  _QWORD *v272; // x9
  __int64 v273; // x10
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v274; // x0
  int32_t v275; // w2
  int32_t v276; // w3
  System_String_o *v277; // x4
  int32_t v278; // w5
  int64_t v279; // x6
  System_String_o *v280; // x7
  BalanceConfig_c *v281; // x8
  int v282; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 v284; // x20
  __int64 v285; // x21
  int32_t v286; // w0
  IconLabelInfo_o *iconLabelInfo1; // x8
  __int128 v288; // q0
  UserServantGrandEntity_o *v289; // x0
  UserServantGrandEntity_o *v290; // x20
  System_Int64_array *v291; // x0
  const MethodInfo *v292; // x2
  UserServantGrandEntity_o *v293; // x20
  System_Int64_array *v294; // x0
  const MethodInfo *v295; // x2
  bool v296; // w8
  System_Collections_Generic_List_int__o *v297; // [xsp+10h] [xbp-390h]
  UserServantGrandMaster_o *Master_object; // [xsp+20h] [xbp-380h]
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+30h] [xbp-370h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+40h] [xbp-360h]
  bool IsNotSameParty; // [xsp+4Ch] [xbp-354h]
  UserServantEntity_Fields *p_fields; // [xsp+50h] [xbp-350h]
  struct PartyOrganizationListViewItem_o **p_baseItem; // [xsp+58h] [xbp-348h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_BaseServantEntity_k__BackingField; // [xsp+60h] [xbp-340h]
  int64_t v305; // [xsp+78h] [xbp-328h]
  UserServantEntity_o *v306; // [xsp+80h] [xbp-320h]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+A8h] [xbp-2F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v311; // [xsp+B0h] [xbp-2F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v312; // [xsp+D0h] [xbp-2D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v313; // [xsp+F0h] [xbp-2B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v314; // [xsp+110h] [xbp-290h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v315; // [xsp+130h] [xbp-270h] BYREF
  __int128 v316; // [xsp+150h] [xbp-250h]
  __int128 v317; // [xsp+160h] [xbp-240h]
  _BYTE item[40]; // [xsp+170h] [xbp-230h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v319; // [xsp+1A0h] [xbp-200h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v320; // [xsp+1C0h] [xbp-1E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v321; // [xsp+1E0h] [xbp-1C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v322; // [xsp+200h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v323; // [xsp+220h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v324; // [xsp+240h] [xbp-160h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v325; // [xsp+260h] [xbp-140h] BYREF
  UserEventServantPointEntity_o *v326; // [xsp+280h] [xbp-120h] BYREF
  int32_t actMaxRarity; // [xsp+28Ch] [xbp-114h] BYREF
  System_String_o *skillName; // [xsp+290h] [xbp-110h] BYREF
  int v329; // [xsp+29Ch] [xbp-104h] BYREF
  __int64 v330; // [xsp+2A0h] [xbp-100h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+2A8h] [xbp-F8h] BYREF
  int64_t recoverAt; // [xsp+2B0h] [xbp-F0h] BYREF
  int32_t friendshipRank; // [xsp+2BCh] [xbp-E4h] BYREF
  _OWORD v334[2]; // [xsp+2C0h] [xbp-E0h] BYREF
  __int128 v335; // [xsp+2E0h] [xbp-C0h]
  _OWORD v336[2]; // [xsp+2F0h] [xbp-B0h] BYREF
  _BYTE v337[39]; // [xsp+310h] [xbp-90h] BYREF
  __int64 v338; // [xsp+338h] [xbp-68h]
  System_ValueTuple_int__int__Int32Enum__o v339; // 0:x0.12
  System_Nullable_T__o v340; // 0:x0.16
  System_Nullable_long__o v341; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v342; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v343; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v344; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v345; // 0:x0.16
  System_Nullable_T__o v346; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v347; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v348; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v349; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v350; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v351; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v352; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v353; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v354; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v355; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v356; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v357; // 0:x2.16

  v338 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_4E005A7 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&CommonRestrictionMaster_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1CE6700(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1CE6700(&IconLabelInfo_TypeInfo);
    sub_1CE6700(&long___TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_int__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_1CE6700(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1CE6700(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__);
    sub_1CE6700(&Method_System_Nullable_ObscuredInt__GetValueOrDefault__);
    sub_1CE6700(&Method_System_Nullable_long___ctor__);
    sub_1CE6700(&Method_System_Nullable_int___ctor__);
    sub_1CE6700(&Method_System_Nullable_ObscuredInt___ctor__);
    sub_1CE6700(&Method_System_Nullable_ObscuredLong___ctor__);
    sub_1CE6700(&Method_System_Nullable_ObscuredLong__get_HasValue__);
    sub_1CE6700(&Method_System_Nullable_ObscuredInt__get_HasValue__);
    sub_1CE6700(&Method_System_Nullable_long__get_HasValue__);
    sub_1CE6700(&Method_System_Nullable_int__get_HasValue__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1CE6700(&Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__);
    byte_4E005A7 = 1;
  }
  friendshipRank = 0;
  recoverAt = 0;
  entity = 0;
  v330 = 0;
  v329 = 0;
  skillName = 0;
  actMaxRarity = 0;
  v326 = 0;
  memset(&v325, 0, sizeof(v325));
  memset(v337, 0, sizeof(v337));
  v335 = 0u;
  memset(v336, 0, 23);
  v17 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0);
  this->fields.iconLabelInfo1 = v17;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo1, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0);
  this->fields.iconLabelInfo2 = v24;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo2, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v31, 0);
  this->fields.iconLabelInfo3 = v31;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo3, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  ListViewItem___ctor_44921328((ListViewItem_o *)this, index, 0);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_309;
  Member = PartyListViewItem__GetMember(partyItem, num, 0);
  this->fields.baseItem = Member;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.baseItem, (int32_t)Member, v41, v42, v43, v44, v45, v46);
  baseItem = this->fields.baseItem;
  this->fields._PartyListViewItemMenuKind_k__BackingField = partyItem->fields.menuKind;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_309;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v55, v56, v57, v58, v59, v60);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  if ( !userServantEntity )
    goto LABEL_309;
  ServantEntity = UserServantEntity__GetServantEntity(userServantEntity, -1, 0);
  p_ServantEntity_k__BackingField = &this->fields._ServantEntity_k__BackingField;
  this->fields._ServantEntity_k__BackingField = ServantEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantEntity_k__BackingField,
    (int32_t)ServantEntity,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  BaseServantEntity = UserServantEntity__get_BaseServantEntity(userServantEntity, 0);
  this->fields._BaseServantEntity_k__BackingField = BaseServantEntity;
  p_BaseServantEntity_k__BackingField = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields._BaseServantEntity_k__BackingField;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._BaseServantEntity_k__BackingField,
    (int32_t)BaseServantEntity,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  this->fields._IsGrandSameServant_k__BackingField = isGrandSameServant;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_309;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v82 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_309;
  v83 = *(_OWORD *)&v82->fields.userId.fields.fakeValue;
  v84 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)item = *(_OWORD *)&v82->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&item[16] = v83;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v324 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
  v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v324, 0);
  Instance = PartyServantListViewItem__get_BaseServantId(this, v86);
  if ( !v84 )
    goto LABEL_309;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v84, v85, Instance, 0);
  if ( !*p_ServantEntity_k__BackingField )
    goto LABEL_309;
  this->fields.classId = (*p_ServantEntity_k__BackingField)->fields.classId;
  if ( !Instance )
    goto LABEL_309;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &friendshipRank,
    &this->fields.friendshipMax,
    0);
  v87 = friendshipRank;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v87, 0);
  this->fields.isBase = 0;
  this->fields.isSame = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.equipUserServantEntity, 0, v88, v89, v90, v91, v92, v93);
  this->fields.equipServantEntity = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntity, 0, v94, v95, v96, v97, v98, v99);
  this->fields.equipIdList = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, 0, v100, v101, v102, v103, v104, v105);
  v106 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v106,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v106;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntityList,
    (int32_t)v106,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  Instance = (int64_t)this->fields._BaseServantEntity_k__BackingField;
  this->fields._IsEquipFriendShipSkillChangeOnParty_k__BackingField = 0;
  if ( !Instance )
    goto LABEL_309;
  v306 = userServantEntity;
  IsNotSameParty = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0);
  v297 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v297,
    (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
  v113 = partyItem;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantGrandMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  p_fields = &userServantEntity->fields;
  p_baseItem = &this->fields.baseItem;
  v305 = 0;
  for ( i = 0; ; ++i )
  {
    v115 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v115 = BalanceConfig_TypeInfo;
    }
    if ( i >= v115->static_fields->DeckMemberMax )
      goto LABEL_118;
    Instance = (int64_t)PartyListViewItem__GetMember(v113, i, 0);
    if ( !Instance )
      goto LABEL_309;
    v116 = (PartyOrganizationListViewItem_o *)Instance;
    if ( !*(_QWORD *)(Instance + 120) )
      continue;
    v117 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_309;
    v118 = *(_OWORD *)&v117->fields.id.fields.fakeValue;
    *(_OWORD *)item = *(_OWORD *)&v117->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&item[16] = v118;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v323 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v323, 0);
    v119 = v116->fields.userServantEntity;
    if ( !v119 )
      goto LABEL_309;
    v120 = *(_OWORD *)&v119->fields.id.fields.fakeValue;
    v121 = Instance;
    *(_OWORD *)&v322.fields.currentCryptoKey = *(_OWORD *)&v119->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v322.fields.fakeValue = v120;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v322, 0);
    if ( v121 == Instance )
      break;
    if ( isGrandSameServant )
    {
      v122 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)item = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
      *(_OWORD *)&item[16] = v122;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v319 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v319, 0);
      if ( !*p_baseItem )
        goto LABEL_309;
      v124 = (*p_baseItem)->fields.userServantEntity;
      v125 = Instance;
      if ( v124 )
        v126 = Instance;
      else
        v126 = v305;
      if ( !v124 )
      {
        v335 = 0u;
        memset(v336, 0, 23);
        memset(v337, 0, sizeof(v337));
LABEL_82:
        this->fields.isBase = 0;
        this->fields.isSame = 0;
        v150 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v149 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v345.fields.currentCryptoKey = v150;
        *(_QWORD *)&v345.fields.fakeValue = v149;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v345, 0);
        if ( !*p_baseItem )
          goto LABEL_309;
        v152 = (*p_baseItem)->fields.userServantEntity;
        if ( v152 )
          v153 = Instance;
        else
          v153 = 0;
        if ( v152 )
        {
          v346.fields.value = *(Il2CppObject **)&v152->fields.svtId.fields.currentCryptoKey;
          *(_QWORD *)&v357.fields.currentCryptoKey = *(_QWORD *)&v152->fields.svtId.fields.fakeValue;
          *(_QWORD *)&v346.fields.hasValue = item;
          memset(item, 0, 20);
          *(_QWORD *)&v357.fields.fakeValue = Method_System_Nullable_ObscuredInt___ctor__;
          System_Nullable_ObscuredInt____ctor(v346, v357, v151);
          if ( item[0] )
          {
            v154 = *(_QWORD *)&item[4];
            v155 = *(_QWORD *)&item[12];
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v347.fields.currentCryptoKey = v154;
            *(_QWORD *)&v347.fields.fakeValue = v155;
            v156 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v347, 0);
            v157 = (System_Nullable_int__o)item;
            *(_QWORD *)item = 0;
            System_Nullable_int____ctor(v157, v156, (const MethodInfo_3A2DE74 *)Method_System_Nullable_int___ctor__);
            if ( item[0] )
            {
              if ( v153 == *(_DWORD *)&item[4] )
              {
                Instance = (int64_t)*p_baseItem;
                if ( !*p_baseItem )
                  goto LABEL_309;
                EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0);
                PartyServantListViewItem__SetEquipStatus(this, EquipList, v159);
                v113 = partyItem;
                goto LABEL_118;
              }
            }
          }
        }
        BaseServantEntity_k__BackingField = v116->fields._BaseServantEntity_k__BackingField;
        if ( !BaseServantEntity_k__BackingField )
          goto LABEL_309;
        v162 = *(_QWORD *)&BaseServantEntity_k__BackingField->fields.baseSvtId.fields.currentCryptoKey;
        v161 = *(_QWORD *)&BaseServantEntity_k__BackingField->fields.baseSvtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v348.fields.currentCryptoKey = v162;
        *(_QWORD *)&v348.fields.fakeValue = v161;
        NotSamePartyKey = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v348, 0);
        v113 = partyItem;
        Instance = (int64_t)Master_object;
        if ( !Master_object )
          goto LABEL_309;
        Instance = (int64_t)UserServantGrandMaster__GetEntityFromSvtId(Master_object, NotSamePartyKey, 0);
        if ( !Instance )
          goto LABEL_309;
        goto LABEL_101;
      }
      v127 = *(_OWORD *)&v124->fields.id.fields.currentCryptoKey;
      v128 = *(_OWORD *)&v124->fields.id.fields.fakeValue;
      memset(item, 0, sizeof(item));
      *(_QWORD *)&v340.fields.hasValue = item;
      v340.fields.value = (Il2CppObject *)v334;
      v316 = v127;
      v317 = v128;
      v334[0] = v127;
      v334[1] = v128;
      System_Nullable_ObscuredLong____ctor(
        v340,
        (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
        v123);
      *(_QWORD *)((char *)v336 + 15) = *(_QWORD *)&item[32];
      v335 = *(_OWORD *)&item[1];
      v336[0] = *(_OWORD *)&item[17];
      *(_QWORD *)&v337[31] = *(_QWORD *)((char *)v336 + 15);
      *(_OWORD *)v337 = *(_OWORD *)&item[1];
      *(_OWORD *)&v337[16] = *(_OWORD *)&item[17];
      if ( !item[0] )
        goto LABEL_82;
      *(_OWORD *)item = *(_OWORD *)&v337[7];
      *(_OWORD *)&item[16] = *(_OWORD *)&v337[23];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v315 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
      v341.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v315, 0);
      *(_QWORD *)&v341.fields.hasValue = v334;
      v334[0] = 0u;
      System_Nullable_long____ctor(v341, Method_System_Nullable_long___ctor__, v129);
      if ( !LOBYTE(v334[0]) || v126 != *((_QWORD *)&v334[0] + 1) )
        goto LABEL_82;
      v113 = partyItem;
      v305 = v125;
    }
    if ( num != i )
    {
      v130 = *p_BaseServantEntity_k__BackingField;
      if ( !*p_BaseServantEntity_k__BackingField )
        goto LABEL_309;
      v132 = *(_QWORD *)&v130[2].fields.currentCryptoKey;
      v131 = *(_QWORD *)&v130[2].fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v342.fields.currentCryptoKey = v132;
      *(_QWORD *)&v342.fields.fakeValue = v131;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v342, 0);
      v133 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v116->fields._BaseServantEntity_k__BackingField;
      if ( !v133 )
        goto LABEL_309;
      v134 = Instance;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v133[2], 0);
      if ( v134 == (_DWORD)Instance )
      {
        this->fields.isSame = 1;
      }
      else
      {
        if ( !IsNotSameParty )
          goto LABEL_61;
        Instance = (int64_t)v116->fields._BaseServantEntity_k__BackingField;
        if ( !Instance )
          goto LABEL_309;
        Instance = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0);
        if ( (Instance & 1) == 0 )
          goto LABEL_61;
        Instance = (int64_t)*p_BaseServantEntity_k__BackingField;
        if ( !*p_BaseServantEntity_k__BackingField )
          goto LABEL_309;
        Instance = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0);
        if ( !v116->fields._BaseServantEntity_k__BackingField )
          goto LABEL_309;
        v135 = Instance;
        Instance = ServantEntity__GetNotSamePartyKey(v116->fields._BaseServantEntity_k__BackingField, 0);
        if ( v135 == (_DWORD)Instance )
        {
          this->fields.isNotSameParty = 1;
          Instance = (int64_t)v116->fields._ServantEntity_k__BackingField;
          if ( !Instance )
            goto LABEL_309;
          NotSamePartyKey = (unsigned int)ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0);
          Instance = (int64_t)v297;
          if ( !v297 )
            goto LABEL_309;
          items = v297->fields._items;
          v137 = Method_System_Collections_Generic_List_int__Add__;
          ++v297->fields._version;
          if ( !items )
            goto LABEL_309;
          size = v297->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v297,
              NotSamePartyKey,
              *(const MethodInfo_38E8F44 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
          }
          else
          {
            v297->fields._size = size + 1;
            items->m_Items[size] = NotSamePartyKey;
          }
        }
        else
        {
LABEL_61:
          if ( this->fields.commonRestrictionId == -1 )
          {
            v139 = v116->fields._BaseServantEntity_k__BackingField;
            if ( !v139 )
              goto LABEL_309;
            v141 = *(_QWORD *)&v139->fields.baseSvtId.fields.currentCryptoKey;
            v140 = *(_QWORD *)&v139->fields.baseSvtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v343.fields.currentCryptoKey = v141;
            *(_QWORD *)&v343.fields.fakeValue = v140;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v343, 0);
            if ( !*p_BaseServantEntity_k__BackingField )
              goto LABEL_309;
            v142 = Instance;
            v143 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                     (*p_BaseServantEntity_k__BackingField)[2],
                     0);
            if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
            IncludedRestrictionIds = CommonRestrictionMaster__GetIncludedRestrictionIds(v142, v143, 0);
            if ( (IncludedRestrictionIds & 0x80000000) == 0 )
              this->fields.commonRestrictionId = IncludedRestrictionIds;
          }
        }
      }
    }
  }
  this->fields.isSame = 0;
  this->fields.partyIndex = i;
  v145 = this->fields.baseItem;
  this->fields.isBase = num == i && isEnableRemove;
  if ( !v145 )
    goto LABEL_318;
  if ( v145->fields.isRestrictionGrandServant )
  {
    if ( num != i )
    {
      v146 = v116->fields._BaseServantEntity_k__BackingField;
      if ( !v146 )
        goto LABEL_309;
      v148 = *(_QWORD *)&v146->fields.baseSvtId.fields.currentCryptoKey;
      v147 = *(_QWORD *)&v146->fields.baseSvtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v344.fields.currentCryptoKey = v148;
      *(_QWORD *)&v344.fields.fakeValue = v147;
      NotSamePartyKey = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v344, 0);
      Instance = (int64_t)Master_object;
      if ( !Master_object )
        goto LABEL_309;
      Instance = (int64_t)UserServantGrandMaster__GetEntityFromSvtId(Master_object, NotSamePartyKey, 0);
      if ( !Instance )
        goto LABEL_118;
LABEL_101:
      EquipUserServantIdList = UserServantGrandEntity__GetEquipUserServantIdList(
                                 (UserServantGrandEntity_o *)Instance,
                                 0);
LABEL_117:
      PartyServantListViewItem__SetEquipStatus(this, EquipUserServantIdList, v164);
      goto LABEL_118;
    }
LABEL_116:
    EquipUserServantIdList = PartyOrganizationListViewItem__GetEquipList(v116, 0);
    goto LABEL_117;
  }
  if ( !v145->fields.isRestrictionActiveGrandBoard )
  {
LABEL_318:
    if ( v116->fields.isRestrictionActiveGrandBoard )
    {
      v170 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)item = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
      *(_OWORD *)&item[16] = v170;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v320 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
      NotSamePartyKey = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v320, 0);
      Instance = (int64_t)Master_object;
      if ( !Master_object )
        goto LABEL_309;
      if ( UserServantGrandMaster__GetFirstByUserSvtId(Master_object, NotSamePartyKey, 0) )
      {
        v171 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v171 = BalanceConfig_TypeInfo;
        }
        EquipUserServantIdList = (System_Int64_array *)sub_1CE67A8(
                                                         long___TypeInfo,
                                                         (unsigned int)v171->static_fields->SvtEquipMax);
        goto LABEL_117;
      }
    }
    goto LABEL_116;
  }
  v165 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)item = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&item[16] = v165;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v321 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
  NotSamePartyKey = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v321, 0);
  Instance = (int64_t)Master_object;
  if ( !Master_object )
    goto LABEL_309;
  FirstByUserSvtId = UserServantGrandMaster__GetFirstByUserSvtId(Master_object, NotSamePartyKey, 0);
  if ( num == i || (v293 = FirstByUserSvtId) == 0 || v116->fields.isRestrictionActiveGrandBoard )
  {
    v167 = PartyOrganizationListViewItem__GetEquipList(v116, 0);
    PartyServantListViewItem__SetEquipStatus(this, v167, v168);
    v169 = v116->fields._EquipFriendShipSkillChange_k__BackingField <= 0;
  }
  else
  {
    v294 = UserServantGrandEntity__GetEquipUserServantIdList(FirstByUserSvtId, 0);
    PartyServantListViewItem__SetEquipStatus(this, v294, v295);
    v169 = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(v293, 0) <= 0;
  }
  v296 = !v169;
  this->fields._IsEquipFriendShipSkillChangeOnParty_k__BackingField = v296;
LABEL_118:
  if ( this->fields.partyIndex < 0 )
  {
    v222 = *p_baseItem;
    if ( *p_baseItem )
    {
      if ( v222->fields.isRestrictionGrandServant )
      {
        NotSamePartyKey = (unsigned int)PartyServantListViewItem__get_BaseServantId(
                                          this,
                                          (const MethodInfo *)NotSamePartyKey);
        Instance = (int64_t)Master_object;
        if ( !Master_object )
          goto LABEL_309;
        EntityFromSvtId = UserServantGrandMaster__GetEntityFromSvtId(Master_object, NotSamePartyKey, 0);
        if ( EntityFromSvtId )
        {
          v224 = UserServantGrandEntity__GetEquipUserServantIdList(EntityFromSvtId, 0);
          PartyServantListViewItem__SetEquipStatus(this, v224, v225);
        }
      }
      else if ( v222->fields.isRestrictionActiveGrandBoard )
      {
        v288 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)item = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
        *(_OWORD *)&item[16] = v288;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v314 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
        NotSamePartyKey = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v314, 0);
        Instance = (int64_t)Master_object;
        if ( !Master_object )
          goto LABEL_309;
        v289 = UserServantGrandMaster__GetFirstByUserSvtId(Master_object, NotSamePartyKey, 0);
        if ( v289 )
        {
          v290 = v289;
          v291 = UserServantGrandEntity__GetEquipUserServantIdList(v289, 0);
          PartyServantListViewItem__SetEquipStatus(this, v291, v292);
          this->fields._IsEquipFriendShipSkillChangeOnParty_k__BackingField = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(
                                                                                v290,
                                                                                0) > 0;
        }
      }
    }
  }
  if ( this->fields._PartyListViewItemMenuKind_k__BackingField != 9 )
  {
    v175 = num;
    this->fields._OrganizedWave_k__BackingField = 0;
    goto LABEL_154;
  }
  v172 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v172,
    (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
  v173 = baseDeckItemList;
  if ( !baseDeckItemList )
    goto LABEL_309;
  max_length = baseDeckItemList->max_length;
  v175 = num;
  this->fields._MaxWave_k__BackingField = max_length;
  if ( (int)max_length < 1 )
    goto LABEL_149;
  v176 = 0;
  v177 = 1;
  while ( 2 )
  {
    if ( v176 >= (unsigned int)max_length )
      sub_1CE6960(Instance);
    v178 = v173->m_Items[v176];
    v179 = 0;
    while ( 2 )
    {
      Instance = (int64_t)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (int64_t)BalanceConfig_TypeInfo;
      }
      if ( v179 < *(_DWORD *)(*(_QWORD *)(Instance + 184) + 176LL) )
      {
        if ( !v178 )
          goto LABEL_309;
        Instance = (int64_t)PartyListViewItem__GetMember(v178, v179, 0);
        if ( !Instance )
          goto LABEL_309;
        v180 = (PartyOrganizationListViewItem_o *)Instance;
        if ( !*(_QWORD *)(Instance + 120) )
          goto LABEL_143;
        Instance = PartyOrganizationListViewItem__get_BaseServantId((PartyOrganizationListViewItem_o *)Instance, 0);
        if ( !v172 )
          goto LABEL_309;
        v181 = v172->fields._items;
        v182 = Method_System_Collections_Generic_List_int__Add__;
        ++v172->fields._version;
        if ( !v181 )
          goto LABEL_309;
        v183 = v172->fields._size;
        NotSamePartyKey = (unsigned int)Instance;
        if ( (unsigned int)v183 >= LODWORD(v181->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v172,
            Instance,
            *(const MethodInfo_38E8F44 **)(*(_QWORD *)(v182[4] + 192LL) + 112LL));
          if ( !v177 )
          {
LABEL_143:
            ++v179;
            continue;
          }
        }
        else
        {
          v172->fields._size = v183 + 1;
          v181->m_Items[v183] = Instance;
          if ( !v177 )
            goto LABEL_143;
        }
        v184 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_309;
        v185 = v180->fields.userServantEntity;
        if ( !v185 )
          goto LABEL_309;
        v186 = *(_OWORD *)&v185->fields.id.fields.fakeValue;
        *(_OWORD *)item = *(_OWORD *)&v185->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&item[16] = v186;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v313 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_50042080(&v184->fields.id, &v313, 0) )
        {
          v187 = PartyOrganizationListViewItem__GetEquipList(v180, 0);
          PartyServantListViewItem__SetEquipStatus(this, v187, v188);
          this->fields._OrganizedWave_k__BackingField = v177;
          v177 = 0;
          this->fields._IsClearedWave_k__BackingField = v178->fields._IsClearedWave_k__BackingField;
        }
        goto LABEL_143;
      }
      break;
    }
    v173 = baseDeckItemList;
    ++v176;
    if ( v177 )
      ++v177;
    else
      v177 = 0;
    LODWORD(max_length) = baseDeckItemList->max_length;
    if ( (__int64)v176 < (int)max_length )
      continue;
    break;
  }
  v113 = partyItem;
  v175 = num;
  if ( !v177 )
    goto LABEL_154;
LABEL_149:
  Instance = PartyServantListViewItem__get_BaseServantId(this, (const MethodInfo *)NotSamePartyKey);
  if ( !v172 )
    goto LABEL_309;
  if ( System_Collections_Generic_List_int___Contains(
         v172,
         Instance,
         (const MethodInfo_38E92BC *)Method_System_Collections_Generic_List_int__Contains__)
    && !this->fields.isNotSameParty )
  {
    this->fields.isSame = 1;
  }
LABEL_154:
  PartyServantListViewItem__CheckConvertOverwriteImage(this, (const MethodInfo *)NotSamePartyKey);
  PartyServantListViewItem__ModifyLimitCount(this, v189);
  PartyServantListViewItem__ModifyOverwriteStatus(this, v190);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.updateCategoryIdList = 1;
  if ( !Instance )
    goto LABEL_309;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  this->fields.isLock = Instance & 1;
  v191 = v306;
  if ( !this->fields.userServantEntity )
    goto LABEL_309;
  IsChoice = UserServantEntity__IsChoice(this->fields.userServantEntity, 0);
  *(_WORD *)&this->fields.isSwapLock = 0;
  *(_WORD *)&this->fields.isLockMode = 0;
  this->fields.isChoice = IsChoice;
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_309;
  v193 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_309;
  v194 = *(_OWORD *)&v193->fields.id.fields.fakeValue;
  v195 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)item = *(_OWORD *)&v193->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&item[16] = v194;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v312 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
  v196 = v195 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v312, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  v197 = v196;
  this->fields.isPush = v197;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_309;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0);
  v198 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v198 )
    goto LABEL_309;
  this->fields.isLeave = UserServantEntity__IsLeave(v198, 0);
  *(_QWORD *)&this->fields.bonusKind = 1;
  this->fields.isEventUpVal = 0;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v199);
  v200 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v200 )
    goto LABEL_309;
  Instance = UserServantEntity__getUniqueSvtRestriction_44308632(
               v200,
               this->fields.questRestrictionInfo,
               v113,
               v175,
               this->fields.partyIndex,
               0);
  v201 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v201 )
    goto LABEL_309;
  IsUniqueIndividualityRestriction_44309036 = UserServantEntity__IsUniqueIndividualityRestriction_44309036(
                                                v201,
                                                this->fields.questRestrictionInfo,
                                                v113,
                                                v175,
                                                this->fields.partyIndex,
                                                0);
  this->fields.isFatigureRecover = 0;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_44309036;
  this->fields.fatigureTime = -1;
  v204 = this->fields.questRestrictionInfo;
  if ( !v204 || !v204->fields.isFatigure )
    goto LABEL_177;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_309;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
  if ( !*p_questRestrictionInfo )
    goto LABEL_309;
  eventId = (*p_questRestrictionInfo)->fields.eventId;
  v206 = (UserEventServantFatigueMaster_o *)Instance;
  Instance = PartyServantListViewItem__get_BaseServantId(this, (const MethodInfo *)NotSamePartyKey);
  if ( !v206 )
    goto LABEL_309;
  FatigueInfo = UserEventServantFatigueMaster__GetFatigueInfo(
                  v206,
                  &recoverAt,
                  &this->fields.isFatigureRecover,
                  eventId,
                  Instance,
                  0);
  v113 = partyItem;
  if ( FatigueInfo )
  {
    v208 = recoverAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( v208 > NetworkManager__getTime(0) )
      this->fields.fatigureTime = recoverAt;
  }
LABEL_177:
  AllOutBattleAlreadyUsed = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v203);
  v210 = this->fields.questRestrictionInfo;
  this->fields._IsAllOutBattle_k__BackingField = AllOutBattleAlreadyUsed;
  if ( !v210 || !v210->fields.isDataLostBattle )
  {
    this->fields._IsDataLost_k__BackingField = 0;
    this->fields._TimesToRestart_k__BackingField = -1;
    goto LABEL_201;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v211 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4DFE4CA )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    byte_4DFE4CA = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v113 = partyItem;
  if ( !*p_questRestrictionInfo || !v211 )
    goto LABEL_309;
  Instance = UserEventDataLostMaster__TryGetEntity(
               (UserEventDataLostMaster_o *)v211,
               &entity,
               *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
               (*p_questRestrictionInfo)->fields.dataLostBattleId,
               0);
  if ( (Instance & 1) == 0 )
    goto LABEL_201;
  v212 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_309;
  v213 = entity;
  v215 = *(_QWORD *)&v212->fields.svtId.fields.currentCryptoKey;
  v214 = *(_QWORD *)&v212->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v349.fields.currentCryptoKey = v215;
  *(_QWORD *)&v349.fields.fakeValue = v214;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v349, 0);
  if ( !v213 )
    goto LABEL_309;
  Instance = UserEventDataLostEntity__IsRestart(v213, Instance, 0);
  v216 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_309;
  v217 = Instance;
  v218 = entity;
  v220 = *(_QWORD *)&v216->fields.svtId.fields.currentCryptoKey;
  v219 = *(_QWORD *)&v216->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v350.fields.currentCryptoKey = v220;
  *(_QWORD *)&v350.fields.fakeValue = v219;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v350, 0);
  if ( !v218 )
    goto LABEL_309;
  v113 = partyItem;
  v175 = num;
  if ( (v217 & 1) != 0 )
  {
    this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(v218, Instance, 0);
  }
  else if ( UserEventDataLostEntity__IsDataLost(v218, Instance, 0) )
  {
    this->fields._IsDataLost_k__BackingField = 1;
  }
LABEL_201:
  if ( *p_questRestrictionInfo )
    v221 = (*p_questRestrictionInfo)->fields.eventId;
  else
    v221 = -1;
  if ( !this->fields.isBase )
  {
    partyIndex = this->fields.partyIndex;
    if ( (partyIndex & 0x80000000) == 0 )
      goto LABEL_224;
  }
  Instance = (int64_t)PartyListViewItem__GetMember(v113, v175, 0);
  if ( !Instance )
    goto LABEL_309;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(EquipSvtId, 0) >= 1 )
  {
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v227 = *p_userServantEntity;
    if ( *p_userServantEntity )
    {
      v228 = Instance;
      v230 = *(_QWORD *)&v227->fields.svtId.fields.currentCryptoKey;
      v229 = *(_QWORD *)&v227->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v351.fields.currentCryptoKey = v230;
      *(_QWORD *)&v351.fields.fakeValue = v229;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v351, 0);
      if ( *p_userServantEntity )
      {
        v231 = Instance;
        Rarity = UserServantEntity__getRarity(*p_userServantEntity, 0);
        Instance = (int64_t)PartyListViewItem__GetMember(partyItem, num, 0);
        if ( Instance )
        {
          v352 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0);
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v352, 0);
          if ( v228 )
          {
            p_skillName = (System_String_o **)&v330;
            p_actMaxRarity = &v329;
            goto LABEL_235;
          }
        }
      }
    }
    goto LABEL_309;
  }
  partyIndex = this->fields.partyIndex;
  v113 = partyItem;
  if ( (partyIndex & 0x80000000) == 0 )
  {
LABEL_224:
    Instance = (int64_t)PartyListViewItem__GetMember(v113, partyIndex, 0);
    if ( !Instance )
      goto LABEL_309;
    v237 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v237, 0) >= 1 )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v238 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_309;
      v239 = Instance;
      v241 = *(_QWORD *)&v238->fields.svtId.fields.currentCryptoKey;
      v240 = *(_QWORD *)&v238->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v353.fields.currentCryptoKey = v241;
      *(_QWORD *)&v353.fields.fakeValue = v240;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v353, 0);
      if ( !*p_userServantEntity )
        goto LABEL_309;
      v231 = Instance;
      Rarity = UserServantEntity__getRarity(*p_userServantEntity, 0);
      Instance = (int64_t)PartyListViewItem__GetMember(partyItem, this->fields.partyIndex, 0);
      if ( !Instance )
        goto LABEL_309;
      v354 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0);
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v354, 0);
      if ( !v239 )
        goto LABEL_309;
      p_skillName = &skillName;
      p_actMaxRarity = &actMaxRarity;
LABEL_235:
      this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                       (PartyOrganizationUtility_o *)Instance,
                                       p_skillName,
                                       p_actMaxRarity,
                                       v231,
                                       Rarity,
                                       Instance,
                                       v221,
                                       v233);
    }
  }
  v242 = this->fields.questRestrictionInfo;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  this->fields._SvtPointRank_k__BackingField = 0;
  this->fields._SvtPoint_k__BackingField = 0;
  if ( v242 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Instance )
      goto LABEL_309;
    v243 = (EventServantPointRankMaster_o *)Instance;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v221, 0) )
    {
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v244 = *p_userServantEntity;
      if ( *p_userServantEntity )
      {
        v245 = *(_OWORD *)&v244->fields.userId.fields.fakeValue;
        v246 = (UserEventServantPointMaster_o *)Instance;
        *(_OWORD *)item = *(_OWORD *)&v244->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&item[16] = v245;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v311 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v311, 0);
        if ( *p_userServantEntity )
        {
          v247 = Instance;
          Instance = UserServantEntity__getSvtId(*p_userServantEntity, 0);
          if ( v246 )
          {
            p_SvtPoint_k__BackingField = &this->fields._SvtPoint_k__BackingField;
            if ( UserEventServantPointMaster__TryGetEntity(v246, &v326, v247, v221, Instance, 0) )
            {
              Instance = (int64_t)v326;
              if ( !v326 )
                goto LABEL_309;
              *p_SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v326, 0);
            }
            Instance = (int64_t)*p_userServantEntity;
            if ( *p_userServantEntity )
            {
              v249 = *p_SvtPoint_k__BackingField;
              SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0);
              EnableEntity = EventServantPointRankMaster__GetEnableEntity(v243, v221, v249, SvtId, 0);
              if ( EnableEntity )
                this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
              goto LABEL_254;
            }
          }
        }
      }
LABEL_309:
      sub_1CE6958(Instance, NotSamePartyKey);
    }
  }
LABEL_254:
  v252 = (System_Collections_Generic_List_T__o *)sub_1CE694C(System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
  System_Collections_Generic_List_ValueTuple_int__int__Int32Enum_____ctor(
    v252,
    (const MethodInfo_38B7408 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
  if ( *p_questRestrictionInfo )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_309;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance || !MasterData_object )
      goto LABEL_309;
    Instance = (int64_t)EventCampaignMaster__GetFriendshipUpCampaigns(
                          (EventCampaignMaster_o *)MasterData_object,
                          *(_QWORD *)(Instance + 136),
                          0);
    if ( Instance )
    {
      v254 = (System_Collections_Generic_List_object__o *)Instance;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_309;
      v255 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventQuestMaster___);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)item,
        v254,
        (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
      v325 = *(System_Collections_Generic_List_Enumerator_object__o *)item;
      while ( 1 )
      {
        v256 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v325,
                 (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v256 )
          break;
        current = (EventCampaignEntity_o *)v325.fields._current;
        if ( !v325.fields._current )
          sub_1CE6958(v256, v257);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v325.fields._current[2].monitor;
        if ( monitor && monitor[1].monitor )
        {
          v261 = *(_QWORD *)&v306->fields.svtId.fields.currentCryptoKey;
          v260 = *(_QWORD *)&v306->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v355.fields.currentCryptoKey = v261;
          *(_QWORD *)&v355.fields.fakeValue = v260;
          v262 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v355, 0);
          v256 = System_Linq_Enumerable__Contains_int_(
                   monitor,
                   v262,
                   (const MethodInfo_3220A90 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( !v256 )
            continue;
        }
        if ( !*p_questRestrictionInfo )
          sub_1CE6958(v256, v257);
        if ( !v255 )
          sub_1CE6958(v256, v257);
        if ( !EventQuestMaster__IsEventNotIncluded(
                (EventQuestMaster_o *)v255,
                current->fields.eventId,
                (*p_questRestrictionInfo)->fields.questId,
                (*p_questRestrictionInfo)->fields.questPhase,
                7,
                0,
                0) )
        {
          v263 = current->fields.eventId;
          FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0);
          calcType = current->fields.calcType;
          v266 = FriendshipBonusValue;
          *(_DWORD *)&item[8] = 0;
          *(_QWORD *)item = 0;
          *(_QWORD *)&v339.fields.Item1 = item;
          v339.fields.Item3 = v263;
          System_ValueTuple_int__int__Int32Enum____ctor(
            v339,
            v266,
            calcType,
            Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__,
            v267);
          if ( !v252 )
            sub_1CE6958(v268, v269);
          v270 = *(System_ValueTuple_int__int__Int32Enum__o *)item;
          v271 = v252->fields._items;
          v272 = Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__;
          ++v252->fields._version;
          if ( !v271 )
            sub_1CE6958(v268, *(_QWORD *)&v270.fields.Item1);
          v273 = v252->fields._size;
          if ( (unsigned int)v273 >= LODWORD(v271->max_length) )
          {
            System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____AddWithResize(
              v252,
              v270,
              *(const MethodInfo_38B7C94 **)(*(_QWORD *)(v272[4] + 192LL) + 112LL));
          }
          else
          {
            v252->fields._size = v273 + 1;
            *((System_ValueTuple_int__int__Int32Enum__o *)v271->m_Items + v273) = v270;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v325,
        (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
      v191 = v306;
    }
  }
  if ( !v252 )
    goto LABEL_309;
  v274 = (struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *)System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____ToArray(
                                                                                    v252,
                                                                                    (const MethodInfo_38B9858 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
  this->fields._FriendshipUpValTuple_k__BackingField = v274;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (int32_t)v274,
    v275,
    v276,
    v277,
    v278,
    v279,
    v280);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_309;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_309;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_34E925C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_309;
  this->fields.priority = *(_DWORD *)(Instance + 52);
  PartyServantListViewItem__InitAfterSecondSort(this, (const MethodInfo *)NotSamePartyKey);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_309;
  v281 = BalanceConfig_TypeInfo;
  v282 = *(_DWORD *)(Instance + 420);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v281 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v281->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v282;
  if ( !Instance )
    goto LABEL_309;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 416);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Instance = 0;
  if ( (this->fields.partyIndex & 0x80000000) == 0 && questRestrictionInfo )
  {
    v285 = *(_QWORD *)&v191->fields.svtId.fields.currentCryptoKey;
    v284 = *(_QWORD *)&v191->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v356.fields.currentCryptoKey = v285;
    *(_QWORD *)&v356.fields.fakeValue = v284;
    v286 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v356, 0);
    Instance = QuestRestrictionInfo__GetOverwriteTempTreasureDeviceLv(questRestrictionInfo, v286, 0);
  }
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = Instance;
  this->fields.amountSortValue = -1;
  if ( !iconLabelInfo1 )
    goto LABEL_309;
  IconLabelInfo__Clear(iconLabelInfo1, 0);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_309;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (int64_t)*p_iconLabelInfo3;
  if ( !*p_iconLabelInfo3 )
    goto LABEL_309;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void PartyServantListViewItem___ctor_35589000(
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
  IconLabelInfo_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  IconLabelInfo_o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  IconLabelInfo_o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int64_t Instance; // x0
  const MethodInfo *v39; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct UserServantEntity_o **p_userServantEntity; // x23
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  struct ServantEntity_o *ServantEntity; // x0
  struct ServantEntity_o **p_ServantEntity_k__BackingField; // x27
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  struct ServantEntity_o *BaseServantEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_BaseServantEntity_k__BackingField; // x26
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  struct UserServantEntity_o *v83; // x8
  __int128 v84; // q1
  UserServantCollectionMaster_o *v85; // x28
  int64_t v86; // x20
  const MethodInfo *v87; // x1
  int32_t v88; // w20
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  System_Collections_Generic_List_object__o *v107; // x21
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  char v115; // w28
  int32_t v116; // w27
  PartyOrganizationListViewItem_o *v117; // x29
  struct UserServantEntity_o *v118; // x8
  __int128 v119; // q0
  struct UserServantEntity_o *v120; // x8
  __int128 v121; // q0
  int64_t v122; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v123; // x8
  __int64 v124; // x20
  __int64 v125; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *BaseServantEntity_k__BackingField; // x8
  int v127; // w20
  int v128; // w20
  struct ServantEntity_o *v129; // x8
  __int64 v130; // x20
  __int64 v131; // x21
  int32_t v132; // w29
  int32_t v133; // w20
  System_Int64_array *EquipList; // x0
  const MethodInfo *v135; // x2
  const MethodInfo *v136; // x1
  const MethodInfo *v137; // x1
  bool IsChoice; // w8
  UserServantEntity_o *v139; // x8
  const MethodInfo *v140; // x1
  UserServantEntity_o *v141; // x8
  UserServantEntity_o *v142; // x8
  bool IsUniqueIndividualityRestriction_44309036; // w0
  const MethodInfo *v144; // x1
  struct QuestRestrictionInfo_o *v145; // x8
  int32_t eventId; // w25
  UserEventServantFatigueMaster_o *v147; // x24
  int64_t v148; // x20
  BalanceConfig_c *v149; // x8
  int v150; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+8h] [xbp-108h]
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+10h] [xbp-100h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+18h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v155; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v156; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v157; // [xsp+60h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v158; // [xsp+80h] [xbp-90h]
  int64_t recoverAt; // [xsp+A0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+ACh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16

  if ( (byte_4E005A8 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&CommonRestrictionMaster_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1CE6700(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1CE6700(&IconLabelInfo_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E005A8 = 1;
  }
  friendshipRank = 0;
  recoverAt = 0;
  v17 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0);
  this->fields.iconLabelInfo1 = v17;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo1, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0);
  this->fields.iconLabelInfo2 = v24;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo2, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (IconLabelInfo_o *)sub_1CE694C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v31, 0);
  this->fields.iconLabelInfo3 = v31;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo3, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  ListViewItem___ctor_44921328((ListViewItem_o *)this, index, 0);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_79;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, num, 0);
  this->fields.baseItem = MemberItem;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.baseItem, (int32_t)MemberItem, v41, v42, v43, v44, v45, v46);
  baseItem = this->fields.baseItem;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_79;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v55, v56, v57, v58, v59, v60);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  if ( !userServantEntity )
    goto LABEL_79;
  ServantEntity = UserServantEntity__GetServantEntity(userServantEntity, -1, 0);
  p_ServantEntity_k__BackingField = &this->fields._ServantEntity_k__BackingField;
  this->fields._ServantEntity_k__BackingField = ServantEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantEntity_k__BackingField,
    (int32_t)ServantEntity,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  BaseServantEntity = UserServantEntity__get_BaseServantEntity(userServantEntity, 0);
  p_BaseServantEntity_k__BackingField = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields._BaseServantEntity_k__BackingField;
  this->fields._BaseServantEntity_k__BackingField = BaseServantEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._BaseServantEntity_k__BackingField,
    (int32_t)BaseServantEntity,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v83 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_79;
  v84 = *(_OWORD *)&v83->fields.userId.fields.fakeValue;
  v85 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v158.fields.currentCryptoKey = *(_OWORD *)&v83->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v158.fields.fakeValue = v84;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v157 = v158;
  v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v157, 0);
  Instance = PartyServantListViewItem__get_BaseServantId(this, v87);
  if ( !v85 )
    goto LABEL_79;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v85, v86, Instance, 0);
  if ( !*p_ServantEntity_k__BackingField )
    goto LABEL_79;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  this->fields.classId = (*p_ServantEntity_k__BackingField)->fields.classId;
  if ( !Instance )
    goto LABEL_79;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &friendshipRank,
    &this->fields.friendshipMax,
    0);
  v88 = friendshipRank;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v88, 0);
  this->fields.isBase = 0;
  this->fields.isSame = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.equipUserServantEntity, 0, v89, v90, v91, v92, v93, v94);
  this->fields.equipServantEntity = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntity, 0, v95, v96, v97, v98, v99, v100);
  this->fields.equipIdList = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, 0, v101, v102, v103, v104, v105, v106);
  v107 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v107,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v107;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntityList,
    (int32_t)v107,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  Instance = (int64_t)this->fields._BaseServantEntity_k__BackingField;
  if ( !Instance )
    goto LABEL_79;
  Instance = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0);
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_79;
  v115 = Instance;
  v116 = 0;
  while ( v116 < SLODWORD(memberItemList->max_length) )
  {
    Instance = (int64_t)WarBoardPartyListViewItem__GetMemberItem(partyItem, v116, 0);
    if ( !Instance )
      goto LABEL_79;
    v117 = (PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 120) )
    {
      v118 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_79;
      v119 = *(_OWORD *)&v118->fields.id.fields.fakeValue;
      *(_OWORD *)&v158.fields.currentCryptoKey = *(_OWORD *)&v118->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v158.fields.fakeValue = v119;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v156 = v158;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v156, 0);
      v120 = v117->fields.userServantEntity;
      if ( !v120 )
        goto LABEL_79;
      v121 = *(_OWORD *)&v120->fields.id.fields.fakeValue;
      v122 = Instance;
      *(_OWORD *)&v155.fields.currentCryptoKey = *(_OWORD *)&v120->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v155.fields.fakeValue = v121;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v155, 0);
      if ( v122 == Instance )
      {
        this->fields.isSame = 0;
        this->fields.isBase = num == v116;
        this->fields.partyIndex = v116;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v117, 0);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v135);
        break;
      }
      if ( num != v116 )
      {
        v123 = *p_BaseServantEntity_k__BackingField;
        if ( !*p_BaseServantEntity_k__BackingField )
          goto LABEL_79;
        v125 = *(_QWORD *)&v123[2].fields.currentCryptoKey;
        v124 = *(_QWORD *)&v123[2].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v161.fields.currentCryptoKey = v125;
        *(_QWORD *)&v161.fields.fakeValue = v124;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v161, 0);
        BaseServantEntity_k__BackingField = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v117->fields._BaseServantEntity_k__BackingField;
        if ( !BaseServantEntity_k__BackingField )
          goto LABEL_79;
        v127 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                     BaseServantEntity_k__BackingField[2],
                     0);
        if ( v127 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else
        {
          if ( (v115 & 1) == 0 )
            goto LABEL_40;
          Instance = (int64_t)v117->fields._BaseServantEntity_k__BackingField;
          if ( !Instance )
            goto LABEL_79;
          Instance = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0);
          if ( (Instance & 1) == 0 )
            goto LABEL_40;
          Instance = (int64_t)*p_BaseServantEntity_k__BackingField;
          if ( !*p_BaseServantEntity_k__BackingField )
            goto LABEL_79;
          Instance = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0);
          if ( !v117->fields._BaseServantEntity_k__BackingField )
            goto LABEL_79;
          v128 = Instance;
          Instance = ServantEntity__GetNotSamePartyKey(v117->fields._BaseServantEntity_k__BackingField, 0);
          if ( v128 == (_DWORD)Instance )
          {
            this->fields.isNotSameParty = 1;
          }
          else
          {
LABEL_40:
            if ( this->fields.commonRestrictionId == -1 )
            {
              v129 = v117->fields._BaseServantEntity_k__BackingField;
              if ( !v129 )
                goto LABEL_79;
              v131 = *(_QWORD *)&v129->fields.baseSvtId.fields.currentCryptoKey;
              v130 = *(_QWORD *)&v129->fields.baseSvtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v162.fields.currentCryptoKey = v131;
              *(_QWORD *)&v162.fields.fakeValue = v130;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v162, 0);
              if ( !*p_BaseServantEntity_k__BackingField )
                goto LABEL_79;
              v132 = Instance;
              v133 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                       (*p_BaseServantEntity_k__BackingField)[2],
                       0);
              if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
              Instance = CommonRestrictionMaster__GetIncludedRestrictionIds(v132, v133, 0);
              if ( (Instance & 0x80000000) == 0 )
                this->fields.commonRestrictionId = Instance;
            }
          }
        }
      }
    }
    memberItemList = partyItem->fields.memberItemList;
    ++v116;
    if ( !memberItemList )
      goto LABEL_79;
  }
  PartyServantListViewItem__CheckConvertOverwriteImage(this, v39);
  PartyServantListViewItem__ModifyLimitCount(this, v136);
  PartyServantListViewItem__ModifyOverwriteStatus(this, v137);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.updateCategoryIdList = 1;
  if ( !Instance )
    goto LABEL_79;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  this->fields.isLock = Instance & 1;
  if ( !this->fields.userServantEntity )
    goto LABEL_79;
  IsChoice = UserServantEntity__IsChoice(this->fields.userServantEntity, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  *(_DWORD *)&this->fields.isLockMode = 0;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_79;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0);
  v139 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v139 )
    goto LABEL_79;
  this->fields.isLeave = UserServantEntity__IsLeave(v139, 0);
  *(_QWORD *)&this->fields.bonusKind = 1;
  this->fields.isEventUpVal = 0;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v140);
  v141 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v141 )
    goto LABEL_79;
  Instance = UserServantEntity__getUniqueSvtRestriction_44308632(
               v141,
               this->fields.questRestrictionInfo,
               0,
               num,
               this->fields.partyIndex,
               0);
  v142 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v142 )
    goto LABEL_79;
  IsUniqueIndividualityRestriction_44309036 = UserServantEntity__IsUniqueIndividualityRestriction_44309036(
                                                v142,
                                                this->fields.questRestrictionInfo,
                                                0,
                                                num,
                                                this->fields.partyIndex,
                                                0);
  this->fields.isFatigureRecover = 0;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_44309036;
  this->fields.fatigureTime = -1;
  v145 = this->fields.questRestrictionInfo;
  if ( v145 && v145->fields.isFatigure )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_79;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !*p_questRestrictionInfo )
      goto LABEL_79;
    eventId = (*p_questRestrictionInfo)->fields.eventId;
    v147 = (UserEventServantFatigueMaster_o *)Instance;
    Instance = PartyServantListViewItem__get_BaseServantId(this, v39);
    if ( !v147 )
      goto LABEL_79;
    if ( UserEventServantFatigueMaster__GetFatigueInfo(
           v147,
           &recoverAt,
           &this->fields.isFatigureRecover,
           eventId,
           Instance,
           0) )
    {
      v148 = recoverAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v148 > NetworkManager__getTime(0) )
        this->fields.fatigureTime = recoverAt;
    }
  }
  this->fields._IsAllOutBattle_k__BackingField = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v144);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_79;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_34E925C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_79;
  this->fields.priority = *(_DWORD *)(Instance + 52);
  PartyServantListViewItem__InitAfterSecondSort(this, v39);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_79;
  v149 = BalanceConfig_TypeInfo;
  v150 = *(_DWORD *)(Instance + 420);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v149 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v149->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v150;
  if ( !Instance )
    goto LABEL_79;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 416);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.amountSortValue = -1;
  if ( !Instance
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0), (Instance = (int64_t)*p_iconLabelInfo2) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0), (Instance = (int64_t)*p_iconLabelInfo3) == 0) )
  {
LABEL_79:
    sub_1CE6958(Instance, v39);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void PartyServantListViewItem__CheckConvertOverwriteImage(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  PartyServantListViewItem_o *v2; // x19
  int32_t partyIndex; // w8
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w0
  struct ServantEntity_o *v9; // x8
  QuestRestrictionInfo_o *v10; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v2 = this;
  if ( (byte_4E005AC & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E005AC = 1;
  }
  partyIndex = v2->fields.partyIndex;
  v2->fields.isConvertOverwriteImage = 0;
  if ( (partyIndex & 0x80000000) == 0 || v2->fields._OrganizedWave_k__BackingField >= 1 )
  {
    questRestrictionInfo = v2->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      ServantEntity_k__BackingField = v2->fields._ServantEntity_k__BackingField;
      if ( !ServantEntity_k__BackingField )
        goto LABEL_17;
      v7 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
      v6 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v13.fields.currentCryptoKey = v7;
      *(_QWORD *)&v13.fields.fakeValue = v6;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v13, 0);
      this = (PartyServantListViewItem_o *)QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v8, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = v2->fields._ServantEntity_k__BackingField;
        if ( v9 )
        {
          v10 = v2->fields.questRestrictionInfo;
          v12 = *(_QWORD *)&v9->fields.id.fields.currentCryptoKey;
          v11 = *(_QWORD *)&v9->fields.id.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v14.fields.currentCryptoKey = v12;
          *(_QWORD *)&v14.fields.fakeValue = v11;
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                                 v14,
                                                 0);
          if ( v10 )
          {
            if ( !QuestRestrictionInfo__UnapplyOverwriteLimitCountAtServantStatus(v10, (int32_t)this, 0, 0) )
              v2->fields.isConvertOverwriteImage = 1;
            return;
          }
        }
LABEL_17:
        sub_1CE6958(this, method);
      }
    }
  }
}


bool PartyServantListViewItem__ChkQuestRestriction(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  QuestRestrictionInfo_o *BaseServantId; // x0
  __int64 v4; // x1
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  int32_t v6; // w20
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  __int64 v8; // x22
  __int64 v9; // x23
  struct UserServantEntity_o *userServantEntity; // x8
  int32_t v11; // w22
  struct UserServantEntity_o *v12; // x8
  struct PartyOrganizationListViewItem_o *baseItem; // x9
  bool v14; // w23
  const MethodInfo *v15; // x1
  QuestRestrictionInfo_o *v16; // x21
  struct UserServantEntity_o *v17; // x8
  int32_t v18; // w22
  __int64 v19; // x23
  __int64 v20; // x24
  int32_t v21; // w23
  const MethodInfo *v22; // x1
  QuestRestrictionInfo_o *v23; // x21
  struct PartyOrganizationListViewItem_o *v24; // x8
  struct PartyOrganizationListViewItem_o *v25; // x8
  struct ServantEntity_o *v26; // x8
  QuestRestrictionInfo_o *v27; // x21
  __int64 v28; // x22
  __int64 v29; // x23
  struct UserServantEntity_o *v30; // x8
  int32_t v31; // w22
  struct PartyOrganizationListViewItem_o *v32; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4E005A9 & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E005A9 = 1;
  }
  if ( !this->fields.questRestrictionInfo )
    return 0;
  BaseServantId = (QuestRestrictionInfo_o *)LimitCountUtility__ConvertLimitCountStageIndexOneToZero(
                                              this->fields.dispLimitCountStage,
                                              0);
  ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
  if ( !ServantEntity_k__BackingField )
    goto LABEL_35;
  v6 = (int)BaseServantId;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  v9 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  v8 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v9;
  *(_QWORD *)&v34.fields.fakeValue = v8;
  BaseServantId = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v34, 0);
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_35;
  v11 = (int)BaseServantId;
  BaseServantId = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                              userServantEntity->fields.limitCount,
                                              0);
  v12 = this->fields.userServantEntity;
  if ( !v12 )
    goto LABEL_35;
  baseItem = this->fields.baseItem;
  if ( !baseItem || !questRestrictionInfo )
    goto LABEL_35;
  v14 = 1;
  if ( !QuestRestrictionInfo__IsRestriction_44553872(
          questRestrictionInfo,
          &this->fields.isQuestRestrictionWhole,
          v11,
          (int32_t)BaseServantId,
          v6,
          this->fields.rarityId,
          v12->fields.lv,
          baseItem->fields._InitPos_k__BackingField,
          1,
          0) )
  {
    BaseServantId = this->fields.questRestrictionInfo;
    if ( !BaseServantId )
      goto LABEL_35;
    if ( QuestRestrictionInfo__IsSupportOnly(BaseServantId, 0) )
      return 1;
    v16 = this->fields.questRestrictionInfo;
    BaseServantId = (QuestRestrictionInfo_o *)PartyServantListViewItem__get_BaseServantId(this, v15);
    v17 = this->fields.userServantEntity;
    if ( !v17 )
      goto LABEL_35;
    v18 = (int)BaseServantId;
    v20 = *(_QWORD *)&v17->fields.limitCount.fields.currentCryptoKey;
    v19 = *(_QWORD *)&v17->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v35.fields.currentCryptoKey = v20;
    *(_QWORD *)&v35.fields.fakeValue = v19;
    BaseServantId = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                                v35,
                                                0);
    if ( !this->fields.userServantEntity )
      goto LABEL_35;
    v21 = (int)BaseServantId;
    BaseServantId = (QuestRestrictionInfo_o *)UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0);
    if ( !v16 )
      goto LABEL_35;
    if ( QuestRestrictionInfo__GetFixedMyServantSingleRestriction(
           v16,
           v18,
           v21,
           (int32_t)BaseServantId,
           this->fields.memberIndex,
           0) )
    {
      return 1;
    }
    v23 = this->fields.questRestrictionInfo;
    BaseServantId = (QuestRestrictionInfo_o *)PartyServantListViewItem__get_BaseServantId(this, v22);
    v24 = this->fields.baseItem;
    if ( !v24 || !v23 )
      goto LABEL_35;
    BaseServantId = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsServantNumAndFixedServantPositionRestriction(
                                                v23,
                                                (int32_t)BaseServantId,
                                                v24->fields._InitPos_k__BackingField,
                                                0);
    if ( ((unsigned __int8)BaseServantId & 1) != 0 )
      return 1;
    v25 = this->fields.baseItem;
    if ( v25 )
    {
      if ( !v25->fields.isMyServantOrNpcRestriction )
        return 0;
      v26 = this->fields._ServantEntity_k__BackingField;
      if ( v26 )
      {
        v27 = this->fields.questRestrictionInfo;
        v29 = *(_QWORD *)&v26->fields.id.fields.currentCryptoKey;
        v28 = *(_QWORD *)&v26->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v36.fields.currentCryptoKey = v29;
        *(_QWORD *)&v36.fields.fakeValue = v28;
        BaseServantId = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                                    v36,
                                                    0);
        v30 = this->fields.userServantEntity;
        if ( v30 )
        {
          v31 = (int)BaseServantId;
          BaseServantId = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                                      v30->fields.limitCount,
                                                      0);
          v32 = this->fields.baseItem;
          if ( v32 )
          {
            if ( v27 )
              return QuestRestrictionInfo__IsRestrictionServantIndividuality(
                       v27,
                       v31,
                       (int32_t)BaseServantId,
                       v6,
                       v32->fields._InitPos_k__BackingField,
                       0,
                       0);
          }
        }
      }
    }
LABEL_35:
    sub_1CE6958(BaseServantId, v4);
  }
  return v14;
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
  PartyServantListViewItem_o *v2; // x19
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w0
  const MethodInfo *v8; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v2 = this;
  if ( (byte_4E005AB & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E005AB = 1;
  }
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    ServantEntity_k__BackingField = v2->fields._ServantEntity_k__BackingField;
    if ( !ServantEntity_k__BackingField )
      sub_1CE6958(this, method);
    v6 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
    v5 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v9, 0);
    if ( QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v7, 0) )
      v2->fields.isConvertOverwriteImage = 1;
  }
  PartyServantListViewItem__ModifyLimitCount(v2, method);
  PartyServantListViewItem__ModifyOverwriteStatus(v2, v8);
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

  if ( (byte_4E005B3 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E005B3 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = questRestrictionInfo->fields.allOutBattleGroupNo;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___),
        Instance = (Il2CppObject *)PartyServantListViewItem__get_BaseServantId(this, v8),
        (v9 = this->fields.questRestrictionInfo) == 0)
    || !MasterData_object )
  {
    sub_1CE6958(Instance, v6);
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
  int32_t commonRestrictionId; // w19

  if ( (byte_4E005B2 & 1) == 0 )
  {
    sub_1CE6700(&CommonRestrictionMaster_TypeInfo);
    byte_4E005B2 = 1;
  }
  commonRestrictionId = this->fields.commonRestrictionId;
  if ( commonRestrictionId < 0 )
    return 0;
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  return CommonRestrictionMaster__GetRestrictionMessageFromId(commonRestrictionId, 0);
}


void PartyServantListViewItem__InitAfterSecondSort(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  PartyServantListViewItem_o *v2; // x19
  struct UserServantEntity_o *v3; // x9
  __int128 v4; // q0
  struct ServantEntity_o *BaseServantEntity_k__BackingField; // x10
  struct UserServantEntity_o *userServantEntity; // x9
  __int128 v7; // q0
  struct UserServantEntity_o *v8; // x8
  __int128 v9; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+40h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+60h] [xbp-40h]

  v2 = this;
  if ( (byte_4E005B6 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E005B6 = 1;
  }
  if ( !v2->fields.tutorialMode )
  {
    BaseServantEntity_k__BackingField = v2->fields._BaseServantEntity_k__BackingField;
    v2->fields.sortValue1B = v2->fields.priority;
    if ( BaseServantEntity_k__BackingField )
    {
      userServantEntity = v2->fields.userServantEntity;
      if ( userServantEntity )
      {
        v2->fields.sortValue2 = ((__int64)BaseServantEntity_k__BackingField->fields.collectionNo << 16)
                              | ((unsigned __int64)(unsigned int)v2->fields.rarityId << 48)
                              | userServantEntity->fields.lv;
        v7 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v13.fields.fakeValue = v7;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v12 = v13;
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(
                                               &v12,
                                               0);
        v8 = v2->fields.userServantEntity;
        v2->fields.sortValue2B = (int64_t)this;
        if ( v8 )
        {
          v9 = *(_OWORD *)&v8->fields.id.fields.fakeValue;
          *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&v8->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v11.fields.fakeValue = v9;
          v2->fields.sortValueLast = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v11, 0);
          return;
        }
      }
    }
LABEL_15:
    sub_1CE6958(this, method);
  }
  v3 = v2->fields.userServantEntity;
  v2->fields.sortValue1B = 0;
  if ( !v3 )
    goto LABEL_15;
  v4 = *(_OWORD *)&v3->fields.id.fields.fakeValue;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&v3->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v10 = v13;
  v2->fields.sortValue2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v10, 0);
  v2->fields.sortValue2B = 0;
}


bool PartyServantListViewItem__IsMatchFilter(
        PartyServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v7; // x0
  ListViewSort_FilterKind_array *v8; // x0
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  FilterKindList_c *v11; // x0
  ListViewSort_FilterKind_array *v12; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w21
  UserServantEntity_o *userServantEntity; // x22
  _BOOL4 isChoice; // w8
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x21
  int32_t dispLimitCountStage; // w0
  int32_t v21; // w21
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v37; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v39; // w0

  if ( (byte_4E005B0 & 1) == 0 )
  {
    sub_1CE6700(&FilterKindList_TypeInfo);
    sub_1CE6700(&ListViewSort_FilterKind___TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1CE6700(&ServantEventBonusFilterController_TypeInfo);
    byte_4E005B0 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_66;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_66;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields._ServantEntity_k__BackingField, 0) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields._ServantEntity_k__BackingField, 0) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0)
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
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
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
        goto LABEL_66;
      v21 = ClassGroupFilterKindList;
      SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(
                              this->fields.userServantEntity,
                              -1,
                              ClassGroupFilterKindList,
                              0);
      this->fields.skillCategoryIdList = SkillCategoryIdList;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&this->fields.skillCategoryIdList,
        (int32_t)SkillCategoryIdList,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
      if ( !ClassGroupFilterKindList )
        goto LABEL_66;
      TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                       (UserServantEntity_o *)ClassGroupFilterKindList,
                                       0,
                                       v21,
                                       0);
      this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&this->fields.tdCategoryIdList,
        (int32_t)TreasureDeviceCategoryIdList,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    ClassGroupFilterKindList = sub_1CE67A8(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_66;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_67;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0);
    ClassGroupFilterKindList = sub_1CE67A8(ListViewSort_FilterKind___TypeInfo, 1);
    if ( !ClassGroupFilterKindList )
      goto LABEL_66;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_67:
      sub_1CE6960(ClassGroupFilterKindList);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v37 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0);
    v39 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
    if ( ((IsUnSelectedAllTargetFilters ^ v37) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v39 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v39 )
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
  ClassGroupFilterKindList = sub_1CE67A8(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_66:
    sub_1CE6958(ClassGroupFilterKindList, sort);
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_67;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0)
    && ListViewSort__GetFilter(sort, 39, 0) )
  {
    isChoice = !this->fields.isChoice;
    if ( !this->fields.isSwapChoice )
      isChoice = this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v17 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v17->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_66;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_38ED228 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v18, 0)
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

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1CE6958(0, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userServantEntity, 0);
  this->fields.isSwapChoice = 0;
}


void PartyServantListViewItem__ModifyItem(
        PartyServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v10; // x1
  UserServantEntity_o *IsLeave; // x0
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  __int64 v13; // x22
  __int64 v14; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_ServantEntity_k__BackingField; // x21
  struct ServantEntity_o *ServantEntity; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t dispLimitCountStage; // w24
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4E005AA & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E005AA = 1;
  }
  this->fields.userServantEntity = userServantEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  IsLeave = this->fields.userServantEntity;
  if ( !IsLeave )
    goto LABEL_13;
  IsLeave = (UserServantEntity_o *)UserServantEntity__IsLeave(IsLeave, 0);
  ServantEntity_k__BackingField = this->fields._ServantEntity_k__BackingField;
  this->fields.isLeave = (unsigned __int8)IsLeave & 1;
  *(_QWORD *)&this->fields.bonusKind = 1;
  this->fields.isEventUpVal = 0;
  if ( !ServantEntity_k__BackingField || !userServantEntity )
    goto LABEL_13;
  v13 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  v14 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.fakeValue;
  p_ServantEntity_k__BackingField = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields._ServantEntity_k__BackingField;
  ServantEntity = UserServantEntity__GetServantEntity(userServantEntity, -1, 0);
  this->fields._ServantEntity_k__BackingField = ServantEntity;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantEntity_k__BackingField,
    (int32_t)ServantEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  dispLimitCountStage = this->fields.dispLimitCountStage;
  PartyServantListViewItem__ModifyLimitCount(this, v24);
  PartyServantListViewItem__ModifyOverwriteStatus(this, v25);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v13;
  *(_QWORD *)&v27.fields.fakeValue = v14;
  IsLeave = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v27, 0);
  if ( !*p_ServantEntity_k__BackingField )
LABEL_13:
    sub_1CE6958(IsLeave, v10);
  if ( (_DWORD)IsLeave != CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                            (*p_ServantEntity_k__BackingField)[1],
                            0)
    || dispLimitCountStage != this->fields.dispLimitCountStage )
  {
    this->fields.updateCategoryIdList = 1;
  }
  this->fields.isQuestRestriction = PartyServantListViewItem__ChkQuestRestriction(this, v26);
}


void PartyServantListViewItem__ModifyLimitCount(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  struct UserServantEntity_o *v4; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4E005AD & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E005AD = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity
    || (userServantEntity = (UserServantEntity_o *)UserServantEntity__GetDispLimitCountStageSealAfter(
                                                     userServantEntity,
                                                     -1,
                                                     0,
                                                     this->fields.questRestrictionInfo,
                                                     0),
        v4 = this->fields.userServantEntity,
        this->fields.dispLimitCountStage = (int)userServantEntity,
        !v4) )
  {
    sub_1CE6958(userServantEntity, method);
  }
  v6 = *(_QWORD *)&v4->fields.limitCount.fields.currentCryptoKey;
  v5 = *(_QWORD *)&v4->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v8, 0);
  this->fields.stageLimitCount = LimitCountUtility__ConvertStageToLimitCount(v7, this->fields.dispLimitCountStage, 0, 0);
}


void PartyServantListViewItem__ModifyLockItem(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1CE6958(0, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0);
  this->fields.isSwapLock = 0;
}


void PartyServantListViewItem__ModifyOverwriteStatus(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  int64_t userServantEntity; // x0
  const MethodInfo_3A2F810 *v4; // x3
  _BOOL4 IsGrandSameServant_k__BackingField; // w8
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct UserServantEntity_o *v7; // x8
  __int128 v8; // q0
  __int128 v9; // q1
  const MethodInfo_3A2E600 *v10; // x3
  int v11; // w23
  __int64 v12; // x24
  struct UserServantEntity_o *v13; // x8
  __int128 v14; // q0
  const MethodInfo_3A2F810 *v15; // x3
  struct PartyOrganizationListViewItem_o *v16; // x8
  struct UserServantEntity_o *v17; // x8
  __int128 v18; // q0
  __int128 v19; // q1
  const MethodInfo_3A2E600 *v20; // x3
  int v21; // w24
  __int64 v22; // x23
  struct UserServantEntity_o *v23; // x8
  __int128 v24; // q0
  int64_t v25; // x0
  int32_t v26; // w20
  UserServantEntity_o *v27; // x8
  int32_t v28; // w20
  int32_t v29; // w8
  UserServantEntity_o *v30; // x20
  int32_t hp; // w22
  UserServantGrandInfo_o *v32; // x20
  int32_t AddedHp; // w0
  int32_t atk; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-1D0h] BYREF
  __int64 v36; // [xsp+20h] [xbp-1B0h] BYREF
  __int64 v37; // [xsp+28h] [xbp-1A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+30h] [xbp-1A0h] BYREF
  __int128 v39; // [xsp+50h] [xbp-180h]
  __int128 v40; // [xsp+60h] [xbp-170h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+70h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+90h] [xbp-140h] BYREF
  __int128 v43; // [xsp+B0h] [xbp-120h]
  __int128 v44; // [xsp+C0h] [xbp-110h]
  _BYTE v45[40]; // [xsp+D0h] [xbp-100h] BYREF
  _OWORD v46[3]; // [xsp+100h] [xbp-D0h] BYREF
  __int128 v47; // [xsp+130h] [xbp-A0h]
  _OWORD v48[2]; // [xsp+140h] [xbp-90h] BYREF
  _BYTE v49[39]; // [xsp+160h] [xbp-70h] BYREF
  __int64 v50; // [xsp+188h] [xbp-48h]
  System_Nullable_T__o v51; // 0:x0.16
  System_Nullable_long__o v52; // 0:x0.16
  System_Nullable_T__o v53; // 0:x0.16
  System_Nullable_long__o v54; // 0:x0.16

  v50 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_4E005AE & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_1CE6700(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__);
    sub_1CE6700(&Method_System_Nullable_long___ctor__);
    sub_1CE6700(&Method_System_Nullable_ObscuredLong___ctor__);
    sub_1CE6700(&Method_System_Nullable_ObscuredLong__get_HasValue__);
    sub_1CE6700(&Method_System_Nullable_long__get_HasValue__);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&UserServantGrandInfo_TypeInfo);
    byte_4E005AE = 1;
  }
  userServantEntity = (int64_t)this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_48;
  userServantEntity = (int64_t)UserServantEntity__GetOverwriteStatus_44320752(
                                 (UserServantEntity_o *)userServantEntity,
                                 this->fields.stageLimitCount,
                                 0);
  if ( !userServantEntity )
    goto LABEL_48;
  this->fields.cost = *(_DWORD *)(userServantEntity + 28);
  *(_QWORD *)&this->fields.hp = *(_QWORD *)(userServantEntity + 16);
  this->fields.rarityId = *(_DWORD *)(userServantEntity + 24);
  method = (const MethodInfo *)*(unsigned int *)(userServantEntity + 40);
  userServantEntity = (int64_t)this->fields.userServantEntity;
  this->fields.actualRarity = (int)method;
  if ( !userServantEntity )
    goto LABEL_48;
  userServantEntity = UserServantEntity__GetFrameType((UserServantEntity_o *)userServantEntity, (int32_t)method, 0);
  IsGrandSameServant_k__BackingField = this->fields._IsGrandSameServant_k__BackingField;
  this->fields.frameType = userServantEntity;
  if ( !IsGrandSameServant_k__BackingField )
    return;
  baseItem = this->fields.baseItem;
  if ( baseItem && (v7 = baseItem->fields.userServantEntity) != 0 )
  {
    v8 = *(_OWORD *)&v7->fields.id.fields.currentCryptoKey;
    v9 = *(_OWORD *)&v7->fields.id.fields.fakeValue;
    *(_QWORD *)&v51.fields.hasValue = v45;
    v51.fields.value = (Il2CppObject *)v49;
    memset(v45, 0, sizeof(v45));
    v43 = v8;
    v44 = v9;
    *(_OWORD *)v49 = v8;
    *(_OWORD *)&v49[16] = v9;
    System_Nullable_ObscuredLong____ctor(
      v51,
      (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
      v4);
    *(_QWORD *)((char *)v48 + 15) = *(_QWORD *)&v45[32];
    v47 = *(_OWORD *)&v45[1];
    v48[0] = *(_OWORD *)&v45[17];
    *(_OWORD *)v49 = *(_OWORD *)&v45[1];
    *(_OWORD *)&v49[16] = *(_OWORD *)&v45[17];
    *(_QWORD *)&v49[31] = *(_QWORD *)((char *)v48 + 15);
    if ( v45[0] )
    {
      *(_OWORD *)v45 = *(_OWORD *)&v49[7];
      *(_OWORD *)&v45[16] = *(_OWORD *)&v49[23];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v42 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v45;
      v52.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v42, 0);
      *(_QWORD *)&v52.fields.hasValue = v46;
      v46[0] = 0u;
      System_Nullable_long____ctor(v52, Method_System_Nullable_long___ctor__, v10);
      v11 = LOBYTE(v46[0]);
      v12 = *((_QWORD *)&v46[0] + 1);
    }
    else
    {
      v11 = 0;
      v12 = 0;
    }
  }
  else
  {
    v47 = 0u;
    memset(v48, 0, 23);
    v11 = 0;
    v12 = 0;
    memset(v49, 0, sizeof(v49));
  }
  v13 = this->fields.userServantEntity;
  if ( !v13 )
    goto LABEL_48;
  v14 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
  *(_OWORD *)v45 = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v45[16] = v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v41 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v45;
  userServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v41, 0);
  if ( v11 && v12 == userServantEntity )
  {
    userServantEntity = (int64_t)this->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_48;
    userServantEntity = UserServantEntity__IsGrandServant((UserServantEntity_o *)userServantEntity, 0);
    if ( (userServantEntity & 1) == 0 )
    {
      v30 = this->fields.userServantEntity;
      if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
      userServantEntity = (int64_t)UserServantGrandInfo__Make(v30, 1, 0);
      if ( userServantEntity )
      {
        hp = this->fields.hp;
        v32 = (UserServantGrandInfo_o *)userServantEntity;
        AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)userServantEntity, 0);
        atk = this->fields.atk;
        this->fields.hp = AddedHp + hp;
        v29 = UserServantGrandInfo__get_AddedAtk(v32, 0) + atk;
        goto LABEL_44;
      }
LABEL_48:
      sub_1CE6958(userServantEntity, method);
    }
  }
  v16 = this->fields.baseItem;
  if ( v16 && (v17 = v16->fields.userServantEntity) != 0 )
  {
    v18 = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
    v19 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
    *(_QWORD *)&v53.fields.hasValue = v45;
    v53.fields.value = (Il2CppObject *)v46;
    memset(v45, 0, sizeof(v45));
    v39 = v18;
    v40 = v19;
    v46[0] = v18;
    v46[1] = v19;
    System_Nullable_ObscuredLong____ctor(
      v53,
      (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
      v15);
    *(_QWORD *)((char *)&v46[1] + 15) = *(_QWORD *)&v45[32];
    v46[0] = *(_OWORD *)&v45[1];
    v46[1] = *(_OWORD *)&v45[17];
    *(_OWORD *)v49 = *(_OWORD *)&v45[1];
    *(_OWORD *)&v49[16] = *(_OWORD *)&v45[17];
    *(_QWORD *)&v49[31] = *(_QWORD *)((char *)&v46[1] + 15);
    if ( v45[0] )
    {
      *(_OWORD *)v45 = *(_OWORD *)&v49[7];
      *(_OWORD *)&v45[16] = *(_OWORD *)&v49[23];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v38 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v45;
      v54.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v38, 0);
      *(_QWORD *)&v54.fields.hasValue = &v36;
      v36 = 0;
      v37 = 0;
      System_Nullable_long____ctor(v54, Method_System_Nullable_long___ctor__, v20);
      v21 = (unsigned __int8)v36;
      v22 = v37;
    }
    else
    {
      v22 = 0;
      v21 = 0;
    }
  }
  else
  {
    memset(v46, 0, 39);
    v22 = 0;
    v21 = 0;
    memset(v49, 0, sizeof(v49));
  }
  v23 = this->fields.userServantEntity;
  if ( !v23 )
    goto LABEL_48;
  v24 = *(_OWORD *)&v23->fields.id.fields.fakeValue;
  *(_OWORD *)v45 = *(_OWORD *)&v23->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v45[16] = v24;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v35 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v45;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v35, 0);
  if ( !v21 || v22 != v25 )
  {
    userServantEntity = (int64_t)this->fields.userServantEntity;
    if ( userServantEntity )
    {
      if ( !UserServantEntity__IsGrandServant((UserServantEntity_o *)userServantEntity, 0) )
        return;
      userServantEntity = (int64_t)this->fields.userServantEntity;
      if ( userServantEntity )
      {
        v26 = this->fields.hp;
        userServantEntity = (int64_t)UserServantEntity__get_GrandInfo((UserServantEntity_o *)userServantEntity, 0);
        if ( userServantEntity )
        {
          userServantEntity = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)userServantEntity, 0);
          v27 = this->fields.userServantEntity;
          this->fields.hp = v26 - userServantEntity;
          if ( v27 )
          {
            v28 = this->fields.atk;
            userServantEntity = (int64_t)UserServantEntity__get_GrandInfo(v27, 0);
            if ( userServantEntity )
            {
              v29 = v28 - UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)userServantEntity, 0);
LABEL_44:
              this->fields.atk = v29;
              return;
            }
          }
        }
      }
    }
    goto LABEL_48;
  }
}


void PartyServantListViewItem__SetEquipStatus(
        PartyServantListViewItem_o *this,
        System_Int64_array *equipIds,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppObject **p_equipUserServantEntity; // x22
  GrandQuestFolderBoardItem_o *p_equipServantEntity; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Int64_array **p_equipIdList; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Collections_Generic_List_object__o *v25; // x24
  Il2CppObject **v26; // x19
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  Il2CppObject *Master_object; // x0
  Il2CppObject *v34; // x1
  struct System_Int64_array *v35; // x8
  Il2CppObject *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  Il2CppObject *v43; // x23
  __int64 v44; // x1
  BalanceConfig_c *v45; // x0
  struct System_Int64_array *v46; // x8
  Il2CppObject *v47; // x8
  void *monitor; // x23
  Il2CppClass *klass; // x24
  Il2CppObject *v50; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v51; // x22
  void *v52; // x23
  Il2CppClass *v53; // x24
  Il2CppObject *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  struct System_Int64_array *v61; // x23
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v63; // x20
  unsigned __int64 v64; // x24
  int64_t v65; // x2
  void *v66; // x21
  Il2CppClass *v67; // x22
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  Il2CppClass *v74; // x8
  _QWORD *v75; // x9
  __int64 monitor_low; // x10
  void **v77; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  if ( (byte_4E005AF & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1CE6700(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1CE6700(&long___TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E005AF = 1;
  }
  p_equipUserServantEntity = (Il2CppObject **)&this->fields.equipUserServantEntity;
  entity = 0;
  this->fields.equipUserServantEntity = 0;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipUserServantEntity,
    0,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  p_equipServantEntity = (GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntity;
  this->fields.equipServantEntity = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntity, 0, v12, v13, v14, v15, v16, v17);
  this->fields.equipIdList = 0;
  p_equipIdList = &this->fields.equipIdList;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)p_equipIdList, 0, v19, v20, v21, v22, v23, v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v26 = (Il2CppObject **)(p_equipIdList + 21);
  p_equipIdList[21] = (struct System_Int64_array *)v25;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(p_equipIdList + 21), (int32_t)v25, v27, v28, v29, v30, v31, v32);
  if ( !*(p_equipIdList - 1) )
    return;
  if ( !equipIds )
    goto LABEL_9;
  v35 = *p_equipIdList;
  if ( *p_equipIdList == equipIds )
    goto LABEL_14;
  v36 = System_Array__Clone((System_Array_o *)equipIds, 0);
  if ( v36 )
  {
    v43 = v36;
    v44 = sub_1CE683C(v36, long___TypeInfo);
    if ( !v44 )
    {
      sub_1CE6CF4(v43);
LABEL_9:
      v45 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v45 = BalanceConfig_TypeInfo;
      }
      v44 = sub_1CE67A8(long___TypeInfo, (unsigned int)v45->static_fields->SvtEquipMax);
    }
  }
  else
  {
    v44 = 0;
  }
  *p_equipIdList = (struct System_Int64_array *)v44;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)p_equipIdList, v44, v37, v38, v39, v40, v41, v42);
  v35 = *p_equipIdList;
LABEL_14:
  if ( !v35 )
    goto LABEL_56;
  if ( !LODWORD(v35->max_length) )
    goto LABEL_57;
  if ( v35->m_Items[0] >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_UserServantMaster___);
    v46 = *p_equipIdList;
    if ( !*p_equipIdList )
      goto LABEL_56;
    if ( !LODWORD(v46->max_length) )
      goto LABEL_57;
    if ( !Master_object )
      goto LABEL_56;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      p_equipUserServantEntity,
                                      v46->m_Items[0],
                                      (const MethodInfo_34EBA58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      v47 = *p_equipUserServantEntity;
      if ( !*p_equipUserServantEntity )
        goto LABEL_56;
      klass = v47[5].klass;
      monitor = v47[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v79.fields.currentCryptoKey = klass;
      *(_QWORD *)&v79.fields.fakeValue = monitor;
      Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v79, 0);
      if ( (int)Master_object >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantMaster___);
        v50 = *p_equipUserServantEntity;
        if ( !*p_equipUserServantEntity )
          goto LABEL_56;
        v51 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        v53 = v50[5].klass;
        v52 = v50[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v80.fields.currentCryptoKey = v53;
        *(_QWORD *)&v80.fields.fakeValue = v52;
        Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v80, 0);
        if ( !v51 )
          goto LABEL_56;
        v54 = DataMasterBase_object__object__int___GetEntity(
                v51,
                (int32_t)Master_object,
                (const MethodInfo_34E925C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        p_equipServantEntity->klass = (GrandQuestFolderBoardItem_c *)v54;
        sub_1CE66A4(p_equipServantEntity, (int32_t)v54, v55, v56, v57, v58, v59, v60);
      }
    }
  }
  if ( !*p_equipIdList )
    goto LABEL_56;
  if ( SLODWORD((*p_equipIdList)->max_length) < 2 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_UserServantMaster___);
  v61 = *p_equipIdList;
  if ( !*p_equipIdList )
LABEL_56:
    sub_1CE6958(Master_object, v34);
  max_length = v61->max_length;
  if ( (int)max_length >= 1 )
  {
    v63 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v64 = 0;
    while ( v64 < (unsigned int)max_length )
    {
      v65 = v61->m_Items[v64];
      if ( v65 >= 1 )
      {
        if ( !v63 )
          goto LABEL_56;
        Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                          v63,
                                          &entity,
                                          v65,
                                          (const MethodInfo_34EBA58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_56;
          v67 = entity[5].klass;
          v66 = entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v81.fields.currentCryptoKey = v67;
          *(_QWORD *)&v81.fields.fakeValue = v66;
          Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v81, 0);
          if ( (int)Master_object >= 1 )
          {
            Master_object = *v26;
            if ( !*v26 )
              goto LABEL_56;
            v34 = entity;
            v74 = Master_object[1].klass;
            v75 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++HIDWORD(Master_object[1].monitor);
            if ( !v74 )
              goto LABEL_56;
            monitor_low = SLODWORD(Master_object[1].monitor);
            if ( (unsigned int)monitor_low >= LODWORD(v74->_1.namespaze) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Master_object,
                v34,
                *(const MethodInfo_3905F68 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
            }
            else
            {
              v77 = &v74->_1.image + monitor_low;
              LODWORD(Master_object[1].monitor) = monitor_low + 1;
              v77[4] = v34;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v77 + 4), (int32_t)v34, v68, v69, v70, v71, v72, v73);
            }
          }
        }
      }
      LODWORD(max_length) = v61->max_length;
      if ( (__int64)++v64 >= (int)max_length )
        return;
    }
LABEL_57:
    sub_1CE6960(Master_object);
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
  PartyServantListViewItem_c *v11; // x0
  __int64 PRIORITY_LOWEST_HEROIN_LEAVE; // x8
  struct PartyOrganizationListViewItem_o *v13; // x8
  PartyServantListViewItem_c *v14; // x0
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t cost; // w4
  struct UserServantEntity_o *v17; // x8
  __int128 v18; // q1
  struct UserServantEntity_o *v19; // x8
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v23; // x21
  PartyServantListViewItem_c *v24; // x0
  struct PartyServantListViewItem_StaticFields *v25; // x8
  int64_t fatigureTime; // x8
  int64_t hp; // x2
  int32_t friendshipMax; // w3
  int32_t v29; // w1
  int32_t v30; // w20
  struct PartyOrganizationListViewItem_o *v31; // x8
  struct UserServantEntity_o *v32; // x8
  __int128 v33; // q1
  struct UserServantEntity_o *v34; // x8
  __int128 v35; // q0
  PartyServantListViewItem_o *v36; // x21
  struct PartyOrganizationListViewItem_o *v37; // x8
  struct UserServantEntity_o *v38; // x8
  __int128 v39; // q0
  struct UserServantEntity_o *v40; // x8
  __int128 v41; // q0
  struct QuestRestrictionInfo_o *v42; // x8
  int64_t v43; // x20
  int64_t priority; // x9
  struct ServantEntity_o *v45; // x8
  PartyServantListViewItem_o *v46; // x21
  struct PartyOrganizationListViewItem_o *v47; // x8
  struct UserServantEntity_o *v48; // x8
  __int128 v49; // q1
  struct UserServantEntity_o *v50; // x8
  __int128 v51; // q0
  PartyServantListViewItem_o *v52; // x21
  struct PartyOrganizationListViewItem_o *v53; // x8
  struct UserServantEntity_o *v54; // x8
  __int128 v55; // q0
  struct UserServantEntity_o *v56; // x8
  __int128 v57; // q0
  int32_t TempOverwriteTreasureDeviceLv_k__BackingField; // w7
  int32_t v59; // w2
  int32_t v60; // w8
  PartyServantListViewItem_o *iconLabelInfo2; // x20
  int32_t MaxWave_k__BackingField; // w21
  int32_t lv; // w7
  int32_t exceedCount; // w3
  int32_t v65; // w1
  int64_t rarityId; // x2
  struct UserServantEntity_o *v67; // x8
  int64_t v68; // x8
  PartyServantListViewItem_o *iconLabelInfo1; // x19
  PartyServantListViewManager_o *v70; // x20
  __int64 v71; // x10
  int32_t v72; // w0
  struct ServantEntity_o *BaseServantEntity_k__BackingField; // x8
  __int64 collectionNo; // x10
  PartyServantListViewItem_o *v75; // x8
  int32_t v76; // w20
  __int64 v77; // x20
  __int64 v78; // x21
  int32_t v79; // w0
  PartyServantListViewItem_o *v80; // x20
  int64_t v81; // x9
  struct EventUpValSetupInfo_o *setupInfo; // x8
  int32_t bonusKind; // w8
  EventUpValSetupInfo_o *v84; // x21
  UserServantEntity_o *v85; // x22
  int32_t ServantFilterEventId; // w23
  struct EventUpValSetupInfo_o *v87; // x3
  UserServantEntity_o *v88; // x0
  EventUpValSetupInfo_o *v89; // x1
  int32_t v90; // w2
  int32_t bonusKind2; // w8
  int32_t v92; // w21
  int32_t v93; // w8
  int32_t bonusKindId; // w9
  int32_t v95; // w8
  int32_t v96; // w8
  UserServantEntity_o *userServantEntity; // x22
  EventUpValSetupInfo_o *v98; // x23
  bool EventUpVal; // w0
  int32_t bonusKind2Id; // w8
  Il2CppObject *Master_object; // x21
  const MethodInfo *v102; // x1
  bool IsEnableServant; // w0
  UserServantEntity_o *v104; // x21
  struct UserServantEntity_o *equipUserServantEntity; // x8
  int32_t atk; // w4
  int32_t v107; // w1
  int32_t v108; // w21
  int monitor_high; // w8
  int32_t v110; // w2
  int32_t v111; // w1
  UserServantEntity_o *v112; // x21
  struct UserServantEntity_o *v113; // x8
  int monitor; // w8
  Il2CppObject *v115; // x21
  const MethodInfo *v116; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v118; // x1
  int32_t BaseServantId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // kr00_16
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v122; // x0
  intptr_t *v123; // x8
  System_Func_T__bool__o *v124; // x22
  __int64 v125; // x0
  __int64 v126; // x1
  int32_t actualRarity; // [xsp+0h] [xbp-1B0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v129; // [xsp+10h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v130; // [xsp+30h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v131; // [xsp+50h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v132; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v135; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v138; // [xsp+130h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v139; // [xsp+150h] [xbp-60h] BYREF
  int32_t tdMaxLv[2]; // [xsp+178h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16

  v3 = sort;
  v4 = this;
  if ( (byte_4E005B1 & 1) == 0 )
  {
    sub_1CE6700(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1CE6700(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1CE6700(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Method_PartyServantListViewItem__SetSortValue_b__139_0__);
    sub_1CE6700(&Method_PartyServantListViewItem__SetSortValue_b__139_1__);
    sub_1CE6700(&PartyServantListViewItem_TypeInfo);
    sub_1CE6700(&PartyServantListViewManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1CE6700(&TutorialFlag_TypeInfo);
    this = (PartyServantListViewItem_o *)sub_1CE6700(&UserServantGrandInfo_TypeInfo);
    byte_4E005B1 = 1;
  }
  memset(&v139, 0, sizeof(v139));
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1;
  if ( !v3 )
    goto LABEL_291;
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
          v23 = v3->fields.manager;
        else
          v23 = 0;
      }
      else
      {
        v23 = 0;
      }
      setupInfo = v4->fields.setupInfo;
      if ( setupInfo )
      {
        if ( !setupInfo->fields.isQuestStart )
        {
LABEL_186:
          bonusKind2 = v3->fields.bonusKind2;
          switch ( bonusKind2 )
          {
            case 0:
              if ( v4->fields.bonusKind )
              {
                bonusKind2Id = v3->fields.bonusKind2Id;
              }
              else
              {
                bonusKind2Id = v3->fields.bonusKind2Id;
                if ( v4->fields.bonusKindId == bonusKind2Id )
                  goto LABEL_289;
              }
              v4->fields.bonusKind = 0;
              v4->fields.bonusKindId = bonusKind2Id;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (PartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventGroupMaster___);
              if ( !this )
                goto LABEL_291;
              EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                    (EventGroupMaster_o *)this,
                                    v4->fields.bonusKindId,
                                    0);
              this = (PartyServantListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                     (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                     0);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_289;
              if ( !EntitiesByGroupId )
                goto LABEL_291;
              if ( EntitiesByGroupId->fields._size < 2 )
                goto LABEL_289;
              v122 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_EventGroupEntity__bool__TypeInfo);
              v123 = &Method_PartyServantListViewItem__SetSortValue_b__139_1__;
              goto LABEL_288;
            case 3:
              v4->fields.bonusKind = 3;
              v4->fields.bonusKindId = v3->fields.bonusKind2Id;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventCampaignMaster___);
              this = (PartyServantListViewItem_o *)PartyServantListViewItem__get_BaseServantId(v4, v102);
              if ( !Master_object )
                goto LABEL_291;
              IsEnableServant = EventCampaignMaster__IsEnableServant(
                                  (EventCampaignMaster_o *)Master_object,
                                  (int32_t)this,
                                  v4->fields.bonusKindId,
                                  0);
              v4->fields.isEventUpVal = IsEnableServant;
              if ( !IsEnableServant )
                goto LABEL_290;
              goto LABEL_6;
            case 4:
            case 5:
              if ( v4->fields.bonusKind == bonusKind2 )
              {
                v92 = v3->fields.bonusKind2Id;
                if ( v4->fields.bonusKindId == v92 )
                  goto LABEL_289;
              }
              else
              {
                v92 = v3->fields.bonusKind2Id;
              }
              v4->fields.bonusKind = bonusKind2;
              v4->fields.bonusKindId = v92;
              userServantEntity = v4->fields.userServantEntity;
              v98 = v4->fields.setupInfo;
              this = (PartyServantListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( !this || !userServantEntity )
                goto LABEL_291;
              v87 = this->fields.setupInfo;
              v88 = userServantEntity;
              v89 = v98;
              v90 = v92;
LABEL_201:
              EventUpVal = UserServantEntity__getEventUpVal(v88, v89, v90, (int64_t)v87, 0);
              goto LABEL_270;
            case 7:
              if ( v4->fields.bonusKind == 7 )
              {
                bonusKindId = v4->fields.bonusKindId;
                v95 = v3->fields.bonusKind2Id;
                goto LABEL_206;
              }
              v95 = v3->fields.bonusKind2Id;
              break;
            default:
              goto LABEL_6;
          }
LABEL_265:
          v4->fields.bonusKind = 7;
          v4->fields.bonusKindId = v95;
          this = (PartyServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_291;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)this,
                                (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
          BaseServantId = PartyServantListViewItem__get_BaseServantId(v4, v118);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v120 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(BaseServantId, 0);
          sort = *(ListViewSort_o **)&v120.fields.fakeValue;
          this = *(PartyServantListViewItem_o **)&v120.fields.currentCryptoKey;
          if ( !MasterData_object )
            goto LABEL_291;
          EventUpVal = ServantFilterMaster__IsEnableServant(
                         (ServantFilterMaster_o *)MasterData_object,
                         v120,
                         v4->fields.bonusKindId,
                         0);
LABEL_270:
          v4->fields.isEventUpVal = EventUpVal;
          if ( !EventUpVal )
            goto LABEL_290;
          goto LABEL_6;
        }
      }
      else
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (PartyServantListViewItem_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_186;
        if ( !v23 )
          goto LABEL_291;
        if ( !BYTE5(v23[1].fields.dropList) )
          goto LABEL_186;
      }
      bonusKind = v3->fields.bonusKind;
      switch ( bonusKind )
      {
        case 0:
          if ( v4->fields.bonusKind )
          {
            v93 = v3->fields.bonusKindId;
          }
          else
          {
            v93 = v3->fields.bonusKindId;
            if ( v4->fields.bonusKindId == v93 )
              goto LABEL_289;
          }
          v4->fields.bonusKind = 0;
          v4->fields.bonusKindId = v93;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (PartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventGroupMaster___);
          if ( !this )
            goto LABEL_291;
          EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                (EventGroupMaster_o *)this,
                                v4->fields.bonusKindId,
                                0);
          this = (PartyServantListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                 0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !EntitiesByGroupId )
              goto LABEL_291;
            if ( EntitiesByGroupId->fields._size >= 2 )
            {
              v122 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_EventGroupEntity__bool__TypeInfo);
              v123 = &Method_PartyServantListViewItem__SetSortValue_b__139_0__;
LABEL_288:
              v124 = (System_Func_T__bool__o *)v122;
              System_Func_object__bool____ctor(v122, (Il2CppObject *)v4, *v123, 0);
              v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                          (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                          v124,
                                          (const MethodInfo_31ED4DC *)Method_BasicHelper_Any_EventGroupEntity___);
            }
          }
          goto LABEL_289;
        case 3:
          if ( v4->fields.bonusKind == 3 )
          {
            v96 = v3->fields.bonusKindId;
            if ( v4->fields.bonusKindId == v96 )
            {
LABEL_289:
              if ( !v4->fields.isEventUpVal )
                goto LABEL_290;
              goto LABEL_6;
            }
          }
          else
          {
            v96 = v3->fields.bonusKindId;
          }
          v4->fields.bonusKind = 3;
          v4->fields.bonusKindId = v96;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v115 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventCampaignMaster___);
          this = (PartyServantListViewItem_o *)PartyServantListViewItem__get_BaseServantId(v4, v116);
          if ( !v115 )
            goto LABEL_291;
          EventUpVal = EventCampaignMaster__IsEnableServant(
                         (EventCampaignMaster_o *)v115,
                         (int32_t)this,
                         v4->fields.bonusKindId,
                         0);
          break;
        case 4:
        case 5:
          if ( v4->fields.bonusKind == bonusKind )
            goto LABEL_289;
          v4->fields.bonusKind = bonusKind;
          v84 = v4->fields.setupInfo;
          v4->fields.bonusKindId = v3->fields.bonusKindId;
          if ( !v84 )
            goto LABEL_291;
          v85 = v4->fields.userServantEntity;
          ServantFilterEventId = EventUpValSetupInfo__get_ServantFilterEventId(v84, 0);
          this = (PartyServantListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !this || !v85 )
            goto LABEL_291;
          v87 = this->fields.setupInfo;
          v88 = v85;
          v89 = v84;
          v90 = ServantFilterEventId;
          goto LABEL_201;
        case 7:
          if ( v4->fields.bonusKind != 7 )
          {
            v95 = v3->fields.bonusKindId;
            goto LABEL_265;
          }
          bonusKindId = v4->fields.bonusKindId;
          v95 = v3->fields.bonusKindId;
LABEL_206:
          if ( bonusKindId == v95 )
            goto LABEL_289;
          goto LABEL_265;
        default:
          goto LABEL_6;
      }
      goto LABEL_270;
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
        goto LABEL_291;
      if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0) )
      {
LABEL_290:
        LOBYTE(this) = 0;
        return (char)this;
      }
      this = (PartyServantListViewItem_o *)v4->fields._BaseServantEntity_k__BackingField;
      if ( !this )
        goto LABEL_291;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0)
        || (((__int64 (__fastcall *)(PartyServantListViewItem_o *, ListViewSort_o *, const MethodInfo *))v4->klass->vtable._5_IsMatchFilter.methodPtr)(
              v4,
              v3,
              v4->klass->vtable._5_IsMatchFilter.method)
          & 1) == 0 )
      {
        goto LABEL_290;
      }
    }
  }
  this = (PartyServantListViewItem_o *)PartyServantListViewItem_TypeInfo;
  if ( v4->fields.isSwapChoice )
    isChoice = !v4->fields.isChoice;
  else
    isChoice = v4->fields.isChoice;
  if ( !PartyServantListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo);
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
        if ( !this->fields.bonusKind )
        {
          j_il2cpp_runtime_class_init_0(this);
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
        if ( !this->fields.bonusKind )
        {
          j_il2cpp_runtime_class_init_0(this);
          this = (PartyServantListViewItem_o *)PartyServantListViewItem_TypeInfo;
        }
        v4->fields.sortValue0B = *(_QWORD *)(*(_QWORD *)&this->fields.friendship.fields.hiddenValue + 8LL);
      }
      this = (PartyServantListViewItem_o *)v4->fields._BaseServantEntity_k__BackingField;
      if ( !this )
        goto LABEL_291;
      if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)this, 0) )
        goto LABEL_59;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( !TutorialFlag__Get_41569468(126, 0) )
        goto LABEL_59;
      v11 = PartyServantListViewItem_TypeInfo;
      if ( !PartyServantListViewItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo);
        v11 = PartyServantListViewItem_TypeInfo;
      }
      PRIORITY_LOWEST_HEROIN_LEAVE = v11->static_fields->PRIORITY_LOWEST_HEROIN_LEAVE;
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
  v13 = v4->fields.baseItem;
  if ( !v13 )
    goto LABEL_291;
  if ( !v13->fields.isRestrictionActiveGrandBoard )
    goto LABEL_296;
  this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
  if ( !this )
    goto LABEL_291;
  if ( !UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0) || v4->fields.isQuestRestriction )
  {
LABEL_296:
    if ( isChoice && v3->fields.isChoiceSort )
    {
      v14 = PartyServantListViewItem_TypeInfo;
      if ( !PartyServantListViewItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo);
        v14 = PartyServantListViewItem_TypeInfo;
      }
      PRIORITY_LOWEST_HEROIN_LEAVE = v14->static_fields->PRIORITY_TOP;
    }
    else
    {
      if ( !v4->fields.isQuestRestriction )
        goto LABEL_59;
      PRIORITY_LOWEST_HEROIN_LEAVE = -1;
    }
    goto LABEL_58;
  }
  v24 = PartyServantListViewItem_TypeInfo;
  if ( !PartyServantListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo);
    v24 = PartyServantListViewItem_TypeInfo;
  }
  v25 = v24->static_fields;
  v4->fields.sortValue0 = v25->PriorityGrandServantOnActiveGrandBoard;
  if ( isChoice && v3->fields.isChoiceSort )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v25 = PartyServantListViewItem_TypeInfo->static_fields;
    }
    v4->fields.sortValue0B = v25->PRIORITY_TOP;
  }
LABEL_59:
  PartyServantListViewItem__InitAfterSecondSort(v4, (const MethodInfo *)sort);
  this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_291;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
  equipServantEntity = v4->fields.equipServantEntity;
  this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo3;
  if ( equipServantEntity )
  {
    cost = equipServantEntity->fields.cost;
    if ( !this )
      goto LABEL_291;
  }
  else
  {
    cost = 0;
    if ( !this )
      goto LABEL_291;
  }
  IconLabelInfo__Set_42060700((IconLabelInfo_o *)this, 7, v4->fields.cost, 0, cost, 0, 0, 0, 0, 0);
  this = (PartyServantListViewItem_o *)(&dword_0 + 1);
  switch ( v3->fields.sortKind )
  {
    case 1:
      v17 = v4->fields.userServantEntity;
      if ( !v17 )
        goto LABEL_291;
      v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
      *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v138.fields.fakeValue = v18;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v129 = v138;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(
                                             &v129,
                                             0);
      v19 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v19 )
        goto LABEL_291;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_291;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v19->fields.createdAt, 0, 0, 0, 0);
      goto LABEL_251;
    case 2:
      rarityId = v4->fields.rarityId;
      v67 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = rarityId;
      if ( !v67 )
        goto LABEL_291;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_291;
      lv = v67->fields.lv;
      exceedCount = v67->fields.exceedCount;
      v65 = 36;
      actualRarity = v4->fields.actualRarity;
      goto LABEL_257;
    case 3:
      goto LABEL_165;
    case 4:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_291;
      UserServantEntity__getTreasureDeviceInfo_44310656((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0);
      TempOverwriteTreasureDeviceLv_k__BackingField = v4->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
      v59 = tdMaxLv[1];
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v60 = TempOverwriteTreasureDeviceLv_k__BackingField <= 0
          ? tdMaxLv[1]
          : v4->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
      v4->fields.sortValue1 = v60;
      if ( !this )
        goto LABEL_291;
      IconLabelInfo__Set_42060700(
        (IconLabelInfo_o *)this,
        33,
        v59,
        tdMaxLv[0],
        0,
        0,
        0,
        TempOverwriteTreasureDeviceLv_k__BackingField,
        0,
        0);
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_291;
      iconLabelInfo2 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo2;
      MaxWave_k__BackingField = this->fields._MaxWave_k__BackingField;
      this = (PartyServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !iconLabelInfo2 )
        goto LABEL_291;
      lv = v4->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
      exceedCount = (int)this;
      v65 = 2;
      this = iconLabelInfo2;
      LODWORD(rarityId) = MaxWave_k__BackingField;
      actualRarity = 0;
      goto LABEL_257;
    case 5:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_291;
      this = (PartyServantListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0);
      v30 = (int)this;
      if ( !v4->fields._IsGrandSameServant_k__BackingField )
        goto LABEL_217;
      v31 = v4->fields.baseItem;
      if ( !v31 )
        goto LABEL_291;
      v32 = v31->fields.userServantEntity;
      if ( !v32 )
        goto LABEL_291;
      v33 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
      *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v138.fields.fakeValue = v33;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v137 = v138;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(
                                             &v137,
                                             0);
      v34 = v4->fields.userServantEntity;
      if ( !v34 )
        goto LABEL_291;
      v35 = *(_OWORD *)&v34->fields.id.fields.fakeValue;
      v36 = this;
      *(_OWORD *)&v136.fields.currentCryptoKey = *(_OWORD *)&v34->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v136.fields.fakeValue = v35;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(
                                             &v136,
                                             0);
      if ( v36 != this )
        goto LABEL_97;
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_291;
      this = (PartyServantListViewItem_o *)UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_97:
        v37 = v4->fields.baseItem;
        if ( !v37 )
          goto LABEL_291;
        v38 = v37->fields.userServantEntity;
        if ( !v38 )
          goto LABEL_291;
        v39 = *(_OWORD *)&v38->fields.id.fields.fakeValue;
        *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)&v38->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v138.fields.fakeValue = v39;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v135 = v138;
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(
                                               &v135,
                                               0);
        v40 = v4->fields.userServantEntity;
        if ( !v40 )
          goto LABEL_291;
        v41 = *(_OWORD *)&v40->fields.id.fields.fakeValue;
        *(_OWORD *)&v134.fields.currentCryptoKey = *(_OWORD *)&v40->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v134.fields.fakeValue = v41;
        if ( this != (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(
                                                     &v134,
                                                     0) )
        {
          this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
          if ( !this )
            goto LABEL_291;
          if ( UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0) )
          {
            this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
            if ( !this )
              goto LABEL_291;
            this = (PartyServantListViewItem_o *)UserServantEntity__get_GrandInfo((UserServantEntity_o *)this, 0);
            if ( !this )
              goto LABEL_291;
            v30 -= UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)this, 0);
          }
        }
      }
      else
      {
        v104 = v4->fields.userServantEntity;
        if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
        this = (PartyServantListViewItem_o *)UserServantGrandInfo__Make(v104, 1, 0);
        if ( !this )
          goto LABEL_291;
        v30 += UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)this, 0);
      }
LABEL_217:
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
            goto LABEL_291;
          v107 = 46;
LABEL_238:
          IconLabelInfo__Set_42060700((IconLabelInfo_o *)this, v107, hp, v30, atk, 0, 0, 0, 0, 0);
          goto LABEL_251;
        }
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = hp;
        if ( !this )
          goto LABEL_291;
        v29 = 3;
        goto LABEL_249;
      }
      this = (PartyServantListViewItem_o *)v4->fields.equipServantEntityList;
      if ( !this )
        goto LABEL_291;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v138,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v108 = 0;
      v139 = *(System_Collections_Generic_List_Enumerator_object__o *)&v138.fields.currentCryptoKey;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v139,
                (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
      {
        if ( v139.fields._current )
        {
          monitor_high = HIDWORD(v139.fields._current[25].monitor);
          v108 += monitor_high;
          v4->fields.sortValue1 = monitor_high + v4->fields.hp;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v139,
        (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_291;
      v110 = v4->fields.hp;
      v111 = 46;
      break;
    case 6:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_291;
      this = (PartyServantListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0);
      v30 = (int)this;
      if ( !v4->fields._IsGrandSameServant_k__BackingField )
        goto LABEL_234;
      v47 = v4->fields.baseItem;
      if ( !v47 )
        goto LABEL_291;
      v48 = v47->fields.userServantEntity;
      if ( !v48 )
        goto LABEL_291;
      v49 = *(_OWORD *)&v48->fields.id.fields.fakeValue;
      *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)&v48->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v138.fields.fakeValue = v49;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v133 = v138;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(
                                             &v133,
                                             0);
      v50 = v4->fields.userServantEntity;
      if ( !v50 )
        goto LABEL_291;
      v51 = *(_OWORD *)&v50->fields.id.fields.fakeValue;
      v52 = this;
      *(_OWORD *)&v132.fields.currentCryptoKey = *(_OWORD *)&v50->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v132.fields.fakeValue = v51;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(
                                             &v132,
                                             0);
      if ( v52 != this )
        goto LABEL_124;
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_291;
      this = (PartyServantListViewItem_o *)UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_124:
        v53 = v4->fields.baseItem;
        if ( !v53 )
          goto LABEL_291;
        v54 = v53->fields.userServantEntity;
        if ( !v54 )
          goto LABEL_291;
        v55 = *(_OWORD *)&v54->fields.id.fields.fakeValue;
        *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)&v54->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v138.fields.fakeValue = v55;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v131 = v138;
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(
                                               &v131,
                                               0);
        v56 = v4->fields.userServantEntity;
        if ( !v56 )
          goto LABEL_291;
        v57 = *(_OWORD *)&v56->fields.id.fields.fakeValue;
        *(_OWORD *)&v130.fields.currentCryptoKey = *(_OWORD *)&v56->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v130.fields.fakeValue = v57;
        if ( this != (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(
                                                     &v130,
                                                     0) )
        {
          this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
          if ( !this )
            goto LABEL_291;
          if ( UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0) )
          {
            this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
            if ( !this )
              goto LABEL_291;
            this = (PartyServantListViewItem_o *)UserServantEntity__get_GrandInfo((UserServantEntity_o *)this, 0);
            if ( !this )
              goto LABEL_291;
            v30 -= UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0);
          }
        }
      }
      else
      {
        v112 = v4->fields.userServantEntity;
        if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
        this = (PartyServantListViewItem_o *)UserServantGrandInfo__Make(v112, 1, 0);
        if ( !this )
          goto LABEL_291;
        v30 += UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0);
      }
LABEL_234:
      if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v4->fields.equipServantEntityList, 0) )
      {
        v113 = v4->fields.equipUserServantEntity;
        hp = v4->fields.atk;
        if ( v113 )
        {
          atk = v113->fields.atk;
          this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = atk + (int)hp;
          if ( !this )
            goto LABEL_291;
          v107 = 47;
          goto LABEL_238;
        }
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = hp;
        if ( !this )
          goto LABEL_291;
        v29 = 5;
LABEL_249:
        friendshipMax = v30;
LABEL_250:
        IconLabelInfo__Set_42060700((IconLabelInfo_o *)this, v29, hp, friendshipMax, 0, 0, 0, 0, 0, 0);
LABEL_251:
        this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
        if ( this )
        {
          iconLabelInfo1 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo2;
LABEL_253:
          v76 = this->fields._MaxWave_k__BackingField;
LABEL_254:
          this = (PartyServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
          if ( iconLabelInfo1 )
          {
            exceedCount = (int)this;
            v65 = 2;
            actualRarity = 0;
            this = iconLabelInfo1;
            LODWORD(rarityId) = v76;
            goto LABEL_256;
          }
        }
LABEL_291:
        sub_1CE6958(this, sort);
      }
      this = (PartyServantListViewItem_o *)v4->fields.equipServantEntityList;
      if ( !this )
        goto LABEL_291;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v138,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v108 = 0;
      v139 = *(System_Collections_Generic_List_Enumerator_object__o *)&v138.fields.currentCryptoKey;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v139,
                (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
      {
        if ( v139.fields._current )
        {
          monitor = (int)v139.fields._current[25].monitor;
          v108 += monitor;
          v4->fields.sortValue1 = monitor + v4->fields.atk;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v139,
        (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_291;
      v110 = v4->fields.atk;
      v111 = 47;
      break;
    case 7:
      v68 = v4->fields.cost;
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      goto LABEL_150;
    case 8:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      v68 = -v4->fields.priority;
LABEL_150:
      v4->fields.sortValue1 = v68;
      if ( !this )
        goto LABEL_291;
      iconLabelInfo1 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      goto LABEL_253;
    case 0xA:
      v77 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
      v78 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v141.fields.currentCryptoKey = v77;
      *(_QWORD *)&v141.fields.fakeValue = v78;
      v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v141, 0);
      v80 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v81 = v79;
      friendship = v4->fields.friendship;
      v4->fields.sortValue1 = v81;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(
                                             friendship,
                                             0);
      if ( !v80 )
        goto LABEL_291;
      friendshipMax = v4->fields.friendshipMax;
      LODWORD(hp) = (_DWORD)this;
      v29 = 32;
      this = v80;
      goto LABEL_250;
    case 0xE:
      this = (PartyServantListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) != 0 )
      {
        v70 = (PartyServantListViewManager_o *)v3->fields.manager;
        if ( !v70
          || (v71 = PartyServantListViewManager_TypeInfo->_2.naturalAligment,
              v70->klass->_2.naturalAligment < (unsigned int)v71)
          || (PartyServantListViewManager_c *)v70->klass->_2.typeHierarchy[v71 - 1] != PartyServantListViewManager_TypeInfo )
        {
          v125 = PartyServantListViewItem__get_BaseServantId(v4, (const MethodInfo *)sort);
          sub_1CE6958(v125, v126);
        }
        v72 = PartyServantListViewItem__get_BaseServantId(v4, (const MethodInfo *)sort);
        this = (PartyServantListViewItem_o *)PartyServantListViewManager__GetAmountSortValue(v70, v72, 0);
        v4->fields.amountSortValue = (int64_t)this;
      }
      BaseServantEntity_k__BackingField = v4->fields._BaseServantEntity_k__BackingField;
      if ( !BaseServantEntity_k__BackingField )
        goto LABEL_291;
      collectionNo = BaseServantEntity_k__BackingField->fields.collectionNo;
      v75 = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarityId << 32) + ((_QWORD)this << 48))
                            | collectionNo;
      if ( !v75 )
        goto LABEL_291;
      iconLabelInfo1 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v76 = v75->fields._MaxWave_k__BackingField;
      this = v75;
      goto LABEL_254;
    case 0xF:
      hp = v4->fields.hpReinforceValue;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_291;
      friendshipMax = v4->fields.nowMaxHpReinforceValue;
      v29 = 44;
      goto LABEL_250;
    case 0x10:
      hp = v4->fields.atkReinforceValue;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_291;
      friendshipMax = v4->fields.nowMaxAtkReinforceValue;
      v29 = 45;
      goto LABEL_250;
    case 0x19:
      v42 = v4->fields.questRestrictionInfo;
      if ( !v42 || !v42->fields.isFatigure )
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
          goto LABEL_291;
        v43 = this->fields._MaxWave_k__BackingField;
        priority = v4->fields.priority;
        v45 = v4->fields._BaseServantEntity_k__BackingField;
        v4->fields.sortValue1B = v43;
        v4->fields.sortValue2 = priority;
        if ( !v45 )
          goto LABEL_291;
        v46 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue2B = v43
                               | ((unsigned __int64)(unsigned int)v4->fields.rarityId << 48)
                               | ((__int64)v45->fields.collectionNo << 16);
      }
      else
      {
LABEL_164:
        v3->fields.sortKind = 3;
LABEL_165:
        this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_291;
        v43 = this->fields._MaxWave_k__BackingField;
        v46 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = v43;
      }
      this = (PartyServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !v46 )
        goto LABEL_291;
      exceedCount = (int)this;
      v65 = 2;
      this = v46;
      LODWORD(rarityId) = v43;
      actualRarity = 0;
LABEL_256:
      lv = 0;
LABEL_257:
      IconLabelInfo__Set_42060700((IconLabelInfo_o *)this, v65, rarityId, exceedCount, 0, 0, 0, lv, actualRarity, 0);
      LOBYTE(this) = 1;
      return (char)this;
    default:
      return (char)this;
  }
  IconLabelInfo__Set_42060700((IconLabelInfo_o *)this, v111, v110, v30, v108, 0, 0, 0, 0, 0);
  goto LABEL_251;
}


bool PartyServantListViewItem__SwapChoice(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapChoice;
  this->fields.isSwapChoice ^= 1u;
  return v2;
}


bool PartyServantListViewItem__SwapLock(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  bool v2; // w8

  v2 = !this->fields.isSwapLock;
  this->fields.isSwapLock ^= 1u;
  return v2;
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
  Il2CppObject *v9; // x21
  const MethodInfo *v10; // x1
  int32_t v11; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // kr00_16
  UserServantEntity_o *userServantEntity; // x21
  EventUpValSetupInfo_o *setupInfo; // x20
  int32_t eventId; // w19

  if ( (byte_4E005B8 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4E005B8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v9 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  v11 = PartyServantListViewItem__get_BaseServantId(this, v10);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v11, 0);
  v8 = *(_QWORD *)&v12.fields.fakeValue;
  BaseServantId = *(Il2CppObject **)&v12.fields.currentCryptoKey;
  if ( !v9 )
    goto LABEL_18;
  if ( ServantFilterMaster__IsEnableServant((ServantFilterMaster_o *)v9, v12, entity->fields.eventId, 0) )
    return 1;
  userServantEntity = this->fields.userServantEntity;
  setupInfo = this->fields.setupInfo;
  eventId = entity->fields.eventId;
  BaseServantId = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !BaseServantId || !userServantEntity )
LABEL_18:
    sub_1CE6958(BaseServantId, v8);
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
  Il2CppObject *v9; // x21
  const MethodInfo *v10; // x1
  int32_t v11; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // kr00_16
  UserServantEntity_o *userServantEntity; // x21
  EventUpValSetupInfo_o *setupInfo; // x20
  int32_t eventId; // w19

  if ( (byte_4E005B9 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4E005B9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventCampaignMaster___);
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
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v9 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  v11 = PartyServantListViewItem__get_BaseServantId(this, v10);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v11, 0);
  v8 = *(_QWORD *)&v12.fields.fakeValue;
  BaseServantId = *(Il2CppObject **)&v12.fields.currentCryptoKey;
  if ( !v9 )
    goto LABEL_18;
  if ( ServantFilterMaster__IsEnableServant((ServantFilterMaster_o *)v9, v12, entity->fields.eventId, 0) )
    return 1;
  userServantEntity = this->fields.userServantEntity;
  setupInfo = this->fields.setupInfo;
  eventId = entity->fields.eventId;
  BaseServantId = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !BaseServantId || !userServantEntity )
LABEL_18:
    sub_1CE6958(BaseServantId, v8);
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
  PartyServantListViewItem_o *v2; // x19
  struct ServantEntity_o *BaseServantEntity_k__BackingField; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  v2 = this;
  if ( (byte_4E005B5 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E005B5 = 1;
  }
  BaseServantEntity_k__BackingField = v2->fields._BaseServantEntity_k__BackingField;
  if ( !BaseServantEntity_k__BackingField )
    sub_1CE6958(this, method);
  v5 = *(_QWORD *)&BaseServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&BaseServantEntity_k__BackingField->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v7, 0);
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
  PartyServantListViewItem_o *v2; // x19
  struct ServantEntity_o *ServantEntity_k__BackingField; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  v2 = this;
  if ( (byte_4E005B4 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E005B4 = 1;
  }
  ServantEntity_k__BackingField = v2->fields._ServantEntity_k__BackingField;
  if ( !ServantEntity_k__BackingField )
    sub_1CE6958(this, method);
  v5 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&ServantEntity_k__BackingField->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v7, 0);
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
    sub_1CE6958(this, method);
  return baseItem->fields._WaveEnemyClassIds_k__BackingField;
}


void PartyServantListViewItem__set_BaseServantEntity(
        PartyServantListViewItem_o *this,
        ServantEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._BaseServantEntity_k__BackingField = value;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._BaseServantEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._FriendshipUpValTuple_k__BackingField = value;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ServantEntity_k__BackingField = value;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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