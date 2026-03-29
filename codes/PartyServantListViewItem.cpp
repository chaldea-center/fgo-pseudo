void PartyServantListViewItem___cctor(const MethodInfo *method)
{
  struct PartyServantListViewItem_StaticFields *static_fields; // x8

  if ( (byte_4D2C56A & 1) == 0 )
  {
    sub_1C93AD4(&PartyServantListViewItem_TypeInfo);
    byte_4D2C56A = 1;
  }
  static_fields = PartyServantListViewItem_TypeInfo->static_fields;
  static_fields->PriorityGrandServantOnActiveGrandBoard = 20;
  *(_OWORD *)&static_fields->PRIORITY_NORMAL = xmmword_D00B30;
  *(_OWORD *)&static_fields->PRIORITY_LOWEST = xmmword_D012B0;
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
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  IconLabelInfo_o *v24; // x24
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  IconLabelInfo_o *v31; // x24
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
  UserServantEntity_o *v54; // x24
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
  Il2CppObject *MasterData_object; // x0
  __int64 v68; // x22
  __int64 v69; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v70; // x21
  Il2CppObject *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  UserServantEntity_o *v78; // x8
  __int128 v79; // q1
  UserServantCollectionMaster_o *v80; // x21
  int64_t v81; // x23
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
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
  System_Collections_Generic_List_object__o *v100; // x23
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  PartyListViewItem_o *v107; // x25
  struct UserServantEntity_o *v108; // x22
  int32_t v109; // w23
  PartyOrganizationListViewItem_o *v110; // x29
  UserServantEntity_o *v111; // x8
  __int128 v112; // q0
  struct UserServantEntity_o *v113; // x8
  __int128 v114; // q0
  int64_t v115; // x27
  __int128 v116; // q0
  const MethodInfo_39A11A8 *v117; // x3
  struct UserServantEntity_o *v118; // x24
  int64_t v119; // x27
  int64_t v120; // x25
  struct UserServantEntity_o *v121; // x8
  __int128 v122; // q0
  __int128 v123; // q1
  int64_t v124; // x22
  const MethodInfo_399FF98 *v125; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v126; // x8
  __int64 v127; // x25
  __int64 v128; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v129; // x8
  int v130; // w25
  int v131; // w25
  struct System_Int32_array *items; // x8
  _QWORD *v133; // x9
  __int64 size; // x10
  struct ServantEntity_o *v135; // x8
  __int64 v136; // x25
  __int64 v137; // x27
  int32_t v138; // w27
  int32_t v139; // w29
  int32_t IncludedRestrictionIds; // w0
  struct PartyOrganizationListViewItem_o *v141; // x8
  struct ServantEntity_o *v142; // x8
  __int64 v143; // x21
  __int64 v144; // x22
  __int64 v145; // x21
  __int64 v146; // x22
  const MethodInfo_39A0CCC *v147; // x4
  struct UserServantEntity_o *v148; // x8
  int v149; // w23
  __int64 v150; // x21
  __int64 v151; // x22
  int32_t v152; // w0
  struct ServantEntity_o *servantEntity; // x8
  __int64 v154; // x21
  __int64 v155; // x22
  System_Int64_array *EquipUserServantIdList; // x0
  const MethodInfo *v157; // x2
  __int128 v158; // q0
  UserServantGrandEntity_o *FirstByUserSvtId; // x0
  System_Int64_array *EquipList; // x0
  const MethodInfo *v161; // x2
  bool v162; // cc
  __int128 v163; // q0
  BalanceConfig_c *v164; // x0
  System_Collections_Generic_List_int__o *v165; // x21
  PartyListViewItem_array *v166; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v168; // x26
  int32_t v169; // w24
  PartyListViewItem_o *v170; // x22
  int32_t v171; // w23
  PartyOrganizationListViewItem_o *v172; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  struct System_Int32_array *v174; // x8
  _QWORD *v175; // x9
  __int64 v176; // x10
  UserServantEntity_o *v177; // x25
  struct UserServantEntity_o *v178; // x8
  __int128 v179; // q0
  System_Int64_array *v180; // x0
  const MethodInfo *v181; // x2
  __int64 v182; // x22
  __int64 v183; // x23
  const MethodInfo *v184; // x1
  const MethodInfo *v185; // x1
  UserServantEntity_o *v186; // x8
  bool IsChoice; // w0
  UserServantEntity_o *v188; // x24
  UserServantEntity_o *v189; // x8
  __int128 v190; // q0
  __int64 v191; // x21
  bool v192; // zf
  bool v193; // w8
  UserServantEntity_o *v194; // x8
  const MethodInfo *v195; // x1
  UserServantEntity_o *v196; // x8
  UserServantEntity_o *v197; // x8
  bool IsUniqueIndividualityRestriction_43874020; // w0
  const MethodInfo *v199; // x1
  struct QuestRestrictionInfo_o *v200; // x8
  PartyListViewItem_o *v201; // x26
  UserEventServantFatigueMaster_o *v202; // x21
  int32_t eventId; // w22
  __int64 v204; // x23
  __int64 v205; // x25
  int64_t v206; // x21
  bool AllOutBattleAlreadyUsed; // w0
  struct QuestRestrictionInfo_o *v208; // x8
  Il2CppObject *v209; // x21
  UserServantEntity_o *v210; // x8
  UserEventDataLostEntity_o *v211; // x21
  __int64 v212; // x22
  __int64 v213; // x23
  UserServantEntity_o *v214; // x8
  char v215; // w21
  UserEventDataLostEntity_o *v216; // x22
  __int64 v217; // x23
  __int64 v218; // x25
  int32_t v219; // w21
  struct PartyOrganizationListViewItem_o *v220; // x8
  __int64 v221; // x21
  __int64 v222; // x22
  UserServantGrandEntity_o *EntityFromSvtId; // x0
  System_Int64_array *v224; // x0
  const MethodInfo *v225; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr20_16
  UserServantEntity_o *v227; // x8
  int64_t v228; // x22
  __int64 v229; // x23
  __int64 v230; // x25
  int32_t v231; // w23
  int32_t Rarity; // w27
  const MethodInfo *v233; // x7
  System_String_o **p_skillName; // x1
  int32_t *p_actMaxRarity; // x2
  int32_t partyIndex; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v237; // kr30_16
  UserServantEntity_o *v238; // x8
  int64_t v239; // x22
  __int64 v240; // x23
  __int64 v241; // x25
  struct QuestRestrictionInfo_o *v242; // x8
  EventServantPointRankMaster_o *v243; // x22
  UserServantEntity_o *v244; // x8
  __int128 v245; // q0
  UserEventServantPointMaster_o *v246; // x23
  int64_t v247; // x26
  int32_t *p_SvtPoint_k__BackingField; // x24
  int32_t v249; // w23
  int32_t v250; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  System_Collections_Generic_List_T__o *v252; // x21
  Il2CppObject *v253; // x22
  System_Collections_Generic_List_object__o *v254; // x23
  Il2CppObject *v255; // x22
  _BOOL8 v256; // x0
  __int64 v257; // x1
  EventCampaignEntity_o *current; // x23
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x26
  __int64 v260; // x27
  __int64 v261; // x28
  int32_t v262; // w1
  int32_t v263; // w26
  int32_t FriendshipBonusValue; // w0
  int32_t calcType; // w3
  int32_t v266; // w2
  const MethodInfo_3BE5008 *v267; // x5
  __int64 v268; // x0
  __int64 v269; // x1
  struct System_Object_array *v270; // x8
  _QWORD *v271; // x9
  __int64 v272; // x10
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v273; // x0
  int32_t v274; // w2
  int32_t v275; // w3
  System_String_o *v276; // x4
  int32_t v277; // w5
  int64_t v278; // x6
  System_String_o *v279; // x7
  BalanceConfig_c *v280; // x8
  int v281; // w21
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 v283; // x20
  __int64 v284; // x21
  int32_t v285; // w0
  IconLabelInfo_o *iconLabelInfo1; // x8
  __int128 v287; // q0
  UserServantGrandEntity_o *v288; // x0
  UserServantGrandEntity_o *v289; // x21
  System_Int64_array *v290; // x0
  const MethodInfo *v291; // x2
  UserServantGrandEntity_o *v292; // x21
  System_Int64_array *v293; // x0
  const MethodInfo *v294; // x2
  bool v295; // w8
  System_Collections_Generic_List_int__o *v296; // [xsp+10h] [xbp-390h]
  UserServantGrandMaster_o *Master_object; // [xsp+20h] [xbp-380h]
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+30h] [xbp-370h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+38h] [xbp-368h]
  bool IsNotSameParty; // [xsp+4Ch] [xbp-354h]
  UserServantEntity_Fields *p_fields; // [xsp+58h] [xbp-348h]
  struct PartyOrganizationListViewItem_o **p_baseItem; // [xsp+60h] [xbp-340h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // [xsp+68h] [xbp-338h]
  int64_t v304; // [xsp+70h] [xbp-330h]
  int64_t v305; // [xsp+78h] [xbp-328h]
  int32_t v306; // [xsp+84h] [xbp-31Ch]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+A0h] [xbp-300h]
  UserServantEntity_o **p_userServantEntity; // [xsp+A8h] [xbp-2F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v312; // [xsp+B0h] [xbp-2F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v313; // [xsp+D0h] [xbp-2D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v314; // [xsp+F0h] [xbp-2B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v315; // [xsp+110h] [xbp-290h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v316; // [xsp+130h] [xbp-270h] BYREF
  __int128 v317; // [xsp+150h] [xbp-250h]
  __int128 v318; // [xsp+160h] [xbp-240h]
  _BYTE item[40]; // [xsp+170h] [xbp-230h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v320; // [xsp+1A0h] [xbp-200h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v321; // [xsp+1C0h] [xbp-1E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v322; // [xsp+1E0h] [xbp-1C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v323; // [xsp+200h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v324; // [xsp+220h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v325; // [xsp+240h] [xbp-160h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v326; // [xsp+260h] [xbp-140h] BYREF
  UserEventServantPointEntity_o *v327; // [xsp+280h] [xbp-120h] BYREF
  int32_t actMaxRarity; // [xsp+28Ch] [xbp-114h] BYREF
  System_String_o *skillName; // [xsp+290h] [xbp-110h] BYREF
  int v330; // [xsp+29Ch] [xbp-104h] BYREF
  __int64 v331; // [xsp+2A0h] [xbp-100h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+2A8h] [xbp-F8h] BYREF
  int64_t recoverAt; // [xsp+2B0h] [xbp-F0h] BYREF
  int32_t friendshipRank; // [xsp+2BCh] [xbp-E4h] BYREF
  _OWORD v335[2]; // [xsp+2C0h] [xbp-E0h] BYREF
  __int128 v336; // [xsp+2E0h] [xbp-C0h]
  _OWORD v337[2]; // [xsp+2F0h] [xbp-B0h] BYREF
  _BYTE v338[39]; // [xsp+310h] [xbp-90h] BYREF
  __int64 v339; // [xsp+338h] [xbp-68h]
  System_ValueTuple_int__int__Int32Enum__o v340; // 0:x0.12
  System_ValueTuple_int__int__Int32Enum__o v341; // 0:x1.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v342; // 0:x0.16
  System_Nullable_T__o v343; // 0:x0.16
  System_Nullable_long__o v344; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v345; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v346; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v347; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v348; // 0:x0.16
  System_Nullable_T__o v349; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v350; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v351; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v352; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v353; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v354; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v355; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v356; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v357; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v358; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v359; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v360; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v361; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v362; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v363; // 0:x2.16

  v339 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_4D2C55C & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&CommonRestrictionMaster_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C93AD4(&IconLabelInfo_TypeInfo);
    sub_1C93AD4(&long___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_ObscuredInt__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_long___ctor__);
    sub_1C93AD4(&Method_System_Nullable_int___ctor__);
    sub_1C93AD4(&Method_System_Nullable_ObscuredInt___ctor__);
    sub_1C93AD4(&Method_System_Nullable_ObscuredLong___ctor__);
    sub_1C93AD4(&Method_System_Nullable_ObscuredLong__get_HasValue__);
    sub_1C93AD4(&Method_System_Nullable_ObscuredInt__get_HasValue__);
    sub_1C93AD4(&Method_System_Nullable_long__get_HasValue__);
    sub_1C93AD4(&Method_System_Nullable_int__get_HasValue__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__);
    byte_4D2C55C = 1;
  }
  friendshipRank = 0;
  recoverAt = 0;
  entity = 0;
  v331 = 0;
  v330 = 0;
  skillName = 0;
  actMaxRarity = 0;
  v327 = 0;
  memset(&v326, 0, sizeof(v326));
  memset(v338, 0, sizeof(v338));
  v336 = 0u;
  memset(v337, 0, 23);
  v17 = (IconLabelInfo_o *)sub_1C93D20(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0);
  this->fields.iconLabelInfo1 = v17;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo1, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (IconLabelInfo_o *)sub_1C93D20(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0);
  this->fields.iconLabelInfo2 = v24;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo2, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (IconLabelInfo_o *)sub_1C93D20(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v31, 0);
  this->fields.iconLabelInfo3 = v31;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo3, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_334;
  Member = PartyListViewItem__GetMember(partyItem, num, 0);
  this->fields.baseItem = Member;
  p_baseItem = &this->fields.baseItem;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.baseItem, (int32_t)Member, v41, v42, v43, v44, v45, v46);
  baseItem = this->fields.baseItem;
  v54 = userServantEntity;
  this->fields._PartyListViewItemMenuKind_k__BackingField = partyItem->fields.menuKind;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_334;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0;
  this->fields.userServantEntity = userServantEntity;
  sub_1C93A78(
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v55, v56, v57, v58, v59, v60);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  p_userServantEntity = &this->fields.userServantEntity;
  if ( !this->fields.userServantEntity )
    goto LABEL_334;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_334;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  v69 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v68 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v70 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v342.fields.currentCryptoKey = v69;
  *(_QWORD *)&v342.fields.fakeValue = v68;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v342, 0);
  if ( !v70 )
    goto LABEL_334;
  v71 = DataMasterBase_object__object__int___GetEntity(
          v70,
          Instance,
          (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v71;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, (int32_t)v71, v72, v73, v74, v75, v76, v77);
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  this->fields._IsGrandSameServant_k__BackingField = isGrandSameServant;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_334;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v78 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_334;
  v79 = *(_OWORD *)&v78->fields.userId.fields.fakeValue;
  v80 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)item = *(_OWORD *)&v78->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&item[16] = v79;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v325 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
  v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v325, 0);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(this->fields.svtId, 0);
  if ( !v80 )
    goto LABEL_334;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v80, v81, Instance, 0);
  if ( !*p_servantEntity )
    goto LABEL_334;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !Instance )
    goto LABEL_334;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &friendshipRank,
    &this->fields.friendshipMax,
    0);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0);
  this->fields.isBase = 0;
  this->fields.isSame = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipUserServantEntity, 0, v82, v83, v84, v85, v86, v87);
  this->fields.equipServantEntity = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntity, 0, v88, v89, v90, v91, v92, v93);
  this->fields.equipIdList = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, 0, v94, v95, v96, v97, v98, v99);
  v100 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v100,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v100;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntityList,
    (int32_t)v100,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  Instance = (int64_t)this->fields.servantEntity;
  this->fields._IsEquipFriendShipSkillChangeOnParty_k__BackingField = 0;
  if ( !Instance )
    goto LABEL_334;
  v306 = num;
  IsNotSameParty = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0);
  v296 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v296,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v107 = partyItem;
  Master_object = (UserServantGrandMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  v304 = 0;
  v305 = 0;
  v108 = 0;
  v109 = 0;
  p_fields = &userServantEntity->fields;
  while ( 1 )
  {
    Instance = (int64_t)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( v109 >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 172LL) )
      goto LABEL_132;
    Instance = (int64_t)PartyListViewItem__GetMember(v107, v109, 0);
    if ( !Instance )
      goto LABEL_334;
    v110 = (PartyOrganizationListViewItem_o *)Instance;
    if ( !*(_QWORD *)(Instance + 120) )
      goto LABEL_73;
    v111 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_334;
    v112 = *(_OWORD *)&v111->fields.id.fields.fakeValue;
    *(_OWORD *)item = *(_OWORD *)&v111->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&item[16] = v112;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v324 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v324, 0);
    v113 = v110->fields.userServantEntity;
    if ( !v113 )
      goto LABEL_334;
    v114 = *(_OWORD *)&v113->fields.id.fields.fakeValue;
    v115 = Instance;
    *(_OWORD *)&v323.fields.currentCryptoKey = *(_OWORD *)&v113->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v323.fields.fakeValue = v114;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v323, 0);
    if ( v115 == Instance )
      break;
    if ( isGrandSameServant )
    {
      if ( !v54 )
        goto LABEL_334;
      v116 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)item = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
      *(_OWORD *)&item[16] = v116;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v320 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v320, 0);
      if ( !*p_baseItem )
        goto LABEL_334;
      v118 = (*p_baseItem)->fields.userServantEntity;
      v119 = Instance;
      if ( v118 )
        v120 = Instance;
      else
        v120 = v305;
      if ( v118 )
        v121 = (*p_baseItem)->fields.userServantEntity;
      else
        v121 = v108;
      if ( !v118 )
      {
        v107 = partyItem;
        v336 = 0u;
        memset(v337, 0, 23);
        memset(v338, 0, sizeof(v338));
LABEL_93:
        this->fields.isBase = 0;
        this->fields.isSame = 0;
        v54 = userServantEntity;
        v146 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v145 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v348.fields.currentCryptoKey = v146;
        *(_QWORD *)&v348.fields.fakeValue = v145;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v348, 0);
        if ( !*p_baseItem )
          goto LABEL_334;
        v148 = (*p_baseItem)->fields.userServantEntity;
        if ( v148 )
          v149 = Instance;
        else
          v149 = 0;
        if ( !v148 )
          goto LABEL_107;
        v349.fields.value = *(Il2CppObject **)&v148->fields.svtId.fields.currentCryptoKey;
        *(_QWORD *)&v363.fields.currentCryptoKey = *(_QWORD *)&v148->fields.svtId.fields.fakeValue;
        *(_QWORD *)&v349.fields.hasValue = item;
        memset(item, 0, 20);
        *(_QWORD *)&v363.fields.fakeValue = Method_System_Nullable_ObscuredInt___ctor__;
        System_Nullable_ObscuredInt____ctor(v349, v363, v147);
        if ( !item[0] )
          goto LABEL_107;
        v150 = *(_QWORD *)&item[4];
        v151 = *(_QWORD *)&item[12];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v350.fields.currentCryptoKey = v150;
        *(_QWORD *)&v350.fields.fakeValue = v151;
        v152 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v350, 0);
        *(_QWORD *)item = 0;
        System_Nullable_int____ctor(
          (System_Nullable_int__o)item,
          v152,
          (const MethodInfo_399F80C *)Method_System_Nullable_int___ctor__);
        if ( !item[0] || v149 != *(_DWORD *)&item[4] )
        {
LABEL_107:
          servantEntity = v110->fields.servantEntity;
          if ( !servantEntity )
            goto LABEL_334;
          v155 = *(_QWORD *)&servantEntity->fields.baseSvtId.fields.currentCryptoKey;
          v154 = *(_QWORD *)&servantEntity->fields.baseSvtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v351.fields.currentCryptoKey = v155;
          *(_QWORD *)&v351.fields.fakeValue = v154;
          NotSamePartyKey = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v351, 0);
          Instance = (int64_t)Master_object;
          if ( !Master_object )
            goto LABEL_334;
          Instance = (int64_t)UserServantGrandMaster__GetEntityFromSvtId(Master_object, NotSamePartyKey, 0);
          if ( !Instance )
            goto LABEL_334;
          goto LABEL_112;
        }
        Instance = (int64_t)*p_baseItem;
        if ( !*p_baseItem )
          goto LABEL_334;
        goto LABEL_130;
      }
      if ( !v121 )
        goto LABEL_334;
      v122 = *(_OWORD *)&v121->fields.id.fields.currentCryptoKey;
      v123 = *(_OWORD *)&v121->fields.id.fields.fakeValue;
      memset(item, 0, sizeof(item));
      *(_QWORD *)&v343.fields.hasValue = item;
      v343.fields.value = (Il2CppObject *)v335;
      v317 = v122;
      v318 = v123;
      v335[0] = v122;
      v335[1] = v123;
      System_Nullable_ObscuredLong____ctor(
        v343,
        (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
        v117);
      *(_QWORD *)((char *)v337 + 15) = *(_QWORD *)&item[32];
      v336 = *(_OWORD *)&item[1];
      v337[0] = *(_OWORD *)&item[17];
      *(_QWORD *)&v338[31] = *(_QWORD *)((char *)v337 + 15);
      *(_OWORD *)v338 = *(_OWORD *)&item[1];
      *(_OWORD *)&v338[16] = *(_OWORD *)&item[17];
      if ( item[0] )
        v124 = v120;
      else
        v124 = v304;
      v107 = partyItem;
      if ( !item[0] )
        goto LABEL_93;
      *(_OWORD *)item = *(_OWORD *)&v338[7];
      *(_OWORD *)&item[16] = *(_OWORD *)&v338[23];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v316 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
      v344.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v316, 0);
      *(_QWORD *)&v344.fields.hasValue = v335;
      v335[0] = 0u;
      System_Nullable_long____ctor(v344, Method_System_Nullable_long___ctor__, v125);
      if ( !LOBYTE(v335[0]) || v124 != *((_QWORD *)&v335[0] + 1) )
        goto LABEL_93;
      v108 = v118;
      v54 = userServantEntity;
      v304 = v119;
      v305 = v119;
    }
    if ( v306 != v109 )
    {
      v126 = *p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_334;
      v127 = *(_QWORD *)&v126[2].fields.currentCryptoKey;
      v128 = *(_QWORD *)&v126[2].fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v345.fields.currentCryptoKey = v127;
      *(_QWORD *)&v345.fields.fakeValue = v128;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v345, 0);
      v129 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v110->fields.servantEntity;
      if ( !v129 )
        goto LABEL_334;
      v130 = Instance;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v129[2], 0);
      if ( v130 == (_DWORD)Instance )
      {
        this->fields.isSame = 1;
LABEL_72:
        v107 = partyItem;
        goto LABEL_73;
      }
      if ( !IsNotSameParty )
        goto LABEL_71;
      Instance = (int64_t)v110->fields.servantEntity;
      if ( !Instance )
        goto LABEL_334;
      Instance = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0);
      if ( (Instance & 1) == 0 )
        goto LABEL_71;
      Instance = (int64_t)*p_servantEntity;
      if ( !*p_servantEntity )
        goto LABEL_334;
      Instance = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0);
      if ( !v110->fields.servantEntity )
        goto LABEL_334;
      v131 = Instance;
      Instance = ServantEntity__GetNotSamePartyKey(v110->fields.servantEntity, 0);
      if ( v131 == (_DWORD)Instance )
      {
        this->fields.isNotSameParty = 1;
        Instance = (int64_t)v110->fields.servantEntity;
        if ( !Instance )
          goto LABEL_334;
        NotSamePartyKey = (unsigned int)ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0);
        v107 = partyItem;
        Instance = (int64_t)v296;
        if ( !v296 )
          goto LABEL_334;
        items = v296->fields._items;
        v133 = Method_System_Collections_Generic_List_int__Add__;
        ++v296->fields._version;
        if ( !items )
          goto LABEL_334;
        size = v296->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v296,
            NotSamePartyKey,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
        }
        else
        {
          v296->fields._size = size + 1;
          items->m_Items[size] = NotSamePartyKey;
        }
      }
      else
      {
LABEL_71:
        if ( this->fields.commonRestrictionId != -1 )
          goto LABEL_72;
        v135 = v110->fields.servantEntity;
        if ( !v135 )
          goto LABEL_334;
        v136 = *(_QWORD *)&v135->fields.baseSvtId.fields.currentCryptoKey;
        v137 = *(_QWORD *)&v135->fields.baseSvtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v346.fields.currentCryptoKey = v136;
        *(_QWORD *)&v346.fields.fakeValue = v137;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v346, 0);
        if ( !*p_servantEntity )
          goto LABEL_334;
        v138 = Instance;
        v107 = partyItem;
        v139 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028((*p_servantEntity)[2], 0);
        if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
        IncludedRestrictionIds = CommonRestrictionMaster__GetIncludedRestrictionIds(v138, v139, 0);
        if ( (IncludedRestrictionIds & 0x80000000) == 0 )
          this->fields.commonRestrictionId = IncludedRestrictionIds;
      }
    }
LABEL_73:
    ++v109;
  }
  this->fields.isSame = 0;
  this->fields.partyIndex = v109;
  v141 = this->fields.baseItem;
  this->fields.isBase = v306 == v109 && isEnableRemove;
  if ( !v141 )
    goto LABEL_344;
  if ( v141->fields.isRestrictionGrandServant )
  {
    if ( v306 != v109 )
    {
      v142 = v110->fields.servantEntity;
      if ( !v142 )
        goto LABEL_334;
      v144 = *(_QWORD *)&v142->fields.baseSvtId.fields.currentCryptoKey;
      v143 = *(_QWORD *)&v142->fields.baseSvtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v347.fields.currentCryptoKey = v144;
      *(_QWORD *)&v347.fields.fakeValue = v143;
      NotSamePartyKey = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v347, 0);
      Instance = (int64_t)Master_object;
      if ( !Master_object )
        goto LABEL_334;
      Instance = (int64_t)UserServantGrandMaster__GetEntityFromSvtId(Master_object, NotSamePartyKey, 0);
      if ( !Instance )
        goto LABEL_132;
LABEL_112:
      EquipUserServantIdList = UserServantGrandEntity__GetEquipUserServantIdList(
                                 (UserServantGrandEntity_o *)Instance,
                                 0);
LABEL_131:
      PartyServantListViewItem__SetEquipStatus(this, EquipUserServantIdList, v157);
      goto LABEL_132;
    }
LABEL_129:
    Instance = (int64_t)v110;
LABEL_130:
    EquipUserServantIdList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0);
    goto LABEL_131;
  }
  if ( !v141->fields.isRestrictionActiveGrandBoard )
  {
LABEL_344:
    if ( v110->fields.isRestrictionActiveGrandBoard )
    {
      if ( !v54 )
        goto LABEL_334;
      v163 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)item = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
      *(_OWORD *)&item[16] = v163;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v321 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
      NotSamePartyKey = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v321, 0);
      Instance = (int64_t)Master_object;
      if ( !Master_object )
        goto LABEL_334;
      if ( UserServantGrandMaster__GetFirstByUserSvtId(Master_object, NotSamePartyKey, 0) )
      {
        v164 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v164 = BalanceConfig_TypeInfo;
        }
        EquipUserServantIdList = (System_Int64_array *)sub_1C93B7C(
                                                         long___TypeInfo,
                                                         (unsigned int)v164->static_fields->SvtEquipMax);
        goto LABEL_131;
      }
    }
    goto LABEL_129;
  }
  if ( !v54 )
    goto LABEL_334;
  v158 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)item = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&item[16] = v158;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v322 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
  NotSamePartyKey = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v322, 0);
  Instance = (int64_t)Master_object;
  if ( !Master_object )
    goto LABEL_334;
  FirstByUserSvtId = UserServantGrandMaster__GetFirstByUserSvtId(Master_object, NotSamePartyKey, 0);
  if ( v306 == v109 || (v292 = FirstByUserSvtId) == 0 || v110->fields.isRestrictionActiveGrandBoard )
  {
    EquipList = PartyOrganizationListViewItem__GetEquipList(v110, 0);
    PartyServantListViewItem__SetEquipStatus(this, EquipList, v161);
    v162 = v110->fields._EquipFriendShipSkillChange_k__BackingField <= 0;
  }
  else
  {
    v293 = UserServantGrandEntity__GetEquipUserServantIdList(FirstByUserSvtId, 0);
    PartyServantListViewItem__SetEquipStatus(this, v293, v294);
    Instance = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(v292, 0);
    v162 = (int)Instance <= 0;
  }
  v295 = !v162;
  this->fields._IsEquipFriendShipSkillChangeOnParty_k__BackingField = v295;
LABEL_132:
  if ( this->fields.partyIndex < 0 )
  {
    v220 = *p_baseItem;
    if ( *p_baseItem )
    {
      if ( v220->fields.isRestrictionGrandServant )
      {
        v222 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v221 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v356.fields.currentCryptoKey = v222;
        *(_QWORD *)&v356.fields.fakeValue = v221;
        NotSamePartyKey = (unsigned int)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v356, 0);
        Instance = (int64_t)Master_object;
        if ( !Master_object )
          goto LABEL_334;
        EntityFromSvtId = UserServantGrandMaster__GetEntityFromSvtId(Master_object, NotSamePartyKey, 0);
        if ( EntityFromSvtId )
        {
          v224 = UserServantGrandEntity__GetEquipUserServantIdList(EntityFromSvtId, 0);
          PartyServantListViewItem__SetEquipStatus(this, v224, v225);
        }
      }
      else if ( v220->fields.isRestrictionActiveGrandBoard )
      {
        if ( !v54 )
          goto LABEL_334;
        v287 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)item = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
        *(_OWORD *)&item[16] = v287;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v315 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
        NotSamePartyKey = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v315, 0);
        Instance = (int64_t)Master_object;
        if ( !Master_object )
          goto LABEL_334;
        v288 = UserServantGrandMaster__GetFirstByUserSvtId(Master_object, NotSamePartyKey, 0);
        if ( v288 )
        {
          v289 = v288;
          v290 = UserServantGrandEntity__GetEquipUserServantIdList(v288, 0);
          PartyServantListViewItem__SetEquipStatus(this, v290, v291);
          this->fields._IsEquipFriendShipSkillChangeOnParty_k__BackingField = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(
                                                                                v289,
                                                                                0) > 0;
        }
      }
    }
  }
  if ( this->fields._PartyListViewItemMenuKind_k__BackingField != 9 )
  {
    this->fields._OrganizedWave_k__BackingField = 0;
    goto LABEL_172;
  }
  v165 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v165,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  v166 = baseDeckItemList;
  if ( !baseDeckItemList )
    goto LABEL_334;
  max_length = baseDeckItemList->max_length;
  this->fields._MaxWave_k__BackingField = max_length;
  if ( (int)max_length < 1 )
    goto LABEL_165;
  v168 = 0;
  v169 = 1;
  while ( 2 )
  {
    if ( v168 >= (unsigned int)max_length )
      sub_1C93D34(Instance);
    v170 = v166->m_Items[v168];
    v171 = 0;
    while ( 2 )
    {
      Instance = (int64_t)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (int64_t)BalanceConfig_TypeInfo;
      }
      if ( v171 < *(_DWORD *)(*(_QWORD *)(Instance + 184) + 176LL) )
      {
        if ( !v170 )
          goto LABEL_334;
        Instance = (int64_t)PartyListViewItem__GetMember(v170, v171, 0);
        if ( !Instance )
          goto LABEL_334;
        v172 = (PartyOrganizationListViewItem_o *)Instance;
        if ( !*(_QWORD *)(Instance + 120) )
          goto LABEL_159;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(SvtId, 0);
        if ( !v165 )
          goto LABEL_334;
        v174 = v165->fields._items;
        v175 = Method_System_Collections_Generic_List_int__Add__;
        ++v165->fields._version;
        if ( !v174 )
          goto LABEL_334;
        v176 = v165->fields._size;
        NotSamePartyKey = (unsigned int)Instance;
        if ( (unsigned int)v176 >= LODWORD(v174->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v165,
            Instance,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v175[4] + 192LL) + 112LL));
          if ( !v169 )
          {
LABEL_159:
            ++v171;
            continue;
          }
        }
        else
        {
          v165->fields._size = v176 + 1;
          v174->m_Items[v176] = Instance;
          if ( !v169 )
            goto LABEL_159;
        }
        v177 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_334;
        v178 = v172->fields.userServantEntity;
        if ( !v178 )
          goto LABEL_334;
        v179 = *(_OWORD *)&v178->fields.id.fields.fakeValue;
        *(_OWORD *)item = *(_OWORD *)&v178->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&item[16] = v179;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v314 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_49658100(&v177->fields.id, &v314, 0) )
        {
          v180 = PartyOrganizationListViewItem__GetEquipList(v172, 0);
          PartyServantListViewItem__SetEquipStatus(this, v180, v181);
          this->fields._OrganizedWave_k__BackingField = v169;
          v169 = 0;
          this->fields._IsClearedWave_k__BackingField = v170->fields._IsClearedWave_k__BackingField;
        }
        goto LABEL_159;
      }
      break;
    }
    v166 = baseDeckItemList;
    ++v168;
    if ( v169 )
      ++v169;
    else
      v169 = 0;
    LODWORD(max_length) = baseDeckItemList->max_length;
    if ( (__int64)v168 < (int)max_length )
      continue;
    break;
  }
  v107 = partyItem;
  if ( !v169 )
    goto LABEL_172;
LABEL_165:
  v183 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v182 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v352.fields.currentCryptoKey = v183;
  *(_QWORD *)&v352.fields.fakeValue = v182;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v352, 0);
  if ( !v165 )
    goto LABEL_334;
  if ( System_Collections_Generic_List_int___Contains(
         v165,
         Instance,
         (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__)
    && !this->fields.isNotSameParty )
  {
    this->fields.isSame = 1;
  }
LABEL_172:
  PartyServantListViewItem__CheckConvertOverwriteImage(this, (const MethodInfo *)NotSamePartyKey);
  PartyServantListViewItem__ModifyLimitCount(this, v184);
  PartyServantListViewItem__ModifyOverwriteStatus(this, v185);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.updateCategoryIdList = 1;
  if ( !Instance )
    goto LABEL_334;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v186 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v186 )
    goto LABEL_334;
  IsChoice = UserServantEntity__IsChoice(v186, 0);
  *(_WORD *)&this->fields.isSwapLock = 0;
  *(_WORD *)&this->fields.isLockMode = 0;
  this->fields.isChoice = IsChoice;
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_334;
  v188 = userServantEntity;
  v189 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_334;
  v190 = *(_OWORD *)&v189->fields.id.fields.fakeValue;
  v191 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)item = *(_OWORD *)&v189->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&item[16] = v190;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v313 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
  v192 = v191 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v313, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  v193 = v192;
  this->fields.isPush = v193;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_334;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0);
  v194 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v194 )
    goto LABEL_334;
  this->fields.isLeave = UserServantEntity__IsLeave(v194, 0);
  *(_QWORD *)&this->fields.bonusKind = 1;
  this->fields.isEventUpVal = 0;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v195);
  v196 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v196 )
    goto LABEL_334;
  Instance = UserServantEntity__getUniqueSvtRestriction_43873640(
               v196,
               this->fields.questRestrictionInfo,
               v107,
               v306,
               this->fields.partyIndex,
               0);
  v197 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v197 )
    goto LABEL_334;
  IsUniqueIndividualityRestriction_43874020 = UserServantEntity__IsUniqueIndividualityRestriction_43874020(
                                                v197,
                                                this->fields.questRestrictionInfo,
                                                v107,
                                                v306,
                                                this->fields.partyIndex,
                                                0);
  v200 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_43874020;
  v201 = v107;
  this->fields.fatigureTime = -1;
  this->fields.isFatigureRecover = 0;
  if ( !v200 || !v200->fields.isFatigure )
    goto LABEL_197;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_334;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
  if ( !*p_questRestrictionInfo )
    goto LABEL_334;
  v202 = (UserEventServantFatigueMaster_o *)Instance;
  eventId = (*p_questRestrictionInfo)->fields.eventId;
  v205 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v204 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v353.fields.currentCryptoKey = v205;
  *(_QWORD *)&v353.fields.fakeValue = v204;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v353, 0);
  if ( !v202 )
    goto LABEL_334;
  v107 = v201;
  if ( UserEventServantFatigueMaster__GetFatigueInfo(
         v202,
         &recoverAt,
         &this->fields.isFatigureRecover,
         eventId,
         Instance,
         0) )
  {
    v206 = recoverAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( v206 > NetworkManager__getTime(0) )
      this->fields.fatigureTime = recoverAt;
  }
LABEL_197:
  AllOutBattleAlreadyUsed = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v199);
  v208 = this->fields.questRestrictionInfo;
  this->fields._IsAllOutBattle_k__BackingField = AllOutBattleAlreadyUsed;
  if ( !v208 || !v208->fields.isDataLostBattle )
  {
    this->fields._IsDataLost_k__BackingField = 0;
    this->fields._TimesToRestart_k__BackingField = -1;
    goto LABEL_221;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v209 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !*p_questRestrictionInfo || !v209 )
    goto LABEL_334;
  Instance = UserEventDataLostMaster__TryGetEntity(
               (UserEventDataLostMaster_o *)v209,
               &entity,
               *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
               (*p_questRestrictionInfo)->fields.dataLostBattleId,
               0);
  if ( (Instance & 1) == 0 )
    goto LABEL_221;
  v210 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_334;
  v211 = entity;
  v213 = *(_QWORD *)&v210->fields.svtId.fields.currentCryptoKey;
  v212 = *(_QWORD *)&v210->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v354.fields.currentCryptoKey = v213;
  *(_QWORD *)&v354.fields.fakeValue = v212;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v354, 0);
  if ( !v211 )
    goto LABEL_334;
  Instance = UserEventDataLostEntity__IsRestart(v211, Instance, 0);
  v214 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_334;
  v215 = Instance;
  v216 = entity;
  v218 = *(_QWORD *)&v214->fields.svtId.fields.currentCryptoKey;
  v217 = *(_QWORD *)&v214->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v355.fields.currentCryptoKey = v218;
  *(_QWORD *)&v355.fields.fakeValue = v217;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v355, 0);
  if ( !v216 )
    goto LABEL_334;
  v107 = v201;
  if ( (v215 & 1) != 0 )
  {
    this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(v216, Instance, 0);
  }
  else if ( UserEventDataLostEntity__IsDataLost(v216, Instance, 0) )
  {
    this->fields._IsDataLost_k__BackingField = 1;
  }
LABEL_221:
  if ( *p_questRestrictionInfo )
    v219 = (*p_questRestrictionInfo)->fields.eventId;
  else
    v219 = -1;
  if ( !this->fields.isBase )
  {
    partyIndex = this->fields.partyIndex;
    if ( (partyIndex & 0x80000000) == 0 )
      goto LABEL_246;
  }
  Instance = (int64_t)PartyListViewItem__GetMember(v107, v306, 0);
  if ( !Instance )
    goto LABEL_334;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(EquipSvtId, 0) >= 1 )
  {
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v227 = *p_userServantEntity;
    if ( *p_userServantEntity )
    {
      v228 = Instance;
      v230 = *(_QWORD *)&v227->fields.svtId.fields.currentCryptoKey;
      v229 = *(_QWORD *)&v227->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v357.fields.currentCryptoKey = v230;
      *(_QWORD *)&v357.fields.fakeValue = v229;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v357, 0);
      if ( *p_userServantEntity )
      {
        v231 = Instance;
        Rarity = UserServantEntity__getRarity(*p_userServantEntity, 0);
        Instance = (int64_t)PartyListViewItem__GetMember(v201, v306, 0);
        if ( Instance )
        {
          v358 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0);
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v358, 0);
          if ( v228 )
          {
            p_skillName = (System_String_o **)&v331;
            p_actMaxRarity = &v330;
            goto LABEL_257;
          }
        }
      }
    }
    goto LABEL_334;
  }
  partyIndex = this->fields.partyIndex;
  if ( (partyIndex & 0x80000000) == 0 )
  {
LABEL_246:
    Instance = (int64_t)PartyListViewItem__GetMember(v107, partyIndex, 0);
    if ( !Instance )
      goto LABEL_334;
    v237 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v237, 0) >= 1 )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v238 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_334;
      v239 = Instance;
      v241 = *(_QWORD *)&v238->fields.svtId.fields.currentCryptoKey;
      v240 = *(_QWORD *)&v238->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v359.fields.currentCryptoKey = v241;
      *(_QWORD *)&v359.fields.fakeValue = v240;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v359, 0);
      if ( !*p_userServantEntity )
        goto LABEL_334;
      v231 = Instance;
      Rarity = UserServantEntity__getRarity(*p_userServantEntity, 0);
      Instance = (int64_t)PartyListViewItem__GetMember(v201, this->fields.partyIndex, 0);
      if ( !Instance )
        goto LABEL_334;
      v360 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0);
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v360, 0);
      if ( !v239 )
        goto LABEL_334;
      p_skillName = &skillName;
      p_actMaxRarity = &actMaxRarity;
LABEL_257:
      this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                       (PartyOrganizationUtility_o *)Instance,
                                       p_skillName,
                                       p_actMaxRarity,
                                       v231,
                                       Rarity,
                                       Instance,
                                       v219,
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
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Instance )
      goto LABEL_334;
    v243 = (EventServantPointRankMaster_o *)Instance;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v219, 0) )
    {
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v244 = *p_userServantEntity;
      if ( *p_userServantEntity )
      {
        v245 = *(_OWORD *)&v244->fields.userId.fields.fakeValue;
        v246 = (UserEventServantPointMaster_o *)Instance;
        *(_OWORD *)item = *(_OWORD *)&v244->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&item[16] = v245;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v312 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v312, 0);
        if ( *p_userServantEntity )
        {
          v247 = Instance;
          Instance = UserServantEntity__getSvtId(*p_userServantEntity, 0);
          if ( v246 )
          {
            p_SvtPoint_k__BackingField = &this->fields._SvtPoint_k__BackingField;
            if ( UserEventServantPointMaster__TryGetEntity(v246, &v327, v247, v219, Instance, 0) )
            {
              Instance = (int64_t)v327;
              if ( !v327 )
                goto LABEL_334;
              *p_SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v327, 0);
            }
            Instance = (int64_t)*p_userServantEntity;
            if ( *p_userServantEntity )
            {
              v249 = *p_SvtPoint_k__BackingField;
              v250 = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0);
              EnableEntity = EventServantPointRankMaster__GetEnableEntity(v243, v219, v249, v250, 0);
              v188 = userServantEntity;
              if ( EnableEntity )
                this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
              goto LABEL_276;
            }
          }
        }
      }
LABEL_334:
      sub_1C93D2C(Instance, NotSamePartyKey);
    }
  }
LABEL_276:
  v252 = (System_Collections_Generic_List_T__o *)sub_1C93D20(System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
  System_Collections_Generic_List_ValueTuple_int__int__Int32Enum_____ctor(
    v252,
    (const MethodInfo_382AE3C *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
  if ( *p_questRestrictionInfo )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_334;
    v253 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance || !v253 )
      goto LABEL_334;
    Instance = (int64_t)EventCampaignMaster__GetFriendshipUpCampaigns(
                          (EventCampaignMaster_o *)v253,
                          *(_QWORD *)(Instance + 136),
                          0);
    if ( Instance )
    {
      v254 = (System_Collections_Generic_List_object__o *)Instance;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_334;
      v255 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventQuestMaster___);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)item,
        v254,
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
      v326 = *(System_Collections_Generic_List_Enumerator_object__o *)item;
      while ( 1 )
      {
        v256 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v326,
                 (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v256 )
          break;
        current = (EventCampaignEntity_o *)v326.fields._current;
        if ( !v326.fields._current )
          sub_1C93D2C(v256, v257);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v326.fields._current[2].monitor;
        if ( monitor && monitor[1].monitor )
        {
          if ( !userServantEntity )
            sub_1C93D2C(v256, v257);
          v261 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
          v260 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v361.fields.currentCryptoKey = v261;
          *(_QWORD *)&v361.fields.fakeValue = v260;
          v262 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v361, 0);
          v256 = System_Linq_Enumerable__Contains_int_(
                   monitor,
                   v262,
                   (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
          if ( !v256 )
            continue;
        }
        if ( !*p_questRestrictionInfo )
          sub_1C93D2C(v256, v257);
        if ( !v255 )
          sub_1C93D2C(v256, v257);
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
          *(_QWORD *)&v340.fields.Item1 = item;
          v340.fields.Item3 = v263;
          System_ValueTuple_int__int__Int32Enum____ctor(
            v340,
            v266,
            calcType,
            Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__,
            v267);
          if ( !v252 )
            sub_1C93D2C(v268, v269);
          v341 = *(System_ValueTuple_int__int__Int32Enum__o *)item;
          v270 = v252->fields._items;
          v271 = Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__;
          ++v252->fields._version;
          if ( !v270 )
            sub_1C93D2C(v268, *(_QWORD *)&v341.fields.Item1);
          v272 = v252->fields._size;
          if ( (unsigned int)v272 >= LODWORD(v270->max_length) )
          {
            System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____AddWithResize(
              v252,
              v341,
              *(const MethodInfo_382B6C8 **)(*(_QWORD *)(v271[4] + 192LL) + 112LL));
          }
          else
          {
            v252->fields._size = v272 + 1;
            *((System_ValueTuple_int__int__Int32Enum__o *)v270->m_Items + v272) = v341;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v326,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
      v188 = userServantEntity;
    }
  }
  if ( !v252 )
    goto LABEL_334;
  v273 = (struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *)System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____ToArray(
                                                                                    v252,
                                                                                    (const MethodInfo_382D28C *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
  this->fields._FriendshipUpValTuple_k__BackingField = v273;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (int32_t)v273,
    v274,
    v275,
    v276,
    v277,
    v278,
    v279);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_334;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_334;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3463274 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_334;
  this->fields.priority = *(_DWORD *)(Instance + 52);
  PartyServantListViewItem__InitAfterSecondSort(this, (const MethodInfo *)NotSamePartyKey);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_334;
  v280 = BalanceConfig_TypeInfo;
  v281 = *(_DWORD *)(Instance + 276);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v280 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v280->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v281;
  if ( !Instance )
    goto LABEL_334;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Instance = 0;
  if ( (this->fields.partyIndex & 0x80000000) == 0 && questRestrictionInfo )
  {
    if ( !v188 )
      goto LABEL_334;
    v284 = *(_QWORD *)&v188->fields.svtId.fields.currentCryptoKey;
    v283 = *(_QWORD *)&v188->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v362.fields.currentCryptoKey = v284;
    *(_QWORD *)&v362.fields.fakeValue = v283;
    v285 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v362, 0);
    Instance = QuestRestrictionInfo__GetOverwriteTempTreasureDeviceLv(questRestrictionInfo, v285, 0);
  }
  iconLabelInfo1 = this->fields.iconLabelInfo1;
  this->fields._TempOverwriteTreasureDeviceLv_k__BackingField = Instance;
  this->fields.amountSortValue = -1;
  if ( !iconLabelInfo1 )
    goto LABEL_334;
  IconLabelInfo__Clear(iconLabelInfo1, 0);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_334;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (int64_t)*p_iconLabelInfo3;
  if ( !*p_iconLabelInfo3 )
    goto LABEL_334;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void PartyServantListViewItem___ctor_35159232(
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
  Il2CppObject *MasterData_object; // x0
  __int64 v68; // x20
  __int64 v69; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v70; // x26
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // x26
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  struct UserServantEntity_o *v79; // x8
  __int128 v80; // q1
  UserServantCollectionMaster_o *v81; // x27
  int64_t v82; // x28
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
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
  System_Collections_Generic_List_object__o *v101; // x21
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *v104; // x4
  int32_t v105; // w5
  int64_t v106; // x6
  System_String_o *v107; // x7
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  char v109; // w28
  int32_t v110; // w27
  PartyOrganizationListViewItem_o *v111; // x29
  struct UserServantEntity_o *v112; // x8
  __int128 v113; // q0
  struct UserServantEntity_o *v114; // x8
  __int128 v115; // q0
  int64_t v116; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v117; // x8
  __int64 v118; // x20
  __int64 v119; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  int v121; // w20
  int v122; // w20
  struct ServantEntity_o *v123; // x8
  __int64 v124; // x20
  __int64 v125; // x21
  int32_t v126; // w29
  int32_t v127; // w20
  System_Int64_array *EquipList; // x0
  const MethodInfo *v129; // x2
  const MethodInfo *v130; // x1
  const MethodInfo *v131; // x1
  bool IsChoice; // w8
  UserServantEntity_o *v133; // x8
  const MethodInfo *v134; // x1
  UserServantEntity_o *v135; // x8
  UserServantEntity_o *v136; // x8
  bool IsUniqueIndividualityRestriction_43874020; // w0
  const MethodInfo *v138; // x1
  struct QuestRestrictionInfo_o *v139; // x8
  UserEventServantFatigueMaster_o *v140; // x22
  int32_t eventId; // w24
  __int64 v142; // x20
  __int64 v143; // x21
  int64_t v144; // x20
  BalanceConfig_c *v145; // x8
  int v146; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+8h] [xbp-108h]
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+10h] [xbp-100h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+18h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v151; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v152; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v153; // [xsp+60h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v154; // [xsp+80h] [xbp-90h]
  int64_t recoverAt; // [xsp+A0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+ACh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v157; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16

  if ( (byte_4D2C55D & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&CommonRestrictionMaster_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C93AD4(&IconLabelInfo_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C55D = 1;
  }
  friendshipRank = 0;
  recoverAt = 0;
  v17 = (IconLabelInfo_o *)sub_1C93D20(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0);
  this->fields.iconLabelInfo1 = v17;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo1, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (IconLabelInfo_o *)sub_1C93D20(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0);
  this->fields.iconLabelInfo2 = v24;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo2, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (IconLabelInfo_o *)sub_1C93D20(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v31, 0);
  this->fields.iconLabelInfo3 = v31;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo3, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_83;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, num, 0);
  this->fields.baseItem = MemberItem;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.baseItem, (int32_t)MemberItem, v41, v42, v43, v44, v45, v46);
  baseItem = this->fields.baseItem;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_83;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1C93A78(
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v55, v56, v57, v58, v59, v60);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  if ( !this->fields.userServantEntity )
    goto LABEL_83;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  v69 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v68 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v70 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v157.fields.currentCryptoKey = v69;
  *(_QWORD *)&v157.fields.fakeValue = v68;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v157, 0);
  if ( !v70 )
    goto LABEL_83;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v70,
             Instance,
             (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, (int32_t)Entity, v73, v74, v75, v76, v77, v78);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v79 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_83;
  v80 = *(_OWORD *)&v79->fields.userId.fields.fakeValue;
  v81 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v154.fields.currentCryptoKey = *(_OWORD *)&v79->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v154.fields.fakeValue = v80;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v153 = v154;
  v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v153, 0);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(this->fields.svtId, 0);
  if ( !v81 )
    goto LABEL_83;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v81, v82, Instance, 0);
  if ( !*p_servantEntity )
    goto LABEL_83;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !Instance )
    goto LABEL_83;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &friendshipRank,
    &this->fields.friendshipMax,
    0);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0);
  this->fields.isBase = 0;
  this->fields.isSame = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipUserServantEntity, 0, v83, v84, v85, v86, v87, v88);
  this->fields.equipServantEntity = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntity, 0, v89, v90, v91, v92, v93, v94);
  this->fields.equipIdList = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, 0, v95, v96, v97, v98, v99, v100);
  v101 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v101,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v101;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntityList,
    (int32_t)v101,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  Instance = (int64_t)this->fields.servantEntity;
  if ( !Instance )
    goto LABEL_83;
  Instance = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0);
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_83;
  v109 = Instance;
  v110 = 0;
  while ( v110 < SLODWORD(memberItemList->max_length) )
  {
    Instance = (int64_t)WarBoardPartyListViewItem__GetMemberItem(partyItem, v110, 0);
    if ( !Instance )
      goto LABEL_83;
    v111 = (PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 120) )
    {
      v112 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_83;
      v113 = *(_OWORD *)&v112->fields.id.fields.fakeValue;
      *(_OWORD *)&v154.fields.currentCryptoKey = *(_OWORD *)&v112->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v154.fields.fakeValue = v113;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v152 = v154;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v152, 0);
      v114 = v111->fields.userServantEntity;
      if ( !v114 )
        goto LABEL_83;
      v115 = *(_OWORD *)&v114->fields.id.fields.fakeValue;
      v116 = Instance;
      *(_OWORD *)&v151.fields.currentCryptoKey = *(_OWORD *)&v114->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v151.fields.fakeValue = v115;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v151, 0);
      if ( v116 == Instance )
      {
        this->fields.isSame = 0;
        this->fields.isBase = num == v110;
        this->fields.partyIndex = v110;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v111, 0);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v129);
        break;
      }
      if ( num != v110 )
      {
        v117 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_83;
        v119 = *(_QWORD *)&v117[2].fields.currentCryptoKey;
        v118 = *(_QWORD *)&v117[2].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v158.fields.currentCryptoKey = v119;
        *(_QWORD *)&v158.fields.fakeValue = v118;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v158, 0);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v111->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_83;
        v121 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(servantEntity[2], 0);
        if ( v121 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else
        {
          if ( (v109 & 1) == 0 )
            goto LABEL_42;
          Instance = (int64_t)v111->fields.servantEntity;
          if ( !Instance )
            goto LABEL_83;
          Instance = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0);
          if ( (Instance & 1) == 0 )
            goto LABEL_42;
          Instance = (int64_t)*p_servantEntity;
          if ( !*p_servantEntity )
            goto LABEL_83;
          Instance = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0);
          if ( !v111->fields.servantEntity )
            goto LABEL_83;
          v122 = Instance;
          Instance = ServantEntity__GetNotSamePartyKey(v111->fields.servantEntity, 0);
          if ( v122 == (_DWORD)Instance )
          {
            this->fields.isNotSameParty = 1;
          }
          else
          {
LABEL_42:
            if ( this->fields.commonRestrictionId == -1 )
            {
              v123 = v111->fields.servantEntity;
              if ( !v123 )
                goto LABEL_83;
              v125 = *(_QWORD *)&v123->fields.baseSvtId.fields.currentCryptoKey;
              v124 = *(_QWORD *)&v123->fields.baseSvtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v159.fields.currentCryptoKey = v125;
              *(_QWORD *)&v159.fields.fakeValue = v124;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v159, 0);
              if ( !*p_servantEntity )
                goto LABEL_83;
              v126 = Instance;
              v127 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028((*p_servantEntity)[2], 0);
              if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
              Instance = CommonRestrictionMaster__GetIncludedRestrictionIds(v126, v127, 0);
              if ( (Instance & 0x80000000) == 0 )
                this->fields.commonRestrictionId = Instance;
            }
          }
        }
      }
    }
    memberItemList = partyItem->fields.memberItemList;
    ++v110;
    if ( !memberItemList )
      goto LABEL_83;
  }
  PartyServantListViewItem__CheckConvertOverwriteImage(this, v39);
  PartyServantListViewItem__ModifyLimitCount(this, v130);
  PartyServantListViewItem__ModifyOverwriteStatus(this, v131);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.updateCategoryIdList = 1;
  if ( !Instance )
    goto LABEL_83;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  this->fields.isLock = Instance & 1;
  if ( !this->fields.userServantEntity )
    goto LABEL_83;
  IsChoice = UserServantEntity__IsChoice(this->fields.userServantEntity, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  *(_DWORD *)&this->fields.isLockMode = 0;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_83;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0);
  v133 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v133 )
    goto LABEL_83;
  this->fields.isLeave = UserServantEntity__IsLeave(v133, 0);
  *(_QWORD *)&this->fields.bonusKind = 1;
  this->fields.isEventUpVal = 0;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v134);
  v135 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v135 )
    goto LABEL_83;
  Instance = UserServantEntity__getUniqueSvtRestriction_43873640(
               v135,
               this->fields.questRestrictionInfo,
               0,
               num,
               this->fields.partyIndex,
               0);
  v136 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v136 )
    goto LABEL_83;
  IsUniqueIndividualityRestriction_43874020 = UserServantEntity__IsUniqueIndividualityRestriction_43874020(
                                                v136,
                                                this->fields.questRestrictionInfo,
                                                0,
                                                num,
                                                this->fields.partyIndex,
                                                0);
  v139 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_43874020;
  this->fields.fatigureTime = -1;
  this->fields.isFatigureRecover = 0;
  if ( !v139 || !v139->fields.isFatigure )
    goto LABEL_72;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
  if ( !*p_questRestrictionInfo )
    goto LABEL_83;
  v140 = (UserEventServantFatigueMaster_o *)Instance;
  eventId = (*p_questRestrictionInfo)->fields.eventId;
  v143 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v142 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v160.fields.currentCryptoKey = v143;
  *(_QWORD *)&v160.fields.fakeValue = v142;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v160, 0);
  if ( !v140 )
LABEL_83:
    sub_1C93D2C(Instance, v39);
  if ( UserEventServantFatigueMaster__GetFatigueInfo(
         v140,
         &recoverAt,
         &this->fields.isFatigureRecover,
         eventId,
         Instance,
         0) )
  {
    v144 = recoverAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( v144 > NetworkManager__getTime(0) )
      this->fields.fatigureTime = recoverAt;
  }
LABEL_72:
  this->fields._IsAllOutBattle_k__BackingField = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v138);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3463274 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_83;
  this->fields.priority = *(_DWORD *)(Instance + 52);
  PartyServantListViewItem__InitAfterSecondSort(this, v39);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_83;
  v145 = BalanceConfig_TypeInfo;
  v146 = *(_DWORD *)(Instance + 276);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v145 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v145->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v146;
  if ( !Instance )
    goto LABEL_83;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.amountSortValue = -1;
  if ( !Instance )
    goto LABEL_83;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_83;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (int64_t)*p_iconLabelInfo3;
  if ( !*p_iconLabelInfo3 )
    goto LABEL_83;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void PartyServantListViewItem__CheckConvertOverwriteImage(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  PartyServantListViewItem_o *v2; // x19
  int32_t partyIndex; // w8
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w0
  struct UserServantEntity_o *v9; // x8
  QuestRestrictionInfo_o *v10; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v2 = this;
  if ( (byte_4D2C560 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2C560 = 1;
  }
  partyIndex = v2->fields.partyIndex;
  v2->fields.isConvertOverwriteImage = 0;
  if ( (partyIndex & 0x80000000) == 0 || v2->fields._OrganizedWave_k__BackingField >= 1 )
  {
    questRestrictionInfo = v2->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      userServantEntity = v2->fields.userServantEntity;
      if ( !userServantEntity )
        goto LABEL_17;
      v7 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
      v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v13.fields.currentCryptoKey = v7;
      *(_QWORD *)&v13.fields.fakeValue = v6;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v13, 0);
      this = (PartyServantListViewItem_o *)QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v8, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v9 = v2->fields.userServantEntity;
        if ( v9 )
        {
          v10 = v2->fields.questRestrictionInfo;
          v12 = *(_QWORD *)&v9->fields.svtId.fields.currentCryptoKey;
          v11 = *(_QWORD *)&v9->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v14.fields.currentCryptoKey = v12;
          *(_QWORD *)&v14.fields.fakeValue = v11;
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
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
        sub_1C93D2C(this, method);
      }
    }
  }
}


bool PartyServantListViewItem__ChkQuestRestriction(PartyServantListViewItem_o *this, const MethodInfo *method)
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
  bool v12; // w23
  QuestRestrictionInfo_o *v13; // x20
  __int64 v14; // x21
  __int64 v15; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v16; // x8
  int32_t v17; // w21
  int32_t v18; // w22
  QuestRestrictionInfo_o *v19; // x20
  __int64 v20; // x21
  __int64 v21; // x22
  struct PartyOrganizationListViewItem_o *v22; // x8
  struct PartyOrganizationListViewItem_o *v23; // x8
  struct UserServantEntity_o *v24; // x8
  QuestRestrictionInfo_o *v25; // x20
  __int64 v26; // x21
  __int64 v27; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v28; // x8
  int32_t v29; // w21
  int32_t v30; // w22
  struct PartyOrganizationListViewItem_o *v31; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  v2 = this;
  if ( (byte_4D2C55E & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2C55E = 1;
  }
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_38;
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v33.fields.currentCryptoKey = v6;
  *(_QWORD *)&v33.fields.fakeValue = v5;
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v33, 0);
  v7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
  if ( !v7 )
    goto LABEL_38;
  v8 = (int)this;
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v7[6], 0);
  if ( !v2->fields.userServantEntity )
    goto LABEL_38;
  v9 = (int)this;
  this = (PartyServantListViewItem_o *)UserServantEntity__getDispLimitCount(v2->fields.userServantEntity, 0, 0);
  v10 = v2->fields.userServantEntity;
  if ( !v10 )
    goto LABEL_38;
  baseItem = v2->fields.baseItem;
  if ( !baseItem )
    goto LABEL_38;
  v12 = 1;
  if ( !QuestRestrictionInfo__IsRestriction_44117212(
          questRestrictionInfo,
          &v2->fields.isQuestRestrictionWhole,
          v8,
          v9,
          (int32_t)this,
          v2->fields.rarityId,
          v10->fields.lv,
          baseItem->fields._InitPos_k__BackingField,
          1,
          0) )
  {
    this = (PartyServantListViewItem_o *)v2->fields.questRestrictionInfo;
    if ( !this )
      goto LABEL_38;
    if ( QuestRestrictionInfo__IsSupportOnly((QuestRestrictionInfo_o *)this, 0) )
      return 1;
    v13 = v2->fields.questRestrictionInfo;
    v14 = *(_QWORD *)&v2->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&v2->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v34.fields.currentCryptoKey = v14;
    *(_QWORD *)&v34.fields.fakeValue = v15;
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v34, 0);
    v16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
    if ( !v16 )
      goto LABEL_38;
    v17 = (int)this;
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v16[6], 0);
    if ( !v2->fields.userServantEntity )
      goto LABEL_38;
    v18 = (int)this;
    this = (PartyServantListViewItem_o *)UserServantEntity__getDispLimitCount(v2->fields.userServantEntity, 0, 0);
    if ( !v13 )
      goto LABEL_38;
    if ( QuestRestrictionInfo__GetFixedMyServantSingleRestriction(
           v13,
           v17,
           v18,
           (int32_t)this,
           v2->fields.memberIndex,
           0) )
    {
      return 1;
    }
    v19 = v2->fields.questRestrictionInfo;
    v20 = *(_QWORD *)&v2->fields.svtId.fields.currentCryptoKey;
    v21 = *(_QWORD *)&v2->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v35.fields.currentCryptoKey = v20;
    *(_QWORD *)&v35.fields.fakeValue = v21;
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v35, 0);
    v22 = v2->fields.baseItem;
    if ( !v22 || !v19 )
      goto LABEL_38;
    this = (PartyServantListViewItem_o *)QuestRestrictionInfo__IsServantNumAndFixedServantPositionRestriction(
                                           v19,
                                           (int32_t)this,
                                           v22->fields._InitPos_k__BackingField,
                                           0);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    v23 = v2->fields.baseItem;
    if ( v23 )
    {
      if ( !v23->fields.isMyServantOrNpcRestriction )
        return 0;
      v24 = v2->fields.userServantEntity;
      if ( v24 )
      {
        v25 = v2->fields.questRestrictionInfo;
        v27 = *(_QWORD *)&v24->fields.svtId.fields.currentCryptoKey;
        v26 = *(_QWORD *)&v24->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v36.fields.currentCryptoKey = v27;
        *(_QWORD *)&v36.fields.fakeValue = v26;
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v36, 0);
        v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
        if ( v28 )
        {
          v29 = (int)this;
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                 v28[6],
                                                 0);
          if ( v2->fields.userServantEntity )
          {
            v30 = (int)this;
            this = (PartyServantListViewItem_o *)UserServantEntity__getDispLimitCount(
                                                   v2->fields.userServantEntity,
                                                   0,
                                                   0);
            v31 = v2->fields.baseItem;
            if ( v31 )
            {
              if ( v25 )
                return QuestRestrictionInfo__IsRestrictionServantIndividuality(
                         v25,
                         v29,
                         v30,
                         (int32_t)this,
                         v31->fields._InitPos_k__BackingField,
                         0,
                         0);
            }
          }
        }
      }
    }
LABEL_38:
    sub_1C93D2C(this, method);
  }
  return v12;
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
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v5; // x21
  __int64 v6; // x22
  int32_t v7; // w0
  const MethodInfo *v8; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v2 = this;
  if ( (byte_4D2C55F & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2C55F = 1;
  }
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    userServantEntity = v2->fields.userServantEntity;
    if ( !userServantEntity )
      sub_1C93D2C(this, method);
    v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v9, 0);
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
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x22
  __int64 v9; // x23
  UserEventAlloutBattleMaster_o *v10; // x21
  struct QuestRestrictionInfo_o *v11; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4D2C567 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C567 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = questRestrictionInfo->fields.allOutBattleGroupNo;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (UserEventAlloutBattleMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v9;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v13, 0);
  v11 = this->fields.questRestrictionInfo;
  if ( !v11 || !v10 )
LABEL_13:
    sub_1C93D2C(Instance, v6);
  return UserEventAlloutBattleMaster__IsAlreadyUsedServant(
           v10,
           (int32_t)Instance,
           v11->fields.eventId,
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

  if ( (byte_4D2C566 & 1) == 0 )
  {
    sub_1C93AD4(&CommonRestrictionMaster_TypeInfo);
    byte_4D2C566 = 1;
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
  struct ServantEntity_o *servantEntity; // x10
  struct UserServantEntity_o *userServantEntity; // x9
  __int128 v7; // q0
  struct UserServantEntity_o *v8; // x8
  __int128 v9; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+40h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+60h] [xbp-40h]

  v2 = this;
  if ( (byte_4D2C569 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2C569 = 1;
  }
  if ( !v2->fields.tutorialMode )
  {
    servantEntity = v2->fields.servantEntity;
    v2->fields.sortValue1B = v2->fields.priority;
    if ( servantEntity )
    {
      userServantEntity = v2->fields.userServantEntity;
      if ( userServantEntity )
      {
        v2->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16)
                              | ((unsigned __int64)(unsigned int)v2->fields.rarityId << 48)
                              | userServantEntity->fields.lv;
        v7 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v13.fields.fakeValue = v7;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v12 = v13;
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                               &v12,
                                               0);
        v8 = v2->fields.userServantEntity;
        v2->fields.sortValue2B = (int64_t)this;
        if ( v8 )
        {
          v9 = *(_OWORD *)&v8->fields.id.fields.fakeValue;
          *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&v8->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v11.fields.fakeValue = v9;
          v2->fields.sortValueLast = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v11, 0);
          return;
        }
      }
    }
LABEL_15:
    sub_1C93D2C(this, method);
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
  v2->fields.sortValue2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v10, 0);
  v2->fields.sortValue2B = 0;
}


bool PartyServantListViewItem__IsMatchFilter(
        PartyServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
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
  UserServantEntity_o *v20; // x0
  int32_t dispLimitCount; // w2
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

  if ( (byte_4D2C564 & 1) == 0 )
  {
    sub_1C93AD4(&FilterKindList_TypeInfo);
    sub_1C93AD4(&ListViewSort_FilterKind___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C93AD4(&ServantEventBonusFilterController_TypeInfo);
    byte_4D2C564 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_65;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_65;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            ClassGroupFilterKindList,
                                            (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0) )
    goto LABEL_33;
  v20 = this->fields.userServantEntity;
  if ( v20 && this->fields.updateCategoryIdList )
  {
    dispLimitCount = this->fields.dispLimitCount;
    this->fields.updateCategoryIdList = 0;
    SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v20, -1, dispLimitCount, 0);
    this->fields.skillCategoryIdList = SkillCategoryIdList;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.skillCategoryIdList,
      (int32_t)SkillCategoryIdList,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userServantEntity;
    if ( !ClassGroupFilterKindList )
      goto LABEL_65;
    TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     this->fields.dispLimitCount,
                                     0);
    this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.tdCategoryIdList,
      (int32_t)TreasureDeviceCategoryIdList,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_1C93B7C(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_65:
    sub_1C93D2C(ClassGroupFilterKindList, sort);
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_66;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                   0);
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_1C93B7C(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  if ( !ClassGroupFilterKindList->fields._size )
LABEL_66:
    sub_1C93D34(ClassGroupFilterKindList);
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 51;
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
LABEL_33:
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userServantEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userServantEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_1C93B7C(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_66;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 39;
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
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v17->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_1C93D2C(0, method);
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
  UserServantEntity_o **p_userServantEntity; // x20
  __int64 v10; // x1
  bool IsLeave; // w0
  int32_t dispLimitCount; // w20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_userServantEntity )
    sub_1C93D2C(0, v10);
  IsLeave = UserServantEntity__IsLeave(*p_userServantEntity, 0);
  dispLimitCount = this->fields.dispLimitCount;
  this->fields.isLeave = IsLeave;
  *(_QWORD *)&this->fields.bonusKind = 1;
  this->fields.isEventUpVal = 0;
  PartyServantListViewItem__ModifyLimitCount(this, v13);
  PartyServantListViewItem__ModifyOverwriteStatus(this, v14);
  if ( dispLimitCount != this->fields.dispLimitCount )
    this->fields.updateCategoryIdList = 1;
  this->fields.isQuestRestriction = PartyServantListViewItem__ChkQuestRestriction(this, v15);
}


void PartyServantListViewItem__ModifyLimitCount(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  struct UserServantEntity_o *v7; // x8
  int32_t v8; // w20
  int32_t v9; // w0
  int32_t dispLimitCount; // w22
  int32_t v11; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4D2C561 & 1) == 0 )
  {
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2C561 = 1;
  }
  if ( this->fields.isConvertOverwriteImage )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_15;
    questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCount_44133520(
                                                       questRestrictionInfo,
                                                       this->fields.userServantEntity,
                                                       0);
  }
  else
  {
    questRestrictionInfo = (QuestRestrictionInfo_o *)this->fields.userServantEntity;
    if ( !questRestrictionInfo )
      goto LABEL_15;
    questRestrictionInfo = (QuestRestrictionInfo_o *)UserServantEntity__getDispLimitCount(
                                                       (UserServantEntity_o *)questRestrictionInfo,
                                                       0,
                                                       0);
  }
  userServantEntity = this->fields.userServantEntity;
  this->fields.dispLimitCount = (int)questRestrictionInfo;
  if ( !userServantEntity )
    goto LABEL_15;
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v6;
  *(_QWORD *)&v12.fields.fakeValue = v5;
  questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                     v12,
                                                     0);
  v7 = this->fields.userServantEntity;
  if ( !v7 )
LABEL_15:
    sub_1C93D2C(questRestrictionInfo, method);
  v8 = (int)questRestrictionInfo;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v7->fields.limitCount, 0);
  dispLimitCount = this->fields.dispLimitCount;
  v11 = v9;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount__GetDispLimitCountSealAfter(
    v8,
    v11,
    dispLimitCount,
    &this->fields.dispLimitCount,
    &this->fields.selectedLimitCount,
    0);
}


void PartyServantListViewItem__ModifyLockItem(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1C93D2C(0, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0);
  this->fields.isSwapLock = 0;
}


void PartyServantListViewItem__ModifyOverwriteStatus(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  int64_t userServantEntity; // x0
  const MethodInfo_39A11A8 *v4; // x3
  _BOOL4 IsGrandSameServant_k__BackingField; // w8
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct UserServantEntity_o *v7; // x8
  __int128 v8; // q0
  __int128 v9; // q1
  const MethodInfo_399FF98 *v10; // x3
  int v11; // w23
  __int64 v12; // x24
  struct UserServantEntity_o *v13; // x8
  __int128 v14; // q0
  const MethodInfo_39A11A8 *v15; // x3
  struct PartyOrganizationListViewItem_o *v16; // x8
  struct UserServantEntity_o *v17; // x8
  __int128 v18; // q0
  __int128 v19; // q1
  const MethodInfo_399FF98 *v20; // x3
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
  if ( (byte_4D2C562 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_long___ctor__);
    sub_1C93AD4(&Method_System_Nullable_ObscuredLong___ctor__);
    sub_1C93AD4(&Method_System_Nullable_ObscuredLong__get_HasValue__);
    sub_1C93AD4(&Method_System_Nullable_long__get_HasValue__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&UserServantGrandInfo_TypeInfo);
    byte_4D2C562 = 1;
  }
  userServantEntity = (int64_t)this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_48;
  userServantEntity = (int64_t)UserServantEntity__GetOverwriteStatus_43885828(
                                 (UserServantEntity_o *)userServantEntity,
                                 this->fields.selectedLimitCount,
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
      v52.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v42, 0);
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
  userServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v41, 0);
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
      sub_1C93D2C(userServantEntity, method);
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
      v54.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v38, 0);
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
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v35, 0);
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

  if ( (byte_4D2C563 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C93AD4(&long___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2C563 = 1;
  }
  p_equipUserServantEntity = (Il2CppObject **)&this->fields.equipUserServantEntity;
  entity = 0;
  this->fields.equipUserServantEntity = 0;
  sub_1C93A78(
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntity, 0, v12, v13, v14, v15, v16, v17);
  this->fields.equipIdList = 0;
  p_equipIdList = &this->fields.equipIdList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_equipIdList, 0, v19, v20, v21, v22, v23, v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v26 = (Il2CppObject **)(p_equipIdList + 24);
  p_equipIdList[24] = (struct System_Int64_array *)v25;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(p_equipIdList + 24), (int32_t)v25, v27, v28, v29, v30, v31, v32);
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
    v44 = sub_1C93C10(v36, long___TypeInfo);
    if ( !v44 )
    {
      sub_1C940C8(v43);
LABEL_9:
      v45 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v45 = BalanceConfig_TypeInfo;
      }
      v44 = sub_1C93B7C(long___TypeInfo, (unsigned int)v45->static_fields->SvtEquipMax);
    }
  }
  else
  {
    v44 = 0;
  }
  *p_equipIdList = (struct System_Int64_array *)v44;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_equipIdList, v44, v37, v38, v39, v40, v41, v42);
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
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
                                      (const MethodInfo_3465A70 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
      Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v79, 0);
      if ( (int)Master_object >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantMaster___);
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
        Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v80, 0);
        if ( !v51 )
          goto LABEL_56;
        v54 = DataMasterBase_object__object__int___GetEntity(
                v51,
                (int32_t)Master_object,
                (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        p_equipServantEntity->klass = (GrandQuestFolderBoardItem_c *)v54;
        sub_1C93A78(p_equipServantEntity, (int32_t)v54, v55, v56, v57, v58, v59, v60);
      }
    }
  }
  if ( !*p_equipIdList )
    goto LABEL_56;
  if ( SLODWORD((*p_equipIdList)->max_length) < 2 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
  v61 = *p_equipIdList;
  if ( !*p_equipIdList )
LABEL_56:
    sub_1C93D2C(Master_object, v34);
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
                                          (const MethodInfo_3465A70 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
          Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v81, 0);
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
                *(const MethodInfo_387999C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
            }
            else
            {
              v77 = &v74->_1.image + monitor_low;
              LODWORD(Master_object[1].monitor) = monitor_low + 1;
              v77[4] = v34;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v77 + 4), (int32_t)v34, v68, v69, v70, v71, v72, v73);
            }
          }
        }
      }
      LODWORD(max_length) = v61->max_length;
      if ( (__int64)++v64 >= (int)max_length )
        return;
    }
LABEL_57:
    sub_1C93D34(Master_object);
  }
}


bool PartyServantListViewItem__SetSortValue(
        PartyServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
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
  int v62; // w21
  int32_t lv; // w7
  int32_t exceedCount; // w3
  int32_t v65; // w1
  int64_t rarityId; // x2
  struct UserServantEntity_o *v67; // x8
  int64_t v68; // x8
  PartyServantListViewItem_o *iconLabelInfo1; // x19
  struct ListViewManager_o *v70; // x8
  __int64 v71; // x11
  struct ListViewManager_o *v72; // x20
  __int64 v73; // x20
  __int64 v74; // x21
  int32_t v75; // w0
  PartyServantListViewItem_o *v76; // x20
  int64_t v77; // x9
  struct EventUpValSetupInfo_o *setupInfo; // x8
  int32_t bonusKind; // w8
  EventUpValSetupInfo_o *v80; // x21
  UserServantEntity_o *v81; // x22
  int32_t ServantFilterEventId; // w23
  struct ServantEntity_o *servantEntity; // x3
  UserServantEntity_o *v84; // x0
  EventUpValSetupInfo_o *v85; // x1
  int32_t v86; // w2
  int32_t bonusKind2; // w8
  int32_t v88; // w21
  int32_t v89; // w8
  int32_t bonusKindId; // w9
  int32_t v91; // w8
  int32_t v92; // w8
  UserServantEntity_o *userServantEntity; // x22
  EventUpValSetupInfo_o *v94; // x23
  bool EventUpVal; // w0
  int32_t bonusKind2Id; // w8
  Il2CppObject *Master_object; // x0
  __int64 v98; // x22
  __int64 v99; // x23
  EventCampaignMaster_o *v100; // x21
  bool IsEnableServant; // w0
  UserServantEntity_o *v102; // x21
  struct UserServantEntity_o *equipUserServantEntity; // x8
  int32_t atk; // w4
  int32_t v105; // w1
  int32_t v106; // w21
  int monitor_high; // w8
  int32_t v108; // w2
  int32_t v109; // w1
  UserServantEntity_o *v110; // x21
  struct UserServantEntity_o *v111; // x8
  int monitor; // w8
  int32_t v113; // w20
  Il2CppObject *v114; // x0
  __int64 v115; // x22
  __int64 v116; // x23
  EventCampaignMaster_o *v117; // x21
  __int64 v118; // x21
  __int64 v119; // x22
  struct ServantEntity_o *v120; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v122; // x8
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v124; // x0
  intptr_t *v125; // x8
  System_Func_T__bool__o *v126; // x22
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16

  v4 = this;
  if ( (byte_4D2C565 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C93AD4(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Method_PartyServantListViewItem__SetSortValue_b__141_0__);
    sub_1C93AD4(&Method_PartyServantListViewItem__SetSortValue_b__141_1__);
    sub_1C93AD4(&PartyServantListViewItem_TypeInfo);
    sub_1C93AD4(&PartyServantListViewManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    this = (PartyServantListViewItem_o *)sub_1C93AD4(&UserServantGrandInfo_TypeInfo);
    byte_4D2C565 = 1;
  }
  memset(&v139, 0, sizeof(v139));
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1;
  if ( !sort )
    goto LABEL_299;
  if ( sort->fields.isBonusKind && !v4->fields.isBase )
  {
    baseItem = v4->fields.baseItem;
    if ( !baseItem || !baseItem->fields.isRestrictionGrandServant )
    {
      manager = sort->fields.manager;
      if ( manager
        && (naturalAligment = PartyServantListViewManager_TypeInfo->_2.naturalAligment,
            manager->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (PartyServantListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] == PartyServantListViewManager_TypeInfo )
          v23 = sort->fields.manager;
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
LABEL_182:
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
                  goto LABEL_297;
              }
              v4->fields.bonusKind = 0;
              v4->fields.bonusKindId = bonusKind2Id;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (PartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventGroupMaster___);
              if ( !this )
                goto LABEL_299;
              EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                    (EventGroupMaster_o *)this,
                                    v4->fields.bonusKindId,
                                    0);
              this = (PartyServantListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                     (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                     0);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_297;
              if ( !EntitiesByGroupId )
                goto LABEL_299;
              if ( EntitiesByGroupId->fields._size < 2 )
                goto LABEL_297;
              v124 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EventGroupEntity__bool__TypeInfo);
              v125 = &Method_PartyServantListViewItem__SetSortValue_b__141_1__;
              break;
            case 3:
              v4->fields.bonusKind = 3;
              v4->fields.bonusKindId = sort->fields.bonusKind2Id;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventCampaignMaster___);
              v99 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
              v98 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
              v100 = (EventCampaignMaster_o *)Master_object;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v143.fields.currentCryptoKey = v99;
              *(_QWORD *)&v143.fields.fakeValue = v98;
              this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                     v143,
                                                     0);
              if ( !v100 )
                goto LABEL_299;
              IsEnableServant = EventCampaignMaster__IsEnableServant(v100, (int32_t)this, v4->fields.bonusKindId, 0);
              v4->fields.isEventUpVal = IsEnableServant;
              if ( !IsEnableServant )
                goto LABEL_298;
              goto LABEL_6;
            case 4:
            case 5:
              if ( v4->fields.bonusKind == bonusKind2 )
              {
                v88 = sort->fields.bonusKind2Id;
                if ( v4->fields.bonusKindId == v88 )
                  goto LABEL_297;
              }
              else
              {
                v88 = sort->fields.bonusKind2Id;
              }
              v4->fields.bonusKind = bonusKind2;
              v4->fields.bonusKindId = v88;
              userServantEntity = v4->fields.userServantEntity;
              v94 = v4->fields.setupInfo;
              this = (PartyServantListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( !this || !userServantEntity )
                goto LABEL_299;
              servantEntity = this->fields.servantEntity;
              v84 = userServantEntity;
              v85 = v94;
              v86 = v88;
LABEL_197:
              EventUpVal = UserServantEntity__getEventUpVal(v84, v85, v86, (int64_t)servantEntity, 0);
              goto LABEL_278;
            case 7:
              if ( v4->fields.bonusKind == 7 )
              {
                bonusKindId = v4->fields.bonusKindId;
                v91 = sort->fields.bonusKind2Id;
                goto LABEL_202;
              }
              v91 = sort->fields.bonusKind2Id;
              goto LABEL_275;
            default:
              goto LABEL_6;
          }
LABEL_296:
          v126 = (System_Func_T__bool__o *)v124;
          System_Func_object__bool____ctor(v124, (Il2CppObject *)v4, *v125, 0);
          v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                      (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                      v126,
                                      (const MethodInfo_318DB78 *)Method_BasicHelper_Any_EventGroupEntity___);
          goto LABEL_297;
        }
      }
      else
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (PartyServantListViewItem_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_182;
        if ( !v23 )
          goto LABEL_299;
        if ( !BYTE5(v23[1].fields.dropList) )
          goto LABEL_182;
      }
      bonusKind = sort->fields.bonusKind;
      switch ( bonusKind )
      {
        case 0:
          if ( v4->fields.bonusKind )
          {
            v89 = sort->fields.bonusKindId;
          }
          else
          {
            v89 = sort->fields.bonusKindId;
            if ( v4->fields.bonusKindId == v89 )
              goto LABEL_297;
          }
          v4->fields.bonusKind = 0;
          v4->fields.bonusKindId = v89;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (PartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventGroupMaster___);
          if ( !this )
            goto LABEL_299;
          EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                (EventGroupMaster_o *)this,
                                v4->fields.bonusKindId,
                                0);
          this = (PartyServantListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                 0);
          if ( ((unsigned __int8)this & 1) != 0 )
            goto LABEL_297;
          if ( !EntitiesByGroupId )
            goto LABEL_299;
          if ( EntitiesByGroupId->fields._size < 2 )
            goto LABEL_297;
          v124 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EventGroupEntity__bool__TypeInfo);
          v125 = &Method_PartyServantListViewItem__SetSortValue_b__141_0__;
          goto LABEL_296;
        case 3:
          if ( v4->fields.bonusKind == 3 )
          {
            v92 = sort->fields.bonusKindId;
            if ( v4->fields.bonusKindId == v92 )
              goto LABEL_297;
          }
          else
          {
            v92 = sort->fields.bonusKindId;
          }
          v4->fields.bonusKind = 3;
          v4->fields.bonusKindId = v92;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v114 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventCampaignMaster___);
          v116 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
          v115 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
          v117 = (EventCampaignMaster_o *)v114;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v144.fields.currentCryptoKey = v116;
          *(_QWORD *)&v144.fields.fakeValue = v115;
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                 v144,
                                                 0);
          if ( !v117 )
            goto LABEL_299;
          EventUpVal = EventCampaignMaster__IsEnableServant(v117, (int32_t)this, v4->fields.bonusKindId, 0);
LABEL_278:
          v4->fields.isEventUpVal = EventUpVal;
          if ( !EventUpVal )
            goto LABEL_298;
          break;
        case 4:
        case 5:
          if ( v4->fields.bonusKind == bonusKind )
            goto LABEL_297;
          v4->fields.bonusKind = bonusKind;
          v80 = v4->fields.setupInfo;
          v4->fields.bonusKindId = sort->fields.bonusKindId;
          if ( !v80 )
            goto LABEL_299;
          v81 = v4->fields.userServantEntity;
          ServantFilterEventId = EventUpValSetupInfo__get_ServantFilterEventId(v80, 0);
          this = (PartyServantListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !this || !v81 )
            goto LABEL_299;
          servantEntity = this->fields.servantEntity;
          v84 = v81;
          v85 = v80;
          v86 = ServantFilterEventId;
          goto LABEL_197;
        case 7:
          if ( v4->fields.bonusKind == 7 )
          {
            bonusKindId = v4->fields.bonusKindId;
            v91 = sort->fields.bonusKindId;
LABEL_202:
            if ( bonusKindId == v91 )
            {
LABEL_297:
              if ( !v4->fields.isEventUpVal )
                goto LABEL_298;
              break;
            }
          }
          else
          {
            v91 = sort->fields.bonusKindId;
          }
LABEL_275:
          v4->fields.bonusKind = 7;
          v4->fields.bonusKindId = v91;
          this = (PartyServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_299;
          this = (PartyServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantFilterMaster___);
          if ( !this )
            goto LABEL_299;
          EventUpVal = ServantFilterMaster__IsEnableServant(
                         (ServantFilterMaster_o *)this,
                         v4->fields.svtId,
                         v4->fields.bonusKindId,
                         0);
          goto LABEL_278;
        default:
          break;
      }
    }
  }
LABEL_6:
  if ( !v4->fields.isBase )
  {
    v10 = v4->fields.baseItem;
    if ( !v10 || !v10->fields.isRestrictionGrandServant )
    {
      this = (PartyServantListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_299;
      if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0) )
      {
LABEL_298:
        LOBYTE(this) = 0;
        return (char)this;
      }
      this = (PartyServantListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_299;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0)
        || (((__int64 (__fastcall *)(PartyServantListViewItem_o *, ListViewSort_o *, const MethodInfo *))v4->klass->vtable._5_IsMatchFilter.methodPtr)(
              v4,
              sort,
              v4->klass->vtable._5_IsMatchFilter.method)
          & 1) == 0 )
      {
        goto LABEL_298;
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
  static_fields = *(struct PartyServantListViewItem_StaticFields **)&this->fields.actualRarity;
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  PRIORITY_NORMAL = static_fields->PRIORITY_NORMAL;
  v4->fields.sortValue0 = static_fields->PRIORITY_NORMAL;
  v4->fields.sortValue0B = PRIORITY_NORMAL;
  if ( questRestrictionInfo )
  {
    if ( questRestrictionInfo->fields.isFatigure && sort->fields.isSmartSort )
    {
      if ( v4->fields.fatigureTime >= 1 )
      {
LABEL_16:
        if ( !*(_DWORD *)&this->fields.isBase )
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
      if ( isChoice && sort->fields.isChoiceSort )
      {
        if ( !*(_DWORD *)&this->fields.isBase )
        {
          j_il2cpp_runtime_class_init_0(this);
          this = (PartyServantListViewItem_o *)PartyServantListViewItem_TypeInfo;
        }
        v4->fields.sortValue0B = *(_QWORD *)(*(_QWORD *)&this->fields.actualRarity + 8LL);
      }
      this = (PartyServantListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_299;
      if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)this, 0) )
        goto LABEL_59;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( !TutorialFlag__Get_41140656(126, 0) )
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
    if ( questRestrictionInfo->fields.isAllOutBattle && sort->fields.isSmartSort )
    {
      if ( v4->fields._IsAllOutBattle_k__BackingField )
        goto LABEL_16;
      goto LABEL_30;
    }
  }
  v13 = v4->fields.baseItem;
  if ( !v13 )
    goto LABEL_299;
  if ( !v13->fields.isRestrictionActiveGrandBoard )
    goto LABEL_303;
  this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
  if ( !this )
    goto LABEL_299;
  if ( !UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0) || v4->fields.isQuestRestriction )
  {
LABEL_303:
    if ( isChoice && sort->fields.isChoiceSort )
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
  if ( isChoice && sort->fields.isChoiceSort )
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
    goto LABEL_299;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
  equipServantEntity = v4->fields.equipServantEntity;
  this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo3;
  if ( equipServantEntity )
  {
    cost = equipServantEntity->fields.cost;
    if ( !this )
      goto LABEL_299;
  }
  else
  {
    cost = 0;
    if ( !this )
      goto LABEL_299;
  }
  IconLabelInfo__Set_41636824((IconLabelInfo_o *)this, 7, v4->fields.cost, 0, cost, 0, 0, 0, 0, 0);
  this = (PartyServantListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v17 = v4->fields.userServantEntity;
      if ( !v17 )
        goto LABEL_299;
      v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
      *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v138.fields.fakeValue = v18;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v129 = v138;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                             &v129,
                                             0);
      v19 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v19 )
        goto LABEL_299;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_299;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v19->fields.createdAt, 0, 0, 0, 0);
      goto LABEL_249;
    case 2:
      rarityId = v4->fields.rarityId;
      v67 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = rarityId;
      if ( !v67 )
        goto LABEL_299;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_299;
      lv = v67->fields.lv;
      exceedCount = v67->fields.exceedCount;
      v65 = 36;
      actualRarity = v4->fields.actualRarity;
      goto LABEL_255;
    case 3:
      goto LABEL_161;
    case 4:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_299;
      UserServantEntity__getTreasureDeviceInfo_43875668((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0);
      TempOverwriteTreasureDeviceLv_k__BackingField = v4->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
      v59 = tdMaxLv[1];
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v60 = TempOverwriteTreasureDeviceLv_k__BackingField <= 0
          ? tdMaxLv[1]
          : v4->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
      v4->fields.sortValue1 = v60;
      if ( !this )
        goto LABEL_299;
      IconLabelInfo__Set_41636824(
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
        goto LABEL_299;
      iconLabelInfo2 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo2;
      v62 = *(_DWORD *)&this->fields.isEventUpVal;
      this = (PartyServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !iconLabelInfo2 )
        goto LABEL_299;
      lv = v4->fields._TempOverwriteTreasureDeviceLv_k__BackingField;
      exceedCount = (int)this;
      v65 = 2;
      this = iconLabelInfo2;
      LODWORD(rarityId) = v62;
      actualRarity = 0;
      goto LABEL_255;
    case 5:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_299;
      this = (PartyServantListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0);
      v30 = (int)this;
      if ( !v4->fields._IsGrandSameServant_k__BackingField )
        goto LABEL_215;
      v31 = v4->fields.baseItem;
      if ( !v31 )
        goto LABEL_299;
      v32 = v31->fields.userServantEntity;
      if ( !v32 )
        goto LABEL_299;
      v33 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
      *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v138.fields.fakeValue = v33;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v137 = v138;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                             &v137,
                                             0);
      v34 = v4->fields.userServantEntity;
      if ( !v34 )
        goto LABEL_299;
      v35 = *(_OWORD *)&v34->fields.id.fields.fakeValue;
      v36 = this;
      *(_OWORD *)&v136.fields.currentCryptoKey = *(_OWORD *)&v34->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v136.fields.fakeValue = v35;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                             &v136,
                                             0);
      if ( v36 != this )
        goto LABEL_97;
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_299;
      this = (PartyServantListViewItem_o *)UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_97:
        v37 = v4->fields.baseItem;
        if ( !v37 )
          goto LABEL_299;
        v38 = v37->fields.userServantEntity;
        if ( !v38 )
          goto LABEL_299;
        v39 = *(_OWORD *)&v38->fields.id.fields.fakeValue;
        *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)&v38->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v138.fields.fakeValue = v39;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v135 = v138;
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                               &v135,
                                               0);
        v40 = v4->fields.userServantEntity;
        if ( !v40 )
          goto LABEL_299;
        v41 = *(_OWORD *)&v40->fields.id.fields.fakeValue;
        *(_OWORD *)&v134.fields.currentCryptoKey = *(_OWORD *)&v40->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v134.fields.fakeValue = v41;
        if ( this != (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                                     &v134,
                                                     0) )
        {
          this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
          if ( !this )
            goto LABEL_299;
          if ( UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0) )
          {
            this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
            if ( !this )
              goto LABEL_299;
            this = (PartyServantListViewItem_o *)UserServantEntity__get_GrandInfo((UserServantEntity_o *)this, 0);
            if ( !this )
              goto LABEL_299;
            v30 -= UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)this, 0);
          }
        }
      }
      else
      {
        v102 = v4->fields.userServantEntity;
        if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
        this = (PartyServantListViewItem_o *)UserServantGrandInfo__Make(v102, 1, 0);
        if ( !this )
          goto LABEL_299;
        v30 += UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)this, 0);
      }
LABEL_215:
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
            goto LABEL_299;
          v105 = 46;
LABEL_236:
          IconLabelInfo__Set_41636824((IconLabelInfo_o *)this, v105, hp, v30, atk, 0, 0, 0, 0, 0);
LABEL_249:
          this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
          if ( this )
          {
            iconLabelInfo1 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo2;
LABEL_251:
            v113 = *(_DWORD *)&this->fields.isEventUpVal;
LABEL_252:
            this = (PartyServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
            if ( iconLabelInfo1 )
            {
              exceedCount = (int)this;
              v65 = 2;
              actualRarity = 0;
              this = iconLabelInfo1;
              LODWORD(rarityId) = v113;
              goto LABEL_254;
            }
          }
LABEL_299:
          sub_1C93D2C(this, sort);
        }
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = hp;
        if ( !this )
          goto LABEL_299;
        v29 = 3;
        goto LABEL_247;
      }
      this = (PartyServantListViewItem_o *)v4->fields.equipServantEntityList;
      if ( !this )
        goto LABEL_299;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v138,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v106 = 0;
      v139 = *(System_Collections_Generic_List_Enumerator_object__o *)&v138.fields.currentCryptoKey;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v139,
                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
      {
        if ( v139.fields._current )
        {
          monitor_high = HIDWORD(v139.fields._current[16].monitor);
          v106 += monitor_high;
          v4->fields.sortValue1 = monitor_high + v4->fields.hp;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v139,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_299;
      v108 = v4->fields.hp;
      v109 = 46;
      break;
    case 6:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_299;
      this = (PartyServantListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0);
      v30 = (int)this;
      if ( !v4->fields._IsGrandSameServant_k__BackingField )
        goto LABEL_232;
      v47 = v4->fields.baseItem;
      if ( !v47 )
        goto LABEL_299;
      v48 = v47->fields.userServantEntity;
      if ( !v48 )
        goto LABEL_299;
      v49 = *(_OWORD *)&v48->fields.id.fields.fakeValue;
      *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)&v48->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v138.fields.fakeValue = v49;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v133 = v138;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                             &v133,
                                             0);
      v50 = v4->fields.userServantEntity;
      if ( !v50 )
        goto LABEL_299;
      v51 = *(_OWORD *)&v50->fields.id.fields.fakeValue;
      v52 = this;
      *(_OWORD *)&v132.fields.currentCryptoKey = *(_OWORD *)&v50->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v132.fields.fakeValue = v51;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                             &v132,
                                             0);
      if ( v52 != this )
        goto LABEL_124;
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_299;
      this = (PartyServantListViewItem_o *)UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_124:
        v53 = v4->fields.baseItem;
        if ( !v53 )
          goto LABEL_299;
        v54 = v53->fields.userServantEntity;
        if ( !v54 )
          goto LABEL_299;
        v55 = *(_OWORD *)&v54->fields.id.fields.fakeValue;
        *(_OWORD *)&v138.fields.currentCryptoKey = *(_OWORD *)&v54->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v138.fields.fakeValue = v55;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v131 = v138;
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                               &v131,
                                               0);
        v56 = v4->fields.userServantEntity;
        if ( !v56 )
          goto LABEL_299;
        v57 = *(_OWORD *)&v56->fields.id.fields.fakeValue;
        *(_OWORD *)&v130.fields.currentCryptoKey = *(_OWORD *)&v56->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v130.fields.fakeValue = v57;
        if ( this != (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(
                                                     &v130,
                                                     0) )
        {
          this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
          if ( !this )
            goto LABEL_299;
          if ( UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0) )
          {
            this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
            if ( !this )
              goto LABEL_299;
            this = (PartyServantListViewItem_o *)UserServantEntity__get_GrandInfo((UserServantEntity_o *)this, 0);
            if ( !this )
              goto LABEL_299;
            v30 -= UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0);
          }
        }
      }
      else
      {
        v110 = v4->fields.userServantEntity;
        if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
        this = (PartyServantListViewItem_o *)UserServantGrandInfo__Make(v110, 1, 0);
        if ( !this )
          goto LABEL_299;
        v30 += UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0);
      }
LABEL_232:
      if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v4->fields.equipServantEntityList, 0) )
      {
        v111 = v4->fields.equipUserServantEntity;
        hp = v4->fields.atk;
        if ( v111 )
        {
          atk = v111->fields.atk;
          this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = atk + (int)hp;
          if ( !this )
            goto LABEL_299;
          v105 = 47;
          goto LABEL_236;
        }
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = hp;
        if ( !this )
          goto LABEL_299;
        v29 = 5;
LABEL_247:
        friendshipMax = v30;
LABEL_248:
        IconLabelInfo__Set_41636824((IconLabelInfo_o *)this, v29, hp, friendshipMax, 0, 0, 0, 0, 0, 0);
        goto LABEL_249;
      }
      this = (PartyServantListViewItem_o *)v4->fields.equipServantEntityList;
      if ( !this )
        goto LABEL_299;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v138,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v106 = 0;
      v139 = *(System_Collections_Generic_List_Enumerator_object__o *)&v138.fields.currentCryptoKey;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v139,
                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
      {
        if ( v139.fields._current )
        {
          monitor = (int)v139.fields._current[16].monitor;
          v106 += monitor;
          v4->fields.sortValue1 = monitor + v4->fields.atk;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v139,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_299;
      v108 = v4->fields.atk;
      v109 = 47;
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
        goto LABEL_299;
      iconLabelInfo1 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      goto LABEL_251;
    case 0xA:
      v73 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
      v74 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v141.fields.currentCryptoKey = v73;
      *(_QWORD *)&v141.fields.fakeValue = v74;
      v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v141, 0);
      v76 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v77 = v75;
      friendship = v4->fields.friendship;
      v4->fields.sortValue1 = v77;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                             friendship,
                                             0);
      if ( !v76 )
        goto LABEL_299;
      friendshipMax = v4->fields.friendshipMax;
      LODWORD(hp) = (_DWORD)this;
      v29 = 32;
      this = v76;
      goto LABEL_248;
    case 0xE:
      this = (PartyServantListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_271;
      v70 = sort->fields.manager;
      if ( v70
        && (v71 = PartyServantListViewManager_TypeInfo->_2.naturalAligment,
            v70->klass->_2.naturalAligment >= (unsigned int)v71) )
      {
        if ( (PartyServantListViewManager_c *)v70->klass->_2.typeHierarchy[v71 - 1] == PartyServantListViewManager_TypeInfo )
          v72 = sort->fields.manager;
        else
          v72 = 0;
      }
      else
      {
        v72 = 0;
      }
      v119 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v118 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v145.fields.currentCryptoKey = v119;
      *(_QWORD *)&v145.fields.fakeValue = v118;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v145, 0);
      if ( !v72 )
        goto LABEL_299;
      this = (PartyServantListViewItem_o *)PartyServantListViewManager__GetAmountSortValue(
                                             (PartyServantListViewManager_o *)v72,
                                             (int32_t)this,
                                             0);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_271:
      v120 = v4->fields.servantEntity;
      if ( !v120 )
        goto LABEL_299;
      collectionNo = v120->fields.collectionNo;
      v122 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarityId << 32) + ((_QWORD)this << 48))
                            | collectionNo;
      if ( !v122 )
        goto LABEL_299;
      iconLabelInfo1 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v113 = v122->fields.lv;
      this = (PartyServantListViewItem_o *)v122;
      goto LABEL_252;
    case 0xF:
      hp = v4->fields.hpReinforceValue;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_299;
      friendshipMax = v4->fields.nowMaxHpReinforceValue;
      v29 = 44;
      goto LABEL_248;
    case 0x10:
      hp = v4->fields.atkReinforceValue;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_299;
      friendshipMax = v4->fields.nowMaxAtkReinforceValue;
      v29 = 45;
      goto LABEL_248;
    case 0x19:
      v42 = v4->fields.questRestrictionInfo;
      if ( !v42 || !v42->fields.isFatigure )
        goto LABEL_160;
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
          goto LABEL_299;
        v43 = *(int *)&this->fields.isEventUpVal;
        priority = v4->fields.priority;
        v45 = v4->fields.servantEntity;
        v4->fields.sortValue1B = v43;
        v4->fields.sortValue2 = priority;
        if ( !v45 )
          goto LABEL_299;
        v46 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue2B = v43
                               | ((unsigned __int64)(unsigned int)v4->fields.rarityId << 48)
                               | ((__int64)v45->fields.collectionNo << 16);
      }
      else
      {
LABEL_160:
        sort->fields.sortKind = 3;
LABEL_161:
        this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_299;
        v43 = *(int *)&this->fields.isEventUpVal;
        v46 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = v43;
      }
      this = (PartyServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !v46 )
        goto LABEL_299;
      exceedCount = (int)this;
      v65 = 2;
      this = v46;
      LODWORD(rarityId) = v43;
      actualRarity = 0;
LABEL_254:
      lv = 0;
LABEL_255:
      IconLabelInfo__Set_41636824((IconLabelInfo_o *)this, v65, rarityId, exceedCount, 0, 0, 0, lv, actualRarity, 0);
      LOBYTE(this) = 1;
      return (char)this;
    default:
      return (char)this;
  }
  IconLabelInfo__Set_41636824((IconLabelInfo_o *)this, v109, v108, v30, v106, 0, 0, 0, 0, 0);
  goto LABEL_249;
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


bool PartyServantListViewItem___SetSortValue_b__141_0(
        PartyServantListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  EventCampaignMaster_o *v8; // x21
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  UserServantEntity_o *userServantEntity; // x21
  EventUpValSetupInfo_o *setupInfo; // x20
  int32_t eventId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4D2C56B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D2C56B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v7;
  *(_QWORD *)&v15.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v15, 0);
  if ( !entity || !v8 )
    goto LABEL_18;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Instance, entity->fields.eventId, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !Instance )
    goto LABEL_18;
  if ( ServantFilterMaster__IsEnableServant(
         (ServantFilterMaster_o *)Instance,
         this->fields.svtId,
         entity->fields.eventId,
         0) )
  {
    return 1;
  }
  userServantEntity = this->fields.userServantEntity;
  setupInfo = this->fields.setupInfo;
  eventId = entity->fields.eventId;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !userServantEntity )
LABEL_18:
    sub_1C93D2C(Instance, v10);
  return UserServantEntity__getEventUpVal(userServantEntity, setupInfo, eventId, (int64_t)Instance[8].monitor, 0);
}


bool PartyServantListViewItem___SetSortValue_b__141_1(
        PartyServantListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x22
  __int64 v7; // x23
  EventCampaignMaster_o *v8; // x21
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  UserServantEntity_o *userServantEntity; // x21
  EventUpValSetupInfo_o *setupInfo; // x20
  int32_t eventId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4D2C56C & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D2C56C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v7;
  *(_QWORD *)&v15.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v15, 0);
  if ( !entity || !v8 )
    goto LABEL_18;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Instance, entity->fields.eventId, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !Instance )
    goto LABEL_18;
  if ( ServantFilterMaster__IsEnableServant(
         (ServantFilterMaster_o *)Instance,
         this->fields.svtId,
         entity->fields.eventId,
         0) )
  {
    return 1;
  }
  userServantEntity = this->fields.userServantEntity;
  setupInfo = this->fields.setupInfo;
  eventId = entity->fields.eventId;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !userServantEntity )
LABEL_18:
    sub_1C93D2C(Instance, v10);
  return UserServantEntity__getEventUpVal(userServantEntity, setupInfo, eventId, (int64_t)Instance[8].monitor, 0);
}


int32_t PartyServantListViewItem__get_ActualRarity(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.actualRarity;
}


int32_t PartyServantListViewItem__get_Atk(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.atk;
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


ServantEntity_o *PartyServantListViewItem__get_Servant(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.servantEntity;
}


int32_t PartyServantListViewItem__get_SvtId(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4D2C568 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2C568 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v6, 0);
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
    sub_1C93D2C(this, method);
  return baseItem->fields._WaveEnemyClassIds_k__BackingField;
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
  sub_1C93A78(
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