void __fastcall PartyServantListViewItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct PartyServantListViewItem_StaticFields *static_fields; // x8

  if ( (byte_4AFDD1E & 1) == 0 )
  {
    sub_1BC3008(&PartyServantListViewItem_TypeInfo, v1);
    byte_4AFDD1E = 1;
  }
  static_fields = PartyServantListViewItem_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->PRIORITY_NORMAL = xmmword_BDE5D0;
  *(_OWORD *)&static_fields->PRIORITY_LOWEST = xmmword_BDECE0;
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
        bool isGrandSameServant,
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
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  IconLabelInfo_o *v58; // x24
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  IconLabelInfo_o *v61; // x24
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  IconLabelInfo_o *v64; // x24
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int64_t Instance; // x0
  unsigned __int64 NotSamePartyKey; // x1
  struct PartyOrganizationListViewItem_o *Member; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  Il2CppObject *MasterData_object; // x0
  __int64 v80; // x21
  __int64 v81; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v82; // x20
  Il2CppObject *v83; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  UserServantEntity_o *v86; // x8
  __int128 v87; // q1
  UserServantCollectionMaster_o *v88; // x20
  int64_t v89; // x21
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  System_Collections_Generic_List_object__o *v96; // x21
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  UserServantEntity_Fields *p_fields; // x10
  PartyListViewItem_o *v100; // x25
  int64_t v101; // x26
  struct UserServantEntity_o *v102; // x28
  int32_t v103; // w21
  BalanceConfig_c *v104; // x0
  struct PartyOrganizationListViewItem_o *v105; // x20
  UserServantEntity_o *v106; // x8
  __int128 v107; // q0
  struct UserServantEntity_o *v108; // x8
  __int128 v109; // q0
  int64_t v110; // x24
  __int128 v111; // q0
  const MethodInfo_37C1558 *v112; // x3
  struct PartyOrganizationListViewItem_o *v113; // x8
  struct UserServantEntity_o *v114; // x23
  int64_t v115; // x24
  int64_t v116; // x25
  struct UserServantEntity_o *v117; // x9
  __int128 v118; // q0
  __int128 v119; // q1
  const MethodInfo_37C0824 *v120; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v121; // x8
  int64_t v122; // x23
  __int64 v123; // x24
  __int64 v124; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  int v126; // w24
  int v127; // w24
  struct System_Int32_array *items; // x8
  _QWORD *v129; // x9
  __int64 size; // x10
  struct ServantEntity_o *v131; // x8
  __int64 v132; // x20
  __int64 v133; // x24
  int32_t v134; // w20
  int32_t v135; // w24
  int32_t IncludedRestrictionIds; // w0
  System_Int64_array *EquipList; // x0
  const MethodInfo *v138; // x2
  System_Collections_Generic_List_int__o *v139; // x20
  __int64 v140; // x2
  PartyListViewItem_array *v141; // x9
  __int64 v142; // x8
  unsigned __int64 v143; // x25
  int32_t v144; // w23
  PartyListViewItem_o *v145; // x21
  int32_t i; // w28
  PartyOrganizationListViewItem_o *v147; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  struct System_Int32_array *v149; // x8
  _QWORD *v150; // x9
  __int64 v151; // x10
  UserServantEntity_o *v152; // x24
  struct UserServantEntity_o *v153; // x8
  __int128 v154; // q0
  System_Int64_array *v155; // x0
  const MethodInfo *v156; // x2
  __int64 v157; // x21
  __int64 v158; // x24
  const MethodInfo *v159; // x1
  const MethodInfo *v160; // x1
  UserServantEntity_o *v161; // x8
  bool IsChoice; // w0
  UserServantEntity_o *v163; // x8
  __int128 v164; // q0
  __int64 v165; // x20
  bool v166; // zf
  bool v167; // w8
  UserServantEntity_o *v168; // x8
  const MethodInfo *v169; // x1
  UserServantEntity_o *v170; // x8
  UserServantEntity_o *v171; // x8
  bool IsUniqueIndividualityRestriction_42150052; // w0
  const MethodInfo *v173; // x1
  struct QuestRestrictionInfo_o *v174; // x8
  UserEventServantFatigueMaster_o *v175; // x20
  int32_t eventId; // w21
  __int64 v177; // x24
  __int64 v178; // x26
  int64_t v179; // x20
  bool AllOutBattleAlreadyUsed; // w0
  struct QuestRestrictionInfo_o *v181; // x8
  Il2CppObject *Master_object; // x20
  UserServantEntity_o *v183; // x8
  UserEventDataLostEntity_o *v184; // x20
  __int64 v185; // x21
  __int64 v186; // x24
  UserServantEntity_o *v187; // x8
  char v188; // w20
  UserEventDataLostEntity_o *v189; // x21
  __int64 v190; // x24
  __int64 v191; // x26
  int32_t v192; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr20_16
  UserServantEntity_o *v194; // x8
  PartyOrganizationUtility_o *v195; // x21
  __int64 v196; // x24
  __int64 v197; // x26
  int32_t v198; // w24
  int32_t Rarity; // w27
  int32_t v200; // w5
  System_String_o **p_skillName; // x1
  int *p_actMaxRarity; // x2
  PartyOrganizationUtility_o *v203; // x0
  int32_t v204; // w3
  int32_t v205; // w4
  int32_t partyIndex; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v207; // kr30_16
  UserServantEntity_o *v208; // x8
  PartyOrganizationUtility_o *v209; // x21
  __int64 v210; // x24
  __int64 v211; // x26
  int32_t v212; // w24
  int32_t v213; // w26
  struct QuestRestrictionInfo_o *v214; // x8
  EventServantPointRankMaster_o *v215; // x21
  UserServantEntity_o *v216; // x8
  __int128 v217; // q0
  UserEventServantPointMaster_o *v218; // x24
  int64_t v219; // x25
  int32_t *p_SvtPoint_k__BackingField; // x23
  int32_t v221; // w24
  int32_t v222; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  System_Collections_Generic_List_T__o *v224; // x20
  Il2CppObject *v225; // x21
  System_Collections_Generic_List_object__o *v226; // x24
  Il2CppObject *v227; // x21
  _BOOL8 v228; // x0
  __int64 v229; // x1
  EventCampaignEntity_o *current; // x25
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x24
  __int64 v232; // x26
  __int64 v233; // x27
  int32_t v234; // w1
  int32_t v235; // w24
  int32_t FriendshipBonusValue; // w0
  int32_t calcType; // w3
  int32_t v238; // w2
  const MethodInfo_39F6E00 *v239; // x5
  __int64 v240; // x0
  __int64 v241; // x1
  struct System_Object_array *v242; // x8
  _QWORD *v243; // x9
  __int64 v244; // x10
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v245; // x0
  int32_t v246; // w2
  const MethodInfo *v247; // x3
  BalanceConfig_c *v248; // x8
  int v249; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_Collections_Generic_List_int__o *v251; // [xsp+10h] [xbp-310h]
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+18h] [xbp-308h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+28h] [xbp-2F8h]
  bool IsNotSameParty; // [xsp+34h] [xbp-2ECh]
  UserServantEntity_Fields *v255; // [xsp+40h] [xbp-2E0h]
  struct PartyOrganizationListViewItem_o **p_baseItem; // [xsp+48h] [xbp-2D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // [xsp+50h] [xbp-2D0h]
  int64_t v259; // [xsp+60h] [xbp-2C0h]
  int32_t v260; // [xsp+6Ch] [xbp-2B4h]
  UserServantEntity_o *v261; // [xsp+70h] [xbp-2B0h]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+80h] [xbp-2A0h]
  UserServantEntity_o **p_userServantEntity; // [xsp+88h] [xbp-298h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v265; // [xsp+90h] [xbp-290h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v266; // [xsp+B0h] [xbp-270h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v267; // [xsp+D0h] [xbp-250h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v268; // [xsp+F0h] [xbp-230h] BYREF
  __int128 v269; // [xsp+110h] [xbp-210h]
  __int128 v270; // [xsp+120h] [xbp-200h]
  _BYTE item[40]; // [xsp+130h] [xbp-1F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v272; // [xsp+160h] [xbp-1C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v273; // [xsp+180h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v274; // [xsp+1A0h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v275; // [xsp+1C0h] [xbp-160h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v276; // [xsp+1E0h] [xbp-140h] BYREF
  UserEventServantPointEntity_o *v277; // [xsp+200h] [xbp-120h] BYREF
  int32_t actMaxRarity; // [xsp+20Ch] [xbp-114h] BYREF
  System_String_o *skillName; // [xsp+210h] [xbp-110h] BYREF
  int v280; // [xsp+21Ch] [xbp-104h] BYREF
  __int64 v281; // [xsp+220h] [xbp-100h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+228h] [xbp-F8h] BYREF
  int64_t recoverAt; // [xsp+230h] [xbp-F0h] BYREF
  int32_t friendshipRank; // [xsp+23Ch] [xbp-E4h] BYREF
  __int128 v285[2]; // [xsp+240h] [xbp-E0h] BYREF
  __int128 v286; // [xsp+260h] [xbp-C0h]
  _OWORD v287[2]; // [xsp+270h] [xbp-B0h] BYREF
  char v288[39]; // [xsp+290h] [xbp-90h] BYREF
  __int64 v289; // [xsp+2B8h] [xbp-68h]
  System_ValueTuple_int__int__Int32Enum__o v290; // 0:x0.12
  System_ValueTuple_int__int__Int32Enum__o v291; // 0:x1.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v292; // 0:x0.16
  System_Nullable_T__o v293; // 0:x0.16
  System_Nullable_long__o v294; // 0:x0.16
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

  v289 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_4AFDD0E & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&CommonRestrictionMaster_TypeInfo, v17);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventCampaignMaster___, v18);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventQuestMaster___, v19);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantClassMaster___, v20);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v21);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v22);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v23);
    sub_1BC3008(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v24);
    sub_1BC3008(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v25);
    sub_1BC3008(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v26);
    sub_1BC3008(&DataManager_TypeInfo, v27);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v28);
    sub_1BC3008(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v29);
    sub_1BC3008(&Method_System_Linq_Enumerable_Contains_int___, v30);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v31);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v32);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v33);
    sub_1BC3008(&IconLabelInfo_TypeInfo, v34);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v35);
    sub_1BC3008(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__, v36);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, v37);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v38);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__,
      v39);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v40);
    sub_1BC3008(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__, v41);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v42);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v43);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v44);
    sub_1BC3008(&System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo, v45);
    sub_1BC3008(&NetworkManager_TypeInfo, v46);
    sub_1BC3008(&Method_System_Nullable_long__GetValueOrDefault__, v47);
    sub_1BC3008(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__, v48);
    sub_1BC3008(&Method_System_Nullable_long___ctor__, v49);
    sub_1BC3008(&Method_System_Nullable_ObscuredLong___ctor__, v50);
    sub_1BC3008(&Method_System_Nullable_ObscuredLong__get_HasValue__, v51);
    sub_1BC3008(&Method_System_Nullable_long__get_HasValue__, v52);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v53);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v54);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v55);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v56);
    sub_1BC3008(&Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__, v57);
    byte_4AFDD0E = 1;
  }
  friendshipRank = 0;
  recoverAt = 0LL;
  entity = 0LL;
  v281 = 0LL;
  v280 = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v277 = 0LL;
  memset(&v276, 0, sizeof(v276));
  memset(v288, 0, sizeof(v288));
  v286 = 0u;
  memset(v287, 0, 23);
  v58 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v58, 0LL);
  this->fields.iconLabelInfo1 = v58;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v58, v59, v60);
  v61 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v61, 0LL);
  this->fields.iconLabelInfo2 = v61;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v61, v62, v63);
  v64 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v64, 0LL);
  this->fields.iconLabelInfo3 = v64;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo3, (int32_t)v64, v65, v66);
  ListViewItem___ctor_42769384((ListViewItem_o *)this, index, 0LL);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_258;
  Member = PartyListViewItem__GetMember(partyItem, num, 0LL);
  this->fields.baseItem = Member;
  p_baseItem = &this->fields.baseItem;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseItem, (int32_t)Member, v70, v71);
  baseItem = this->fields.baseItem;
  this->fields._PartyListViewItemMenuKind_k__BackingField = partyItem->fields.menuKind;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_258;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0LL;
  this->fields.userServantEntity = userServantEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v72, v73);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v75, v76);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v77, v78);
  p_userServantEntity = &this->fields.userServantEntity;
  if ( !this->fields.userServantEntity )
    goto LABEL_258;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_258;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  v81 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v80 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v82 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v292.fields.currentCryptoKey = v81;
  *(_QWORD *)&v292.fields.fakeValue = v80;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v292, 0LL);
  if ( !v82 )
    goto LABEL_258;
  v83 = DataMasterBase_object__object__int___GetEntity(
          v82,
          Instance,
          (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v83;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)v83, v84, v85);
  this->fields._IsGrandSameServant_k__BackingField = isGrandSameServant;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_258;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v86 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_258;
  v87 = *(_OWORD *)&v86->fields.userId.fields.fakeValue;
  v88 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)item = *(_OWORD *)&v86->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&item[16] = v87;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v275 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
  v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v275, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(this->fields.svtId, 0LL);
  if ( !v88 )
    goto LABEL_258;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v88, v89, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_258;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !Instance )
    goto LABEL_258;
  v260 = num;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &friendshipRank,
    &this->fields.friendshipMax,
    0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0LL);
  this->fields.isBase = 0;
  this->fields.isSame = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipUserServantEntity, 0, v90, v91);
  this->fields.equipServantEntity = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipServantEntity, 0, v92, v93);
  this->fields.equipIdList = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v94, v95);
  v96 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v96,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v96;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v96, v97, v98);
  Instance = (int64_t)this->fields.servantEntity;
  if ( !Instance )
    goto LABEL_258;
  IsNotSameParty = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0LL);
  v251 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v251,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  v261 = userServantEntity;
  p_fields = &userServantEntity->fields;
  v100 = partyItem;
  v101 = 0LL;
  v259 = 0LL;
  v102 = 0LL;
  v103 = 0;
  v255 = p_fields;
  while ( 1 )
  {
    v104 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v104 = BalanceConfig_TypeInfo;
    }
    if ( v103 >= v104->static_fields->DeckMemberMax )
      break;
    Instance = (int64_t)PartyListViewItem__GetMember(v100, v103, 0LL);
    if ( !Instance )
      goto LABEL_258;
    v105 = (struct PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 112) )
    {
      v106 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_258;
      v107 = *(_OWORD *)&v106->fields.id.fields.fakeValue;
      *(_OWORD *)item = *(_OWORD *)&v106->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&item[16] = v107;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v274 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v274, 0LL);
      v108 = v105->fields.userServantEntity;
      if ( !v108 )
        goto LABEL_258;
      v109 = *(_OWORD *)&v108->fields.id.fields.fakeValue;
      v110 = Instance;
      *(_OWORD *)&v273.fields.currentCryptoKey = *(_OWORD *)&v108->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v273.fields.fakeValue = v109;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v273, 0LL);
      if ( v110 == Instance )
      {
        this->fields.isSame = 0;
        this->fields.partyIndex = v103;
        this->fields.isBase = v260 == v103;
LABEL_83:
        EquipList = PartyOrganizationListViewItem__GetEquipList(v105, 0LL);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v138);
        break;
      }
      if ( isGrandSameServant )
      {
        if ( !v261 )
          goto LABEL_258;
        v111 = *(_OWORD *)&v255->id.fields.fakeValue;
        *(_OWORD *)item = *(_OWORD *)&v255->id.fields.currentCryptoKey;
        *(_OWORD *)&item[16] = v111;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v272 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v272, 0LL);
        v113 = *p_baseItem;
        if ( !*p_baseItem )
          goto LABEL_258;
        v114 = v113->fields.userServantEntity;
        v115 = Instance;
        if ( v114 )
          v116 = Instance;
        else
          v116 = v259;
        if ( v114 )
          v117 = v113->fields.userServantEntity;
        else
          v117 = v102;
        if ( !v114 )
        {
          v100 = partyItem;
          v286 = 0u;
          memset(v287, 0, 23);
          memset(v288, 0, sizeof(v288));
          this->fields.isBase = 0;
          this->fields.isSame = 0;
          v105 = v113;
          goto LABEL_83;
        }
        if ( !v117 )
          goto LABEL_258;
        v118 = *(_OWORD *)&v117->fields.id.fields.currentCryptoKey;
        v119 = *(_OWORD *)&v117->fields.id.fields.fakeValue;
        memset(item, 0, sizeof(item));
        *(_QWORD *)&v293.fields.hasValue = item;
        v293.fields.value = (Il2CppObject *)v285;
        v269 = v118;
        v270 = v119;
        v285[0] = v118;
        v285[1] = v119;
        System_Nullable_ObscuredLong____ctor(
          v293,
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
          v112);
        *(_QWORD *)((char *)v287 + 15) = *(_QWORD *)&item[32];
        v286 = *(_OWORD *)&item[1];
        v287[0] = *(_OWORD *)&item[17];
        if ( !item[0] )
          v116 = v101;
        *(_QWORD *)&v288[31] = *(_QWORD *)((char *)v287 + 15);
        *(_OWORD *)v288 = *(_OWORD *)&item[1];
        *(_OWORD *)&v288[16] = *(_OWORD *)&item[17];
        if ( !item[0] )
          goto LABEL_80;
        *(_OWORD *)item = *(_OWORD *)&v288[7];
        *(_OWORD *)&item[16] = *(_OWORD *)&v288[23];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v268 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
        v294.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v268, 0LL);
        *(_QWORD *)&v294.fields.hasValue = v285;
        v285[0] = 0uLL;
        System_Nullable_long____ctor(v294, Method_System_Nullable_long___ctor__, v120);
        if ( !LOBYTE(v285[0]) || v116 != *((_QWORD *)&v285[0] + 1) )
        {
LABEL_80:
          v105 = this->fields.baseItem;
          v100 = partyItem;
          this->fields.isBase = 0;
          this->fields.isSame = 0;
          if ( !v105 )
            goto LABEL_258;
          goto LABEL_83;
        }
        v100 = partyItem;
        v101 = v115;
        v102 = v114;
        v259 = v115;
      }
      if ( v260 != v103 )
      {
        v121 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_258;
        v122 = v101;
        v124 = *(_QWORD *)&v121[2].fields.currentCryptoKey;
        v123 = *(_QWORD *)&v121[2].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v295.fields.currentCryptoKey = v124;
        *(_QWORD *)&v295.fields.fakeValue = v123;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v295, 0LL);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v105->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_258;
        v126 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(servantEntity[2], 0LL);
        v101 = v122;
        if ( v126 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else
        {
          if ( !IsNotSameParty )
            goto LABEL_68;
          Instance = (int64_t)v105->fields.servantEntity;
          if ( !Instance )
            goto LABEL_258;
          Instance = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0LL);
          if ( (Instance & 1) == 0 )
            goto LABEL_68;
          Instance = (int64_t)*p_servantEntity;
          if ( !*p_servantEntity )
            goto LABEL_258;
          Instance = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0LL);
          if ( !v105->fields.servantEntity )
            goto LABEL_258;
          v127 = Instance;
          Instance = ServantEntity__GetNotSamePartyKey(v105->fields.servantEntity, 0LL);
          if ( v127 == (_DWORD)Instance )
          {
            this->fields.isNotSameParty = 1;
            Instance = (int64_t)v105->fields.servantEntity;
            if ( !Instance )
              goto LABEL_258;
            NotSamePartyKey = (unsigned int)ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0LL);
            Instance = (int64_t)v251;
            if ( !v251 )
              goto LABEL_258;
            items = v251->fields._items;
            v129 = Method_System_Collections_Generic_List_int__Add__;
            ++v251->fields._version;
            if ( !items )
              goto LABEL_258;
            size = v251->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v251,
                NotSamePartyKey,
                *(const MethodInfo_3683E1C **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
            }
            else
            {
              v251->fields._size = size + 1;
              items->m_Items[size + 1] = NotSamePartyKey;
            }
          }
          else
          {
LABEL_68:
            if ( this->fields.commonRestrictionId == -1 )
            {
              v131 = v105->fields.servantEntity;
              if ( !v131 )
                goto LABEL_258;
              v133 = *(_QWORD *)&v131->fields.baseSvtId.fields.currentCryptoKey;
              v132 = *(_QWORD *)&v131->fields.baseSvtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v296.fields.currentCryptoKey = v133;
              *(_QWORD *)&v296.fields.fakeValue = v132;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v296, 0LL);
              if ( !*p_servantEntity )
                goto LABEL_258;
              v134 = Instance;
              v135 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060((*p_servantEntity)[2], 0LL);
              if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
              IncludedRestrictionIds = CommonRestrictionMaster__GetIncludedRestrictionIds(v134, v135, 0LL);
              if ( (IncludedRestrictionIds & 0x80000000) == 0 )
                this->fields.commonRestrictionId = IncludedRestrictionIds;
            }
          }
        }
      }
    }
    ++v103;
  }
  if ( this->fields._PartyListViewItemMenuKind_k__BackingField != 9 )
  {
    this->fields._OrganizedWave_k__BackingField = 0;
    goto LABEL_123;
  }
  v139 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v139,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  v141 = baseDeckItemList;
  if ( !baseDeckItemList )
    goto LABEL_258;
  v142 = *(_QWORD *)&baseDeckItemList->max_length;
  this->fields._MaxWave_k__BackingField = v142;
  if ( (int)v142 < 1 )
    goto LABEL_116;
  v143 = 0LL;
  v144 = 1;
  do
  {
    if ( v143 >= (unsigned int)v142 )
      sub_1BC326C(Instance, NotSamePartyKey, v140);
    v145 = v141->m_Items[v143];
    for ( i = 0; ; ++i )
    {
      Instance = (int64_t)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (int64_t)BalanceConfig_TypeInfo;
      }
      if ( i >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 176LL) )
        break;
      if ( !v145 )
        goto LABEL_258;
      Instance = (int64_t)PartyListViewItem__GetMember(v145, i, 0LL);
      if ( !Instance )
        goto LABEL_258;
      v147 = (PartyOrganizationListViewItem_o *)Instance;
      if ( *(_QWORD *)(Instance + 112) )
      {
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(SvtId, 0LL);
        if ( !v139 )
          goto LABEL_258;
        v149 = v139->fields._items;
        v150 = Method_System_Collections_Generic_List_int__Add__;
        ++v139->fields._version;
        if ( !v149 )
          goto LABEL_258;
        v151 = v139->fields._size;
        NotSamePartyKey = (unsigned int)Instance;
        if ( (unsigned int)v151 >= v149->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v139,
            Instance,
            *(const MethodInfo_3683E1C **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
          if ( !v144 )
            continue;
        }
        else
        {
          v139->fields._size = v151 + 1;
          v149->m_Items[v151 + 1] = Instance;
          if ( !v144 )
            continue;
        }
        v152 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_258;
        v153 = v147->fields.userServantEntity;
        if ( !v153 )
          goto LABEL_258;
        v154 = *(_OWORD *)&v153->fields.id.fields.fakeValue;
        *(_OWORD *)item = *(_OWORD *)&v153->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&item[16] = v154;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v267 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_48028132(&v152->fields.id, &v267, 0LL) )
        {
          v155 = PartyOrganizationListViewItem__GetEquipList(v147, 0LL);
          PartyServantListViewItem__SetEquipStatus(this, v155, v156);
          this->fields._OrganizedWave_k__BackingField = v144;
          v144 = 0;
          this->fields._IsClearedWave_k__BackingField = v145->fields._IsClearedWave_k__BackingField;
        }
      }
    }
    v141 = baseDeckItemList;
    ++v143;
    if ( v144 )
      ++v144;
    else
      v144 = 0;
    LODWORD(v142) = baseDeckItemList->max_length;
  }
  while ( (__int64)v143 < (int)v142 );
  v100 = partyItem;
  if ( !v144 )
    goto LABEL_123;
LABEL_116:
  v158 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v157 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v297.fields.currentCryptoKey = v158;
  *(_QWORD *)&v297.fields.fakeValue = v157;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v297, 0LL);
  if ( !v139 )
    goto LABEL_258;
  if ( System_Collections_Generic_List_int___Contains(
         v139,
         Instance,
         (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__)
    && !this->fields.isNotSameParty )
  {
    this->fields.isSame = 1;
  }
LABEL_123:
  PartyServantListViewItem__CheckConvertOverwriteImage(this, (const MethodInfo *)NotSamePartyKey);
  PartyServantListViewItem__ModifyLimitCount(this, v159);
  PartyServantListViewItem__ModifyOverwriteStatus(this, v160);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.updateCategoryIdList = 1;
  if ( !Instance )
    goto LABEL_258;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  v161 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v161 )
    goto LABEL_258;
  IsChoice = UserServantEntity__IsChoice(v161, 0LL);
  *(_WORD *)&this->fields.isSwapLock = 0;
  *(_WORD *)&this->fields.isLockMode = 0;
  this->fields.isChoice = IsChoice;
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_258;
  v163 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_258;
  v164 = *(_OWORD *)&v163->fields.id.fields.fakeValue;
  v165 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)item = *(_OWORD *)&v163->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&item[16] = v164;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v266 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
  v166 = v165 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v266, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  v167 = v166;
  this->fields.isPush = v167;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_258;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v168 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v168 )
    goto LABEL_258;
  this->fields.isLeave = UserServantEntity__IsLeave(v168, 0LL);
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v169);
  v170 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v170 )
    goto LABEL_258;
  Instance = UserServantEntity__getUniqueSvtRestriction_42149672(
               v170,
               this->fields.questRestrictionInfo,
               v100,
               v260,
               this->fields.partyIndex,
               0LL);
  v171 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v171 )
    goto LABEL_258;
  IsUniqueIndividualityRestriction_42150052 = UserServantEntity__IsUniqueIndividualityRestriction_42150052(
                                                v171,
                                                this->fields.questRestrictionInfo,
                                                v100,
                                                v260,
                                                this->fields.partyIndex,
                                                0LL);
  v174 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_42150052;
  this->fields.fatigureTime = -1LL;
  this->fields.isFatigureRecover = 0;
  if ( !v174 || !v174->fields.isFatigure )
    goto LABEL_148;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_258;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
  if ( !*p_questRestrictionInfo )
    goto LABEL_258;
  v175 = (UserEventServantFatigueMaster_o *)Instance;
  eventId = (*p_questRestrictionInfo)->fields.eventId;
  v178 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v177 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v298.fields.currentCryptoKey = v178;
  *(_QWORD *)&v298.fields.fakeValue = v177;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v298, 0LL);
  if ( !v175 )
    goto LABEL_258;
  if ( UserEventServantFatigueMaster__GetFatigueInfo(
         v175,
         &recoverAt,
         &this->fields.isFatigureRecover,
         eventId,
         Instance,
         0LL) )
  {
    v179 = recoverAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( v179 > NetworkManager__getTime(0LL) )
      this->fields.fatigureTime = recoverAt;
  }
LABEL_148:
  AllOutBattleAlreadyUsed = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v173);
  v181 = this->fields.questRestrictionInfo;
  this->fields._IsAllOutBattle_k__BackingField = AllOutBattleAlreadyUsed;
  if ( !v181 || !v181->fields.isDataLostBattle )
  {
    this->fields._IsDataLost_k__BackingField = 0;
    this->fields._TimesToRestart_k__BackingField = -1;
    goto LABEL_172;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, NotSamePartyKey);
    byte_4AFC1F1 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !*p_questRestrictionInfo || !Master_object )
    goto LABEL_258;
  Instance = UserEventDataLostMaster__TryGetEntity(
               (UserEventDataLostMaster_o *)Master_object,
               &entity,
               *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
               (*p_questRestrictionInfo)->fields.dataLostBattleId,
               0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_172;
  v183 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_258;
  v184 = entity;
  v186 = *(_QWORD *)&v183->fields.svtId.fields.currentCryptoKey;
  v185 = *(_QWORD *)&v183->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v299.fields.currentCryptoKey = v186;
  *(_QWORD *)&v299.fields.fakeValue = v185;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v299, 0LL);
  if ( !v184 )
    goto LABEL_258;
  Instance = UserEventDataLostEntity__IsRestart(v184, Instance, 0LL);
  v187 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_258;
  v188 = Instance;
  v189 = entity;
  v191 = *(_QWORD *)&v187->fields.svtId.fields.currentCryptoKey;
  v190 = *(_QWORD *)&v187->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v300.fields.currentCryptoKey = v191;
  *(_QWORD *)&v300.fields.fakeValue = v190;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v300, 0LL);
  if ( !v189 )
    goto LABEL_258;
  if ( (v188 & 1) != 0 )
  {
    this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(v189, Instance, 0LL);
  }
  else if ( UserEventDataLostEntity__IsDataLost(v189, Instance, 0LL) )
  {
    this->fields._IsDataLost_k__BackingField = 1;
  }
LABEL_172:
  if ( *p_questRestrictionInfo )
    v192 = (*p_questRestrictionInfo)->fields.eventId;
  else
    v192 = -1;
  if ( !this->fields.isBase )
  {
    partyIndex = this->fields.partyIndex;
    if ( (partyIndex & 0x80000000) == 0 )
      goto LABEL_190;
  }
  Instance = (int64_t)PartyListViewItem__GetMember(v100, v260, 0LL);
  if ( !Instance )
    goto LABEL_258;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(EquipSvtId, 0LL) >= 1 )
  {
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v194 = *p_userServantEntity;
    if ( *p_userServantEntity )
    {
      v195 = (PartyOrganizationUtility_o *)Instance;
      v197 = *(_QWORD *)&v194->fields.svtId.fields.currentCryptoKey;
      v196 = *(_QWORD *)&v194->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v301.fields.currentCryptoKey = v197;
      *(_QWORD *)&v301.fields.fakeValue = v196;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v301, 0LL);
      if ( *p_userServantEntity )
      {
        v198 = Instance;
        Rarity = UserServantEntity__getRarity(*p_userServantEntity, 0LL);
        Instance = (int64_t)PartyListViewItem__GetMember(v100, v260, 0LL);
        if ( Instance )
        {
          v302 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v302, 0LL);
          if ( v195 )
          {
            v200 = Instance;
            p_skillName = (System_String_o **)&v281;
            p_actMaxRarity = &v280;
            v203 = v195;
            v204 = v198;
            v205 = Rarity;
            goto LABEL_201;
          }
        }
      }
    }
    goto LABEL_258;
  }
  partyIndex = this->fields.partyIndex;
  if ( (partyIndex & 0x80000000) == 0 )
  {
LABEL_190:
    Instance = (int64_t)PartyListViewItem__GetMember(v100, partyIndex, 0LL);
    if ( !Instance )
      goto LABEL_258;
    v207 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v207, 0LL) >= 1 )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v208 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_258;
      v209 = (PartyOrganizationUtility_o *)Instance;
      v211 = *(_QWORD *)&v208->fields.svtId.fields.currentCryptoKey;
      v210 = *(_QWORD *)&v208->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v303.fields.currentCryptoKey = v211;
      *(_QWORD *)&v303.fields.fakeValue = v210;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v303, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_258;
      v212 = Instance;
      v213 = UserServantEntity__getRarity(*p_userServantEntity, 0LL);
      Instance = (int64_t)PartyListViewItem__GetMember(v100, this->fields.partyIndex, 0LL);
      if ( !Instance )
        goto LABEL_258;
      v304 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v304, 0LL);
      if ( !v209 )
        goto LABEL_258;
      v200 = Instance;
      p_skillName = &skillName;
      p_actMaxRarity = &actMaxRarity;
      v203 = v209;
      v204 = v212;
      v205 = v213;
LABEL_201:
      this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                       v203,
                                       p_skillName,
                                       p_actMaxRarity,
                                       v204,
                                       v205,
                                       v200,
                                       v192,
                                       0LL);
    }
  }
  v214 = this->fields.questRestrictionInfo;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  this->fields._SvtPointRank_k__BackingField = 0;
  this->fields._SvtPoint_k__BackingField = 0;
  if ( v214 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Instance )
      goto LABEL_258;
    v215 = (EventServantPointRankMaster_o *)Instance;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v192, 0LL) )
    {
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v216 = *p_userServantEntity;
      if ( *p_userServantEntity )
      {
        v217 = *(_OWORD *)&v216->fields.userId.fields.fakeValue;
        v218 = (UserEventServantPointMaster_o *)Instance;
        *(_OWORD *)item = *(_OWORD *)&v216->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&item[16] = v217;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v265 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v265, 0LL);
        if ( *p_userServantEntity )
        {
          v219 = Instance;
          Instance = UserServantEntity__getSvtId(*p_userServantEntity, 0LL);
          if ( v218 )
          {
            p_SvtPoint_k__BackingField = &this->fields._SvtPoint_k__BackingField;
            if ( UserEventServantPointMaster__TryGetEntity(v218, &v277, v219, v192, Instance, 0LL) )
            {
              Instance = (int64_t)v277;
              if ( !v277 )
                goto LABEL_258;
              *p_SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v277, 0LL);
            }
            Instance = (int64_t)*p_userServantEntity;
            if ( *p_userServantEntity )
            {
              v221 = *p_SvtPoint_k__BackingField;
              v222 = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
              EnableEntity = EventServantPointRankMaster__GetEnableEntity(v215, v192, v221, v222, 0LL);
              if ( EnableEntity )
                this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
              goto LABEL_220;
            }
          }
        }
      }
LABEL_258:
      sub_1BC3264(Instance, NotSamePartyKey);
    }
  }
LABEL_220:
  v224 = (System_Collections_Generic_List_T__o *)sub_1BC3254(System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
  System_Collections_Generic_List_ValueTuple_int__int__Int32Enum_____ctor(
    v224,
    (const MethodInfo_3655044 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
  if ( *p_questRestrictionInfo )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_258;
    v225 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance || !v225 )
      goto LABEL_258;
    Instance = (int64_t)EventCampaignMaster__GetFriendshipUpCampaigns(
                          (EventCampaignMaster_o *)v225,
                          *(_QWORD *)(Instance + 112),
                          0LL);
    if ( Instance )
    {
      v226 = (System_Collections_Generic_List_object__o *)Instance;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_258;
      v227 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventQuestMaster___);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)item,
        v226,
        (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
      v276 = *(System_Collections_Generic_List_Enumerator_object__o *)item;
      while ( 1 )
      {
        v228 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v276,
                 (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v228 )
          break;
        current = (EventCampaignEntity_o *)v276.fields._current;
        if ( !v276.fields._current )
          sub_1BC3264(v228, v229);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v276.fields._current[2].monitor;
        if ( monitor && monitor[1].monitor )
        {
          if ( !v261 )
            sub_1BC3264(v228, v229);
          v233 = *(_QWORD *)&v261->fields.svtId.fields.currentCryptoKey;
          v232 = *(_QWORD *)&v261->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v305.fields.currentCryptoKey = v233;
          *(_QWORD *)&v305.fields.fakeValue = v232;
          v234 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v305, 0LL);
          v228 = System_Linq_Enumerable__Contains_int_(
                   monitor,
                   v234,
                   (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___);
          if ( !v228 )
            continue;
        }
        if ( !*p_questRestrictionInfo )
          sub_1BC3264(v228, v229);
        if ( !v227 )
          sub_1BC3264(v228, v229);
        if ( !EventQuestMaster__IsEventNotIncluded(
                (EventQuestMaster_o *)v227,
                current->fields.eventId,
                (*p_questRestrictionInfo)->fields.questId,
                (*p_questRestrictionInfo)->fields.questPhase,
                7,
                0LL,
                0LL) )
        {
          v235 = current->fields.eventId;
          FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0LL);
          calcType = current->fields.calcType;
          v238 = FriendshipBonusValue;
          *(_DWORD *)&item[8] = 0;
          *(_QWORD *)item = 0LL;
          *(_QWORD *)&v290.fields.Item1 = item;
          v290.fields.Item3 = v235;
          System_ValueTuple_int__int__Int32Enum____ctor(
            v290,
            v238,
            calcType,
            Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__,
            v239);
          if ( !v224 )
            sub_1BC3264(v240, v241);
          v291 = *(System_ValueTuple_int__int__Int32Enum__o *)item;
          v242 = v224->fields._items;
          v243 = Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__;
          ++v224->fields._version;
          if ( !v242 )
            sub_1BC3264(v240, *(_QWORD *)&v291.fields.Item1);
          v244 = v224->fields._size;
          if ( (unsigned int)v244 >= v242->max_length )
          {
            System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____AddWithResize(
              v224,
              v291,
              *(const MethodInfo_36558D0 **)(*(_QWORD *)(v243[4] + 192LL) + 112LL));
          }
          else
          {
            v224->fields._size = v244 + 1;
            *((System_ValueTuple_int__int__Int32Enum__o *)v242->m_Items + v244) = v291;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v276,
        (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    }
  }
  if ( !v224 )
    goto LABEL_258;
  v245 = (struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *)System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____ToArray(
                                                                                    v224,
                                                                                    (const MethodInfo_3657494 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
  this->fields._FriendshipUpValTuple_k__BackingField = v245;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField, (int32_t)v245, v246, v247);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_258;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_258;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_258;
  this->fields.priority = *(_DWORD *)(Instance + 52);
  PartyServantListViewItem__InitAfterSecondSort(this, (const MethodInfo *)NotSamePartyKey);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_258;
  v248 = BalanceConfig_TypeInfo;
  v249 = *(_DWORD *)(Instance + 276);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v248 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v248->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v249;
  if ( !Instance )
    goto LABEL_258;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_258;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_258;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo3;
  if ( !*p_iconLabelInfo3 )
    goto LABEL_258;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyServantListViewItem___ctor_33648972(
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
  __int64 v30; // x1
  IconLabelInfo_o *v31; // x20
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  IconLabelInfo_o *v34; // x20
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  IconLabelInfo_o *v37; // x20
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int64_t Instance; // x0
  const MethodInfo *v41; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct UserServantEntity_o **p_userServantEntity; // x23
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  Il2CppObject *MasterData_object; // x0
  __int64 v54; // x20
  __int64 v55; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // x26
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // x26
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct UserServantEntity_o *v61; // x8
  __int128 v62; // q1
  UserServantCollectionMaster_o *v63; // x27
  int64_t v64; // x28
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  System_Collections_Generic_List_object__o *v71; // x21
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  char v75; // w28
  int32_t v76; // w27
  PartyOrganizationListViewItem_o *v77; // x29
  struct UserServantEntity_o *v78; // x8
  __int128 v79; // q0
  struct UserServantEntity_o *v80; // x8
  __int128 v81; // q0
  int64_t v82; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v83; // x8
  __int64 v84; // x20
  __int64 v85; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  int v87; // w20
  int v88; // w20
  struct ServantEntity_o *v89; // x8
  __int64 v90; // x20
  __int64 v91; // x21
  int32_t v92; // w29
  int32_t v93; // w20
  System_Int64_array *EquipList; // x0
  const MethodInfo *v95; // x2
  const MethodInfo *v96; // x1
  const MethodInfo *v97; // x1
  bool IsChoice; // w8
  UserServantEntity_o *v99; // x8
  const MethodInfo *v100; // x1
  UserServantEntity_o *v101; // x8
  UserServantEntity_o *v102; // x8
  bool IsUniqueIndividualityRestriction_42150052; // w0
  const MethodInfo *v104; // x1
  struct QuestRestrictionInfo_o *v105; // x8
  UserEventServantFatigueMaster_o *v106; // x22
  int32_t eventId; // w24
  __int64 v108; // x20
  __int64 v109; // x21
  int64_t v110; // x20
  BalanceConfig_c *v111; // x8
  int v112; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+8h] [xbp-108h]
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+10h] [xbp-100h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+18h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v119; // [xsp+60h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+80h] [xbp-90h]
  int64_t recoverAt; // [xsp+A0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+ACh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16

  if ( (byte_4AFDD0F & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&CommonRestrictionMaster_TypeInfo, v17);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantClassMaster___, v18);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v19);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v20);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v21);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v22);
    sub_1BC3008(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v23);
    sub_1BC3008(&IconLabelInfo_TypeInfo, v24);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v25);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v26);
    sub_1BC3008(&NetworkManager_TypeInfo, v27);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v29);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30);
    byte_4AFDD0F = 1;
  }
  friendshipRank = 0;
  recoverAt = 0LL;
  v31 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v31, 0LL);
  this->fields.iconLabelInfo1 = v31;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v31, v32, v33);
  v34 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v34, 0LL);
  this->fields.iconLabelInfo2 = v34;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v34, v35, v36);
  v37 = (IconLabelInfo_o *)sub_1BC3254(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v37, 0LL);
  this->fields.iconLabelInfo3 = v37;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.iconLabelInfo3, (int32_t)v37, v38, v39);
  ListViewItem___ctor_42769384((ListViewItem_o *)this, index, 0LL);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_83;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, num, 0LL);
  this->fields.baseItem = MemberItem;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseItem, (int32_t)MemberItem, v43, v44);
  baseItem = this->fields.baseItem;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_83;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v45, v46);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v49, v50);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v51, v52);
  if ( !this->fields.userServantEntity )
    goto LABEL_83;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  v55 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v54 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v56 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v123.fields.currentCryptoKey = v55;
  *(_QWORD *)&v123.fields.fakeValue = v54;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v123, 0LL);
  if ( !v56 )
    goto LABEL_83;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v56,
             Instance,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v59, v60);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v61 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_83;
  v62 = *(_OWORD *)&v61->fields.userId.fields.fakeValue;
  v63 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)&v61->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v120.fields.fakeValue = v62;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v119 = v120;
  v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v119, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(this->fields.svtId, 0LL);
  if ( !v63 )
    goto LABEL_83;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v63, v64, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_83;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !Instance )
    goto LABEL_83;
  UserServantCollectionEntity__getFriendShipRankInfo(
    (UserServantCollectionEntity_o *)Instance,
    &friendshipRank,
    &this->fields.friendshipMax,
    0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0LL);
  this->fields.isBase = 0;
  this->fields.isSame = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipUserServantEntity, 0, v65, v66);
  this->fields.equipServantEntity = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipServantEntity, 0, v67, v68);
  this->fields.equipIdList = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v69, v70);
  v71 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v71,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v71;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v71, v72, v73);
  Instance = (int64_t)this->fields.servantEntity;
  if ( !Instance )
    goto LABEL_83;
  Instance = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0LL);
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_83;
  v75 = Instance;
  v76 = 0;
  while ( v76 < (signed int)memberItemList->max_length )
  {
    Instance = (int64_t)WarBoardPartyListViewItem__GetMemberItem(partyItem, v76, 0LL);
    if ( !Instance )
      goto LABEL_83;
    v77 = (PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 112) )
    {
      v78 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_83;
      v79 = *(_OWORD *)&v78->fields.id.fields.fakeValue;
      *(_OWORD *)&v120.fields.currentCryptoKey = *(_OWORD *)&v78->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v120.fields.fakeValue = v79;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v118 = v120;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v118, 0LL);
      v80 = v77->fields.userServantEntity;
      if ( !v80 )
        goto LABEL_83;
      v81 = *(_OWORD *)&v80->fields.id.fields.fakeValue;
      v82 = Instance;
      *(_OWORD *)&v117.fields.currentCryptoKey = *(_OWORD *)&v80->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v117.fields.fakeValue = v81;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v117, 0LL);
      if ( v82 == Instance )
      {
        this->fields.isSame = 0;
        this->fields.isBase = num == v76;
        this->fields.partyIndex = v76;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v77, 0LL);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v95);
        break;
      }
      if ( num != v76 )
      {
        v83 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_83;
        v85 = *(_QWORD *)&v83[2].fields.currentCryptoKey;
        v84 = *(_QWORD *)&v83[2].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v124.fields.currentCryptoKey = v85;
        *(_QWORD *)&v124.fields.fakeValue = v84;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v124, 0LL);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v77->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_83;
        v87 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(servantEntity[2], 0LL);
        if ( v87 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else
        {
          if ( (v75 & 1) == 0 )
            goto LABEL_42;
          Instance = (int64_t)v77->fields.servantEntity;
          if ( !Instance )
            goto LABEL_83;
          Instance = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0LL);
          if ( (Instance & 1) == 0 )
            goto LABEL_42;
          Instance = (int64_t)*p_servantEntity;
          if ( !*p_servantEntity )
            goto LABEL_83;
          Instance = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0LL);
          if ( !v77->fields.servantEntity )
            goto LABEL_83;
          v88 = Instance;
          Instance = ServantEntity__GetNotSamePartyKey(v77->fields.servantEntity, 0LL);
          if ( v88 == (_DWORD)Instance )
          {
            this->fields.isNotSameParty = 1;
          }
          else
          {
LABEL_42:
            if ( this->fields.commonRestrictionId == -1 )
            {
              v89 = v77->fields.servantEntity;
              if ( !v89 )
                goto LABEL_83;
              v91 = *(_QWORD *)&v89->fields.baseSvtId.fields.currentCryptoKey;
              v90 = *(_QWORD *)&v89->fields.baseSvtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v125.fields.currentCryptoKey = v91;
              *(_QWORD *)&v125.fields.fakeValue = v90;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v125, 0LL);
              if ( !*p_servantEntity )
                goto LABEL_83;
              v92 = Instance;
              v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060((*p_servantEntity)[2], 0LL);
              if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
              Instance = CommonRestrictionMaster__GetIncludedRestrictionIds(v92, v93, 0LL);
              if ( (Instance & 0x80000000) == 0 )
                this->fields.commonRestrictionId = Instance;
            }
          }
        }
      }
    }
    memberItemList = partyItem->fields.memberItemList;
    ++v76;
    if ( !memberItemList )
      goto LABEL_83;
  }
  PartyServantListViewItem__CheckConvertOverwriteImage(this, v41);
  PartyServantListViewItem__ModifyLimitCount(this, v96);
  PartyServantListViewItem__ModifyOverwriteStatus(this, v97);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.updateCategoryIdList = 1;
  if ( !Instance )
    goto LABEL_83;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0LL);
  this->fields.isLock = Instance & 1;
  if ( !this->fields.userServantEntity )
    goto LABEL_83;
  IsChoice = UserServantEntity__IsChoice(this->fields.userServantEntity, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  *(_DWORD *)&this->fields.isLockMode = 0;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_83;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v99 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v99 )
    goto LABEL_83;
  this->fields.isLeave = UserServantEntity__IsLeave(v99, 0LL);
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v100);
  v101 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v101 )
    goto LABEL_83;
  Instance = UserServantEntity__getUniqueSvtRestriction_42149672(
               v101,
               this->fields.questRestrictionInfo,
               0LL,
               num,
               this->fields.partyIndex,
               0LL);
  v102 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v102 )
    goto LABEL_83;
  IsUniqueIndividualityRestriction_42150052 = UserServantEntity__IsUniqueIndividualityRestriction_42150052(
                                                v102,
                                                this->fields.questRestrictionInfo,
                                                0LL,
                                                num,
                                                this->fields.partyIndex,
                                                0LL);
  v105 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_42150052;
  this->fields.fatigureTime = -1LL;
  this->fields.isFatigureRecover = 0;
  if ( !v105 || !v105->fields.isFatigure )
    goto LABEL_72;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
  if ( !*p_questRestrictionInfo )
    goto LABEL_83;
  v106 = (UserEventServantFatigueMaster_o *)Instance;
  eventId = (*p_questRestrictionInfo)->fields.eventId;
  v109 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v108 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v126.fields.currentCryptoKey = v109;
  *(_QWORD *)&v126.fields.fakeValue = v108;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v126, 0LL);
  if ( !v106 )
LABEL_83:
    sub_1BC3264(Instance, v41);
  if ( UserEventServantFatigueMaster__GetFatigueInfo(
         v106,
         &recoverAt,
         &this->fields.isFatigureRecover,
         eventId,
         Instance,
         0LL) )
  {
    v110 = recoverAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( v110 > NetworkManager__getTime(0LL) )
      this->fields.fatigureTime = recoverAt;
  }
LABEL_72:
  this->fields._IsAllOutBattle_k__BackingField = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v104);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_83;
  this->fields.priority = *(_DWORD *)(Instance + 52);
  PartyServantListViewItem__InitAfterSecondSort(this, v41);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_83;
  v111 = BalanceConfig_TypeInfo;
  v112 = *(_DWORD *)(Instance + 276);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v111 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v111->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v112;
  if ( !Instance )
    goto LABEL_83;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.amountSortValue = -1LL;
  if ( !Instance )
    goto LABEL_83;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_83;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
  Instance = (int64_t)*p_iconLabelInfo3;
  if ( !*p_iconLabelInfo3 )
    goto LABEL_83;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall PartyServantListViewItem__CheckConvertOverwriteImage(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
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
  if ( (byte_4AFDD12 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4AFDD12 = 1;
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
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v13, 0LL);
      this = (PartyServantListViewItem_o *)QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v8, 0LL);
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
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                 v14,
                                                 0LL);
          if ( v10 )
          {
            if ( !QuestRestrictionInfo__UnapplyOverwriteLimitCountAtServantStatus(v10, (int32_t)this, 0, 0LL) )
              v2->fields.isConvertOverwriteImage = 1;
            return;
          }
        }
LABEL_17:
        sub_1BC3264(this, method);
      }
    }
  }
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
  if ( (byte_4AFDD10 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4AFDD10 = 1;
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
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v33, 0LL);
  v7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
  if ( !v7 )
    goto LABEL_38;
  v8 = (int)this;
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v7[6], 0LL);
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
  if ( !QuestRestrictionInfo__IsRestriction_42393932(
          questRestrictionInfo,
          &v2->fields.isQuestRestrictionWhole,
          v8,
          v9,
          (int32_t)this,
          v2->fields.rarityId,
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
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v34, 0LL);
    v16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
    if ( !v16 )
      goto LABEL_38;
    v17 = (int)this;
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
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
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v35, 0LL);
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
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                               v36,
                                               0LL);
        v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
        if ( v28 )
        {
          v29 = (int)this;
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
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
    sub_1BC3264(this, method);
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


void __fastcall PartyServantListViewItem__ForceConvertOverwriteImage(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
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
  if ( (byte_4AFDD11 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4AFDD11 = 1;
  }
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    userServantEntity = v2->fields.userServantEntity;
    if ( !userServantEntity )
      sub_1BC3264(this, method);
    v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v9, 0LL);
    if ( QuestRestrictionInfo__IsConvertOverwriteImage(questRestrictionInfo, v7, 0LL) )
      v2->fields.isConvertOverwriteImage = 1;
  }
  PartyServantListViewItem__ModifyLimitCount(v2, method);
  PartyServantListViewItem__ModifyOverwriteStatus(v2, v8);
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

  if ( (byte_4AFDD19 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___, method);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4AFDD19 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = questRestrictionInfo->fields.allOutBattleGroupNo;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (UserEventAlloutBattleMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v15, 0LL);
  v13 = this->fields.questRestrictionInfo;
  if ( !v13 || !v12 )
LABEL_13:
    sub_1BC3264(Instance, v8);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4AFDD1C & 1) == 0 )
  {
    sub_1BC3008(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_4AFDD1C = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1BC3254(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)tdInfo, (int32_t)v7, v8, v9);
  return 0;
}


PartyOrganizationListViewItem_o *__fastcall PartyServantListViewItem__GetPartyBaseItem(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.baseItem;
}


System_String_o *__fastcall PartyServantListViewItem__GetRestrictionMessage(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t commonRestrictionId; // w19

  if ( (byte_4AFDD18 & 1) == 0 )
  {
    sub_1BC3008(&CommonRestrictionMaster_TypeInfo, method);
    byte_4AFDD18 = 1;
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
  if ( (byte_4AFDD1D & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4AFDD1D = 1;
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
      v2->fields.sortValue2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v8, 0LL);
      v2->fields.sortValue2B = 0LL;
      return;
    }
LABEL_14:
    sub_1BC3264(this, method);
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
  v2->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v9, 0LL);
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
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  FilterKindList_c *v10; // x0
  ListViewSort_FilterKind_array *v11; // x0
  FilterKindList_c *v12; // x0
  ListViewSort_FilterKind_array *v13; // x0
  FilterKindList_c *v14; // x0
  ListViewSort_FilterKind_array *v15; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w21
  UserServantEntity_o *userServantEntity; // x22
  __int64 v19; // x2
  System_Collections_Generic_List_T__o *v20; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v22; // x0
  ListViewSort_FilterKind_array *v23; // x21
  UserServantEntity_o *v25; // x0
  int32_t dispLimitCount; // w2
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v34; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v36; // w0

  if ( (byte_4AFDD16 & 1) == 0 )
  {
    sub_1BC3008(&FilterKindList_TypeInfo, sort);
    sub_1BC3008(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1BC3008(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_4AFDD16 = 1;
  }
  v8 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v8 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v8->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_65;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v10 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v10 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v10->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_65;
    v11 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             ClassGroupFilterKindList,
                                             (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v12->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  v13 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v14->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  if ( ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
    goto LABEL_33;
  v25 = this->fields.userServantEntity;
  if ( v25 && this->fields.updateCategoryIdList )
  {
    dispLimitCount = this->fields.dispLimitCount;
    this->fields.updateCategoryIdList = 0;
    SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v25, -1, dispLimitCount, 0LL);
    this->fields.skillCategoryIdList = SkillCategoryIdList;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v28, v29);
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userServantEntity;
    if ( !ClassGroupFilterKindList )
      goto LABEL_65;
    TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     this->fields.dispLimitCount,
                                     0LL);
    this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
    sub_1BC2FAC(
      (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
      (int32_t)TreasureDeviceCategoryIdList,
      v31,
      v32);
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_1BC30B0(
                                                                       ListViewSort_FilterKind___TypeInfo,
                                                                       1LL);
  if ( !ClassGroupFilterKindList )
LABEL_65:
    sub_1BC3264(ClassGroupFilterKindList, sort);
  v20 = ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_66;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                   0LL);
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_1BC30B0(
                                                                       ListViewSort_FilterKind___TypeInfo,
                                                                       1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  v20 = ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList->fields._size )
LABEL_66:
    sub_1BC326C(ClassGroupFilterKindList, v20, v19);
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 51;
  v34 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            this->fields.tdCategoryIdList,
                            sort,
                            0LL);
  v36 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
  if ( ((IsUnSelectedAllTargetFilters ^ v34) & 1) != 0 )
  {
    if ( IsUnSelectedAllTargetFilters )
    {
      if ( !v36 )
        return 0;
    }
    else if ( !IsMatchEffectCategory )
    {
      return 0;
    }
  }
  else if ( !IsMatchEffectCategory && !v36 )
  {
    return 0;
  }
LABEL_33:
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userServantEntity, this->fields.servantEntity, 0LL)
    || !ListViewSort__IsMatchServantSubAttriFilter(
          sort,
          this->fields.userServantEntity,
          this->fields.servantEntity,
          0LL) )
  {
    return 0;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_1BC30B0(
                                                                       ListViewSort_FilterKind___TypeInfo,
                                                                       1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  v20 = ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_66;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 39;
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL)
    && ListViewSort__GetFilter(sort, 39, 0LL) )
  {
    isChoice = !this->fields.isChoice;
    if ( !this->fields.isSwapChoice )
      isChoice = this->fields.isChoice;
    if ( !isChoice )
      return 0;
  }
  v22 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v22 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v22->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  v23 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_3688100 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v23, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v23, 0LL)
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
    sub_1BC3264(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userServantEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall PartyServantListViewItem__ModifyItem(
        PartyServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UserServantEntity_o **p_userServantEntity; // x20
  __int64 v6; // x1
  bool IsLeave; // w0
  int32_t dispLimitCount; // w20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, (int32_t)method, v3);
  if ( !*p_userServantEntity )
    sub_1BC3264(0LL, v6);
  IsLeave = UserServantEntity__IsLeave(*p_userServantEntity, 0LL);
  dispLimitCount = this->fields.dispLimitCount;
  this->fields.isLeave = IsLeave;
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  PartyServantListViewItem__ModifyLimitCount(this, v9);
  PartyServantListViewItem__ModifyOverwriteStatus(this, v10);
  if ( dispLimitCount != this->fields.dispLimitCount )
    this->fields.updateCategoryIdList = 1;
  this->fields.isQuestRestriction = PartyServantListViewItem__ChkQuestRestriction(this, v11);
}


void __fastcall PartyServantListViewItem__ModifyLimitCount(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  struct UserServantEntity_o *v8; // x8
  int32_t v9; // w20
  int32_t v10; // w0
  int32_t dispLimitCount; // w22
  int32_t v12; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4AFDD13 & 1) == 0 )
  {
    sub_1BC3008(&ImageLimitCount_TypeInfo, method);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4AFDD13 = 1;
  }
  if ( this->fields.isConvertOverwriteImage )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_15;
    questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCount_42410260(
                                                       questRestrictionInfo,
                                                       this->fields.userServantEntity,
                                                       0LL);
  }
  else
  {
    questRestrictionInfo = (QuestRestrictionInfo_o *)this->fields.userServantEntity;
    if ( !questRestrictionInfo )
      goto LABEL_15;
    questRestrictionInfo = (QuestRestrictionInfo_o *)UserServantEntity__getDispLimitCount(
                                                       (UserServantEntity_o *)questRestrictionInfo,
                                                       0,
                                                       0LL);
  }
  userServantEntity = this->fields.userServantEntity;
  this->fields.dispLimitCount = (int)questRestrictionInfo;
  if ( !userServantEntity )
    goto LABEL_15;
  v7 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v7;
  *(_QWORD *)&v13.fields.fakeValue = v6;
  questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                     v13,
                                                     0LL);
  v8 = this->fields.userServantEntity;
  if ( !v8 )
LABEL_15:
    sub_1BC3264(questRestrictionInfo, method);
  v9 = (int)questRestrictionInfo;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v8->fields.limitCount, 0LL);
  dispLimitCount = this->fields.dispLimitCount;
  v12 = v10;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount__GetDispLimitCountSealAfter(
    v9,
    v12,
    dispLimitCount,
    &this->fields.dispLimitCount,
    &this->fields.selectedLimitCount,
    0LL);
}


void __fastcall PartyServantListViewItem__ModifyLockItem(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1BC3264(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall PartyServantListViewItem__ModifyOverwriteStatus(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t userServantEntity; // x0
  _BOOL4 IsGrandSameServant_k__BackingField; // w8
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct UserServantEntity_o *v7; // x8
  __int128 v8; // q1
  struct UserServantEntity_o *v9; // x8
  __int128 v10; // q0
  int64_t v11; // x20
  struct PartyOrganizationListViewItem_o *v12; // x8
  struct UserServantEntity_o *v13; // x8
  __int128 v14; // q0
  struct UserServantEntity_o *v15; // x8
  __int128 v16; // q0
  int32_t v17; // w20
  UserServantEntity_o *v18; // x8
  int32_t v19; // w20
  int32_t v20; // w8
  UserServantEntity_o *v21; // x20
  int32_t hp; // w21
  UserServantGrandInfo_o *v23; // x20
  int32_t AddedHp; // w0
  int32_t atk; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+60h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+80h] [xbp-50h]

  if ( (byte_4AFDD14 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    sub_1BC3008(&UserServantGrandInfo_TypeInfo, v3);
    byte_4AFDD14 = 1;
  }
  userServantEntity = (int64_t)this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_34;
  userServantEntity = (int64_t)UserServantEntity__GetOverwriteStatus_42162276(
                                 (UserServantEntity_o *)userServantEntity,
                                 this->fields.selectedLimitCount,
                                 0LL);
  if ( !userServantEntity )
    goto LABEL_34;
  this->fields.cost = *(_DWORD *)(userServantEntity + 28);
  *(_QWORD *)&this->fields.hp = *(_QWORD *)(userServantEntity + 16);
  this->fields.rarityId = *(_DWORD *)(userServantEntity + 24);
  method = (const MethodInfo *)*(unsigned int *)(userServantEntity + 40);
  userServantEntity = (int64_t)this->fields.userServantEntity;
  this->fields.actualRarity = (int)method;
  if ( !userServantEntity )
    goto LABEL_34;
  userServantEntity = UserServantEntity__GetFrameType((UserServantEntity_o *)userServantEntity, (int32_t)method, 0LL);
  IsGrandSameServant_k__BackingField = this->fields._IsGrandSameServant_k__BackingField;
  this->fields.frameType = userServantEntity;
  if ( !IsGrandSameServant_k__BackingField )
    return;
  baseItem = this->fields.baseItem;
  if ( !baseItem )
    goto LABEL_34;
  v7 = baseItem->fields.userServantEntity;
  if ( !v7 )
    goto LABEL_34;
  v8 = *(_OWORD *)&v7->fields.id.fields.fakeValue;
  *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&v7->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v30.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v29 = v30;
  userServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v29, 0LL);
  v9 = this->fields.userServantEntity;
  if ( !v9 )
    goto LABEL_34;
  v10 = *(_OWORD *)&v9->fields.id.fields.fakeValue;
  v11 = userServantEntity;
  *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&v9->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v28.fields.fakeValue = v10;
  userServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v28, 0LL);
  if ( v11 == userServantEntity )
  {
    userServantEntity = (int64_t)this->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_34;
    userServantEntity = UserServantEntity__IsGrandServant((UserServantEntity_o *)userServantEntity, 0LL);
    if ( (userServantEntity & 1) == 0 )
    {
      v21 = this->fields.userServantEntity;
      if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
      userServantEntity = (int64_t)UserServantGrandInfo__Make(v21, 1, 0LL);
      if ( userServantEntity )
      {
        hp = this->fields.hp;
        v23 = (UserServantGrandInfo_o *)userServantEntity;
        AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)userServantEntity, 0LL);
        atk = this->fields.atk;
        this->fields.hp = AddedHp + hp;
        v20 = UserServantGrandInfo__get_AddedAtk(v23, 0LL) + atk;
        goto LABEL_32;
      }
LABEL_34:
      sub_1BC3264(userServantEntity, method);
    }
  }
  v12 = this->fields.baseItem;
  if ( !v12 )
    goto LABEL_34;
  v13 = v12->fields.userServantEntity;
  if ( !v13 )
    goto LABEL_34;
  v14 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
  *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v30.fields.fakeValue = v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v27 = v30;
  userServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v27, 0LL);
  v15 = this->fields.userServantEntity;
  if ( !v15 )
    goto LABEL_34;
  v16 = *(_OWORD *)&v15->fields.id.fields.fakeValue;
  *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&v15->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v26.fields.fakeValue = v16;
  if ( userServantEntity == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v26, 0LL) )
    return;
  userServantEntity = (int64_t)this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_34;
  if ( !UserServantEntity__IsGrandServant((UserServantEntity_o *)userServantEntity, 0LL) )
    return;
  userServantEntity = (int64_t)this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_34;
  v17 = this->fields.hp;
  userServantEntity = (int64_t)UserServantEntity__get_GrandInfo((UserServantEntity_o *)userServantEntity, 0LL);
  if ( !userServantEntity )
    goto LABEL_34;
  userServantEntity = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)userServantEntity, 0LL);
  v18 = this->fields.userServantEntity;
  this->fields.hp = v17 - userServantEntity;
  if ( !v18 )
    goto LABEL_34;
  v19 = this->fields.atk;
  userServantEntity = (int64_t)UserServantEntity__get_GrandInfo(v18, 0LL);
  if ( !userServantEntity )
    goto LABEL_34;
  v20 = v19 - UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)userServantEntity, 0LL);
LABEL_32:
  this->fields.atk = v20;
}


void __fastcall PartyServantListViewItem__SetEquipStatus(
        PartyServantListViewItem_o *this,
        System_Int64_array *equipIds,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
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
  Il2CppObject **p_equipUserServantEntity; // x22
  CGThumbnailListItem_o *p_equipServantEntity; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Int64_array **p_equipIdList; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_object__o *v23; // x24
  Il2CppObject **v24; // x19
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  Il2CppObject *Master_object; // x0
  Il2CppObject *v28; // x1
  __int64 v29; // x2
  struct System_Int64_array *v30; // x8
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x23
  __int64 v35; // x1
  BalanceConfig_c *v36; // x0
  struct System_Int64_array *v37; // x8
  Il2CppObject *v38; // x8
  void *monitor; // x23
  Il2CppClass *klass; // x24
  Il2CppObject *v41; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x22
  void *v43; // x23
  Il2CppClass *v44; // x24
  Il2CppObject *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Int64_array *v48; // x23
  __int64 v49; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v50; // x20
  unsigned __int64 v51; // x24
  void *v52; // x21
  Il2CppClass *v53; // x22
  const MethodInfo *v54; // x3
  Il2CppClass *v55; // x8
  _QWORD *v56; // x9
  __int64 monitor_low; // x10
  void **v58; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_4AFDD15 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, equipIds);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantMaster___, v7);
    sub_1BC3008(&DataManager_TypeInfo, v8);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10);
    sub_1BC3008(&long___TypeInfo, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v13);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v14);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    byte_4AFDD15 = 1;
  }
  p_equipUserServantEntity = (Il2CppObject **)&this->fields.equipUserServantEntity;
  entity = 0LL;
  this->fields.equipUserServantEntity = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipUserServantEntity, 0, (int32_t)method, v3);
  p_equipServantEntity = (CGThumbnailListItem_o *)&this->fields.equipServantEntity;
  this->fields.equipServantEntity = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.equipServantEntity, 0, v18, v19);
  this->fields.equipIdList = 0LL;
  p_equipIdList = &this->fields.equipIdList;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_equipIdList, 0, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v24 = (Il2CppObject **)(p_equipIdList + 24);
  p_equipIdList[24] = (struct System_Int64_array *)v23;
  sub_1BC2FAC((CGThumbnailListItem_o *)(p_equipIdList + 24), (int32_t)v23, v25, v26);
  if ( !*(p_equipIdList - 1) )
    return;
  if ( !equipIds )
    goto LABEL_9;
  v30 = *p_equipIdList;
  if ( *p_equipIdList == equipIds )
    goto LABEL_14;
  v31 = System_Array__Clone((System_Array_o *)equipIds, 0LL);
  if ( v31 )
  {
    v34 = v31;
    v35 = sub_1BC3144(v31, long___TypeInfo);
    if ( !v35 )
    {
      sub_1BC3524(v34);
LABEL_9:
      v36 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v36 = BalanceConfig_TypeInfo;
      }
      v35 = sub_1BC30B0(long___TypeInfo, (unsigned int)v36->static_fields->SvtEquipMax);
    }
  }
  else
  {
    v35 = 0LL;
  }
  *p_equipIdList = (struct System_Int64_array *)v35;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_equipIdList, v35, v32, v33);
  v30 = *p_equipIdList;
LABEL_14:
  if ( !v30 )
    goto LABEL_56;
  if ( !v30->max_length )
    goto LABEL_57;
  if ( v30->m_Items[0] >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantMaster___);
    v37 = *p_equipIdList;
    if ( !*p_equipIdList )
      goto LABEL_56;
    if ( !v37->max_length )
      goto LABEL_57;
    if ( !Master_object )
      goto LABEL_56;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      p_equipUserServantEntity,
                                      v37->m_Items[0],
                                      (const MethodInfo_32B1618 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      v38 = *p_equipUserServantEntity;
      if ( !*p_equipUserServantEntity )
        goto LABEL_56;
      klass = v38[5].klass;
      monitor = v38[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v60.fields.currentCryptoKey = klass;
      *(_QWORD *)&v60.fields.fakeValue = monitor;
      Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v60, 0LL);
      if ( (int)Master_object >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
        v41 = *p_equipUserServantEntity;
        if ( !*p_equipUserServantEntity )
          goto LABEL_56;
        v42 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        v44 = v41[5].klass;
        v43 = v41[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v61.fields.currentCryptoKey = v44;
        *(_QWORD *)&v61.fields.fakeValue = v43;
        Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v61, 0LL);
        if ( !v42 )
          goto LABEL_56;
        v45 = DataMasterBase_object__object__int___GetEntity(
                v42,
                (int32_t)Master_object,
                (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        p_equipServantEntity->klass = (CGThumbnailListItem_c *)v45;
        sub_1BC2FAC(p_equipServantEntity, (int32_t)v45, v46, v47);
      }
    }
  }
  if ( !*p_equipIdList )
    goto LABEL_56;
  if ( (int)(*p_equipIdList)->max_length < 2 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantMaster___);
  v48 = *p_equipIdList;
  if ( !*p_equipIdList )
LABEL_56:
    sub_1BC3264(Master_object, v28);
  v49 = *(_QWORD *)&v48->max_length;
  if ( (int)v49 >= 1 )
  {
    v50 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v51 = 0LL;
    while ( v51 < (unsigned int)v49 )
    {
      v29 = v48->m_Items[v51];
      if ( v29 >= 1 )
      {
        if ( !v50 )
          goto LABEL_56;
        Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                          v50,
                                          &entity,
                                          v29,
                                          (const MethodInfo_32B1618 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_56;
          v53 = entity[5].klass;
          v52 = entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v62.fields.currentCryptoKey = v53;
          *(_QWORD *)&v62.fields.fakeValue = v52;
          Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v62, 0LL);
          if ( (int)Master_object >= 1 )
          {
            Master_object = *v24;
            if ( !*v24 )
              goto LABEL_56;
            v28 = entity;
            v55 = Master_object[1].klass;
            v56 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++HIDWORD(Master_object[1].monitor);
            if ( !v55 )
              goto LABEL_56;
            monitor_low = SLODWORD(Master_object[1].monitor);
            if ( (unsigned int)monitor_low >= LODWORD(v55->_1.namespaze) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Master_object,
                v28,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
            }
            else
            {
              v58 = &v55->_1.image + monitor_low;
              LODWORD(Master_object[1].monitor) = monitor_low + 1;
              v58[4] = v28;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v58 + 4), (int32_t)v28, v29, v54);
            }
          }
        }
      }
      LODWORD(v49) = v48->max_length;
      if ( (__int64)++v51 >= (int)v49 )
        return;
    }
LABEL_57:
    sub_1BC326C(Master_object, v28, v29);
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  PartyServantListViewItem_c *v26; // x0
  _BOOL4 isChoice; // w22
  struct PartyServantListViewItem_StaticFields *static_fields; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x9
  int64_t PRIORITY_NORMAL; // x10
  __int64 PRIORITY_LOWEST; // x8
  PartyServantListViewItem_c *v32; // x0
  __int64 PRIORITY_LOWEST_HEROIN_LEAVE; // x8
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t cost; // w4
  struct UserServantEntity_o *v36; // x8
  __int128 v37; // q1
  struct UserServantEntity_o *v38; // x8
  struct ListViewManager_o *manager; // x8
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v41; // x21
  int64_t SvtPoint_k__BackingField; // x8
  int64_t hp; // x2
  int32_t friendshipMax; // w3
  int32_t v45; // w1
  int32_t v46; // w20
  struct PartyOrganizationListViewItem_o *baseItem; // x8
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
  struct QuestRestrictionInfo_o *v58; // x8
  int64_t fatigureTime_low; // x20
  int64_t priority; // x9
  struct ServantEntity_o *v61; // x8
  IconLabelInfo_o *v62; // x21
  struct PartyOrganizationListViewItem_o *v63; // x8
  struct UserServantEntity_o *v64; // x8
  __int128 v65; // q1
  struct UserServantEntity_o *v66; // x8
  __int128 v67; // q0
  PartyServantListViewItem_o *v68; // x21
  struct PartyOrganizationListViewItem_o *v69; // x8
  struct UserServantEntity_o *v70; // x8
  __int128 v71; // q0
  struct UserServantEntity_o *v72; // x8
  __int128 v73; // q0
  int64_t rarityId; // x2
  struct UserServantEntity_o *v75; // x8
  int64_t v76; // x8
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct ListViewManager_o *v78; // x8
  __int64 v79; // x11
  struct ListViewManager_o *v80; // x20
  __int64 v81; // x20
  __int64 v82; // x21
  int32_t v83; // w0
  PartyServantListViewItem_o *iconLabelInfo1; // x20
  int64_t v85; // x9
  int32_t v86; // w3
  IconLabelInfo_o *v87; // x0
  int32_t v88; // w2
  struct EventUpValSetupInfo_o *setupInfo; // x8
  int32_t bonusKind; // w8
  EventUpValSetupInfo_o *v91; // x21
  UserServantEntity_o *v92; // x22
  int32_t ServantFilterEventId; // w23
  struct UserServantEntity_o *v94; // x3
  UserServantEntity_o *v95; // x0
  EventUpValSetupInfo_o *v96; // x1
  int32_t v97; // w2
  int32_t bonusKind2; // w8
  int32_t v99; // w21
  UserServantEntity_o *v100; // x21
  struct UserServantEntity_o *equipUserServantEntity; // x8
  int32_t atk; // w4
  int32_t v103; // w1
  int32_t v104; // w21
  int monitor_high; // w8
  int32_t v106; // w2
  int32_t v107; // w1
  UserServantEntity_o *v108; // x21
  struct UserServantEntity_o *v109; // x8
  int monitor; // w8
  int32_t fatigureTime; // w20
  int32_t v112; // w8
  int32_t bonusKindId; // w9
  int32_t v114; // w8
  int32_t v115; // w8
  UserServantEntity_o *userServantEntity; // x22
  EventUpValSetupInfo_o *v117; // x23
  bool EventUpVal_42144440; // w0
  int32_t bonusKind2Id; // w8
  Il2CppObject *Master_object; // x0
  __int64 v121; // x22
  __int64 v122; // x23
  EventCampaignMaster_o *v123; // x21
  bool IsEnableServant; // w0
  __int64 v125; // x21
  __int64 v126; // x22
  const MethodInfo *v127; // x2
  struct ServantEntity_o *servantEntity; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v130; // x8
  Il2CppObject *v131; // x0
  __int64 v132; // x22
  __int64 v133; // x23
  EventCampaignMaster_o *v134; // x21
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v136; // x0
  __int64 *v137; // x8
  System_Func_T__bool__o *v138; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v140; // [xsp+10h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v141; // [xsp+30h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v142; // [xsp+50h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v143; // [xsp+70h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v144; // [xsp+90h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v145; // [xsp+B0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v146; // [xsp+D0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v147; // [xsp+F0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v148; // [xsp+110h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v149; // [xsp+130h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v150; // [xsp+150h] [xbp-60h] BYREF
  int32_t tdMaxLv[2]; // [xsp+178h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v152; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v154; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v156; // 0:x0.16

  v4 = this;
  if ( (byte_4AFDD17 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_EventCampaignMaster___, v6);
    sub_1BC3008(&Method_DataManager_GetMaster_EventGroupMaster___, v7);
    sub_1BC3008(&DataManager_TypeInfo, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__, v11);
    sub_1BC3008(&System_Func_EventGroupEntity__bool__TypeInfo, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v14);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v15);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1BC3008(&Method_PartyServantListViewItem__SetSortValue_b__134_0__, v18);
    sub_1BC3008(&Method_PartyServantListViewItem__SetSortValue_b__134_1__, v19);
    sub_1BC3008(&PartyServantListViewItem_TypeInfo, v20);
    sub_1BC3008(&PartyServantListViewManager_TypeInfo, v21);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v23);
    sub_1BC3008(&TutorialFlag_TypeInfo, v24);
    this = (PartyServantListViewItem_o *)sub_1BC3008(&UserServantGrandInfo_TypeInfo, v25);
    byte_4AFDD17 = 1;
  }
  memset(&v150, 0, sizeof(v150));
  *(_QWORD *)tdMaxLv = 0LL;
  *(_WORD *)&v4->fields.isTermination = 0;
  v4->fields.sortValue1 = -1LL;
  if ( !sort )
    goto LABEL_280;
  if ( sort->fields.isBonusKind && !v4->fields.isBase && !v4->fields._IsGrandSameServant_k__BackingField )
  {
    manager = sort->fields.manager;
    if ( manager
      && (methodPtr_low = LOBYTE(PartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (PartyServantListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyServantListViewManager_TypeInfo )
        v41 = sort->fields.manager;
      else
        v41 = 0LL;
    }
    else
    {
      v41 = 0LL;
    }
    setupInfo = v4->fields.setupInfo;
    if ( setupInfo )
    {
      if ( !setupInfo->fields.isQuestStart )
        goto LABEL_163;
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (PartyServantListViewItem_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v41, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_163;
      if ( !v41 )
        goto LABEL_280;
      if ( !BYTE5(v41[1].fields.dragParentObject) )
      {
LABEL_163:
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
                goto LABEL_278;
            }
            v4->fields.bonusKind = 0;
            v4->fields.bonusKindId = bonusKind2Id;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (PartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventGroupMaster___);
            if ( !this )
              goto LABEL_280;
            EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(
                                  (EventGroupMaster_o *)this,
                                  v4->fields.bonusKindId,
                                  0LL);
            this = (PartyServantListViewItem_o *)BasicHelper__IsNullOrEmpty(
                                                   (System_Collections_ICollection_o *)EntitiesByGroupId,
                                                   0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_278;
            if ( !EntitiesByGroupId )
              goto LABEL_280;
            if ( EntitiesByGroupId->fields._size < 2 )
              goto LABEL_278;
            v136 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_EventGroupEntity__bool__TypeInfo);
            v137 = &Method_PartyServantListViewItem__SetSortValue_b__134_1__;
            goto LABEL_277;
          case 3:
            v4->fields.bonusKind = 3;
            v4->fields.bonusKindId = sort->fields.bonusKind2Id;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventCampaignMaster___);
            v122 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
            v121 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
            v123 = (EventCampaignMaster_o *)Master_object;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v154.fields.currentCryptoKey = v122;
            *(_QWORD *)&v154.fields.fakeValue = v121;
            this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                   v154,
                                                   0LL);
            if ( !v123 )
              goto LABEL_280;
            IsEnableServant = EventCampaignMaster__IsEnableServant(v123, (int32_t)this, v4->fields.bonusKindId, 0LL);
            v4->fields.isEventUpVal = IsEnableServant;
            if ( !IsEnableServant )
              goto LABEL_279;
            goto LABEL_7;
          case 4:
          case 5:
            if ( v4->fields.bonusKind == bonusKind2 )
            {
              v99 = sort->fields.bonusKind2Id;
              if ( v4->fields.bonusKindId == v99 )
                goto LABEL_278;
            }
            else
            {
              v99 = sort->fields.bonusKind2Id;
            }
            v4->fields.bonusKind = bonusKind2;
            v4->fields.bonusKindId = v99;
            userServantEntity = v4->fields.userServantEntity;
            v117 = v4->fields.setupInfo;
            this = (PartyServantListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( !this || !userServantEntity )
              goto LABEL_280;
            v94 = this->fields.userServantEntity;
            v95 = userServantEntity;
            v96 = v117;
            v97 = v99;
LABEL_223:
            EventUpVal_42144440 = UserServantEntity__getEventUpVal_42144440(v95, v96, v97, (int64_t)v94, 0LL);
            goto LABEL_259;
          case 7:
            if ( v4->fields.bonusKind == 7 )
            {
              bonusKindId = v4->fields.bonusKindId;
              v114 = sort->fields.bonusKind2Id;
LABEL_228:
              if ( bonusKindId == v114 )
              {
LABEL_278:
                if ( v4->fields.isEventUpVal )
                  goto LABEL_7;
LABEL_279:
                LOBYTE(this) = 0;
                return (char)this;
              }
              goto LABEL_256;
            }
            v114 = sort->fields.bonusKind2Id;
            break;
          default:
            goto LABEL_7;
        }
        goto LABEL_256;
      }
    }
    bonusKind = sort->fields.bonusKind;
    switch ( bonusKind )
    {
      case 0:
        if ( v4->fields.bonusKind )
        {
          v112 = sort->fields.bonusKindId;
        }
        else
        {
          v112 = sort->fields.bonusKindId;
          if ( v4->fields.bonusKindId == v112 )
            goto LABEL_278;
        }
        v4->fields.bonusKind = 0;
        v4->fields.bonusKindId = v112;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (PartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventGroupMaster___);
        if ( !this )
          goto LABEL_280;
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
            goto LABEL_280;
          if ( EntitiesByGroupId->fields._size >= 2 )
          {
            v136 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_EventGroupEntity__bool__TypeInfo);
            v137 = &Method_PartyServantListViewItem__SetSortValue_b__134_0__;
LABEL_277:
            v138 = (System_Func_T__bool__o *)v136;
            System_Func_object__bool____ctor(v136, (Il2CppObject *)v4, *v137, 0LL);
            v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                        v138,
                                        (const MethodInfo_2FEB2DC *)Method_BasicHelper_Any_EventGroupEntity___);
          }
        }
        goto LABEL_278;
      case 3:
        if ( v4->fields.bonusKind == 3 )
        {
          v115 = sort->fields.bonusKindId;
          if ( v4->fields.bonusKindId == v115 )
            goto LABEL_278;
        }
        else
        {
          v115 = sort->fields.bonusKindId;
        }
        v4->fields.bonusKind = 3;
        v4->fields.bonusKindId = v115;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v131 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventCampaignMaster___);
        v133 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
        v132 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
        v134 = (EventCampaignMaster_o *)v131;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v156.fields.currentCryptoKey = v133;
        *(_QWORD *)&v156.fields.fakeValue = v132;
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                               v156,
                                               0LL);
        if ( !v134 )
          goto LABEL_280;
        EventUpVal_42144440 = EventCampaignMaster__IsEnableServant(v134, (int32_t)this, v4->fields.bonusKindId, 0LL);
        goto LABEL_259;
      case 4:
      case 5:
        if ( v4->fields.bonusKind == bonusKind )
          goto LABEL_278;
        v4->fields.bonusKind = bonusKind;
        v91 = v4->fields.setupInfo;
        v4->fields.bonusKindId = sort->fields.bonusKindId;
        if ( !v91 )
          goto LABEL_280;
        v92 = v4->fields.userServantEntity;
        ServantFilterEventId = EventUpValSetupInfo__get_ServantFilterEventId(v91, 0LL);
        this = (PartyServantListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this || !v92 )
          goto LABEL_280;
        v94 = this->fields.userServantEntity;
        v95 = v92;
        v96 = v91;
        v97 = ServantFilterEventId;
        goto LABEL_223;
      case 7:
        if ( v4->fields.bonusKind == 7 )
        {
          bonusKindId = v4->fields.bonusKindId;
          v114 = sort->fields.bonusKindId;
          goto LABEL_228;
        }
        v114 = sort->fields.bonusKindId;
        break;
      default:
        goto LABEL_7;
    }
LABEL_256:
    v4->fields.bonusKind = 7;
    v4->fields.bonusKindId = v114;
    this = (PartyServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_280;
    this = (PartyServantListViewItem_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
    if ( !this )
      goto LABEL_280;
    EventUpVal_42144440 = ServantFilterMaster__IsEnableServant(
                            (ServantFilterMaster_o *)this,
                            v4->fields.svtId,
                            v4->fields.bonusKindId,
                            0LL);
LABEL_259:
    v4->fields.isEventUpVal = EventUpVal_42144440;
    if ( EventUpVal_42144440 )
      goto LABEL_7;
    goto LABEL_279;
  }
LABEL_7:
  if ( !v4->fields.isBase && !v4->fields._IsGrandSameServant_k__BackingField )
  {
    this = (PartyServantListViewItem_o *)v4->fields.servantEntity;
    if ( !this )
      goto LABEL_280;
    if ( ServantEntity__get_IsExpUp((ServantEntity_o *)this, 0LL) )
      goto LABEL_279;
    this = (PartyServantListViewItem_o *)v4->fields.servantEntity;
    if ( !this )
      goto LABEL_280;
    if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)this, 0LL)
      || (((__int64 (__fastcall *)(PartyServantListViewItem_o *, ListViewSort_o *, void *))v4->klass->vtable._5_IsMatchFilter.method)(
            v4,
            sort,
            v4->klass[1]._1.image) & 1) == 0 )
    {
      goto LABEL_279;
    }
  }
  v26 = PartyServantListViewItem_TypeInfo;
  if ( v4->fields.isSwapChoice )
    isChoice = !v4->fields.isChoice;
  else
    isChoice = v4->fields.isChoice;
  if ( !PartyServantListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo);
    v26 = PartyServantListViewItem_TypeInfo;
  }
  static_fields = v26->static_fields;
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
LABEL_18:
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v26 = PartyServantListViewItem_TypeInfo;
          static_fields = PartyServantListViewItem_TypeInfo->static_fields;
        }
        PRIORITY_LOWEST = static_fields->PRIORITY_LOWEST;
        goto LABEL_26;
      }
LABEL_24:
      if ( !v4->fields.isQuestRestriction )
        goto LABEL_27;
      PRIORITY_LOWEST = -1LL;
LABEL_26:
      v4->fields.sortValue0 = PRIORITY_LOWEST;
LABEL_27:
      if ( isChoice && sort->fields.isChoiceSort )
      {
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v26 = PartyServantListViewItem_TypeInfo;
        }
        v4->fields.sortValue0B = v26->static_fields->PRIORITY_TOP;
      }
      this = (PartyServantListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_280;
      if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)this, 0LL) )
        goto LABEL_48;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( !TutorialFlag__Get_39466584(126, 0LL) )
        goto LABEL_48;
      v32 = PartyServantListViewItem_TypeInfo;
      if ( !PartyServantListViewItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo);
        v32 = PartyServantListViewItem_TypeInfo;
      }
      PRIORITY_LOWEST_HEROIN_LEAVE = v32->static_fields->PRIORITY_LOWEST_HEROIN_LEAVE;
      goto LABEL_47;
    }
    if ( questRestrictionInfo->fields.isAllOutBattle && sort->fields.isSmartSort )
    {
      if ( v4->fields._IsAllOutBattle_k__BackingField )
        goto LABEL_18;
      goto LABEL_24;
    }
  }
  if ( isChoice && sort->fields.isChoiceSort )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      static_fields = PartyServantListViewItem_TypeInfo->static_fields;
    }
    PRIORITY_LOWEST_HEROIN_LEAVE = static_fields->PRIORITY_TOP;
  }
  else
  {
    if ( !v4->fields.isQuestRestriction )
      goto LABEL_48;
    PRIORITY_LOWEST_HEROIN_LEAVE = -1LL;
  }
LABEL_47:
  v4->fields.sortValue0 = PRIORITY_LOWEST_HEROIN_LEAVE;
LABEL_48:
  PartyServantListViewItem__InitAfterSecondSort(v4, (const MethodInfo *)sort);
  this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo2;
  if ( !this )
    goto LABEL_280;
  IconLabelInfo__Clear((IconLabelInfo_o *)this, 0LL);
  equipServantEntity = v4->fields.equipServantEntity;
  this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo3;
  if ( equipServantEntity )
  {
    cost = equipServantEntity->fields.cost;
    if ( !this )
      goto LABEL_280;
  }
  else
  {
    cost = 0;
    if ( !this )
      goto LABEL_280;
  }
  IconLabelInfo__Set_39947860((IconLabelInfo_o *)this, 7, v4->fields.cost, 0, cost, 0, 0, 0, 0, 0LL);
  this = (PartyServantListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v36 = v4->fields.userServantEntity;
      if ( !v36 )
        goto LABEL_280;
      v37 = *(_OWORD *)&v36->fields.id.fields.fakeValue;
      *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)&v36->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v149.fields.fakeValue = v37;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v140 = v149;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                                             &v140,
                                             0LL);
      v38 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v38 )
        goto LABEL_280;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_280;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v38->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_205;
    case 2:
      rarityId = v4->fields.rarityId;
      v75 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = rarityId;
      if ( !v75 )
        goto LABEL_280;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_280;
      IconLabelInfo__Set_39947860(
        (IconLabelInfo_o *)this,
        36,
        rarityId,
        v75->fields.exceedCount,
        0,
        0,
        0,
        v75->fields.lv,
        v4->fields.actualRarity,
        0LL);
      goto LABEL_211;
    case 3:
      goto LABEL_142;
    case 4:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_280;
      UserServantEntity__getTreasureDeviceInfo_42151700((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(hp) = tdMaxLv[1];
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = tdMaxLv[1];
      if ( !this )
        goto LABEL_280;
      friendshipMax = tdMaxLv[0];
      v45 = 33;
      goto LABEL_204;
    case 5:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_280;
      this = (PartyServantListViewItem_o *)UserServantEntity__get_HpBoostValue((UserServantEntity_o *)this, 0LL);
      v46 = (int)this;
      if ( !v4->fields._IsGrandSameServant_k__BackingField )
        goto LABEL_171;
      baseItem = v4->fields.baseItem;
      if ( !baseItem )
        goto LABEL_280;
      v48 = baseItem->fields.userServantEntity;
      if ( !v48 )
        goto LABEL_280;
      v49 = *(_OWORD *)&v48->fields.id.fields.fakeValue;
      *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)&v48->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v149.fields.fakeValue = v49;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v148 = v149;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                                             &v148,
                                             0LL);
      v50 = v4->fields.userServantEntity;
      if ( !v50 )
        goto LABEL_280;
      v51 = *(_OWORD *)&v50->fields.id.fields.fakeValue;
      v52 = this;
      *(_OWORD *)&v147.fields.currentCryptoKey = *(_OWORD *)&v50->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v147.fields.fakeValue = v51;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                                             &v147,
                                             0LL);
      if ( v52 != this )
        goto LABEL_83;
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_280;
      this = (PartyServantListViewItem_o *)UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_83:
        v53 = v4->fields.baseItem;
        if ( !v53 )
          goto LABEL_280;
        v54 = v53->fields.userServantEntity;
        if ( !v54 )
          goto LABEL_280;
        v55 = *(_OWORD *)&v54->fields.id.fields.fakeValue;
        *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)&v54->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v149.fields.fakeValue = v55;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v146 = v149;
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                                               &v146,
                                               0LL);
        v56 = v4->fields.userServantEntity;
        if ( !v56 )
          goto LABEL_280;
        v57 = *(_OWORD *)&v56->fields.id.fields.fakeValue;
        *(_OWORD *)&v145.fields.currentCryptoKey = *(_OWORD *)&v56->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v145.fields.fakeValue = v57;
        if ( this != (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                                                     &v145,
                                                     0LL) )
        {
          this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
          if ( !this )
            goto LABEL_280;
          if ( UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0LL) )
          {
            this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
            if ( !this )
              goto LABEL_280;
            this = (PartyServantListViewItem_o *)UserServantEntity__get_GrandInfo((UserServantEntity_o *)this, 0LL);
            if ( !this )
              goto LABEL_280;
            v46 -= UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)this, 0LL);
          }
        }
      }
      else
      {
        v100 = v4->fields.userServantEntity;
        if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
        this = (PartyServantListViewItem_o *)UserServantGrandInfo__Make(v100, 1, 0LL);
        if ( !this )
          goto LABEL_280;
        v46 += UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)this, 0LL);
      }
LABEL_171:
      if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v4->fields.equipServantEntityList, 0LL) )
      {
        equipUserServantEntity = v4->fields.equipUserServantEntity;
        hp = v4->fields.hp;
        if ( equipUserServantEntity )
        {
          atk = equipUserServantEntity->fields.hp;
          this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = atk + (int)hp;
          if ( !this )
            goto LABEL_280;
          v103 = 46;
LABEL_192:
          IconLabelInfo__Set_39947860((IconLabelInfo_o *)this, v103, hp, v46, atk, 0, 0, 0, 0, 0LL);
LABEL_205:
          this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
          if ( this )
          {
            iconLabelInfo2 = v4->fields.iconLabelInfo2;
LABEL_207:
            fatigureTime = this->fields.fatigureTime;
LABEL_208:
            this = (PartyServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
            if ( iconLabelInfo2 )
            {
              v86 = (int)this;
              v87 = iconLabelInfo2;
              v88 = fatigureTime;
              goto LABEL_210;
            }
          }
LABEL_280:
          sub_1BC3264(this, sort);
        }
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = hp;
        if ( !this )
          goto LABEL_280;
        v45 = 3;
        goto LABEL_203;
      }
      this = (PartyServantListViewItem_o *)v4->fields.equipServantEntityList;
      if ( !this )
        goto LABEL_280;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v149,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v104 = 0;
      v150 = *(System_Collections_Generic_List_Enumerator_object__o *)&v149.fields.currentCryptoKey;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v150,
                (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
      {
        if ( v150.fields._current )
        {
          monitor_high = HIDWORD(v150.fields._current[16].monitor);
          v104 += monitor_high;
          v4->fields.sortValue1 = monitor_high + v4->fields.hp;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v150,
        (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_280;
      v106 = v4->fields.hp;
      v107 = 46;
      break;
    case 6:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_280;
      this = (PartyServantListViewItem_o *)UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)this, 0LL);
      v46 = (int)this;
      if ( !v4->fields._IsGrandSameServant_k__BackingField )
        goto LABEL_188;
      v63 = v4->fields.baseItem;
      if ( !v63 )
        goto LABEL_280;
      v64 = v63->fields.userServantEntity;
      if ( !v64 )
        goto LABEL_280;
      v65 = *(_OWORD *)&v64->fields.id.fields.fakeValue;
      *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)&v64->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v149.fields.fakeValue = v65;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v144 = v149;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                                             &v144,
                                             0LL);
      v66 = v4->fields.userServantEntity;
      if ( !v66 )
        goto LABEL_280;
      v67 = *(_OWORD *)&v66->fields.id.fields.fakeValue;
      v68 = this;
      *(_OWORD *)&v143.fields.currentCryptoKey = *(_OWORD *)&v66->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v143.fields.fakeValue = v67;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                                             &v143,
                                             0LL);
      if ( v68 != this )
        goto LABEL_110;
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_280;
      this = (PartyServantListViewItem_o *)UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_110:
        v69 = v4->fields.baseItem;
        if ( !v69 )
          goto LABEL_280;
        v70 = v69->fields.userServantEntity;
        if ( !v70 )
          goto LABEL_280;
        v71 = *(_OWORD *)&v70->fields.id.fields.fakeValue;
        *(_OWORD *)&v149.fields.currentCryptoKey = *(_OWORD *)&v70->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v149.fields.fakeValue = v71;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v142 = v149;
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                                               &v142,
                                               0LL);
        v72 = v4->fields.userServantEntity;
        if ( !v72 )
          goto LABEL_280;
        v73 = *(_OWORD *)&v72->fields.id.fields.fakeValue;
        *(_OWORD *)&v141.fields.currentCryptoKey = *(_OWORD *)&v72->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v141.fields.fakeValue = v73;
        if ( this != (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(
                                                     &v141,
                                                     0LL) )
        {
          this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
          if ( !this )
            goto LABEL_280;
          if ( UserServantEntity__IsGrandServant((UserServantEntity_o *)this, 0LL) )
          {
            this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
            if ( !this )
              goto LABEL_280;
            this = (PartyServantListViewItem_o *)UserServantEntity__get_GrandInfo((UserServantEntity_o *)this, 0LL);
            if ( !this )
              goto LABEL_280;
            v46 -= UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0LL);
          }
        }
      }
      else
      {
        v108 = v4->fields.userServantEntity;
        if ( !UserServantGrandInfo_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserServantGrandInfo_TypeInfo);
        this = (PartyServantListViewItem_o *)UserServantGrandInfo__Make(v108, 1, 0LL);
        if ( !this )
          goto LABEL_280;
        v46 += UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)this, 0LL);
      }
LABEL_188:
      if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v4->fields.equipServantEntityList, 0LL) )
      {
        v109 = v4->fields.equipUserServantEntity;
        hp = v4->fields.atk;
        if ( v109 )
        {
          atk = v109->fields.atk;
          this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = atk + (int)hp;
          if ( !this )
            goto LABEL_280;
          v103 = 47;
          goto LABEL_192;
        }
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = hp;
        if ( !this )
          goto LABEL_280;
        v45 = 5;
LABEL_203:
        friendshipMax = v46;
LABEL_204:
        IconLabelInfo__Set_39947860((IconLabelInfo_o *)this, v45, hp, friendshipMax, 0, 0, 0, 0, 0, 0LL);
        goto LABEL_205;
      }
      this = (PartyServantListViewItem_o *)v4->fields.equipServantEntityList;
      if ( !this )
        goto LABEL_280;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v149,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v104 = 0;
      v150 = *(System_Collections_Generic_List_Enumerator_object__o *)&v149.fields.currentCryptoKey;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v150,
                (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
      {
        if ( v150.fields._current )
        {
          monitor = (int)v150.fields._current[16].monitor;
          v104 += monitor;
          v4->fields.sortValue1 = monitor + v4->fields.atk;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v150,
        (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_280;
      v106 = v4->fields.atk;
      v107 = 47;
      break;
    case 7:
      v76 = v4->fields.cost;
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      goto LABEL_131;
    case 8:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      v76 = -v4->fields.priority;
LABEL_131:
      v4->fields.sortValue1 = v76;
      if ( !this )
        goto LABEL_280;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      goto LABEL_207;
    case 0xA:
      v81 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
      v82 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v152.fields.currentCryptoKey = v81;
      *(_QWORD *)&v152.fields.fakeValue = v82;
      v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v152, 0LL);
      iconLabelInfo1 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v85 = v83;
      friendship = v4->fields.friendship;
      v4->fields.sortValue1 = v85;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                             friendship,
                                             0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_280;
      friendshipMax = v4->fields.friendshipMax;
      LODWORD(hp) = (_DWORD)this;
      v45 = 32;
      this = iconLabelInfo1;
      goto LABEL_204;
    case 0xE:
      this = (PartyServantListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_244;
      v78 = sort->fields.manager;
      if ( v78
        && (v79 = LOBYTE(PartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v78->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v79) )
      {
        if ( (PartyServantListViewManager_c *)v78->klass->_2.typeHierarchy[v79 - 1] == PartyServantListViewManager_TypeInfo )
          v80 = sort->fields.manager;
        else
          v80 = 0LL;
      }
      else
      {
        v80 = 0LL;
      }
      v126 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v125 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v155.fields.currentCryptoKey = v126;
      *(_QWORD *)&v155.fields.fakeValue = v125;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                             v155,
                                             0LL);
      if ( !v80 )
        goto LABEL_280;
      this = (PartyServantListViewItem_o *)PartyServantListViewManager__GetAmountSortValue(
                                             (PartyServantListViewManager_o *)v80,
                                             (int32_t)this,
                                             v127);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_244:
      servantEntity = v4->fields.servantEntity;
      if ( !servantEntity )
        goto LABEL_280;
      collectionNo = servantEntity->fields.collectionNo;
      v130 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarityId << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v130 )
        goto LABEL_280;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      fatigureTime = v130->fields.lv;
      this = (PartyServantListViewItem_o *)v130;
      goto LABEL_208;
    case 0xF:
      hp = v4->fields.hpReinforceValue;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_280;
      friendshipMax = v4->fields.nowMaxHpReinforceValue;
      v45 = 44;
      goto LABEL_204;
    case 0x10:
      hp = v4->fields.atkReinforceValue;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_280;
      friendshipMax = v4->fields.nowMaxAtkReinforceValue;
      v45 = 45;
      goto LABEL_204;
    case 0x19:
      v58 = v4->fields.questRestrictionInfo;
      if ( !v58 || !v58->fields.isFatigure )
        goto LABEL_141;
      SvtPoint_k__BackingField = v4->fields.fatigureTime;
      goto LABEL_97;
    case 0x1C:
      if ( v4->fields._IsDispSvtPoint_k__BackingField )
      {
        SvtPoint_k__BackingField = v4->fields._SvtPoint_k__BackingField;
LABEL_97:
        this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
        v4->fields.sortValue1 = SvtPoint_k__BackingField;
        if ( !this )
          goto LABEL_280;
        fatigureTime_low = SLODWORD(this->fields.fatigureTime);
        priority = v4->fields.priority;
        v61 = v4->fields.servantEntity;
        v4->fields.sortValue1B = fatigureTime_low;
        v4->fields.sortValue2 = priority;
        if ( !v61 )
          goto LABEL_280;
        v62 = v4->fields.iconLabelInfo1;
        v4->fields.sortValue2B = fatigureTime_low | ((unsigned __int64)(unsigned int)v4->fields.rarityId << 48) | ((__int64)v61->fields.collectionNo << 16);
      }
      else
      {
LABEL_141:
        sort->fields.sortKind = 3;
LABEL_142:
        this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
        if ( !this )
          goto LABEL_280;
        fatigureTime_low = SLODWORD(this->fields.fatigureTime);
        v62 = v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = fatigureTime_low;
      }
      this = (PartyServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !v62 )
        goto LABEL_280;
      v86 = (int)this;
      v87 = v62;
      v88 = fatigureTime_low;
LABEL_210:
      IconLabelInfo__Set_39947860(v87, 2, v88, v86, 0, 0, 0, 0, 0, 0LL);
LABEL_211:
      LOBYTE(this) = 1;
      return (char)this;
    default:
      return (char)this;
  }
  IconLabelInfo__Set_39947860((IconLabelInfo_o *)this, v107, v106, v46, v104, 0, 0, 0, 0, 0LL);
  goto LABEL_205;
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


bool __fastcall PartyServantListViewItem___SetSortValue_b__134_0(
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

  if ( (byte_4AFDD1F & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantFilterMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    byte_4AFDD1F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v11;
  *(_QWORD *)&v19.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v19, 0LL);
  if ( !entity || !v12 )
    goto LABEL_18;
  if ( EventCampaignMaster__IsEnableServant(v12, (int32_t)Instance, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !userServantEntity )
LABEL_18:
    sub_1BC3264(Instance, v14);
  return UserServantEntity__getEventUpVal_42144440(
           userServantEntity,
           setupInfo,
           eventId,
           (int64_t)Instance[7].klass,
           0LL);
}


bool __fastcall PartyServantListViewItem___SetSortValue_b__134_1(
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

  if ( (byte_4AFDD20 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantFilterMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    byte_4AFDD20 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v11;
  *(_QWORD *)&v19.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v19, 0LL);
  if ( !entity || !v12 )
    goto LABEL_18;
  if ( EventCampaignMaster__IsEnableServant(v12, (int32_t)Instance, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !userServantEntity )
LABEL_18:
    sub_1BC3264(Instance, v14);
  return UserServantEntity__getEventUpVal_42144440(
           userServantEntity,
           setupInfo,
           eventId,
           (int64_t)Instance[7].klass,
           0LL);
}


int32_t __fastcall PartyServantListViewItem__get_ActualRarity(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.actualRarity;
}


int32_t __fastcall PartyServantListViewItem__get_Atk(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.atk;
}


int32_t __fastcall PartyServantListViewItem__get_ClassId(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.classId;
}


int32_t __fastcall PartyServantListViewItem__get_Cost(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.cost;
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


int32_t __fastcall PartyServantListViewItem__get_Hp(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.hp;
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


bool __fastcall PartyServantListViewItem__get_IsConvertOverwriteImage(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isConvertOverwriteImage;
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


bool __fastcall PartyServantListViewItem__get_IsGrandSameServant(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsGrandSameServant_k__BackingField;
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


bool __fastcall PartyServantListViewItem__get_IsOrganizedWave(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._OrganizedWave_k__BackingField > 0;
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

  if ( (byte_4AFDD1B & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1BC3008(&StringLiteral_18886/*"error"*/, v3);
    byte_4AFDD1B = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18886/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v7 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v10, 0LL);
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

  if ( (byte_4AFDD1A & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4AFDD1A = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v6, 0LL);
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
    sub_1BC3264(this, method);
  return baseItem->fields._WaveEnemyClassIds_k__BackingField;
}


void __fastcall PartyServantListViewItem__set_FriendshipUpValTuple(
        PartyServantListViewItem_o *this,
        System_ValueTuple_int__int__EventCombineEntity_CalcType__array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._FriendshipUpValTuple_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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


void __fastcall PartyServantListViewItem__set_IsGrandSameServant(
        PartyServantListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsGrandSameServant_k__BackingField = value;
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