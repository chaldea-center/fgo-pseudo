void __fastcall PartyServantListViewItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct PartyServantListViewItem_StaticFields *static_fields; // x8

  if ( (byte_49B6DA1 & 1) == 0 )
  {
    sub_1B4CF90(&PartyServantListViewItem_TypeInfo, v1);
    byte_49B6DA1 = 1;
  }
  static_fields = PartyServantListViewItem_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->PRIORITY_NORMAL = xmmword_BAA0B0;
  *(_OWORD *)&static_fields->PRIORITY_LOWEST = xmmword_BAA760;
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
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  IconLabelInfo_o *v53; // x23
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  IconLabelInfo_o *v56; // x23
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int64_t Instance; // x0
  const MethodInfo *v60; // x1
  struct PartyOrganizationListViewItem_o *Member; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  Il2CppObject *MasterData_object; // x0
  __int64 v72; // x21
  __int64 v73; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v74; // x20
  Il2CppObject *v75; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // x27
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  Il2CppObject *v79; // x20
  struct UserServantEntity_o *v80; // x8
  int32_t v81; // w21
  ServantLimitEntity_o *v82; // x20
  UserServantEntity_o *v83; // x8
  __int128 v84; // q1
  UserServantCollectionMaster_o *v85; // x21
  int64_t v86; // x23
  UserServantCollectionEntity_o *v87; // x21
  struct PartyOrganizationListViewItem_o **p_baseItem; // x22
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  System_Collections_Generic_List_int__o *v95; // x20
  int32_t v96; // w25
  int32_t i; // w21
  BalanceConfig_c *v98; // x0
  PartyOrganizationListViewItem_o *v99; // x23
  UserServantEntity_o *v100; // x8
  __int128 v101; // q0
  struct UserServantEntity_o *v102; // x8
  __int128 v103; // q0
  int64_t v104; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v105; // x8
  __int64 v106; // x24
  __int64 v107; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  int v109; // w24
  int v110; // w24
  struct System_Int32_array *items; // x8
  _QWORD *v112; // x9
  __int64 size; // x10
  struct ServantEntity_o *v114; // x8
  __int64 v115; // x23
  __int64 v116; // x24
  int32_t v117; // w23
  int32_t v118; // w24
  int32_t IncludedRestrictionIds; // w0
  System_Int64_array *EquipList; // x0
  const MethodInfo *v121; // x2
  int32_t cost; // w20
  bool IsChoice; // w0
  UserServantEntity_o *v124; // x8
  __int128 v125; // q0
  __int64 v126; // x20
  bool v127; // zf
  bool v128; // w8
  UserServantEntity_o *v129; // x8
  const MethodInfo *v130; // x1
  UserServantEntity_o *v131; // x8
  UserServantEntity_o *v132; // x8
  bool IsUniqueIndividualityRestriction_40811988; // w0
  const MethodInfo *v134; // x1
  struct QuestRestrictionInfo_o *v135; // x8
  UserEventServantFatigueMaster_o *v136; // x21
  int32_t eventId; // w23
  __int64 v138; // x24
  __int64 v139; // x25
  int64_t v140; // x20
  bool AllOutBattleAlreadyUsed; // w0
  struct QuestRestrictionInfo_o *v142; // x8
  Il2CppObject *Master_object; // x20
  UserServantEntity_o *v144; // x8
  UserEventDataLostEntity_o *v145; // x20
  __int64 v146; // x21
  __int64 v147; // x23
  UserServantEntity_o *v148; // x8
  char v149; // w20
  UserEventDataLostEntity_o *v150; // x21
  __int64 v151; // x23
  __int64 v152; // x24
  int32_t v153; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr10_16
  UserServantEntity_o *v155; // x8
  int64_t v156; // x20
  __int64 v157; // x21
  __int64 v158; // x23
  int32_t v159; // w21
  int32_t Rarity; // w23
  const MethodInfo *v161; // x7
  System_String_o **p_skillName; // x1
  int *p_actMaxRarity; // x2
  int32_t partyIndex; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // kr20_16
  UserServantEntity_o *v166; // x8
  int64_t v167; // x20
  __int64 v168; // x21
  __int64 v169; // x23
  struct QuestRestrictionInfo_o *v170; // x8
  EventServantPointRankMaster_o *v171; // x20
  UserServantEntity_o *v172; // x8
  __int128 v173; // q0
  UserEventServantPointMaster_o *v174; // x21
  int64_t v175; // x23
  int32_t *p_SvtPoint_k__BackingField; // x22
  int32_t v177; // w21
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  System_Collections_Generic_List_int__o *v180; // x20
  PartyListViewItem_array *v181; // x9
  __int64 v182; // x8
  unsigned __int64 v183; // x25
  int32_t v184; // w22
  PartyListViewItem_o *v185; // x21
  int32_t j; // w26
  PartyOrganizationListViewItem_o *v187; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v188; // kr30_16
  struct System_Int32_array *v189; // x8
  _QWORD *v190; // x9
  __int64 v191; // x10
  UserServantEntity_o *v192; // x24
  struct UserServantEntity_o *v193; // x8
  __int128 v194; // q0
  System_Int64_array *v195; // x0
  const MethodInfo *v196; // x2
  __int64 v197; // x21
  __int64 v198; // x23
  System_Collections_Generic_List_T__o *v199; // x25
  Il2CppObject *v200; // x20
  System_Collections_Generic_List_object__o *v201; // x21
  Il2CppObject *v202; // x20
  _BOOL8 v203; // x0
  __int64 v204; // x1
  EventCampaignEntity_o *current; // x21
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x23
  __int64 v207; // x26
  __int64 v208; // x27
  int32_t v209; // w1
  int32_t v210; // w23
  int32_t FriendshipBonusValue; // w0
  int32_t calcType; // w3
  int32_t v213; // w2
  const MethodInfo_38C7630 *v214; // x5
  __int64 v215; // x0
  __int64 v216; // x1
  struct System_Object_array *v217; // x8
  _QWORD *v218; // x9
  __int64 v219; // x10
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v220; // x0
  int32_t v221; // w2
  const MethodInfo *v222; // x3
  UserServantEntity_o *v223; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v225; // w2
  const MethodInfo *v226; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v228; // w2
  const MethodInfo *v229; // x3
  BalanceConfig_c *v230; // x8
  int v231; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+10h] [xbp-1E0h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+18h] [xbp-1D8h]
  bool IsNotSameParty; // [xsp+24h] [xbp-1CCh]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+40h] [xbp-1B0h]
  UserServantEntity_o **p_userServantEntity; // [xsp+48h] [xbp-1A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v240; // [xsp+50h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v241; // [xsp+70h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v242; // [xsp+90h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v243; // [xsp+B0h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v244; // [xsp+D0h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v245; // [xsp+F0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o item; // [xsp+110h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v247; // [xsp+130h] [xbp-C0h] BYREF
  UserEventServantPointEntity_o *v248; // [xsp+150h] [xbp-A0h] BYREF
  int32_t actMaxRarity; // [xsp+15Ch] [xbp-94h] BYREF
  System_String_o *skillName; // [xsp+160h] [xbp-90h] BYREF
  int v251; // [xsp+16Ch] [xbp-84h] BYREF
  __int64 v252; // [xsp+170h] [xbp-80h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+178h] [xbp-78h] BYREF
  int64_t recoverAt; // [xsp+180h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+18Ch] [xbp-64h] BYREF
  System_ValueTuple_int__int__Int32Enum__o v256; // 0:x0.12
  System_ValueTuple_int__int__Int32Enum__o v257; // 0:x1.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v258; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v259; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v260; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v261; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v262; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v263; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v264; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v265; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v266; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v267; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v268; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v269; // 0:x0.16

  if ( (byte_49B6D95 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1B4CF90(&CommonRestrictionMaster_TypeInfo, v16);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventCampaignMaster___, v17);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventQuestMaster___, v18);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantClassMaster___, v19);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantLimitMaster___, v20);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, v21);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v22);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v23);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v24);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v25);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v26);
    sub_1B4CF90(&DataManager_TypeInfo, v27);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v28);
    sub_1B4CF90(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v29);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Contains_int___, v30);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v31);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v32);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v33);
    sub_1B4CF90(&IconLabelInfo_TypeInfo, v34);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v35);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__, v36);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Contains__, v37);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v38);
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__,
      v39);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v40);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__, v41);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v42);
    sub_1B4CF90(&System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo, v43);
    sub_1B4CF90(&NetworkManager_TypeInfo, v44);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v45);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v46);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v48);
    sub_1B4CF90(&Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__, v49);
    byte_49B6D95 = 1;
  }
  friendshipRank = 0;
  entity = 0LL;
  recoverAt = 0LL;
  v252 = 0LL;
  v251 = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v248 = 0LL;
  memset(&v247, 0, sizeof(v247));
  v50 = (IconLabelInfo_o *)sub_1B4D1DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v50, 0LL);
  this->fields.iconLabelInfo1 = v50;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v50, v51, v52);
  v53 = (IconLabelInfo_o *)sub_1B4D1DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v53, 0LL);
  this->fields.iconLabelInfo2 = v53;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v53, v54, v55);
  v56 = (IconLabelInfo_o *)sub_1B4D1DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v56, 0LL);
  this->fields.iconLabelInfo3 = v56;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.iconLabelInfo3, (int32_t)v56, v57, v58);
  ListViewItem___ctor_41325876((ListViewItem_o *)this, index, 0LL);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_244;
  Member = PartyListViewItem__GetMember(partyItem, num, 0LL);
  this->fields.baseItem = Member;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.baseItem, (int32_t)Member, v62, v63);
  baseItem = this->fields.baseItem;
  this->fields._PartyListViewItemMenuKind_k__BackingField = partyItem->fields.menuKind;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_244;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0LL;
  this->fields.userServantEntity = userServantEntity;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v64, v65);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v67, v68);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v69, v70);
  p_userServantEntity = &this->fields.userServantEntity;
  if ( !this->fields.userServantEntity )
    goto LABEL_244;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_244;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
  v73 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v72 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v74 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v258.fields.currentCryptoKey = v73;
  *(_QWORD *)&v258.fields.fakeValue = v72;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v258, 0LL);
  if ( !v74 )
    goto LABEL_244;
  v75 = DataMasterBase_object__object__int___GetEntity(
          v74,
          Instance,
          (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v75;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)v75, v77, v78);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_244;
  v79 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(this->fields.svtId, 0LL);
  v80 = this->fields.userServantEntity;
  if ( !v80 )
    goto LABEL_244;
  v81 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v80->fields.limitCount, 0LL);
  if ( !v79 )
    goto LABEL_244;
  v82 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v79, v81, Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v83 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_244;
  v84 = *(_OWORD *)&v83->fields.userId.fields.fakeValue;
  v85 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&item.fields.currentCryptoKey = *(_OWORD *)&v83->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&item.fields.fakeValue = v84;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v245 = item;
  v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v245, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(this->fields.svtId, 0LL);
  if ( !v85 )
    goto LABEL_244;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v85, v86, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_244;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !v82 )
    goto LABEL_244;
  this->fields.rarityId = v82->fields.rarity;
  if ( !userServantEntity )
    goto LABEL_244;
  v87 = (UserServantCollectionEntity_o *)Instance;
  Instance = UserServantEntity__getFrameType(userServantEntity, 0LL);
  this->fields.frameType = Instance;
  if ( !v87 )
    goto LABEL_244;
  p_baseItem = &this->fields.baseItem;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  UserServantCollectionEntity__getFriendShipRankInfo(v87, &friendshipRank, &this->fields.friendshipMax, 0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0LL);
  this->fields.isBase = 0;
  *(_WORD *)&this->fields.isCostOver = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.equipUserServantEntity, 0, v89, v90);
  this->fields.equipServantEntity = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.equipServantEntity, 0, v91, v92);
  this->fields.equipIdList = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v93, v94);
  Instance = (int64_t)this->fields.servantEntity;
  if ( !Instance )
    goto LABEL_244;
  IsNotSameParty = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0LL);
  v95 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v95,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  v96 = num;
  for ( i = 0; ; ++i )
  {
    v98 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v98 = BalanceConfig_TypeInfo;
    }
    if ( i >= v98->static_fields->DeckMemberMax )
      break;
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, i, 0LL);
    if ( !Instance )
      goto LABEL_244;
    v99 = (PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 112) )
    {
      v100 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_244;
      v101 = *(_OWORD *)&v100->fields.id.fields.fakeValue;
      *(_OWORD *)&item.fields.currentCryptoKey = *(_OWORD *)&v100->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&item.fields.fakeValue = v101;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v244 = item;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v244, 0LL);
      v102 = v99->fields.userServantEntity;
      if ( !v102 )
        goto LABEL_244;
      v103 = *(_OWORD *)&v102->fields.id.fields.fakeValue;
      v104 = Instance;
      *(_OWORD *)&v243.fields.currentCryptoKey = *(_OWORD *)&v102->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v243.fields.fakeValue = v103;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v243, 0LL);
      if ( v104 == Instance )
      {
        this->fields.isSame = 0;
        this->fields.isBase = v96 == i;
        this->fields.partyIndex = i;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v99, 0LL);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v121);
        break;
      }
      if ( v96 != i )
      {
        v105 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_244;
        v107 = *(_QWORD *)&v105[2].fields.currentCryptoKey;
        v106 = *(_QWORD *)&v105[2].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v259.fields.currentCryptoKey = v107;
        *(_QWORD *)&v259.fields.fakeValue = v106;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v259, 0LL);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v99->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_244;
        v109 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(servantEntity[2], 0LL);
        v96 = num;
        if ( v109 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else
        {
          if ( !IsNotSameParty )
            goto LABEL_52;
          Instance = (int64_t)v99->fields.servantEntity;
          if ( !Instance )
            goto LABEL_244;
          Instance = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0LL);
          if ( (Instance & 1) == 0 )
            goto LABEL_52;
          Instance = (int64_t)*p_servantEntity;
          if ( !*p_servantEntity )
            goto LABEL_244;
          Instance = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0LL);
          if ( !v99->fields.servantEntity )
            goto LABEL_244;
          v110 = Instance;
          Instance = ServantEntity__GetNotSamePartyKey(v99->fields.servantEntity, 0LL);
          if ( v110 == (_DWORD)Instance )
          {
            this->fields.isNotSameParty = 1;
            Instance = (int64_t)v99->fields.servantEntity;
            if ( !Instance )
              goto LABEL_244;
            Instance = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0LL);
            if ( !v95 )
              goto LABEL_244;
            items = v95->fields._items;
            v112 = Method_System_Collections_Generic_List_int__Add__;
            ++v95->fields._version;
            if ( !items )
              goto LABEL_244;
            size = v95->fields._size;
            v60 = (const MethodInfo *)(unsigned int)Instance;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v95,
                Instance,
                *(const MethodInfo_35631B8 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
            }
            else
            {
              v95->fields._size = size + 1;
              items->m_Items[size + 1] = Instance;
            }
          }
          else
          {
LABEL_52:
            if ( this->fields.commonRestrictionId == -1 )
            {
              v114 = v99->fields.servantEntity;
              if ( !v114 )
                goto LABEL_244;
              v116 = *(_QWORD *)&v114->fields.baseSvtId.fields.currentCryptoKey;
              v115 = *(_QWORD *)&v114->fields.baseSvtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v260.fields.currentCryptoKey = v116;
              *(_QWORD *)&v260.fields.fakeValue = v115;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v260, 0LL);
              if ( !*p_servantEntity )
                goto LABEL_244;
              v117 = Instance;
              v118 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572((*p_servantEntity)[2], 0LL);
              if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
              IncludedRestrictionIds = CommonRestrictionMaster__GetIncludedRestrictionIds(v117, v118, 0LL);
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
  v124 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_244;
  v125 = *(_OWORD *)&v124->fields.id.fields.fakeValue;
  v126 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&item.fields.currentCryptoKey = *(_OWORD *)&v124->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&item.fields.fakeValue = v125;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v242 = item;
  v127 = v126 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v242, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  v128 = v127;
  this->fields.isPush = v128;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_244;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v129 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v129 )
    goto LABEL_244;
  this->fields.isLeave = UserServantEntity__IsLeave(v129, 0LL);
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v130);
  v131 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v131 )
    goto LABEL_244;
  Instance = UserServantEntity__getUniqueSvtRestriction_40811608(
               v131,
               this->fields.questRestrictionInfo,
               partyItem,
               v96,
               this->fields.partyIndex,
               0LL);
  v132 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v132 )
    goto LABEL_244;
  IsUniqueIndividualityRestriction_40811988 = UserServantEntity__IsUniqueIndividualityRestriction_40811988(
                                                v132,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                v96,
                                                this->fields.partyIndex,
                                                0LL);
  this->fields.isFatigureRecover = 0;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_40811988;
  this->fields.fatigureTime = -1LL;
  v135 = this->fields.questRestrictionInfo;
  if ( v135 && v135->fields.isFatigure )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_244;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !*p_questRestrictionInfo )
      goto LABEL_244;
    v136 = (UserEventServantFatigueMaster_o *)Instance;
    eventId = (*p_questRestrictionInfo)->fields.eventId;
    v139 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v138 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v261.fields.currentCryptoKey = v139;
    *(_QWORD *)&v261.fields.fakeValue = v138;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v261, 0LL);
    if ( !v136 )
      goto LABEL_244;
    v96 = num;
    if ( UserEventServantFatigueMaster__GetFatigueInfo(
           v136,
           &recoverAt,
           &this->fields.isFatigureRecover,
           eventId,
           Instance,
           0LL) )
    {
      v140 = recoverAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v140 > NetworkManager__getTime(0LL) )
        this->fields.fatigureTime = recoverAt;
    }
  }
  AllOutBattleAlreadyUsed = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v134);
  v142 = this->fields.questRestrictionInfo;
  this->fields._IsAllOutBattle_k__BackingField = AllOutBattleAlreadyUsed;
  if ( v142 && v142->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_49B57A5 )
    {
      sub_1B4CF90(&NetworkManager_TypeInfo, v60);
      byte_49B57A5 = 1;
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
      v144 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_244;
      v145 = entity;
      v147 = *(_QWORD *)&v144->fields.svtId.fields.currentCryptoKey;
      v146 = *(_QWORD *)&v144->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v262.fields.currentCryptoKey = v147;
      *(_QWORD *)&v262.fields.fakeValue = v146;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v262, 0LL);
      if ( !v145 )
        goto LABEL_244;
      Instance = UserEventDataLostEntity__IsRestart(v145, Instance, 0LL);
      v148 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_244;
      v149 = Instance;
      v150 = entity;
      v152 = *(_QWORD *)&v148->fields.svtId.fields.currentCryptoKey;
      v151 = *(_QWORD *)&v148->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v263.fields.currentCryptoKey = v152;
      *(_QWORD *)&v263.fields.fakeValue = v151;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v263, 0LL);
      if ( !v150 )
        goto LABEL_244;
      if ( (v149 & 1) != 0 )
      {
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(v150, Instance, 0LL);
      }
      else if ( UserEventDataLostEntity__IsDataLost(v150, Instance, 0LL) )
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
    v153 = (*p_questRestrictionInfo)->fields.eventId;
  else
    v153 = -1;
  if ( !this->fields.isBase )
  {
    partyIndex = this->fields.partyIndex;
    if ( (partyIndex & 0x80000000) == 0 )
      goto LABEL_135;
  }
  Instance = (int64_t)PartyListViewItem__GetMember(partyItem, v96, 0LL);
  if ( !Instance )
    goto LABEL_244;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(EquipSvtId, 0LL) >= 1 )
  {
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v155 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_244;
    v156 = Instance;
    v158 = *(_QWORD *)&v155->fields.svtId.fields.currentCryptoKey;
    v157 = *(_QWORD *)&v155->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v264.fields.currentCryptoKey = v158;
    *(_QWORD *)&v264.fields.fakeValue = v157;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v264, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_244;
    v159 = Instance;
    Rarity = UserServantEntity__getRarity(*p_userServantEntity, 0LL);
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, v96, 0LL);
    if ( !Instance )
      goto LABEL_244;
    v265 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v265, 0LL);
    if ( !v156 )
      goto LABEL_244;
    p_skillName = (System_String_o **)&v252;
    p_actMaxRarity = &v251;
LABEL_146:
    this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                     (PartyOrganizationUtility_o *)Instance,
                                     p_skillName,
                                     p_actMaxRarity,
                                     v159,
                                     Rarity,
                                     Instance,
                                     v153,
                                     v161);
    goto LABEL_147;
  }
  partyIndex = this->fields.partyIndex;
  if ( (partyIndex & 0x80000000) == 0 )
  {
LABEL_135:
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, partyIndex, 0LL);
    if ( !Instance )
      goto LABEL_244;
    v165 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v165, 0LL) < 1 )
      goto LABEL_147;
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v166 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_244;
    v167 = Instance;
    v169 = *(_QWORD *)&v166->fields.svtId.fields.currentCryptoKey;
    v168 = *(_QWORD *)&v166->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v266.fields.currentCryptoKey = v169;
    *(_QWORD *)&v266.fields.fakeValue = v168;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v266, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_244;
    v159 = Instance;
    Rarity = UserServantEntity__getRarity(*p_userServantEntity, 0LL);
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, this->fields.partyIndex, 0LL);
    if ( !Instance )
      goto LABEL_244;
    v267 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v267, 0LL);
    if ( !v167 )
      goto LABEL_244;
    p_skillName = &skillName;
    p_actMaxRarity = &actMaxRarity;
    goto LABEL_146;
  }
LABEL_147:
  v170 = this->fields.questRestrictionInfo;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  this->fields._SvtPointRank_k__BackingField = 0;
  this->fields._SvtPoint_k__BackingField = 0;
  if ( !v170 )
    goto LABEL_165;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
    goto LABEL_244;
  v171 = (EventServantPointRankMaster_o *)Instance;
  if ( !EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v153, 0LL) )
    goto LABEL_165;
  this->fields._IsDispSvtPoint_k__BackingField = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v172 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_244;
  v173 = *(_OWORD *)&v172->fields.userId.fields.fakeValue;
  v174 = (UserEventServantPointMaster_o *)Instance;
  *(_OWORD *)&item.fields.currentCryptoKey = *(_OWORD *)&v172->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&item.fields.fakeValue = v173;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v241 = item;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v241, 0LL);
  if ( !*p_userServantEntity )
    goto LABEL_244;
  v175 = Instance;
  Instance = UserServantEntity__getSvtId(*p_userServantEntity, 0LL);
  if ( !v174 )
    goto LABEL_244;
  p_SvtPoint_k__BackingField = &this->fields._SvtPoint_k__BackingField;
  if ( UserEventServantPointMaster__TryGetEntity(v174, &v248, v175, v153, Instance, 0LL) )
  {
    Instance = (int64_t)v248;
    if ( !v248 )
      goto LABEL_244;
    *p_SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v248, 0LL);
  }
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
LABEL_244:
    sub_1B4D1EC(Instance, v60);
  v177 = *p_SvtPoint_k__BackingField;
  SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
  EnableEntity = EventServantPointRankMaster__GetEnableEntity(v171, v153, v177, SvtId, 0LL);
  if ( EnableEntity )
    this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
LABEL_165:
  if ( this->fields._PartyListViewItemMenuKind_k__BackingField != 9 )
  {
    this->fields._OrganizedWave_k__BackingField = 0;
    goto LABEL_204;
  }
  v180 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v180,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  v181 = baseDeckItemList;
  if ( !baseDeckItemList )
    goto LABEL_244;
  v182 = *(_QWORD *)&baseDeckItemList->max_length;
  this->fields._MaxWave_k__BackingField = v182;
  if ( (int)v182 < 1 )
    goto LABEL_197;
  v183 = 0LL;
  v184 = 1;
  do
  {
    if ( v183 >= (unsigned int)v182 )
      sub_1B4D1F4(Instance, v60);
    v185 = v181->m_Items[v183];
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
      if ( !v185 )
        goto LABEL_244;
      Instance = (int64_t)PartyListViewItem__GetMember(v185, j, 0LL);
      if ( !Instance )
        goto LABEL_244;
      v187 = (PartyOrganizationListViewItem_o *)Instance;
      if ( *(_QWORD *)(Instance + 112) )
      {
        v188 = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v188, 0LL);
        if ( !v180 )
          goto LABEL_244;
        v189 = v180->fields._items;
        v190 = Method_System_Collections_Generic_List_int__Add__;
        ++v180->fields._version;
        if ( !v189 )
          goto LABEL_244;
        v191 = v180->fields._size;
        v60 = (const MethodInfo *)(unsigned int)Instance;
        if ( (unsigned int)v191 >= v189->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v180,
            Instance,
            *(const MethodInfo_35631B8 **)(*(_QWORD *)(v190[4] + 192LL) + 112LL));
          if ( !v184 )
            continue;
        }
        else
        {
          v180->fields._size = v191 + 1;
          v189->m_Items[v191 + 1] = Instance;
          if ( !v184 )
            continue;
        }
        v192 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_244;
        v193 = v187->fields.userServantEntity;
        if ( !v193 )
          goto LABEL_244;
        v194 = *(_OWORD *)&v193->fields.id.fields.fakeValue;
        *(_OWORD *)&item.fields.currentCryptoKey = *(_OWORD *)&v193->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&item.fields.fakeValue = v194;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v240 = item;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_47012644(&v192->fields.id, &v240, 0LL) )
        {
          v195 = PartyOrganizationListViewItem__GetEquipList(v187, 0LL);
          PartyServantListViewItem__SetEquipStatus(this, v195, v196);
          this->fields._OrganizedWave_k__BackingField = v184;
          v184 = 0;
          this->fields._IsClearedWave_k__BackingField = v185->fields._IsClearedWave_k__BackingField;
        }
      }
    }
    v181 = baseDeckItemList;
    ++v183;
    if ( v184 )
      ++v184;
    else
      v184 = 0;
    LODWORD(v182) = baseDeckItemList->max_length;
  }
  while ( (__int64)v183 < (int)v182 );
  if ( !v184 )
    goto LABEL_204;
LABEL_197:
  v198 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v197 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v268.fields.currentCryptoKey = v198;
  *(_QWORD *)&v268.fields.fakeValue = v197;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v268, 0LL);
  if ( !v180 )
    goto LABEL_244;
  if ( System_Collections_Generic_List_int___Contains(
         v180,
         Instance,
         (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__)
    && !this->fields.isNotSameParty )
  {
    this->fields.isSame = 1;
  }
LABEL_204:
  v199 = (System_Collections_Generic_List_T__o *)sub_1B4D1DC(System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
  System_Collections_Generic_List_ValueTuple_int__int__Int32Enum_____ctor(
    v199,
    (const MethodInfo_35343E0 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
  if ( *p_questRestrictionInfo )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_244;
    v200 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance || !v200 )
      goto LABEL_244;
    Instance = (int64_t)EventCampaignMaster__GetFriendshipUpCampaigns(
                          (EventCampaignMaster_o *)v200,
                          *(_QWORD *)(Instance + 104),
                          0LL);
    if ( Instance )
    {
      v201 = (System_Collections_Generic_List_object__o *)Instance;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v202 = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventQuestMaster___);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&item,
          v201,
          (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
        v247 = *(System_Collections_Generic_List_Enumerator_object__o *)&item.fields.currentCryptoKey;
        while ( 1 )
        {
          v203 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v247,
                   (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
          if ( !v203 )
            break;
          current = (EventCampaignEntity_o *)v247.fields._current;
          if ( !v247.fields._current )
            sub_1B4D1EC(v203, v204);
          monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v247.fields._current[2].monitor;
          if ( monitor && monitor[1].monitor )
          {
            v208 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
            v207 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v269.fields.currentCryptoKey = v208;
            *(_QWORD *)&v269.fields.fakeValue = v207;
            v209 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v269, 0LL);
            v203 = System_Linq_Enumerable__Contains_int_(
                     monitor,
                     v209,
                     (const MethodInfo_2F1C00C *)Method_System_Linq_Enumerable_Contains_int___);
            if ( !v203 )
              continue;
          }
          if ( !*p_questRestrictionInfo )
            sub_1B4D1EC(v203, v204);
          if ( !v202 )
            sub_1B4D1EC(v203, v204);
          if ( !EventQuestMaster__IsEventNotIncluded(
                  (EventQuestMaster_o *)v202,
                  current->fields.eventId,
                  (*p_questRestrictionInfo)->fields.questId,
                  (*p_questRestrictionInfo)->fields.questPhase,
                  7,
                  0LL,
                  0LL) )
          {
            v210 = current->fields.eventId;
            FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0LL);
            calcType = current->fields.calcType;
            v213 = FriendshipBonusValue;
            LODWORD(item.fields.hiddenValue) = 0;
            item.fields.currentCryptoKey = 0LL;
            *(_QWORD *)&v256.fields.Item1 = &item;
            v256.fields.Item3 = v210;
            System_ValueTuple_int__int__Int32Enum____ctor(
              v256,
              v213,
              calcType,
              Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__,
              v214);
            if ( !v199 )
              sub_1B4D1EC(v215, v216);
            v257 = *(System_ValueTuple_int__int__Int32Enum__o *)&item.fields.currentCryptoKey;
            v217 = v199->fields._items;
            v218 = Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__;
            ++v199->fields._version;
            if ( !v217 )
              sub_1B4D1EC(v215, *(_QWORD *)&v257.fields.Item1);
            v219 = v199->fields._size;
            if ( (unsigned int)v219 >= v217->max_length )
            {
              System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____AddWithResize(
                v199,
                v257,
                *(const MethodInfo_3534C6C **)(*(_QWORD *)(v218[4] + 192LL) + 112LL));
            }
            else
            {
              v199->fields._size = v219 + 1;
              *((System_ValueTuple_int__int__Int32Enum__o *)v217->m_Items + v219) = v257;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v247,
          (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
        goto LABEL_227;
      }
      goto LABEL_244;
    }
  }
LABEL_227:
  if ( !v199 )
    goto LABEL_244;
  v220 = (struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *)System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____ToArray(
                                                                                    v199,
                                                                                    (const MethodInfo_3536830 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
  this->fields._FriendshipUpValTuple_k__BackingField = v220;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField, (int32_t)v220, v221, v222);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_244;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v223 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v223 )
    goto LABEL_244;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v223, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v225, v226);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_244;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v228,
    v229);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_244;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_319D99C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_244;
  this->fields.priority = *(_DWORD *)(Instance + 52);
  PartyServantListViewItem__InitAfterSecondSort(this, v60);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_244;
  v230 = BalanceConfig_TypeInfo;
  v231 = *(_DWORD *)(Instance + 276);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v230 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v230->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v231;
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
void __fastcall PartyServantListViewItem___ctor_32647396(
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
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  IconLabelInfo_o *v33; // x21
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  IconLabelInfo_o *v36; // x21
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int64_t Instance; // x0
  const MethodInfo *v40; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct UserServantEntity_o **p_userServantEntity; // x22
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  Il2CppObject *MasterData_object; // x0
  __int64 v53; // x21
  __int64 v54; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v55; // x20
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // x27
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  Il2CppObject *v60; // x20
  struct UserServantEntity_o *v61; // x8
  int32_t v62; // w29
  ServantLimitEntity_o *v63; // x20
  struct UserServantEntity_o *v64; // x8
  __int128 v65; // q1
  UserServantCollectionMaster_o *v66; // x29
  int64_t v67; // x21
  UserServantCollectionEntity_o *v68; // x29
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  char v76; // w29
  int32_t v77; // w28
  PartyOrganizationListViewItem_o *v78; // x20
  struct UserServantEntity_o *v79; // x8
  __int128 v80; // q0
  struct UserServantEntity_o *v81; // x8
  __int128 v82; // q0
  int64_t v83; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v84; // x8
  __int64 v85; // x21
  __int64 v86; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  int v88; // w21
  int v89; // w21
  struct ServantEntity_o *v90; // x8
  __int64 v91; // x20
  __int64 v92; // x21
  int32_t v93; // w20
  int32_t v94; // w21
  System_Int64_array *EquipList; // x0
  const MethodInfo *v96; // x2
  int32_t cost; // w20
  UserServantEntity_o *v98; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v100; // x8
  const MethodInfo *v101; // x1
  UserServantEntity_o *v102; // x8
  UserServantEntity_o *v103; // x8
  bool IsUniqueIndividualityRestriction_40811988; // w0
  const MethodInfo *v105; // x1
  struct QuestRestrictionInfo_o *v106; // x8
  UserEventServantFatigueMaster_o *v107; // x23
  int32_t eventId; // w24
  __int64 v109; // x21
  __int64 v110; // x25
  int64_t v111; // x20
  UserServantEntity_o *v112; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  BalanceConfig_c *v119; // x8
  int v120; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct PartyOrganizationListViewItem_o **p_baseItem; // [xsp+10h] [xbp-110h]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+18h] [xbp-108h]
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+20h] [xbp-100h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+28h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v126; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v127; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v128; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v129; // [xsp+90h] [xbp-90h]
  int64_t recoverAt; // [xsp+B0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16

  if ( (byte_49B6D96 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, *(_QWORD *)&index);
    sub_1B4CF90(&CommonRestrictionMaster_TypeInfo, v17);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantClassMaster___, v18);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantLimitMaster___, v19);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v21);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v22);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23);
    sub_1B4CF90(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v24);
    sub_1B4CF90(&IconLabelInfo_TypeInfo, v25);
    sub_1B4CF90(&NetworkManager_TypeInfo, v26);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    byte_49B6D96 = 1;
  }
  friendshipRank = 0;
  recoverAt = 0LL;
  v30 = (IconLabelInfo_o *)sub_1B4D1DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v30, 0LL);
  this->fields.iconLabelInfo1 = v30;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.iconLabelInfo1, (int32_t)v30, v31, v32);
  v33 = (IconLabelInfo_o *)sub_1B4D1DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v33, 0LL);
  this->fields.iconLabelInfo2 = v33;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.iconLabelInfo2, (int32_t)v33, v34, v35);
  v36 = (IconLabelInfo_o *)sub_1B4D1DC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v36, 0LL);
  this->fields.iconLabelInfo3 = v36;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.iconLabelInfo3, (int32_t)v36, v37, v38);
  ListViewItem___ctor_41325876((ListViewItem_o *)this, index, 0LL);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_95;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, num, 0LL);
  this->fields.baseItem = MemberItem;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.baseItem, (int32_t)MemberItem, v42, v43);
  baseItem = this->fields.baseItem;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_95;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, v44, v45);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v48, v49);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v50, v51);
  if ( !this->fields.userServantEntity )
    goto LABEL_95;
  p_baseItem = &this->fields.baseItem;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
  v54 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v53 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v55 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v132.fields.currentCryptoKey = v54;
  *(_QWORD *)&v132.fields.fakeValue = v53;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v132, 0LL);
  if ( !v55 )
    goto LABEL_95;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v55,
             Instance,
             (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)Entity, v58, v59);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  v60 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(this->fields.svtId, 0LL);
  v61 = this->fields.userServantEntity;
  if ( !v61 )
    goto LABEL_95;
  v62 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v61->fields.limitCount, 0LL);
  if ( !v60 )
    goto LABEL_95;
  v63 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v60, v62, Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v64 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_95;
  v65 = *(_OWORD *)&v64->fields.userId.fields.fakeValue;
  v66 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v129.fields.currentCryptoKey = *(_OWORD *)&v64->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v129.fields.fakeValue = v65;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v128 = v129;
  v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v128, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(this->fields.svtId, 0LL);
  if ( !v66 )
    goto LABEL_95;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v66, v67, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_95;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !v63 )
    goto LABEL_95;
  this->fields.rarityId = v63->fields.rarity;
  if ( !userServantEntity )
    goto LABEL_95;
  v68 = (UserServantCollectionEntity_o *)Instance;
  Instance = UserServantEntity__getFrameType(userServantEntity, 0LL);
  this->fields.frameType = Instance;
  if ( !v68 )
    goto LABEL_95;
  UserServantCollectionEntity__getFriendShipRankInfo(v68, &friendshipRank, &this->fields.friendshipMax, 0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0LL);
  this->fields.isBase = 0;
  *(_WORD *)&this->fields.isCostOver = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.equipUserServantEntity, 0, v69, v70);
  this->fields.equipServantEntity = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.equipServantEntity, 0, v71, v72);
  this->fields.equipIdList = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.equipIdList, 0, v73, v74);
  Instance = (int64_t)this->fields.servantEntity;
  if ( !Instance )
    goto LABEL_95;
  Instance = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0LL);
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_95;
  v76 = Instance;
  v77 = 0;
  while ( v77 < (signed int)memberItemList->max_length )
  {
    Instance = (int64_t)WarBoardPartyListViewItem__GetMemberItem(partyItem, v77, 0LL);
    if ( !Instance )
      goto LABEL_95;
    v78 = (PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 112) )
    {
      v79 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_95;
      v80 = *(_OWORD *)&v79->fields.id.fields.fakeValue;
      *(_OWORD *)&v129.fields.currentCryptoKey = *(_OWORD *)&v79->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v129.fields.fakeValue = v80;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v127 = v129;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v127, 0LL);
      v81 = v78->fields.userServantEntity;
      if ( !v81 )
        goto LABEL_95;
      v82 = *(_OWORD *)&v81->fields.id.fields.fakeValue;
      v83 = Instance;
      *(_OWORD *)&v126.fields.currentCryptoKey = *(_OWORD *)&v81->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v126.fields.fakeValue = v82;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v126, 0LL);
      if ( v83 == Instance )
      {
        this->fields.isSame = 0;
        this->fields.isBase = num == v77;
        this->fields.partyIndex = v77;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v78, 0LL);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v96);
        break;
      }
      if ( num != v77 )
      {
        v84 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_95;
        v86 = *(_QWORD *)&v84[2].fields.currentCryptoKey;
        v85 = *(_QWORD *)&v84[2].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v133.fields.currentCryptoKey = v86;
        *(_QWORD *)&v133.fields.fakeValue = v85;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v133, 0LL);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v78->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_95;
        v88 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(servantEntity[2], 0LL);
        if ( v88 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else
        {
          if ( (v76 & 1) == 0 )
            goto LABEL_47;
          Instance = (int64_t)v78->fields.servantEntity;
          if ( !Instance )
            goto LABEL_95;
          Instance = ServantEntity__IsNotSameParty((ServantEntity_o *)Instance, 0LL);
          if ( (Instance & 1) == 0 )
            goto LABEL_47;
          Instance = (int64_t)*p_servantEntity;
          if ( !*p_servantEntity )
            goto LABEL_95;
          Instance = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)Instance, 0LL);
          if ( !v78->fields.servantEntity )
            goto LABEL_95;
          v89 = Instance;
          Instance = ServantEntity__GetNotSamePartyKey(v78->fields.servantEntity, 0LL);
          if ( v89 == (_DWORD)Instance )
          {
            this->fields.isNotSameParty = 1;
          }
          else
          {
LABEL_47:
            if ( this->fields.commonRestrictionId == -1 )
            {
              v90 = v78->fields.servantEntity;
              if ( !v90 )
                goto LABEL_95;
              v92 = *(_QWORD *)&v90->fields.baseSvtId.fields.currentCryptoKey;
              v91 = *(_QWORD *)&v90->fields.baseSvtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v134.fields.currentCryptoKey = v92;
              *(_QWORD *)&v134.fields.fakeValue = v91;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v134, 0LL);
              if ( !*p_servantEntity )
                goto LABEL_95;
              v93 = Instance;
              v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572((*p_servantEntity)[2], 0LL);
              if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
              Instance = CommonRestrictionMaster__GetIncludedRestrictionIds(v93, v94, 0LL);
              if ( (Instance & 0x80000000) == 0 )
                this->fields.commonRestrictionId = Instance;
            }
          }
        }
      }
    }
    memberItemList = partyItem->fields.memberItemList;
    ++v77;
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
  v98 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v98 )
    goto LABEL_95;
  IsChoice = UserServantEntity__IsChoice(v98, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  *(_DWORD *)&this->fields.isLockMode = 0;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_95;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v100 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v100 )
    goto LABEL_95;
  this->fields.isLeave = UserServantEntity__IsLeave(v100, 0LL);
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v101);
  v102 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v102 )
    goto LABEL_95;
  Instance = UserServantEntity__getUniqueSvtRestriction_40811608(
               v102,
               this->fields.questRestrictionInfo,
               0LL,
               num,
               this->fields.partyIndex,
               0LL);
  v103 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v103 )
    goto LABEL_95;
  IsUniqueIndividualityRestriction_40811988 = UserServantEntity__IsUniqueIndividualityRestriction_40811988(
                                                v103,
                                                this->fields.questRestrictionInfo,
                                                0LL,
                                                num,
                                                this->fields.partyIndex,
                                                0LL);
  this->fields.isFatigureRecover = 0;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_40811988;
  this->fields.fatigureTime = -1LL;
  v106 = this->fields.questRestrictionInfo;
  if ( v106 && v106->fields.isFatigure )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
      if ( *p_questRestrictionInfo )
      {
        v107 = (UserEventServantFatigueMaster_o *)Instance;
        eventId = (*p_questRestrictionInfo)->fields.eventId;
        v110 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v109 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v135.fields.currentCryptoKey = v110;
        *(_QWORD *)&v135.fields.fakeValue = v109;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v135, 0LL);
        if ( v107 )
        {
          if ( UserEventServantFatigueMaster__GetFatigueInfo(
                 v107,
                 &recoverAt,
                 &this->fields.isFatigureRecover,
                 eventId,
                 Instance,
                 0LL) )
          {
            v111 = recoverAt;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( v111 > NetworkManager__getTime(0LL) )
              this->fields.fatigureTime = recoverAt;
          }
          goto LABEL_81;
        }
      }
    }
LABEL_95:
    sub_1B4D1EC(Instance, v40);
  }
LABEL_81:
  Instance = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v105);
  this->fields._IsAllOutBattle_k__BackingField = Instance & 1;
  if ( !this->fields.userServantEntity )
    goto LABEL_95;
  Instance = UserServantEntity__getDispLimitCount(this->fields.userServantEntity, 0, 0LL);
  v112 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v112 )
    goto LABEL_95;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v112, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v114, v115);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_95;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v117,
    v118);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_95;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_319D99C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_95;
  this->fields.priority = *(_DWORD *)(Instance + 52);
  PartyServantListViewItem__InitAfterSecondSort(this, v40);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_95;
  v119 = BalanceConfig_TypeInfo;
  v120 = *(_DWORD *)(Instance + 276);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v119 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v119->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v120;
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
  if ( (byte_49B6D97 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49B6D97 = 1;
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
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v33, 0LL);
  v7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
  if ( !v7 )
    goto LABEL_38;
  v8 = (int)this;
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v7[6], 0LL);
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
  if ( !QuestRestrictionInfo__IsRestriction_41047524(
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
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v34, 0LL);
    v16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
    if ( !v16 )
      goto LABEL_38;
    v17 = (int)this;
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
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
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v35, 0LL);
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
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                               v36,
                                               0LL);
        v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
        if ( v28 )
        {
          v29 = (int)this;
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
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
    sub_1B4D1EC(this, method);
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

  if ( (byte_49B6D9C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___, method);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49B6D9C = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = questRestrictionInfo->fields.allOutBattleGroupNo;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (UserEventAlloutBattleMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v11;
  *(_QWORD *)&v15.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v15, 0LL);
  v13 = this->fields.questRestrictionInfo;
  if ( !v13 || !v12 )
LABEL_13:
    sub_1B4D1EC(Instance, v8);
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

  if ( (byte_49B6D9F & 1) == 0 )
  {
    sub_1B4CF90(&TreasureDvcInfo_TypeInfo, tdInfo);
    byte_49B6D9F = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1B4D1DC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1B4CF34((CGThumbnailListItem_o *)tdInfo, (int32_t)v7, v8, v9);
  return 0;
}


System_String_o *__fastcall PartyServantListViewItem__GetRestrictionMessage(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t commonRestrictionId; // w19

  if ( (byte_49B6D9B & 1) == 0 )
  {
    sub_1B4CF90(&CommonRestrictionMaster_TypeInfo, method);
    byte_49B6D9B = 1;
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
  if ( (byte_49B6DA0 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_49B6DA0 = 1;
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
      v2->fields.sortValue2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v8, 0LL);
      v2->fields.sortValue2B = 0LL;
      return;
    }
LABEL_14:
    sub_1B4D1EC(this, method);
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
  v2->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v9, 0LL);
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
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v34; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v36; // w0

  if ( (byte_49B6D99 & 1) == 0 )
  {
    sub_1B4CF90(&FilterKindList_TypeInfo, sort);
    sub_1B4CF90(&ListViewSort_FilterKind___TypeInfo, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__, v6);
    sub_1B4CF90(&ServantEventBonusFilterController_TypeInfo, v7);
    byte_49B6D99 = 1;
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
                                        (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                             (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                           (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
        sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.skillCategoryIdList, (int32_t)SkillCategoryIdList, v28, v29);
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_67;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1B4CF34(
          (CGThumbnailListItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v31,
          v32);
      }
    }
    ClassGroupFilterKindList = sub_1B4D038(ListViewSort_FilterKind___TypeInfo, 1LL);
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
    ClassGroupFilterKindList = sub_1B4D038(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_67;
    v19 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_68:
      sub_1B4D1F4(ClassGroupFilterKindList, v19);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v34 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
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
  ClassGroupFilterKindList = sub_1B4D038(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
LABEL_67:
    sub_1B4D1EC(ClassGroupFilterKindList, sort);
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
                                           (const MethodInfo_356749C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_1B4D1EC(0LL, method);
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
  const MethodInfo *v7; // x1

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.userServantEntity, (int32_t)userServantEntity, (int32_t)method, v3);
  if ( !*p_userServantEntity )
    sub_1B4D1EC(0LL, v6);
  this->fields.isLeave = UserServantEntity__IsLeave(*p_userServantEntity, 0LL);
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  this->fields.isQuestRestriction = PartyServantListViewItem__ChkQuestRestriction(this, v7);
}


void __fastcall PartyServantListViewItem__ModifyLockItem(PartyServantListViewItem_o *this, const MethodInfo *method)
{
  UserServantEntity_o *userServantEntity; // x0

  userServantEntity = this->fields.userServantEntity;
  if ( !userServantEntity )
    sub_1B4D1EC(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
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
  Il2CppObject **p_equipUserServantEntity; // x20
  CGThumbnailListItem_o *p_equipServantEntity; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Int64_array **p_equipIdList; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *Master_object; // x0
  __int64 v21; // x1
  struct System_Int64_array *v22; // x8
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x22
  __int64 v27; // x1
  BalanceConfig_c *v28; // x0
  struct System_Int64_array *v29; // x8
  Il2CppObject *v30; // x8
  void *monitor; // x21
  Il2CppClass *klass; // x22
  Il2CppObject *v33; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x20
  void *v35; // x21
  Il2CppClass *v36; // x22
  Il2CppObject *Entity; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_49B6D98 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, equipIds);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserServantMaster___, v7);
    sub_1B4CF90(&DataManager_TypeInfo, v8);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B4CF90(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10);
    sub_1B4CF90(&long___TypeInfo, v11);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    byte_49B6D98 = 1;
  }
  p_equipUserServantEntity = (Il2CppObject **)&this->fields.equipUserServantEntity;
  this->fields.equipUserServantEntity = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.equipUserServantEntity, 0, (int32_t)method, v3);
  p_equipServantEntity = (CGThumbnailListItem_o *)&this->fields.equipServantEntity;
  this->fields.equipServantEntity = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.equipServantEntity, 0, v15, v16);
  this->fields.equipIdList = 0LL;
  p_equipIdList = &this->fields.equipIdList;
  sub_1B4CF34((CGThumbnailListItem_o *)p_equipIdList, 0, v18, v19);
  if ( !*(p_equipIdList - 1) )
    return;
  if ( !equipIds )
    goto LABEL_9;
  v22 = *p_equipIdList;
  if ( *p_equipIdList == equipIds )
    goto LABEL_14;
  v23 = System_Array__Clone((System_Array_o *)equipIds, 0LL);
  if ( v23 )
  {
    v26 = v23;
    v27 = sub_1B4D0CC(v23, long___TypeInfo);
    if ( !v27 )
    {
      sub_1B4D4AC(v26);
LABEL_9:
      v28 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v28 = BalanceConfig_TypeInfo;
      }
      v27 = sub_1B4D038(long___TypeInfo, (unsigned int)v28->static_fields->SvtEquipMax);
    }
  }
  else
  {
    v27 = 0LL;
  }
  *p_equipIdList = (struct System_Int64_array *)v27;
  sub_1B4CF34((CGThumbnailListItem_o *)p_equipIdList, v27, v24, v25);
  v22 = *p_equipIdList;
LABEL_14:
  if ( !v22 )
    goto LABEL_35;
  if ( !v22->max_length )
    goto LABEL_36;
  if ( v22->m_Items[0] < 1 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserServantMaster___);
  v29 = *p_equipIdList;
  if ( !*p_equipIdList )
    goto LABEL_35;
  if ( !v29->max_length )
LABEL_36:
    sub_1B4D1F4(Master_object, v21);
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    p_equipUserServantEntity,
                                    v29->m_Items[0],
                                    (const MethodInfo_319FF44 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v30 = *p_equipUserServantEntity;
    if ( !*p_equipUserServantEntity )
      goto LABEL_35;
    klass = v30[5].klass;
    monitor = v30[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v40.fields.currentCryptoKey = klass;
    *(_QWORD *)&v40.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v40, 0LL) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantMaster___);
      v33 = *p_equipUserServantEntity;
      if ( *p_equipUserServantEntity )
      {
        v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        v36 = v33[5].klass;
        v35 = v33[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v41.fields.currentCryptoKey = v36;
        *(_QWORD *)&v41.fields.fakeValue = v35;
        Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v41, 0LL);
        if ( v34 )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     v34,
                     (int32_t)Master_object,
                     (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          p_equipServantEntity->klass = (CGThumbnailListItem_c *)Entity;
          sub_1B4CF34(p_equipServantEntity, (int32_t)Entity, v38, v39);
          return;
        }
      }
LABEL_35:
      sub_1B4D1EC(Master_object, v21);
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
  if ( (byte_49B6D9A & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_EventGroupEntity___, sort);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantFilterMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventCampaignMaster___, v6);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventGroupMaster___, v7);
    sub_1B4CF90(&DataManager_TypeInfo, v8);
    sub_1B4CF90(&System_Func_EventGroupEntity__bool__TypeInfo, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v10);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v11);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B4CF90(&Method_PartyServantListViewItem__SetSortValue_b__119_0__, v14);
    sub_1B4CF90(&Method_PartyServantListViewItem__SetSortValue_b__119_1__, v15);
    sub_1B4CF90(&PartyServantListViewItem_TypeInfo, v16);
    sub_1B4CF90(&PartyServantListViewManager_TypeInfo, v17);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v19);
    this = (PartyServantListViewItem_o *)sub_1B4CF90(&TutorialFlag_TypeInfo, v20);
    byte_49B6D9A = 1;
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
        this = (PartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventGroupMaster___);
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
            v53 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_EventGroupEntity__bool__TypeInfo);
            v54 = &Method_PartyServantListViewItem__SetSortValue_b__119_0__;
LABEL_85:
            v55 = (System_Func_T__bool__o *)v53;
            System_Func_object__bool____ctor(v53, (Il2CppObject *)v4, *v54, 0LL);
            v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                        v55,
                                        (const MethodInfo_2EEC494 *)Method_BasicHelper_Any_EventGroupEntity___);
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
        v50 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
        v49 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
        v51 = (EventCampaignMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v113.fields.currentCryptoKey = v50;
        *(_QWORD *)&v113.fields.fakeValue = v49;
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
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
        this = (PartyServantListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      this = (PartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventGroupMaster___);
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
      v53 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_EventGroupEntity__bool__TypeInfo);
      v54 = &Method_PartyServantListViewItem__SetSortValue_b__119_1__;
      goto LABEL_85;
    case 3:
      v4->fields.bonusKind = 3;
      v4->fields.bonusKindId = sort->fields.bonusKind2Id;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v40 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      v42 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v41 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      v43 = (EventCampaignMaster_o *)v40;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v112.fields.currentCryptoKey = v42;
      *(_QWORD *)&v112.fields.fakeValue = v41;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
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
      this = (PartyServantListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this || !v45 )
        goto LABEL_213;
      viewObject = this->fields.viewObject;
      v30 = v45;
      v31 = v46;
      v32 = v34;
LABEL_54:
      IsEnableServant = UserServantEntity__getEventUpVal_40806396(v30, v31, v32, (int64_t)viewObject, 0LL);
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
  this = (PartyServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_213;
  this = (PartyServantListViewItem_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
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
      if ( !TutorialFlag__Get_38224448(126, 0LL) )
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
  IconLabelInfo__Set_38677548((IconLabelInfo_o *)this, 7, servantEntity->fields.cost, 0, cost, 0, 0, 0, 0LL);
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
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(
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
      IconLabelInfo__Set_38677548(
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
      UserServantEntity__getTreasureDeviceInfo_40813636((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
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
        IconLabelInfo__Set_38677548((IconLabelInfo_o *)this, v79, hp, adjustHp, atk, 0, 0, 0, 0LL);
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
        IconLabelInfo__Set_38677548((IconLabelInfo_o *)this, v74, hp, adjustAtk, 0, 0, 0, 0, 0LL);
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
      v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v114, 0LL);
      v88 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v89 = v87;
      friendship = v4->fields.friendship;
      v4->fields.sortValue1 = v89;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
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
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
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
        sub_1B4D1EC(this, sort);
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
      IconLabelInfo__Set_38677548(v100, 2, v101, v99, 0, 0, 0, 0, 0LL);
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

  if ( (byte_49B6DA2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantFilterMaster___, v5);
    sub_1B4CF90(&DataManager_TypeInfo, v6);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    byte_49B6DA2 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v11;
  *(_QWORD *)&v19.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v19, 0LL);
  if ( !entity || !v12 )
    goto LABEL_18;
  if ( EventCampaignMaster__IsEnableServant(v12, (int32_t)Instance, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !userServantEntity )
LABEL_18:
    sub_1B4D1EC(Instance, v14);
  return UserServantEntity__getEventUpVal_40806396(
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

  if ( (byte_49B6DA3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_EventCampaignMaster___, entity);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantFilterMaster___, v5);
    sub_1B4CF90(&DataManager_TypeInfo, v6);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    byte_49B6DA3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v11;
  *(_QWORD *)&v19.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v19, 0LL);
  if ( !entity || !v12 )
    goto LABEL_18;
  if ( EventCampaignMaster__IsEnableServant(v12, (int32_t)Instance, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !userServantEntity )
LABEL_18:
    sub_1B4D1EC(Instance, v14);
  return UserServantEntity__getEventUpVal_40806396(
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
    sub_1B4D1EC(this, method);
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

  if ( (byte_49B6D9E & 1) == 0 )
  {
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_18745/*"error"*/, v3);
    byte_49B6D9E = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_18745/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v7 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v10.fields.currentCryptoKey = v7;
    *(_QWORD *)&v10.fields.fakeValue = v6;
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v10, 0LL);
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

  if ( (byte_49B6D9D & 1) == 0 )
  {
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49B6D9D = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v6, 0LL);
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
    sub_1B4D1EC(this, method);
  return baseItem->fields._WaveEnemyClassIds_k__BackingField;
}


void __fastcall PartyServantListViewItem__set_FriendshipUpValTuple(
        PartyServantListViewItem_o *this,
        System_ValueTuple_int__int__EventCombineEntity_CalcType__array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._FriendshipUpValTuple_k__BackingField = value;
  sub_1B4CF34(
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