void __fastcall PartyServantListViewItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct PartyServantListViewItem_StaticFields *static_fields; // x8

  if ( (byte_4B1211E & 1) == 0 )
  {
    sub_1BCA7E0(&PartyServantListViewItem_TypeInfo, v1, v2);
    byte_4B1211E = 1;
  }
  static_fields = PartyServantListViewItem_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->PRIORITY_NORMAL = xmmword_BD28D0;
  *(_OWORD *)&static_fields->PRIORITY_LOWEST = xmmword_BD2FA0;
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
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x1
  __int64 v83; // x2
  IconLabelInfo_o *v84; // x20
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  IconLabelInfo_o *v94; // x20
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  IconLabelInfo_o *v104; // x20
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t Instance; // x0
  unsigned __int64 partyIndex; // x1
  struct PartyOrganizationListViewItem_o *Member; // x0
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  Il2CppObject *MasterData_object; // x0
  __int64 v140; // x1
  __int64 v141; // x21
  __int64 v142; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v143; // x20
  Il2CppObject *v144; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // x29
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  Il2CppObject *v152; // x20
  struct UserServantEntity_o *v153; // x8
  int32_t v154; // w21
  ServantLimitEntity_o *v155; // x20
  UserServantEntity_o *v156; // x8
  __int128 v157; // q1
  UserServantCollectionMaster_o *v158; // x21
  int64_t v159; // x28
  UserServantCollectionEntity_o *v160; // x21
  int64_t v161; // x2
  int32_t v162; // w3
  System_String_o *v163; // x4
  BattleSetupInfo_o *v164; // x5
  FollowerInfo_o *v165; // x6
  PartyListViewItem_o *v166; // x7
  int64_t v167; // x2
  int32_t v168; // w3
  System_String_o *v169; // x4
  BattleSetupInfo_o *v170; // x5
  FollowerInfo_o *v171; // x6
  PartyListViewItem_o *v172; // x7
  int64_t v173; // x2
  int32_t v174; // w3
  System_String_o *v175; // x4
  BattleSetupInfo_o *v176; // x5
  FollowerInfo_o *v177; // x6
  PartyListViewItem_o *v178; // x7
  int32_t i; // w20
  BalanceConfig_c *v180; // x0
  PartyOrganizationListViewItem_o *v181; // x21
  UserServantEntity_o *v182; // x8
  __int128 v183; // q0
  struct UserServantEntity_o *v184; // x8
  __int128 v185; // q0
  int64_t v186; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v187; // x8
  __int64 v188; // x23
  __int64 v189; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  int v191; // w28
  struct ServantEntity_o *v192; // x8
  __int64 v193; // x21
  __int64 v194; // x23
  int32_t v195; // w21
  __int64 v196; // x1
  int32_t v197; // w28
  int32_t IncludedRestrictionIds; // w0
  System_Int64_array *EquipList; // x0
  const MethodInfo *v200; // x2
  int32_t cost; // w20
  UserServantEntity_o *v202; // x8
  bool IsChoice; // w0
  UserServantEntity_o *v204; // x8
  __int128 v205; // q0
  __int64 v206; // x20
  bool v207; // zf
  bool v208; // w8
  UserServantEntity_o *v209; // x8
  const MethodInfo *v210; // x1
  UserServantEntity_o *v211; // x8
  UserServantEntity_o *v212; // x8
  bool IsUniqueIndividualityRestriction_40942144; // w0
  const MethodInfo *v214; // x1
  struct QuestRestrictionInfo_o *v215; // x8
  UserEventServantFatigueMaster_o *v216; // x21
  int32_t eventId; // w28
  __int64 v218; // x23
  __int64 v219; // x29
  int64_t v220; // x20
  bool AllOutBattleAlreadyUsed; // w0
  __int64 v222; // x1
  struct QuestRestrictionInfo_o *v223; // x8
  __int64 v224; // x1
  Il2CppObject *Master_object; // x20
  UserServantEntity_o *v226; // x8
  UserEventDataLostEntity_o *v227; // x20
  __int64 v228; // x21
  __int64 v229; // x23
  UserServantEntity_o *v230; // x8
  char v231; // w20
  UserEventDataLostEntity_o *v232; // x21
  __int64 v233; // x23
  __int64 v234; // x28
  int32_t v235; // w28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr10_16
  __int64 v237; // x2
  __int64 v238; // x3
  UserServantEntity_o *v239; // x8
  int64_t v240; // x20
  __int64 v241; // x21
  __int64 v242; // x23
  int32_t v243; // w21
  int32_t Rarity; // w29
  const MethodInfo *v245; // x7
  System_String_o **p_skillName; // x1
  int *p_actMaxRarity; // x2
  int32_t v248; // w3
  int32_t v249; // w4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v250; // kr20_16
  UserServantEntity_o *v251; // x8
  int64_t v252; // x20
  __int64 v253; // x21
  __int64 v254; // x23
  int32_t v255; // w21
  int32_t v256; // w27
  struct QuestRestrictionInfo_o *v257; // x8
  EventServantPointRankMaster_o *v258; // x20
  UserServantEntity_o *v259; // x8
  __int128 v260; // q0
  UserEventServantPointMaster_o *v261; // x21
  int64_t v262; // x26
  int32_t *p_SvtPoint_k__BackingField; // x22
  int32_t v264; // w21
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  System_Collections_Generic_List_int__o *v267; // x26
  PartyListViewItem_array *v268; // x9
  __int64 v269; // x8
  unsigned __int64 v270; // x23
  int32_t v271; // w25
  PartyListViewItem_o *v272; // x20
  int32_t j; // w27
  PartyOrganizationListViewItem_o *v274; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v275; // kr30_16
  struct System_Int32_array *items; // x8
  _QWORD *v277; // x9
  __int64 size; // x10
  UserServantEntity_o *v279; // x28
  struct UserServantEntity_o *v280; // x8
  __int128 v281; // q0
  System_Int64_array *v282; // x0
  const MethodInfo *v283; // x2
  __int64 v284; // x20
  __int64 v285; // x21
  System_Collections_Generic_List_T__o *v286; // x25
  Il2CppObject *v287; // x20
  System_Collections_Generic_List_object__o *v288; // x21
  Il2CppObject *v289; // x20
  _BOOL8 v290; // x0
  __int64 v291; // x1
  EventCampaignEntity_o *current; // x21
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x26
  __int64 v294; // x27
  __int64 v295; // x28
  int32_t v296; // w1
  int32_t v297; // w26
  int32_t FriendshipBonusValue; // w0
  int32_t calcType; // w3
  int32_t v300; // w2
  const MethodInfo_38FB32C *v301; // x5
  __int64 v302; // x0
  __int64 v303; // x1
  struct System_Object_array *v304; // x8
  _QWORD *v305; // x9
  __int64 v306; // x10
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v307; // x0
  int64_t v308; // x2
  int32_t v309; // w3
  System_String_o *v310; // x4
  BattleSetupInfo_o *v311; // x5
  FollowerInfo_o *v312; // x6
  PartyListViewItem_o *v313; // x7
  UserServantEntity_o *v314; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v316; // x2
  int32_t v317; // w3
  System_String_o *v318; // x4
  BattleSetupInfo_o *v319; // x5
  FollowerInfo_o *v320; // x6
  PartyListViewItem_o *v321; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v323; // x2
  int32_t v324; // w3
  System_String_o *v325; // x4
  BattleSetupInfo_o *v326; // x5
  FollowerInfo_o *v327; // x6
  PartyListViewItem_o *v328; // x7
  BalanceConfig_c *v329; // x8
  int v330; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct PartyOrganizationListViewItem_o **p_baseItem; // [xsp+8h] [xbp-1D8h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+10h] [xbp-1D0h]
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+18h] [xbp-1C8h]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+30h] [xbp-1B0h]
  UserServantEntity_o **p_userServantEntity; // [xsp+38h] [xbp-1A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v339; // [xsp+40h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v340; // [xsp+60h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v341; // [xsp+80h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v342; // [xsp+A0h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v343; // [xsp+C0h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v344; // [xsp+E0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o item; // [xsp+100h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v346; // [xsp+120h] [xbp-C0h] BYREF
  UserEventServantPointEntity_o *v347; // [xsp+140h] [xbp-A0h] BYREF
  int32_t actMaxRarity; // [xsp+14Ch] [xbp-94h] BYREF
  System_String_o *skillName; // [xsp+150h] [xbp-90h] BYREF
  int v350; // [xsp+15Ch] [xbp-84h] BYREF
  __int64 v351; // [xsp+160h] [xbp-80h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+168h] [xbp-78h] BYREF
  int64_t recoverAt; // [xsp+170h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+17Ch] [xbp-64h] BYREF
  System_ValueTuple_int__int__Int32Enum__o v355; // 0:x0.12
  System_ValueTuple_int__int__Int32Enum__o v356; // 0:x1.12
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

  if ( (byte_4B12112 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&index, userServantEntity);
    sub_1BCA7E0(&CommonRestrictionMaster_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventQuestMaster___, v20, v21);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, v22, v23);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v24, v25);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v26, v27);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v28, v29);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v30, v31);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v32, v33);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v34, v35);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v36, v37);
    sub_1BCA7E0(&DataManager_TypeInfo, v38, v39);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v40, v41);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v42, v43);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v44, v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v46, v47);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v48, v49);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v50, v51);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v52, v53);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v54, v55);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__,
      v56,
      v57);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v58, v59);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v60, v61);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__,
      v62,
      v63);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v64, v65);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__,
      v66,
      v67);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v68, v69);
    sub_1BCA7E0(&System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo, v70, v71);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v72, v73);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v74, v75);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v76, v77);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v78, v79);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v80, v81);
    sub_1BCA7E0(&Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__, v82, v83);
    byte_4B12112 = 1;
  }
  friendshipRank = 0;
  entity = 0LL;
  recoverAt = 0LL;
  v351 = 0LL;
  v350 = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v347 = 0LL;
  memset(&v346, 0, sizeof(v346));
  v84 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, *(_QWORD *)&index, userServantEntity, baseDeckItemList);
  IconLabelInfo___ctor(v84, 0LL);
  this->fields.iconLabelInfo1 = v84;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v84, v85, v86, v87, v88, v89, v90);
  v94 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v91, v92, v93);
  IconLabelInfo___ctor(v94, 0LL);
  this->fields.iconLabelInfo2 = v94;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v94, v95, v96, v97, v98, v99, v100);
  v104 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v101, v102, v103);
  IconLabelInfo___ctor(v104, 0LL);
  this->fields.iconLabelInfo3 = v104;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.iconLabelInfo3,
    (int64_t)v104,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_226;
  Member = PartyListViewItem__GetMember(partyItem, num, 0LL);
  this->fields.baseItem = Member;
  p_baseItem = &this->fields.baseItem;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseItem, (int64_t)Member, v114, v115, v116, v117, v118, v119);
  baseItem = this->fields.baseItem;
  this->fields._PartyListViewItemMenuKind_k__BackingField = partyItem->fields.menuKind;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_226;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0LL;
  this->fields.userServantEntity = userServantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
    (int64_t)userServantEntity,
    v120,
    v121,
    v122,
    v123,
    v124,
    v125);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.setupInfo,
    (int64_t)setupInfo,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo,
    (int64_t)questRestrictionInfo,
    v133,
    v134,
    v135,
    v136,
    v137,
    v138);
  p_userServantEntity = &this->fields.userServantEntity;
  if ( !this->fields.userServantEntity )
    goto LABEL_226;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_226;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v142 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v141 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v143 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v140);
  *(_QWORD *)&v357.fields.currentCryptoKey = v142;
  *(_QWORD *)&v357.fields.fakeValue = v141;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v357, 0LL);
  if ( !v143 )
    goto LABEL_226;
  v144 = DataMasterBase_object__object__int___GetEntity(
           v143,
           Instance,
           (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v144;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantEntity,
    (int64_t)v144,
    v146,
    v147,
    v148,
    v149,
    v150,
    v151);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_226;
  v152 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.svtId, 0LL);
  v153 = this->fields.userServantEntity;
  if ( !v153 )
    goto LABEL_226;
  v154 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v153->fields.limitCount, 0LL);
  if ( !v152 )
    goto LABEL_226;
  v155 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v152, v154, Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_226;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v156 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_226;
  v157 = *(_OWORD *)&v156->fields.userId.fields.fakeValue;
  v158 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&item.fields.currentCryptoKey = *(_OWORD *)&v156->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&item.fields.fakeValue = v157;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, partyIndex);
  v344 = item;
  v159 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v344, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.svtId, 0LL);
  if ( !v158 )
    goto LABEL_226;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v158, v159, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_226;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !v155 )
    goto LABEL_226;
  v160 = (UserServantCollectionEntity_o *)Instance;
  Instance = (int64_t)userServantEntity;
  this->fields.rarityId = v155->fields.rarity;
  if ( !userServantEntity )
    goto LABEL_226;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  Instance = UserServantEntity__getFrameType(userServantEntity, 0LL);
  this->fields.frameType = Instance;
  if ( !v160 )
    goto LABEL_226;
  UserServantCollectionEntity__getFriendShipRankInfo(v160, &friendshipRank, &this->fields.friendshipMax, 0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0LL);
  this->fields.isBase = 0;
  *(_WORD *)&this->fields.isCostOver = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.equipUserServantEntity,
    0LL,
    v161,
    v162,
    v163,
    v164,
    v165,
    v166);
  this->fields.equipServantEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipServantEntity, 0LL, v167, v168, v169, v170, v171, v172);
  this->fields.equipIdList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipIdList, 0LL, v173, v174, v175, v176, v177, v178);
  for ( i = 0; ; ++i )
  {
    v180 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, partyIndex);
      v180 = BalanceConfig_TypeInfo;
    }
    if ( i >= v180->static_fields->DeckMemberMax )
      break;
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, i, 0LL);
    if ( !Instance )
      goto LABEL_226;
    v181 = (PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 112) )
    {
      v182 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_226;
      v183 = *(_OWORD *)&v182->fields.id.fields.fakeValue;
      *(_OWORD *)&item.fields.currentCryptoKey = *(_OWORD *)&v182->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&item.fields.fakeValue = v183;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, partyIndex);
      v343 = item;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v343, 0LL);
      v184 = v181->fields.userServantEntity;
      if ( !v184 )
        goto LABEL_226;
      v185 = *(_OWORD *)&v184->fields.id.fields.fakeValue;
      v186 = Instance;
      *(_OWORD *)&v342.fields.currentCryptoKey = *(_OWORD *)&v184->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v342.fields.fakeValue = v185;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v342, 0LL);
      if ( v186 == Instance )
      {
        this->fields.isSame = 0;
        this->fields.isBase = num == i;
        this->fields.partyIndex = i;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v181, 0LL);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v200);
        break;
      }
      if ( num != i )
      {
        v187 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_226;
        v188 = *(_QWORD *)&v187[2].fields.currentCryptoKey;
        v189 = *(_QWORD *)&v187[2].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, partyIndex);
        *(_QWORD *)&v358.fields.currentCryptoKey = v188;
        *(_QWORD *)&v358.fields.fakeValue = v189;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v358, 0LL);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v181->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_226;
        v191 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(servantEntity[2], 0LL);
        if ( v191 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else if ( this->fields.commonRestrictionId == -1 )
        {
          v192 = v181->fields.servantEntity;
          if ( !v192 )
            goto LABEL_226;
          v194 = *(_QWORD *)&v192->fields.baseSvtId.fields.currentCryptoKey;
          v193 = *(_QWORD *)&v192->fields.baseSvtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, partyIndex);
          *(_QWORD *)&v359.fields.currentCryptoKey = v194;
          *(_QWORD *)&v359.fields.fakeValue = v193;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v359, 0LL);
          if ( !*p_servantEntity )
            goto LABEL_226;
          v195 = Instance;
          v197 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_servantEntity)[2], 0LL);
          if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo, v196);
          IncludedRestrictionIds = CommonRestrictionMaster__GetIncludedRestrictionIds(v195, v197, 0LL);
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
      goto LABEL_226;
    cost = partyItem->fields.cost;
    Instance = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL);
    if ( !*p_servantEntity )
      goto LABEL_226;
    this->fields.isCostOver = cost - (int)Instance + (*p_servantEntity)[9].fields.fakeValue > partyItem->fields.maxCost;
  }
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_226;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v202 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v202 )
    goto LABEL_226;
  IsChoice = UserServantEntity__IsChoice(v202, 0LL);
  *(_WORD *)&this->fields.isSwapLock = 0;
  *(_WORD *)&this->fields.isLockMode = 0;
  this->fields.isChoice = IsChoice;
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_226;
  v204 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_226;
  v205 = *(_OWORD *)&v204->fields.id.fields.fakeValue;
  v206 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&item.fields.currentCryptoKey = *(_OWORD *)&v204->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&item.fields.fakeValue = v205;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, partyIndex);
  v341 = item;
  v207 = v206 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v341, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  v208 = v207;
  this->fields.isPush = v208;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_226;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v209 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v209 )
    goto LABEL_226;
  this->fields.isLeave = UserServantEntity__IsLeave(v209, 0LL);
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v210);
  v211 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v211 )
    goto LABEL_226;
  Instance = UserServantEntity__getUniqueSvtRestriction_40941764(
               v211,
               this->fields.questRestrictionInfo,
               partyItem,
               num,
               this->fields.partyIndex,
               0LL);
  v212 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v212 )
    goto LABEL_226;
  IsUniqueIndividualityRestriction_40942144 = UserServantEntity__IsUniqueIndividualityRestriction_40942144(
                                                v212,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                this->fields.partyIndex,
                                                0LL);
  this->fields.isFatigureRecover = 0;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_40942144;
  this->fields.fatigureTime = -1LL;
  v215 = this->fields.questRestrictionInfo;
  if ( v215 && v215->fields.isFatigure )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_226;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !*p_questRestrictionInfo )
      goto LABEL_226;
    v216 = (UserEventServantFatigueMaster_o *)Instance;
    eventId = (*p_questRestrictionInfo)->fields.eventId;
    v219 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v218 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, partyIndex);
    *(_QWORD *)&v360.fields.currentCryptoKey = v219;
    *(_QWORD *)&v360.fields.fakeValue = v218;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v360, 0LL);
    if ( !v216 )
      goto LABEL_226;
    if ( UserEventServantFatigueMaster__GetFatigueInfo(
           v216,
           &recoverAt,
           &this->fields.isFatigureRecover,
           eventId,
           Instance,
           0LL) )
    {
      v220 = recoverAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v214);
      if ( v220 > NetworkManager__getTime(0LL) )
        this->fields.fatigureTime = recoverAt;
    }
  }
  AllOutBattleAlreadyUsed = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v214);
  v223 = this->fields.questRestrictionInfo;
  this->fields._IsAllOutBattle_k__BackingField = AllOutBattleAlreadyUsed;
  if ( v223 && v223->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v222);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v224);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !*p_questRestrictionInfo || !Master_object )
      goto LABEL_226;
    Instance = UserEventDataLostMaster__TryGetEntity(
                 (UserEventDataLostMaster_o *)Master_object,
                 &entity,
                 Instance,
                 (*p_questRestrictionInfo)->fields.dataLostBattleId,
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      v226 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_226;
      v227 = entity;
      v229 = *(_QWORD *)&v226->fields.svtId.fields.currentCryptoKey;
      v228 = *(_QWORD *)&v226->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, partyIndex);
      *(_QWORD *)&v361.fields.currentCryptoKey = v229;
      *(_QWORD *)&v361.fields.fakeValue = v228;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v361, 0LL);
      if ( !v227 )
        goto LABEL_226;
      Instance = UserEventDataLostEntity__IsRestart(v227, Instance, 0LL);
      v230 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_226;
      v231 = Instance;
      v232 = entity;
      v234 = *(_QWORD *)&v230->fields.svtId.fields.currentCryptoKey;
      v233 = *(_QWORD *)&v230->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, partyIndex);
      *(_QWORD *)&v362.fields.currentCryptoKey = v234;
      *(_QWORD *)&v362.fields.fakeValue = v233;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v362, 0LL);
      if ( !v232 )
        goto LABEL_226;
      if ( (v231 & 1) != 0 )
      {
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(v232, Instance, 0LL);
      }
      else if ( UserEventDataLostEntity__IsDataLost(v232, Instance, 0LL) )
      {
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
    v235 = (*p_questRestrictionInfo)->fields.eventId;
  else
    v235 = -1;
  if ( !this->fields.isBase )
  {
    LODWORD(partyIndex) = this->fields.partyIndex;
    if ( (partyIndex & 0x80000000) == 0 )
      goto LABEL_118;
  }
  Instance = (int64_t)PartyListViewItem__GetMember(partyItem, num, 0LL);
  if ( !Instance )
    goto LABEL_226;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      *(_QWORD *)&EquipSvtId.fields.fakeValue);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(EquipSvtId, 0LL) >= 1 )
  {
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v239 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_226;
    v240 = Instance;
    v242 = *(_QWORD *)&v239->fields.svtId.fields.currentCryptoKey;
    v241 = *(_QWORD *)&v239->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, partyIndex);
    *(_QWORD *)&v363.fields.currentCryptoKey = v242;
    *(_QWORD *)&v363.fields.fakeValue = v241;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v363, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_226;
    v243 = Instance;
    Rarity = UserServantEntity__getRarity(*p_userServantEntity, 0LL);
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, num, 0LL);
    if ( !Instance )
      goto LABEL_226;
    v364 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v364, 0LL);
    if ( !v240 )
      goto LABEL_226;
    p_skillName = (System_String_o **)&v351;
    p_actMaxRarity = &v350;
    v248 = v243;
    v249 = Rarity;
LABEL_129:
    this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                     (PartyOrganizationUtility_o *)Instance,
                                     p_skillName,
                                     p_actMaxRarity,
                                     v248,
                                     v249,
                                     Instance,
                                     v235,
                                     v245);
    goto LABEL_130;
  }
  partyIndex = (unsigned int)this->fields.partyIndex;
  if ( (partyIndex & 0x80000000) == 0 )
  {
LABEL_118:
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, partyIndex, 0LL);
    if ( !Instance )
      goto LABEL_226;
    v250 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        *(_QWORD *)&v250.fields.fakeValue);
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v250, 0LL) < 1 )
      goto LABEL_130;
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v251 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_226;
    v252 = Instance;
    v254 = *(_QWORD *)&v251->fields.svtId.fields.currentCryptoKey;
    v253 = *(_QWORD *)&v251->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, partyIndex);
    *(_QWORD *)&v365.fields.currentCryptoKey = v254;
    *(_QWORD *)&v365.fields.fakeValue = v253;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v365, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_226;
    v255 = Instance;
    v256 = UserServantEntity__getRarity(*p_userServantEntity, 0LL);
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, this->fields.partyIndex, 0LL);
    if ( !Instance )
      goto LABEL_226;
    v366 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v366, 0LL);
    if ( !v252 )
      goto LABEL_226;
    p_skillName = &skillName;
    p_actMaxRarity = &actMaxRarity;
    v248 = v255;
    v249 = v256;
    goto LABEL_129;
  }
LABEL_130:
  v257 = this->fields.questRestrictionInfo;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  this->fields._SvtPointRank_k__BackingField = 0;
  this->fields._SvtPoint_k__BackingField = 0;
  if ( !v257 )
    goto LABEL_148;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, partyIndex);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
    goto LABEL_226;
  v258 = (EventServantPointRankMaster_o *)Instance;
  if ( !EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v235, 0LL) )
    goto LABEL_148;
  this->fields._IsDispSvtPoint_k__BackingField = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, partyIndex);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v259 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_226;
  v260 = *(_OWORD *)&v259->fields.userId.fields.fakeValue;
  v261 = (UserEventServantPointMaster_o *)Instance;
  *(_OWORD *)&item.fields.currentCryptoKey = *(_OWORD *)&v259->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&item.fields.fakeValue = v260;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, partyIndex);
  v340 = item;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v340, 0LL);
  if ( !*p_userServantEntity )
    goto LABEL_226;
  v262 = Instance;
  Instance = UserServantEntity__getSvtId(*p_userServantEntity, 0LL);
  if ( !v261 )
    goto LABEL_226;
  p_SvtPoint_k__BackingField = &this->fields._SvtPoint_k__BackingField;
  if ( UserEventServantPointMaster__TryGetEntity(v261, &v347, v262, v235, Instance, 0LL) )
  {
    Instance = (int64_t)v347;
    if ( !v347 )
      goto LABEL_226;
    *p_SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v347, 0LL);
  }
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
LABEL_226:
    sub_1BCAA3C(Instance, partyIndex);
  v264 = *p_SvtPoint_k__BackingField;
  SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
  EnableEntity = EventServantPointRankMaster__GetEnableEntity(v258, v235, v264, SvtId, 0LL);
  if ( EnableEntity )
    this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
LABEL_148:
  if ( this->fields._PartyListViewItemMenuKind_k__BackingField != 9 )
  {
    this->fields._OrganizedWave_k__BackingField = 0;
    goto LABEL_186;
  }
  v267 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     partyIndex,
                                                     v237,
                                                     v238);
  System_Collections_Generic_List_int____ctor(
    v267,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v268 = baseDeckItemList;
  if ( !baseDeckItemList )
    goto LABEL_226;
  v269 = *(_QWORD *)&baseDeckItemList->max_length;
  this->fields._MaxWave_k__BackingField = v269;
  if ( (int)v269 < 1 )
    goto LABEL_180;
  v270 = 0LL;
  v271 = 1;
  do
  {
    if ( v270 >= (unsigned int)v269 )
      sub_1BCAA44(Instance, partyIndex);
    v272 = v268->m_Items[v270];
    for ( j = 0; ; ++j )
    {
      Instance = (int64_t)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, partyIndex);
        Instance = (int64_t)BalanceConfig_TypeInfo;
      }
      if ( j >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 160LL) )
        break;
      if ( !v272 )
        goto LABEL_226;
      Instance = (int64_t)PartyListViewItem__GetMember(v272, j, 0LL);
      if ( !Instance )
        goto LABEL_226;
      v274 = (PartyOrganizationListViewItem_o *)Instance;
      if ( *(_QWORD *)(Instance + 112) )
      {
        v275 = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            *(_QWORD *)&v275.fields.fakeValue);
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v275, 0LL);
        if ( !v267 )
          goto LABEL_226;
        items = v267->fields._items;
        v277 = Method_System_Collections_Generic_List_int__Add__;
        ++v267->fields._version;
        if ( !items )
          goto LABEL_226;
        size = v267->fields._size;
        partyIndex = (unsigned int)Instance;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v267,
            Instance,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v277[4] + 192LL) + 112LL));
          if ( !v271 )
            continue;
        }
        else
        {
          v267->fields._size = size + 1;
          items->m_Items[size + 1] = Instance;
          if ( !v271 )
            continue;
        }
        v279 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_226;
        v280 = v274->fields.userServantEntity;
        if ( !v280 )
          goto LABEL_226;
        v281 = *(_OWORD *)&v280->fields.id.fields.fakeValue;
        *(_OWORD *)&item.fields.currentCryptoKey = *(_OWORD *)&v280->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&item.fields.fakeValue = v281;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, partyIndex);
        v339 = item;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_47015500(&v279->fields.id, &v339, 0LL) )
        {
          v282 = PartyOrganizationListViewItem__GetEquipList(v274, 0LL);
          PartyServantListViewItem__SetEquipStatus(this, v282, v283);
          this->fields._OrganizedWave_k__BackingField = v271;
          v271 = 0;
          this->fields._IsClearedWave_k__BackingField = v272->fields._IsClearedWave_k__BackingField;
        }
      }
    }
    v268 = baseDeckItemList;
    ++v270;
    if ( v271 )
      ++v271;
    else
      v271 = 0;
    LODWORD(v269) = baseDeckItemList->max_length;
  }
  while ( (__int64)v270 < (int)v269 );
  if ( !v271 )
    goto LABEL_186;
LABEL_180:
  v285 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v284 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, partyIndex);
  *(_QWORD *)&v367.fields.currentCryptoKey = v285;
  *(_QWORD *)&v367.fields.fakeValue = v284;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v367, 0LL);
  if ( !v267 )
    goto LABEL_226;
  if ( System_Collections_Generic_List_int___Contains(
         v267,
         Instance,
         (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    this->fields.isSame = 1;
  }
LABEL_186:
  v286 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                   System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo,
                                                   partyIndex,
                                                   v237,
                                                   v238);
  System_Collections_Generic_List_ValueTuple_int__int__Int32Enum_____ctor(
    v286,
    (const MethodInfo_355320C *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
  if ( *p_questRestrictionInfo )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_226;
    v287 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance || !v287 )
      goto LABEL_226;
    Instance = (int64_t)EventCampaignMaster__GetFriendshipUpCampaigns(
                          (EventCampaignMaster_o *)v287,
                          *(_QWORD *)(Instance + 104),
                          0LL);
    if ( Instance )
    {
      v288 = (System_Collections_Generic_List_object__o *)Instance;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v289 = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventQuestMaster___);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&item,
          v288,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
        v346 = *(System_Collections_Generic_List_Enumerator_object__o *)&item.fields.currentCryptoKey;
        while ( 1 )
        {
          v290 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v346,
                   (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
          if ( !v290 )
            break;
          current = (EventCampaignEntity_o *)v346.fields._current;
          if ( !v346.fields._current )
            sub_1BCAA3C(v290, v291);
          monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v346.fields._current[2].monitor;
          if ( monitor && monitor[1].monitor )
          {
            v295 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
            v294 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v291);
            *(_QWORD *)&v368.fields.currentCryptoKey = v295;
            *(_QWORD *)&v368.fields.fakeValue = v294;
            v296 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v368, 0LL);
            v290 = System_Linq_Enumerable__Contains_int_(
                     monitor,
                     v296,
                     (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
            if ( !v290 )
              continue;
          }
          if ( !*p_questRestrictionInfo )
            sub_1BCAA3C(v290, v291);
          if ( !v289 )
            sub_1BCAA3C(v290, v291);
          if ( !EventQuestMaster__IsEventNotIncluded(
                  (EventQuestMaster_o *)v289,
                  current->fields.eventId,
                  (*p_questRestrictionInfo)->fields.questId,
                  (*p_questRestrictionInfo)->fields.questPhase,
                  7,
                  0LL,
                  0LL) )
          {
            v297 = current->fields.eventId;
            FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0LL);
            calcType = current->fields.calcType;
            v300 = FriendshipBonusValue;
            LODWORD(item.fields.hiddenValue) = 0;
            item.fields.currentCryptoKey = 0LL;
            *(_QWORD *)&v355.fields.Item1 = &item;
            v355.fields.Item3 = v297;
            System_ValueTuple_int__int__Int32Enum____ctor(
              v355,
              v300,
              calcType,
              Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__,
              v301);
            if ( !v286 )
              sub_1BCAA3C(v302, v303);
            v356 = *(System_ValueTuple_int__int__Int32Enum__o *)&item.fields.currentCryptoKey;
            v304 = v286->fields._items;
            v305 = Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__;
            ++v286->fields._version;
            if ( !v304 )
              sub_1BCAA3C(v302, *(_QWORD *)&v356.fields.Item1);
            v306 = v286->fields._size;
            if ( (unsigned int)v306 >= v304->max_length )
            {
              System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____AddWithResize(
                v286,
                v356,
                *(const MethodInfo_3553A98 **)(*(_QWORD *)(v305[4] + 192LL) + 112LL));
            }
            else
            {
              v286->fields._size = v306 + 1;
              *((System_ValueTuple_int__int__Int32Enum__o *)v304->m_Items + v306) = v356;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v346,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
        goto LABEL_209;
      }
      goto LABEL_226;
    }
  }
LABEL_209:
  if ( !v286 )
    goto LABEL_226;
  v307 = (struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *)System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____ToArray(
                                                                                    v286,
                                                                                    (const MethodInfo_355565C *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
  this->fields._FriendshipUpValTuple_k__BackingField = v307;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (int64_t)v307,
    v308,
    v309,
    v310,
    v311,
    v312,
    v313);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_226;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v314 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v314 )
    goto LABEL_226;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v314, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
    (int64_t)SkillCategoryIdList,
    v316,
    v317,
    v318,
    v319,
    v320,
    v321);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_226;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
    (int64_t)TreasureDeviceCategoryIdList,
    v323,
    v324,
    v325,
    v326,
    v327,
    v328);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_226;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_226;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_226;
  this->fields.priority = *(_DWORD *)(Instance + 52);
  PartyServantListViewItem__InitAfterSecondSort(this, (const MethodInfo *)partyIndex);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_226;
  v329 = BalanceConfig_TypeInfo;
  v330 = *(_DWORD *)(Instance + 276);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, partyIndex);
    v329 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v329->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v330;
  if ( !Instance )
    goto LABEL_226;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_226;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_226;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo3;
  if ( !*p_iconLabelInfo3 )
    goto LABEL_226;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewItem___ctor_32844788(
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  IconLabelInfo_o *v43; // x20
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  IconLabelInfo_o *v53; // x20
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  IconLabelInfo_o *v63; // x20
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t Instance; // x0
  const MethodInfo *v71; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct UserServantEntity_o **p_userServantEntity; // x22
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  Il2CppObject *MasterData_object; // x0
  __int64 v100; // x1
  __int64 v101; // x21
  __int64 v102; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v103; // x20
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // x27
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  Il2CppObject *v112; // x20
  struct UserServantEntity_o *v113; // x8
  int32_t v114; // w29
  ServantLimitEntity_o *v115; // x29
  struct UserServantEntity_o *v116; // x8
  __int128 v117; // q1
  UserServantCollectionMaster_o *v118; // x20
  int64_t v119; // x21
  UserServantCollectionEntity_o *v120; // x20
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  int32_t v140; // w28
  PartyOrganizationListViewItem_o *v141; // x29
  struct UserServantEntity_o *v142; // x8
  __int128 v143; // q0
  struct UserServantEntity_o *v144; // x8
  __int128 v145; // q0
  int64_t v146; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v147; // x8
  __int64 v148; // x20
  __int64 v149; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  int v151; // w20
  struct ServantEntity_o *v152; // x8
  __int64 v153; // x20
  __int64 v154; // x21
  int32_t v155; // w20
  __int64 v156; // x1
  int32_t v157; // w21
  System_Int64_array *EquipList; // x0
  const MethodInfo *v159; // x2
  int32_t cost; // w20
  UserServantEntity_o *v161; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v163; // x8
  const MethodInfo *v164; // x1
  UserServantEntity_o *v165; // x8
  UserServantEntity_o *v166; // x8
  bool IsUniqueIndividualityRestriction_40942144; // w0
  const MethodInfo *v168; // x1
  struct QuestRestrictionInfo_o *v169; // x8
  UserEventServantFatigueMaster_o *v170; // x20
  int32_t eventId; // w24
  __int64 v172; // x21
  __int64 v173; // x25
  int64_t v174; // x20
  UserServantEntity_o *v175; // x8
  UserServantEntity_o *v176; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v178; // x2
  int32_t v179; // w3
  System_String_o *v180; // x4
  BattleSetupInfo_o *v181; // x5
  FollowerInfo_o *v182; // x6
  PartyListViewItem_o *v183; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v185; // x2
  int32_t v186; // w3
  System_String_o *v187; // x4
  BattleSetupInfo_o *v188; // x5
  FollowerInfo_o *v189; // x6
  PartyListViewItem_o *v190; // x7
  BalanceConfig_c *v191; // x8
  int v192; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct PartyOrganizationListViewItem_o **p_baseItem; // [xsp+10h] [xbp-110h]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+18h] [xbp-108h]
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+20h] [xbp-100h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+28h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v198; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v199; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v200; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v201; // [xsp+90h] [xbp-90h]
  int64_t recoverAt; // [xsp+B0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v204; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v205; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v206; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v207; // 0:x0.16

  if ( (byte_4B12113 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&index, userServantEntity);
    sub_1BCA7E0(&CommonRestrictionMaster_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v25, v26);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v27, v28);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v29, v30);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v31, v32);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v33, v34);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37, v38);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42);
    byte_4B12113 = 1;
  }
  friendshipRank = 0;
  recoverAt = 0LL;
  v43 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, *(_QWORD *)&index, userServantEntity, partyItem);
  IconLabelInfo___ctor(v43, 0LL);
  this->fields.iconLabelInfo1 = v43;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v43, v44, v45, v46, v47, v48, v49);
  v53 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v50, v51, v52);
  IconLabelInfo___ctor(v53, 0LL);
  this->fields.iconLabelInfo2 = v53;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v53, v54, v55, v56, v57, v58, v59);
  v63 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v60, v61, v62);
  IconLabelInfo___ctor(v63, 0LL);
  this->fields.iconLabelInfo3 = v63;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo3, (int64_t)v63, v64, v65, v66, v67, v68, v69);
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_87;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, num, 0LL);
  this->fields.baseItem = MemberItem;
  p_baseItem = &this->fields.baseItem;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseItem, (int64_t)MemberItem, v73, v74, v75, v76, v77, v78);
  baseItem = this->fields.baseItem;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_87;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
    (int64_t)userServantEntity,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.setupInfo, (int64_t)setupInfo, v87, v88, v89, v90, v91, v92);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo,
    (int64_t)questRestrictionInfo,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  if ( !this->fields.userServantEntity )
    goto LABEL_87;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v102 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v101 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v103 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v100);
  *(_QWORD *)&v204.fields.currentCryptoKey = v102;
  *(_QWORD *)&v204.fields.fakeValue = v101;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v204, 0LL);
  if ( !v103 )
    goto LABEL_87;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v103,
             Instance,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantEntity,
    (int64_t)Entity,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  v112 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.svtId, 0LL);
  v113 = this->fields.userServantEntity;
  if ( !v113 )
    goto LABEL_87;
  v114 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v113->fields.limitCount, 0LL);
  if ( !v112 )
    goto LABEL_87;
  v115 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v112, v114, Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v116 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_87;
  v117 = *(_OWORD *)&v116->fields.userId.fields.fakeValue;
  v118 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v201.fields.currentCryptoKey = *(_OWORD *)&v116->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v201.fields.fakeValue = v117;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v71);
  v200 = v201;
  v119 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v200, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(this->fields.svtId, 0LL);
  if ( !v118 )
    goto LABEL_87;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v118, v119, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_87;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !v115 )
    goto LABEL_87;
  this->fields.rarityId = v115->fields.rarity;
  if ( !userServantEntity )
    goto LABEL_87;
  v120 = (UserServantCollectionEntity_o *)Instance;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  Instance = UserServantEntity__getFrameType(userServantEntity, 0LL);
  this->fields.frameType = Instance;
  if ( !v120 )
    goto LABEL_87;
  UserServantCollectionEntity__getFriendShipRankInfo(v120, &friendshipRank, &this->fields.friendshipMax, 0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0LL);
  this->fields.isBase = 0;
  *(_WORD *)&this->fields.isCostOver = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.equipUserServantEntity,
    0LL,
    v121,
    v122,
    v123,
    v124,
    v125,
    v126);
  this->fields.equipServantEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipServantEntity, 0LL, v127, v128, v129, v130, v131, v132);
  this->fields.equipIdList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipIdList, 0LL, v133, v134, v135, v136, v137, v138);
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_87;
  v140 = 0;
  while ( v140 < (signed int)memberItemList->max_length )
  {
    Instance = (int64_t)WarBoardPartyListViewItem__GetMemberItem(partyItem, v140, 0LL);
    if ( !Instance )
      goto LABEL_87;
    v141 = (PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 112) )
    {
      v142 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_87;
      v143 = *(_OWORD *)&v142->fields.id.fields.fakeValue;
      *(_OWORD *)&v201.fields.currentCryptoKey = *(_OWORD *)&v142->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v201.fields.fakeValue = v143;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v71);
      v199 = v201;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v199, 0LL);
      v144 = v141->fields.userServantEntity;
      if ( !v144 )
        goto LABEL_87;
      v145 = *(_OWORD *)&v144->fields.id.fields.fakeValue;
      v146 = Instance;
      *(_OWORD *)&v198.fields.currentCryptoKey = *(_OWORD *)&v144->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v198.fields.fakeValue = v145;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v198, 0LL);
      if ( v146 == Instance )
      {
        this->fields.isSame = 0;
        this->fields.isBase = num == v140;
        this->fields.partyIndex = v140;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v141, 0LL);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v159);
        break;
      }
      if ( num != v140 )
      {
        v147 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_87;
        v149 = *(_QWORD *)&v147[2].fields.currentCryptoKey;
        v148 = *(_QWORD *)&v147[2].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v71);
        *(_QWORD *)&v205.fields.currentCryptoKey = v149;
        *(_QWORD *)&v205.fields.fakeValue = v148;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v205, 0LL);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v141->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_87;
        v151 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(servantEntity[2], 0LL);
        if ( v151 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else if ( this->fields.commonRestrictionId == -1 )
        {
          v152 = v141->fields.servantEntity;
          if ( !v152 )
            goto LABEL_87;
          v154 = *(_QWORD *)&v152->fields.baseSvtId.fields.currentCryptoKey;
          v153 = *(_QWORD *)&v152->fields.baseSvtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v71);
          *(_QWORD *)&v206.fields.currentCryptoKey = v154;
          *(_QWORD *)&v206.fields.fakeValue = v153;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v206, 0LL);
          if ( !*p_servantEntity )
            goto LABEL_87;
          v155 = Instance;
          v157 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*p_servantEntity)[2], 0LL);
          if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo, v156);
          Instance = CommonRestrictionMaster__GetIncludedRestrictionIds(v155, v157, 0LL);
          if ( (Instance & 0x80000000) == 0 )
            this->fields.commonRestrictionId = Instance;
        }
      }
    }
    memberItemList = partyItem->fields.memberItemList;
    ++v140;
    if ( !memberItemList )
      goto LABEL_87;
  }
  if ( (this->fields.partyIndex & 0x80000000) != 0 )
  {
    Instance = (int64_t)*p_baseItem;
    if ( !*p_baseItem )
      goto LABEL_87;
    cost = partyItem->fields.cost;
    Instance = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL);
    if ( !*p_servantEntity )
      goto LABEL_87;
    this->fields.isCostOver = cost - (int)Instance + (*p_servantEntity)[9].fields.fakeValue > partyItem->fields.maxCost;
  }
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_87;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v161 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v161 )
    goto LABEL_87;
  IsChoice = UserServantEntity__IsChoice(v161, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  *(_DWORD *)&this->fields.isLockMode = 0;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_87;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v163 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v163 )
    goto LABEL_87;
  this->fields.isLeave = UserServantEntity__IsLeave(v163, 0LL);
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v164);
  v165 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v165 )
    goto LABEL_87;
  Instance = UserServantEntity__getUniqueSvtRestriction_40941764(
               v165,
               this->fields.questRestrictionInfo,
               0LL,
               num,
               this->fields.partyIndex,
               0LL);
  v166 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v166 )
    goto LABEL_87;
  IsUniqueIndividualityRestriction_40942144 = UserServantEntity__IsUniqueIndividualityRestriction_40942144(
                                                v166,
                                                this->fields.questRestrictionInfo,
                                                0LL,
                                                num,
                                                this->fields.partyIndex,
                                                0LL);
  this->fields.isFatigureRecover = 0;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_40942144;
  this->fields.fatigureTime = -1LL;
  v169 = this->fields.questRestrictionInfo;
  if ( v169 && v169->fields.isFatigure )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
      if ( *p_questRestrictionInfo )
      {
        v170 = (UserEventServantFatigueMaster_o *)Instance;
        eventId = (*p_questRestrictionInfo)->fields.eventId;
        v173 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v172 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v71);
        *(_QWORD *)&v207.fields.currentCryptoKey = v173;
        *(_QWORD *)&v207.fields.fakeValue = v172;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v207, 0LL);
        if ( v170 )
        {
          if ( UserEventServantFatigueMaster__GetFatigueInfo(
                 v170,
                 &recoverAt,
                 &this->fields.isFatigureRecover,
                 eventId,
                 Instance,
                 0LL) )
          {
            v174 = recoverAt;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v168);
            if ( v174 > NetworkManager__getTime(0LL) )
              this->fields.fatigureTime = recoverAt;
          }
          goto LABEL_73;
        }
      }
    }
LABEL_87:
    sub_1BCAA3C(Instance, v71);
  }
LABEL_73:
  Instance = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v168);
  v175 = this->fields.userServantEntity;
  this->fields._IsAllOutBattle_k__BackingField = Instance & 1;
  if ( !v175 )
    goto LABEL_87;
  Instance = UserServantEntity__getDispLimitCount(v175, 0, 0LL);
  v176 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v176 )
    goto LABEL_87;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v176, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
    (int64_t)SkillCategoryIdList,
    v178,
    v179,
    v180,
    v181,
    v182,
    v183);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_87;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
    (int64_t)TreasureDeviceCategoryIdList,
    v185,
    v186,
    v187,
    v188,
    v189,
    v190);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_87;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_87;
  this->fields.priority = *(_DWORD *)(Instance + 52);
  PartyServantListViewItem__InitAfterSecondSort(this, v71);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_87;
  v191 = BalanceConfig_TypeInfo;
  v192 = *(_DWORD *)(Instance + 276);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v71);
    v191 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v191->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v192;
  if ( !Instance )
    goto LABEL_87;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_87;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_87;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo3;
  if ( !*p_iconLabelInfo3 )
    goto LABEL_87;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


bool __fastcall PartyServantListViewItem__ChkQuestRestriction(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyServantListViewItem_o *v3; // x19
  QuestRestrictionInfo_o *questRestrictionInfo; // x20
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v8; // x8
  int32_t v9; // w21
  int32_t v10; // w22
  struct UserServantEntity_o *v11; // x8
  struct PartyOrganizationListViewItem_o *baseItem; // x9
  bool v13; // w23
  __int64 v14; // x1
  QuestRestrictionInfo_o *v15; // x20
  __int64 v16; // x21
  __int64 v17; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v18; // x8
  int32_t v19; // w21
  int32_t v20; // w22
  __int64 v21; // x1
  QuestRestrictionInfo_o *v22; // x20
  __int64 v23; // x21
  __int64 v24; // x22
  struct PartyOrganizationListViewItem_o *v25; // x8
  struct PartyOrganizationListViewItem_o *v26; // x8
  struct UserServantEntity_o *v27; // x8
  QuestRestrictionInfo_o *v28; // x20
  __int64 v29; // x21
  __int64 v30; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v31; // x8
  int32_t v32; // w21
  int32_t v33; // w22
  struct PartyOrganizationListViewItem_o *v34; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  v3 = this;
  if ( (byte_4B12114 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1BCA7E0(
                                           &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                           method,
                                           v2);
    byte_4B12114 = 1;
  }
  questRestrictionInfo = v3->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  userServantEntity = v3->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_38;
  v7 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v36.fields.currentCryptoKey = v7;
  *(_QWORD *)&v36.fields.fakeValue = v6;
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v36, 0LL);
  v8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v3->fields.userServantEntity;
  if ( !v8 )
    goto LABEL_38;
  v9 = (int)this;
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v8[6], 0LL);
  if ( !v3->fields.userServantEntity )
    goto LABEL_38;
  v10 = (int)this;
  this = (PartyServantListViewItem_o *)UserServantEntity__getDispLimitCount(v3->fields.userServantEntity, 0, 0LL);
  v11 = v3->fields.userServantEntity;
  if ( !v11 )
    goto LABEL_38;
  baseItem = v3->fields.baseItem;
  if ( !baseItem )
    goto LABEL_38;
  v13 = 1;
  if ( !QuestRestrictionInfo__IsRestriction_41173688(
          questRestrictionInfo,
          &v3->fields.isQuestRestrictionWhole,
          v9,
          v10,
          (int32_t)this,
          v11->fields.lv,
          baseItem->fields._InitPos_k__BackingField,
          1,
          0LL) )
  {
    this = (PartyServantListViewItem_o *)v3->fields.questRestrictionInfo;
    if ( !this )
      goto LABEL_38;
    if ( QuestRestrictionInfo__IsSupportOnly((QuestRestrictionInfo_o *)this, 0LL) )
      return 1;
    v15 = v3->fields.questRestrictionInfo;
    v16 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    *(_QWORD *)&v37.fields.currentCryptoKey = v16;
    *(_QWORD *)&v37.fields.fakeValue = v17;
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v37, 0LL);
    v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v3->fields.userServantEntity;
    if ( !v18 )
      goto LABEL_38;
    v19 = (int)this;
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                           v18[6],
                                           0LL);
    if ( !v3->fields.userServantEntity )
      goto LABEL_38;
    v20 = (int)this;
    this = (PartyServantListViewItem_o *)UserServantEntity__getDispLimitCount(v3->fields.userServantEntity, 0, 0LL);
    if ( !v15 )
      goto LABEL_38;
    if ( QuestRestrictionInfo__GetFixedMyServantSingleRestriction(
           v15,
           v19,
           v20,
           (int32_t)this,
           v3->fields.memberIndex,
           0LL) )
    {
      return 1;
    }
    v22 = v3->fields.questRestrictionInfo;
    v23 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
    v24 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    *(_QWORD *)&v38.fields.currentCryptoKey = v23;
    *(_QWORD *)&v38.fields.fakeValue = v24;
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v38, 0LL);
    v25 = v3->fields.baseItem;
    if ( !v25 || !v22 )
      goto LABEL_38;
    this = (PartyServantListViewItem_o *)QuestRestrictionInfo__IsServantNumAndFixedServantPositionRestriction(
                                           v22,
                                           (int32_t)this,
                                           v25->fields._InitPos_k__BackingField,
                                           0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    v26 = v3->fields.baseItem;
    if ( v26 )
    {
      if ( !v26->fields.isMyServantOrNpcRestriction )
        return 0;
      v27 = v3->fields.userServantEntity;
      if ( v27 )
      {
        v28 = v3->fields.questRestrictionInfo;
        v30 = *(_QWORD *)&v27->fields.svtId.fields.currentCryptoKey;
        v29 = *(_QWORD *)&v27->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
        *(_QWORD *)&v39.fields.currentCryptoKey = v30;
        *(_QWORD *)&v39.fields.fakeValue = v29;
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                               v39,
                                               0LL);
        v31 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v3->fields.userServantEntity;
        if ( v31 )
        {
          v32 = (int)this;
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                 v31[6],
                                                 0LL);
          if ( v3->fields.userServantEntity )
          {
            v33 = (int)this;
            this = (PartyServantListViewItem_o *)UserServantEntity__getDispLimitCount(
                                                   v3->fields.userServantEntity,
                                                   0,
                                                   0LL);
            v34 = v3->fields.baseItem;
            if ( v34 )
            {
              if ( v28 )
                return QuestRestrictionInfo__IsRestrictionServantIndividuality(
                         v28,
                         v32,
                         v33,
                         (int32_t)this,
                         v34->fields._InitPos_k__BackingField,
                         0,
                         0LL);
            }
          }
        }
      }
    }
LABEL_38:
    sub_1BCAA3C(this, method);
  }
  return v13;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t allOutBattleGroupNo; // w20
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x22
  __int64 v15; // x23
  UserEventAlloutBattleMaster_o *v16; // x21
  struct QuestRestrictionInfo_o *v17; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B12119 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B12119 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = questRestrictionInfo->fields.allOutBattleGroupNo;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
  v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v16 = (UserEventAlloutBattleMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v19.fields.currentCryptoKey = v15;
  *(_QWORD *)&v19.fields.fakeValue = v14;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v19, 0LL);
  v17 = this->fields.questRestrictionInfo;
  if ( !v17 || !v16 )
LABEL_13:
    sub_1BCAA3C(Instance, v11);
  return UserEventAlloutBattleMaster__IsAlreadyUsedServant(
           v16,
           (int32_t)Instance,
           v17->fields.eventId,
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B1211C & 1) == 0 )
  {
    sub_1BCA7E0(&TreasureDvcInfo_TypeInfo, tdInfo, method);
    byte_4B1211C = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v8 = (TreasureDvcInfo_o *)sub_1BCAA2C(TreasureDvcInfo_TypeInfo, tdInfo, method, v3);
  TreasureDvcInfo___ctor(v8, 0LL);
  *tdInfo = v8;
  sub_1BCA784((PartyOrganizationUtility_o *)tdInfo, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  return 0;
}


System_String_o *__fastcall PartyServantListViewItem__GetRestrictionMessage(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t commonRestrictionId; // w19

  if ( (byte_4B12118 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonRestrictionMaster_TypeInfo, method, v2);
    byte_4B12118 = 1;
  }
  commonRestrictionId = this->fields.commonRestrictionId;
  if ( (commonRestrictionId & 0x80000000) != 0 )
    return 0LL;
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo, method);
  return CommonRestrictionMaster__GetRestrictionMessageFromId(commonRestrictionId, 0LL);
}


void __fastcall PartyServantListViewItem__InitAfterSecondSort(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyServantListViewItem_o *v3; // x19
  struct UserServantEntity_o *userServantEntity; // x9
  __int128 v5; // q0
  struct ServantEntity_o *servantEntity; // x10
  struct UserServantEntity_o *v7; // x9
  __int128 v8; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+40h] [xbp-40h]

  v3 = this;
  if ( (byte_4B1211D & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1BCA7E0(
                                           &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                           method,
                                           v2);
    byte_4B1211D = 1;
  }
  if ( v3->fields.tutorialMode )
  {
    userServantEntity = v3->fields.userServantEntity;
    v3->fields.sortValue1B = 0LL;
    if ( userServantEntity )
    {
      v5 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v11.fields.fakeValue = v5;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
      v9 = v11;
      v3->fields.sortValue2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v9, 0LL);
      v3->fields.sortValue2B = 0LL;
      return;
    }
LABEL_14:
    sub_1BCAA3C(this, method);
  }
  servantEntity = v3->fields.servantEntity;
  v3->fields.sortValue1B = v3->fields.priority;
  if ( !servantEntity )
    goto LABEL_14;
  v7 = v3->fields.userServantEntity;
  if ( !v7 )
    goto LABEL_14;
  v3->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)v3->fields.rarityId << 48) | v7->fields.lv;
  v8 = *(_OWORD *)&v7->fields.id.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&v7->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v10 = v11;
  v3->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v10, 0LL);
}


bool __fastcall PartyServantListViewItem__IsMatchFilter(
        PartyServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  FilterKindList_c *v11; // x0
  __int64 ClassGroupFilterKindList; // x0
  FilterKindList_c *v13; // x0
  ListViewSort_FilterKind_array *v14; // x0
  FilterKindList_c *v15; // x0
  ListViewSort_FilterKind_array *v16; // x0
  FilterKindList_c *v17; // x0
  ListViewSort_FilterKind_array *v18; // x0
  __int64 v19; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w21
  UserServantEntity_o *userServantEntity; // x22
  __int64 v23; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v25; // x0
  ListViewSort_FilterKind_array *v26; // x21
  UserServantEntity_o *v28; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v30; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v46; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v48; // w0

  if ( (byte_4B12116 & 1) == 0 )
  {
    sub_1BCA7E0(&FilterKindList_TypeInfo, sort, method);
    sub_1BCA7E0(&ListViewSort_FilterKind___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v7, v8);
    sub_1BCA7E0(&ServantEventBonusFilterController_TypeInfo, v9, v10);
    byte_4B12116 = 1;
  }
  v11 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v11->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_65;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v13 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
      v13 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v13->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_65;
    v14 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v14, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v15 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v15 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v15->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  v16 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v16, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v17 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v17 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v17->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_65:
    sub_1BCAA3C(ClassGroupFilterKindList, sort);
  v18 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v18, 0LL)
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
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo, v19);
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, sort, eventId, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v28 = this->fields.userServantEntity;
    if ( v28 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v28, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_65;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v30 = this->fields.userServantEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v30 )
          goto LABEL_65;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v30, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
          (int64_t)SkillCategoryIdList,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_65;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
          (int64_t)TreasureDeviceCategoryIdList,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
      }
    }
    ClassGroupFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_65;
    v23 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_66;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_65;
    v23 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_66:
      sub_1BCAA44(ClassGroupFilterKindList, v23);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v46 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v48 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
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
  ClassGroupFilterKindList = sub_1BCA888(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  v23 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_66;
  *(_DWORD *)(ClassGroupFilterKindList + 32) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL) )
  {
    isChoice = !this->fields.isChoice;
    if ( !this->fields.isSwapChoice )
      isChoice = this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v25 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort);
    v25 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v25->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  v26 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3588F1C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v26, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v26, 0LL)
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
    sub_1BCAA3C(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userServantEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall PartyServantListViewItem__ModifyItem(
        PartyServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UserServantEntity_o **p_userServantEntity; // x20
  __int64 v10; // x1
  const MethodInfo *v11; // x1

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
    (int64_t)userServantEntity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_userServantEntity )
    sub_1BCAA3C(0LL, v10);
  this->fields.isLeave = UserServantEntity__IsLeave(*p_userServantEntity, 0LL);
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  this->fields.isQuestRestriction = PartyServantListViewItem__ChkQuestRestriction(this, v11);
}


void __fastcall PartyServantListViewItem__ModifyLockItem(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1BCAA3C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall PartyServantListViewItem__SetEquipStatus(
        PartyServantListViewItem_o *this,
        System_Int64_array *equipIds,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject **p_equipUserServantEntity; // x20
  PartyOrganizationUtility_o *p_equipServantEntity; // x19
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Int64_array **p_equipIdList; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Il2CppObject *Master_object; // x0
  __int64 v40; // x1
  struct System_Int64_array *v41; // x8
  Il2CppObject *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  Il2CppObject *v49; // x22
  int64_t v50; // x1
  BalanceConfig_c *v51; // x0
  struct System_Int64_array *v52; // x8
  Il2CppObject *v53; // x8
  void *monitor; // x21
  Il2CppClass *klass; // x22
  __int64 v56; // x1
  Il2CppObject *v57; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v58; // x20
  void *v59; // x21
  Il2CppClass *v60; // x22
  Il2CppObject *Entity; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_4B12115 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, equipIds, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v12, v13);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16, v17);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v18, v19);
    sub_1BCA7E0(&long___TypeInfo, v20, v21);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22, v23);
    byte_4B12115 = 1;
  }
  p_equipUserServantEntity = (Il2CppObject **)&this->fields.equipUserServantEntity;
  this->fields.equipUserServantEntity = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.equipUserServantEntity,
    0LL,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  p_equipServantEntity = (PartyOrganizationUtility_o *)&this->fields.equipServantEntity;
  this->fields.equipServantEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipServantEntity, 0LL, v26, v27, v28, v29, v30, v31);
  this->fields.equipIdList = 0LL;
  p_equipIdList = &this->fields.equipIdList;
  sub_1BCA784((PartyOrganizationUtility_o *)p_equipIdList, 0LL, v33, v34, v35, v36, v37, v38);
  if ( !*(p_equipIdList - 1) )
    return;
  if ( !equipIds )
    goto LABEL_9;
  v41 = *p_equipIdList;
  if ( *p_equipIdList == equipIds )
    goto LABEL_14;
  v42 = System_Array__Clone((System_Array_o *)equipIds, 0LL);
  if ( v42 )
  {
    v49 = v42;
    v50 = sub_1BCA91C(v42, long___TypeInfo);
    if ( !v50 )
    {
      sub_1BCACFC(v49);
LABEL_9:
      v51 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v40);
        v51 = BalanceConfig_TypeInfo;
      }
      v50 = sub_1BCA888(long___TypeInfo, (unsigned int)v51->static_fields->SvtEquipMax);
    }
  }
  else
  {
    v50 = 0LL;
  }
  *p_equipIdList = (struct System_Int64_array *)v50;
  sub_1BCA784((PartyOrganizationUtility_o *)p_equipIdList, v50, v43, v44, v45, v46, v47, v48);
  v41 = *p_equipIdList;
LABEL_14:
  if ( !v41 )
    goto LABEL_35;
  if ( !v41->max_length )
    goto LABEL_36;
  if ( v41->m_Items[0] < 1 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v40);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  v52 = *p_equipIdList;
  if ( !*p_equipIdList )
    goto LABEL_35;
  if ( !v52->max_length )
LABEL_36:
    sub_1BCAA44(Master_object, v40);
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    p_equipUserServantEntity,
                                    v52->m_Items[0],
                                    (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v53 = *p_equipUserServantEntity;
    if ( !*p_equipUserServantEntity )
      goto LABEL_35;
    klass = v53[5].klass;
    monitor = v53[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40);
    *(_QWORD *)&v68.fields.currentCryptoKey = klass;
    *(_QWORD *)&v68.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v68, 0LL) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v56);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
      v57 = *p_equipUserServantEntity;
      if ( *p_equipUserServantEntity )
      {
        v58 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        v60 = v57[5].klass;
        v59 = v57[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40);
        *(_QWORD *)&v69.fields.currentCryptoKey = v60;
        *(_QWORD *)&v69.fields.fakeValue = v59;
        Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v69, 0LL);
        if ( v58 )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     v58,
                     (int32_t)Master_object,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          p_equipServantEntity->klass = (PartyOrganizationUtility_c *)Entity;
          sub_1BCA784(p_equipServantEntity, (int64_t)Entity, v62, v63, v64, v65, v66, v67);
          return;
        }
      }
LABEL_35:
      sub_1BCAA3C(Master_object, v40);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v39; // x21
  struct EventUpValSetupInfo_o *setupInfo; // x8
  int32_t bonusKind; // w8
  EventUpValSetupInfo_o *v42; // x21
  UserServantEntity_o *userServantEntity; // x22
  int32_t ServantFilterEventId; // w23
  struct ListViewObject_o *viewObject; // x3
  UserServantEntity_o *v46; // x0
  EventUpValSetupInfo_o *v47; // x1
  int32_t v48; // w2
  int32_t bonusKind2; // w8
  int32_t v50; // w21
  int32_t bonusKindId; // w8
  int32_t v52; // w8
  int32_t v53; // w9
  int32_t v54; // w8
  int32_t bonusKind2Id; // w8
  Il2CppObject *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x22
  __int64 v59; // x23
  EventCampaignMaster_o *v60; // x21
  bool v61; // w0
  UserServantEntity_o *v62; // x22
  EventUpValSetupInfo_o *v63; // x23
  bool IsEnableServant; // w0
  Il2CppObject *Master_object; // x0
  __int64 v66; // x1
  __int64 v67; // x22
  __int64 v68; // x23
  EventCampaignMaster_o *v69; // x21
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  __int64 v71; // x2
  __int64 v72; // x3
  System_Func_object__bool__o *v73; // x0
  __int64 *v74; // x8
  __int64 v75; // x2
  __int64 v76; // x3
  System_Func_T__bool__o *v77; // x22
  PartyServantListViewItem_c *v78; // x0
  _BOOL4 isChoice; // w22
  struct PartyServantListViewItem_StaticFields *static_fields; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x9
  int64_t PRIORITY_NORMAL; // x10
  __int64 PRIORITY_LOWEST; // x8
  PartyServantListViewItem_c *v84; // x0
  __int64 PRIORITY_LOWEST_HEROIN_LEAVE; // x8
  struct ServantEntity_o *servantEntity; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  int32_t cost; // w4
  struct UserServantEntity_o *v89; // x8
  __int128 v90; // q1
  struct UserServantEntity_o *v91; // x8
  int64_t rarityId; // x2
  struct UserServantEntity_o *v93; // x8
  int64_t hp; // x2
  int32_t adjustAtk; // w3
  int32_t v96; // w1
  struct UserServantEntity_o *v97; // x8
  struct UserServantEntity_o *equipUserServantEntity; // x9
  int32_t atk; // w4
  int32_t adjustHp; // w3
  int32_t v101; // w1
  struct UserServantEntity_o *v102; // x8
  struct UserServantEntity_o *v103; // x9
  struct ServantEntity_o *v104; // x8
  int64_t v105; // x8
  IconLabelInfo_o *iconLabelInfo2; // x19
  __int64 v107; // x20
  __int64 v108; // x21
  int32_t v109; // w0
  PartyServantListViewItem_o *v110; // x20
  int64_t v111; // x9
  struct ListViewManager_o *v112; // x8
  __int64 v113; // x11
  struct ListViewManager_o *v114; // x20
  struct QuestRestrictionInfo_o *v115; // x8
  int64_t fatigureTime; // x8
  int64_t iconLabelInfo1_low; // x20
  int64_t priority; // x9
  struct ServantEntity_o *v119; // x8
  IconLabelInfo_o *v120; // x21
  int32_t v121; // w3
  IconLabelInfo_o *v122; // x0
  int32_t v123; // w2
  int32_t iconLabelInfo1; // w20
  __int64 v125; // x21
  __int64 v126; // x22
  const MethodInfo *v127; // x2
  struct ServantEntity_o *v128; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v130; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v132; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16

  v4 = this;
  if ( (byte_4B12117 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_EventGroupEntity___, sort, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventGroupMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Func_EventGroupEntity__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_PartyServantListViewItem__SetSortValue_b__118_0__, v23, v24);
    sub_1BCA7E0(&Method_PartyServantListViewItem__SetSortValue_b__118_1__, v25, v26);
    sub_1BCA7E0(&PartyServantListViewItem_TypeInfo, v27, v28);
    sub_1BCA7E0(&PartyServantListViewManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v33, v34);
    this = (PartyServantListViewItem_o *)sub_1BCA7E0(&TutorialFlag_TypeInfo, v35, v36);
    byte_4B12117 = 1;
  }
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  if ( !sort )
    goto LABEL_213;
  if ( !sort->fields.isBonusKind || v4->fields.isBase )
    goto LABEL_87;
  manager = sort->fields.manager;
  if ( manager
    && (methodPtr_low = LOBYTE(PartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PartyServantListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyServantListViewManager_TypeInfo )
      v39 = sort->fields.manager;
    else
      v39 = 0LL;
  }
  else
  {
    v39 = 0LL;
  }
  setupInfo = v4->fields.setupInfo;
  if ( !setupInfo )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, sort);
    this = (PartyServantListViewItem_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_26;
    if ( !v39 )
      goto LABEL_213;
    if ( !BYTE1(v39[1].fields.clipRange.fields.y) )
      goto LABEL_26;
LABEL_20:
    bonusKind = sort->fields.bonusKind;
    switch ( bonusKind )
    {
      case 0:
        if ( v4->fields.bonusKind )
        {
          bonusKindId = sort->fields.bonusKindId;
        }
        else
        {
          bonusKindId = sort->fields.bonusKindId;
          if ( v4->fields.bonusKindId == bonusKindId )
            goto LABEL_86;
        }
        v4->fields.bonusKind = 0;
        v4->fields.bonusKindId = bonusKindId;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
        this = (PartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( !this )
          goto LABEL_213;
        EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                              (EventGroupMaster_o *)this,
                              v4->fields.bonusKindId,
                              0LL);
        this = (PartyServantListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                               (System_Collections_ICollection_o *)EntitiesByGroupId,
                                               0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !EntitiesByGroupId )
            goto LABEL_213;
          if ( EntitiesByGroupId->fields._size >= 2 )
          {
            v73 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                   System_Func_EventGroupEntity__bool__TypeInfo,
                                                   sort,
                                                   v71,
                                                   v72);
            v74 = &Method_PartyServantListViewItem__SetSortValue_b__118_0__;
LABEL_85:
            v77 = (System_Func_T__bool__o *)v73;
            System_Func_object__bool____ctor(v73, (Il2CppObject *)v4, *v74, 0LL);
            v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                        v77,
                                        (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_EventGroupEntity___);
          }
        }
        goto LABEL_86;
      case 3:
        if ( v4->fields.bonusKind == 3 )
        {
          v52 = sort->fields.bonusKindId;
          if ( v4->fields.bonusKindId == v52 )
            goto LABEL_86;
        }
        else
        {
          v52 = sort->fields.bonusKindId;
        }
        v4->fields.bonusKind = 3;
        v4->fields.bonusKindId = v52;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
        v68 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
        v67 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
        v69 = (EventCampaignMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v66);
        *(_QWORD *)&v136.fields.currentCryptoKey = v68;
        *(_QWORD *)&v136.fields.fakeValue = v67;
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                               v136,
                                               0LL);
        if ( !v69 )
          goto LABEL_213;
        IsEnableServant = EventCampaignMaster__IsEnableServant(v69, (int32_t)this, v4->fields.bonusKindId, 0LL);
        goto LABEL_67;
      case 4:
      case 5:
        if ( v4->fields.bonusKind == bonusKind )
          goto LABEL_86;
        v4->fields.bonusKind = bonusKind;
        v42 = v4->fields.setupInfo;
        v4->fields.bonusKindId = sort->fields.bonusKindId;
        if ( !v42 )
          goto LABEL_213;
        userServantEntity = v4->fields.userServantEntity;
        ServantFilterEventId = EventUpValSetupInfo__get_ServantFilterEventId(v42, 0LL);
        this = (PartyServantListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this || !userServantEntity )
          goto LABEL_213;
        viewObject = this->fields.viewObject;
        v46 = userServantEntity;
        v47 = v42;
        v48 = ServantFilterEventId;
        goto LABEL_54;
      case 7:
        if ( v4->fields.bonusKind == 7 )
        {
          v53 = v4->fields.bonusKindId;
          v54 = sort->fields.bonusKindId;
LABEL_48:
          if ( v53 == v54 )
          {
LABEL_86:
            if ( v4->fields.isEventUpVal )
              goto LABEL_87;
LABEL_105:
            LOBYTE(this) = 0;
            return (char)this;
          }
        }
        else
        {
          v54 = sort->fields.bonusKindId;
        }
        goto LABEL_64;
      default:
        goto LABEL_87;
    }
  }
  if ( setupInfo->fields.isQuestStart )
    goto LABEL_20;
LABEL_26:
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
          goto LABEL_86;
      }
      v4->fields.bonusKind = 0;
      v4->fields.bonusKindId = bonusKind2Id;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
      this = (PartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventGroupMaster___);
      if ( !this )
        goto LABEL_213;
      EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                            (EventGroupMaster_o *)this,
                            v4->fields.bonusKindId,
                            0LL);
      this = (PartyServantListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                             (System_Collections_ICollection_o *)EntitiesByGroupId,
                                             0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_86;
      if ( !EntitiesByGroupId )
        goto LABEL_213;
      if ( EntitiesByGroupId->fields._size < 2 )
        goto LABEL_86;
      v73 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventGroupEntity__bool__TypeInfo, sort, v75, v76);
      v74 = &Method_PartyServantListViewItem__SetSortValue_b__118_1__;
      goto LABEL_85;
    case 3:
      v4->fields.bonusKind = 3;
      v4->fields.bonusKindId = sort->fields.bonusKind2Id;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, sort);
      v56 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
      v59 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v58 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      v60 = (EventCampaignMaster_o *)v56;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v57);
      *(_QWORD *)&v135.fields.currentCryptoKey = v59;
      *(_QWORD *)&v135.fields.fakeValue = v58;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                             v135,
                                             0LL);
      if ( !v60 )
        goto LABEL_213;
      v61 = EventCampaignMaster__IsEnableServant(v60, (int32_t)this, v4->fields.bonusKindId, 0LL);
      v4->fields.isEventUpVal = v61;
      if ( !v61 )
        goto LABEL_105;
      goto LABEL_87;
    case 4:
    case 5:
      if ( v4->fields.bonusKind == bonusKind2 )
      {
        v50 = sort->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId == v50 )
          goto LABEL_86;
      }
      else
      {
        v50 = sort->fields.bonusKind2Id;
      }
      v4->fields.bonusKind = bonusKind2;
      v4->fields.bonusKindId = v50;
      v62 = v4->fields.userServantEntity;
      v63 = v4->fields.setupInfo;
      this = (PartyServantListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this || !v62 )
        goto LABEL_213;
      viewObject = this->fields.viewObject;
      v46 = v62;
      v47 = v63;
      v48 = v50;
LABEL_54:
      IsEnableServant = UserServantEntity__getEventUpVal_40936552(v46, v47, v48, (int64_t)viewObject, 0LL);
      goto LABEL_67;
    case 7:
      if ( v4->fields.bonusKind == 7 )
      {
        v53 = v4->fields.bonusKindId;
        v54 = sort->fields.bonusKind2Id;
        goto LABEL_48;
      }
      v54 = sort->fields.bonusKind2Id;
      break;
    default:
      goto LABEL_87;
  }
LABEL_64:
  v4->fields.bonusKind = 7;
  v4->fields.bonusKindId = v54;
  this = (PartyServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_213;
  this = (PartyServantListViewItem_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
  if ( !this )
    goto LABEL_213;
  IsEnableServant = ServantFilterMaster__IsEnableServant(
                      (ServantFilterMaster_o *)this,
                      v4->fields.svtId,
                      v4->fields.bonusKindId,
                      0LL);
LABEL_67:
  v4->fields.isEventUpVal = IsEnableServant;
  if ( !IsEnableServant )
    goto LABEL_105;
LABEL_87:
  if ( !v4->fields.isBase )
  {
    this = (PartyServantListViewItem_o *)v4->fields.servantEntity;
    if ( !this )
      goto LABEL_213;
    if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL) )
      goto LABEL_105;
    this = (PartyServantListViewItem_o *)v4->fields.servantEntity;
    if ( !this )
      goto LABEL_213;
    if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0LL)
      || (((__int64 (__fastcall *)(PartyServantListViewItem_o *, ListViewSort_o *, void *))v4->klass->vtable._5_IsMatchFilter.method)(
            v4,
            sort,
            v4->klass[1]._1.image) & 1) == 0 )
    {
      goto LABEL_105;
    }
  }
  v78 = PartyServantListViewItem_TypeInfo;
  if ( v4->fields.isSwapChoice )
    isChoice = !v4->fields.isChoice;
  else
    isChoice = v4->fields.isChoice;
  if ( !PartyServantListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo, sort);
    v78 = PartyServantListViewItem_TypeInfo;
  }
  static_fields = v78->static_fields;
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
LABEL_97:
        if ( !v78->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v78, sort);
          v78 = PartyServantListViewItem_TypeInfo;
          static_fields = PartyServantListViewItem_TypeInfo->static_fields;
        }
        PRIORITY_LOWEST = static_fields->PRIORITY_LOWEST;
        goto LABEL_111;
      }
LABEL_109:
      if ( !v4->fields.isQuestRestriction )
        goto LABEL_112;
      PRIORITY_LOWEST = -1LL;
LABEL_111:
      v4->fields.sortValue0 = PRIORITY_LOWEST;
LABEL_112:
      if ( isChoice && sort->fields.isChoiceSort )
      {
        if ( !v78->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v78, sort);
          v78 = PartyServantListViewItem_TypeInfo;
        }
        v4->fields.sortValue0B = v78->static_fields->PRIORITY_TOP;
      }
      this = (PartyServantListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_213;
      if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)this, 0LL) )
        goto LABEL_133;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, sort);
      if ( !TutorialFlag__Get_38402052(126, 0LL) )
        goto LABEL_133;
      v84 = PartyServantListViewItem_TypeInfo;
      if ( !PartyServantListViewItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo, sort);
        v84 = PartyServantListViewItem_TypeInfo;
      }
      PRIORITY_LOWEST_HEROIN_LEAVE = v84->static_fields->PRIORITY_LOWEST_HEROIN_LEAVE;
      goto LABEL_132;
    }
    if ( questRestrictionInfo->fields.isAllOutBattle && sort->fields.isSmartSort )
    {
      if ( v4->fields._IsAllOutBattle_k__BackingField )
        goto LABEL_97;
      goto LABEL_109;
    }
  }
  if ( isChoice && sort->fields.isChoiceSort )
  {
    if ( !v78->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v78, sort);
      static_fields = PartyServantListViewItem_TypeInfo->static_fields;
    }
    PRIORITY_LOWEST_HEROIN_LEAVE = static_fields->PRIORITY_TOP;
  }
  else
  {
    if ( !v4->fields.isQuestRestriction )
      goto LABEL_133;
    PRIORITY_LOWEST_HEROIN_LEAVE = -1LL;
  }
LABEL_132:
  v4->fields.sortValue0 = PRIORITY_LOWEST_HEROIN_LEAVE;
LABEL_133:
  PartyServantListViewItem__InitAfterSecondSort(v4, (const MethodInfo *)sort);
  this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_213;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  servantEntity = v4->fields.servantEntity;
  if ( !servantEntity )
    goto LABEL_213;
  equipServantEntity = v4->fields.equipServantEntity;
  this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo3;
  if ( equipServantEntity )
  {
    cost = equipServantEntity->fields.cost;
    if ( !this )
      goto LABEL_213;
  }
  else
  {
    cost = 0;
    if ( !this )
      goto LABEL_213;
  }
  IconLabelInfo__Set_38850420((IconLabelInfo_o *)this, 7, servantEntity->fields.cost, 0, cost, 0, 0, 0, 0LL);
  this = (PartyServantListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v89 = v4->fields.userServantEntity;
      if ( !v89 )
        goto LABEL_213;
      v90 = *(_OWORD *)&v89->fields.id.fields.fakeValue;
      *(_OWORD *)&v133.fields.currentCryptoKey = *(_OWORD *)&v89->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v133.fields.fakeValue = v90;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, sort);
      v132 = v133;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(
                                             &v132,
                                             0LL);
      v91 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v91 )
        goto LABEL_213;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_213;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v91->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_196;
    case 2:
      rarityId = v4->fields.rarityId;
      v93 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = rarityId;
      if ( !v93 )
        goto LABEL_213;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_213;
      IconLabelInfo__Set_38850420(
        (IconLabelInfo_o *)this,
        36,
        rarityId,
        v93->fields.exceedCount,
        0,
        0,
        0,
        v93->fields.lv,
        0LL);
      goto LABEL_202;
    case 3:
      goto LABEL_187;
    case 4:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_213;
      UserServantEntity__getTreasureDeviceInfo_40943792((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(hp) = tdMaxLv[1];
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = tdMaxLv[1];
      if ( !this )
        goto LABEL_213;
      adjustAtk = tdMaxLv[0];
      v96 = 33;
      goto LABEL_195;
    case 5:
      v97 = v4->fields.userServantEntity;
      if ( !v97 )
        goto LABEL_213;
      equipUserServantEntity = v4->fields.equipUserServantEntity;
      hp = v97->fields.hp;
      if ( equipUserServantEntity )
      {
        atk = equipUserServantEntity->fields.hp;
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = atk + (int)hp;
        if ( !this )
          goto LABEL_213;
        adjustHp = v97->fields.adjustHp;
        v101 = 46;
        goto LABEL_160;
      }
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_213;
      adjustAtk = v97->fields.adjustHp;
      v96 = 3;
      goto LABEL_195;
    case 6:
      v102 = v4->fields.userServantEntity;
      if ( !v102 )
        goto LABEL_213;
      v103 = v4->fields.equipUserServantEntity;
      hp = v102->fields.atk;
      if ( v103 )
      {
        atk = v103->fields.atk;
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = atk + (int)hp;
        if ( !this )
          goto LABEL_213;
        adjustHp = v102->fields.adjustAtk;
        v101 = 47;
LABEL_160:
        IconLabelInfo__Set_38850420((IconLabelInfo_o *)this, v101, hp, adjustHp, atk, 0, 0, 0, 0LL);
      }
      else
      {
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = hp;
        if ( !this )
          goto LABEL_213;
        adjustAtk = v102->fields.adjustAtk;
        v96 = 5;
LABEL_195:
        IconLabelInfo__Set_38850420((IconLabelInfo_o *)this, v96, hp, adjustAtk, 0, 0, 0, 0, 0LL);
      }
LABEL_196:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_213;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
LABEL_198:
      iconLabelInfo1 = (int32_t)this->fields.iconLabelInfo1;
LABEL_199:
      this = (PartyServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !iconLabelInfo2 )
        goto LABEL_213;
      v121 = (int)this;
      v122 = iconLabelInfo2;
      v123 = iconLabelInfo1;
      goto LABEL_201;
    case 7:
      v104 = v4->fields.servantEntity;
      if ( !v104 )
        goto LABEL_213;
      v105 = v104->fields.cost;
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
LABEL_164:
      v4->fields.sortValue1 = v105;
      if ( !this )
        goto LABEL_213;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      goto LABEL_198;
    case 8:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      v105 = -v4->fields.priority;
      goto LABEL_164;
    case 0xA:
      v107 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
      v108 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
      *(_QWORD *)&v137.fields.currentCryptoKey = v107;
      *(_QWORD *)&v137.fields.fakeValue = v108;
      v109 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v137, 0LL);
      v110 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v111 = v109;
      friendship = v4->fields.friendship;
      v4->fields.sortValue1 = v111;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                             friendship,
                                             0LL);
      if ( !v110 )
        goto LABEL_213;
      adjustAtk = v4->fields.friendshipMax;
      LODWORD(hp) = (_DWORD)this;
      v96 = 32;
      this = v110;
      goto LABEL_195;
    case 0xE:
      this = (PartyServantListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_210;
      v112 = sort->fields.manager;
      if ( v112
        && (v113 = LOBYTE(PartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v112->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v113) )
      {
        if ( (PartyServantListViewManager_c *)v112->klass->_2.typeHierarchy[v113 - 1] == PartyServantListViewManager_TypeInfo )
          v114 = sort->fields.manager;
        else
          v114 = 0LL;
      }
      else
      {
        v114 = 0LL;
      }
      v126 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v125 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sort);
      *(_QWORD *)&v139.fields.currentCryptoKey = v126;
      *(_QWORD *)&v139.fields.fakeValue = v125;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                             v139,
                                             0LL);
      if ( !v114 )
        goto LABEL_213;
      this = (PartyServantListViewItem_o *)PartyServantListViewManager__GetAmountSortValue(
                                             (PartyServantListViewManager_o *)v114,
                                             (int32_t)this,
                                             v127);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_210:
      v128 = v4->fields.servantEntity;
      if ( !v128 )
        goto LABEL_213;
      collectionNo = v128->fields.collectionNo;
      v130 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarityId << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v130 )
        goto LABEL_213;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      iconLabelInfo1 = v130->fields.lv;
      this = (PartyServantListViewItem_o *)v130;
      goto LABEL_199;
    case 0xF:
      hp = v4->fields.hpReinforceValue;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_213;
      adjustAtk = v4->fields.nowMaxHpReinforceValue;
      v96 = 44;
      goto LABEL_195;
    case 0x10:
      hp = v4->fields.atkReinforceValue;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_213;
      adjustAtk = v4->fields.nowMaxAtkReinforceValue;
      v96 = 45;
      goto LABEL_195;
    case 0x19:
      v115 = v4->fields.questRestrictionInfo;
      if ( !v115 || !v115->fields.isFatigure )
        goto LABEL_186;
      fatigureTime = v4->fields.fatigureTime;
      goto LABEL_183;
    case 0x1C:
      if ( !v4->fields._IsDispSvtPoint_k__BackingField )
      {
LABEL_186:
        sort->fields.sortKind = 3;
LABEL_187:
        this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
        if ( this )
        {
          iconLabelInfo1_low = SLODWORD(this->fields.iconLabelInfo1);
          v120 = v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = iconLabelInfo1_low;
          goto LABEL_189;
        }
LABEL_213:
        sub_1BCAA3C(this, sort);
      }
      fatigureTime = v4->fields._SvtPoint_k__BackingField;
LABEL_183:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      v4->fields.sortValue1 = fatigureTime;
      if ( !this )
        goto LABEL_213;
      iconLabelInfo1_low = SLODWORD(this->fields.iconLabelInfo1);
      priority = v4->fields.priority;
      v119 = v4->fields.servantEntity;
      v4->fields.sortValue1B = iconLabelInfo1_low;
      v4->fields.sortValue2 = priority;
      if ( !v119 )
        goto LABEL_213;
      v120 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue2B = iconLabelInfo1_low | ((unsigned __int64)(unsigned int)v4->fields.rarityId << 48) | ((__int64)v119->fields.collectionNo << 16);
LABEL_189:
      this = (PartyServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !v120 )
        goto LABEL_213;
      v121 = (int)this;
      v122 = v120;
      v123 = iconLabelInfo1_low;
LABEL_201:
      IconLabelInfo__Set_38850420(v122, 2, v123, v121, 0, 0, 0, 0, 0LL);
LABEL_202:
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


bool __fastcall PartyServantListViewItem___SetSortValue_b__118_0(
        PartyServantListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  __int64 v15; // x22
  __int64 v16; // x23
  EventCampaignMaster_o *v17; // x21
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  UserServantEntity_o *userServantEntity; // x21
  EventUpValSetupInfo_o *setupInfo; // x20
  int32_t eventId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4B1211F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, entity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantFilterMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v11, v12);
    byte_4B1211F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v17 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v25.fields.currentCryptoKey = v16;
  *(_QWORD *)&v25.fields.fakeValue = v15;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25, 0LL);
  if ( !entity || !v17 )
    goto LABEL_18;
  if ( EventCampaignMaster__IsEnableServant(v17, (int32_t)Instance, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !Instance )
    goto LABEL_18;
  if ( ServantFilterMaster__IsEnableServant(
         (ServantFilterMaster_o *)Instance,
         this->fields.svtId,
         entity->fields.eventId,
         0LL) )
  {
    return 1;
  }
  userServantEntity = this->fields.userServantEntity;
  setupInfo = this->fields.setupInfo;
  eventId = entity->fields.eventId;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !userServantEntity )
LABEL_18:
    sub_1BCAA3C(Instance, v19);
  return UserServantEntity__getEventUpVal_40936552(
           userServantEntity,
           setupInfo,
           eventId,
           (int64_t)Instance[6].monitor,
           0LL);
}


bool __fastcall PartyServantListViewItem___SetSortValue_b__118_1(
        PartyServantListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  __int64 v15; // x22
  __int64 v16; // x23
  EventCampaignMaster_o *v17; // x21
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  UserServantEntity_o *userServantEntity; // x21
  EventUpValSetupInfo_o *setupInfo; // x20
  int32_t eventId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4B12120 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCampaignMaster___, entity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantFilterMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v11, v12);
    byte_4B12120 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v17 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v25.fields.currentCryptoKey = v16;
  *(_QWORD *)&v25.fields.fakeValue = v15;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25, 0LL);
  if ( !entity || !v17 )
    goto LABEL_18;
  if ( EventCampaignMaster__IsEnableServant(v17, (int32_t)Instance, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantFilterMaster___);
  if ( !Instance )
    goto LABEL_18;
  if ( ServantFilterMaster__IsEnableServant(
         (ServantFilterMaster_o *)Instance,
         this->fields.svtId,
         entity->fields.eventId,
         0LL) )
  {
    return 1;
  }
  userServantEntity = this->fields.userServantEntity;
  setupInfo = this->fields.setupInfo;
  eventId = entity->fields.eventId;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !userServantEntity )
LABEL_18:
    sub_1BCAA3C(Instance, v19);
  return UserServantEntity__getEventUpVal_40936552(
           userServantEntity,
           setupInfo,
           eventId,
           (int64_t)Instance[6].monitor,
           0LL);
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
    sub_1BCAA3C(this, method);
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
  if ( this->fields.isSwapChoice )
    return !this->fields.isChoice;
  else
    return this->fields.isChoice;
}


bool __fastcall PartyServantListViewItem__get_IsDispLock(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.isSwapLock )
    return !this->fields.isLock;
  else
    return this->fields.isLock;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4B1211B & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19249/*"error"*/, v4, v5);
    byte_4B1211B = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19249/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v9 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v8 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    *(_QWORD *)&v12.fields.currentCryptoKey = v9;
    *(_QWORD *)&v12.fields.fakeValue = v8;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v12, 0LL);
  }
  else
  {
    v10 = -1;
  }
  return ServantEntity__getName(servantEntity, v10, -1, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4B1211A & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B1211A = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v7, 0LL);
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
    sub_1BCAA3C(this, method);
  return baseItem->fields._WaveEnemyClassIds_k__BackingField;
}


void __fastcall PartyServantListViewItem__set_FriendshipUpValTuple(
        PartyServantListViewItem_o *this,
        System_ValueTuple_int__int__EventCombineEntity_CalcType__array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._FriendshipUpValTuple_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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