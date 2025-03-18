void __fastcall PartyServantListViewItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct PartyServantListViewItem_StaticFields *static_fields; // x8

  if ( (byte_4C1DD6B & 1) == 0 )
  {
    sub_1C3B764(&PartyServantListViewItem_TypeInfo, v1);
    byte_4C1DD6B = 1;
  }
  static_fields = PartyServantListViewItem_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->PRIORITY_NORMAL = xmmword_C0D660;
  *(_OWORD *)&static_fields->PRIORITY_LOWEST = xmmword_C0DD10;
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
  IconLabelInfo_o *v50; // x23
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  IconLabelInfo_o *v57; // x23
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  IconLabelInfo_o *v64; // x23
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t Instance; // x0
  const MethodInfo *v72; // x1
  struct PartyOrganizationListViewItem_o *Member; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  struct PartyOrganizationListViewItem_o *baseItem; // x8
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
  __int64 v100; // x21
  __int64 v101; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v102; // x20
  Il2CppObject *v103; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // x27
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  Il2CppObject *v111; // x20
  struct UserServantEntity_o *v112; // x8
  int32_t v113; // w21
  ServantLimitEntity_o *v114; // x20
  UserServantEntity_o *v115; // x8
  __int128 v116; // q1
  UserServantCollectionMaster_o *v117; // x21
  int64_t v118; // x23
  UserServantCollectionEntity_o *v119; // x21
  struct PartyOrganizationListViewItem_o **p_baseItem; // x22
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
  System_Collections_Generic_List_int__o *v139; // x20
  int32_t v140; // w25
  int32_t i; // w21
  BalanceConfig_c *v142; // x0
  PartyOrganizationListViewItem_o *v143; // x23
  UserServantEntity_o *v144; // x8
  __int128 v145; // q0
  struct UserServantEntity_o *v146; // x8
  __int128 v147; // q0
  int64_t v148; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v149; // x8
  __int64 v150; // x24
  __int64 v151; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  int v153; // w24
  int v154; // w24
  struct System_Int32_array *items; // x8
  _QWORD *v156; // x9
  __int64 size; // x10
  struct ServantEntity_o *v158; // x8
  __int64 v159; // x23
  __int64 v160; // x24
  int32_t v161; // w23
  int32_t v162; // w24
  int32_t IncludedRestrictionIds; // w0
  System_Int64_array *EquipList; // x0
  const MethodInfo *v165; // x2
  int32_t cost; // w20
  bool IsChoice; // w0
  UserServantEntity_o *v168; // x8
  __int128 v169; // q0
  __int64 v170; // x20
  bool v171; // zf
  bool v172; // w8
  UserServantEntity_o *v173; // x8
  const MethodInfo *v174; // x1
  UserServantEntity_o *v175; // x8
  UserServantEntity_o *v176; // x8
  bool IsUniqueIndividualityRestriction_41685524; // w0
  const MethodInfo *v178; // x1
  struct QuestRestrictionInfo_o *v179; // x8
  UserEventServantFatigueMaster_o *v180; // x21
  int32_t eventId; // w23
  __int64 v182; // x24
  __int64 v183; // x25
  int64_t v184; // x20
  bool AllOutBattleAlreadyUsed; // w0
  struct QuestRestrictionInfo_o *v186; // x8
  Il2CppObject *Master_object; // x20
  UserServantEntity_o *v188; // x8
  UserEventDataLostEntity_o *v189; // x20
  __int64 v190; // x21
  __int64 v191; // x23
  UserServantEntity_o *v192; // x8
  char v193; // w20
  UserEventDataLostEntity_o *v194; // x21
  __int64 v195; // x23
  __int64 v196; // x24
  int32_t v197; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr10_16
  UserServantEntity_o *v199; // x8
  int64_t v200; // x20
  __int64 v201; // x21
  __int64 v202; // x23
  int32_t v203; // w21
  int32_t Rarity; // w23
  const MethodInfo *v205; // x7
  System_String_o **p_skillName; // x1
  int *p_actMaxRarity; // x2
  int32_t partyIndex; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v209; // kr20_16
  UserServantEntity_o *v210; // x8
  int64_t v211; // x20
  __int64 v212; // x21
  __int64 v213; // x23
  struct QuestRestrictionInfo_o *v214; // x8
  EventServantPointRankMaster_o *v215; // x20
  UserServantEntity_o *v216; // x8
  __int128 v217; // q0
  UserEventServantPointMaster_o *v218; // x21
  int64_t v219; // x23
  int32_t *p_SvtPoint_k__BackingField; // x22
  int32_t v221; // w21
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  System_Collections_Generic_List_int__o *v224; // x20
  PartyListViewItem_array *v225; // x9
  __int64 v226; // x8
  unsigned __int64 v227; // x25
  int32_t v228; // w22
  PartyListViewItem_o *v229; // x21
  int32_t j; // w26
  PartyOrganizationListViewItem_o *v231; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v232; // kr30_16
  struct System_Int32_array *v233; // x8
  _QWORD *v234; // x9
  __int64 v235; // x10
  UserServantEntity_o *v236; // x24
  struct UserServantEntity_o *v237; // x8
  __int128 v238; // q0
  System_Int64_array *v239; // x0
  const MethodInfo *v240; // x2
  __int64 v241; // x21
  __int64 v242; // x23
  System_Collections_Generic_List_T__o *v243; // x25
  Il2CppObject *v244; // x20
  System_Collections_Generic_List_object__o *v245; // x21
  Il2CppObject *v246; // x20
  _BOOL8 v247; // x0
  __int64 v248; // x1
  EventCampaignEntity_o *current; // x21
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x23
  __int64 v251; // x26
  __int64 v252; // x27
  int32_t v253; // w1
  int32_t v254; // w23
  int32_t FriendshipBonusValue; // w0
  int32_t calcType; // w3
  int32_t v257; // w2
  const MethodInfo_39E7520 *v258; // x5
  __int64 v259; // x0
  __int64 v260; // x1
  struct System_Object_array *v261; // x8
  _QWORD *v262; // x9
  __int64 v263; // x10
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v264; // x0
  int64_t v265; // x2
  int32_t v266; // w3
  System_String_o *v267; // x4
  BattleSetupInfo_o *v268; // x5
  FollowerInfo_o *v269; // x6
  PartyListViewItem_o *v270; // x7
  UserServantEntity_o *v271; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v273; // x2
  int32_t v274; // w3
  System_String_o *v275; // x4
  BattleSetupInfo_o *v276; // x5
  FollowerInfo_o *v277; // x6
  PartyListViewItem_o *v278; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v280; // x2
  int32_t v281; // w3
  System_String_o *v282; // x4
  BattleSetupInfo_o *v283; // x5
  FollowerInfo_o *v284; // x6
  PartyListViewItem_o *v285; // x7
  BalanceConfig_c *v286; // x8
  int v287; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+10h] [xbp-1E0h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+18h] [xbp-1D8h]
  bool IsNotSameParty; // [xsp+24h] [xbp-1CCh]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+40h] [xbp-1B0h]
  UserServantEntity_o **p_userServantEntity; // [xsp+48h] [xbp-1A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v296; // [xsp+50h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v297; // [xsp+70h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v298; // [xsp+90h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v299; // [xsp+B0h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v300; // [xsp+D0h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v301; // [xsp+F0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o item; // [xsp+110h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v303; // [xsp+130h] [xbp-C0h] BYREF
  UserEventServantPointEntity_o *v304; // [xsp+150h] [xbp-A0h] BYREF
  int32_t actMaxRarity; // [xsp+15Ch] [xbp-94h] BYREF
  System_String_o *skillName; // [xsp+160h] [xbp-90h] BYREF
  int v307; // [xsp+16Ch] [xbp-84h] BYREF
  __int64 v308; // [xsp+170h] [xbp-80h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+178h] [xbp-78h] BYREF
  int64_t recoverAt; // [xsp+180h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+18Ch] [xbp-64h] BYREF
  System_ValueTuple_int__int__Int32Enum__o v312; // 0:x0.12
  System_ValueTuple_int__int__Int32Enum__o v313; // 0:x1.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v314; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v315; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v316; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v317; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v318; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v319; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v320; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v321; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v322; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v323; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v324; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v325; // 0:x0.16

  if ( (byte_4C1DD5F & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1C3B764(&CommonRestrictionMaster_TypeInfo, v16);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventCampaignMaster___, v17);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventQuestMaster___, v18);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantClassMaster___, v19);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitMaster___, v20);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v21);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v22);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v23);
    sub_1C3B764(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v24);
    sub_1C3B764(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v25);
    sub_1C3B764(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v26);
    sub_1C3B764(&DataManager_TypeInfo, v27);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v28);
    sub_1C3B764(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v29);
    sub_1C3B764(&Method_System_Linq_Enumerable_Contains_int___, v30);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v31);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v32);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v33);
    sub_1C3B764(&IconLabelInfo_TypeInfo, v34);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v35);
    sub_1C3B764(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__, v36);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Contains__, v37);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v38);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__,
      v39);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v40);
    sub_1C3B764(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__, v41);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v42);
    sub_1C3B764(&System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo, v43);
    sub_1C3B764(&NetworkManager_TypeInfo, v44);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v45);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v46);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v48);
    sub_1C3B764(&Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__, v49);
    byte_4C1DD5F = 1;
  }
  friendshipRank = 0;
  entity = 0LL;
  recoverAt = 0LL;
  v308 = 0LL;
  v307 = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v304 = 0LL;
  memset(&v303, 0, sizeof(v303));
  v50 = (IconLabelInfo_o *)sub_1C3B9B0(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v50, 0LL);
  this->fields.iconLabelInfo1 = v50;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v50, v51, v52, v53, v54, v55, v56);
  v57 = (IconLabelInfo_o *)sub_1C3B9B0(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v57, 0LL);
  this->fields.iconLabelInfo2 = v57;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v57, v58, v59, v60, v61, v62, v63);
  v64 = (IconLabelInfo_o *)sub_1C3B9B0(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v64, 0LL);
  this->fields.iconLabelInfo3 = v64;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo3, (int64_t)v64, v65, v66, v67, v68, v69, v70);
  ListViewItem___ctor_42199332((ListViewItem_o *)this, index, 0LL);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_244;
  Member = PartyListViewItem__GetMember(partyItem, num, 0LL);
  this->fields.baseItem = Member;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.baseItem, (int64_t)Member, v74, v75, v76, v77, v78, v79);
  baseItem = this->fields.baseItem;
  this->fields._PartyListViewItemMenuKind_k__BackingField = partyItem->fields.menuKind;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_244;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0LL;
  this->fields.userServantEntity = userServantEntity;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
    (int64_t)userServantEntity,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.setupInfo, (int64_t)setupInfo, v87, v88, v89, v90, v91, v92);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo,
    (int64_t)questRestrictionInfo,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  p_userServantEntity = &this->fields.userServantEntity;
  if ( !this->fields.userServantEntity )
    goto LABEL_244;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_244;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  v101 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v100 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v102 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v314.fields.currentCryptoKey = v101;
  *(_QWORD *)&v314.fields.fakeValue = v100;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v314, 0LL);
  if ( !v102 )
    goto LABEL_244;
  v103 = DataMasterBase_object__object__int___GetEntity(
           v102,
           Instance,
           (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v103;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.servantEntity,
    (int64_t)v103,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_244;
  v111 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(this->fields.svtId, 0LL);
  v112 = this->fields.userServantEntity;
  if ( !v112 )
    goto LABEL_244;
  v113 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v112->fields.limitCount, 0LL);
  if ( !v111 )
    goto LABEL_244;
  v114 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v111, v113, Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v115 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_244;
  v116 = *(_OWORD *)&v115->fields.userId.fields.fakeValue;
  v117 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&item.fields.currentCryptoKey = *(_OWORD *)&v115->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&item.fields.fakeValue = v116;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v301 = item;
  v118 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v301, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(this->fields.svtId, 0LL);
  if ( !v117 )
    goto LABEL_244;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v117, v118, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_244;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !v114 )
    goto LABEL_244;
  this->fields.rarityId = v114->fields.rarity;
  if ( !userServantEntity )
    goto LABEL_244;
  v119 = (UserServantCollectionEntity_o *)Instance;
  Instance = UserServantEntity__getFrameType(userServantEntity, 0LL);
  this->fields.frameType = Instance;
  if ( !v119 )
    goto LABEL_244;
  p_baseItem = &this->fields.baseItem;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  UserServantCollectionEntity__getFriendShipRankInfo(v119, &friendshipRank, &this->fields.friendshipMax, 0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0LL);
  this->fields.isBase = 0;
  *(_WORD *)&this->fields.isCostOver = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.equipUserServantEntity,
    0LL,
    v121,
    v122,
    v123,
    v124,
    v125,
    v126);
  this->fields.equipServantEntity = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.equipServantEntity, 0LL, v127, v128, v129, v130, v131, v132);
  this->fields.equipIdList = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.equipIdList, 0LL, v133, v134, v135, v136, v137, v138);
  Instance = (int64_t)this->fields.servantEntity;
  if ( !Instance )
    goto LABEL_244;
  IsNotSameParty = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0LL);
  v139 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v139,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  v140 = num;
  for ( i = 0; ; ++i )
  {
    v142 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v142 = BalanceConfig_TypeInfo;
    }
    if ( i >= v142->static_fields->DeckMemberMax )
      break;
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, i, 0LL);
    if ( !Instance )
      goto LABEL_244;
    v143 = (PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 112) )
    {
      v144 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_244;
      v145 = *(_OWORD *)&v144->fields.id.fields.fakeValue;
      *(_OWORD *)&item.fields.currentCryptoKey = *(_OWORD *)&v144->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&item.fields.fakeValue = v145;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v300 = item;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v300, 0LL);
      v146 = v143->fields.userServantEntity;
      if ( !v146 )
        goto LABEL_244;
      v147 = *(_OWORD *)&v146->fields.id.fields.fakeValue;
      v148 = Instance;
      *(_OWORD *)&v299.fields.currentCryptoKey = *(_OWORD *)&v146->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v299.fields.fakeValue = v147;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v299, 0LL);
      if ( v148 == Instance )
      {
        this->fields.isSame = 0;
        this->fields.isBase = v140 == i;
        this->fields.partyIndex = i;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v143, 0LL);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v165);
        break;
      }
      if ( v140 != i )
      {
        v149 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_244;
        v151 = *(_QWORD *)&v149[2].fields.currentCryptoKey;
        v150 = *(_QWORD *)&v149[2].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v315.fields.currentCryptoKey = v151;
        *(_QWORD *)&v315.fields.fakeValue = v150;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v315, 0LL);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v143->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_244;
        v153 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(servantEntity[2], 0LL);
        v140 = num;
        if ( v153 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else
        {
          if ( !IsNotSameParty )
            goto LABEL_52;
          Instance = (int64_t)v143->fields.servantEntity;
          if ( !Instance )
            goto LABEL_244;
          Instance = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0LL);
          if ( (Instance & 1) == 0 )
            goto LABEL_52;
          Instance = (int64_t)*p_servantEntity;
          if ( !*p_servantEntity )
            goto LABEL_244;
          Instance = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0LL);
          if ( !v143->fields.servantEntity )
            goto LABEL_244;
          v154 = Instance;
          Instance = ServantEntity__GetNotSamePartyKey(v143->fields.servantEntity, 0LL);
          if ( v154 == (_DWORD)Instance )
          {
            this->fields.isNotSameParty = 1;
            Instance = (int64_t)v143->fields.servantEntity;
            if ( !Instance )
              goto LABEL_244;
            Instance = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0LL);
            if ( !v139 )
              goto LABEL_244;
            items = v139->fields._items;
            v156 = Method_System_Collections_Generic_List_int__Add__;
            ++v139->fields._version;
            if ( !items )
              goto LABEL_244;
            size = v139->fields._size;
            v72 = (const MethodInfo *)(unsigned int)Instance;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v139,
                Instance,
                *(const MethodInfo_366EC48 **)(*(_QWORD *)(v156[4] + 192LL) + 112LL));
            }
            else
            {
              v139->fields._size = size + 1;
              items->m_Items[size + 1] = Instance;
            }
          }
          else
          {
LABEL_52:
            if ( this->fields.commonRestrictionId == -1 )
            {
              v158 = v143->fields.servantEntity;
              if ( !v158 )
                goto LABEL_244;
              v160 = *(_QWORD *)&v158->fields.baseSvtId.fields.currentCryptoKey;
              v159 = *(_QWORD *)&v158->fields.baseSvtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v316.fields.currentCryptoKey = v160;
              *(_QWORD *)&v316.fields.fakeValue = v159;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v316, 0LL);
              if ( !*p_servantEntity )
                goto LABEL_244;
              v161 = Instance;
              v162 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560((*p_servantEntity)[2], 0LL);
              if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
              IncludedRestrictionIds = CommonRestrictionMaster__GetIncludedRestrictionIds(v161, v162, 0LL);
              if ( (IncludedRestrictionIds & 0x80000000) == 0 )
                this->fields.commonRestrictionId = IncludedRestrictionIds;
            }
          }
        }
      }
    }
  }
  if ( (this->fields.partyIndex & 0x80000000) != 0 )
  {
    Instance = (int64_t)*p_baseItem;
    if ( !*p_baseItem )
      goto LABEL_244;
    cost = partyItem->fields.cost;
    Instance = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL);
    if ( !*p_servantEntity )
      goto LABEL_244;
    this->fields.isCostOver = cost - (int)Instance + (*p_servantEntity)[9].fields.fakeValue > partyItem->fields.maxCost;
  }
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_244;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  this->fields.isLock = Instance & 1;
  if ( !this->fields.userServantEntity )
    goto LABEL_244;
  IsChoice = UserServantEntity__IsChoice(this->fields.userServantEntity, 0LL);
  *(_WORD *)&this->fields.isSwapLock = 0;
  *(_WORD *)&this->fields.isLockMode = 0;
  this->fields.isChoice = IsChoice;
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_244;
  v168 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_244;
  v169 = *(_OWORD *)&v168->fields.id.fields.fakeValue;
  v170 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&item.fields.currentCryptoKey = *(_OWORD *)&v168->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&item.fields.fakeValue = v169;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v298 = item;
  v171 = v170 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v298, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  v172 = v171;
  this->fields.isPush = v172;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_244;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v173 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v173 )
    goto LABEL_244;
  this->fields.isLeave = UserServantEntity__IsLeave(v173, 0LL);
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v174);
  v175 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v175 )
    goto LABEL_244;
  Instance = UserServantEntity__getUniqueSvtRestriction_41685144(
               v175,
               this->fields.questRestrictionInfo,
               partyItem,
               v140,
               this->fields.partyIndex,
               0LL);
  v176 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v176 )
    goto LABEL_244;
  IsUniqueIndividualityRestriction_41685524 = UserServantEntity__IsUniqueIndividualityRestriction_41685524(
                                                v176,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                v140,
                                                this->fields.partyIndex,
                                                0LL);
  this->fields.isFatigureRecover = 0;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_41685524;
  this->fields.fatigureTime = -1LL;
  v179 = this->fields.questRestrictionInfo;
  if ( v179 && v179->fields.isFatigure )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_244;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !*p_questRestrictionInfo )
      goto LABEL_244;
    v180 = (UserEventServantFatigueMaster_o *)Instance;
    eventId = (*p_questRestrictionInfo)->fields.eventId;
    v183 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v182 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v317.fields.currentCryptoKey = v183;
    *(_QWORD *)&v317.fields.fakeValue = v182;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v317, 0LL);
    if ( !v180 )
      goto LABEL_244;
    v140 = num;
    if ( UserEventServantFatigueMaster__GetFatigueInfo(
           v180,
           &recoverAt,
           &this->fields.isFatigureRecover,
           eventId,
           Instance,
           0LL) )
    {
      v184 = recoverAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v184 > NetworkManager__getTime(0LL) )
        this->fields.fatigureTime = recoverAt;
    }
  }
  AllOutBattleAlreadyUsed = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v178);
  v186 = this->fields.questRestrictionInfo;
  this->fields._IsAllOutBattle_k__BackingField = AllOutBattleAlreadyUsed;
  if ( v186 && v186->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C1C955 )
    {
      sub_1C3B764(&NetworkManager_TypeInfo, v72);
      byte_4C1C955 = 1;
    }
    Instance = (int64_t)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (int64_t)NetworkManager_TypeInfo;
    }
    if ( !*p_questRestrictionInfo || !Master_object )
      goto LABEL_244;
    Instance = UserEventDataLostMaster__TryGetEntity(
                 (UserEventDataLostMaster_o *)Master_object,
                 &entity,
                 *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                 (*p_questRestrictionInfo)->fields.dataLostBattleId,
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      v188 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_244;
      v189 = entity;
      v191 = *(_QWORD *)&v188->fields.svtId.fields.currentCryptoKey;
      v190 = *(_QWORD *)&v188->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v318.fields.currentCryptoKey = v191;
      *(_QWORD *)&v318.fields.fakeValue = v190;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v318, 0LL);
      if ( !v189 )
        goto LABEL_244;
      Instance = UserEventDataLostEntity__IsRestart(v189, Instance, 0LL);
      v192 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_244;
      v193 = Instance;
      v194 = entity;
      v196 = *(_QWORD *)&v192->fields.svtId.fields.currentCryptoKey;
      v195 = *(_QWORD *)&v192->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v319.fields.currentCryptoKey = v196;
      *(_QWORD *)&v319.fields.fakeValue = v195;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v319, 0LL);
      if ( !v194 )
        goto LABEL_244;
      if ( (v193 & 1) != 0 )
      {
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(v194, Instance, 0LL);
      }
      else if ( UserEventDataLostEntity__IsDataLost(v194, Instance, 0LL) )
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
    v197 = (*p_questRestrictionInfo)->fields.eventId;
  else
    v197 = -1;
  if ( !this->fields.isBase )
  {
    partyIndex = this->fields.partyIndex;
    if ( (partyIndex & 0x80000000) == 0 )
      goto LABEL_135;
  }
  Instance = (int64_t)PartyListViewItem__GetMember(partyItem, v140, 0LL);
  if ( !Instance )
    goto LABEL_244;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(EquipSvtId, 0LL) >= 1 )
  {
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v199 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_244;
    v200 = Instance;
    v202 = *(_QWORD *)&v199->fields.svtId.fields.currentCryptoKey;
    v201 = *(_QWORD *)&v199->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v320.fields.currentCryptoKey = v202;
    *(_QWORD *)&v320.fields.fakeValue = v201;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v320, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_244;
    v203 = Instance;
    Rarity = UserServantEntity__getRarity(*p_userServantEntity, 0LL);
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, v140, 0LL);
    if ( !Instance )
      goto LABEL_244;
    v321 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v321, 0LL);
    if ( !v200 )
      goto LABEL_244;
    p_skillName = (System_String_o **)&v308;
    p_actMaxRarity = &v307;
LABEL_146:
    this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                     (PartyOrganizationUtility_o *)Instance,
                                     p_skillName,
                                     p_actMaxRarity,
                                     v203,
                                     Rarity,
                                     Instance,
                                     v197,
                                     v205);
    goto LABEL_147;
  }
  partyIndex = this->fields.partyIndex;
  if ( (partyIndex & 0x80000000) == 0 )
  {
LABEL_135:
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, partyIndex, 0LL);
    if ( !Instance )
      goto LABEL_244;
    v209 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v209, 0LL) < 1 )
      goto LABEL_147;
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v210 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_244;
    v211 = Instance;
    v213 = *(_QWORD *)&v210->fields.svtId.fields.currentCryptoKey;
    v212 = *(_QWORD *)&v210->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v322.fields.currentCryptoKey = v213;
    *(_QWORD *)&v322.fields.fakeValue = v212;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v322, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_244;
    v203 = Instance;
    Rarity = UserServantEntity__getRarity(*p_userServantEntity, 0LL);
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, this->fields.partyIndex, 0LL);
    if ( !Instance )
      goto LABEL_244;
    v323 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v323, 0LL);
    if ( !v211 )
      goto LABEL_244;
    p_skillName = &skillName;
    p_actMaxRarity = &actMaxRarity;
    goto LABEL_146;
  }
LABEL_147:
  v214 = this->fields.questRestrictionInfo;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  this->fields._SvtPointRank_k__BackingField = 0;
  this->fields._SvtPoint_k__BackingField = 0;
  if ( !v214 )
    goto LABEL_165;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
    goto LABEL_244;
  v215 = (EventServantPointRankMaster_o *)Instance;
  if ( !EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v197, 0LL) )
    goto LABEL_165;
  this->fields._IsDispSvtPoint_k__BackingField = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v216 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_244;
  v217 = *(_OWORD *)&v216->fields.userId.fields.fakeValue;
  v218 = (UserEventServantPointMaster_o *)Instance;
  *(_OWORD *)&item.fields.currentCryptoKey = *(_OWORD *)&v216->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&item.fields.fakeValue = v217;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v297 = item;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v297, 0LL);
  if ( !*p_userServantEntity )
    goto LABEL_244;
  v219 = Instance;
  Instance = UserServantEntity__getSvtId(*p_userServantEntity, 0LL);
  if ( !v218 )
    goto LABEL_244;
  p_SvtPoint_k__BackingField = &this->fields._SvtPoint_k__BackingField;
  if ( UserEventServantPointMaster__TryGetEntity(v218, &v304, v219, v197, Instance, 0LL) )
  {
    Instance = (int64_t)v304;
    if ( !v304 )
      goto LABEL_244;
    *p_SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v304, 0LL);
  }
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
LABEL_244:
    sub_1C3B9C0(Instance, v72);
  v221 = *p_SvtPoint_k__BackingField;
  SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
  EnableEntity = EventServantPointRankMaster__GetEnableEntity(v215, v197, v221, SvtId, 0LL);
  if ( EnableEntity )
    this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
LABEL_165:
  if ( this->fields._PartyListViewItemMenuKind_k__BackingField != 9 )
  {
    this->fields._OrganizedWave_k__BackingField = 0;
    goto LABEL_204;
  }
  v224 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v224,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  v225 = baseDeckItemList;
  if ( !baseDeckItemList )
    goto LABEL_244;
  v226 = *(_QWORD *)&baseDeckItemList->max_length;
  this->fields._MaxWave_k__BackingField = v226;
  if ( (int)v226 < 1 )
    goto LABEL_197;
  v227 = 0LL;
  v228 = 1;
  do
  {
    if ( v227 >= (unsigned int)v226 )
      sub_1C3B9C8(Instance, v72);
    v229 = v225->m_Items[v227];
    for ( j = 0; ; ++j )
    {
      Instance = (int64_t)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (int64_t)BalanceConfig_TypeInfo;
      }
      if ( j >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 160LL) )
        break;
      if ( !v229 )
        goto LABEL_244;
      Instance = (int64_t)PartyListViewItem__GetMember(v229, j, 0LL);
      if ( !Instance )
        goto LABEL_244;
      v231 = (PartyOrganizationListViewItem_o *)Instance;
      if ( *(_QWORD *)(Instance + 112) )
      {
        v232 = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v232, 0LL);
        if ( !v224 )
          goto LABEL_244;
        v233 = v224->fields._items;
        v234 = Method_System_Collections_Generic_List_int__Add__;
        ++v224->fields._version;
        if ( !v233 )
          goto LABEL_244;
        v235 = v224->fields._size;
        v72 = (const MethodInfo *)(unsigned int)Instance;
        if ( (unsigned int)v235 >= v233->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v224,
            Instance,
            *(const MethodInfo_366EC48 **)(*(_QWORD *)(v234[4] + 192LL) + 112LL));
          if ( !v228 )
            continue;
        }
        else
        {
          v224->fields._size = v235 + 1;
          v233->m_Items[v235 + 1] = Instance;
          if ( !v228 )
            continue;
        }
        v236 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_244;
        v237 = v231->fields.userServantEntity;
        if ( !v237 )
          goto LABEL_244;
        v238 = *(_OWORD *)&v237->fields.id.fields.fakeValue;
        *(_OWORD *)&item.fields.currentCryptoKey = *(_OWORD *)&v237->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&item.fields.fakeValue = v238;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v296 = item;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_47886632(&v236->fields.id, &v296, 0LL) )
        {
          v239 = PartyOrganizationListViewItem__GetEquipList(v231, 0LL);
          PartyServantListViewItem__SetEquipStatus(this, v239, v240);
          this->fields._OrganizedWave_k__BackingField = v228;
          v228 = 0;
          this->fields._IsClearedWave_k__BackingField = v229->fields._IsClearedWave_k__BackingField;
        }
      }
    }
    v225 = baseDeckItemList;
    ++v227;
    if ( v228 )
      ++v228;
    else
      v228 = 0;
    LODWORD(v226) = baseDeckItemList->max_length;
  }
  while ( (__int64)v227 < (int)v226 );
  if ( !v228 )
    goto LABEL_204;
LABEL_197:
  v242 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v241 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v324.fields.currentCryptoKey = v242;
  *(_QWORD *)&v324.fields.fakeValue = v241;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v324, 0LL);
  if ( !v224 )
    goto LABEL_244;
  if ( System_Collections_Generic_List_int___Contains(
         v224,
         Instance,
         (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__)
    && !this->fields.isNotSameParty )
  {
    this->fields.isSame = 1;
  }
LABEL_204:
  v243 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
  System_Collections_Generic_List_ValueTuple_int__int__Int32Enum_____ctor(
    v243,
    (const MethodInfo_363D21C *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
  if ( *p_questRestrictionInfo )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_244;
    v244 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance || !v244 )
      goto LABEL_244;
    Instance = (int64_t)EventCampaignMaster__GetFriendshipUpCampaigns(
                          (EventCampaignMaster_o *)v244,
                          *(_QWORD *)(Instance + 104),
                          0LL);
    if ( Instance )
    {
      v245 = (System_Collections_Generic_List_object__o *)Instance;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v246 = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventQuestMaster___);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&item,
          v245,
          (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
        v303 = *(System_Collections_Generic_List_Enumerator_object__o *)&item.fields.currentCryptoKey;
        while ( 1 )
        {
          v247 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v303,
                   (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
          if ( !v247 )
            break;
          current = (EventCampaignEntity_o *)v303.fields._current;
          if ( !v303.fields._current )
            sub_1C3B9C0(v247, v248);
          monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v303.fields._current[2].monitor;
          if ( monitor && monitor[1].monitor )
          {
            v252 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
            v251 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v325.fields.currentCryptoKey = v252;
            *(_QWORD *)&v325.fields.fakeValue = v251;
            v253 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v325, 0LL);
            v247 = System_Linq_Enumerable__Contains_int_(
                     monitor,
                     v253,
                     (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___);
            if ( !v247 )
              continue;
          }
          if ( !*p_questRestrictionInfo )
            sub_1C3B9C0(v247, v248);
          if ( !v246 )
            sub_1C3B9C0(v247, v248);
          if ( !EventQuestMaster__IsEventNotIncluded(
                  (EventQuestMaster_o *)v246,
                  current->fields.eventId,
                  (*p_questRestrictionInfo)->fields.questId,
                  (*p_questRestrictionInfo)->fields.questPhase,
                  7,
                  0LL,
                  0LL) )
          {
            v254 = current->fields.eventId;
            FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0LL);
            calcType = current->fields.calcType;
            v257 = FriendshipBonusValue;
            LODWORD(item.fields.hiddenValue) = 0;
            item.fields.currentCryptoKey = 0LL;
            *(_QWORD *)&v312.fields.Item1 = &item;
            v312.fields.Item3 = v254;
            System_ValueTuple_int__int__Int32Enum____ctor(
              v312,
              v257,
              calcType,
              Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__,
              v258);
            if ( !v243 )
              sub_1C3B9C0(v259, v260);
            v313 = *(System_ValueTuple_int__int__Int32Enum__o *)&item.fields.currentCryptoKey;
            v261 = v243->fields._items;
            v262 = Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__;
            ++v243->fields._version;
            if ( !v261 )
              sub_1C3B9C0(v259, *(_QWORD *)&v313.fields.Item1);
            v263 = v243->fields._size;
            if ( (unsigned int)v263 >= v261->max_length )
            {
              System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____AddWithResize(
                v243,
                v313,
                *(const MethodInfo_363DAA8 **)(*(_QWORD *)(v262[4] + 192LL) + 112LL));
            }
            else
            {
              v243->fields._size = v263 + 1;
              *((System_ValueTuple_int__int__Int32Enum__o *)v261->m_Items + v263) = v313;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v303,
          (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
        goto LABEL_227;
      }
      goto LABEL_244;
    }
  }
LABEL_227:
  if ( !v243 )
    goto LABEL_244;
  v264 = (struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *)System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____ToArray(
                                                                                    v243,
                                                                                    (const MethodInfo_363F66C *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
  this->fields._FriendshipUpValTuple_k__BackingField = v264;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (int64_t)v264,
    v265,
    v266,
    v267,
    v268,
    v269,
    v270);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_244;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v271 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v271 )
    goto LABEL_244;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v271, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
    (int64_t)SkillCategoryIdList,
    v273,
    v274,
    v275,
    v276,
    v277,
    v278);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_244;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
    (int64_t)TreasureDeviceCategoryIdList,
    v280,
    v281,
    v282,
    v283,
    v284,
    v285);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_244;
  this->fields.priority = *(_DWORD *)(Instance + 52);
  PartyServantListViewItem__InitAfterSecondSort(this, v72);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_244;
  v286 = BalanceConfig_TypeInfo;
  v287 = *(_DWORD *)(Instance + 276);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v286 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v286->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v287;
  if ( !Instance )
    goto LABEL_244;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_244;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_244;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo3;
  if ( !*p_iconLabelInfo3 )
    goto LABEL_244;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewItem___ctor_33410080(
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
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  IconLabelInfo_o *v37; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  IconLabelInfo_o *v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t Instance; // x0
  const MethodInfo *v52; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct UserServantEntity_o **p_userServantEntity; // x22
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  Il2CppObject *MasterData_object; // x0
  __int64 v81; // x21
  __int64 v82; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v83; // x20
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // x27
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  Il2CppObject *v92; // x20
  struct UserServantEntity_o *v93; // x8
  int32_t v94; // w29
  ServantLimitEntity_o *v95; // x20
  struct UserServantEntity_o *v96; // x8
  __int128 v97; // q1
  UserServantCollectionMaster_o *v98; // x29
  int64_t v99; // x21
  UserServantCollectionEntity_o *v100; // x29
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  char v120; // w29
  int32_t v121; // w28
  PartyOrganizationListViewItem_o *v122; // x20
  struct UserServantEntity_o *v123; // x8
  __int128 v124; // q0
  struct UserServantEntity_o *v125; // x8
  __int128 v126; // q0
  int64_t v127; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v128; // x8
  __int64 v129; // x21
  __int64 v130; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  int v132; // w21
  int v133; // w21
  struct ServantEntity_o *v134; // x8
  __int64 v135; // x20
  __int64 v136; // x21
  int32_t v137; // w20
  int32_t v138; // w21
  System_Int64_array *EquipList; // x0
  const MethodInfo *v140; // x2
  int32_t cost; // w20
  UserServantEntity_o *v142; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v144; // x8
  const MethodInfo *v145; // x1
  UserServantEntity_o *v146; // x8
  UserServantEntity_o *v147; // x8
  bool IsUniqueIndividualityRestriction_41685524; // w0
  const MethodInfo *v149; // x1
  struct QuestRestrictionInfo_o *v150; // x8
  UserEventServantFatigueMaster_o *v151; // x23
  int32_t eventId; // w24
  __int64 v153; // x21
  __int64 v154; // x25
  int64_t v155; // x20
  UserServantEntity_o *v156; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v158; // x2
  int32_t v159; // w3
  System_String_o *v160; // x4
  BattleSetupInfo_o *v161; // x5
  FollowerInfo_o *v162; // x6
  PartyListViewItem_o *v163; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v165; // x2
  int32_t v166; // w3
  System_String_o *v167; // x4
  BattleSetupInfo_o *v168; // x5
  FollowerInfo_o *v169; // x6
  PartyListViewItem_o *v170; // x7
  BalanceConfig_c *v171; // x8
  int v172; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct PartyOrganizationListViewItem_o **p_baseItem; // [xsp+10h] [xbp-110h]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+18h] [xbp-108h]
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+20h] [xbp-100h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+28h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v178; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v179; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v180; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v181; // [xsp+90h] [xbp-90h]
  int64_t recoverAt; // [xsp+B0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v184; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v185; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v186; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v187; // 0:x0.16

  if ( (byte_4C1DD60 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1C3B764(&CommonRestrictionMaster_TypeInfo, v17);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantClassMaster___, v18);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitMaster___, v19);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v21);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v22);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23);
    sub_1C3B764(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v24);
    sub_1C3B764(&IconLabelInfo_TypeInfo, v25);
    sub_1C3B764(&NetworkManager_TypeInfo, v26);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    byte_4C1DD60 = 1;
  }
  friendshipRank = 0;
  recoverAt = 0LL;
  v30 = (IconLabelInfo_o *)sub_1C3B9B0(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v30, 0LL);
  this->fields.iconLabelInfo1 = v30;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo1, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  v37 = (IconLabelInfo_o *)sub_1C3B9B0(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v37, 0LL);
  this->fields.iconLabelInfo2 = v37;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo2, (int64_t)v37, v38, v39, v40, v41, v42, v43);
  v44 = (IconLabelInfo_o *)sub_1C3B9B0(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v44, 0LL);
  this->fields.iconLabelInfo3 = v44;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.iconLabelInfo3, (int64_t)v44, v45, v46, v47, v48, v49, v50);
  ListViewItem___ctor_42199332((ListViewItem_o *)this, index, 0LL);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_95;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, num, 0LL);
  this->fields.baseItem = MemberItem;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.baseItem, (int64_t)MemberItem, v54, v55, v56, v57, v58, v59);
  baseItem = this->fields.baseItem;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_95;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
    (int64_t)userServantEntity,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.setupInfo, (int64_t)setupInfo, v68, v69, v70, v71, v72, v73);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo,
    (int64_t)questRestrictionInfo,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  if ( !this->fields.userServantEntity )
    goto LABEL_95;
  p_baseItem = &this->fields.baseItem;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
  v82 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v81 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v83 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v184.fields.currentCryptoKey = v82;
  *(_QWORD *)&v184.fields.fakeValue = v81;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v184, 0LL);
  if ( !v83 )
    goto LABEL_95;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v83,
             Instance,
             (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.servantEntity, (int64_t)Entity, v86, v87, v88, v89, v90, v91);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  v92 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(this->fields.svtId, 0LL);
  v93 = this->fields.userServantEntity;
  if ( !v93 )
    goto LABEL_95;
  v94 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v93->fields.limitCount, 0LL);
  if ( !v92 )
    goto LABEL_95;
  v95 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v92, v94, Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v96 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v97 = *(_OWORD *)&v96->fields.userId.fields.fakeValue;
  v98 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v181.fields.currentCryptoKey = *(_OWORD *)&v96->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v181.fields.fakeValue = v97;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v180 = v181;
  v99 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v180, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(this->fields.svtId, 0LL);
  if ( !v98 )
    goto LABEL_95;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v98, v99, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_95;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !v95 )
    goto LABEL_95;
  this->fields.rarityId = v95->fields.rarity;
  if ( !userServantEntity )
    goto LABEL_95;
  v100 = (UserServantCollectionEntity_o *)Instance;
  Instance = UserServantEntity__getFrameType(userServantEntity, 0LL);
  this->fields.frameType = Instance;
  if ( !v100 )
    goto LABEL_95;
  UserServantCollectionEntity__getFriendShipRankInfo(v100, &friendshipRank, &this->fields.friendshipMax, 0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0LL);
  this->fields.isBase = 0;
  *(_WORD *)&this->fields.isCostOver = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0LL;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.equipUserServantEntity,
    0LL,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  this->fields.equipServantEntity = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.equipServantEntity, 0LL, v107, v108, v109, v110, v111, v112);
  this->fields.equipIdList = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.equipIdList, 0LL, v113, v114, v115, v116, v117, v118);
  Instance = (int64_t)this->fields.servantEntity;
  if ( !Instance )
    goto LABEL_95;
  Instance = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0LL);
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_95;
  v120 = Instance;
  v121 = 0;
  while ( v121 < (signed int)memberItemList->max_length )
  {
    Instance = (int64_t)WarBoardPartyListViewItem__GetMemberItem(partyItem, v121, 0LL);
    if ( !Instance )
      goto LABEL_95;
    v122 = (PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 112) )
    {
      v123 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_95;
      v124 = *(_OWORD *)&v123->fields.id.fields.fakeValue;
      *(_OWORD *)&v181.fields.currentCryptoKey = *(_OWORD *)&v123->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v181.fields.fakeValue = v124;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v179 = v181;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v179, 0LL);
      v125 = v122->fields.userServantEntity;
      if ( !v125 )
        goto LABEL_95;
      v126 = *(_OWORD *)&v125->fields.id.fields.fakeValue;
      v127 = Instance;
      *(_OWORD *)&v178.fields.currentCryptoKey = *(_OWORD *)&v125->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v178.fields.fakeValue = v126;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v178, 0LL);
      if ( v127 == Instance )
      {
        this->fields.isSame = 0;
        this->fields.isBase = num == v121;
        this->fields.partyIndex = v121;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v122, 0LL);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v140);
        break;
      }
      if ( num != v121 )
      {
        v128 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_95;
        v130 = *(_QWORD *)&v128[2].fields.currentCryptoKey;
        v129 = *(_QWORD *)&v128[2].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v185.fields.currentCryptoKey = v130;
        *(_QWORD *)&v185.fields.fakeValue = v129;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v185, 0LL);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v122->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_95;
        v132 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(servantEntity[2], 0LL);
        if ( v132 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else
        {
          if ( (v120 & 1) == 0 )
            goto LABEL_47;
          Instance = (int64_t)v122->fields.servantEntity;
          if ( !Instance )
            goto LABEL_95;
          Instance = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0LL);
          if ( (Instance & 1) == 0 )
            goto LABEL_47;
          Instance = (int64_t)*p_servantEntity;
          if ( !*p_servantEntity )
            goto LABEL_95;
          Instance = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0LL);
          if ( !v122->fields.servantEntity )
            goto LABEL_95;
          v133 = Instance;
          Instance = ServantEntity__GetNotSamePartyKey(v122->fields.servantEntity, 0LL);
          if ( v133 == (_DWORD)Instance )
          {
            this->fields.isNotSameParty = 1;
          }
          else
          {
LABEL_47:
            if ( this->fields.commonRestrictionId == -1 )
            {
              v134 = v122->fields.servantEntity;
              if ( !v134 )
                goto LABEL_95;
              v136 = *(_QWORD *)&v134->fields.baseSvtId.fields.currentCryptoKey;
              v135 = *(_QWORD *)&v134->fields.baseSvtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v186.fields.currentCryptoKey = v136;
              *(_QWORD *)&v186.fields.fakeValue = v135;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v186, 0LL);
              if ( !*p_servantEntity )
                goto LABEL_95;
              v137 = Instance;
              v138 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560((*p_servantEntity)[2], 0LL);
              if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
              Instance = CommonRestrictionMaster__GetIncludedRestrictionIds(v137, v138, 0LL);
              if ( (Instance & 0x80000000) == 0 )
                this->fields.commonRestrictionId = Instance;
            }
          }
        }
      }
    }
    memberItemList = partyItem->fields.memberItemList;
    ++v121;
    if ( !memberItemList )
      goto LABEL_95;
  }
  if ( (this->fields.partyIndex & 0x80000000) != 0 )
  {
    Instance = (int64_t)*p_baseItem;
    if ( !*p_baseItem )
      goto LABEL_95;
    cost = partyItem->fields.cost;
    Instance = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL);
    if ( !*p_servantEntity )
      goto LABEL_95;
    this->fields.isCostOver = cost - (int)Instance + (*p_servantEntity)[9].fields.fakeValue > partyItem->fields.maxCost;
  }
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v142 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v142 )
    goto LABEL_95;
  IsChoice = UserServantEntity__IsChoice(v142, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  *(_DWORD *)&this->fields.isLockMode = 0;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_95;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v144 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v144 )
    goto LABEL_95;
  this->fields.isLeave = UserServantEntity__IsLeave(v144, 0LL);
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v145);
  v146 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v146 )
    goto LABEL_95;
  Instance = UserServantEntity__getUniqueSvtRestriction_41685144(
               v146,
               this->fields.questRestrictionInfo,
               0LL,
               num,
               this->fields.partyIndex,
               0LL);
  v147 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v147 )
    goto LABEL_95;
  IsUniqueIndividualityRestriction_41685524 = UserServantEntity__IsUniqueIndividualityRestriction_41685524(
                                                v147,
                                                this->fields.questRestrictionInfo,
                                                0LL,
                                                num,
                                                this->fields.partyIndex,
                                                0LL);
  this->fields.isFatigureRecover = 0;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_41685524;
  this->fields.fatigureTime = -1LL;
  v150 = this->fields.questRestrictionInfo;
  if ( v150 && v150->fields.isFatigure )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
      if ( *p_questRestrictionInfo )
      {
        v151 = (UserEventServantFatigueMaster_o *)Instance;
        eventId = (*p_questRestrictionInfo)->fields.eventId;
        v154 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v153 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v187.fields.currentCryptoKey = v154;
        *(_QWORD *)&v187.fields.fakeValue = v153;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v187, 0LL);
        if ( v151 )
        {
          if ( UserEventServantFatigueMaster__GetFatigueInfo(
                 v151,
                 &recoverAt,
                 &this->fields.isFatigureRecover,
                 eventId,
                 Instance,
                 0LL) )
          {
            v155 = recoverAt;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( v155 > NetworkManager__getTime(0LL) )
              this->fields.fatigureTime = recoverAt;
          }
          goto LABEL_81;
        }
      }
    }
LABEL_95:
    sub_1C3B9C0(Instance, v52);
  }
LABEL_81:
  Instance = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v149);
  this->fields._IsAllOutBattle_k__BackingField = Instance & 1;
  if ( !this->fields.userServantEntity )
    goto LABEL_95;
  Instance = UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0LL);
  v156 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v156 )
    goto LABEL_95;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v156, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
    (int64_t)SkillCategoryIdList,
    v158,
    v159,
    v160,
    v161,
    v162,
    v163);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_95;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
    (int64_t)TreasureDeviceCategoryIdList,
    v165,
    v166,
    v167,
    v168,
    v169,
    v170);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_95;
  this->fields.priority = *(_DWORD *)(Instance + 52);
  PartyServantListViewItem__InitAfterSecondSort(this, v52);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_95;
  v171 = BalanceConfig_TypeInfo;
  v172 = *(_DWORD *)(Instance + 276);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v171 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v171->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v172;
  if ( !Instance )
    goto LABEL_95;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_95;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_95;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo3;
  if ( !*p_iconLabelInfo3 )
    goto LABEL_95;
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
  if ( (byte_4C1DD61 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4C1DD61 = 1;
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
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v33, 0LL);
  v7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
  if ( !v7 )
    goto LABEL_38;
  v8 = (int)this;
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v7[6], 0LL);
  if ( !v2->fields.userServantEntity )
    goto LABEL_38;
  v9 = (int)this;
  this = (PartyServantListViewItem_o *)UserServantEntity__getDispLimitCount(v2->fields.userServantEntity, 0, 0LL);
  v10 = v2->fields.userServantEntity;
  if ( !v10 )
    goto LABEL_38;
  baseItem = v2->fields.baseItem;
  if ( !baseItem )
    goto LABEL_38;
  v12 = 1;
  if ( !QuestRestrictionInfo__IsRestriction_41920980(
          questRestrictionInfo,
          &v2->fields.isQuestRestrictionWhole,
          v8,
          v9,
          (int32_t)this,
          v10->fields.lv,
          baseItem->fields._InitPos_k__BackingField,
          1,
          0LL) )
  {
    this = (PartyServantListViewItem_o *)v2->fields.questRestrictionInfo;
    if ( !this )
      goto LABEL_38;
    if ( QuestRestrictionInfo__IsSupportOnly((QuestRestrictionInfo_o *)this, 0LL) )
      return 1;
    v13 = v2->fields.questRestrictionInfo;
    v14 = *(_QWORD *)&v2->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&v2->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v34.fields.currentCryptoKey = v14;
    *(_QWORD *)&v34.fields.fakeValue = v15;
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v34, 0LL);
    v16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
    if ( !v16 )
      goto LABEL_38;
    v17 = (int)this;
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                           v16[6],
                                           0LL);
    if ( !v2->fields.userServantEntity )
      goto LABEL_38;
    v18 = (int)this;
    this = (PartyServantListViewItem_o *)UserServantEntity__getDispLimitCount(v2->fields.userServantEntity, 0, 0LL);
    if ( !v13 )
      goto LABEL_38;
    if ( QuestRestrictionInfo__GetFixedMyServantSingleRestriction(
           v13,
           v17,
           v18,
           (int32_t)this,
           v2->fields.memberIndex,
           0LL) )
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
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v35, 0LL);
    v22 = v2->fields.baseItem;
    if ( !v22 || !v19 )
      goto LABEL_38;
    this = (PartyServantListViewItem_o *)QuestRestrictionInfo__IsServantNumAndFixedServantPositionRestriction(
                                           v19,
                                           (int32_t)this,
                                           v22->fields._InitPos_k__BackingField,
                                           0LL);
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
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                               v36,
                                               0LL);
        v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
        if ( v28 )
        {
          v29 = (int)this;
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                                 v28[6],
                                                 0LL);
          if ( v2->fields.userServantEntity )
          {
            v30 = (int)this;
            this = (PartyServantListViewItem_o *)UserServantEntity__getDispLimitCount(
                                                   v2->fields.userServantEntity,
                                                   0,
                                                   0LL);
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
                         0LL);
            }
          }
        }
      }
    }
LABEL_38:
    sub_1C3B9C0(this, method);
  }
  return v12;
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x22
  __int64 v11; // x23
  UserEventAlloutBattleMaster_o *v12; // x21
  struct QuestRestrictionInfo_o *v13; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4C1DD66 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___, method);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4C1DD66 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = questRestrictionInfo->fields.allOutBattleGroupNo;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (UserEventAlloutBattleMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v15, 0LL);
  v13 = this->fields.questRestrictionInfo;
  if ( !v13 || !v12 )
LABEL_13:
    sub_1C3B9C0(Instance, v8);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4C1DD69 & 1) == 0 )
  {
    sub_1C3B764(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4C1DD69 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1C3B9B0(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1C3B708((PartyOrganizationUtility_o *)tdInfo, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  return 0;
}


System_String_o *__fastcall PartyServantListViewItem__GetRestrictionMessage(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t commonRestrictionId; // w19

  if ( (byte_4C1DD65 & 1) == 0 )
  {
    sub_1C3B764(&CommonRestrictionMaster_TypeInfo, method);
    byte_4C1DD65 = 1;
  }
  commonRestrictionId = this->fields.commonRestrictionId;
  if ( (commonRestrictionId & 0x80000000) != 0 )
    return 0LL;
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  return CommonRestrictionMaster__GetRestrictionMessageFromId(commonRestrictionId, 0LL);
}


void __fastcall PartyServantListViewItem__InitAfterSecondSort(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  PartyServantListViewItem_o *v2; // x19
  struct UserServantEntity_o *userServantEntity; // x9
  __int128 v4; // q0
  struct ServantEntity_o *servantEntity; // x10
  struct UserServantEntity_o *v6; // x9
  __int128 v7; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+40h] [xbp-40h]

  v2 = this;
  if ( (byte_4C1DD6A & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4C1DD6A = 1;
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
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v8 = v10;
      v2->fields.sortValue2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v8, 0LL);
      v2->fields.sortValue2B = 0LL;
      return;
    }
LABEL_14:
    sub_1C3B9C0(this, method);
  }
  servantEntity = v2->fields.servantEntity;
  v2->fields.sortValue1B = v2->fields.priority;
  if ( !servantEntity )
    goto LABEL_14;
  v6 = v2->fields.userServantEntity;
  if ( !v6 )
    goto LABEL_14;
  v2->fields.sortValue2 = ((__int64)servantEntity->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)v2->fields.rarityId << 48) | v6->fields.lv;
  v7 = *(_OWORD *)&v6->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&v6->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v9 = v10;
  v2->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v9, 0LL);
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
  __int64 v19; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v21; // x0
  ListViewSort_FilterKind_array *v22; // x21
  UserServantEntity_o *v24; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v26; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v42; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v44; // w0

  if ( (byte_4C1DD63 & 1) == 0 )
  {
    sub_1C3B764(&FilterKindList_TypeInfo, sort);
    sub_1C3B764(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1C3B764(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4C1DD63 = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_3672F2C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_67;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v10 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v10 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v10->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                             (const MethodInfo_3672F2C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v12->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3672F2C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v13, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3672F2C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, sort, eventId, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v24 = this->fields.userServantEntity;
    if ( v24 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v24, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v26 = this->fields.userServantEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v26 )
          goto LABEL_67;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v26, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.skillCategoryIdList,
          (int64_t)SkillCategoryIdList,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.tdCategoryIdList,
          (int64_t)TreasureDeviceCategoryIdList,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
      }
    }
    ClassGroupFilterKindList = sub_1C3B80C(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v19 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_68;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1C3B80C(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v19 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_68:
      sub_1C3B9C8(ClassGroupFilterKindList, v19);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v42 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v44 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
    if ( ((IsUnSelectedAllTargetFilters ^ v42) & 1) != 0 )
    {
      if ( IsUnSelectedAllTargetFilters )
      {
        if ( !v44 )
          return 0;
      }
      else if ( !IsMatchEffectCategory )
      {
        return 0;
      }
    }
    else if ( !IsMatchEffectCategory && !v44 )
    {
      return 0;
    }
  }
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userServantEntity, this->fields.servantEntity, 0LL)
    || !ListViewSort__IsMatchServantSubAttriFilter(
          sort,
          this->fields.userServantEntity,
          this->fields.servantEntity,
          0LL) )
  {
    return 0;
  }
  ClassGroupFilterKindList = sub_1C3B80C(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
LABEL_67:
    sub_1C3B9C0(ClassGroupFilterKindList, sort);
  v19 = ClassGroupFilterKindList;
  if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    goto LABEL_68;
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
  v21 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v21 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v21->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_67;
  v22 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_3672F2C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v22, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v22, 0LL)
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
    sub_1C3B9C0(0LL, method);
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
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.userServantEntity,
    (int64_t)userServantEntity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_userServantEntity )
    sub_1C3B9C0(0LL, v10);
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
    sub_1C3B9C0(0LL, method);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  Il2CppObject **p_equipUserServantEntity; // x20
  PartyOrganizationUtility_o *p_equipServantEntity; // x19
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Int64_array **p_equipIdList; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppObject *Master_object; // x0
  __int64 v33; // x1
  struct System_Int64_array *v34; // x8
  Il2CppObject *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  Il2CppObject *v42; // x22
  int64_t v43; // x1
  BalanceConfig_c *v44; // x0
  struct System_Int64_array *v45; // x8
  Il2CppObject *v46; // x8
  void *monitor; // x21
  Il2CppClass *klass; // x22
  Il2CppObject *v49; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v50; // x20
  void *v51; // x21
  Il2CppClass *v52; // x22
  Il2CppObject *Entity; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4C1DD62 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, equipIds);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_1C3B764(&Method_DataManager_GetMaster_UserServantMaster___, v11);
    sub_1C3B764(&DataManager_TypeInfo, v12);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v14);
    sub_1C3B764(&long___TypeInfo, v15);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    byte_4C1DD62 = 1;
  }
  p_equipUserServantEntity = (Il2CppObject **)&this->fields.equipUserServantEntity;
  this->fields.equipUserServantEntity = 0LL;
  sub_1C3B708(
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.equipServantEntity, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.equipIdList = 0LL;
  p_equipIdList = &this->fields.equipIdList;
  sub_1C3B708((PartyOrganizationUtility_o *)p_equipIdList, 0LL, v26, v27, v28, v29, v30, v31);
  if ( !*(p_equipIdList - 1) )
    return;
  if ( !equipIds )
    goto LABEL_9;
  v34 = *p_equipIdList;
  if ( *p_equipIdList == equipIds )
    goto LABEL_14;
  v35 = System_Array__Clone((System_Array_o *)equipIds, 0LL);
  if ( v35 )
  {
    v42 = v35;
    v43 = sub_1C3B8A0(v35, long___TypeInfo);
    if ( !v43 )
    {
      sub_1C3BC80(v42);
LABEL_9:
      v44 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v44 = BalanceConfig_TypeInfo;
      }
      v43 = sub_1C3B80C(long___TypeInfo, (unsigned int)v44->static_fields->SvtEquipMax);
    }
  }
  else
  {
    v43 = 0LL;
  }
  *p_equipIdList = (struct System_Int64_array *)v43;
  sub_1C3B708((PartyOrganizationUtility_o *)p_equipIdList, v43, v36, v37, v38, v39, v40, v41);
  v34 = *p_equipIdList;
LABEL_14:
  if ( !v34 )
    goto LABEL_35;
  if ( !v34->max_length )
    goto LABEL_36;
  if ( v34->m_Items[0] < 1 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserServantMaster___);
  v45 = *p_equipIdList;
  if ( !*p_equipIdList )
    goto LABEL_35;
  if ( !v45->max_length )
LABEL_36:
    sub_1C3B9C8(Master_object, v33);
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    p_equipUserServantEntity,
                                    v45->m_Items[0],
                                    (const MethodInfo_329D3F0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v46 = *p_equipUserServantEntity;
    if ( !*p_equipUserServantEntity )
      goto LABEL_35;
    klass = v46[5].klass;
    monitor = v46[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v60.fields.currentCryptoKey = klass;
    *(_QWORD *)&v60.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v60, 0LL) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantMaster___);
      v49 = *p_equipUserServantEntity;
      if ( *p_equipUserServantEntity )
      {
        v50 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        v52 = v49[5].klass;
        v51 = v49[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v61.fields.currentCryptoKey = v52;
        *(_QWORD *)&v61.fields.fakeValue = v51;
        Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v61, 0LL);
        if ( v50 )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     v50,
                     (int32_t)Master_object,
                     (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          p_equipServantEntity->klass = (PartyOrganizationUtility_c *)Entity;
          sub_1C3B708(p_equipServantEntity, (int64_t)Entity, v54, v55, v56, v57, v58, v59);
          return;
        }
      }
LABEL_35:
      sub_1C3B9C0(Master_object, v33);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v23; // x21
  struct EventUpValSetupInfo_o *setupInfo; // x8
  int32_t bonusKind; // w8
  EventUpValSetupInfo_o *v26; // x21
  UserServantEntity_o *userServantEntity; // x22
  int32_t ServantFilterEventId; // w23
  struct ListViewObject_o *viewObject; // x3
  UserServantEntity_o *v30; // x0
  EventUpValSetupInfo_o *v31; // x1
  int32_t v32; // w2
  int32_t bonusKind2; // w8
  int32_t v34; // w21
  int32_t bonusKindId; // w8
  int32_t v36; // w8
  int32_t v37; // w9
  int32_t v38; // w8
  int32_t bonusKind2Id; // w8
  Il2CppObject *v40; // x0
  __int64 v41; // x22
  __int64 v42; // x23
  EventCampaignMaster_o *v43; // x21
  bool v44; // w0
  UserServantEntity_o *v45; // x22
  EventUpValSetupInfo_o *v46; // x23
  bool IsEnableServant; // w0
  Il2CppObject *Master_object; // x0
  __int64 v49; // x22
  __int64 v50; // x23
  EventCampaignMaster_o *v51; // x21
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v53; // x0
  __int64 *v54; // x8
  System_Func_T__bool__o *v55; // x22
  PartyServantListViewItem_c *v56; // x0
  _BOOL4 isChoice; // w22
  struct PartyServantListViewItem_StaticFields *static_fields; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x9
  int64_t PRIORITY_NORMAL; // x10
  __int64 PRIORITY_LOWEST; // x8
  PartyServantListViewItem_c *v62; // x0
  __int64 PRIORITY_LOWEST_HEROIN_LEAVE; // x8
  struct ServantEntity_o *servantEntity; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  int32_t cost; // w4
  struct UserServantEntity_o *v67; // x8
  __int128 v68; // q1
  struct UserServantEntity_o *v69; // x8
  int64_t rarityId; // x2
  struct UserServantEntity_o *v71; // x8
  int64_t hp; // x2
  int32_t adjustAtk; // w3
  int32_t v74; // w1
  struct UserServantEntity_o *v75; // x8
  struct UserServantEntity_o *equipUserServantEntity; // x9
  int32_t atk; // w4
  int32_t adjustHp; // w3
  int32_t v79; // w1
  struct UserServantEntity_o *v80; // x8
  struct UserServantEntity_o *v81; // x9
  struct ServantEntity_o *v82; // x8
  int64_t v83; // x8
  IconLabelInfo_o *iconLabelInfo2; // x19
  __int64 v85; // x20
  __int64 v86; // x21
  int32_t v87; // w0
  PartyServantListViewItem_o *v88; // x20
  int64_t v89; // x9
  struct ListViewManager_o *v90; // x8
  __int64 v91; // x11
  struct ListViewManager_o *v92; // x20
  struct QuestRestrictionInfo_o *v93; // x8
  int64_t fatigureTime; // x8
  int64_t iconLabelInfo1_low; // x20
  int64_t priority; // x9
  struct ServantEntity_o *v97; // x8
  IconLabelInfo_o *v98; // x21
  int32_t v99; // w3
  IconLabelInfo_o *v100; // x0
  int32_t v101; // w2
  int32_t iconLabelInfo1; // w20
  __int64 v103; // x21
  __int64 v104; // x22
  struct ServantEntity_o *v105; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v107; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16

  v4 = this;
  if ( (byte_4C1DD64 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMaster_EventCampaignMaster___, v6);
    sub_1C3B764(&Method_DataManager_GetMaster_EventGroupMaster___, v7);
    sub_1C3B764(&DataManager_TypeInfo, v8);
    sub_1C3B764(&System_Func_EventGroupEntity__bool__TypeInfo, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v10);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v11);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1C3B764(&Method_PartyServantListViewItem__SetSortValue_b__119_0__, v14);
    sub_1C3B764(&Method_PartyServantListViewItem__SetSortValue_b__119_1__, v15);
    sub_1C3B764(&PartyServantListViewItem_TypeInfo, v16);
    sub_1C3B764(&PartyServantListViewManager_TypeInfo, v17);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v19);
    this = (PartyServantListViewItem_o *)sub_1C3B764(&TutorialFlag_TypeInfo, v20);
    byte_4C1DD64 = 1;
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
      v23 = sort->fields.manager;
    else
      v23 = 0LL;
  }
  else
  {
    v23 = 0LL;
  }
  setupInfo = v4->fields.setupInfo;
  if ( !setupInfo )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (PartyServantListViewItem_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_26;
    if ( !v23 )
      goto LABEL_213;
    if ( !BYTE1(v23[1].fields.clipRange.fields.y) )
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
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (PartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventGroupMaster___);
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
            v53 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_EventGroupEntity__bool__TypeInfo);
            v54 = &Method_PartyServantListViewItem__SetSortValue_b__119_0__;
LABEL_85:
            v55 = (System_Func_T__bool__o *)v53;
            System_Func_object__bool____ctor(v53, (Il2CppObject *)v4, *v54, 0LL);
            v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                        v55,
                                        (const MethodInfo_2FDAB74 *)Method_BasicHelper_Any_EventGroupEntity___);
          }
        }
        goto LABEL_86;
      case 3:
        if ( v4->fields.bonusKind == 3 )
        {
          v36 = sort->fields.bonusKindId;
          if ( v4->fields.bonusKindId == v36 )
            goto LABEL_86;
        }
        else
        {
          v36 = sort->fields.bonusKindId;
        }
        v4->fields.bonusKind = 3;
        v4->fields.bonusKindId = v36;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
        v50 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
        v49 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
        v51 = (EventCampaignMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v113.fields.currentCryptoKey = v50;
        *(_QWORD *)&v113.fields.fakeValue = v49;
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                               v113,
                                               0LL);
        if ( !v51 )
          goto LABEL_213;
        IsEnableServant = EventCampaignMaster__IsEnableServant(v51, (int32_t)this, v4->fields.bonusKindId, 0LL);
        goto LABEL_67;
      case 4:
      case 5:
        if ( v4->fields.bonusKind == bonusKind )
          goto LABEL_86;
        v4->fields.bonusKind = bonusKind;
        v26 = v4->fields.setupInfo;
        v4->fields.bonusKindId = sort->fields.bonusKindId;
        if ( !v26 )
          goto LABEL_213;
        userServantEntity = v4->fields.userServantEntity;
        ServantFilterEventId = EventUpValSetupInfo__get_ServantFilterEventId(v26, 0LL);
        this = (PartyServantListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this || !userServantEntity )
          goto LABEL_213;
        viewObject = this->fields.viewObject;
        v30 = userServantEntity;
        v31 = v26;
        v32 = ServantFilterEventId;
        goto LABEL_54;
      case 7:
        if ( v4->fields.bonusKind == 7 )
        {
          v37 = v4->fields.bonusKindId;
          v38 = sort->fields.bonusKindId;
LABEL_48:
          if ( v37 == v38 )
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
          v38 = sort->fields.bonusKindId;
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
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      this = (PartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventGroupMaster___);
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
      v53 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_EventGroupEntity__bool__TypeInfo);
      v54 = &Method_PartyServantListViewItem__SetSortValue_b__119_1__;
      goto LABEL_85;
    case 3:
      v4->fields.bonusKind = 3;
      v4->fields.bonusKindId = sort->fields.bonusKind2Id;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v40 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      v42 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v41 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      v43 = (EventCampaignMaster_o *)v40;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v112.fields.currentCryptoKey = v42;
      *(_QWORD *)&v112.fields.fakeValue = v41;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                             v112,
                                             0LL);
      if ( !v43 )
        goto LABEL_213;
      v44 = EventCampaignMaster__IsEnableServant(v43, (int32_t)this, v4->fields.bonusKindId, 0LL);
      v4->fields.isEventUpVal = v44;
      if ( !v44 )
        goto LABEL_105;
      goto LABEL_87;
    case 4:
    case 5:
      if ( v4->fields.bonusKind == bonusKind2 )
      {
        v34 = sort->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId == v34 )
          goto LABEL_86;
      }
      else
      {
        v34 = sort->fields.bonusKind2Id;
      }
      v4->fields.bonusKind = bonusKind2;
      v4->fields.bonusKindId = v34;
      v45 = v4->fields.userServantEntity;
      v46 = v4->fields.setupInfo;
      this = (PartyServantListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this || !v45 )
        goto LABEL_213;
      viewObject = this->fields.viewObject;
      v30 = v45;
      v31 = v46;
      v32 = v34;
LABEL_54:
      IsEnableServant = UserServantEntity__getEventUpVal_41679932(v30, v31, v32, (int64_t)viewObject, 0LL);
      goto LABEL_67;
    case 7:
      if ( v4->fields.bonusKind == 7 )
      {
        v37 = v4->fields.bonusKindId;
        v38 = sort->fields.bonusKind2Id;
        goto LABEL_48;
      }
      v38 = sort->fields.bonusKind2Id;
      break;
    default:
      goto LABEL_87;
  }
LABEL_64:
  v4->fields.bonusKind = 7;
  v4->fields.bonusKindId = v38;
  this = (PartyServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_213;
  this = (PartyServantListViewItem_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
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
  v56 = PartyServantListViewItem_TypeInfo;
  if ( v4->fields.isSwapChoice )
    isChoice = !v4->fields.isChoice;
  else
    isChoice = v4->fields.isChoice;
  if ( !PartyServantListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo);
    v56 = PartyServantListViewItem_TypeInfo;
  }
  static_fields = v56->static_fields;
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
        if ( !v56->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v56);
          v56 = PartyServantListViewItem_TypeInfo;
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
        if ( !v56->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v56);
          v56 = PartyServantListViewItem_TypeInfo;
        }
        v4->fields.sortValue0B = v56->static_fields->PRIORITY_TOP;
      }
      this = (PartyServantListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_213;
      if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)this, 0LL) )
        goto LABEL_133;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( !TutorialFlag__Get_39109112(126, 0LL) )
        goto LABEL_133;
      v62 = PartyServantListViewItem_TypeInfo;
      if ( !PartyServantListViewItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo);
        v62 = PartyServantListViewItem_TypeInfo;
      }
      PRIORITY_LOWEST_HEROIN_LEAVE = v62->static_fields->PRIORITY_LOWEST_HEROIN_LEAVE;
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
    if ( !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56);
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
  IconLabelInfo__Set_39561332((IconLabelInfo_o *)this, 7, servantEntity->fields.cost, 0, cost, 0, 0, 0, 0LL);
  this = (PartyServantListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v67 = v4->fields.userServantEntity;
      if ( !v67 )
        goto LABEL_213;
      v68 = *(_OWORD *)&v67->fields.id.fields.fakeValue;
      *(_OWORD *)&v110.fields.currentCryptoKey = *(_OWORD *)&v67->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v110.fields.fakeValue = v68;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v109 = v110;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(
                                             &v109,
                                             0LL);
      v69 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v69 )
        goto LABEL_213;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_213;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v69->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_196;
    case 2:
      rarityId = v4->fields.rarityId;
      v71 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = rarityId;
      if ( !v71 )
        goto LABEL_213;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_213;
      IconLabelInfo__Set_39561332(
        (IconLabelInfo_o *)this,
        36,
        rarityId,
        v71->fields.exceedCount,
        0,
        0,
        0,
        v71->fields.lv,
        0LL);
      goto LABEL_202;
    case 3:
      goto LABEL_187;
    case 4:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_213;
      UserServantEntity__getTreasureDeviceInfo_41687172((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(hp) = tdMaxLv[1];
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = tdMaxLv[1];
      if ( !this )
        goto LABEL_213;
      adjustAtk = tdMaxLv[0];
      v74 = 33;
      goto LABEL_195;
    case 5:
      v75 = v4->fields.userServantEntity;
      if ( !v75 )
        goto LABEL_213;
      equipUserServantEntity = v4->fields.equipUserServantEntity;
      hp = v75->fields.hp;
      if ( equipUserServantEntity )
      {
        atk = equipUserServantEntity->fields.hp;
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = atk + (int)hp;
        if ( !this )
          goto LABEL_213;
        adjustHp = v75->fields.adjustHp;
        v79 = 46;
        goto LABEL_160;
      }
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_213;
      adjustAtk = v75->fields.adjustHp;
      v74 = 3;
      goto LABEL_195;
    case 6:
      v80 = v4->fields.userServantEntity;
      if ( !v80 )
        goto LABEL_213;
      v81 = v4->fields.equipUserServantEntity;
      hp = v80->fields.atk;
      if ( v81 )
      {
        atk = v81->fields.atk;
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = atk + (int)hp;
        if ( !this )
          goto LABEL_213;
        adjustHp = v80->fields.adjustAtk;
        v79 = 47;
LABEL_160:
        IconLabelInfo__Set_39561332((IconLabelInfo_o *)this, v79, hp, adjustHp, atk, 0, 0, 0, 0LL);
      }
      else
      {
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = hp;
        if ( !this )
          goto LABEL_213;
        adjustAtk = v80->fields.adjustAtk;
        v74 = 5;
LABEL_195:
        IconLabelInfo__Set_39561332((IconLabelInfo_o *)this, v74, hp, adjustAtk, 0, 0, 0, 0, 0LL);
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
      v99 = (int)this;
      v100 = iconLabelInfo2;
      v101 = iconLabelInfo1;
      goto LABEL_201;
    case 7:
      v82 = v4->fields.servantEntity;
      if ( !v82 )
        goto LABEL_213;
      v83 = v82->fields.cost;
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
LABEL_164:
      v4->fields.sortValue1 = v83;
      if ( !this )
        goto LABEL_213;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      goto LABEL_198;
    case 8:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      v83 = -v4->fields.priority;
      goto LABEL_164;
    case 0xA:
      v85 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
      v86 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v114.fields.currentCryptoKey = v85;
      *(_QWORD *)&v114.fields.fakeValue = v86;
      v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v114, 0LL);
      v88 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v89 = v87;
      friendship = v4->fields.friendship;
      v4->fields.sortValue1 = v89;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                             friendship,
                                             0LL);
      if ( !v88 )
        goto LABEL_213;
      adjustAtk = v4->fields.friendshipMax;
      LODWORD(hp) = (_DWORD)this;
      v74 = 32;
      this = v88;
      goto LABEL_195;
    case 0xE:
      this = (PartyServantListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_210;
      v90 = sort->fields.manager;
      if ( v90
        && (v91 = LOBYTE(PartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v90->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v91) )
      {
        if ( (PartyServantListViewManager_c *)v90->klass->_2.typeHierarchy[v91 - 1] == PartyServantListViewManager_TypeInfo )
          v92 = sort->fields.manager;
        else
          v92 = 0LL;
      }
      else
      {
        v92 = 0LL;
      }
      v104 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v103 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v116.fields.currentCryptoKey = v104;
      *(_QWORD *)&v116.fields.fakeValue = v103;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                             v116,
                                             0LL);
      if ( !v92 )
        goto LABEL_213;
      this = (PartyServantListViewItem_o *)PartyServantListViewManager__GetAmountSortValue(
                                             (PartyServantListViewManager_o *)v92,
                                             (int32_t)this,
                                             0LL);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_210:
      v105 = v4->fields.servantEntity;
      if ( !v105 )
        goto LABEL_213;
      collectionNo = v105->fields.collectionNo;
      v107 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarityId << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v107 )
        goto LABEL_213;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      iconLabelInfo1 = v107->fields.lv;
      this = (PartyServantListViewItem_o *)v107;
      goto LABEL_199;
    case 0xF:
      hp = v4->fields.hpReinforceValue;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_213;
      adjustAtk = v4->fields.nowMaxHpReinforceValue;
      v74 = 44;
      goto LABEL_195;
    case 0x10:
      hp = v4->fields.atkReinforceValue;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_213;
      adjustAtk = v4->fields.nowMaxAtkReinforceValue;
      v74 = 45;
      goto LABEL_195;
    case 0x19:
      v93 = v4->fields.questRestrictionInfo;
      if ( !v93 || !v93->fields.isFatigure )
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
          v98 = v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = iconLabelInfo1_low;
          goto LABEL_189;
        }
LABEL_213:
        sub_1C3B9C0(this, sort);
      }
      fatigureTime = v4->fields._SvtPoint_k__BackingField;
LABEL_183:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      v4->fields.sortValue1 = fatigureTime;
      if ( !this )
        goto LABEL_213;
      iconLabelInfo1_low = SLODWORD(this->fields.iconLabelInfo1);
      priority = v4->fields.priority;
      v97 = v4->fields.servantEntity;
      v4->fields.sortValue1B = iconLabelInfo1_low;
      v4->fields.sortValue2 = priority;
      if ( !v97 )
        goto LABEL_213;
      v98 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue2B = iconLabelInfo1_low | ((unsigned __int64)(unsigned int)v4->fields.rarityId << 48) | ((__int64)v97->fields.collectionNo << 16);
LABEL_189:
      this = (PartyServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !v98 )
        goto LABEL_213;
      v99 = (int)this;
      v100 = v98;
      v101 = iconLabelInfo1_low;
LABEL_201:
      IconLabelInfo__Set_39561332(v100, 2, v101, v99, 0, 0, 0, 0, 0LL);
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


bool __fastcall PartyServantListViewItem___SetSortValue_b__119_0(
        PartyServantListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x22
  __int64 v11; // x23
  EventCampaignMaster_o *v12; // x21
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  UserServantEntity_o *userServantEntity; // x21
  EventUpValSetupInfo_o *setupInfo; // x20
  int32_t eventId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4C1DD6C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantFilterMaster___, v5);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    byte_4C1DD6C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v11;
  *(_QWORD *)&v19.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v19, 0LL);
  if ( !entity || !v12 )
    goto LABEL_18;
  if ( EventCampaignMaster__IsEnableServant(v12, (int32_t)Instance, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !userServantEntity )
LABEL_18:
    sub_1C3B9C0(Instance, v14);
  return UserServantEntity__getEventUpVal_41679932(
           userServantEntity,
           setupInfo,
           eventId,
           (int64_t)Instance[6].monitor,
           0LL);
}


bool __fastcall PartyServantListViewItem___SetSortValue_b__119_1(
        PartyServantListViewItem_o *this,
        EventGroupEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x22
  __int64 v11; // x23
  EventCampaignMaster_o *v12; // x21
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  UserServantEntity_o *userServantEntity; // x21
  EventUpValSetupInfo_o *setupInfo; // x20
  int32_t eventId; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4C1DD6D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantFilterMaster___, v5);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    byte_4C1DD6D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v11;
  *(_QWORD *)&v19.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v19, 0LL);
  if ( !entity || !v12 )
    goto LABEL_18;
  if ( EventCampaignMaster__IsEnableServant(v12, (int32_t)Instance, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !userServantEntity )
LABEL_18:
    sub_1C3B9C0(Instance, v14);
  return UserServantEntity__getEventUpVal_41679932(
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
    sub_1C3B9C0(this, method);
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


bool __fastcall PartyServantListViewItem__get_IsNotSameParty(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isNotSameParty;
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

  if ( (byte_4C1DD68 & 1) == 0 )
  {
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1C3B764(&StringLiteral_19427/*"getNotificationColor"*/, v3);
    byte_4C1DD68 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19427/*"getNotificationColor"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v7 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v10, 0LL);
  }
  else
  {
    v8 = -1;
  }
  return ServantEntity__getName(servantEntity, v8, -1, 0, 0LL);
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

  if ( (byte_4C1DD67 & 1) == 0 )
  {
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4C1DD67 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v6, 0LL);
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
    sub_1C3B9C0(this, method);
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
  sub_1C3B708(
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