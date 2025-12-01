void PartyServantListViewItem___cctor(const MethodInfo *method)
{
  struct PartyServantListViewItem_StaticFields *static_fields; // x8

  if ( (byte_4CC30D0 & 1) == 0 )
  {
    sub_1C713B0(&PartyServantListViewItem_TypeInfo);
    byte_4CC30D0 = 1;
  }
  static_fields = PartyServantListViewItem_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->PRIORITY_NORMAL = xmmword_CEF020;
  *(_OWORD *)&static_fields->PRIORITY_LOWEST = xmmword_CEF770;
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
  IconLabelInfo_o *v18; // x24
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  IconLabelInfo_o *v25; // x24
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  IconLabelInfo_o *v32; // x24
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int64_t Instance; // x0
  unsigned __int64 NotSamePartyKey; // x1
  struct PartyOrganizationListViewItem_o *Member; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  struct PartyOrganizationListViewItem_o *baseItem; // x8
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
  __int64 v69; // x24
  PartyListViewItem_o *v70; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v71; // x21
  Il2CppObject *v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  UserServantEntity_o *v79; // x8
  __int128 v80; // q1
  UserServantCollectionMaster_o *v81; // x21
  int64_t v82; // x22
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
  System_Collections_Generic_List_object__o *v101; // x22
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *v104; // x4
  int32_t v105; // w5
  int64_t v106; // x6
  System_String_o *v107; // x7
  struct UserServantEntity_o *v108; // x28
  int32_t i; // w21
  BalanceConfig_c *v110; // x0
  int64_t v111; // x22
  UserServantEntity_o *v112; // x8
  __int128 v113; // q0
  __int64 v114; // x8
  __int128 v115; // q0
  int64_t v116; // x26
  __int128 v117; // q0
  const MethodInfo_393A6D8 *v118; // x3
  struct UserServantEntity_o *v119; // x23
  int64_t v120; // x26
  int64_t v121; // x24
  struct UserServantEntity_o *v122; // x8
  __int128 v123; // q0
  __int128 v124; // q1
  const MethodInfo_39394C8 *v125; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v126; // x8
  __int64 v127; // x24
  __int64 v128; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v129; // x8
  int v130; // w24
  Il2CppObject *Master_object; // x0
  __int64 v132; // x24
  __int64 v133; // x26
  UserServantGrandMaster_o *v134; // x22
  UserServantGrandEntity_o *EntityFromSvtId; // x0
  System_Int64_array *EquipUserServantIdList; // x0
  const MethodInfo *v137; // x2
  int v138; // w24
  struct System_Int32_array *items; // x8
  _QWORD *v140; // x9
  __int64 size; // x10
  __int64 v142; // x8
  __int64 v143; // x22
  __int64 v144; // x24
  int32_t v145; // w22
  int32_t v146; // w26
  int32_t IncludedRestrictionIds; // w0
  struct PartyOrganizationListViewItem_o *v148; // x8
  __int64 v149; // x21
  __int64 v150; // x24
  const MethodInfo_393A1FC *v151; // x4
  struct UserServantEntity_o *v152; // x8
  int v153; // w23
  __int64 v154; // x21
  __int64 v155; // x24
  int32_t v156; // w1
  System_Nullable_int__o v157; // x0
  System_Int64_array *EquipList; // x0
  const MethodInfo *v159; // x2
  __int64 v160; // x8
  UserServantGrandMaster_o *v161; // x21
  __int64 v162; // x22
  __int64 v163; // x24
  System_Collections_Generic_List_int__o *v164; // x21
  PartyListViewItem_array *v165; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v167; // x25
  int32_t v168; // w23
  PartyListViewItem_o *v169; // x22
  int32_t v170; // w28
  PartyOrganizationListViewItem_o *v171; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  struct System_Int32_array *v173; // x8
  _QWORD *v174; // x9
  __int64 v175; // x10
  UserServantEntity_o *v176; // x24
  struct UserServantEntity_o *v177; // x8
  __int128 v178; // q0
  System_Int64_array *v179; // x0
  const MethodInfo *v180; // x2
  __int64 v181; // x22
  __int64 v182; // x24
  const MethodInfo *v183; // x1
  const MethodInfo *v184; // x1
  UserServantEntity_o *v185; // x8
  bool IsChoice; // w0
  PartyListViewItem_o *v187; // x23
  UserServantEntity_o *v188; // x8
  __int128 v189; // q0
  __int64 v190; // x21
  bool v191; // zf
  bool v192; // w8
  UserServantEntity_o *v193; // x8
  const MethodInfo *v194; // x1
  UserServantEntity_o *v195; // x8
  UserServantEntity_o *v196; // x8
  bool IsUniqueIndividualityRestriction_43464656; // w0
  const MethodInfo *v198; // x1
  struct QuestRestrictionInfo_o *v199; // x8
  UserEventServantFatigueMaster_o *v200; // x21
  int32_t eventId; // w22
  __int64 v202; // x24
  __int64 v203; // x26
  int64_t v204; // x21
  bool AllOutBattleAlreadyUsed; // w0
  struct QuestRestrictionInfo_o *v206; // x8
  Il2CppObject *v207; // x21
  UserServantEntity_o *v208; // x8
  UserEventDataLostEntity_o *v209; // x21
  __int64 v210; // x22
  __int64 v211; // x24
  UserServantEntity_o *v212; // x8
  char v213; // w21
  UserEventDataLostEntity_o *v214; // x22
  __int64 v215; // x24
  __int64 v216; // x26
  int32_t v217; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr20_16
  UserServantEntity_o *v219; // x8
  int64_t v220; // x22
  __int64 v221; // x24
  __int64 v222; // x26
  int32_t v223; // w26
  int32_t Rarity; // w27
  const MethodInfo *v225; // x7
  System_String_o **p_skillName; // x1
  int32_t *p_actMaxRarity; // x2
  int32_t partyIndex; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v229; // kr30_16
  UserServantEntity_o *v230; // x8
  int64_t v231; // x22
  __int64 v232; // x24
  __int64 v233; // x26
  struct QuestRestrictionInfo_o *v234; // x8
  EventServantPointRankMaster_o *v235; // x22
  UserServantEntity_o *v236; // x8
  __int128 v237; // q0
  UserEventServantPointMaster_o *v238; // x24
  int64_t v239; // x26
  int32_t *p_SvtPoint_k__BackingField; // x23
  int32_t v241; // w24
  int32_t v242; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  System_Collections_Generic_List_T__o *v244; // x21
  Il2CppObject *v245; // x22
  System_Collections_Generic_List_object__o *v246; // x25
  Il2CppObject *v247; // x22
  _BOOL8 v248; // x0
  __int64 v249; // x1
  EventCampaignEntity_o *current; // x25
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x26
  __int64 v252; // x27
  __int64 v253; // x28
  int32_t v254; // w1
  int32_t v255; // w26
  int32_t FriendshipBonusValue; // w0
  int32_t calcType; // w3
  int32_t v258; // w2
  const MethodInfo_3B7B614 *v259; // x5
  __int64 v260; // x0
  __int64 v261; // x1
  System_ValueTuple_int__int__Int32Enum__o v262; // x1 OVERLAPPED
  struct System_Object_array *v263; // x8
  _QWORD *v264; // x9
  __int64 v265; // x10
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v266; // x0
  int32_t v267; // w2
  int32_t v268; // w3
  System_String_o *v269; // x4
  int32_t v270; // w5
  int64_t v271; // x6
  System_String_o *v272; // x7
  BalanceConfig_c *v273; // x8
  int v274; // w21
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 v276; // x8
  UserServantGrandMaster_o *v277; // x21
  __int64 v278; // x22
  __int64 v279; // x24
  System_Collections_Generic_List_int__o *v280; // [xsp+10h] [xbp-320h]
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+20h] [xbp-310h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+30h] [xbp-300h]
  bool IsNotSameParty; // [xsp+3Ch] [xbp-2F4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // [xsp+50h] [xbp-2E0h]
  int64_t v286; // [xsp+68h] [xbp-2C8h]
  int32_t v287; // [xsp+74h] [xbp-2BCh]
  struct PartyOrganizationListViewItem_o **p_baseItem; // [xsp+78h] [xbp-2B8h]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+90h] [xbp-2A0h]
  UserServantEntity_o **p_userServantEntity; // [xsp+98h] [xbp-298h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v292; // [xsp+A0h] [xbp-290h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v293; // [xsp+C0h] [xbp-270h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v294; // [xsp+E0h] [xbp-250h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v295; // [xsp+100h] [xbp-230h] BYREF
  __int128 v296; // [xsp+120h] [xbp-210h]
  __int128 v297; // [xsp+130h] [xbp-200h]
  _BYTE item[40]; // [xsp+140h] [xbp-1F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v299; // [xsp+170h] [xbp-1C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v300; // [xsp+190h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v301; // [xsp+1B0h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v302; // [xsp+1D0h] [xbp-160h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v303; // [xsp+1F0h] [xbp-140h] BYREF
  UserEventServantPointEntity_o *v304; // [xsp+210h] [xbp-120h] BYREF
  int32_t actMaxRarity; // [xsp+21Ch] [xbp-114h] BYREF
  System_String_o *skillName; // [xsp+220h] [xbp-110h] BYREF
  int v307; // [xsp+22Ch] [xbp-104h] BYREF
  __int64 v308; // [xsp+230h] [xbp-100h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+238h] [xbp-F8h] BYREF
  int64_t recoverAt; // [xsp+240h] [xbp-F0h] BYREF
  int32_t friendshipRank; // [xsp+24Ch] [xbp-E4h] BYREF
  _OWORD v312[2]; // [xsp+250h] [xbp-E0h] BYREF
  __int128 v313; // [xsp+270h] [xbp-C0h]
  _OWORD v314[2]; // [xsp+280h] [xbp-B0h] BYREF
  _BYTE v315[39]; // [xsp+2A0h] [xbp-90h] BYREF
  __int64 v316; // [xsp+2C8h] [xbp-68h]
  System_ValueTuple_int__int__Int32Enum__o v317; // 0:x0.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v318; // 0:x0.16
  System_Nullable_T__o v319; // 0:x0.16
  System_Nullable_long__o v320; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v321; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v322; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v323; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v324; // 0:x0.16
  System_Nullable_T__o v325; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v326; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v327; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v328; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v329; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v330; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v331; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v332; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v333; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v334; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v335; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v336; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v337; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v338; // 0:x2.16

  v316 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_4CC30C0 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&CommonRestrictionMaster_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C713B0(&IconLabelInfo_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_1C713B0(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C713B0(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__);
    sub_1C713B0(&Method_System_Nullable_ObscuredInt__GetValueOrDefault__);
    sub_1C713B0(&Method_System_Nullable_long___ctor__);
    sub_1C713B0(&Method_System_Nullable_int___ctor__);
    sub_1C713B0(&Method_System_Nullable_ObscuredInt___ctor__);
    sub_1C713B0(&Method_System_Nullable_ObscuredLong___ctor__);
    sub_1C713B0(&Method_System_Nullable_ObscuredLong__get_HasValue__);
    sub_1C713B0(&Method_System_Nullable_ObscuredInt__get_HasValue__);
    sub_1C713B0(&Method_System_Nullable_long__get_HasValue__);
    sub_1C713B0(&Method_System_Nullable_int__get_HasValue__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C713B0(&Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__);
    byte_4CC30C0 = 1;
  }
  friendshipRank = 0;
  recoverAt = 0;
  entity = 0;
  v308 = 0;
  v307 = 0;
  skillName = 0;
  actMaxRarity = 0;
  v304 = 0;
  memset(&v303, 0, sizeof(v303));
  memset(v315, 0, sizeof(v315));
  v313 = 0u;
  memset(v314, 0, 23);
  v18 = (IconLabelInfo_o *)sub_1C715FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0);
  this->fields.iconLabelInfo1 = v18;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo1, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = (IconLabelInfo_o *)sub_1C715FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v25, 0);
  this->fields.iconLabelInfo2 = v25;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo2, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = (IconLabelInfo_o *)sub_1C715FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v32, 0);
  this->fields.iconLabelInfo3 = v32;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo3, (int32_t)v32, v33, v34, v35, v36, v37, v38);
  ListViewItem___ctor_44097096((ListViewItem_o *)this, index, 0);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_296;
  Member = PartyListViewItem__GetMember(partyItem, num, 0);
  this->fields.baseItem = Member;
  p_baseItem = &this->fields.baseItem;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.baseItem, (int32_t)Member, v42, v43, v44, v45, v46, v47);
  baseItem = this->fields.baseItem;
  this->fields._PartyListViewItemMenuKind_k__BackingField = partyItem->fields.menuKind;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_296;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0;
  this->fields.userServantEntity = userServantEntity;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v55, v56, v57, v58, v59, v60);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C71354(
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
    goto LABEL_296;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_296;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
  v69 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v68 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v70 = partyItem;
  v71 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v318.fields.currentCryptoKey = v69;
  *(_QWORD *)&v318.fields.fakeValue = v68;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v318, 0);
  if ( !v71 )
    goto LABEL_296;
  v72 = DataMasterBase_object__object__int___GetEntity(
          v71,
          Instance,
          (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v72;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, (int32_t)v72, v73, v74, v75, v76, v77, v78);
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  this->fields._IsGrandSameServant_k__BackingField = isGrandSameServant;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_296;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v79 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_296;
  v80 = *(_OWORD *)&v79->fields.userId.fields.fakeValue;
  v81 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)item = *(_OWORD *)&v79->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&item[16] = v80;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v302 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
  v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v302, 0);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(this->fields.svtId, 0);
  if ( !v81 )
    goto LABEL_296;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v81, v82, Instance, 0);
  if ( !*p_servantEntity )
    goto LABEL_296;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !Instance )
    goto LABEL_296;
  v287 = num;
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.equipUserServantEntity, 0, v83, v84, v85, v86, v87, v88);
  this->fields.equipServantEntity = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntity, 0, v89, v90, v91, v92, v93, v94);
  this->fields.equipIdList = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, 0, v95, v96, v97, v98, v99, v100);
  v101 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v101,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v101;
  sub_1C71354(
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
    goto LABEL_296;
  IsNotSameParty = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0);
  v280 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v280,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  v286 = 0;
  v108 = 0;
  for ( i = 0; ; ++i )
  {
    v110 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v110 = BalanceConfig_TypeInfo;
    }
    if ( i >= v110->static_fields->DeckMemberMax )
      goto LABEL_114;
    Instance = (int64_t)PartyListViewItem__GetMember(v70, i, 0);
    if ( !Instance )
      goto LABEL_296;
    v111 = Instance;
    if ( *(_QWORD *)(Instance + 120) )
      break;
    if ( *p_baseItem && (*p_baseItem)->fields.isRestrictionGrandServant )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
      v132 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v133 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v134 = (UserServantGrandMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v322.fields.currentCryptoKey = v132;
      *(_QWORD *)&v322.fields.fakeValue = v133;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v322, 0);
      if ( !v134 )
        goto LABEL_296;
      EntityFromSvtId = UserServantGrandMaster__GetEntityFromSvtId(v134, Instance, 0);
      if ( EntityFromSvtId )
      {
        EquipUserServantIdList = UserServantGrandEntity__GetEquipUserServantIdList(EntityFromSvtId, 0);
        PartyServantListViewItem__SetEquipStatus(this, EquipUserServantIdList, v137);
      }
    }
LABEL_85:
    ;
  }
  v112 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_296;
  v113 = *(_OWORD *)&v112->fields.id.fields.fakeValue;
  *(_OWORD *)item = *(_OWORD *)&v112->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&item[16] = v113;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v301 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v301, 0);
  v114 = *(_QWORD *)(v111 + 120);
  if ( !v114 )
    goto LABEL_296;
  v115 = *(_OWORD *)(v114 + 32);
  v116 = Instance;
  *(_OWORD *)&v300.fields.currentCryptoKey = *(_OWORD *)(v114 + 16);
  *(_OWORD *)&v300.fields.fakeValue = v115;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v300, 0);
  if ( v116 != Instance )
  {
    if ( !isGrandSameServant )
    {
LABEL_48:
      if ( v287 != i )
      {
        v126 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_296;
        v127 = *(_QWORD *)&v126[2].fields.currentCryptoKey;
        v128 = *(_QWORD *)&v126[2].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v321.fields.currentCryptoKey = v127;
        *(_QWORD *)&v321.fields.fakeValue = v128;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v321, 0);
        v129 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v111 + 192);
        if ( !v129 )
          goto LABEL_296;
        v130 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v129[2], 0);
        if ( v130 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else
        {
          if ( !IsNotSameParty )
            goto LABEL_75;
          Instance = *(_QWORD *)(v111 + 192);
          if ( !Instance )
            goto LABEL_296;
          Instance = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0);
          if ( (Instance & 1) == 0 )
            goto LABEL_75;
          Instance = (int64_t)*p_servantEntity;
          if ( !*p_servantEntity )
            goto LABEL_296;
          Instance = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0);
          if ( !*(_QWORD *)(v111 + 192) )
            goto LABEL_296;
          v138 = Instance;
          Instance = ServantEntity__GetNotSamePartyKey(*(ServantEntity_o **)(v111 + 192), 0);
          if ( v138 == (_DWORD)Instance )
          {
            this->fields.isNotSameParty = 1;
            Instance = *(_QWORD *)(v111 + 192);
            if ( !Instance )
              goto LABEL_296;
            NotSamePartyKey = (unsigned int)ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0);
            Instance = (int64_t)v280;
            if ( !v280 )
              goto LABEL_296;
            items = v280->fields._items;
            v140 = Method_System_Collections_Generic_List_int__Add__;
            ++v280->fields._version;
            if ( !items )
              goto LABEL_296;
            size = v280->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v280,
                NotSamePartyKey,
                *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
            }
            else
            {
              v280->fields._size = size + 1;
              items->m_Items[size] = NotSamePartyKey;
            }
          }
          else
          {
LABEL_75:
            if ( this->fields.commonRestrictionId == -1 )
            {
              v142 = *(_QWORD *)(v111 + 192);
              if ( !v142 )
                goto LABEL_296;
              v144 = *(_QWORD *)(v142 + 32);
              v143 = *(_QWORD *)(v142 + 40);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v323.fields.currentCryptoKey = v144;
              *(_QWORD *)&v323.fields.fakeValue = v143;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v323, 0);
              if ( !*p_servantEntity )
                goto LABEL_296;
              v145 = Instance;
              v146 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952((*p_servantEntity)[2], 0);
              if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
              IncludedRestrictionIds = CommonRestrictionMaster__GetIncludedRestrictionIds(v145, v146, 0);
              if ( (IncludedRestrictionIds & 0x80000000) == 0 )
                this->fields.commonRestrictionId = IncludedRestrictionIds;
            }
          }
        }
      }
      goto LABEL_85;
    }
    if ( !userServantEntity )
      goto LABEL_296;
    v117 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)item = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&item[16] = v117;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v299 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v299, 0);
    if ( !*p_baseItem )
      goto LABEL_296;
    v119 = (*p_baseItem)->fields.userServantEntity;
    v120 = Instance;
    if ( v119 )
      v121 = Instance;
    else
      v121 = v286;
    if ( v119 )
      v122 = (*p_baseItem)->fields.userServantEntity;
    else
      v122 = v108;
    if ( v119 )
    {
      if ( !v122 )
        goto LABEL_296;
      v123 = *(_OWORD *)&v122->fields.id.fields.currentCryptoKey;
      v124 = *(_OWORD *)&v122->fields.id.fields.fakeValue;
      memset(item, 0, sizeof(item));
      *(_QWORD *)&v319.fields.hasValue = item;
      v319.fields.value = (Il2CppObject *)v312;
      v296 = v123;
      v297 = v124;
      v312[0] = v123;
      v312[1] = v124;
      System_Nullable_ObscuredLong____ctor(
        v319,
        (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
        v118);
      *(_QWORD *)((char *)v314 + 15) = *(_QWORD *)&item[32];
      v313 = *(_OWORD *)&item[1];
      v314[0] = *(_OWORD *)&item[17];
      *(_QWORD *)&v315[31] = *(_QWORD *)((char *)v314 + 15);
      *(_OWORD *)v315 = *(_OWORD *)&item[1];
      *(_OWORD *)&v315[16] = *(_OWORD *)&item[17];
      if ( !item[0] )
        goto LABEL_91;
      *(_OWORD *)item = *(_OWORD *)&v315[7];
      *(_OWORD *)&item[16] = *(_OWORD *)&v315[23];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v295 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
      v320.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v295, 0);
      *(_QWORD *)&v320.fields.hasValue = v312;
      v312[0] = 0u;
      System_Nullable_long____ctor(v320, Method_System_Nullable_long___ctor__, v125);
      if ( !LOBYTE(v312[0]) || v121 != *((_QWORD *)&v312[0] + 1) )
        goto LABEL_91;
      v108 = v119;
      v70 = partyItem;
      v286 = v120;
      goto LABEL_48;
    }
    v313 = 0u;
    memset(v314, 0, 23);
    memset(v315, 0, sizeof(v315));
LABEL_91:
    this->fields.isBase = 0;
    this->fields.isSame = 0;
    v150 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v149 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v324.fields.currentCryptoKey = v150;
    *(_QWORD *)&v324.fields.fakeValue = v149;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v324, 0);
    if ( !*p_baseItem )
      goto LABEL_296;
    v152 = (*p_baseItem)->fields.userServantEntity;
    if ( v152 )
      v153 = Instance;
    else
      v153 = 0;
    if ( v152 )
    {
      v325.fields.value = *(Il2CppObject **)&v152->fields.svtId.fields.currentCryptoKey;
      *(_QWORD *)&v338.fields.currentCryptoKey = *(_QWORD *)&v152->fields.svtId.fields.fakeValue;
      *(_QWORD *)&v325.fields.hasValue = item;
      memset(item, 0, 20);
      *(_QWORD *)&v338.fields.fakeValue = Method_System_Nullable_ObscuredInt___ctor__;
      System_Nullable_ObscuredInt____ctor(v325, v338, v151);
      if ( item[0] )
      {
        v154 = *(_QWORD *)&item[4];
        v155 = *(_QWORD *)&item[12];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v326.fields.currentCryptoKey = v154;
        *(_QWORD *)&v326.fields.fakeValue = v155;
        v156 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v326, 0);
        v157 = (System_Nullable_int__o)item;
        *(_QWORD *)item = 0;
        System_Nullable_int____ctor(v157, v156, (const MethodInfo_3938D3C *)Method_System_Nullable_int___ctor__);
        if ( item[0] )
        {
          if ( v153 == *(_DWORD *)&item[4] )
          {
            Instance = (int64_t)*p_baseItem;
            if ( !*p_baseItem )
              goto LABEL_296;
LABEL_104:
            EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)Instance, 0);
LABEL_113:
            PartyServantListViewItem__SetEquipStatus(this, EquipList, v159);
            goto LABEL_114;
          }
        }
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    v160 = *(_QWORD *)(v111 + 192);
    if ( !v160 )
      goto LABEL_296;
    v161 = (UserServantGrandMaster_o *)Instance;
    v163 = *(_QWORD *)(v160 + 32);
    v162 = *(_QWORD *)(v160 + 40);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v327.fields.currentCryptoKey = v163;
    *(_QWORD *)&v327.fields.fakeValue = v162;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v327, 0);
    if ( !v161 )
      goto LABEL_296;
    Instance = (int64_t)UserServantGrandMaster__GetEntityFromSvtId(v161, Instance, 0);
    if ( !Instance )
      goto LABEL_296;
LABEL_112:
    EquipList = UserServantGrandEntity__GetEquipUserServantIdList((UserServantGrandEntity_o *)Instance, 0);
    goto LABEL_113;
  }
  v148 = this->fields.baseItem;
  this->fields.isSame = 0;
  this->fields.isBase = v287 == i && isEnableRemove;
  this->fields.partyIndex = i;
  if ( !v148 || !v148->fields.isRestrictionGrandServant || v287 == i )
  {
    Instance = v111;
    goto LABEL_104;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  v276 = *(_QWORD *)(v111 + 192);
  if ( !v276 )
    goto LABEL_296;
  v277 = (UserServantGrandMaster_o *)Instance;
  v279 = *(_QWORD *)(v276 + 32);
  v278 = *(_QWORD *)(v276 + 40);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v337.fields.currentCryptoKey = v279;
  *(_QWORD *)&v337.fields.fakeValue = v278;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v337, 0);
  if ( !v277 )
    goto LABEL_296;
  Instance = (int64_t)UserServantGrandMaster__GetEntityFromSvtId(v277, Instance, 0);
  if ( Instance )
    goto LABEL_112;
LABEL_114:
  if ( this->fields._PartyListViewItemMenuKind_k__BackingField != 9 )
  {
    this->fields._OrganizedWave_k__BackingField = 0;
    goto LABEL_153;
  }
  v164 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v164,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  v165 = baseDeckItemList;
  if ( !baseDeckItemList )
    goto LABEL_296;
  max_length = baseDeckItemList->max_length;
  this->fields._MaxWave_k__BackingField = max_length;
  if ( (int)max_length < 1 )
    goto LABEL_146;
  v167 = 0;
  v168 = 1;
  while ( 2 )
  {
    if ( v167 >= (unsigned int)max_length )
      sub_1C71610(Instance);
    v169 = v165->m_Items[v167];
    v170 = 0;
    while ( 2 )
    {
      Instance = (int64_t)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (int64_t)BalanceConfig_TypeInfo;
      }
      if ( v170 < *(_DWORD *)(*(_QWORD *)(Instance + 184) + 176LL) )
      {
        if ( !v169 )
          goto LABEL_296;
        Instance = (int64_t)PartyListViewItem__GetMember(v169, v170, 0);
        if ( !Instance )
          goto LABEL_296;
        v171 = (PartyOrganizationListViewItem_o *)Instance;
        if ( !*(_QWORD *)(Instance + 120) )
          goto LABEL_140;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(SvtId, 0);
        if ( !v164 )
          goto LABEL_296;
        v173 = v164->fields._items;
        v174 = Method_System_Collections_Generic_List_int__Add__;
        ++v164->fields._version;
        if ( !v173 )
          goto LABEL_296;
        v175 = v164->fields._size;
        NotSamePartyKey = (unsigned int)Instance;
        if ( (unsigned int)v175 >= LODWORD(v173->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v164,
            Instance,
            *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v174[4] + 192LL) + 112LL));
          if ( !v168 )
          {
LABEL_140:
            ++v170;
            continue;
          }
        }
        else
        {
          v164->fields._size = v175 + 1;
          v173->m_Items[v175] = Instance;
          if ( !v168 )
            goto LABEL_140;
        }
        v176 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_296;
        v177 = v171->fields.userServantEntity;
        if ( !v177 )
          goto LABEL_296;
        v178 = *(_OWORD *)&v177->fields.id.fields.fakeValue;
        *(_OWORD *)item = *(_OWORD *)&v177->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&item[16] = v178;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v294 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_49302024(&v176->fields.id, &v294, 0) )
        {
          v179 = PartyOrganizationListViewItem__GetEquipList(v171, 0);
          PartyServantListViewItem__SetEquipStatus(this, v179, v180);
          this->fields._OrganizedWave_k__BackingField = v168;
          v168 = 0;
          this->fields._IsClearedWave_k__BackingField = v169->fields._IsClearedWave_k__BackingField;
        }
        goto LABEL_140;
      }
      break;
    }
    v165 = baseDeckItemList;
    ++v167;
    if ( v168 )
      ++v168;
    else
      v168 = 0;
    LODWORD(max_length) = baseDeckItemList->max_length;
    if ( (__int64)v167 < (int)max_length )
      continue;
    break;
  }
  if ( !v168 )
    goto LABEL_153;
LABEL_146:
  v182 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v181 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v328.fields.currentCryptoKey = v182;
  *(_QWORD *)&v328.fields.fakeValue = v181;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v328, 0);
  if ( !v164 )
    goto LABEL_296;
  if ( System_Collections_Generic_List_int___Contains(
         v164,
         Instance,
         (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__)
    && !this->fields.isNotSameParty )
  {
    this->fields.isSame = 1;
  }
LABEL_153:
  PartyServantListViewItem__CheckConvertOverwriteImage(this, (const MethodInfo *)NotSamePartyKey);
  PartyServantListViewItem__ModifyLimitCount(this, v183);
  PartyServantListViewItem__ModifyOverwriteStatus(this, v184);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.updateCategoryIdList = 1;
  if ( !Instance )
    goto LABEL_296;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v185 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v185 )
    goto LABEL_296;
  IsChoice = UserServantEntity__IsChoice(v185, 0);
  *(_WORD *)&this->fields.isSwapLock = 0;
  *(_WORD *)&this->fields.isLockMode = 0;
  this->fields.isChoice = IsChoice;
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_296;
  v187 = partyItem;
  v188 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_296;
  v189 = *(_OWORD *)&v188->fields.id.fields.fakeValue;
  v190 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)item = *(_OWORD *)&v188->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&item[16] = v189;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v293 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
  v191 = v190 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v293, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  v192 = v191;
  this->fields.isPush = v192;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_296;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0);
  v193 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v193 )
    goto LABEL_296;
  this->fields.isLeave = UserServantEntity__IsLeave(v193, 0);
  *(_QWORD *)&this->fields.bonusKind = 1;
  this->fields.isEventUpVal = 0;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v194);
  v195 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v195 )
    goto LABEL_296;
  Instance = UserServantEntity__getUniqueSvtRestriction_43464276(
               v195,
               this->fields.questRestrictionInfo,
               partyItem,
               v287,
               this->fields.partyIndex,
               0);
  v196 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v196 )
    goto LABEL_296;
  IsUniqueIndividualityRestriction_43464656 = UserServantEntity__IsUniqueIndividualityRestriction_43464656(
                                                v196,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                v287,
                                                this->fields.partyIndex,
                                                0);
  v199 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_43464656;
  this->fields.fatigureTime = -1;
  this->fields.isFatigureRecover = 0;
  if ( !v199 || !v199->fields.isFatigure )
    goto LABEL_178;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_296;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
  if ( !*p_questRestrictionInfo )
    goto LABEL_296;
  v200 = (UserEventServantFatigueMaster_o *)Instance;
  eventId = (*p_questRestrictionInfo)->fields.eventId;
  v203 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v202 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v329.fields.currentCryptoKey = v203;
  *(_QWORD *)&v329.fields.fakeValue = v202;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v329, 0);
  if ( !v200 )
    goto LABEL_296;
  if ( UserEventServantFatigueMaster__GetFatigueInfo(
         v200,
         &recoverAt,
         &this->fields.isFatigureRecover,
         eventId,
         Instance,
         0) )
  {
    v204 = recoverAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( v204 > NetworkManager__getTime(0) )
      this->fields.fatigureTime = recoverAt;
  }
LABEL_178:
  AllOutBattleAlreadyUsed = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v198);
  v206 = this->fields.questRestrictionInfo;
  this->fields._IsAllOutBattle_k__BackingField = AllOutBattleAlreadyUsed;
  if ( !v206 || !v206->fields.isDataLostBattle )
  {
    this->fields._IsDataLost_k__BackingField = 0;
    this->fields._TimesToRestart_k__BackingField = -1;
    goto LABEL_202;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v207 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v187 = partyItem;
  if ( !*p_questRestrictionInfo || !v207 )
    goto LABEL_296;
  Instance = UserEventDataLostMaster__TryGetEntity(
               (UserEventDataLostMaster_o *)v207,
               &entity,
               *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
               (*p_questRestrictionInfo)->fields.dataLostBattleId,
               0);
  if ( (Instance & 1) == 0 )
    goto LABEL_202;
  v208 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_296;
  v209 = entity;
  v211 = *(_QWORD *)&v208->fields.svtId.fields.currentCryptoKey;
  v210 = *(_QWORD *)&v208->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v330.fields.currentCryptoKey = v211;
  *(_QWORD *)&v330.fields.fakeValue = v210;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v330, 0);
  if ( !v209 )
    goto LABEL_296;
  Instance = UserEventDataLostEntity__IsRestart(v209, Instance, 0);
  v212 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_296;
  v213 = Instance;
  v214 = entity;
  v216 = *(_QWORD *)&v212->fields.svtId.fields.currentCryptoKey;
  v215 = *(_QWORD *)&v212->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v331.fields.currentCryptoKey = v216;
  *(_QWORD *)&v331.fields.fakeValue = v215;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v331, 0);
  if ( !v214 )
    goto LABEL_296;
  if ( (v213 & 1) != 0 )
  {
    this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(v214, Instance, 0);
  }
  else if ( UserEventDataLostEntity__IsDataLost(v214, Instance, 0) )
  {
    this->fields._IsDataLost_k__BackingField = 1;
  }
LABEL_202:
  if ( *p_questRestrictionInfo )
    v217 = (*p_questRestrictionInfo)->fields.eventId;
  else
    v217 = -1;
  if ( !this->fields.isBase )
  {
    partyIndex = this->fields.partyIndex;
    if ( (partyIndex & 0x80000000) == 0 )
      goto LABEL_220;
  }
  Instance = (int64_t)PartyListViewItem__GetMember(v187, v287, 0);
  if ( !Instance )
    goto LABEL_296;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(EquipSvtId, 0) >= 1 )
  {
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v219 = *p_userServantEntity;
    if ( *p_userServantEntity )
    {
      v220 = Instance;
      v222 = *(_QWORD *)&v219->fields.svtId.fields.currentCryptoKey;
      v221 = *(_QWORD *)&v219->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v332.fields.currentCryptoKey = v222;
      *(_QWORD *)&v332.fields.fakeValue = v221;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v332, 0);
      if ( *p_userServantEntity )
      {
        v223 = Instance;
        Rarity = UserServantEntity__getRarity(*p_userServantEntity, 0);
        Instance = (int64_t)PartyListViewItem__GetMember(v187, v287, 0);
        if ( Instance )
        {
          v333 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0);
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v333, 0);
          if ( v220 )
          {
            p_skillName = (System_String_o **)&v308;
            p_actMaxRarity = &v307;
            goto LABEL_231;
          }
        }
      }
    }
    goto LABEL_296;
  }
  partyIndex = this->fields.partyIndex;
  if ( (partyIndex & 0x80000000) == 0 )
  {
LABEL_220:
    Instance = (int64_t)PartyListViewItem__GetMember(v187, partyIndex, 0);
    if ( !Instance )
      goto LABEL_296;
    v229 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v229, 0) >= 1 )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v230 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_296;
      v231 = Instance;
      v233 = *(_QWORD *)&v230->fields.svtId.fields.currentCryptoKey;
      v232 = *(_QWORD *)&v230->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v334.fields.currentCryptoKey = v233;
      *(_QWORD *)&v334.fields.fakeValue = v232;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v334, 0);
      if ( !*p_userServantEntity )
        goto LABEL_296;
      v223 = Instance;
      Rarity = UserServantEntity__getRarity(*p_userServantEntity, 0);
      Instance = (int64_t)PartyListViewItem__GetMember(v187, this->fields.partyIndex, 0);
      if ( !Instance )
        goto LABEL_296;
      v335 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0);
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v335, 0);
      if ( !v231 )
        goto LABEL_296;
      p_skillName = &skillName;
      p_actMaxRarity = &actMaxRarity;
LABEL_231:
      this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                       (PartyOrganizationUtility_o *)Instance,
                                       p_skillName,
                                       p_actMaxRarity,
                                       v223,
                                       Rarity,
                                       Instance,
                                       v217,
                                       v225);
    }
  }
  v234 = this->fields.questRestrictionInfo;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  this->fields._SvtPointRank_k__BackingField = 0;
  this->fields._SvtPoint_k__BackingField = 0;
  if ( v234 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Instance )
      goto LABEL_296;
    v235 = (EventServantPointRankMaster_o *)Instance;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v217, 0) )
    {
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v236 = *p_userServantEntity;
      if ( *p_userServantEntity )
      {
        v237 = *(_OWORD *)&v236->fields.userId.fields.fakeValue;
        v238 = (UserEventServantPointMaster_o *)Instance;
        *(_OWORD *)item = *(_OWORD *)&v236->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&item[16] = v237;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v292 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v292, 0);
        if ( *p_userServantEntity )
        {
          v239 = Instance;
          Instance = UserServantEntity__getSvtId(*p_userServantEntity, 0);
          if ( v238 )
          {
            p_SvtPoint_k__BackingField = &this->fields._SvtPoint_k__BackingField;
            if ( UserEventServantPointMaster__TryGetEntity(v238, &v304, v239, v217, Instance, 0) )
            {
              Instance = (int64_t)v304;
              if ( !v304 )
                goto LABEL_296;
              *p_SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v304, 0);
            }
            Instance = (int64_t)*p_userServantEntity;
            if ( *p_userServantEntity )
            {
              v241 = *p_SvtPoint_k__BackingField;
              v242 = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0);
              EnableEntity = EventServantPointRankMaster__GetEnableEntity(v235, v217, v241, v242, 0);
              if ( EnableEntity )
                this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
              goto LABEL_250;
            }
          }
        }
      }
LABEL_296:
      sub_1C71608(Instance, NotSamePartyKey);
    }
  }
LABEL_250:
  v244 = (System_Collections_Generic_List_T__o *)sub_1C715FC(System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
  System_Collections_Generic_List_ValueTuple_int__int__Int32Enum_____ctor(
    v244,
    (const MethodInfo_37C1BB8 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
  if ( *p_questRestrictionInfo )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_296;
    v245 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance || !v245 )
      goto LABEL_296;
    Instance = (int64_t)EventCampaignMaster__GetFriendshipUpCampaigns(
                          (EventCampaignMaster_o *)v245,
                          *(_QWORD *)(Instance + 112),
                          0);
    if ( Instance )
    {
      v246 = (System_Collections_Generic_List_object__o *)Instance;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_296;
      v247 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventQuestMaster___);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)item,
        v246,
        (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
      v303 = *(System_Collections_Generic_List_Enumerator_object__o *)item;
      while ( 1 )
      {
        v248 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v303,
                 (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v248 )
          break;
        current = (EventCampaignEntity_o *)v303.fields._current;
        if ( !v303.fields._current )
          sub_1C71608(v248, v249);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v303.fields._current[2].monitor;
        if ( monitor && monitor[1].monitor )
        {
          if ( !userServantEntity )
            sub_1C71608(v248, v249);
          v253 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
          v252 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v336.fields.currentCryptoKey = v253;
          *(_QWORD *)&v336.fields.fakeValue = v252;
          v254 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v336, 0);
          v248 = System_Linq_Enumerable__Contains_int_(
                   monitor,
                   v254,
                   (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( !v248 )
            continue;
        }
        if ( !*p_questRestrictionInfo )
          sub_1C71608(v248, v249);
        if ( !v247 )
          sub_1C71608(v248, v249);
        if ( !EventQuestMaster__IsEventNotIncluded(
                (EventQuestMaster_o *)v247,
                current->fields.eventId,
                (*p_questRestrictionInfo)->fields.questId,
                (*p_questRestrictionInfo)->fields.questPhase,
                7,
                0,
                0) )
        {
          v255 = current->fields.eventId;
          FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0);
          calcType = current->fields.calcType;
          v258 = FriendshipBonusValue;
          *(_DWORD *)&item[8] = 0;
          *(_QWORD *)item = 0;
          *(_QWORD *)&v317.fields.Item1 = item;
          v317.fields.Item3 = v255;
          System_ValueTuple_int__int__Int32Enum____ctor(
            v317,
            v258,
            calcType,
            Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__,
            v259);
          if ( !v244 )
            sub_1C71608(v260, v261);
          v262 = *(System_ValueTuple_int__int__Int32Enum__o *)item;
          v263 = v244->fields._items;
          v264 = Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__;
          ++v244->fields._version;
          if ( !v263 )
            sub_1C71608(v260, *(_QWORD *)&v262.fields.Item1);
          v265 = v244->fields._size;
          if ( (unsigned int)v265 >= LODWORD(v263->max_length) )
          {
            System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____AddWithResize(
              v244,
              v262,
              *(const MethodInfo_37C2444 **)(*(_QWORD *)(v264[4] + 192LL) + 112LL));
          }
          else
          {
            v244->fields._size = v265 + 1;
            *((System_ValueTuple_int__int__Int32Enum__o *)v263->m_Items + v265) = v262;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v303,
        (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    }
  }
  if ( !v244 )
    goto LABEL_296;
  v266 = (struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *)System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____ToArray(
                                                                                    v244,
                                                                                    (const MethodInfo_37C4008 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
  this->fields._FriendshipUpValTuple_k__BackingField = v266;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (int32_t)v266,
    v267,
    v268,
    v269,
    v270,
    v271,
    v272);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_296;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_296;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_296;
  this->fields.priority = *(_DWORD *)(Instance + 52);
  PartyServantListViewItem__InitAfterSecondSort(this, (const MethodInfo *)NotSamePartyKey);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_296;
  v273 = BalanceConfig_TypeInfo;
  v274 = *(_DWORD *)(Instance + 276);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v273 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v273->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v274;
  if ( !Instance )
    goto LABEL_296;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.amountSortValue = -1;
  if ( !Instance )
    goto LABEL_296;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_296;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (int64_t)*p_iconLabelInfo3;
  if ( !*p_iconLabelInfo3 )
    goto LABEL_296;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void PartyServantListViewItem___ctor_34891404(
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
  bool IsUniqueIndividualityRestriction_43464656; // w0
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

  if ( (byte_4CC30C1 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&CommonRestrictionMaster_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C713B0(&IconLabelInfo_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC30C1 = 1;
  }
  friendshipRank = 0;
  recoverAt = 0;
  v17 = (IconLabelInfo_o *)sub_1C715FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0);
  this->fields.iconLabelInfo1 = v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo1, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (IconLabelInfo_o *)sub_1C715FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0);
  this->fields.iconLabelInfo2 = v24;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo2, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (IconLabelInfo_o *)sub_1C715FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v31, 0);
  this->fields.iconLabelInfo3 = v31;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.iconLabelInfo3, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  ListViewItem___ctor_44097096((ListViewItem_o *)this, index, 0);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_83;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, num, 0);
  this->fields.baseItem = MemberItem;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.baseItem, (int32_t)MemberItem, v41, v42, v43, v44, v45, v46);
  baseItem = this->fields.baseItem;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_83;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1C71354(
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v55, v56, v57, v58, v59, v60);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C71354(
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
  v69 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v68 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v70 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v157.fields.currentCryptoKey = v69;
  *(_QWORD *)&v157.fields.fakeValue = v68;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v157, 0);
  if ( !v70 )
    goto LABEL_83;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v70,
             Instance,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.servantEntity, (int32_t)Entity, v73, v74, v75, v76, v77, v78);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v153, 0);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(this->fields.svtId, 0);
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.equipUserServantEntity, 0, v83, v84, v85, v86, v87, v88);
  this->fields.equipServantEntity = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntity, 0, v89, v90, v91, v92, v93, v94);
  this->fields.equipIdList = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.equipIdList, 0, v95, v96, v97, v98, v99, v100);
  v101 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v101,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v101;
  sub_1C71354(
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
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v152, 0);
      v114 = v111->fields.userServantEntity;
      if ( !v114 )
        goto LABEL_83;
      v115 = *(_OWORD *)&v114->fields.id.fields.fakeValue;
      v116 = Instance;
      *(_OWORD *)&v151.fields.currentCryptoKey = *(_OWORD *)&v114->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v151.fields.fakeValue = v115;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v151, 0);
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
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v158, 0);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v111->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_83;
        v121 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(servantEntity[2], 0);
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
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v159, 0);
              if ( !*p_servantEntity )
                goto LABEL_83;
              v126 = Instance;
              v127 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952((*p_servantEntity)[2], 0);
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
  Instance = UserServantEntity__getUniqueSvtRestriction_43464276(
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
  IsUniqueIndividualityRestriction_43464656 = UserServantEntity__IsUniqueIndividualityRestriction_43464656(
                                                v136,
                                                this->fields.questRestrictionInfo,
                                                0,
                                                num,
                                                this->fields.partyIndex,
                                                0);
  v139 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_43464656;
  this->fields.fatigureTime = -1;
  this->fields.isFatigureRecover = 0;
  if ( !v139 || !v139->fields.isFatigure )
    goto LABEL_72;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
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
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v160, 0);
  if ( !v140 )
LABEL_83:
    sub_1C71608(Instance, v39);
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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
  if ( (byte_4CC30C4 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC30C4 = 1;
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
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v13, 0);
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
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
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
        sub_1C71608(this, method);
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
  if ( (byte_4CC30C2 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC30C2 = 1;
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
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v33, 0);
  v7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
  if ( !v7 )
    goto LABEL_38;
  v8 = (int)this;
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v7[6], 0);
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
  if ( !QuestRestrictionInfo__IsRestriction_43714052(
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
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v34, 0);
    v16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
    if ( !v16 )
      goto LABEL_38;
    v17 = (int)this;
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v16[6], 0);
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
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v35, 0);
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
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v36, 0);
        v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
        if ( v28 )
        {
          v29 = (int)this;
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
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
    sub_1C71608(this, method);
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
  if ( (byte_4CC30C3 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC30C3 = 1;
  }
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    userServantEntity = v2->fields.userServantEntity;
    if ( !userServantEntity )
      sub_1C71608(this, method);
    v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v9, 0);
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

  if ( (byte_4CC30CB & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC30CB = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = questRestrictionInfo->fields.allOutBattleGroupNo;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (UserEventAlloutBattleMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v9;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v13, 0);
  v11 = this->fields.questRestrictionInfo;
  if ( !v11 || !v10 )
LABEL_13:
    sub_1C71608(Instance, v6);
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


bool PartyServantListViewItem__GetNpInfo(
        PartyServantListViewItem_o *this,
        TreasureDvcInfo_o **tdInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0
  TreasureDvcInfo_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CC30CE & 1) == 0 )
  {
    sub_1C713B0(&TreasureDvcInfo_TypeInfo);
    byte_4CC30CE = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0);
  v7 = (TreasureDvcInfo_o *)sub_1C715FC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0);
  *tdInfo = v7;
  sub_1C71354((GrandQuestFolderBoardItem_o *)tdInfo, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  return 0;
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

  if ( (byte_4CC30CA & 1) == 0 )
  {
    sub_1C713B0(&CommonRestrictionMaster_TypeInfo);
    byte_4CC30CA = 1;
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
  if ( (byte_4CC30CF & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CC30CF = 1;
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
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(
                                               &v12,
                                               0);
        v8 = v2->fields.userServantEntity;
        v2->fields.sortValue2B = (int64_t)this;
        if ( v8 )
        {
          v9 = *(_OWORD *)&v8->fields.id.fields.fakeValue;
          *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&v8->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v11.fields.fakeValue = v9;
          v2->fields.sortValueLast = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v11, 0);
          return;
        }
      }
    }
LABEL_15:
    sub_1C71608(this, method);
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
  v2->fields.sortValue2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v10, 0);
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

  if ( (byte_4CC30C8 & 1) == 0 )
  {
    sub_1C713B0(&FilterKindList_TypeInfo);
    sub_1C713B0(&ListViewSort_FilterKind___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C713B0(&ServantEventBonusFilterController_TypeInfo);
    byte_4CC30C8 = 1;
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
                                                                       (const MethodInfo_37F79D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                            (const MethodInfo_37F79D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_37F79D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_37F79D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_1C71354(
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
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.tdCategoryIdList,
      (int32_t)TreasureDeviceCategoryIdList,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_1C71458(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_65:
    sub_1C71608(ClassGroupFilterKindList, sort);
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_66;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                   0);
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_1C71458(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  if ( !ClassGroupFilterKindList->fields._size )
LABEL_66:
    sub_1C71610(ClassGroupFilterKindList);
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
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_1C71458(ListViewSort_FilterKind___TypeInfo, 1);
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
                                           (const MethodInfo_37F79D8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v18, 0)
      || ListViewSort__IsMatchRarityFilter(sort, this->fields.rarityId, 0);
}


bool PartyServantListViewItem__IsRestrictionGrandServant(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_o *baseItem; // x8

  baseItem = this->fields.baseItem;
  return baseItem && baseItem->fields.isRestrictionGrandServant;
}


void PartyServantListViewItem__Modify(
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


void PartyServantListViewItem__ModifyChoiceItem(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1C71608(0, method);
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
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_userServantEntity )
    sub_1C71608(0, v10);
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

  if ( (byte_4CC30C5 & 1) == 0 )
  {
    sub_1C713B0(&ImageLimitCount_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC30C5 = 1;
  }
  if ( this->fields.isConvertOverwriteImage )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_15;
    questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43730380(
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
  questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                     v12,
                                                     0);
  v7 = this->fields.userServantEntity;
  if ( !v7 )
LABEL_15:
    sub_1C71608(questRestrictionInfo, method);
  v8 = (int)questRestrictionInfo;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v7->fields.limitCount, 0);
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
    sub_1C71608(0, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0);
  this->fields.isSwapLock = 0;
}


void PartyServantListViewItem__ModifyOverwriteStatus(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  int64_t userServantEntity; // x0
  const MethodInfo_393A6D8 *v4; // x3
  _BOOL4 IsGrandSameServant_k__BackingField; // w8
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct UserServantEntity_o *v7; // x8
  __int128 v8; // q0
  __int128 v9; // q1
  const MethodInfo_39394C8 *v10; // x3
  int v11; // w23
  __int64 v12; // x24
  struct UserServantEntity_o *v13; // x8
  __int128 v14; // q0
  const MethodInfo_393A6D8 *v15; // x3
  struct PartyOrganizationListViewItem_o *v16; // x8
  struct UserServantEntity_o *v17; // x8
  __int128 v18; // q0
  __int128 v19; // q1
  const MethodInfo_39394C8 *v20; // x3
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
  if ( (byte_4CC30C6 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_1C713B0(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__);
    sub_1C713B0(&Method_System_Nullable_long___ctor__);
    sub_1C713B0(&Method_System_Nullable_ObscuredLong___ctor__);
    sub_1C713B0(&Method_System_Nullable_ObscuredLong__get_HasValue__);
    sub_1C713B0(&Method_System_Nullable_long__get_HasValue__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&UserServantGrandInfo_TypeInfo);
    byte_4CC30C6 = 1;
  }
  userServantEntity = (int64_t)this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_48;
  userServantEntity = (int64_t)UserServantEntity__GetOverwriteStatus_43476600(
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
      v52.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v42, 0);
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
  userServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v41, 0);
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
      sub_1C71608(userServantEntity, method);
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
      v54.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v38, 0);
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
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v35, 0);
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

  if ( (byte_4CC30C7 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C713B0(&long___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC30C7 = 1;
  }
  p_equipUserServantEntity = (Il2CppObject **)&this->fields.equipUserServantEntity;
  entity = 0;
  this->fields.equipUserServantEntity = 0;
  sub_1C71354(
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.equipServantEntity, 0, v12, v13, v14, v15, v16, v17);
  this->fields.equipIdList = 0;
  p_equipIdList = &this->fields.equipIdList;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_equipIdList, 0, v19, v20, v21, v22, v23, v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v26 = (Il2CppObject **)(p_equipIdList + 24);
  p_equipIdList[24] = (struct System_Int64_array *)v25;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(p_equipIdList + 24), (int32_t)v25, v27, v28, v29, v30, v31, v32);
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
    v44 = sub_1C714EC(v36, long___TypeInfo);
    if ( !v44 )
    {
      sub_1C719A4(v43);
LABEL_9:
      v45 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v45 = BalanceConfig_TypeInfo;
      }
      v44 = sub_1C71458(long___TypeInfo, (unsigned int)v45->static_fields->SvtEquipMax);
    }
  }
  else
  {
    v44 = 0;
  }
  *p_equipIdList = (struct System_Int64_array *)v44;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_equipIdList, v44, v37, v38, v39, v40, v41, v42);
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
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
                                      (const MethodInfo_340B428 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
      Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v79, 0);
      if ( (int)Master_object >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantMaster___);
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
        Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v80, 0);
        if ( !v51 )
          goto LABEL_56;
        v54 = DataMasterBase_object__object__int___GetEntity(
                v51,
                (int32_t)Master_object,
                (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        p_equipServantEntity->klass = (GrandQuestFolderBoardItem_c *)v54;
        sub_1C71354(p_equipServantEntity, (int32_t)v54, v55, v56, v57, v58, v59, v60);
      }
    }
  }
  if ( !*p_equipIdList )
    goto LABEL_56;
  if ( SLODWORD((*p_equipIdList)->max_length) < 2 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
  v61 = *p_equipIdList;
  if ( !*p_equipIdList )
LABEL_56:
    sub_1C71608(Master_object, v34);
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
                                          (const MethodInfo_340B428 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
          Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v81, 0);
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
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
            }
            else
            {
              v77 = &v74->_1.image + monitor_low;
              LODWORD(Master_object[1].monitor) = monitor_low + 1;
              v77[4] = v34;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v77 + 4), (int32_t)v34, v68, v69, v70, v71, v72, v73);
            }
          }
        }
      }
      LODWORD(max_length) = v61->max_length;
      if ( (__int64)++v64 >= (int)max_length )
        return;
    }
LABEL_57:
    sub_1C71610(Master_object);
  }
}


bool PartyServantListViewItem__SetSortValue(
        PartyServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  PartyServantListViewItem_o *v4; // x19
  PartyServantListViewItem_c *v5; // x0
  _BOOL4 isChoice; // w22
  struct PartyServantListViewItem_StaticFields *static_fields; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x9
  int64_t PRIORITY_NORMAL; // x10
  __int64 PRIORITY_LOWEST; // x8
  struct PartyOrganizationListViewItem_o *v11; // x8
  PartyServantListViewItem_c *v12; // x0
  __int64 PRIORITY_LOWEST_HEROIN_LEAVE; // x8
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t cost; // w4
  struct UserServantEntity_o *v16; // x8
  __int128 v17; // q1
  struct UserServantEntity_o *v18; // x8
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct ListViewManager_o *manager; // x8
  __int64 naturalAligment; // x11
  struct ListViewManager_o *v22; // x21
  int64_t fatigureTime; // x8
  int64_t hp; // x2
  int32_t friendshipMax; // w3
  int32_t v26; // w1
  int32_t v27; // w20
  struct PartyOrganizationListViewItem_o *v28; // x8
  struct UserServantEntity_o *v29; // x8
  __int128 v30; // q1
  struct UserServantEntity_o *v31; // x8
  __int128 v32; // q0
  PartyServantListViewItem_o *v33; // x21
  struct PartyOrganizationListViewItem_o *v34; // x8
  struct UserServantEntity_o *v35; // x8
  __int128 v36; // q0
  struct UserServantEntity_o *v37; // x8
  __int128 v38; // q0
  struct QuestRestrictionInfo_o *v39; // x8
  int64_t v40; // x20
  int64_t priority; // x9
  struct ServantEntity_o *v42; // x8
  IconLabelInfo_o *v43; // x21
  struct PartyOrganizationListViewItem_o *v44; // x8
  struct UserServantEntity_o *v45; // x8
  __int128 v46; // q1
  struct UserServantEntity_o *v47; // x8
  __int128 v48; // q0
  PartyServantListViewItem_o *v49; // x21
  struct PartyOrganizationListViewItem_o *v50; // x8
  struct UserServantEntity_o *v51; // x8
  __int128 v52; // q0
  struct UserServantEntity_o *v53; // x8
  __int128 v54; // q0
  int64_t rarityId; // x2
  struct UserServantEntity_o *v56; // x8
  int64_t v57; // x8
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ListViewManager_o *v59; // x8
  __int64 v60; // x11
  struct ListViewManager_o *v61; // x20
  __int64 v62; // x20
  __int64 v63; // x21
  int32_t v64; // w0
  PartyServantListViewItem_o *iconLabelInfo1; // x20
  int64_t v66; // x9
  int32_t v67; // w3
  IconLabelInfo_o *v68; // x0
  int32_t v69; // w2
  struct EventUpValSetupInfo_o *setupInfo; // x8
  int32_t bonusKind; // w8
  EventUpValSetupInfo_o *v72; // x21
  UserServantEntity_o *v73; // x22
  int32_t ServantFilterEventId; // w23
  struct ListViewObject_o *viewObject; // x3
  UserServantEntity_o *v76; // x0
  EventUpValSetupInfo_o *v77; // x1
  int32_t v78; // w2
  int32_t bonusKind2; // w8
  int32_t v80; // w21
  int32_t v81; // w8
  int32_t bonusKindId; // w9
  int32_t v83; // w8
  int32_t v84; // w8
  UserServantEntity_o *userServantEntity; // x22
  EventUpValSetupInfo_o *v86; // x23
  bool EventUpVal_43458664; // w0
  int32_t bonusKind2Id; // w8
  Il2CppObject *Master_object; // x0
  __int64 v90; // x22
  __int64 v91; // x23
  EventCampaignMaster_o *v92; // x21
  bool IsEnableServant; // w0
  UserServantEntity_o *v94; // x21
  struct UserServantEntity_o *equipUserServantEntity; // x8
  int32_t atk; // w4
  int32_t v97; // w1
  int32_t v98; // w21
  int monitor_high; // w8
  int32_t v100; // w2
  int32_t v101; // w1
  UserServantEntity_o *v102; // x21
  struct UserServantEntity_o *v103; // x8
  int monitor; // w8
  int32_t lv; // w20
  Il2CppObject *v106; // x0
  __int64 v107; // x22
  __int64 v108; // x23
  EventCampaignMaster_o *v109; // x21
  __int64 v110; // x21
  __int64 v111; // x22
  struct ServantEntity_o *servantEntity; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v114; // x8
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v116; // x0
  intptr_t *v117; // x8
  System_Func_T__bool__o *v118; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+10h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+30h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+50h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v123; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v124; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v125; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v128; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v129; // [xsp+130h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v130; // [xsp+150h] [xbp-60h] BYREF
  int32_t tdMaxLv[2]; // [xsp+178h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16

  v4 = this;
  if ( (byte_4CC30C9 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C713B0(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Method_PartyServantListViewItem__SetSortValue_b__134_0__);
    sub_1C713B0(&Method_PartyServantListViewItem__SetSortValue_b__134_1__);
    sub_1C713B0(&PartyServantListViewItem_TypeInfo);
    sub_1C713B0(&PartyServantListViewManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C713B0(&TutorialFlag_TypeInfo);
    this = (PartyServantListViewItem_o *)sub_1C713B0(&UserServantGrandInfo_TypeInfo);
    byte_4CC30C9 = 1;
  }
  memset(&v130, 0, sizeof(v130));
  *(_QWORD *)tdMaxLv = 0;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1;
  if ( !sort )
    goto LABEL_282;
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
          v22 = sort->fields.manager;
        else
          v22 = 0;
      }
      else
      {
        v22 = 0;
      }
      setupInfo = v4->fields.setupInfo;
      if ( setupInfo )
      {
        if ( !setupInfo->fields.isQuestStart )
        {
LABEL_165:
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
                  goto LABEL_280;
              }
              v4->fields.bonusKind = 0;
              v4->fields.bonusKindId = bonusKind2Id;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (PartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventGroupMaster___);
              if ( !this )
                goto LABEL_282;
              EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                    (EventGroupMaster_o *)this,
                                    v4->fields.bonusKindId,
                                    0);
              this = (PartyServantListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                     (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                     0);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_280;
              if ( !EntitiesByGroupId )
                goto LABEL_282;
              if ( EntitiesByGroupId->fields._size < 2 )
                goto LABEL_280;
              v116 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_EventGroupEntity__bool__TypeInfo);
              v117 = &Method_PartyServantListViewItem__SetSortValue_b__134_1__;
              break;
            case 3:
              v4->fields.bonusKind = 3;
              v4->fields.bonusKindId = sort->fields.bonusKind2Id;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventCampaignMaster___);
              v91 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
              v90 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
              v92 = (EventCampaignMaster_o *)Master_object;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v134.fields.currentCryptoKey = v91;
              *(_QWORD *)&v134.fields.fakeValue = v90;
              this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                     v134,
                                                     0);
              if ( !v92 )
                goto LABEL_282;
              IsEnableServant = EventCampaignMaster__IsEnableServant(v92, (int32_t)this, v4->fields.bonusKindId, 0);
              v4->fields.isEventUpVal = IsEnableServant;
              if ( !IsEnableServant )
                goto LABEL_281;
              goto LABEL_6;
            case 4:
            case 5:
              if ( v4->fields.bonusKind == bonusKind2 )
              {
                v80 = sort->fields.bonusKind2Id;
                if ( v4->fields.bonusKindId == v80 )
                  goto LABEL_280;
              }
              else
              {
                v80 = sort->fields.bonusKind2Id;
              }
              v4->fields.bonusKind = bonusKind2;
              v4->fields.bonusKindId = v80;
              userServantEntity = v4->fields.userServantEntity;
              v86 = v4->fields.setupInfo;
              this = (PartyServantListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( !this || !userServantEntity )
                goto LABEL_282;
              viewObject = this->fields.viewObject;
              v76 = userServantEntity;
              v77 = v86;
              v78 = v80;
LABEL_180:
              EventUpVal_43458664 = UserServantEntity__getEventUpVal_43458664(v76, v77, v78, (int64_t)viewObject, 0);
              goto LABEL_261;
            case 7:
              if ( v4->fields.bonusKind == 7 )
              {
                bonusKindId = v4->fields.bonusKindId;
                v83 = sort->fields.bonusKind2Id;
                goto LABEL_185;
              }
              v83 = sort->fields.bonusKind2Id;
              goto LABEL_258;
            default:
              goto LABEL_6;
          }
LABEL_279:
          v118 = (System_Func_T__bool__o *)v116;
          System_Func_object__bool____ctor(v116, (Il2CppObject *)v4, *v117, 0);
          v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                      (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                      v118,
                                      (const MethodInfo_31341D4 *)Method_BasicHelper_Any_EventGroupEntity___);
          goto LABEL_280;
        }
      }
      else
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (PartyServantListViewItem_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_165;
        if ( !v22 )
          goto LABEL_282;
        if ( !BYTE5(v22[1].fields.dragParentObject) )
          goto LABEL_165;
      }
      bonusKind = sort->fields.bonusKind;
      switch ( bonusKind )
      {
        case 0:
          if ( v4->fields.bonusKind )
          {
            v81 = sort->fields.bonusKindId;
          }
          else
          {
            v81 = sort->fields.bonusKindId;
            if ( v4->fields.bonusKindId == v81 )
              goto LABEL_280;
          }
          v4->fields.bonusKind = 0;
          v4->fields.bonusKindId = v81;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          this = (PartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventGroupMaster___);
          if ( !this )
            goto LABEL_282;
          EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                (EventGroupMaster_o *)this,
                                v4->fields.bonusKindId,
                                0);
          this = (PartyServantListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                 0);
          if ( ((unsigned __int8)this & 1) != 0 )
            goto LABEL_280;
          if ( !EntitiesByGroupId )
            goto LABEL_282;
          if ( EntitiesByGroupId->fields._size < 2 )
            goto LABEL_280;
          v116 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_EventGroupEntity__bool__TypeInfo);
          v117 = &Method_PartyServantListViewItem__SetSortValue_b__134_0__;
          goto LABEL_279;
        case 3:
          if ( v4->fields.bonusKind == 3 )
          {
            v84 = sort->fields.bonusKindId;
            if ( v4->fields.bonusKindId == v84 )
              goto LABEL_280;
          }
          else
          {
            v84 = sort->fields.bonusKindId;
          }
          v4->fields.bonusKind = 3;
          v4->fields.bonusKindId = v84;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v106 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventCampaignMaster___);
          v108 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
          v107 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
          v109 = (EventCampaignMaster_o *)v106;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v135.fields.currentCryptoKey = v108;
          *(_QWORD *)&v135.fields.fakeValue = v107;
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                 v135,
                                                 0);
          if ( !v109 )
            goto LABEL_282;
          EventUpVal_43458664 = EventCampaignMaster__IsEnableServant(v109, (int32_t)this, v4->fields.bonusKindId, 0);
LABEL_261:
          v4->fields.isEventUpVal = EventUpVal_43458664;
          if ( !EventUpVal_43458664 )
            goto LABEL_281;
          break;
        case 4:
        case 5:
          if ( v4->fields.bonusKind == bonusKind )
            goto LABEL_280;
          v4->fields.bonusKind = bonusKind;
          v72 = v4->fields.setupInfo;
          v4->fields.bonusKindId = sort->fields.bonusKindId;
          if ( !v72 )
            goto LABEL_282;
          v73 = v4->fields.userServantEntity;
          ServantFilterEventId = EventUpValSetupInfo__get_ServantFilterEventId(v72, 0);
          this = (PartyServantListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !this || !v73 )
            goto LABEL_282;
          viewObject = this->fields.viewObject;
          v76 = v73;
          v77 = v72;
          v78 = ServantFilterEventId;
          goto LABEL_180;
        case 7:
          if ( v4->fields.bonusKind == 7 )
          {
            bonusKindId = v4->fields.bonusKindId;
            v83 = sort->fields.bonusKindId;
LABEL_185:
            if ( bonusKindId == v83 )
            {
LABEL_280:
              if ( !v4->fields.isEventUpVal )
                goto LABEL_281;
              break;
            }
          }
          else
          {
            v83 = sort->fields.bonusKindId;
          }
LABEL_258:
          v4->fields.bonusKind = 7;
          v4->fields.bonusKindId = v83;
          this = (PartyServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_282;
          this = (PartyServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantFilterMaster___);
          if ( !this )
            goto LABEL_282;
          EventUpVal_43458664 = ServantFilterMaster__IsEnableServant(
                                  (ServantFilterMaster_o *)this,
                                  v4->fields.svtId,
                                  v4->fields.bonusKindId,
                                  0);
          goto LABEL_261;
        default:
          break;
      }
    }
  }
LABEL_6:
  if ( !v4->fields.isBase )
  {
    v11 = v4->fields.baseItem;
    if ( !v11 || !v11->fields.isRestrictionGrandServant )
    {
      this = (PartyServantListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_282;
      if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0) )
      {
LABEL_281:
        LOBYTE(this) = 0;
        return (char)this;
      }
      this = (PartyServantListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_282;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0)
        || (((__int64 (__fastcall *)(PartyServantListViewItem_o *, ListViewSort_o *, const MethodInfo *))v4->klass->vtable._5_IsMatchFilter.methodPtr)(
              v4,
              sort,
              v4->klass->vtable._5_IsMatchFilter.method)
          & 1) == 0 )
      {
        goto LABEL_281;
      }
    }
  }
  v5 = PartyServantListViewItem_TypeInfo;
  if ( v4->fields.isSwapChoice )
    isChoice = !v4->fields.isChoice;
  else
    isChoice = v4->fields.isChoice;
  if ( !PartyServantListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo);
    v5 = PartyServantListViewItem_TypeInfo;
  }
  static_fields = v5->static_fields;
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
        if ( !v5->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v5);
          v5 = PartyServantListViewItem_TypeInfo;
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
        if ( !v5->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v5);
          v5 = PartyServantListViewItem_TypeInfo;
        }
        v4->fields.sortValue0B = v5->static_fields->PRIORITY_TOP;
      }
      this = (PartyServantListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_282;
      if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)this, 0) )
        goto LABEL_54;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( !TutorialFlag__Get_40699620(126, 0) )
        goto LABEL_54;
      v12 = PartyServantListViewItem_TypeInfo;
      if ( !PartyServantListViewItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo);
        v12 = PartyServantListViewItem_TypeInfo;
      }
      PRIORITY_LOWEST_HEROIN_LEAVE = v12->static_fields->PRIORITY_LOWEST_HEROIN_LEAVE;
      goto LABEL_53;
    }
    if ( questRestrictionInfo->fields.isAllOutBattle && sort->fields.isSmartSort )
    {
      if ( v4->fields._IsAllOutBattle_k__BackingField )
        goto LABEL_16;
      goto LABEL_30;
    }
  }
  if ( isChoice && sort->fields.isChoiceSort )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = PartyServantListViewItem_TypeInfo->static_fields;
    }
    PRIORITY_LOWEST_HEROIN_LEAVE = static_fields->PRIORITY_TOP;
  }
  else
  {
    if ( !v4->fields.isQuestRestriction )
      goto LABEL_54;
    PRIORITY_LOWEST_HEROIN_LEAVE = -1;
  }
LABEL_53:
  v4->fields.sortValue0 = PRIORITY_LOWEST_HEROIN_LEAVE;
LABEL_54:
  PartyServantListViewItem__InitAfterSecondSort(v4, (const MethodInfo *)sort);
  this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_282;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0);
  equipServantEntity = v4->fields.equipServantEntity;
  this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo3;
  if ( equipServantEntity )
  {
    cost = equipServantEntity->fields.cost;
    if ( !this )
      goto LABEL_282;
  }
  else
  {
    cost = 0;
    if ( !this )
      goto LABEL_282;
  }
  IconLabelInfo__Set_41192248((IconLabelInfo_o *)this, 7, v4->fields.cost, 0, cost, 0, 0, 0, 0, 0);
  this = (PartyServantListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v16 = v4->fields.userServantEntity;
      if ( !v16 )
        goto LABEL_282;
      v17 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
      *(_OWORD *)&v129.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v129.fields.fakeValue = v17;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v120 = v129;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(
                                             &v120,
                                             0);
      v18 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v18 )
        goto LABEL_282;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_282;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v18->fields.createdAt, 0, 0, 0, 0);
      goto LABEL_232;
    case 2:
      rarityId = v4->fields.rarityId;
      v56 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = rarityId;
      if ( !v56 )
        goto LABEL_282;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_282;
      IconLabelInfo__Set_41192248(
        (IconLabelInfo_o *)this,
        36,
        rarityId,
        v56->fields.exceedCount,
        0,
        0,
        0,
        v56->fields.lv,
        v4->fields.actualRarity,
        0);
      goto LABEL_238;
    case 3:
      goto LABEL_144;
    case 4:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_282;
      UserServantEntity__getTreasureDeviceInfo_43466304((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0);
      LODWORD(hp) = tdMaxLv[1];
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = tdMaxLv[1];
      if ( !this )
        goto LABEL_282;
      friendshipMax = tdMaxLv[0];
      v26 = 33;
      goto LABEL_231;
    case 5:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_282;
      this = (PartyServantListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0);
      v27 = (int)this;
      if ( !v4->fields._IsGrandSameServant_k__BackingField )
        goto LABEL_198;
      v28 = v4->fields.baseItem;
      if ( !v28 )
        goto LABEL_282;
      v29 = v28->fields.userServantEntity;
      if ( !v29 )
        goto LABEL_282;
      v30 = *(_OWORD *)&v29->fields.id.fields.fakeValue;
      *(_OWORD *)&v129.fields.currentCryptoKey = *(_OWORD *)&v29->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v129.fields.fakeValue = v30;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v128 = v129;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(
                                             &v128,
                                             0);
      v31 = v4->fields.userServantEntity;
      if ( !v31 )
        goto LABEL_282;
      v32 = *(_OWORD *)&v31->fields.id.fields.fakeValue;
      v33 = this;
      *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)&v31->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v127.fields.fakeValue = v32;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(
                                             &v127,
                                             0);
      if ( v33 != this )
        goto LABEL_85;
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_282;
      this = (PartyServantListViewItem_o *)UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_85:
        v34 = v4->fields.baseItem;
        if ( !v34 )
          goto LABEL_282;
        v35 = v34->fields.userServantEntity;
        if ( !v35 )
          goto LABEL_282;
        v36 = *(_OWORD *)&v35->fields.id.fields.fakeValue;
        *(_OWORD *)&v129.fields.currentCryptoKey = *(_OWORD *)&v35->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v129.fields.fakeValue = v36;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v126 = v129;
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(
                                               &v126,
                                               0);
        v37 = v4->fields.userServantEntity;
        if ( !v37 )
          goto LABEL_282;
        v38 = *(_OWORD *)&v37->fields.id.fields.fakeValue;
        *(_OWORD *)&v125.fields.currentCryptoKey = *(_OWORD *)&v37->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v125.fields.fakeValue = v38;
        if ( this != (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(
                                                     &v125,
                                                     0) )
        {
          this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
          if ( !this )
            goto LABEL_282;
          if ( UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0) )
          {
            this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
            if ( !this )
              goto LABEL_282;
            this = (PartyServantListViewItem_o *)UserServantEntity__get_GrandInfo((UserServantEntity_o *)this, 0);
            if ( !this )
              goto LABEL_282;
            v27 -= UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)this, 0);
          }
        }
      }
      else
      {
        v94 = v4->fields.userServantEntity;
        if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
        this = (PartyServantListViewItem_o *)UserServantGrandInfo__Make(v94, 1, 0);
        if ( !this )
          goto LABEL_282;
        v27 += UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)this, 0);
      }
LABEL_198:
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
            goto LABEL_282;
          v97 = 46;
LABEL_219:
          IconLabelInfo__Set_41192248((IconLabelInfo_o *)this, v97, hp, v27, atk, 0, 0, 0, 0, 0);
LABEL_232:
          this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
          if ( this )
          {
            iconLabelInfo2 = v4->fields.iconLabelInfo2;
LABEL_234:
            lv = *(_DWORD *)&this->fields.isEventUpVal;
LABEL_235:
            this = (PartyServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
            if ( iconLabelInfo2 )
            {
              v67 = (int)this;
              v68 = iconLabelInfo2;
              v69 = lv;
              goto LABEL_237;
            }
          }
LABEL_282:
          sub_1C71608(this, sort);
        }
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = hp;
        if ( !this )
          goto LABEL_282;
        v26 = 3;
        goto LABEL_230;
      }
      this = (PartyServantListViewItem_o *)v4->fields.equipServantEntityList;
      if ( !this )
        goto LABEL_282;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v129,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v98 = 0;
      v130 = *(System_Collections_Generic_List_Enumerator_object__o *)&v129.fields.currentCryptoKey;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v130,
                (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
      {
        if ( v130.fields._current )
        {
          monitor_high = HIDWORD(v130.fields._current[16].monitor);
          v98 += monitor_high;
          v4->fields.sortValue1 = monitor_high + v4->fields.hp;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v130,
        (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_282;
      v100 = v4->fields.hp;
      v101 = 46;
      break;
    case 6:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_282;
      this = (PartyServantListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0);
      v27 = (int)this;
      if ( !v4->fields._IsGrandSameServant_k__BackingField )
        goto LABEL_215;
      v44 = v4->fields.baseItem;
      if ( !v44 )
        goto LABEL_282;
      v45 = v44->fields.userServantEntity;
      if ( !v45 )
        goto LABEL_282;
      v46 = *(_OWORD *)&v45->fields.id.fields.fakeValue;
      *(_OWORD *)&v129.fields.currentCryptoKey = *(_OWORD *)&v45->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v129.fields.fakeValue = v46;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v124 = v129;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(
                                             &v124,
                                             0);
      v47 = v4->fields.userServantEntity;
      if ( !v47 )
        goto LABEL_282;
      v48 = *(_OWORD *)&v47->fields.id.fields.fakeValue;
      v49 = this;
      *(_OWORD *)&v123.fields.currentCryptoKey = *(_OWORD *)&v47->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v123.fields.fakeValue = v48;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(
                                             &v123,
                                             0);
      if ( v49 != this )
        goto LABEL_112;
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_282;
      this = (PartyServantListViewItem_o *)UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_112:
        v50 = v4->fields.baseItem;
        if ( !v50 )
          goto LABEL_282;
        v51 = v50->fields.userServantEntity;
        if ( !v51 )
          goto LABEL_282;
        v52 = *(_OWORD *)&v51->fields.id.fields.fakeValue;
        *(_OWORD *)&v129.fields.currentCryptoKey = *(_OWORD *)&v51->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v129.fields.fakeValue = v52;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v122 = v129;
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(
                                               &v122,
                                               0);
        v53 = v4->fields.userServantEntity;
        if ( !v53 )
          goto LABEL_282;
        v54 = *(_OWORD *)&v53->fields.id.fields.fakeValue;
        *(_OWORD *)&v121.fields.currentCryptoKey = *(_OWORD *)&v53->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v121.fields.fakeValue = v54;
        if ( this != (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(
                                                     &v121,
                                                     0) )
        {
          this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
          if ( !this )
            goto LABEL_282;
          if ( UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0) )
          {
            this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
            if ( !this )
              goto LABEL_282;
            this = (PartyServantListViewItem_o *)UserServantEntity__get_GrandInfo((UserServantEntity_o *)this, 0);
            if ( !this )
              goto LABEL_282;
            v27 -= UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0);
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
          goto LABEL_282;
        v27 += UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0);
      }
LABEL_215:
      if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v4->fields.equipServantEntityList, 0) )
      {
        v103 = v4->fields.equipUserServantEntity;
        hp = v4->fields.atk;
        if ( v103 )
        {
          atk = v103->fields.atk;
          this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = atk + (int)hp;
          if ( !this )
            goto LABEL_282;
          v97 = 47;
          goto LABEL_219;
        }
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = hp;
        if ( !this )
          goto LABEL_282;
        v26 = 5;
LABEL_230:
        friendshipMax = v27;
LABEL_231:
        IconLabelInfo__Set_41192248((IconLabelInfo_o *)this, v26, hp, friendshipMax, 0, 0, 0, 0, 0, 0);
        goto LABEL_232;
      }
      this = (PartyServantListViewItem_o *)v4->fields.equipServantEntityList;
      if ( !this )
        goto LABEL_282;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v129,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v98 = 0;
      v130 = *(System_Collections_Generic_List_Enumerator_object__o *)&v129.fields.currentCryptoKey;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v130,
                (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
      {
        if ( v130.fields._current )
        {
          monitor = (int)v130.fields._current[16].monitor;
          v98 += monitor;
          v4->fields.sortValue1 = monitor + v4->fields.atk;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v130,
        (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_282;
      v100 = v4->fields.atk;
      v101 = 47;
      break;
    case 7:
      v57 = v4->fields.cost;
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      goto LABEL_133;
    case 8:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      v57 = -v4->fields.priority;
LABEL_133:
      v4->fields.sortValue1 = v57;
      if ( !this )
        goto LABEL_282;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      goto LABEL_234;
    case 0xA:
      v62 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
      v63 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v132.fields.currentCryptoKey = v62;
      *(_QWORD *)&v132.fields.fakeValue = v63;
      v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v132, 0);
      iconLabelInfo1 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v66 = v64;
      friendship = v4->fields.friendship;
      v4->fields.sortValue1 = v66;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                             friendship,
                                             0);
      if ( !iconLabelInfo1 )
        goto LABEL_282;
      friendshipMax = v4->fields.friendshipMax;
      LODWORD(hp) = (_DWORD)this;
      v26 = 32;
      this = iconLabelInfo1;
      goto LABEL_231;
    case 0xE:
      this = (PartyServantListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_254;
      v59 = sort->fields.manager;
      if ( v59
        && (v60 = PartyServantListViewManager_TypeInfo->_2.naturalAligment,
            v59->klass->_2.naturalAligment >= (unsigned int)v60) )
      {
        if ( (PartyServantListViewManager_c *)v59->klass->_2.typeHierarchy[v60 - 1] == PartyServantListViewManager_TypeInfo )
          v61 = sort->fields.manager;
        else
          v61 = 0;
      }
      else
      {
        v61 = 0;
      }
      v111 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v110 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v136.fields.currentCryptoKey = v111;
      *(_QWORD *)&v136.fields.fakeValue = v110;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v136, 0);
      if ( !v61 )
        goto LABEL_282;
      this = (PartyServantListViewItem_o *)PartyServantListViewManager__GetAmountSortValue(
                                             (PartyServantListViewManager_o *)v61,
                                             (int32_t)this,
                                             0);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_254:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_282;
      collectionNo = servantEntity->fields.collectionNo;
      v114 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarityId << 32) + ((_QWORD)this << 48))
                            | collectionNo;
      if ( !v114 )
        goto LABEL_282;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      lv = v114->fields.lv;
      this = (PartyServantListViewItem_o *)v114;
      goto LABEL_235;
    case 0xF:
      hp = v4->fields.hpReinforceValue;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_282;
      friendshipMax = v4->fields.nowMaxHpReinforceValue;
      v26 = 44;
      goto LABEL_231;
    case 0x10:
      hp = v4->fields.atkReinforceValue;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_282;
      friendshipMax = v4->fields.nowMaxAtkReinforceValue;
      v26 = 45;
      goto LABEL_231;
    case 0x19:
      v39 = v4->fields.questRestrictionInfo;
      if ( !v39 || !v39->fields.isFatigure )
        goto LABEL_143;
      fatigureTime = v4->fields.fatigureTime;
      goto LABEL_99;
    case 0x1C:
      if ( v4->fields._IsDispSvtPoint_k__BackingField )
      {
        fatigureTime = v4->fields._SvtPoint_k__BackingField;
LABEL_99:
        this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
        v4->fields.sortValue1 = fatigureTime;
        if ( !this )
          goto LABEL_282;
        v40 = *(int *)&this->fields.isEventUpVal;
        priority = v4->fields.priority;
        v42 = v4->fields.servantEntity;
        v4->fields.sortValue1B = v40;
        v4->fields.sortValue2 = priority;
        if ( !v42 )
          goto LABEL_282;
        v43 = v4->fields.iconLabelInfo1;
        v4->fields.sortValue2B = v40
                               | ((unsigned __int64)(unsigned int)v4->fields.rarityId << 48)
                               | ((__int64)v42->fields.collectionNo << 16);
      }
      else
      {
LABEL_143:
        sort->fields.sortKind = 3;
LABEL_144:
        this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_282;
        v40 = *(int *)&this->fields.isEventUpVal;
        v43 = v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = v40;
      }
      this = (PartyServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0);
      if ( !v43 )
        goto LABEL_282;
      v67 = (int)this;
      v68 = v43;
      v69 = v40;
LABEL_237:
      IconLabelInfo__Set_41192248(v68, 2, v69, v67, 0, 0, 0, 0, 0, 0);
LABEL_238:
      LOBYTE(this) = 1;
      return (char)this;
    default:
      return (char)this;
  }
  IconLabelInfo__Set_41192248((IconLabelInfo_o *)this, v101, v100, v27, v98, 0, 0, 0, 0, 0);
  goto LABEL_232;
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


bool PartyServantListViewItem___SetSortValue_b__134_0(
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

  if ( (byte_4CC30D1 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CC30D1 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v7;
  *(_QWORD *)&v15.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v15, 0);
  if ( !entity || !v8 )
    goto LABEL_18;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Instance, entity->fields.eventId, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !userServantEntity )
LABEL_18:
    sub_1C71608(Instance, v10);
  return UserServantEntity__getEventUpVal_43458664(userServantEntity, setupInfo, eventId, (int64_t)Instance[7].klass, 0);
}


bool PartyServantListViewItem___SetSortValue_b__134_1(
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

  if ( (byte_4CC30D2 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CC30D2 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v7;
  *(_QWORD *)&v15.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v15, 0);
  if ( !entity || !v8 )
    goto LABEL_18;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Instance, entity->fields.eventId, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !userServantEntity )
LABEL_18:
    sub_1C71608(Instance, v10);
  return UserServantEntity__getEventUpVal_43458664(userServantEntity, setupInfo, eventId, (int64_t)Instance[7].klass, 0);
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


bool PartyServantListViewItem__get_IsSelectEmpty(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSelectEmpty;
}


bool PartyServantListViewItem__get_IsSelectLeader(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isSelectLeader;
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


System_String_o *PartyServantListViewItem__get_NameText(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4CC30CD & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&StringLiteral_19128/*"error"*/);
    byte_4CC30CD = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19128/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v9, 0);
  }
  else
  {
    v7 = -1;
  }
  return ServantEntity__getName(servantEntity, v7, -1, 0, 0);
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

  if ( (byte_4CC30CC & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC30CC = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v6, 0);
}


int32_t PartyServantListViewItem__get_SvtPoint(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._SvtPoint_k__BackingField;
}


int32_t PartyServantListViewItem__get_SvtPointRank(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._SvtPointRank_k__BackingField;
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
    sub_1C71608(this, method);
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
  sub_1C71354(
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


void PartyServantListViewItem__set_TimesToRestart(
        PartyServantListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TimesToRestart_k__BackingField = value;
}