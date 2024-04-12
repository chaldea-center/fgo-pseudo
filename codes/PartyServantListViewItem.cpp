void __fastcall PartyServantListViewItem___cctor(const MethodInfo *method)
{
  PartyServantListViewItem_c *v1; // x8

  if ( (byte_42B3985 & 1) == 0 )
  {
    sub_B52984(&PartyServantListViewItem_TypeInfo);
    byte_42B3985 = 1;
  }
  PartyServantListViewItem_TypeInfo->static_fields->PRIORITY_NORMAL = 0LL;
  v1 = PartyServantListViewItem_TypeInfo;
  PartyServantListViewItem_TypeInfo->static_fields->PRIORITY_TOP = 10LL;
  v1->static_fields->PRIORITY_LOWEST = -10LL;
  v1->static_fields->PRIORITY_LOWEST_HEROIN_LEAVE = -20LL;
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
  IconLabelInfo_o *v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  IconLabelInfo_o *v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  IconLabelInfo_o *v30; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  int64_t Instance; // x0
  const MethodInfo *v38; // x1
  struct PartyOrganizationListViewItem_o *Member; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v66; // x21
  __int64 v67; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v68; // x20
  struct ServantEntity_o *v69; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // x20
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  ServantLimitMaster_o *v77; // x21
  struct UserServantEntity_o *v78; // x8
  int32_t v79; // w28
  ServantLimitEntity_o *v80; // x21
  UserServantEntity_o *v81; // x8
  __int128 v82; // q1
  UserServantCollectionMaster_o *v83; // x28
  int64_t v84; // x23
  UserServantCollectionEntity_o *v85; // x28
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  int32_t i; // w21
  PartyOrganizationListViewItem_o *v105; // x28
  UserServantEntity_o *v106; // x8
  __int128 v107; // q0
  struct UserServantEntity_o *v108; // x8
  __int128 v109; // q0
  int64_t v110; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v111; // x8
  __int64 v112; // x23
  __int64 v113; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  int v115; // w23
  struct ServantEntity_o *v116; // x8
  __int64 v117; // x23
  __int64 v118; // x25
  int32_t v119; // w28
  int32_t v120; // w23
  int32_t IncludedRestrictionIds; // w0
  BalanceConfig_c *v122; // x0
  System_Int64_array *EquipList; // x0
  const MethodInfo *v124; // x2
  int32_t cost; // w19
  UserServantEntity_o *v126; // x8
  bool IsChoice; // w0
  UserServantEntity_o *v128; // x8
  __int128 v129; // q0
  __int64 v130; // x19
  bool v131; // zf
  bool v132; // w8
  UserServantEntity_o *v133; // x8
  bool IsLeave; // w0
  const MethodInfo *v135; // x1
  UserServantEntity_o *v136; // x8
  UserServantEntity_o *v137; // x8
  bool IsUniqueIndividualityRestriction_21514628; // w0
  const MethodInfo *v139; // x1
  struct QuestRestrictionInfo_o *v140; // x8
  UserEventServantFatigueMaster_o *v141; // x21
  int32_t eventId; // w28
  __int64 v143; // x23
  __int64 v144; // x25
  int64_t v145; // x19
  bool AllOutBattleAlreadyUsed; // w0
  struct QuestRestrictionInfo_o *v147; // x8
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x20
  UserServantEntity_o *v149; // x8
  UserEventDataLostEntity_o *v150; // x20
  __int64 v151; // x21
  __int64 v152; // x23
  UserServantEntity_o *v153; // x9
  UserEventDataLostEntity_o *v154; // x20
  __int64 v155; // x21
  __int64 v156; // x28
  int32_t v157; // w25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr10_16
  UserServantEntity_o *v159; // x8
  int64_t v160; // x20
  __int64 v161; // x21
  __int64 v162; // x23
  int32_t v163; // w21
  int32_t Rarity; // w28
  const MethodInfo *v165; // x7
  System_String_o **p_skillName; // x1
  int *p_actMaxRarity; // x2
  int32_t v168; // w3
  int32_t v169; // w4
  int32_t partyIndex; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v171; // kr20_16
  UserServantEntity_o *v172; // x8
  int64_t v173; // x20
  __int64 v174; // x21
  __int64 v175; // x23
  int32_t v176; // w21
  int32_t v177; // w27
  struct QuestRestrictionInfo_o *v178; // x8
  EventServantPointRankMaster_o *v179; // x20
  UserServantEntity_o *v180; // x8
  __int128 v181; // q0
  UserEventServantPointMaster_o *v182; // x21
  int64_t v183; // x26
  int32_t *p_SvtPoint_k__BackingField; // x19
  int32_t v185; // w21
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  System_Collections_Generic_List_int__o *v188; // x20
  PartyListViewItem_array *v189; // x9
  __int64 v190; // x8
  unsigned __int64 v191; // x25
  int32_t v192; // w19
  PartyListViewItem_o *v193; // x21
  int32_t j; // w26
  PartyOrganizationListViewItem_o *v195; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v196; // kr30_16
  UserServantEntity_o *v197; // x8
  struct UserServantEntity_o *v198; // x9
  __int128 v199; // q0
  System_Int64_array *v200; // x0
  const MethodInfo *v201; // x2
  __int64 v202; // x21
  __int64 v203; // x23
  System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___o *v204; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v205; // x24
  EventQuestMaster_o *v206; // x21
  _BOOL8 v207; // x0
  __int64 v208; // x1
  EventCampaignEntity_o *current; // x24
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x26
  __int64 v211; // x27
  __int64 v212; // x28
  int32_t v213; // w1
  int32_t v214; // w26
  int32_t FriendshipBonusValue; // w0
  int32_t calcType; // w3
  int32_t v217; // w2
  const MethodInfo_2C0F670 *v218; // x5
  __int64 v219; // x0
  __int64 v220; // x1
  System_Int32_array **v221; // x0
  System_String_array **v222; // x2
  System_String_array **v223; // x3
  System_Boolean_array **v224; // x4
  System_Int32_array **v225; // x5
  System_Int32_array *v226; // x6
  System_Int32_array *v227; // x7
  UserServantEntity_o *v228; // x8
  System_Int32_array **SkillCategoryIdList; // x0
  System_String_array **v230; // x2
  System_String_array **v231; // x3
  System_Boolean_array **v232; // x4
  System_Int32_array **v233; // x5
  System_Int32_array *v234; // x6
  System_Int32_array *v235; // x7
  System_Int32_array **TreasureDeviceCategoryIdList; // x0
  System_String_array **v237; // x2
  System_String_array **v238; // x3
  System_Boolean_array **v239; // x4
  System_Int32_array **v240; // x5
  System_Int32_array *v241; // x6
  System_Int32_array *v242; // x7
  BalanceConfig_c *v243; // x8
  int v244; // w19
  __int64 v245; // x0
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+8h] [xbp-1C8h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+10h] [xbp-1C0h]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+28h] [xbp-1A8h]
  struct PartyOrganizationListViewItem_o **p_baseItem; // [xsp+30h] [xbp-1A0h]
  PartyServantListViewItem_o *v252; // [xsp+30h] [xbp-1A0h]
  UserServantEntity_o **p_userServantEntity; // [xsp+38h] [xbp-198h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v254; // [xsp+40h] [xbp-190h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v255; // [xsp+60h] [xbp-170h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v256; // [xsp+80h] [xbp-150h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v257; // [xsp+A0h] [xbp-130h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v258; // [xsp+C0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v259; // [xsp+E0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v260; // [xsp+100h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v261; // [xsp+120h] [xbp-B0h] BYREF
  UserEventServantPointEntity_o *v262; // [xsp+138h] [xbp-98h] BYREF
  int32_t actMaxRarity; // [xsp+144h] [xbp-8Ch] BYREF
  System_String_o *skillName; // [xsp+148h] [xbp-88h] BYREF
  int v265; // [xsp+154h] [xbp-7Ch] BYREF
  __int64 v266; // [xsp+158h] [xbp-78h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+160h] [xbp-70h] BYREF
  int64_t recoverAt; // [xsp+168h] [xbp-68h] BYREF
  int32_t friendshipRank[3]; // [xsp+174h] [xbp-5Ch] BYREF
  System_ValueTuple_int__int__EventCombineEntity_CalcType__o v270; // 0:x0.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v271; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v272; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v273; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v274; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v275; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v276; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v277; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v278; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v279; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v280; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v281; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v282; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v283; // 0:x0.16

  if ( (byte_42B3979 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&CommonRestrictionMaster_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_B52984(&IconLabelInfo_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B52984(&Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__);
    byte_42B3979 = 1;
  }
  friendshipRank[0] = 0;
  entity = 0LL;
  recoverAt = 0LL;
  v266 = 0LL;
  v265 = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v262 = 0LL;
  memset(&v261, 0, sizeof(v261));
  v16 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0LL);
  this->fields.iconLabelInfo1 = v16;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v23, 0LL);
  this->fields.iconLabelInfo2 = v23;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v30, 0LL);
  this->fields.iconLabelInfo3 = v30;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo3,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_253;
  Member = PartyListViewItem__GetMember(partyItem, num, 0LL);
  this->fields.baseItem = Member;
  p_baseItem = &this->fields.baseItem;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseItem,
    (System_Int32_array **)Member,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  baseItem = this->fields.baseItem;
  this->fields._PartyListViewItemMenuKind_k__BackingField = partyItem->fields.menuKind;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_253;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0LL;
  this->fields.userServantEntity = userServantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  p_userServantEntity = &this->fields.userServantEntity;
  if ( !this->fields.userServantEntity )
    goto LABEL_253;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_253;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v67 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v66 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v68 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v271.fields.currentCryptoKey = v67;
  *(_QWORD *)&v271.fields.fakeValue = v66;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v271, 0LL);
  if ( !v68 )
    goto LABEL_253;
  v69 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v68,
                                    Instance,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = v69;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)v69,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_253;
  v77 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.svtId, 0LL);
  v78 = this->fields.userServantEntity;
  if ( !v78 )
    goto LABEL_253;
  v79 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v78->fields.limitCount, 0LL);
  if ( !v77 )
    goto LABEL_253;
  v80 = ServantLimitMaster__GetEntity(v77, v79, Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_253;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v81 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_253;
  v82 = *(_OWORD *)&v81->fields.userId.fields.fakeValue;
  v83 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v260.fields.currentCryptoKey = *(_OWORD *)&v81->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v260.fields.fakeValue = v82;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v259 = v260;
  v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v259, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.svtId, 0LL);
  if ( !v83 )
    goto LABEL_253;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v83, v84, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_253;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !v80 )
    goto LABEL_253;
  this->fields.rarityId = v80->fields.rarity;
  if ( !userServantEntity )
    goto LABEL_253;
  v85 = (UserServantCollectionEntity_o *)Instance;
  Instance = UserServantEntity__getFrameType(userServantEntity, 0LL);
  this->fields.frameType = Instance;
  if ( !v85 )
    goto LABEL_253;
  UserServantCollectionEntity__getFriendShipRankInfo(v85, friendshipRank, &this->fields.friendshipMax, 0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank[0], 0LL);
  this->fields.isBase = 0;
  *(_WORD *)&this->fields.isCostOver = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.equipUserServantEntity, 0LL, v86, v87, v88, v89, v90, v91);
  this->fields.equipServantEntity = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v92, v93, v94, v95, v96, v97);
  this->fields.equipIdList = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v98, v99, v100, v101, v102, v103);
  for ( i = 0; ; ++i )
  {
    v122 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v122 = BalanceConfig_TypeInfo;
    }
    if ( i >= v122->static_fields->DeckMemberMax )
      break;
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, i, 0LL);
    if ( !Instance )
      goto LABEL_253;
    v105 = (PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 112) )
    {
      v106 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_253;
      v107 = *(_OWORD *)&v106->fields.id.fields.fakeValue;
      *(_OWORD *)&v260.fields.currentCryptoKey = *(_OWORD *)&v106->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v260.fields.fakeValue = v107;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v258 = v260;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v258, 0LL);
      v108 = v105->fields.userServantEntity;
      if ( !v108 )
        goto LABEL_253;
      v109 = *(_OWORD *)&v108->fields.id.fields.fakeValue;
      v110 = Instance;
      *(_OWORD *)&v257.fields.currentCryptoKey = *(_OWORD *)&v108->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v257.fields.fakeValue = v109;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v257, 0LL);
      if ( v110 == Instance )
      {
        this->fields.isSame = 0;
        this->fields.isBase = num == i;
        this->fields.partyIndex = i;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v105, 0LL);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v124);
        break;
      }
      if ( num != i )
      {
        v111 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_253;
        v113 = *(_QWORD *)&v111[2].fields.currentCryptoKey;
        v112 = *(_QWORD *)&v111[2].fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v272.fields.currentCryptoKey = v113;
        *(_QWORD *)&v272.fields.fakeValue = v112;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v272, 0LL);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v105->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_253;
        v115 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(servantEntity[2], 0LL);
        if ( v115 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else if ( this->fields.commonRestrictionId == -1 )
        {
          v116 = v105->fields.servantEntity;
          if ( !v116 )
            goto LABEL_253;
          v118 = *(_QWORD *)&v116->fields.baseSvtId.fields.currentCryptoKey;
          v117 = *(_QWORD *)&v116->fields.baseSvtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v273.fields.currentCryptoKey = v118;
          *(_QWORD *)&v273.fields.fakeValue = v117;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v273, 0LL);
          if ( !*p_servantEntity )
            goto LABEL_253;
          v119 = Instance;
          v120 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420((*p_servantEntity)[2], 0LL);
          if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
          }
          IncludedRestrictionIds = CommonRestrictionMaster__GetIncludedRestrictionIds(v119, v120, 0LL);
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
  v126 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v126 )
    goto LABEL_253;
  IsChoice = UserServantEntity__IsChoice(v126, 0LL);
  *(_WORD *)&this->fields.isSwapLock = 0;
  *(_WORD *)&this->fields.isLockMode = 0;
  this->fields.isChoice = IsChoice;
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_253;
  v128 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_253;
  v129 = *(_OWORD *)&v128->fields.id.fields.fakeValue;
  v130 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&v260.fields.currentCryptoKey = *(_OWORD *)&v128->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v260.fields.fakeValue = v129;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v256 = v260;
  v131 = v130 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v256, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  v132 = v131;
  this->fields.isPush = v132;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_253;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v133 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v133 )
    goto LABEL_253;
  IsLeave = UserServantEntity__IsLeave(v133, 0LL);
  this->fields.isEventUpVal = 0;
  this->fields.isLeave = IsLeave;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v135);
  v136 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v136 )
    goto LABEL_253;
  Instance = UserServantEntity__getUniqueSvtRestriction_21514228(
               v136,
               this->fields.questRestrictionInfo,
               partyItem,
               num,
               this->fields.partyIndex,
               0LL);
  v137 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v137 )
    goto LABEL_253;
  IsUniqueIndividualityRestriction_21514628 = UserServantEntity__IsUniqueIndividualityRestriction_21514628(
                                                v137,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                this->fields.partyIndex,
                                                0LL);
  this->fields.isFatigureRecover = 0;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_21514628;
  this->fields.fatigureTime = -1LL;
  v140 = this->fields.questRestrictionInfo;
  if ( v140 && v140->fields.isFatigure )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_253;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !*p_questRestrictionInfo )
      goto LABEL_253;
    v141 = (UserEventServantFatigueMaster_o *)Instance;
    eventId = (*p_questRestrictionInfo)->fields.eventId;
    v144 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v143 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v274.fields.currentCryptoKey = v144;
    *(_QWORD *)&v274.fields.fakeValue = v143;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v274, 0LL);
    if ( !v141 )
      goto LABEL_253;
    if ( UserEventServantFatigueMaster__GetFatigueInfo(
           v141,
           &recoverAt,
           &this->fields.isFatigureRecover,
           eventId,
           Instance,
           0LL) )
    {
      v145 = recoverAt;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      if ( v145 > NetworkManager__getTime(0LL) )
        this->fields.fatigureTime = recoverAt;
    }
  }
  AllOutBattleAlreadyUsed = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v139);
  v147 = this->fields.questRestrictionInfo;
  this->fields._IsAllOutBattle_k__BackingField = AllOutBattleAlreadyUsed;
  if ( v147 && v147->fields.isDataLostBattle )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
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
      v149 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_253;
      v150 = entity;
      v152 = *(_QWORD *)&v149->fields.svtId.fields.currentCryptoKey;
      v151 = *(_QWORD *)&v149->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v275.fields.currentCryptoKey = v152;
      *(_QWORD *)&v275.fields.fakeValue = v151;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v275, 0LL);
      if ( !v150 )
        goto LABEL_253;
      Instance = UserEventDataLostEntity__IsRestart(v150, Instance, 0LL);
      v153 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_253;
      v154 = entity;
      v156 = *(_QWORD *)&v153->fields.svtId.fields.currentCryptoKey;
      v155 = *(_QWORD *)&v153->fields.svtId.fields.fakeValue;
      if ( (Instance & 1) != 0 )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v276.fields.currentCryptoKey = v156;
        *(_QWORD *)&v276.fields.fakeValue = v155;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v276, 0LL);
        if ( !v154 )
          goto LABEL_253;
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(v154, Instance, 0LL);
      }
      else
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v283.fields.currentCryptoKey = v156;
        *(_QWORD *)&v283.fields.fakeValue = v155;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v283, 0LL);
        if ( !v154 )
          goto LABEL_253;
        if ( UserEventDataLostEntity__IsDataLost(v154, Instance, 0LL) )
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
    v157 = (*p_questRestrictionInfo)->fields.eventId;
  else
    v157 = -1;
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(EquipSvtId, 0LL) >= 1 )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v159 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_253;
    v160 = Instance;
    v162 = *(_QWORD *)&v159->fields.svtId.fields.currentCryptoKey;
    v161 = *(_QWORD *)&v159->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v277.fields.currentCryptoKey = v162;
    *(_QWORD *)&v277.fields.fakeValue = v161;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v277, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_253;
    v163 = Instance;
    Rarity = UserServantEntity__getRarity(*p_userServantEntity, 0LL);
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, num, 0LL);
    if ( !Instance )
      goto LABEL_253;
    v278 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v278, 0LL);
    if ( !v160 )
      goto LABEL_253;
    p_skillName = (System_String_o **)&v266;
    p_actMaxRarity = &v265;
    v168 = v163;
    v169 = Rarity;
LABEL_154:
    this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                     (PartyOrganizationUtility_o *)Instance,
                                     p_skillName,
                                     p_actMaxRarity,
                                     v168,
                                     v169,
                                     Instance,
                                     v157,
                                     v165);
    goto LABEL_155;
  }
  partyIndex = this->fields.partyIndex;
  if ( (partyIndex & 0x80000000) == 0 )
  {
LABEL_138:
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, partyIndex, 0LL);
    if ( !Instance )
      goto LABEL_253;
    v171 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v171, 0LL) < 1 )
      goto LABEL_155;
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v172 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_253;
    v173 = Instance;
    v175 = *(_QWORD *)&v172->fields.svtId.fields.currentCryptoKey;
    v174 = *(_QWORD *)&v172->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v279.fields.currentCryptoKey = v175;
    *(_QWORD *)&v279.fields.fakeValue = v174;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v279, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_253;
    v176 = Instance;
    v177 = UserServantEntity__getRarity(*p_userServantEntity, 0LL);
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, this->fields.partyIndex, 0LL);
    if ( !Instance )
      goto LABEL_253;
    v280 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v280, 0LL);
    if ( !v173 )
      goto LABEL_253;
    p_skillName = &skillName;
    p_actMaxRarity = &actMaxRarity;
    v168 = v176;
    v169 = v177;
    goto LABEL_154;
  }
LABEL_155:
  v178 = this->fields.questRestrictionInfo;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  this->fields._SvtPointRank_k__BackingField = 0;
  this->fields._SvtPoint_k__BackingField = 0;
  if ( v178 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    if ( !Instance )
      goto LABEL_253;
    v179 = (EventServantPointRankMaster_o *)Instance;
    if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v157, 0LL) )
    {
      this->fields._IsDispSvtPoint_k__BackingField = 1;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v180 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_253;
      v181 = *(_OWORD *)&v180->fields.userId.fields.fakeValue;
      v182 = (UserEventServantPointMaster_o *)Instance;
      *(_OWORD *)&v260.fields.currentCryptoKey = *(_OWORD *)&v180->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v260.fields.fakeValue = v181;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v255 = v260;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v255, 0LL);
      if ( !*p_userServantEntity )
        goto LABEL_253;
      v183 = Instance;
      Instance = UserServantEntity__getSvtId(*p_userServantEntity, 0LL);
      if ( !v182 )
        goto LABEL_253;
      p_SvtPoint_k__BackingField = &this->fields._SvtPoint_k__BackingField;
      if ( UserEventServantPointMaster__TryGetEntity(v182, &v262, v183, v157, Instance, 0LL) )
      {
        Instance = (int64_t)v262;
        if ( !v262 )
          goto LABEL_253;
        *p_SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v262, 0LL);
      }
      Instance = (int64_t)*p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_253;
      v185 = *p_SvtPoint_k__BackingField;
      SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
      EnableEntity = EventServantPointRankMaster__GetEnableEntity(v179, v157, v185, SvtId, 0LL);
      if ( EnableEntity )
        this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
    }
  }
  v252 = this;
  if ( this->fields._PartyListViewItemMenuKind_k__BackingField == 9 )
  {
    v188 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v188,
      (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
    v189 = baseDeckItemList;
    if ( !baseDeckItemList )
      goto LABEL_253;
    this->fields._MaxWave_k__BackingField = *(_QWORD *)&baseDeckItemList->max_length;
    v190 = *(_QWORD *)&baseDeckItemList->max_length;
    if ( (int)v190 < 1 )
      goto LABEL_204;
    v191 = 0LL;
    v192 = 1;
    do
    {
      if ( v191 >= (unsigned int)v190 )
      {
        v245 = sub_B52A88(Instance);
        sub_B52A28(v245, 0LL);
      }
      v193 = v189->m_Items[v191];
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
        if ( !v193 )
          goto LABEL_253;
        Instance = (int64_t)PartyListViewItem__GetMember(v193, j, 0LL);
        if ( !Instance )
          goto LABEL_253;
        v195 = (PartyOrganizationListViewItem_o *)Instance;
        if ( *(_QWORD *)(Instance + 112) )
        {
          v196 = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v196, 0LL);
          if ( !v188 )
            goto LABEL_253;
          System_Collections_Generic_List_int___Add(
            v188,
            Instance,
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          if ( v192 )
          {
            v197 = *p_userServantEntity;
            if ( !*p_userServantEntity )
              goto LABEL_253;
            v198 = v195->fields.userServantEntity;
            if ( !v198 )
              goto LABEL_253;
            v199 = *(_OWORD *)&v198->fields.id.fields.fakeValue;
            *(_OWORD *)&v254.fields.currentCryptoKey = *(_OWORD *)&v198->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v254.fields.fakeValue = v199;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_44790048(&v197->fields.id, &v254, 0LL) )
            {
              v200 = PartyOrganizationListViewItem__GetEquipList(v195, 0LL);
              PartyServantListViewItem__SetEquipStatus(this, v200, v201);
              this->fields._OrganizedWave_k__BackingField = v192;
              v192 = 0;
            }
          }
        }
      }
      v189 = baseDeckItemList;
      ++v191;
      if ( v192 )
        ++v192;
      else
        v192 = 0;
      LODWORD(v190) = baseDeckItemList->max_length;
    }
    while ( (__int64)v191 < (int)v190 );
    if ( v192 )
    {
LABEL_204:
      v203 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v202 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v281.fields.currentCryptoKey = v203;
      *(_QWORD *)&v281.fields.fakeValue = v202;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v281, 0LL);
      if ( !v188 )
        goto LABEL_253;
      if ( System_Collections_Generic_List_int___Contains(
             v188,
             Instance,
             (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        this->fields.isSame = 1;
      }
    }
  }
  else
  {
    this->fields._OrganizedWave_k__BackingField = 0;
  }
  v204 = (System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___o *)sub_B52A54(System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
  System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType_____ctor(
    v204,
    (const MethodInfo_2FA476C *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
  if ( *p_questRestrictionInfo )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_253;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    if ( !Instance )
      goto LABEL_253;
    Instance = (int64_t)EventCampaignMaster__GetFriendshipUpCampaigns((EventCampaignMaster_o *)Instance, 0LL);
    if ( Instance )
    {
      v205 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_253;
      v206 = (EventQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventQuestMaster___);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v260,
        v205,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
      v261 = *(System_Collections_Generic_List_Enumerator_T__o *)&v260.fields.currentCryptoKey;
      while ( 1 )
      {
        v207 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 &v261,
                 (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
        if ( !v207 )
          break;
        current = (EventCampaignEntity_o *)v261.fields.current;
        if ( !v261.fields.current )
          sub_B52A5C(v207, v208);
        monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v261.fields.current[2].monitor;
        if ( monitor && monitor[1].monitor )
        {
          v212 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
          v211 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v282.fields.currentCryptoKey = v212;
          *(_QWORD *)&v282.fields.fakeValue = v211;
          v213 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v282, 0LL);
          v207 = System_Linq_Enumerable__Contains_int_(
                   monitor,
                   v213,
                   (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( !v207 )
            continue;
        }
        if ( !*p_questRestrictionInfo )
          sub_B52A5C(v207, v208);
        if ( !v206 )
          sub_B52A5C(v207, v208);
        if ( !EventQuestMaster__IsEventNotIncluded(
                v206,
                current->fields.eventId,
                (*p_questRestrictionInfo)->fields.questId,
                (*p_questRestrictionInfo)->fields.questPhase,
                7,
                0LL) )
        {
          v214 = current->fields.eventId;
          FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0LL);
          calcType = current->fields.calcType;
          v217 = FriendshipBonusValue;
          LODWORD(v260.fields.hiddenValue) = 0;
          v260.fields.currentCryptoKey = 0LL;
          *(_QWORD *)&v270.fields.Item1 = &v260;
          v270.fields.Item3 = v214;
          System_ValueTuple_int__int__EventCombineEntity_CalcType____ctor(
            v270,
            v217,
            calcType,
            Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__,
            v218);
          if ( !v204 )
            sub_B52A5C(v219, v220);
          System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____Add(
            v204,
            *(System_ValueTuple_int__int__EventCombineEntity_CalcType__o *)&v260.fields.currentCryptoKey,
            (const MethodInfo_2FA5510 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__);
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v261,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    }
  }
  if ( !v204 )
    goto LABEL_253;
  v221 = (System_Int32_array **)System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ToArray(
                                  v204,
                                  (const MethodInfo_2FA77D8 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
  v252->fields._FriendshipUpValTuple_k__BackingField = (struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *)v221;
  sub_B52920(
    (BattleServantConfConponent_o *)&v252->fields._FriendshipUpValTuple_k__BackingField,
    v221,
    v222,
    v223,
    v224,
    v225,
    v226,
    v227);
  Instance = (int64_t)v252->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_253;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v228 = v252->fields.userServantEntity;
  v252->fields.dispLimitCount = Instance;
  if ( !v228 )
    goto LABEL_253;
  SkillCategoryIdList = (System_Int32_array **)UserServantEntity__GetSkillCategoryIdList(v228, -1, 0LL);
  v252->fields.skillCategoryIdList = (struct System_Int32_array *)SkillCategoryIdList;
  sub_B52920(
    (BattleServantConfConponent_o *)&v252->fields.skillCategoryIdList,
    SkillCategoryIdList,
    v230,
    v231,
    v232,
    v233,
    v234,
    v235);
  Instance = (int64_t)v252->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_253;
  TreasureDeviceCategoryIdList = (System_Int32_array **)UserServantEntity__GetTreasureDeviceCategoryIdList(
                                                          (UserServantEntity_o *)Instance,
                                                          0,
                                                          0LL);
  v252->fields.tdCategoryIdList = (struct System_Int32_array *)TreasureDeviceCategoryIdList;
  sub_B52920(
    (BattleServantConfConponent_o *)&v252->fields.tdCategoryIdList,
    TreasureDeviceCategoryIdList,
    v237,
    v238,
    v239,
    v240,
    v241,
    v242);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_253;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_253;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        v252->fields.classId,
                        (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_253;
  v252->fields.priority = *(_DWORD *)(Instance + 48);
  PartyServantListViewItem__InitAfterSecondSort(v252, v38);
  Instance = (int64_t)v252->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_253;
  v243 = BalanceConfig_TypeInfo;
  v244 = *(_DWORD *)(Instance + 276);
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v243 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  v252->fields.hpReinforceValue = v243->static_fields->StatusUpAdjustHp * v244;
  if ( !Instance )
    goto LABEL_253;
  v252->fields.atkReinforceValue = v243->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
  UserServantEntity__getAdjustMaxData(
    (UserServantEntity_o *)Instance,
    &v252->fields.nowMaxHpReinforceValue,
    &v252->fields.nowMaxAtkReinforceValue,
    0LL);
  Instance = (int64_t)v252->fields.iconLabelInfo1;
  v252->fields.amountSortValue = -1LL;
  if ( !Instance
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (int64_t)*p_iconLabelInfo2) == 0)
    || (IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL), (Instance = (int64_t)*p_iconLabelInfo3) == 0) )
  {
LABEL_253:
    sub_B52A5C(Instance, v38);
  }
  IconLabelInfo__Clear((IconLabelInfo_o *)Instance, 0LL);
}


void __fastcall PartyServantListViewItem___ctor_31903296(
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
  IconLabelInfo_o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  IconLabelInfo_o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  IconLabelInfo_o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int64_t Instance; // x0
  const MethodInfo *v39; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct UserServantEntity_o **p_userServantEntity; // x22
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v68; // x21
  __int64 v69; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v70; // x20
  struct ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // x27
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  ServantLimitMaster_o *v79; // x20
  struct UserServantEntity_o *v80; // x8
  int32_t v81; // w21
  ServantLimitEntity_o *v82; // x20
  struct UserServantEntity_o *v83; // x8
  __int128 v84; // q1
  UserServantCollectionMaster_o *v85; // x21
  int64_t v86; // x26
  UserServantCollectionEntity_o *v87; // x21
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
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
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  int32_t v107; // w28
  PartyOrganizationListViewItem_o *v108; // x20
  struct UserServantEntity_o *v109; // x8
  __int128 v110; // q0
  struct UserServantEntity_o *v111; // x8
  __int128 v112; // q0
  int64_t v113; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v114; // x8
  __int64 v115; // x21
  __int64 v116; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  int v118; // w21
  struct ServantEntity_o *v119; // x8
  __int64 v120; // x20
  __int64 v121; // x21
  int32_t v122; // w20
  int32_t v123; // w21
  System_Int64_array *EquipList; // x0
  const MethodInfo *v125; // x2
  int32_t cost; // w20
  UserServantEntity_o *v127; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v129; // x8
  bool IsLeave; // w0
  const MethodInfo *v131; // x1
  UserServantEntity_o *v132; // x8
  UserServantEntity_o *v133; // x8
  bool IsUniqueIndividualityRestriction_21514628; // w0
  const MethodInfo *v135; // x1
  struct QuestRestrictionInfo_o *v136; // x8
  UserEventServantFatigueMaster_o *v137; // x21
  int32_t eventId; // w23
  __int64 v139; // x24
  __int64 v140; // x25
  int64_t v141; // x20
  UserServantEntity_o *v142; // x8
  UserServantEntity_o *v143; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  int v158; // w20
  BalanceConfig_c *v159; // x8
  struct PartyOrganizationListViewItem_o **p_baseItem; // [xsp+0h] [xbp-110h]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+8h] [xbp-108h]
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+10h] [xbp-100h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+18h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v164; // [xsp+20h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v165; // [xsp+40h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v166; // [xsp+60h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v167; // [xsp+80h] [xbp-90h]
  int64_t recoverAt; // [xsp+A8h] [xbp-68h] BYREF
  int32_t friendshipRank[3]; // [xsp+B4h] [xbp-5Ch] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v170; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v171; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v172; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v173; // 0:x0.16

  if ( (byte_42B397A & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&CommonRestrictionMaster_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B52984(&IconLabelInfo_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B397A = 1;
  }
  friendshipRank[0] = 0;
  recoverAt = 0LL;
  v17 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0LL);
  this->fields.iconLabelInfo1 = v17;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo1,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v24, 0LL);
  this->fields.iconLabelInfo2 = v24;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo2,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (IconLabelInfo_o *)sub_B52A54(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v31, 0LL);
  this->fields.iconLabelInfo3 = v31;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.iconLabelInfo3,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  ListViewItem___ctor_23532700((ListViewItem_o *)this, index, 0LL);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_96;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, num, 0LL);
  this->fields.baseItem = MemberItem;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseItem,
    (System_Int32_array **)MemberItem,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  baseItem = this->fields.baseItem;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_96;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.setupInfo,
    (System_Int32_array **)setupInfo,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  if ( !this->fields.userServantEntity )
    goto LABEL_96;
  p_baseItem = &this->fields.baseItem;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v69 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v68 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v70 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v170.fields.currentCryptoKey = v69;
  *(_QWORD *)&v170.fields.fakeValue = v68;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v170, 0LL);
  if ( !v70 )
    goto LABEL_96;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v70,
                                       Instance,
                                       (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = Entity;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)Entity,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  v79 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.svtId, 0LL);
  v80 = this->fields.userServantEntity;
  if ( !v80 )
    goto LABEL_96;
  v81 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v80->fields.limitCount, 0LL);
  if ( !v79 )
    goto LABEL_96;
  v82 = ServantLimitMaster__GetEntity(v79, v81, Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v83 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_96;
  v84 = *(_OWORD *)&v83->fields.userId.fields.fakeValue;
  v85 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v167.fields.currentCryptoKey = *(_OWORD *)&v83->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v167.fields.fakeValue = v84;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v166 = v167;
  v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v166, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(this->fields.svtId, 0LL);
  if ( !v85 )
    goto LABEL_96;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v85, v86, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_96;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !v82 )
    goto LABEL_96;
  this->fields.rarityId = v82->fields.rarity;
  if ( !userServantEntity )
    goto LABEL_96;
  v87 = (UserServantCollectionEntity_o *)Instance;
  Instance = UserServantEntity__getFrameType(userServantEntity, 0LL);
  this->fields.frameType = Instance;
  if ( !v87 )
    goto LABEL_96;
  UserServantCollectionEntity__getFriendShipRankInfo(v87, friendshipRank, &this->fields.friendshipMax, 0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank[0], 0LL);
  this->fields.isBase = 0;
  *(_WORD *)&this->fields.isCostOver = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.equipUserServantEntity, 0LL, v88, v89, v90, v91, v92, v93);
  this->fields.equipServantEntity = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v94, v95, v96, v97, v98, v99);
  this->fields.equipIdList = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.equipIdList, 0LL, v100, v101, v102, v103, v104, v105);
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_96;
  v107 = 0;
  while ( v107 < (signed int)memberItemList->max_length )
  {
    Instance = (int64_t)WarBoardPartyListViewItem__GetMemberItem(partyItem, v107, 0LL);
    if ( !Instance )
      goto LABEL_96;
    v108 = (PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 112) )
    {
      v109 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_96;
      v110 = *(_OWORD *)&v109->fields.id.fields.fakeValue;
      *(_OWORD *)&v167.fields.currentCryptoKey = *(_OWORD *)&v109->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v167.fields.fakeValue = v110;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v165 = v167;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v165, 0LL);
      v111 = v108->fields.userServantEntity;
      if ( !v111 )
        goto LABEL_96;
      v112 = *(_OWORD *)&v111->fields.id.fields.fakeValue;
      v113 = Instance;
      *(_OWORD *)&v164.fields.currentCryptoKey = *(_OWORD *)&v111->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v164.fields.fakeValue = v112;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v164, 0LL);
      if ( v113 == Instance )
      {
        this->fields.isSame = 0;
        this->fields.isBase = num == v107;
        this->fields.partyIndex = v107;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v108, 0LL);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v125);
        break;
      }
      if ( num != v107 )
      {
        v114 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_96;
        v116 = *(_QWORD *)&v114[2].fields.currentCryptoKey;
        v115 = *(_QWORD *)&v114[2].fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v171.fields.currentCryptoKey = v116;
        *(_QWORD *)&v171.fields.fakeValue = v115;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v171, 0LL);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v108->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_96;
        v118 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(servantEntity[2], 0LL);
        if ( v118 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else if ( this->fields.commonRestrictionId == -1 )
        {
          v119 = v108->fields.servantEntity;
          if ( !v119 )
            goto LABEL_96;
          v121 = *(_QWORD *)&v119->fields.baseSvtId.fields.currentCryptoKey;
          v120 = *(_QWORD *)&v119->fields.baseSvtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v172.fields.currentCryptoKey = v121;
          *(_QWORD *)&v172.fields.fakeValue = v120;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v172, 0LL);
          if ( !*p_servantEntity )
            goto LABEL_96;
          v122 = Instance;
          v123 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420((*p_servantEntity)[2], 0LL);
          if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
          }
          Instance = CommonRestrictionMaster__GetIncludedRestrictionIds(v122, v123, 0LL);
          if ( (Instance & 0x80000000) == 0 )
            this->fields.commonRestrictionId = Instance;
        }
      }
    }
    memberItemList = partyItem->fields.memberItemList;
    ++v107;
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
  v127 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v127 )
    goto LABEL_96;
  IsChoice = UserServantEntity__IsChoice(v127, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  *(_DWORD *)&this->fields.isLockMode = 0;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_96;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v129 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v129 )
    goto LABEL_96;
  IsLeave = UserServantEntity__IsLeave(v129, 0LL);
  this->fields.isEventUpVal = 0;
  this->fields.isLeave = IsLeave;
  *(_QWORD *)&this->fields.bonusKind = 0LL;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v131);
  v132 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v132 )
    goto LABEL_96;
  Instance = UserServantEntity__getUniqueSvtRestriction_21514228(
               v132,
               this->fields.questRestrictionInfo,
               0LL,
               num,
               this->fields.partyIndex,
               0LL);
  v133 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v133 )
    goto LABEL_96;
  IsUniqueIndividualityRestriction_21514628 = UserServantEntity__IsUniqueIndividualityRestriction_21514628(
                                                v133,
                                                this->fields.questRestrictionInfo,
                                                0LL,
                                                num,
                                                this->fields.partyIndex,
                                                0LL);
  this->fields.isFatigureRecover = 0;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_21514628;
  this->fields.fatigureTime = -1LL;
  v136 = this->fields.questRestrictionInfo;
  if ( v136 && v136->fields.isFatigure )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
      if ( *p_questRestrictionInfo )
      {
        v137 = (UserEventServantFatigueMaster_o *)Instance;
        eventId = (*p_questRestrictionInfo)->fields.eventId;
        v140 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v139 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v173.fields.currentCryptoKey = v140;
        *(_QWORD *)&v173.fields.fakeValue = v139;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v173, 0LL);
        if ( v137 )
        {
          if ( UserEventServantFatigueMaster__GetFatigueInfo(
                 v137,
                 &recoverAt,
                 &this->fields.isFatigureRecover,
                 eventId,
                 Instance,
                 0LL) )
          {
            v141 = recoverAt;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            if ( v141 > NetworkManager__getTime(0LL) )
              this->fields.fatigureTime = recoverAt;
          }
          goto LABEL_81;
        }
      }
    }
LABEL_96:
    sub_B52A5C(Instance, v39);
  }
LABEL_81:
  Instance = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v135);
  v142 = this->fields.userServantEntity;
  this->fields._IsAllOutBattle_k__BackingField = Instance & 1;
  if ( !v142 )
    goto LABEL_96;
  Instance = UserServantEntity__getDispLimitCount(v142, 0, 0LL);
  v143 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v143 )
    goto LABEL_96;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v143, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
    (System_Int32_array **)SkillCategoryIdList,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_96;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
    (System_Int32_array **)TreasureDeviceCategoryIdList,
    v152,
    v153,
    v154,
    v155,
    v156,
    v157);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_96;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_96;
  this->fields.priority = *(_DWORD *)(Instance + 48);
  PartyServantListViewItem__InitAfterSecondSort(this, v39);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_96;
  v158 = *(_DWORD *)(Instance + 276);
  v159 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v159 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  this->fields.hpReinforceValue = v159->static_fields->StatusUpAdjustHp * v158;
  if ( !Instance )
    goto LABEL_96;
  this->fields.atkReinforceValue = v159->static_fields->StatusUpAdjustAtk * *(_DWORD *)(Instance + 272);
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
  if ( (byte_42B397B & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B397B = 1;
  }
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  userServantEntity = v2->fields.userServantEntity;
  if ( !userServantEntity )
    goto LABEL_42;
  v6 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v33.fields.currentCryptoKey = v6;
  *(_QWORD *)&v33.fields.fakeValue = v5;
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v33, 0LL);
  v7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
  if ( !v7 )
    goto LABEL_42;
  v8 = (int)this;
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v7[6], 0LL);
  if ( !v2->fields.userServantEntity )
    goto LABEL_42;
  v9 = (int)this;
  this = (PartyServantListViewItem_o *)UserServantEntity__getDispLimitCount(v2->fields.userServantEntity, 0, 0LL);
  v10 = v2->fields.userServantEntity;
  if ( !v10 )
    goto LABEL_42;
  baseItem = v2->fields.baseItem;
  if ( !baseItem )
    goto LABEL_42;
  v12 = 1;
  if ( !QuestRestrictionInfo__IsRestriction_34152740(
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
      goto LABEL_42;
    if ( QuestRestrictionInfo__IsSupportOnly((QuestRestrictionInfo_o *)this, 0LL) )
      return 1;
    v13 = v2->fields.questRestrictionInfo;
    v14 = *(_QWORD *)&v2->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&v2->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v34.fields.currentCryptoKey = v14;
    *(_QWORD *)&v34.fields.fakeValue = v15;
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v34, 0LL);
    v16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
    if ( !v16 )
      goto LABEL_42;
    v17 = (int)this;
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                           v16[6],
                                           0LL);
    if ( !v2->fields.userServantEntity )
      goto LABEL_42;
    v18 = (int)this;
    this = (PartyServantListViewItem_o *)UserServantEntity__getDispLimitCount(v2->fields.userServantEntity, 0, 0LL);
    if ( !v13 )
      goto LABEL_42;
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
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v35.fields.currentCryptoKey = v20;
    *(_QWORD *)&v35.fields.fakeValue = v21;
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v35, 0LL);
    v22 = v2->fields.baseItem;
    if ( !v22 || !v19 )
      goto LABEL_42;
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
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v36.fields.currentCryptoKey = v27;
        *(_QWORD *)&v36.fields.fakeValue = v26;
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                               v36,
                                               0LL);
        v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
        if ( v28 )
        {
          v29 = (int)this;
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
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
LABEL_42:
    sub_B52A5C(this, method);
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
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t allOutBattleGroupNo; // w20
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x22
  __int64 v9; // x23
  UserEventAlloutBattleMaster_o *v10; // x21
  struct QuestRestrictionInfo_o *v11; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_42B3980 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B3980 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = questRestrictionInfo->fields.allOutBattleGroupNo;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (UserEventAlloutBattleMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v9;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v13, 0LL);
  v11 = this->fields.questRestrictionInfo;
  if ( !v11 || !v10 )
LABEL_14:
    sub_B52A5C(Instance, v6);
  return UserEventAlloutBattleMaster__IsAlreadyUsedServant(
           v10,
           (int32_t)Instance,
           v11->fields.eventId,
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

  if ( (byte_42B3983 & 1) == 0 )
  {
    sub_B52984(&TreasureDvcInfo_TypeInfo);
    byte_42B3983 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_B52A54(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_B52920((BattleServantConfConponent_o *)tdInfo, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  return 0;
}


System_String_o *__fastcall PartyServantListViewItem__GetRestrictionMessage(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t commonRestrictionId; // w19

  if ( (byte_42B397F & 1) == 0 )
  {
    sub_B52984(&CommonRestrictionMaster_TypeInfo);
    byte_42B397F = 1;
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
  if ( (byte_42B3984 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_42B3984 = 1;
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
      v2->fields.sortValue2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v8, 0LL);
      v2->fields.sortValue2B = 0LL;
      return;
    }
LABEL_16:
    sub_B52A5C(this, method);
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
  v2->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v9, 0LL);
}


bool __fastcall PartyServantListViewItem__IsMatchFilter(
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
  FilterKindList_c *v16; // x0
  ListViewSort_FilterKind_array *v17; // x21
  UserServantEntity_o *v19; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v21; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v37; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v39; // w0
  __int64 v40; // x0

  if ( (byte_42B397D & 1) == 0 )
  {
    sub_B52984(&FilterKindList_TypeInfo);
    sub_B52984(&ListViewSort_FilterKind___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_B52984(&ServantEventBonusFilterController_TypeInfo);
    byte_42B397D = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                        (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_69;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                            (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v8, 0LL)
      && !ListViewSort__IsMatchClassFilter(sort, this->fields.servantEntity, 0LL) )
    {
      return 0;
    }
  }
  else if ( !ListViewSort__IsMatchClassGroupFilter(sort, this->fields.servantEntity, 0LL) )
  {
    return 0;
  }
  v9 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0LL) )
  {
    return 0;
  }
  v11 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v11 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v11->static_fields->NpEffectFilterKindList;
  if ( !ClassGroupFilterKindList )
LABEL_69:
    sub_B52A5C(ClassGroupFilterKindList, sort);
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v12, 0LL)
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
    v19 = this->fields.userServantEntity;
    if ( v19 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v19, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_69;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v21 = this->fields.userServantEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v21 )
          goto LABEL_69;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v21, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.skillCategoryIdList,
          (System_Int32_array **)SkillCategoryIdList,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_69;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.tdCategoryIdList,
          (System_Int32_array **)TreasureDeviceCategoryIdList,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
    }
    ClassGroupFilterKindList = sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_70;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_69;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
    {
LABEL_70:
      v40 = sub_B52A88(ClassGroupFilterKindList);
      sub_B52A28(v40, 0LL);
    }
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v37 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v39 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
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
  ClassGroupFilterKindList = sub_B5299C(ListViewSort_FilterKind___TypeInfo, 1LL);
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
  v16 = FilterKindList_TypeInfo;
  if ( (BYTE3(FilterKindList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v16 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v16->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_69;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Voice_BATTLE___ToArray(
                                           (System_Collections_Generic_List_Voice_BATTLE__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_305C094 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v17, 0LL)
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
    sub_B52A5C(0LL, method);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userServantEntity,
    (System_Int32_array **)userServantEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*p_userServantEntity )
    sub_B52A5C(0LL, v10);
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
    sub_B52A5C(0LL, method);
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
  UserServantEntity_o **p_equipUserServantEntity; // x20
  BattleServantConfConponent_o *p_equipServantEntity; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_Int64_array **p_equipIdList; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  Il2CppObject *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  Il2CppObject *v33; // x22
  System_Int32_array **v34; // x1
  BalanceConfig_c *v35; // x0
  __int64 v36; // x1
  struct System_Int64_array *v37; // x8
  UserServantEntity_o *v38; // x8
  __int64 v39; // x21
  __int64 v40; // x22
  UserServantEntity_o *v41; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v42; // x20
  __int64 v43; // x21
  __int64 v44; // x22
  System_Int32_array **Entity; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_42B397C & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B52984(&long___TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B397C = 1;
  }
  p_equipUserServantEntity = &this->fields.equipUserServantEntity;
  this->fields.equipUserServantEntity = 0LL;
  sub_B52920(
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.equipServantEntity, 0LL, v12, v13, v14, v15, v16, v17);
  this->fields.equipIdList = 0LL;
  p_equipIdList = &this->fields.equipIdList;
  sub_B52920((BattleServantConfConponent_o *)p_equipIdList, 0LL, v19, v20, v21, v22, v23, v24);
  if ( !*(p_equipIdList - 1) )
    return;
  if ( equipIds )
  {
    if ( *p_equipIdList == equipIds )
      goto LABEL_15;
    v26 = System_Array__Clone((System_Array_o *)equipIds, 0LL);
    if ( !v26 )
    {
      v34 = 0LL;
      goto LABEL_14;
    }
    v33 = v26;
    v34 = (System_Int32_array **)sub_B52A44(v26, long___TypeInfo);
    if ( v34 )
      goto LABEL_14;
    sub_B52D50(v33);
  }
  v35 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v35 = BalanceConfig_TypeInfo;
  }
  v34 = (System_Int32_array **)sub_B5299C(long___TypeInfo, (unsigned int)v35->static_fields->SvtEquipMax);
LABEL_14:
  *p_equipIdList = (struct System_Int64_array *)v34;
  sub_B52920((BattleServantConfConponent_o *)p_equipIdList, v34, v27, v28, v29, v30, v31, v32);
  equipIds = *p_equipIdList;
  if ( !*p_equipIdList )
    goto LABEL_39;
LABEL_15:
  if ( !equipIds->max_length )
    goto LABEL_40;
  if ( equipIds->m_Items[0] < 1 )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
  v37 = *p_equipIdList;
  if ( !*p_equipIdList )
    goto LABEL_39;
  if ( !v37->max_length )
  {
LABEL_40:
    v52 = sub_B52A88(Master_WarQuestSelectionMaster);
    sub_B52A28(v52, 0LL);
  }
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_39;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                                                  (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
                                                                  p_equipUserServantEntity,
                                                                  v37->m_Items[0],
                                                                  (const MethodInfo_23E255C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    v38 = *p_equipUserServantEntity;
    if ( !*p_equipUserServantEntity )
      goto LABEL_39;
    v40 = *(_QWORD *)&v38->fields.svtId.fields.currentCryptoKey;
    v39 = *(_QWORD *)&v38->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v53.fields.currentCryptoKey = v40;
    *(_QWORD *)&v53.fields.fakeValue = v39;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v53, 0LL) >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
      v41 = *p_equipUserServantEntity;
      if ( *p_equipUserServantEntity )
      {
        v42 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
        v44 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
        v43 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v54.fields.currentCryptoKey = v44;
        *(_QWORD *)&v54.fields.fakeValue = v43;
        Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                        v54,
                                                                        0LL);
        if ( v42 )
        {
          Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            v42,
                                            (int32_t)Master_WarQuestSelectionMaster,
                                            (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          p_equipServantEntity->klass = (BattleServantConfConponent_c *)Entity;
          sub_B52920(p_equipServantEntity, Entity, v46, v47, v48, v49, v50, v51);
          return;
        }
      }
LABEL_39:
      sub_B52A5C(Master_WarQuestSelectionMaster, v36);
    }
  }
}


bool __fastcall PartyServantListViewItem__SetSortValue(
        PartyServantListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  PartyServantListViewItem_o *v4; // x19
  struct ListViewManager_o *manager; // x8
  __int64 v6; // x11
  PartyServantListViewManager_o *v7; // x21
  struct EventUpValSetupInfo_o *setupInfo; // x8
  int32_t bonusKind; // w8
  EventUpValSetupInfo_o *v10; // x21
  PartyServantListViewItem_o *userServantEntity; // x22
  int32_t v12; // w2
  EventUpValSetupInfo_o *v13; // x1
  int32_t bonusKind2; // w8
  int32_t *p_bonusKind2Id; // x8
  int32_t *v16; // x8
  int32_t v17; // w9
  int32_t *p_bonusKindId; // x8
  int32_t bonusKind2Id; // w10
  int32_t bonusKindId; // w22
  __int64 v21; // x23
  __int64 v22; // x24
  const MethodInfo *v23; // x3
  bool IsCampaignServant; // w0
  int32_t v25; // w22
  __int64 v26; // x23
  __int64 v27; // x24
  const MethodInfo *v28; // x3
  PartyServantListViewItem_c *v29; // x0
  _BOOL4 isSwapChoice; // w22
  _BOOL4 isChoice; // w23
  struct PartyServantListViewItem_StaticFields **p_static_fields; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x9
  int v34; // w22
  __int64 PRIORITY_LOWEST; // x8
  PartyServantListViewItem_c *v36; // x0
  __int64 PRIORITY_LOWEST_HEROIN_LEAVE; // x8
  struct ServantEntity_o *servantEntity; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  int32_t cost; // w4
  struct UserServantEntity_o *v41; // x8
  __int128 v42; // q1
  struct UserServantEntity_o *v43; // x8
  int64_t fatigureTime; // x8
  int64_t rarityId; // x2
  struct UserServantEntity_o *v46; // x8
  int64_t hpReinforceValue; // x2
  int32_t adjustAtk; // w3
  int32_t v49; // w1
  struct UserServantEntity_o *v50; // x8
  struct UserServantEntity_o *equipUserServantEntity; // x9
  int64_t hp; // x10
  int32_t v53; // w4
  int32_t adjustHp; // w3
  int32_t v55; // w2
  int32_t v56; // w1
  struct UserServantEntity_o *v57; // x8
  struct UserServantEntity_o *v58; // x9
  int64_t atk; // x10
  struct ServantEntity_o *v60; // x8
  int64_t v61; // x8
  __int64 v62; // x20
  __int64 v63; // x21
  int32_t v64; // w0
  PartyServantListViewItem_o *iconLabelInfo1; // x20
  int64_t v66; // x9
  struct ListViewManager_o *v67; // x8
  __int64 v68; // x11
  struct ListViewManager_o *v69; // x20
  IconLabelInfo_o *iconLabelInfo2; // x19
  struct QuestRestrictionInfo_o *v71; // x8
  int64_t priority; // x10
  struct ServantEntity_o *v73; // x8
  int32_t lv; // w20
  __int64 v75; // x21
  __int64 v76; // x22
  const MethodInfo *v77; // x2
  struct ServantEntity_o *v78; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v80; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16

  v4 = this;
  if ( (byte_42B397E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&PartyServantListViewItem_TypeInfo);
    sub_B52984(&PartyServantListViewManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (PartyServantListViewItem_o *)sub_B52984(&TutorialFlag_TypeInfo);
    byte_42B397E = 1;
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
    && (v6 = *(&PartyServantListViewManager_TypeInfo->_2.bitflags2 + 1),
        *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v6) )
  {
    if ( (PartyServantListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] == PartyServantListViewManager_TypeInfo )
      v7 = (PartyServantListViewManager_o *)sort->fields.manager;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
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
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL) )
        {
          bonusKindId = v4->fields.bonusKindId;
          v22 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
          v21 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v85.fields.currentCryptoKey = v22;
          *(_QWORD *)&v85.fields.fakeValue = v21;
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                 v85,
                                                 0LL);
          if ( !v7 )
            goto LABEL_204;
          IsCampaignServant = PartyServantListViewManager__IsCampaignServant(v7, bonusKindId, (int32_t)this, v23);
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
          v12 = *p_bonusKind2Id;
          this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
          v4->fields.bonusKindId = *p_bonusKind2Id;
          if ( !this )
            goto LABEL_204;
          v13 = v4->fields.setupInfo;
LABEL_68:
          IsCampaignServant = UserServantEntity__getEventUpVal_21508832((UserServantEntity_o *)this, v13, v12, 0LL);
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
      v17 = v4->fields.bonusKindId;
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
    this = (PartyServantListViewItem_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_28;
    if ( !v7 )
      goto LABEL_204;
    if ( !v7->fields.isQuestStart )
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
        v10 = v4->fields.setupInfo;
        v4->fields.bonusKindId = sort->fields.bonusKindId;
        if ( !v10 )
          goto LABEL_204;
        userServantEntity = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
        this = (PartyServantListViewItem_o *)EventUpValSetupInfo__get_ServantFilterEventId(v10, 0LL);
        if ( !userServantEntity )
          goto LABEL_204;
        v12 = (int)this;
        this = userServantEntity;
        v13 = v10;
        goto LABEL_68;
      }
      goto LABEL_62;
    }
    if ( v4->fields.bonusKind != 2 )
    {
      p_bonusKindId = &sort->fields.bonusKindId;
      goto LABEL_70;
    }
    v17 = v4->fields.bonusKindId;
    p_bonusKindId = &sort->fields.bonusKindId;
    bonusKind2Id = sort->fields.bonusKindId;
LABEL_50:
    if ( v17 != bonusKind2Id )
    {
LABEL_70:
      v4->fields.bonusKind = 2;
      v4->fields.bonusKindId = *p_bonusKindId;
      this = (PartyServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_204;
      this = (PartyServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
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
    v16 = &sort->fields.bonusKindId;
    if ( v4->fields.bonusKindId == sort->fields.bonusKindId )
      goto LABEL_62;
  }
  else
  {
    v16 = &sort->fields.bonusKindId;
  }
  v4->fields.bonusKind = 3;
  v4->fields.bonusKindId = *v16;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL) )
  {
    v25 = v4->fields.bonusKindId;
    v27 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
    v26 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v86.fields.currentCryptoKey = v27;
    *(_QWORD *)&v86.fields.fakeValue = v26;
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v86, 0LL);
    if ( !v7 )
      goto LABEL_204;
    v4->fields.isEventUpVal = PartyServantListViewManager__IsCampaignServant(v7, v25, (int32_t)this, v28);
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
  v29 = PartyServantListViewItem_TypeInfo;
  isSwapChoice = v4->fields.isSwapChoice;
  isChoice = v4->fields.isChoice;
  if ( (BYTE3(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyServantListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo);
    v29 = PartyServantListViewItem_TypeInfo;
  }
  p_static_fields = &v29->static_fields;
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  v34 = isSwapChoice ^ isChoice;
  v4->fields.sortValue0 = v29->static_fields->PRIORITY_NORMAL;
  v4->fields.sortValue0B = v29->static_fields->PRIORITY_NORMAL;
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
        if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = PartyServantListViewItem_TypeInfo;
        }
        PRIORITY_LOWEST = v29->static_fields->PRIORITY_LOWEST;
        goto LABEL_91;
      }
LABEL_89:
      if ( !v4->fields.isQuestRestriction )
      {
LABEL_92:
        if ( v34 && sort->fields.isChoiceSort )
        {
          if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v29);
            v29 = PartyServantListViewItem_TypeInfo;
          }
          v4->fields.sortValue0B = v29->static_fields->PRIORITY_TOP;
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
          if ( !TutorialFlag__Get_29217932(126, 0LL) )
            goto LABEL_117;
          v36 = PartyServantListViewItem_TypeInfo;
          if ( (BYTE3(PartyServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !PartyServantListViewItem_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo);
            v36 = PartyServantListViewItem_TypeInfo;
          }
          PRIORITY_LOWEST_HEROIN_LEAVE = v36->static_fields->PRIORITY_LOWEST_HEROIN_LEAVE;
          goto LABEL_116;
        }
LABEL_204:
        sub_B52A5C(this, sort);
      }
      PRIORITY_LOWEST = -1LL;
LABEL_91:
      v4->fields.sortValue0 = PRIORITY_LOWEST;
      goto LABEL_92;
    }
  }
  if ( v34 && sort->fields.isChoiceSort )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
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
  IconLabelInfo__Set_28274368((IconLabelInfo_o *)this, 7, servantEntity->fields.cost, 0, cost, 0, 0, 0, 0LL);
  this = (PartyServantListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v41 = v4->fields.userServantEntity;
      if ( !v41 )
        goto LABEL_204;
      v42 = *(_OWORD *)&v41->fields.id.fields.fakeValue;
      *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&v41->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v83.fields.fakeValue = v42;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v82 = v83;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(
                                             &v82,
                                             0LL);
      v43 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v43 )
        goto LABEL_204;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_204;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v43->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_173;
    case 2:
      rarityId = v4->fields.rarityId;
      v46 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = rarityId;
      if ( !v46 )
        goto LABEL_204;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_204;
      IconLabelInfo__Set_28274368(
        (IconLabelInfo_o *)this,
        36,
        rarityId,
        v46->fields.exceedCount,
        0,
        0,
        0,
        v46->fields.lv,
        0LL);
      goto LABEL_188;
    case 3:
      goto LABEL_182;
    case 4:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_204;
      UserServantEntity__getTreasureDeviceInfo_21516452((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(hpReinforceValue) = tdMaxLv[1];
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = tdMaxLv[1];
      if ( !this )
        goto LABEL_204;
      adjustAtk = tdMaxLv[0];
      v49 = 33;
      goto LABEL_172;
    case 5:
      v50 = v4->fields.userServantEntity;
      if ( !v50 )
        goto LABEL_204;
      equipUserServantEntity = v4->fields.equipUserServantEntity;
      hp = v50->fields.hp;
      if ( equipUserServantEntity )
      {
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = equipUserServantEntity->fields.hp + (int)hp;
        if ( !this )
          goto LABEL_204;
        v53 = equipUserServantEntity->fields.hp;
        adjustHp = v50->fields.adjustHp;
        v55 = v50->fields.hp;
        v56 = 46;
        goto LABEL_153;
      }
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_204;
      adjustAtk = v50->fields.adjustHp;
      LODWORD(hpReinforceValue) = v50->fields.hp;
      v49 = 3;
      goto LABEL_172;
    case 6:
      v57 = v4->fields.userServantEntity;
      if ( !v57 )
        goto LABEL_204;
      v58 = v4->fields.equipUserServantEntity;
      atk = v57->fields.atk;
      if ( v58 )
      {
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = v58->fields.atk + (int)atk;
        if ( !this )
          goto LABEL_204;
        v53 = v58->fields.atk;
        adjustHp = v57->fields.adjustAtk;
        v55 = v57->fields.atk;
        v56 = 47;
LABEL_153:
        IconLabelInfo__Set_28274368((IconLabelInfo_o *)this, v56, v55, adjustHp, v53, 0, 0, 0, 0LL);
      }
      else
      {
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = atk;
        if ( !this )
          goto LABEL_204;
        adjustAtk = v57->fields.adjustAtk;
        LODWORD(hpReinforceValue) = v57->fields.atk;
        v49 = 5;
LABEL_172:
        IconLabelInfo__Set_28274368((IconLabelInfo_o *)this, v49, hpReinforceValue, adjustAtk, 0, 0, 0, 0, 0LL);
      }
LABEL_173:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_204;
      iconLabelInfo2 = v4->fields.iconLabelInfo2;
      goto LABEL_185;
    case 7:
      v60 = v4->fields.servantEntity;
      if ( !v60 )
        goto LABEL_204;
      v61 = v60->fields.cost;
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
LABEL_157:
      v4->fields.sortValue1 = v61;
      if ( !this )
        goto LABEL_204;
      goto LABEL_184;
    case 8:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      v61 = -v4->fields.priority;
      goto LABEL_157;
    case 0xA:
      v62 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
      v63 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v87.fields.currentCryptoKey = v62;
      *(_QWORD *)&v87.fields.fakeValue = v63;
      v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v87, 0LL);
      iconLabelInfo1 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v66 = v64;
      friendship = v4->fields.friendship;
      v4->fields.sortValue1 = v66;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                             friendship,
                                             0LL);
      if ( !iconLabelInfo1 )
        goto LABEL_204;
      adjustAtk = v4->fields.friendshipMax;
      LODWORD(hpReinforceValue) = (_DWORD)this;
      v49 = 32;
      this = iconLabelInfo1;
      goto LABEL_172;
    case 0xE:
      this = (PartyServantListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_201;
      v67 = sort->fields.manager;
      if ( v67
        && (v68 = *(&PartyServantListViewManager_TypeInfo->_2.bitflags2 + 1),
            *(&v67->klass->_2.bitflags2 + 1) >= (unsigned int)v68) )
      {
        if ( (PartyServantListViewManager_c *)v67->klass->_2.typeHierarchy[v68 - 1] == PartyServantListViewManager_TypeInfo )
          v69 = sort->fields.manager;
        else
          v69 = 0LL;
      }
      else
      {
        v69 = 0LL;
      }
      v76 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v75 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v89.fields.currentCryptoKey = v76;
      *(_QWORD *)&v89.fields.fakeValue = v75;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v89, 0LL);
      if ( !v69 )
        goto LABEL_204;
      this = (PartyServantListViewItem_o *)PartyServantListViewManager__GetAmountSortValue(
                                             (PartyServantListViewManager_o *)v69,
                                             (int32_t)this,
                                             v77);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_201:
      v78 = v4->fields.servantEntity;
      if ( !v78 )
        goto LABEL_204;
      collectionNo = v78->fields.collectionNo;
      v80 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarityId << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v80 )
        goto LABEL_204;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      lv = v80->fields.lv;
      this = (PartyServantListViewItem_o *)v80;
      goto LABEL_186;
    case 0xF:
      hpReinforceValue = v4->fields.hpReinforceValue;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hpReinforceValue;
      if ( !this )
        goto LABEL_204;
      adjustAtk = v4->fields.nowMaxHpReinforceValue;
      v49 = 44;
      goto LABEL_172;
    case 0x10:
      hpReinforceValue = v4->fields.atkReinforceValue;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hpReinforceValue;
      if ( !this )
        goto LABEL_204;
      adjustAtk = v4->fields.nowMaxAtkReinforceValue;
      v49 = 45;
      goto LABEL_172;
    case 0x19:
      v71 = v4->fields.questRestrictionInfo;
      if ( !v71 || !v71->fields.isFatigure )
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
        v73 = v4->fields.servantEntity;
        v4->fields.sortValue1B = SLODWORD(this->fields.iconLabelInfo1);
        v4->fields.sortValue2 = priority;
        if ( !v73 )
          goto LABEL_204;
        v4->fields.sortValue2B = ((__int64)v73->fields.collectionNo << 16) | ((unsigned __int64)(unsigned int)v4->fields.rarityId << 48) | SLODWORD(this->fields.iconLabelInfo1);
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
      IconLabelInfo__Set_28274368(iconLabelInfo2, 2, lv, (int32_t)this, 0, 0, 0, 0, 0LL);
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
    sub_B52A5C(this, method);
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
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_42B3982 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&StringLiteral_18529/*"error"*/);
    byte_42B3982 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18529/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v9, 0LL);
  }
  else
  {
    v7 = -1;
  }
  return ServantEntity__getName(servantEntity, v7, -1, 0LL);
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

  if ( (byte_42B3981 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B3981 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v6, 0LL);
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
    sub_B52A5C(this, method);
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
  sub_B52920(
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