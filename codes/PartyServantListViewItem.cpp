void PartyServantListViewItem___cctor(const MethodInfo *method)
{
  struct PartyServantListViewItem_StaticFields *static_fields; // x8

  if ( (byte_4C22F44 & 1) == 0 )
  {
    sub_1C2D490(&PartyServantListViewItem_TypeInfo);
    byte_4C22F44 = 1;
  }
  static_fields = PartyServantListViewItem_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->PRIORITY_NORMAL = xmmword_C09740;
  *(_OWORD *)&static_fields->PRIORITY_LOWEST = xmmword_C09EB0;
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
  const MethodInfo *v20; // x3
  IconLabelInfo_o *v21; // x24
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  IconLabelInfo_o *v24; // x24
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int64_t Instance; // x0
  unsigned __int64 NotSamePartyKey; // x1
  struct PartyOrganizationListViewItem_o *Member; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *MasterData_object; // x0
  __int64 v40; // x22
  __int64 v41; // x24
  PartyListViewItem_o *v42; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x21
  Il2CppObject *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  UserServantEntity_o *v47; // x8
  __int128 v48; // q1
  UserServantCollectionMaster_o *v49; // x21
  int64_t v50; // x22
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  System_Collections_Generic_List_object__o *v57; // x22
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct UserServantEntity_o *v60; // x28
  int32_t i; // w21
  BalanceConfig_c *v62; // x0
  PartyOrganizationListViewItem_o *v63; // x22
  UserServantEntity_o *v64; // x8
  __int128 v65; // q0
  struct UserServantEntity_o *v66; // x8
  __int128 v67; // q0
  int64_t v68; // x26
  __int128 v69; // q0
  const MethodInfo_38B0CA0 *v70; // x3
  struct UserServantEntity_o *v71; // x23
  int64_t v72; // x26
  int64_t v73; // x24
  struct UserServantEntity_o *v74; // x8
  __int128 v75; // q0
  __int128 v76; // q1
  const MethodInfo_38AFA90 *v77; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v78; // x8
  __int64 v79; // x24
  __int64 v80; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  int v82; // w24
  Il2CppObject *Master_object; // x0
  __int64 v84; // x24
  __int64 v85; // x26
  UserServantGrandMaster_o *v86; // x22
  UserServantGrandEntity_o *EntityFromSvtId; // x0
  System_Int64_array *EquipUserServantIdList; // x0
  const MethodInfo *v89; // x2
  int v90; // w24
  struct System_Int32_array *items; // x8
  _QWORD *v92; // x9
  __int64 size; // x10
  struct ServantEntity_o *v94; // x8
  __int64 v95; // x22
  __int64 v96; // x24
  int32_t v97; // w22
  int32_t v98; // w26
  int32_t IncludedRestrictionIds; // w0
  struct PartyOrganizationListViewItem_o *v100; // x8
  struct ServantEntity_o *v101; // x8
  UserServantGrandMaster_o *v102; // x21
  __int64 v103; // x22
  __int64 v104; // x24
  __int64 v105; // x21
  __int64 v106; // x24
  const MethodInfo_38B07C4 *v107; // x4
  struct UserServantEntity_o *v108; // x8
  int v109; // w23
  __int64 v110; // x21
  __int64 v111; // x24
  int32_t v112; // w1
  System_Nullable_int__o v113; // x0
  System_Int64_array *EquipList; // x0
  const MethodInfo *v115; // x2
  struct ServantEntity_o *v116; // x8
  UserServantGrandMaster_o *v117; // x21
  __int64 v118; // x22
  __int64 v119; // x24
  System_Collections_Generic_List_int__o *v120; // x21
  __int64 v121; // x2
  PartyListViewItem_array *v122; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v124; // x25
  int32_t v125; // w23
  PartyListViewItem_o *v126; // x22
  int32_t v127; // w28
  PartyOrganizationListViewItem_o *v128; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  struct System_Int32_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  UserServantEntity_o *v133; // x24
  struct UserServantEntity_o *v134; // x8
  __int128 v135; // q0
  System_Int64_array *v136; // x0
  const MethodInfo *v137; // x2
  __int64 v138; // x22
  __int64 v139; // x24
  const MethodInfo *v140; // x1
  const MethodInfo *v141; // x1
  UserServantEntity_o *v142; // x8
  bool IsChoice; // w0
  PartyListViewItem_o *v144; // x23
  UserServantEntity_o *v145; // x8
  __int128 v146; // q0
  __int64 v147; // x21
  bool v148; // zf
  bool v149; // w8
  UserServantEntity_o *v150; // x8
  const MethodInfo *v151; // x1
  UserServantEntity_o *v152; // x8
  UserServantEntity_o *v153; // x8
  bool IsUniqueIndividualityRestriction_42940612; // w0
  const MethodInfo *v155; // x1
  struct QuestRestrictionInfo_o *v156; // x8
  UserEventServantFatigueMaster_o *v157; // x21
  int32_t eventId; // w22
  __int64 v159; // x24
  __int64 v160; // x26
  int64_t v161; // x21
  bool AllOutBattleAlreadyUsed; // w0
  struct QuestRestrictionInfo_o *v163; // x8
  Il2CppObject *v164; // x21
  UserServantEntity_o *v165; // x8
  UserEventDataLostEntity_o *v166; // x21
  __int64 v167; // x22
  __int64 v168; // x24
  UserServantEntity_o *v169; // x8
  char v170; // w21
  UserEventDataLostEntity_o *v171; // x22
  __int64 v172; // x24
  __int64 v173; // x26
  int32_t v174; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr20_16
  UserServantEntity_o *v176; // x8
  int64_t v177; // x22
  __int64 v178; // x24
  __int64 v179; // x26
  int32_t v180; // w26
  int32_t Rarity; // w27
  const MethodInfo *v182; // x7
  System_String_o **p_skillName; // x1
  int32_t *p_actMaxRarity; // x2
  int32_t partyIndex; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v186; // kr30_16
  UserServantEntity_o *v187; // x8
  int64_t v188; // x22
  __int64 v189; // x24
  __int64 v190; // x26
  struct QuestRestrictionInfo_o *v191; // x8
  EventServantPointRankMaster_o *v192; // x22
  UserServantEntity_o *v193; // x8
  __int128 v194; // q0
  UserEventServantPointMaster_o *v195; // x24
  int64_t v196; // x26
  int32_t *p_SvtPoint_k__BackingField; // x23
  int32_t v198; // w24
  int32_t v199; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  System_Collections_Generic_List_T__o *v201; // x21
  Il2CppObject *v202; // x22
  System_Collections_Generic_List_object__o *v203; // x25
  Il2CppObject *v204; // x22
  _BOOL8 v205; // x0
  __int64 v206; // x1
  EventCampaignEntity_o *current; // x25
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x26
  __int64 v209; // x27
  __int64 v210; // x28
  int32_t v211; // w1
  int32_t v212; // w26
  int32_t FriendshipBonusValue; // w0
  int32_t calcType; // w3
  int32_t v215; // w2
  const MethodInfo_3AEE154 *v216; // x5
  __int64 v217; // x0
  __int64 v218; // x1
  System_ValueTuple_int__int__Int32Enum__o v219; // x1 OVERLAPPED
  struct System_Object_array *v220; // x8
  _QWORD *v221; // x9
  __int64 v222; // x10
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v223; // x0
  int32_t v224; // w2
  const MethodInfo *v225; // x3
  BalanceConfig_c *v226; // x8
  int v227; // w21
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_Collections_Generic_List_int__o *v229; // [xsp+10h] [xbp-320h]
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+20h] [xbp-310h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+30h] [xbp-300h]
  bool IsNotSameParty; // [xsp+3Ch] [xbp-2F4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // [xsp+50h] [xbp-2E0h]
  int64_t v235; // [xsp+68h] [xbp-2C8h]
  int32_t v236; // [xsp+74h] [xbp-2BCh]
  struct PartyOrganizationListViewItem_o **p_baseItem; // [xsp+78h] [xbp-2B8h]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+90h] [xbp-2A0h]
  UserServantEntity_o **p_userServantEntity; // [xsp+98h] [xbp-298h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v241; // [xsp+A0h] [xbp-290h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v242; // [xsp+C0h] [xbp-270h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v243; // [xsp+E0h] [xbp-250h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v244; // [xsp+100h] [xbp-230h] BYREF
  __int128 v245; // [xsp+120h] [xbp-210h]
  __int128 v246; // [xsp+130h] [xbp-200h]
  _BYTE item[40]; // [xsp+140h] [xbp-1F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v248; // [xsp+170h] [xbp-1C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v249; // [xsp+190h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v250; // [xsp+1B0h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v251; // [xsp+1D0h] [xbp-160h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v252; // [xsp+1F0h] [xbp-140h] BYREF
  UserEventServantPointEntity_o *v253; // [xsp+210h] [xbp-120h] BYREF
  int32_t actMaxRarity; // [xsp+21Ch] [xbp-114h] BYREF
  System_String_o *skillName; // [xsp+220h] [xbp-110h] BYREF
  int v256; // [xsp+22Ch] [xbp-104h] BYREF
  __int64 v257; // [xsp+230h] [xbp-100h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+238h] [xbp-F8h] BYREF
  int64_t recoverAt; // [xsp+240h] [xbp-F0h] BYREF
  int32_t friendshipRank; // [xsp+24Ch] [xbp-E4h] BYREF
  _OWORD v261[2]; // [xsp+250h] [xbp-E0h] BYREF
  __int128 v262; // [xsp+270h] [xbp-C0h]
  _OWORD v263[2]; // [xsp+280h] [xbp-B0h] BYREF
  _BYTE v264[39]; // [xsp+2A0h] [xbp-90h] BYREF
  __int64 v265; // [xsp+2C8h] [xbp-68h]
  System_ValueTuple_int__int__Int32Enum__o v266; // 0:x0.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v267; // 0:x0.16
  System_Nullable_T__o v268; // 0:x0.16
  System_Nullable_long__o v269; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v270; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v271; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v272; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v273; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v274; // 0:x0.16
  System_Nullable_T__o v275; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v276; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v277; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v278; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v279; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v280; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v281; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v282; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v283; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v284; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v285; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v286; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v287; // 0:x2.16

  v265 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_4C22F34 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CommonRestrictionMaster_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C2D490(&IconLabelInfo_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_ObscuredInt__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_long___ctor__);
    sub_1C2D490(&Method_System_Nullable_int___ctor__);
    sub_1C2D490(&Method_System_Nullable_ObscuredInt___ctor__);
    sub_1C2D490(&Method_System_Nullable_ObscuredLong___ctor__);
    sub_1C2D490(&Method_System_Nullable_ObscuredLong__get_HasValue__);
    sub_1C2D490(&Method_System_Nullable_ObscuredInt__get_HasValue__);
    sub_1C2D490(&Method_System_Nullable_long__get_HasValue__);
    sub_1C2D490(&Method_System_Nullable_int__get_HasValue__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__);
    byte_4C22F34 = 1;
  }
  friendshipRank = 0;
  recoverAt = 0;
  entity = 0;
  v257 = 0;
  v256 = 0;
  skillName = 0;
  actMaxRarity = 0;
  v253 = 0;
  memset(&v252, 0, sizeof(v252));
  memset(v264, 0, sizeof(v264));
  v262 = 0u;
  memset(v263, 0, 23);
  v18 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v18, 0);
  this->fields.iconLabelInfo1 = v18;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v18, v19, v20);
  v21 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v21, 0);
  this->fields.iconLabelInfo2 = v21;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v21, v22, v23);
  v24 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0);
  this->fields.iconLabelInfo3 = v24;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconLabelInfo3, (int32_t)v24, v25, v26);
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_294;
  Member = PartyListViewItem__GetMember(partyItem, num, 0);
  this->fields.baseItem = Member;
  p_baseItem = &this->fields.baseItem;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseItem, (int32_t)Member, v30, v31);
  baseItem = this->fields.baseItem;
  this->fields._PartyListViewItemMenuKind_k__BackingField = partyItem->fields.menuKind;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_294;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0;
  this->fields.userServantEntity = userServantEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v32, v33);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v35, v36);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v37, v38);
  p_userServantEntity = &this->fields.userServantEntity;
  if ( !this->fields.userServantEntity )
    goto LABEL_294;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_294;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  v41 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v40 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v42 = partyItem;
  v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v267.fields.currentCryptoKey = v41;
  *(_QWORD *)&v267.fields.fakeValue = v40;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v267, 0);
  if ( !v43 )
    goto LABEL_294;
  v44 = DataMasterBase_object__object__int___GetEntity(
          v43,
          Instance,
          (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v44;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)v44, v45, v46);
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  this->fields._IsGrandSameServant_k__BackingField = isGrandSameServant;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_294;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v47 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_294;
  v48 = *(_OWORD *)&v47->fields.userId.fields.fakeValue;
  v49 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)item = *(_OWORD *)&v47->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&item[16] = v48;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v251 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v251, 0);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(this->fields.svtId, 0);
  if ( !v49 )
    goto LABEL_294;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v49, v50, Instance, 0);
  if ( !*p_servantEntity )
    goto LABEL_294;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !Instance )
    goto LABEL_294;
  v236 = num;
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipUserServantEntity, 0, v51, v52);
  this->fields.equipServantEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipServantEntity, 0, v53, v54);
  this->fields.equipIdList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v55, v56);
  v57 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v57,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v57;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v57, v58, v59);
  Instance = (int64_t)this->fields.servantEntity;
  if ( !Instance )
    goto LABEL_294;
  IsNotSameParty = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0);
  v229 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v229,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  v235 = 0;
  v60 = 0;
  for ( i = 0; ; ++i )
  {
    v62 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v62 = BalanceConfig_TypeInfo;
    }
    if ( i >= v62->static_fields->DeckMemberMax )
      goto LABEL_120;
    Instance = (int64_t)PartyListViewItem__GetMember(v42, i, 0);
    if ( !Instance )
      goto LABEL_294;
    v63 = (PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 120) )
      break;
    if ( *p_baseItem && (*p_baseItem)->fields.isRestrictionGrandServant )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantGrandMaster___);
      v84 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v85 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v86 = (UserServantGrandMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v271.fields.currentCryptoKey = v84;
      *(_QWORD *)&v271.fields.fakeValue = v85;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v271, 0);
      if ( !v86 )
        goto LABEL_294;
      EntityFromSvtId = UserServantGrandMaster__GetEntityFromSvtId(v86, Instance, 0);
      if ( EntityFromSvtId )
      {
        EquipUserServantIdList = UserServantGrandEntity__GetEquipUserServantIdList(EntityFromSvtId, 0);
        PartyServantListViewItem__SetEquipStatus(this, EquipUserServantIdList, v89);
      }
    }
LABEL_85:
    ;
  }
  v64 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_294;
  v65 = *(_OWORD *)&v64->fields.id.fields.fakeValue;
  *(_OWORD *)item = *(_OWORD *)&v64->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&item[16] = v65;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v250 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v250, 0);
  v66 = v63->fields.userServantEntity;
  if ( !v66 )
    goto LABEL_294;
  v67 = *(_OWORD *)&v66->fields.id.fields.fakeValue;
  v68 = Instance;
  *(_OWORD *)&v249.fields.currentCryptoKey = *(_OWORD *)&v66->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v249.fields.fakeValue = v67;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v249, 0);
  if ( v68 != Instance )
  {
    if ( !isGrandSameServant )
    {
LABEL_48:
      if ( v236 != i )
      {
        v78 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_294;
        v79 = *(_QWORD *)&v78[2].fields.currentCryptoKey;
        v80 = *(_QWORD *)&v78[2].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v270.fields.currentCryptoKey = v79;
        *(_QWORD *)&v270.fields.fakeValue = v80;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v270, 0);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v63->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_294;
        v82 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(servantEntity[2], 0);
        if ( v82 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else
        {
          if ( !IsNotSameParty )
            goto LABEL_75;
          Instance = (int64_t)v63->fields.servantEntity;
          if ( !Instance )
            goto LABEL_294;
          Instance = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0);
          if ( (Instance & 1) == 0 )
            goto LABEL_75;
          Instance = (int64_t)*p_servantEntity;
          if ( !*p_servantEntity )
            goto LABEL_294;
          Instance = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0);
          if ( !v63->fields.servantEntity )
            goto LABEL_294;
          v90 = Instance;
          Instance = ServantEntity__GetNotSamePartyKey(v63->fields.servantEntity, 0);
          if ( v90 == (_DWORD)Instance )
          {
            this->fields.isNotSameParty = 1;
            Instance = (int64_t)v63->fields.servantEntity;
            if ( !Instance )
              goto LABEL_294;
            NotSamePartyKey = (unsigned int)ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0);
            Instance = (int64_t)v229;
            if ( !v229 )
              goto LABEL_294;
            items = v229->fields._items;
            v92 = Method_System_Collections_Generic_List_int__Add__;
            ++v229->fields._version;
            if ( !items )
              goto LABEL_294;
            size = v229->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v229,
                NotSamePartyKey,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
            }
            else
            {
              v229->fields._size = size + 1;
              items->m_Items[size] = NotSamePartyKey;
            }
          }
          else
          {
LABEL_75:
            if ( this->fields.commonRestrictionId == -1 )
            {
              v94 = v63->fields.servantEntity;
              if ( !v94 )
                goto LABEL_294;
              v96 = *(_QWORD *)&v94->fields.baseSvtId.fields.currentCryptoKey;
              v95 = *(_QWORD *)&v94->fields.baseSvtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v272.fields.currentCryptoKey = v96;
              *(_QWORD *)&v272.fields.fakeValue = v95;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v272, 0);
              if ( !*p_servantEntity )
                goto LABEL_294;
              v97 = Instance;
              v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_servantEntity)[2], 0);
              if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
              IncludedRestrictionIds = CommonRestrictionMaster__GetIncludedRestrictionIds(v97, v98, 0);
              if ( (IncludedRestrictionIds & 0x80000000) == 0 )
                this->fields.commonRestrictionId = IncludedRestrictionIds;
            }
          }
        }
      }
      goto LABEL_85;
    }
    if ( !userServantEntity )
      goto LABEL_294;
    v69 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)item = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&item[16] = v69;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v248 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v248, 0);
    if ( !*p_baseItem )
      goto LABEL_294;
    v71 = (*p_baseItem)->fields.userServantEntity;
    v72 = Instance;
    if ( v71 )
      v73 = Instance;
    else
      v73 = v235;
    if ( v71 )
      v74 = (*p_baseItem)->fields.userServantEntity;
    else
      v74 = v60;
    if ( v71 )
    {
      if ( !v74 )
        goto LABEL_294;
      v75 = *(_OWORD *)&v74->fields.id.fields.currentCryptoKey;
      v76 = *(_OWORD *)&v74->fields.id.fields.fakeValue;
      memset(item, 0, sizeof(item));
      *(_QWORD *)&v268.fields.hasValue = item;
      v268.fields.value = (Il2CppObject *)v261;
      v245 = v75;
      v246 = v76;
      v261[0] = v75;
      v261[1] = v76;
      System_Nullable_ObscuredLong____ctor(
        v268,
        (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)Method_System_Nullable_ObscuredLong___ctor__,
        v70);
      *(_QWORD *)((char *)v263 + 15) = *(_QWORD *)&item[32];
      v262 = *(_OWORD *)&item[1];
      v263[0] = *(_OWORD *)&item[17];
      *(_QWORD *)&v264[31] = *(_QWORD *)((char *)v263 + 15);
      *(_OWORD *)v264 = *(_OWORD *)&item[1];
      *(_OWORD *)&v264[16] = *(_OWORD *)&item[17];
      if ( !item[0] )
        goto LABEL_98;
      *(_OWORD *)item = *(_OWORD *)&v264[7];
      *(_OWORD *)&item[16] = *(_OWORD *)&v264[23];
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v244 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
      v269.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v244, 0);
      *(_QWORD *)&v269.fields.hasValue = v261;
      v261[0] = 0u;
      System_Nullable_long____ctor(v269, Method_System_Nullable_long___ctor__, v77);
      if ( !LOBYTE(v261[0]) || v73 != *((_QWORD *)&v261[0] + 1) )
        goto LABEL_98;
      v60 = v71;
      v42 = partyItem;
      v235 = v72;
      goto LABEL_48;
    }
    v262 = 0u;
    memset(v263, 0, 23);
    memset(v264, 0, sizeof(v264));
LABEL_98:
    this->fields.isBase = 0;
    this->fields.isSame = 0;
    v106 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v105 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v274.fields.currentCryptoKey = v106;
    *(_QWORD *)&v274.fields.fakeValue = v105;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v274, 0);
    if ( !*p_baseItem )
      goto LABEL_294;
    v108 = (*p_baseItem)->fields.userServantEntity;
    if ( v108 )
      v109 = Instance;
    else
      v109 = 0;
    if ( v108 )
    {
      v275.fields.value = *(Il2CppObject **)&v108->fields.svtId.fields.currentCryptoKey;
      *(_QWORD *)&v287.fields.currentCryptoKey = *(_QWORD *)&v108->fields.svtId.fields.fakeValue;
      *(_QWORD *)&v275.fields.hasValue = item;
      memset(item, 0, 20);
      *(_QWORD *)&v287.fields.fakeValue = Method_System_Nullable_ObscuredInt___ctor__;
      System_Nullable_ObscuredInt____ctor(v275, v287, v107);
      if ( item[0] )
      {
        v110 = *(_QWORD *)&item[4];
        v111 = *(_QWORD *)&item[12];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v276.fields.currentCryptoKey = v110;
        *(_QWORD *)&v276.fields.fakeValue = v111;
        v112 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v276, 0);
        v113 = (System_Nullable_int__o)item;
        *(_QWORD *)item = 0;
        System_Nullable_int____ctor(v113, v112, (const MethodInfo_38AF304 *)Method_System_Nullable_int___ctor__);
        if ( item[0] )
        {
          if ( v109 == *(_DWORD *)&item[4] )
            goto LABEL_110;
        }
      }
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    v116 = v63->fields.servantEntity;
    if ( !v116 )
      goto LABEL_294;
    v117 = (UserServantGrandMaster_o *)Instance;
    v119 = *(_QWORD *)&v116->fields.baseSvtId.fields.currentCryptoKey;
    v118 = *(_QWORD *)&v116->fields.baseSvtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v277.fields.currentCryptoKey = v119;
    *(_QWORD *)&v277.fields.fakeValue = v118;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v277, 0);
    if ( !v117 )
      goto LABEL_294;
    Instance = (int64_t)UserServantGrandMaster__GetEntityFromSvtId(v117, Instance, 0);
    if ( !Instance )
      goto LABEL_294;
    goto LABEL_118;
  }
  v100 = this->fields.baseItem;
  this->fields.isSame = 0;
  this->fields.isBase = v236 == i && isEnableRemove;
  this->fields.partyIndex = i;
  if ( !v100 || !v100->fields.isRestrictionGrandServant || v236 == i )
  {
LABEL_110:
    EquipList = PartyOrganizationListViewItem__GetEquipList(v63, 0);
LABEL_119:
    PartyServantListViewItem__SetEquipStatus(this, EquipList, v115);
    goto LABEL_120;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  v101 = v63->fields.servantEntity;
  if ( !v101 )
    goto LABEL_294;
  v102 = (UserServantGrandMaster_o *)Instance;
  v104 = *(_QWORD *)&v101->fields.baseSvtId.fields.currentCryptoKey;
  v103 = *(_QWORD *)&v101->fields.baseSvtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v273.fields.currentCryptoKey = v104;
  *(_QWORD *)&v273.fields.fakeValue = v103;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v273, 0);
  if ( !v102 )
    goto LABEL_294;
  Instance = (int64_t)UserServantGrandMaster__GetEntityFromSvtId(v102, Instance, 0);
  if ( Instance )
  {
LABEL_118:
    EquipList = UserServantGrandEntity__GetEquipUserServantIdList((UserServantGrandEntity_o *)Instance, 0);
    goto LABEL_119;
  }
LABEL_120:
  if ( this->fields._PartyListViewItemMenuKind_k__BackingField != 9 )
  {
    this->fields._OrganizedWave_k__BackingField = 0;
    goto LABEL_159;
  }
  v120 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v120,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  v122 = baseDeckItemList;
  if ( !baseDeckItemList )
    goto LABEL_294;
  max_length = baseDeckItemList->max_length;
  this->fields._MaxWave_k__BackingField = max_length;
  if ( (int)max_length < 1 )
    goto LABEL_152;
  v124 = 0;
  v125 = 1;
  while ( 2 )
  {
    if ( v124 >= (unsigned int)max_length )
      sub_1C2D6F4(Instance, NotSamePartyKey, v121);
    v126 = v122->m_Items[v124];
    v127 = 0;
    while ( 2 )
    {
      Instance = (int64_t)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (int64_t)BalanceConfig_TypeInfo;
      }
      if ( v127 < *(_DWORD *)(*(_QWORD *)(Instance + 184) + 176LL) )
      {
        if ( !v126 )
          goto LABEL_294;
        Instance = (int64_t)PartyListViewItem__GetMember(v126, v127, 0);
        if ( !Instance )
          goto LABEL_294;
        v128 = (PartyOrganizationListViewItem_o *)Instance;
        if ( !*(_QWORD *)(Instance + 120) )
          goto LABEL_146;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(SvtId, 0);
        if ( !v120 )
          goto LABEL_294;
        v130 = v120->fields._items;
        v131 = Method_System_Collections_Generic_List_int__Add__;
        ++v120->fields._version;
        if ( !v130 )
          goto LABEL_294;
        v132 = v120->fields._size;
        NotSamePartyKey = (unsigned int)Instance;
        if ( (unsigned int)v132 >= LODWORD(v130->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v120,
            Instance,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
          if ( !v125 )
          {
LABEL_146:
            ++v127;
            continue;
          }
        }
        else
        {
          v120->fields._size = v132 + 1;
          v130->m_Items[v132] = Instance;
          if ( !v125 )
            goto LABEL_146;
        }
        v133 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_294;
        v134 = v128->fields.userServantEntity;
        if ( !v134 )
          goto LABEL_294;
        v135 = *(_OWORD *)&v134->fields.id.fields.fakeValue;
        *(_OWORD *)item = *(_OWORD *)&v134->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&item[16] = v135;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v243 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_48831940(&v133->fields.id, &v243, 0) )
        {
          v136 = PartyOrganizationListViewItem__GetEquipList(v128, 0);
          PartyServantListViewItem__SetEquipStatus(this, v136, v137);
          this->fields._OrganizedWave_k__BackingField = v125;
          v125 = 0;
          this->fields._IsClearedWave_k__BackingField = v126->fields._IsClearedWave_k__BackingField;
        }
        goto LABEL_146;
      }
      break;
    }
    v122 = baseDeckItemList;
    ++v124;
    if ( v125 )
      ++v125;
    else
      v125 = 0;
    LODWORD(max_length) = baseDeckItemList->max_length;
    if ( (__int64)v124 < (int)max_length )
      continue;
    break;
  }
  if ( !v125 )
    goto LABEL_159;
LABEL_152:
  v139 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v138 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v278.fields.currentCryptoKey = v139;
  *(_QWORD *)&v278.fields.fakeValue = v138;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v278, 0);
  if ( !v120 )
    goto LABEL_294;
  if ( System_Collections_Generic_List_int___Contains(
         v120,
         Instance,
         (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__)
    && !this->fields.isNotSameParty )
  {
    this->fields.isSame = 1;
  }
LABEL_159:
  PartyServantListViewItem__CheckConvertOverwriteImage(this, (const MethodInfo *)NotSamePartyKey);
  PartyServantListViewItem__ModifyLimitCount(this, v140);
  PartyServantListViewItem__ModifyOverwriteStatus(this, v141);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.updateCategoryIdList = 1;
  if ( !Instance )
    goto LABEL_294;
  Instance = UserServantEntity__IsLock((UserServantEntity_o *)Instance, 0);
  v142 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v142 )
    goto LABEL_294;
  IsChoice = UserServantEntity__IsChoice(v142, 0);
  *(_WORD *)&this->fields.isSwapLock = 0;
  *(_WORD *)&this->fields.isLockMode = 0;
  this->fields.isChoice = IsChoice;
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
  if ( !Instance )
    goto LABEL_294;
  v144 = partyItem;
  v145 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_294;
  v146 = *(_OWORD *)&v145->fields.id.fields.fakeValue;
  v147 = *(_QWORD *)(Instance + 128);
  *(_OWORD *)item = *(_OWORD *)&v145->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&item[16] = v146;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v242 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
  v148 = v147 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v242, 0);
  Instance = (int64_t)this->fields.userServantEntity;
  v149 = v148;
  this->fields.isPush = v149;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_294;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0);
  v150 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v150 )
    goto LABEL_294;
  this->fields.isLeave = UserServantEntity__IsLeave(v150, 0);
  *(_QWORD *)&this->fields.bonusKind = 1;
  this->fields.isEventUpVal = 0;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v151);
  v152 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v152 )
    goto LABEL_294;
  Instance = UserServantEntity__getUniqueSvtRestriction_42940232(
               v152,
               this->fields.questRestrictionInfo,
               partyItem,
               v236,
               this->fields.partyIndex,
               0);
  v153 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v153 )
    goto LABEL_294;
  IsUniqueIndividualityRestriction_42940612 = UserServantEntity__IsUniqueIndividualityRestriction_42940612(
                                                v153,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                v236,
                                                this->fields.partyIndex,
                                                0);
  v156 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_42940612;
  this->fields.fatigureTime = -1;
  this->fields.isFatigureRecover = 0;
  if ( !v156 || !v156->fields.isFatigure )
    goto LABEL_184;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_294;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
  if ( !*p_questRestrictionInfo )
    goto LABEL_294;
  v157 = (UserEventServantFatigueMaster_o *)Instance;
  eventId = (*p_questRestrictionInfo)->fields.eventId;
  v160 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v159 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v279.fields.currentCryptoKey = v160;
  *(_QWORD *)&v279.fields.fakeValue = v159;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v279, 0);
  if ( !v157 )
    goto LABEL_294;
  if ( UserEventServantFatigueMaster__GetFatigueInfo(
         v157,
         &recoverAt,
         &this->fields.isFatigureRecover,
         eventId,
         Instance,
         0) )
  {
    v161 = recoverAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( v161 > NetworkManager__getTime(0) )
      this->fields.fatigureTime = recoverAt;
  }
LABEL_184:
  AllOutBattleAlreadyUsed = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v155);
  v163 = this->fields.questRestrictionInfo;
  this->fields._IsAllOutBattle_k__BackingField = AllOutBattleAlreadyUsed;
  if ( !v163 || !v163->fields.isDataLostBattle )
  {
    this->fields._IsDataLost_k__BackingField = 0;
    this->fields._TimesToRestart_k__BackingField = -1;
    goto LABEL_208;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v164 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  v144 = partyItem;
  if ( !*p_questRestrictionInfo || !v164 )
    goto LABEL_294;
  Instance = UserEventDataLostMaster__TryGetEntity(
               (UserEventDataLostMaster_o *)v164,
               &entity,
               *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
               (*p_questRestrictionInfo)->fields.dataLostBattleId,
               0);
  if ( (Instance & 1) == 0 )
    goto LABEL_208;
  v165 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_294;
  v166 = entity;
  v168 = *(_QWORD *)&v165->fields.svtId.fields.currentCryptoKey;
  v167 = *(_QWORD *)&v165->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v280.fields.currentCryptoKey = v168;
  *(_QWORD *)&v280.fields.fakeValue = v167;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v280, 0);
  if ( !v166 )
    goto LABEL_294;
  Instance = UserEventDataLostEntity__IsRestart(v166, Instance, 0);
  v169 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_294;
  v170 = Instance;
  v171 = entity;
  v173 = *(_QWORD *)&v169->fields.svtId.fields.currentCryptoKey;
  v172 = *(_QWORD *)&v169->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v281.fields.currentCryptoKey = v173;
  *(_QWORD *)&v281.fields.fakeValue = v172;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v281, 0);
  if ( !v171 )
    goto LABEL_294;
  if ( (v170 & 1) != 0 )
  {
    this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(v171, Instance, 0);
  }
  else if ( UserEventDataLostEntity__IsDataLost(v171, Instance, 0) )
  {
    this->fields._IsDataLost_k__BackingField = 1;
  }
LABEL_208:
  if ( *p_questRestrictionInfo )
    v174 = (*p_questRestrictionInfo)->fields.eventId;
  else
    v174 = -1;
  if ( !this->fields.isBase )
  {
    partyIndex = this->fields.partyIndex;
    if ( (partyIndex & 0x80000000) == 0 )
      goto LABEL_226;
  }
  Instance = (int64_t)PartyListViewItem__GetMember(v144, v236, 0);
  if ( !Instance )
    goto LABEL_294;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(EquipSvtId, 0) >= 1 )
  {
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v176 = *p_userServantEntity;
    if ( *p_userServantEntity )
    {
      v177 = Instance;
      v179 = *(_QWORD *)&v176->fields.svtId.fields.currentCryptoKey;
      v178 = *(_QWORD *)&v176->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v282.fields.currentCryptoKey = v179;
      *(_QWORD *)&v282.fields.fakeValue = v178;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v282, 0);
      if ( *p_userServantEntity )
      {
        v180 = Instance;
        Rarity = UserServantEntity__getRarity(*p_userServantEntity, 0);
        Instance = (int64_t)PartyListViewItem__GetMember(v144, v236, 0);
        if ( Instance )
        {
          v283 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0);
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v283, 0);
          if ( v177 )
          {
            p_skillName = (System_String_o **)&v257;
            p_actMaxRarity = &v256;
            goto LABEL_237;
          }
        }
      }
    }
    goto LABEL_294;
  }
  partyIndex = this->fields.partyIndex;
  if ( (partyIndex & 0x80000000) == 0 )
  {
LABEL_226:
    Instance = (int64_t)PartyListViewItem__GetMember(v144, partyIndex, 0);
    if ( !Instance )
      goto LABEL_294;
    v186 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v186, 0) >= 1 )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v187 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_294;
      v188 = Instance;
      v190 = *(_QWORD *)&v187->fields.svtId.fields.currentCryptoKey;
      v189 = *(_QWORD *)&v187->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v284.fields.currentCryptoKey = v190;
      *(_QWORD *)&v284.fields.fakeValue = v189;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v284, 0);
      if ( !*p_userServantEntity )
        goto LABEL_294;
      v180 = Instance;
      Rarity = UserServantEntity__getRarity(*p_userServantEntity, 0);
      Instance = (int64_t)PartyListViewItem__GetMember(v144, this->fields.partyIndex, 0);
      if ( !Instance )
        goto LABEL_294;
      v285 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0);
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v285, 0);
      if ( !v188 )
        goto LABEL_294;
      p_skillName = &skillName;
      p_actMaxRarity = &actMaxRarity;
LABEL_237:
      this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                       (PartyOrganizationUtility_o *)Instance,
                                       p_skillName,
                                       p_actMaxRarity,
                                       v180,
                                       Rarity,
                                       Instance,
                                       v174,
                                       v182);
    }
  }
  v191 = this->fields.questRestrictionInfo;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  this->fields._SvtPointRank_k__BackingField = 0;
  this->fields._SvtPoint_k__BackingField = 0;
  if ( v191 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Instance )
      goto LABEL_294;
    v192 = (EventServantPointRankMaster_o *)Instance;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v174, 0) )
    {
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v193 = *p_userServantEntity;
      if ( *p_userServantEntity )
      {
        v194 = *(_OWORD *)&v193->fields.userId.fields.fakeValue;
        v195 = (UserEventServantPointMaster_o *)Instance;
        *(_OWORD *)item = *(_OWORD *)&v193->fields.userId.fields.currentCryptoKey;
        *(_OWORD *)&item[16] = v194;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v241 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)item;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v241, 0);
        if ( *p_userServantEntity )
        {
          v196 = Instance;
          Instance = UserServantEntity__getSvtId(*p_userServantEntity, 0);
          if ( v195 )
          {
            p_SvtPoint_k__BackingField = &this->fields._SvtPoint_k__BackingField;
            if ( UserEventServantPointMaster__TryGetEntity(v195, &v253, v196, v174, Instance, 0) )
            {
              Instance = (int64_t)v253;
              if ( !v253 )
                goto LABEL_294;
              *p_SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v253, 0);
            }
            Instance = (int64_t)*p_userServantEntity;
            if ( *p_userServantEntity )
            {
              v198 = *p_SvtPoint_k__BackingField;
              v199 = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0);
              EnableEntity = EventServantPointRankMaster__GetEnableEntity(v192, v174, v198, v199, 0);
              if ( EnableEntity )
                this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
              goto LABEL_256;
            }
          }
        }
      }
LABEL_294:
      sub_1C2D6EC(Instance, NotSamePartyKey);
    }
  }
LABEL_256:
  v201 = (System_Collections_Generic_List_T__o *)sub_1C2D6DC(System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
  System_Collections_Generic_List_ValueTuple_int__int__Int32Enum_____ctor(
    v201,
    (const MethodInfo_373B024 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
  if ( *p_questRestrictionInfo )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_294;
    v202 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance || !v202 )
      goto LABEL_294;
    Instance = (int64_t)EventCampaignMaster__GetFriendshipUpCampaigns(
                          (EventCampaignMaster_o *)v202,
                          *(_QWORD *)(Instance + 112),
                          0);
    if ( Instance )
    {
      v203 = (System_Collections_Generic_List_object__o *)Instance;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_294;
      v204 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventQuestMaster___);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)item,
        v203,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
      v252 = *(System_Collections_Generic_List_Enumerator_object__o *)item;
      while ( 1 )
      {
        v205 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v252,
                 (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v205 )
          break;
        current = (EventCampaignEntity_o *)v252.fields._current;
        if ( !v252.fields._current )
          sub_1C2D6EC(v205, v206);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v252.fields._current[2].monitor;
        if ( monitor && monitor[1].monitor )
        {
          if ( !userServantEntity )
            sub_1C2D6EC(v205, v206);
          v210 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
          v209 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v286.fields.currentCryptoKey = v210;
          *(_QWORD *)&v286.fields.fakeValue = v209;
          v211 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v286, 0);
          v205 = System_Linq_Enumerable__Contains_int_(
                   monitor,
                   v211,
                   (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( !v205 )
            continue;
        }
        if ( !*p_questRestrictionInfo )
          sub_1C2D6EC(v205, v206);
        if ( !v204 )
          sub_1C2D6EC(v205, v206);
        if ( !EventQuestMaster__IsEventNotIncluded(
                (EventQuestMaster_o *)v204,
                current->fields.eventId,
                (*p_questRestrictionInfo)->fields.questId,
                (*p_questRestrictionInfo)->fields.questPhase,
                7,
                0,
                0) )
        {
          v212 = current->fields.eventId;
          FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0);
          calcType = current->fields.calcType;
          v215 = FriendshipBonusValue;
          *(_DWORD *)&item[8] = 0;
          *(_QWORD *)item = 0;
          *(_QWORD *)&v266.fields.Item1 = item;
          v266.fields.Item3 = v212;
          System_ValueTuple_int__int__Int32Enum____ctor(
            v266,
            v215,
            calcType,
            Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__,
            v216);
          if ( !v201 )
            sub_1C2D6EC(v217, v218);
          v219 = *(System_ValueTuple_int__int__Int32Enum__o *)item;
          v220 = v201->fields._items;
          v221 = Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__;
          ++v201->fields._version;
          if ( !v220 )
            sub_1C2D6EC(v217, *(_QWORD *)&v219.fields.Item1);
          v222 = v201->fields._size;
          if ( (unsigned int)v222 >= LODWORD(v220->max_length) )
          {
            System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____AddWithResize(
              v201,
              v219,
              *(const MethodInfo_373B8B0 **)(*(_QWORD *)(v221[4] + 192LL) + 112LL));
          }
          else
          {
            v201->fields._size = v222 + 1;
            *((System_ValueTuple_int__int__Int32Enum__o *)v220->m_Items + v222) = v219;
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v252,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    }
  }
  if ( !v201 )
    goto LABEL_294;
  v223 = (struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *)System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____ToArray(
                                                                                    v201,
                                                                                    (const MethodInfo_373D474 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
  this->fields._FriendshipUpValTuple_k__BackingField = v223;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField, (int32_t)v223, v224, v225);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_294;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_294;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_294;
  this->fields.priority = *(_DWORD *)(Instance + 52);
  PartyServantListViewItem__InitAfterSecondSort(this, (const MethodInfo *)NotSamePartyKey);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_294;
  v226 = BalanceConfig_TypeInfo;
  v227 = *(_DWORD *)(Instance + 276);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v226 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v226->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v227;
  if ( !Instance )
    goto LABEL_294;
  this->fields.atkReinforceValue = static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &this->fields.nowMaxHpReinforceValue,
    &this->fields.nowMaxAtkReinforceValue,
    0);
  Instance = (int64_t)this->fields.iconLabelInfo1;
  this->fields.amountSortValue = -1;
  if ( !Instance )
    goto LABEL_294;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (int64_t)*p_iconLabelInfo2;
  if ( !*p_iconLabelInfo2 )
    goto LABEL_294;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
  Instance = (int64_t)*p_iconLabelInfo3;
  if ( !*p_iconLabelInfo3 )
    goto LABEL_294;
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0);
}


void PartyServantListViewItem___ctor_34329796(
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
  const MethodInfo *v19; // x3
  IconLabelInfo_o *v20; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  IconLabelInfo_o *v23; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int64_t Instance; // x0
  const MethodInfo *v27; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct UserServantEntity_o **p_userServantEntity; // x23
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *MasterData_object; // x0
  __int64 v40; // x20
  __int64 v41; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x26
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // x26
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct UserServantEntity_o *v47; // x8
  __int128 v48; // q1
  UserServantCollectionMaster_o *v49; // x27
  int64_t v50; // x28
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  System_Collections_Generic_List_object__o *v57; // x21
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  char v61; // w28
  int32_t v62; // w27
  PartyOrganizationListViewItem_o *v63; // x29
  struct UserServantEntity_o *v64; // x8
  __int128 v65; // q0
  struct UserServantEntity_o *v66; // x8
  __int128 v67; // q0
  int64_t v68; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v69; // x8
  __int64 v70; // x20
  __int64 v71; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  int v73; // w20
  int v74; // w20
  struct ServantEntity_o *v75; // x8
  __int64 v76; // x20
  __int64 v77; // x21
  int32_t v78; // w29
  int32_t v79; // w20
  System_Int64_array *EquipList; // x0
  const MethodInfo *v81; // x2
  const MethodInfo *v82; // x1
  const MethodInfo *v83; // x1
  bool IsChoice; // w8
  UserServantEntity_o *v85; // x8
  const MethodInfo *v86; // x1
  UserServantEntity_o *v87; // x8
  UserServantEntity_o *v88; // x8
  bool IsUniqueIndividualityRestriction_42940612; // w0
  const MethodInfo *v90; // x1
  struct QuestRestrictionInfo_o *v91; // x8
  UserEventServantFatigueMaster_o *v92; // x22
  int32_t eventId; // w24
  __int64 v94; // x20
  __int64 v95; // x21
  int64_t v96; // x20
  BalanceConfig_c *v97; // x8
  int v98; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+8h] [xbp-108h]
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+10h] [xbp-100h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+18h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v105; // [xsp+60h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+80h] [xbp-90h]
  int64_t recoverAt; // [xsp+A0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+ACh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16

  if ( (byte_4C22F35 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CommonRestrictionMaster_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C2D490(&IconLabelInfo_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22F35 = 1;
  }
  friendshipRank = 0;
  recoverAt = 0;
  v17 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0);
  this->fields.iconLabelInfo1 = v17;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v17, v18, v19);
  v20 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v20, 0);
  this->fields.iconLabelInfo2 = v20;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v20, v21, v22);
  v23 = (IconLabelInfo_o *)sub_1C2D6DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v23, 0);
  this->fields.iconLabelInfo3 = v23;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.iconLabelInfo3, (int32_t)v23, v24, v25);
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_83;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, num, 0);
  this->fields.baseItem = MemberItem;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseItem, (int32_t)MemberItem, v29, v30);
  baseItem = this->fields.baseItem;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_83;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v31, v32);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v35, v36);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v37, v38);
  if ( !this->fields.userServantEntity )
    goto LABEL_83;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  v41 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v40 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v42 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v109.fields.currentCryptoKey = v41;
  *(_QWORD *)&v109.fields.fakeValue = v40;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v109, 0);
  if ( !v42 )
    goto LABEL_83;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v42,
             Instance,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v45, v46);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v47 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_83;
  v48 = *(_OWORD *)&v47->fields.userId.fields.fakeValue;
  v49 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v106.fields.currentCryptoKey = *(_OWORD *)&v47->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v106.fields.fakeValue = v48;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v105 = v106;
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v105, 0);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(this->fields.svtId, 0);
  if ( !v49 )
    goto LABEL_83;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v49, v50, Instance, 0);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipUserServantEntity, 0, v51, v52);
  this->fields.equipServantEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipServantEntity, 0, v53, v54);
  this->fields.equipIdList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v55, v56);
  v57 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v57,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  this->fields.equipServantEntityList = (struct System_Collections_Generic_List_UserServantEntity__o *)v57;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipServantEntityList, (int32_t)v57, v58, v59);
  Instance = (int64_t)this->fields.servantEntity;
  if ( !Instance )
    goto LABEL_83;
  Instance = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0);
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_83;
  v61 = Instance;
  v62 = 0;
  while ( v62 < SLODWORD(memberItemList->max_length) )
  {
    Instance = (int64_t)WarBoardPartyListViewItem__GetMemberItem(partyItem, v62, 0);
    if ( !Instance )
      goto LABEL_83;
    v63 = (PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 120) )
    {
      v64 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_83;
      v65 = *(_OWORD *)&v64->fields.id.fields.fakeValue;
      *(_OWORD *)&v106.fields.currentCryptoKey = *(_OWORD *)&v64->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v106.fields.fakeValue = v65;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v104 = v106;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v104, 0);
      v66 = v63->fields.userServantEntity;
      if ( !v66 )
        goto LABEL_83;
      v67 = *(_OWORD *)&v66->fields.id.fields.fakeValue;
      v68 = Instance;
      *(_OWORD *)&v103.fields.currentCryptoKey = *(_OWORD *)&v66->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v103.fields.fakeValue = v67;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v103, 0);
      if ( v68 == Instance )
      {
        this->fields.isSame = 0;
        this->fields.isBase = num == v62;
        this->fields.partyIndex = v62;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v63, 0);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v81);
        break;
      }
      if ( num != v62 )
      {
        v69 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_83;
        v71 = *(_QWORD *)&v69[2].fields.currentCryptoKey;
        v70 = *(_QWORD *)&v69[2].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v110.fields.currentCryptoKey = v71;
        *(_QWORD *)&v110.fields.fakeValue = v70;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v110, 0);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v63->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_83;
        v73 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(servantEntity[2], 0);
        if ( v73 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else
        {
          if ( (v61 & 1) == 0 )
            goto LABEL_42;
          Instance = (int64_t)v63->fields.servantEntity;
          if ( !Instance )
            goto LABEL_83;
          Instance = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0);
          if ( (Instance & 1) == 0 )
            goto LABEL_42;
          Instance = (int64_t)*p_servantEntity;
          if ( !*p_servantEntity )
            goto LABEL_83;
          Instance = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0);
          if ( !v63->fields.servantEntity )
            goto LABEL_83;
          v74 = Instance;
          Instance = ServantEntity__GetNotSamePartyKey(v63->fields.servantEntity, 0);
          if ( v74 == (_DWORD)Instance )
          {
            this->fields.isNotSameParty = 1;
          }
          else
          {
LABEL_42:
            if ( this->fields.commonRestrictionId == -1 )
            {
              v75 = v63->fields.servantEntity;
              if ( !v75 )
                goto LABEL_83;
              v77 = *(_QWORD *)&v75->fields.baseSvtId.fields.currentCryptoKey;
              v76 = *(_QWORD *)&v75->fields.baseSvtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v111.fields.currentCryptoKey = v77;
              *(_QWORD *)&v111.fields.fakeValue = v76;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v111, 0);
              if ( !*p_servantEntity )
                goto LABEL_83;
              v78 = Instance;
              v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*p_servantEntity)[2], 0);
              if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
              Instance = CommonRestrictionMaster__GetIncludedRestrictionIds(v78, v79, 0);
              if ( (Instance & 0x80000000) == 0 )
                this->fields.commonRestrictionId = Instance;
            }
          }
        }
      }
    }
    memberItemList = partyItem->fields.memberItemList;
    ++v62;
    if ( !memberItemList )
      goto LABEL_83;
  }
  PartyServantListViewItem__CheckConvertOverwriteImage(this, v27);
  PartyServantListViewItem__ModifyLimitCount(this, v82);
  PartyServantListViewItem__ModifyOverwriteStatus(this, v83);
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
  v85 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v85 )
    goto LABEL_83;
  this->fields.isLeave = UserServantEntity__IsLeave(v85, 0);
  *(_QWORD *)&this->fields.bonusKind = 1;
  this->fields.isEventUpVal = 0;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v86);
  v87 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v87 )
    goto LABEL_83;
  Instance = UserServantEntity__getUniqueSvtRestriction_42940232(
               v87,
               this->fields.questRestrictionInfo,
               0,
               num,
               this->fields.partyIndex,
               0);
  v88 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v88 )
    goto LABEL_83;
  IsUniqueIndividualityRestriction_42940612 = UserServantEntity__IsUniqueIndividualityRestriction_42940612(
                                                v88,
                                                this->fields.questRestrictionInfo,
                                                0,
                                                num,
                                                this->fields.partyIndex,
                                                0);
  v91 = this->fields.questRestrictionInfo;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_42940612;
  this->fields.fatigureTime = -1;
  this->fields.isFatigureRecover = 0;
  if ( !v91 || !v91->fields.isFatigure )
    goto LABEL_72;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
  if ( !*p_questRestrictionInfo )
    goto LABEL_83;
  v92 = (UserEventServantFatigueMaster_o *)Instance;
  eventId = (*p_questRestrictionInfo)->fields.eventId;
  v95 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v94 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v112.fields.currentCryptoKey = v95;
  *(_QWORD *)&v112.fields.fakeValue = v94;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v112, 0);
  if ( !v92 )
LABEL_83:
    sub_1C2D6EC(Instance, v27);
  if ( UserEventServantFatigueMaster__GetFatigueInfo(
         v92,
         &recoverAt,
         &this->fields.isFatigureRecover,
         eventId,
         Instance,
         0) )
  {
    v96 = recoverAt;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( v96 > NetworkManager__getTime(0) )
      this->fields.fatigureTime = recoverAt;
  }
LABEL_72:
  this->fields._IsAllOutBattle_k__BackingField = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v90);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_83;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_83;
  this->fields.priority = *(_DWORD *)(Instance + 52);
  PartyServantListViewItem__InitAfterSecondSort(this, v27);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_83;
  v97 = BalanceConfig_TypeInfo;
  v98 = *(_DWORD *)(Instance + 276);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v97 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v97->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v98;
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
  if ( (byte_4C22F38 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C22F38 = 1;
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
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v13, 0);
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
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
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
        sub_1C2D6EC(this, method);
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
  if ( (byte_4C22F36 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C22F36 = 1;
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
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v33, 0);
  v7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
  if ( !v7 )
    goto LABEL_38;
  v8 = (int)this;
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v7[6], 0);
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
  if ( !QuestRestrictionInfo__IsRestriction_43187532(
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
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v34, 0);
    v16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
    if ( !v16 )
      goto LABEL_38;
    v17 = (int)this;
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v16[6], 0);
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
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v35, 0);
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
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v36, 0);
        v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
        if ( v28 )
        {
          v29 = (int)this;
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
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
    sub_1C2D6EC(this, method);
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
  if ( (byte_4C22F37 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C22F37 = 1;
  }
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    userServantEntity = v2->fields.userServantEntity;
    if ( !userServantEntity )
      sub_1C2D6EC(this, method);
    v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v9, 0);
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

  if ( (byte_4C22F3F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22F3F = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = questRestrictionInfo->fields.allOutBattleGroupNo;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (UserEventAlloutBattleMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v9;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v13, 0);
  v11 = this->fields.questRestrictionInfo;
  if ( !v11 || !v10 )
LABEL_13:
    sub_1C2D6EC(Instance, v6);
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
  const MethodInfo *v9; // x3

  if ( (byte_4C22F42 & 1) == 0 )
  {
    sub_1C2D490(&TreasureDvcInfo_TypeInfo);
    byte_4C22F42 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0);
  v7 = (TreasureDvcInfo_o *)sub_1C2D6DC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0);
  *tdInfo = v7;
  sub_1C2D434((CGThumbnailListItem_o *)tdInfo, (int32_t)v7, v8, v9);
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

  if ( (byte_4C22F3E & 1) == 0 )
  {
    sub_1C2D490(&CommonRestrictionMaster_TypeInfo);
    byte_4C22F3E = 1;
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
  if ( (byte_4C22F43 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C22F43 = 1;
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
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                               &v12,
                                               0);
        v8 = v2->fields.userServantEntity;
        v2->fields.sortValue2B = (int64_t)this;
        if ( v8 )
        {
          v9 = *(_OWORD *)&v8->fields.id.fields.fakeValue;
          *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&v8->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v11.fields.fakeValue = v9;
          v2->fields.sortValueLast = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v11, 0);
          return;
        }
      }
    }
LABEL_15:
    sub_1C2D6EC(this, method);
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
  v2->fields.sortValue2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v10, 0);
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
  __int64 v16; // x2
  System_Collections_Generic_List_T__o *v17; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v19; // x0
  ListViewSort_FilterKind_array *v20; // x21
  UserServantEntity_o *v22; // x0
  int32_t dispLimitCount; // w2
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v31; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v33; // w0

  if ( (byte_4C22F3C & 1) == 0 )
  {
    sub_1C2D490(&FilterKindList_TypeInfo);
    sub_1C2D490(&ListViewSort_FilterKind___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1C2D490(&ServantEventBonusFilterController_TypeInfo);
    byte_4C22F3C = 1;
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
                                                                       (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                            (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  v22 = this->fields.userServantEntity;
  if ( v22 && this->fields.updateCategoryIdList )
  {
    dispLimitCount = this->fields.dispLimitCount;
    this->fields.updateCategoryIdList = 0;
    SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v22, -1, dispLimitCount, 0);
    this->fields.skillCategoryIdList = SkillCategoryIdList;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v25, v26);
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)this->fields.userServantEntity;
    if ( !ClassGroupFilterKindList )
      goto LABEL_65;
    TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     this->fields.dispLimitCount,
                                     0);
    this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
    sub_1C2D434(
      (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
      (int32_t)TreasureDeviceCategoryIdList,
      v28,
      v29);
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
LABEL_65:
    sub_1C2D6EC(ClassGroupFilterKindList, sort);
  v17 = ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList->fields._size )
    goto LABEL_66;
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 50;
  IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                   sort,
                                   (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                   0);
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  v17 = ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList->fields._size )
LABEL_66:
    sub_1C2D6F4(ClassGroupFilterKindList, v17, v16);
  LODWORD(ClassGroupFilterKindList->fields._syncRoot) = 51;
  v31 = ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0);
  IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                            this->fields.tdCategoryIdList,
                            sort,
                            0);
  v33 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0);
  if ( ((IsUnSelectedAllTargetFilters ^ v31) & 1) != 0 )
  {
    if ( IsUnSelectedAllTargetFilters )
    {
      if ( !v33 )
        return 0;
    }
    else if ( !IsMatchEffectCategory )
    {
      return 0;
    }
  }
  else if ( !IsMatchEffectCategory && !v33 )
  {
    return 0;
  }
LABEL_33:
  if ( !ListViewSort__IsMatchServantAttriFilter(sort, this->fields.userServantEntity, this->fields.servantEntity, 0)
    || !ListViewSort__IsMatchServantSubAttriFilter(sort, this->fields.userServantEntity, this->fields.servantEntity, 0) )
  {
    return 0;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)sub_1C2D538(ListViewSort_FilterKind___TypeInfo, 1);
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  v17 = ClassGroupFilterKindList;
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
  v19 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v19 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v19->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  v20 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           ClassGroupFilterKindList,
                                           (const MethodInfo_3770E44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v20, 0)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v20, 0)
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
    sub_1C2D6EC(0, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userServantEntity, 0);
  this->fields.isSwapChoice = 0;
}


void PartyServantListViewItem__ModifyItem(
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, (int32_t)method, v3);
  if ( !*p_userServantEntity )
    sub_1C2D6EC(0, v6);
  IsLeave = UserServantEntity__IsLeave(*p_userServantEntity, 0);
  dispLimitCount = this->fields.dispLimitCount;
  this->fields.isLeave = IsLeave;
  *(_QWORD *)&this->fields.bonusKind = 1;
  this->fields.isEventUpVal = 0;
  PartyServantListViewItem__ModifyLimitCount(this, v9);
  PartyServantListViewItem__ModifyOverwriteStatus(this, v10);
  if ( dispLimitCount != this->fields.dispLimitCount )
    this->fields.updateCategoryIdList = 1;
  this->fields.isQuestRestriction = PartyServantListViewItem__ChkQuestRestriction(this, v11);
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

  if ( (byte_4C22F39 & 1) == 0 )
  {
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C22F39 = 1;
  }
  if ( this->fields.isConvertOverwriteImage )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_15;
    questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__ConvertOverwriteImageLimitCount_43203860(
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
  questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                     v12,
                                                     0);
  v7 = this->fields.userServantEntity;
  if ( !v7 )
LABEL_15:
    sub_1C2D6EC(questRestrictionInfo, method);
  v8 = (int)questRestrictionInfo;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v7->fields.limitCount, 0);
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
    sub_1C2D6EC(0, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0);
  this->fields.isSwapLock = 0;
}


void PartyServantListViewItem__ModifyOverwriteStatus(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  int64_t userServantEntity; // x0
  const MethodInfo_38B0CA0 *v4; // x3
  _BOOL4 IsGrandSameServant_k__BackingField; // w8
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct UserServantEntity_o *v7; // x8
  __int128 v8; // q0
  __int128 v9; // q1
  const MethodInfo_38AFA90 *v10; // x3
  int v11; // w23
  __int64 v12; // x24
  struct UserServantEntity_o *v13; // x8
  __int128 v14; // q0
  const MethodInfo_38B0CA0 *v15; // x3
  struct PartyOrganizationListViewItem_o *v16; // x8
  struct UserServantEntity_o *v17; // x8
  __int128 v18; // q0
  __int128 v19; // q1
  const MethodInfo_38AFA90 *v20; // x3
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
  if ( (byte_4C22F3A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_ObscuredLong__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_long___ctor__);
    sub_1C2D490(&Method_System_Nullable_ObscuredLong___ctor__);
    sub_1C2D490(&Method_System_Nullable_ObscuredLong__get_HasValue__);
    sub_1C2D490(&Method_System_Nullable_long__get_HasValue__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&UserServantGrandInfo_TypeInfo);
    byte_4C22F3A = 1;
  }
  userServantEntity = (int64_t)this->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_48;
  userServantEntity = (int64_t)UserServantEntity__GetOverwriteStatus_42952520(
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
      v52.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v42, 0);
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
  userServantEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v41, 0);
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
      sub_1C2D6EC(userServantEntity, method);
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
      v54.fields.value = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v38, 0);
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
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v35, 0);
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
  const MethodInfo *v3; // x3
  Il2CppObject **p_equipUserServantEntity; // x22
  CGThumbnailListItem_o *p_equipServantEntity; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Int64_array **p_equipIdList; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *v13; // x24
  Il2CppObject **v14; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *Master_object; // x0
  Il2CppObject *v18; // x1
  __int64 v19; // x2
  struct System_Int64_array *v20; // x8
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *v24; // x23
  __int64 v25; // x1
  BalanceConfig_c *v26; // x0
  struct System_Int64_array *v27; // x8
  Il2CppObject *v28; // x8
  void *monitor; // x23
  Il2CppClass *klass; // x24
  Il2CppObject *v31; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x22
  void *v33; // x23
  Il2CppClass *v34; // x24
  Il2CppObject *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct System_Int64_array *v38; // x23
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x20
  unsigned __int64 v41; // x24
  void *v42; // x21
  Il2CppClass *v43; // x22
  const MethodInfo *v44; // x3
  Il2CppClass *v45; // x8
  _QWORD *v46; // x9
  __int64 monitor_low; // x10
  void **v48; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4C22F3B & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C22F3B = 1;
  }
  p_equipUserServantEntity = (Il2CppObject **)&this->fields.equipUserServantEntity;
  entity = 0;
  this->fields.equipUserServantEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipUserServantEntity, 0, (int32_t)method, v3);
  p_equipServantEntity = (CGThumbnailListItem_o *)&this->fields.equipServantEntity;
  this->fields.equipServantEntity = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.equipServantEntity, 0, v8, v9);
  this->fields.equipIdList = 0;
  p_equipIdList = &this->fields.equipIdList;
  sub_1C2D434((CGThumbnailListItem_o *)p_equipIdList, 0, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  v14 = (Il2CppObject **)(p_equipIdList + 24);
  p_equipIdList[24] = (struct System_Int64_array *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)(p_equipIdList + 24), (int32_t)v13, v15, v16);
  if ( !*(p_equipIdList - 1) )
    return;
  if ( !equipIds )
    goto LABEL_9;
  v20 = *p_equipIdList;
  if ( *p_equipIdList == equipIds )
    goto LABEL_14;
  v21 = System_Array__Clone((System_Array_o *)equipIds, 0);
  if ( v21 )
  {
    v24 = v21;
    v25 = sub_1C2D5CC(v21, long___TypeInfo);
    if ( !v25 )
    {
      sub_1C2D9AC(v24);
LABEL_9:
      v26 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v26 = BalanceConfig_TypeInfo;
      }
      v25 = sub_1C2D538(long___TypeInfo, (unsigned int)v26->static_fields->SvtEquipMax);
    }
  }
  else
  {
    v25 = 0;
  }
  *p_equipIdList = (struct System_Int64_array *)v25;
  sub_1C2D434((CGThumbnailListItem_o *)p_equipIdList, v25, v22, v23);
  v20 = *p_equipIdList;
LABEL_14:
  if ( !v20 )
    goto LABEL_56;
  if ( !LODWORD(v20->max_length) )
    goto LABEL_57;
  if ( v20->m_Items[0] >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
    v27 = *p_equipIdList;
    if ( !*p_equipIdList )
      goto LABEL_56;
    if ( !LODWORD(v27->max_length) )
      goto LABEL_57;
    if ( !Master_object )
      goto LABEL_56;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      p_equipUserServantEntity,
                                      v27->m_Items[0],
                                      (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      v28 = *p_equipUserServantEntity;
      if ( !*p_equipUserServantEntity )
        goto LABEL_56;
      klass = v28[5].klass;
      monitor = v28[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v50.fields.currentCryptoKey = klass;
      *(_QWORD *)&v50.fields.fakeValue = monitor;
      Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v50, 0);
      if ( (int)Master_object >= 1 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
        v31 = *p_equipUserServantEntity;
        if ( !*p_equipUserServantEntity )
          goto LABEL_56;
        v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        v34 = v31[5].klass;
        v33 = v31[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v51.fields.currentCryptoKey = v34;
        *(_QWORD *)&v51.fields.fakeValue = v33;
        Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v51, 0);
        if ( !v32 )
          goto LABEL_56;
        v35 = DataMasterBase_object__object__int___GetEntity(
                v32,
                (int32_t)Master_object,
                (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        p_equipServantEntity->klass = (CGThumbnailListItem_c *)v35;
        sub_1C2D434(p_equipServantEntity, (int32_t)v35, v36, v37);
      }
    }
  }
  if ( !*p_equipIdList )
    goto LABEL_56;
  if ( SLODWORD((*p_equipIdList)->max_length) < 2 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  v38 = *p_equipIdList;
  if ( !*p_equipIdList )
LABEL_56:
    sub_1C2D6EC(Master_object, v18);
  max_length = v38->max_length;
  if ( (int)max_length >= 1 )
  {
    v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v41 = 0;
    while ( v41 < (unsigned int)max_length )
    {
      v19 = v38->m_Items[v41];
      if ( v19 >= 1 )
      {
        if ( !v40 )
          goto LABEL_56;
        Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                          v40,
                                          &entity,
                                          v19,
                                          (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_56;
          v43 = entity[5].klass;
          v42 = entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v52.fields.currentCryptoKey = v43;
          *(_QWORD *)&v52.fields.fakeValue = v42;
          Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v52, 0);
          if ( (int)Master_object >= 1 )
          {
            Master_object = *v14;
            if ( !*v14 )
              goto LABEL_56;
            v18 = entity;
            v45 = Master_object[1].klass;
            v46 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++HIDWORD(Master_object[1].monitor);
            if ( !v45 )
              goto LABEL_56;
            monitor_low = SLODWORD(Master_object[1].monitor);
            if ( (unsigned int)monitor_low >= LODWORD(v45->_1.namespaze) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)Master_object,
                v18,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
            }
            else
            {
              v48 = &v45->_1.image + monitor_low;
              LODWORD(Master_object[1].monitor) = monitor_low + 1;
              v48[4] = v18;
              sub_1C2D434((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v18, v19, v44);
            }
          }
        }
      }
      LODWORD(max_length) = v38->max_length;
      if ( (__int64)++v41 >= (int)max_length )
        return;
    }
LABEL_57:
    sub_1C2D6F4(Master_object, v18, v19);
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
  bool EventUpVal_42935000; // w0
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
  if ( (byte_4C22F3D & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UserServantEntity__get_Current__);
    sub_1C2D490(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_PartyServantListViewItem__SetSortValue_b__134_0__);
    sub_1C2D490(&Method_PartyServantListViewItem__SetSortValue_b__134_1__);
    sub_1C2D490(&PartyServantListViewItem_TypeInfo);
    sub_1C2D490(&PartyServantListViewManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    this = (PartyServantListViewItem_o *)sub_1C2D490(&UserServantGrandInfo_TypeInfo);
    byte_4C22F3D = 1;
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
              this = (PartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventGroupMaster___);
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
              v116 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventGroupEntity__bool__TypeInfo);
              v117 = &Method_PartyServantListViewItem__SetSortValue_b__134_1__;
              break;
            case 3:
              v4->fields.bonusKind = 3;
              v4->fields.bonusKindId = sort->fields.bonusKind2Id;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventCampaignMaster___);
              v91 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
              v90 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
              v92 = (EventCampaignMaster_o *)Master_object;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v134.fields.currentCryptoKey = v91;
              *(_QWORD *)&v134.fields.fakeValue = v90;
              this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
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
              this = (PartyServantListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
              if ( !this || !userServantEntity )
                goto LABEL_282;
              viewObject = this->fields.viewObject;
              v76 = userServantEntity;
              v77 = v86;
              v78 = v80;
LABEL_180:
              EventUpVal_42935000 = UserServantEntity__getEventUpVal_42935000(v76, v77, v78, (int64_t)viewObject, 0);
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
                                      (const MethodInfo_30B7CF0 *)Method_BasicHelper_Any_EventGroupEntity___);
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
          this = (PartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventGroupMaster___);
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
          v116 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_EventGroupEntity__bool__TypeInfo);
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
          v106 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventCampaignMaster___);
          v108 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
          v107 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
          v109 = (EventCampaignMaster_o *)v106;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v135.fields.currentCryptoKey = v108;
          *(_QWORD *)&v135.fields.fakeValue = v107;
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                 v135,
                                                 0);
          if ( !v109 )
            goto LABEL_282;
          EventUpVal_42935000 = EventCampaignMaster__IsEnableServant(v109, (int32_t)this, v4->fields.bonusKindId, 0);
LABEL_261:
          v4->fields.isEventUpVal = EventUpVal_42935000;
          if ( !EventUpVal_42935000 )
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
          this = (PartyServantListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
          this = (PartyServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_282;
          this = (PartyServantListViewItem_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
          if ( !this )
            goto LABEL_282;
          EventUpVal_42935000 = ServantFilterMaster__IsEnableServant(
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
      if ( !TutorialFlag__Get_40206092(126, 0) )
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
  IconLabelInfo__Set_40696284((IconLabelInfo_o *)this, 7, v4->fields.cost, 0, cost, 0, 0, 0, 0, 0);
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
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
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
      IconLabelInfo__Set_40696284(
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
      UserServantEntity__getTreasureDeviceInfo_42942260((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0);
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
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                             &v128,
                                             0);
      v31 = v4->fields.userServantEntity;
      if ( !v31 )
        goto LABEL_282;
      v32 = *(_OWORD *)&v31->fields.id.fields.fakeValue;
      v33 = this;
      *(_OWORD *)&v127.fields.currentCryptoKey = *(_OWORD *)&v31->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v127.fields.fakeValue = v32;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
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
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                               &v126,
                                               0);
        v37 = v4->fields.userServantEntity;
        if ( !v37 )
          goto LABEL_282;
        v38 = *(_OWORD *)&v37->fields.id.fields.fakeValue;
        *(_OWORD *)&v125.fields.currentCryptoKey = *(_OWORD *)&v37->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v125.fields.fakeValue = v38;
        if ( this != (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
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
          IconLabelInfo__Set_40696284((IconLabelInfo_o *)this, v97, hp, v27, atk, 0, 0, 0, 0, 0);
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
          sub_1C2D6EC(this, sort);
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
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v98 = 0;
      v130 = *(System_Collections_Generic_List_Enumerator_object__o *)&v129.fields.currentCryptoKey;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v130,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
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
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
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
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                             &v124,
                                             0);
      v47 = v4->fields.userServantEntity;
      if ( !v47 )
        goto LABEL_282;
      v48 = *(_OWORD *)&v47->fields.id.fields.fakeValue;
      v49 = this;
      *(_OWORD *)&v123.fields.currentCryptoKey = *(_OWORD *)&v47->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v123.fields.fakeValue = v48;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
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
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
                                               &v122,
                                               0);
        v53 = v4->fields.userServantEntity;
        if ( !v53 )
          goto LABEL_282;
        v54 = *(_OWORD *)&v53->fields.id.fields.fakeValue;
        *(_OWORD *)&v121.fields.currentCryptoKey = *(_OWORD *)&v53->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v121.fields.fakeValue = v54;
        if ( this != (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(
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
        IconLabelInfo__Set_40696284((IconLabelInfo_o *)this, v26, hp, friendshipMax, 0, 0, 0, 0, 0, 0);
        goto LABEL_232;
      }
      this = (PartyServantListViewItem_o *)v4->fields.equipServantEntityList;
      if ( !this )
        goto LABEL_282;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v129,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UserServantEntity__GetEnumerator__);
      v98 = 0;
      v130 = *(System_Collections_Generic_List_Enumerator_object__o *)&v129.fields.currentCryptoKey;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v130,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__MoveNext__) )
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
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UserServantEntity__Dispose__);
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
      v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v132, 0);
      iconLabelInfo1 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v66 = v64;
      friendship = v4->fields.friendship;
      v4->fields.sortValue1 = v66;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
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
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v136, 0);
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
      IconLabelInfo__Set_40696284(v68, 2, v69, v67, 0, 0, 0, 0, 0, 0);
LABEL_238:
      LOBYTE(this) = 1;
      return (char)this;
    default:
      return (char)this;
  }
  IconLabelInfo__Set_40696284((IconLabelInfo_o *)this, v101, v100, v27, v98, 0, 0, 0, 0, 0);
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

  if ( (byte_4C22F45 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C22F45 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v7;
  *(_QWORD *)&v15.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v15, 0);
  if ( !entity || !v8 )
    goto LABEL_18;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Instance, entity->fields.eventId, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !userServantEntity )
LABEL_18:
    sub_1C2D6EC(Instance, v10);
  return UserServantEntity__getEventUpVal_42935000(userServantEntity, setupInfo, eventId, (int64_t)Instance[7].klass, 0);
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

  if ( (byte_4C22F46 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C22F46 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v7;
  *(_QWORD *)&v15.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v15, 0);
  if ( !entity || !v8 )
    goto LABEL_18;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Instance, entity->fields.eventId, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !userServantEntity )
LABEL_18:
    sub_1C2D6EC(Instance, v10);
  return UserServantEntity__getEventUpVal_42935000(userServantEntity, setupInfo, eventId, (int64_t)Instance[7].klass, 0);
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

  if ( (byte_4C22F41 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&StringLiteral_19056/*"error"*/);
    byte_4C22F41 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19056/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v9, 0);
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

  if ( (byte_4C22F40 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C22F40 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v6, 0);
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
    sub_1C2D6EC(this, method);
  return baseItem->fields._WaveEnemyClassIds_k__BackingField;
}


void PartyServantListViewItem__set_FriendshipUpValTuple(
        PartyServantListViewItem_o *this,
        System_ValueTuple_int__int__EventCombineEntity_CalcType__array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._FriendshipUpValTuple_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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