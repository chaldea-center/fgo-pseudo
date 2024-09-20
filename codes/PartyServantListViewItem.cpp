void __fastcall PartyServantListViewItem___cctor(const MethodInfo *method)
{
  struct PartyServantListViewItem_StaticFields *static_fields; // x8

  if ( (byte_4A5723A & 1) == 0 )
  {
    sub_1B885B0(&PartyServantListViewItem_TypeInfo);
    byte_4A5723A = 1;
  }
  static_fields = PartyServantListViewItem_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->PRIORITY_NORMAL = xmmword_BB4700;
  *(_OWORD *)&static_fields->PRIORITY_LOWEST = xmmword_BB4DF0;
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
  IconLabelInfo_o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  IconLabelInfo_o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  IconLabelInfo_o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  int64_t Instance; // x0
  const MethodInfo *v26; // x1
  struct PartyOrganizationListViewItem_o *Member; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *MasterData_object; // x0
  __int64 v38; // x21
  __int64 v39; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x20
  Il2CppObject *v41; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // x29
  int32_t v43; // w2
  int32_t v44; // w3
  Il2CppObject *v45; // x20
  struct UserServantEntity_o *v46; // x8
  int32_t v47; // w21
  ServantLimitEntity_o *v48; // x20
  UserServantEntity_o *v49; // x8
  __int128 v50; // q1
  UserServantCollectionMaster_o *v51; // x21
  int64_t v52; // x28
  UserServantCollectionEntity_o *v53; // x21
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w2
  int32_t v59; // w3
  int32_t i; // w20
  BalanceConfig_c *v61; // x0
  PartyOrganizationListViewItem_o *v62; // x21
  UserServantEntity_o *v63; // x8
  __int128 v64; // q0
  struct UserServantEntity_o *v65; // x8
  __int128 v66; // q0
  int64_t v67; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v68; // x8
  __int64 v69; // x23
  __int64 v70; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  int v72; // w28
  struct ServantEntity_o *v73; // x8
  __int64 v74; // x21
  __int64 v75; // x23
  int32_t v76; // w21
  int32_t v77; // w28
  int32_t IncludedRestrictionIds; // w0
  System_Int64_array *EquipList; // x0
  const MethodInfo *v80; // x2
  int32_t cost; // w20
  UserServantEntity_o *v82; // x8
  bool IsChoice; // w0
  UserServantEntity_o *v84; // x8
  __int128 v85; // q0
  __int64 v86; // x20
  bool v87; // zf
  bool v88; // w8
  UserServantEntity_o *v89; // x8
  const MethodInfo *v90; // x1
  UserServantEntity_o *v91; // x8
  UserServantEntity_o *v92; // x8
  bool IsUniqueIndividualityRestriction_40210708; // w0
  const MethodInfo *v94; // x1
  struct QuestRestrictionInfo_o *v95; // x8
  UserEventServantFatigueMaster_o *v96; // x21
  int32_t eventId; // w28
  __int64 v98; // x23
  __int64 v99; // x29
  int64_t v100; // x20
  bool AllOutBattleAlreadyUsed; // w0
  struct QuestRestrictionInfo_o *v102; // x8
  Il2CppObject *Master_object; // x20
  UserServantEntity_o *v104; // x8
  UserEventDataLostEntity_o *v105; // x20
  __int64 v106; // x21
  __int64 v107; // x23
  UserServantEntity_o *v108; // x8
  char v109; // w20
  UserEventDataLostEntity_o *v110; // x21
  __int64 v111; // x23
  __int64 v112; // x28
  int32_t v113; // w28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr10_16
  UserServantEntity_o *v115; // x8
  int64_t v116; // x20
  __int64 v117; // x21
  __int64 v118; // x23
  int32_t v119; // w21
  int32_t Rarity; // w29
  const MethodInfo *v121; // x7
  System_String_o **p_skillName; // x1
  int *p_actMaxRarity; // x2
  int32_t v124; // w3
  int32_t v125; // w4
  int32_t partyIndex; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // kr20_16
  UserServantEntity_o *v128; // x8
  int64_t v129; // x20
  __int64 v130; // x21
  __int64 v131; // x23
  int32_t v132; // w21
  int32_t v133; // w27
  struct QuestRestrictionInfo_o *v134; // x8
  EventServantPointRankMaster_o *v135; // x20
  UserServantEntity_o *v136; // x8
  __int128 v137; // q0
  UserEventServantPointMaster_o *v138; // x21
  int64_t v139; // x26
  int32_t *p_SvtPoint_k__BackingField; // x22
  int32_t v141; // w21
  int32_t SvtId; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  System_Collections_Generic_List_int__o *v144; // x26
  PartyListViewItem_array *v145; // x9
  __int64 v146; // x8
  unsigned __int64 v147; // x23
  int32_t v148; // w25
  PartyListViewItem_o *v149; // x20
  int32_t j; // w27
  PartyOrganizationListViewItem_o *v151; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v152; // kr30_16
  struct System_Int32_array *items; // x8
  _QWORD *v154; // x9
  __int64 size; // x10
  UserServantEntity_o *v156; // x28
  struct UserServantEntity_o *v157; // x8
  __int128 v158; // q0
  System_Int64_array *v159; // x0
  const MethodInfo *v160; // x2
  __int64 v161; // x20
  __int64 v162; // x21
  System_Collections_Generic_List_T__o *v163; // x25
  Il2CppObject *v164; // x20
  System_Collections_Generic_List_object__o *v165; // x21
  Il2CppObject *v166; // x20
  _BOOL8 v167; // x0
  __int64 v168; // x1
  EventCampaignEntity_o *current; // x21
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x26
  __int64 v171; // x27
  __int64 v172; // x28
  int32_t v173; // w1
  int32_t v174; // w26
  int32_t FriendshipBonusValue; // w0
  int32_t calcType; // w3
  int32_t v177; // w2
  const MethodInfo_3851B80 *v178; // x5
  __int64 v179; // x0
  __int64 v180; // x1
  struct System_Object_array *v181; // x8
  _QWORD *v182; // x9
  __int64 v183; // x10
  struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *v184; // x0
  int32_t v185; // w2
  int32_t v186; // w3
  UserServantEntity_o *v187; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v189; // w2
  int32_t v190; // w3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v192; // w2
  int32_t v193; // w3
  BalanceConfig_c *v194; // x8
  int v195; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct PartyOrganizationListViewItem_o **p_baseItem; // [xsp+8h] [xbp-1D8h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+10h] [xbp-1D0h]
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+18h] [xbp-1C8h]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+30h] [xbp-1B0h]
  UserServantEntity_o **p_userServantEntity; // [xsp+38h] [xbp-1A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v204; // [xsp+40h] [xbp-1A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v205; // [xsp+60h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v206; // [xsp+80h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v207; // [xsp+A0h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v208; // [xsp+C0h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v209; // [xsp+E0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o item; // [xsp+100h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v211; // [xsp+120h] [xbp-C0h] BYREF
  UserEventServantPointEntity_o *v212; // [xsp+140h] [xbp-A0h] BYREF
  int32_t actMaxRarity; // [xsp+14Ch] [xbp-94h] BYREF
  System_String_o *skillName; // [xsp+150h] [xbp-90h] BYREF
  int v215; // [xsp+15Ch] [xbp-84h] BYREF
  __int64 v216; // [xsp+160h] [xbp-80h] BYREF
  UserEventDataLostEntity_o *entity; // [xsp+168h] [xbp-78h] BYREF
  int64_t recoverAt; // [xsp+170h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+17Ch] [xbp-64h] BYREF
  System_ValueTuple_int__int__Int32Enum__o v220; // 0:x0.12
  System_ValueTuple_int__int__Int32Enum__o v221; // 0:x1.12
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v222; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v223; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v224; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v225; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v226; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v227; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v228; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v229; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v230; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v231; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v232; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v233; // 0:x0.16

  if ( (byte_4A5722E & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CommonRestrictionMaster_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__);
    byte_4A5722E = 1;
  }
  friendshipRank = 0;
  entity = 0LL;
  recoverAt = 0LL;
  v216 = 0LL;
  v215 = 0;
  skillName = 0LL;
  actMaxRarity = 0;
  v212 = 0LL;
  memset(&v211, 0, sizeof(v211));
  v16 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v16, 0LL);
  this->fields.iconLabelInfo1 = v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v16, v17, v18);
  v19 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v19, 0LL);
  this->fields.iconLabelInfo2 = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v19, v20, v21);
  v22 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v22, 0LL);
  this->fields.iconLabelInfo3 = v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo3, (int32_t)v22, v23, v24);
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_226;
  Member = PartyListViewItem__GetMember(partyItem, num, 0LL);
  this->fields.baseItem = Member;
  p_baseItem = &this->fields.baseItem;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseItem, (int32_t)Member, v28, v29);
  baseItem = this->fields.baseItem;
  this->fields._PartyListViewItemMenuKind_k__BackingField = partyItem->fields.menuKind;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_226;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0LL;
  this->fields.userServantEntity = userServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v30,
    v31);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v33, v34);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v35,
    v36);
  p_userServantEntity = &this->fields.userServantEntity;
  if ( !this->fields.userServantEntity )
    goto LABEL_226;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_226;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v39 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v222.fields.currentCryptoKey = v39;
  *(_QWORD *)&v222.fields.fakeValue = v38;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v222, 0LL);
  if ( !v40 )
    goto LABEL_226;
  v41 = DataMasterBase_object__object__int___GetEntity(
          v40,
          Instance,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)v41;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)v41, v43, v44);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_226;
  v45 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.svtId, 0LL);
  v46 = this->fields.userServantEntity;
  if ( !v46 )
    goto LABEL_226;
  v47 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v46->fields.limitCount, 0LL);
  if ( !v45 )
    goto LABEL_226;
  v48 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v45, v47, Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_226;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v49 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_226;
  v50 = *(_OWORD *)&v49->fields.userId.fields.fakeValue;
  v51 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&item.fields.currentCryptoKey = *(_OWORD *)&v49->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&item.fields.fakeValue = v50;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v209 = item;
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v209, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.svtId, 0LL);
  if ( !v51 )
    goto LABEL_226;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v51, v52, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_226;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !v48 )
    goto LABEL_226;
  v53 = (UserServantCollectionEntity_o *)Instance;
  Instance = (int64_t)userServantEntity;
  this->fields.rarityId = v48->fields.rarity;
  if ( !userServantEntity )
    goto LABEL_226;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  Instance = UserServantEntity__getFrameType(userServantEntity, 0LL);
  this->fields.frameType = Instance;
  if ( !v53 )
    goto LABEL_226;
  UserServantCollectionEntity__getFriendShipRankInfo(v53, &friendshipRank, &this->fields.friendshipMax, 0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0LL);
  this->fields.isBase = 0;
  *(_WORD *)&this->fields.isCostOver = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipUserServantEntity, 0, v54, v55);
  this->fields.equipServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, 0, v56, v57);
  this->fields.equipIdList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, 0, v58, v59);
  for ( i = 0; ; ++i )
  {
    v61 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v61 = BalanceConfig_TypeInfo;
    }
    if ( i >= v61->static_fields->DeckMemberMax )
      break;
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, i, 0LL);
    if ( !Instance )
      goto LABEL_226;
    v62 = (PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 112) )
    {
      v63 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_226;
      v64 = *(_OWORD *)&v63->fields.id.fields.fakeValue;
      *(_OWORD *)&item.fields.currentCryptoKey = *(_OWORD *)&v63->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&item.fields.fakeValue = v64;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v208 = item;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v208, 0LL);
      v65 = v62->fields.userServantEntity;
      if ( !v65 )
        goto LABEL_226;
      v66 = *(_OWORD *)&v65->fields.id.fields.fakeValue;
      v67 = Instance;
      *(_OWORD *)&v207.fields.currentCryptoKey = *(_OWORD *)&v65->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v207.fields.fakeValue = v66;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v207, 0LL);
      if ( v67 == Instance )
      {
        this->fields.isSame = 0;
        this->fields.isBase = num == i;
        this->fields.partyIndex = i;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v62, 0LL);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v80);
        break;
      }
      if ( num != i )
      {
        v68 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_226;
        v69 = *(_QWORD *)&v68[2].fields.currentCryptoKey;
        v70 = *(_QWORD *)&v68[2].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v223.fields.currentCryptoKey = v69;
        *(_QWORD *)&v223.fields.fakeValue = v70;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v223, 0LL);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v62->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_226;
        v72 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(servantEntity[2], 0LL);
        if ( v72 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else if ( this->fields.commonRestrictionId == -1 )
        {
          v73 = v62->fields.servantEntity;
          if ( !v73 )
            goto LABEL_226;
          v75 = *(_QWORD *)&v73->fields.baseSvtId.fields.currentCryptoKey;
          v74 = *(_QWORD *)&v73->fields.baseSvtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v224.fields.currentCryptoKey = v75;
          *(_QWORD *)&v224.fields.fakeValue = v74;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v224, 0LL);
          if ( !*p_servantEntity )
            goto LABEL_226;
          v76 = Instance;
          v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_servantEntity)[2], 0LL);
          if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
          IncludedRestrictionIds = CommonRestrictionMaster__GetIncludedRestrictionIds(v76, v77, 0LL);
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
  v82 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v82 )
    goto LABEL_226;
  IsChoice = UserServantEntity__IsChoice(v82, 0LL);
  *(_WORD *)&this->fields.isSwapLock = 0;
  *(_WORD *)&this->fields.isLockMode = 0;
  this->fields.isChoice = IsChoice;
  this->fields.isPushMode = 0;
  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !Instance )
    goto LABEL_226;
  v84 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_226;
  v85 = *(_OWORD *)&v84->fields.id.fields.fakeValue;
  v86 = *(_QWORD *)(Instance + 120);
  *(_OWORD *)&item.fields.currentCryptoKey = *(_OWORD *)&v84->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&item.fields.fakeValue = v85;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v206 = item;
  v87 = v86 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v206, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  v88 = v87;
  this->fields.isPush = v88;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_226;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v89 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v89 )
    goto LABEL_226;
  this->fields.isLeave = UserServantEntity__IsLeave(v89, 0LL);
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v90);
  v91 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v91 )
    goto LABEL_226;
  Instance = UserServantEntity__getUniqueSvtRestriction_40210332(
               v91,
               this->fields.questRestrictionInfo,
               partyItem,
               num,
               this->fields.partyIndex,
               0LL);
  v92 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v92 )
    goto LABEL_226;
  IsUniqueIndividualityRestriction_40210708 = UserServantEntity__IsUniqueIndividualityRestriction_40210708(
                                                v92,
                                                this->fields.questRestrictionInfo,
                                                partyItem,
                                                num,
                                                this->fields.partyIndex,
                                                0LL);
  this->fields.isFatigureRecover = 0;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_40210708;
  this->fields.fatigureTime = -1LL;
  v95 = this->fields.questRestrictionInfo;
  if ( v95 && v95->fields.isFatigure )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_226;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    if ( !*p_questRestrictionInfo )
      goto LABEL_226;
    v96 = (UserEventServantFatigueMaster_o *)Instance;
    eventId = (*p_questRestrictionInfo)->fields.eventId;
    v99 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v98 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v225.fields.currentCryptoKey = v99;
    *(_QWORD *)&v225.fields.fakeValue = v98;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v225, 0LL);
    if ( !v96 )
      goto LABEL_226;
    if ( UserEventServantFatigueMaster__GetFatigueInfo(
           v96,
           &recoverAt,
           &this->fields.isFatigureRecover,
           eventId,
           Instance,
           0LL) )
    {
      v100 = recoverAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v100 > NetworkManager__getTime(0LL) )
        this->fields.fatigureTime = recoverAt;
    }
  }
  AllOutBattleAlreadyUsed = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v94);
  v102 = this->fields.questRestrictionInfo;
  this->fields._IsAllOutBattle_k__BackingField = AllOutBattleAlreadyUsed;
  if ( v102 && v102->fields.isDataLostBattle )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
      v104 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_226;
      v105 = entity;
      v107 = *(_QWORD *)&v104->fields.svtId.fields.currentCryptoKey;
      v106 = *(_QWORD *)&v104->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v226.fields.currentCryptoKey = v107;
      *(_QWORD *)&v226.fields.fakeValue = v106;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v226, 0LL);
      if ( !v105 )
        goto LABEL_226;
      Instance = UserEventDataLostEntity__IsRestart(v105, Instance, 0LL);
      v108 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_226;
      v109 = Instance;
      v110 = entity;
      v112 = *(_QWORD *)&v108->fields.svtId.fields.currentCryptoKey;
      v111 = *(_QWORD *)&v108->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v227.fields.currentCryptoKey = v112;
      *(_QWORD *)&v227.fields.fakeValue = v111;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v227, 0LL);
      if ( !v110 )
        goto LABEL_226;
      if ( (v109 & 1) != 0 )
      {
        this->fields._TimesToRestart_k__BackingField = UserEventDataLostEntity__GetTimesToRestart(v110, Instance, 0LL);
      }
      else if ( UserEventDataLostEntity__IsDataLost(v110, Instance, 0LL) )
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
    v113 = (*p_questRestrictionInfo)->fields.eventId;
  else
    v113 = -1;
  if ( !this->fields.isBase )
  {
    partyIndex = this->fields.partyIndex;
    if ( (partyIndex & 0x80000000) == 0 )
      goto LABEL_118;
  }
  Instance = (int64_t)PartyListViewItem__GetMember(partyItem, num, 0LL);
  if ( !Instance )
    goto LABEL_226;
  EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(EquipSvtId, 0LL) >= 1 )
  {
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v115 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_226;
    v116 = Instance;
    v118 = *(_QWORD *)&v115->fields.svtId.fields.currentCryptoKey;
    v117 = *(_QWORD *)&v115->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v228.fields.currentCryptoKey = v118;
    *(_QWORD *)&v228.fields.fakeValue = v117;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v228, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_226;
    v119 = Instance;
    Rarity = UserServantEntity__getRarity(*p_userServantEntity, 0LL);
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, num, 0LL);
    if ( !Instance )
      goto LABEL_226;
    v229 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v229, 0LL);
    if ( !v116 )
      goto LABEL_226;
    p_skillName = (System_String_o **)&v216;
    p_actMaxRarity = &v215;
    v124 = v119;
    v125 = Rarity;
LABEL_129:
    this->fields.isInvalidRarity = PartyOrganizationUtility__IsRarityRestriction(
                                     (PartyOrganizationUtility_o *)Instance,
                                     p_skillName,
                                     p_actMaxRarity,
                                     v124,
                                     v125,
                                     Instance,
                                     v113,
                                     v121);
    goto LABEL_130;
  }
  partyIndex = this->fields.partyIndex;
  if ( (partyIndex & 0x80000000) == 0 )
  {
LABEL_118:
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, partyIndex, 0LL);
    if ( !Instance )
      goto LABEL_226;
    v127 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v127, 0LL) < 1 )
      goto LABEL_130;
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v128 = *p_userServantEntity;
    if ( !*p_userServantEntity )
      goto LABEL_226;
    v129 = Instance;
    v131 = *(_QWORD *)&v128->fields.svtId.fields.currentCryptoKey;
    v130 = *(_QWORD *)&v128->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v230.fields.currentCryptoKey = v131;
    *(_QWORD *)&v230.fields.fakeValue = v130;
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v230, 0LL);
    if ( !*p_userServantEntity )
      goto LABEL_226;
    v132 = Instance;
    v133 = UserServantEntity__getRarity(*p_userServantEntity, 0LL);
    Instance = (int64_t)PartyListViewItem__GetMember(partyItem, this->fields.partyIndex, 0LL);
    if ( !Instance )
      goto LABEL_226;
    v231 = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
    Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v231, 0LL);
    if ( !v129 )
      goto LABEL_226;
    p_skillName = &skillName;
    p_actMaxRarity = &actMaxRarity;
    v124 = v132;
    v125 = v133;
    goto LABEL_129;
  }
LABEL_130:
  v134 = this->fields.questRestrictionInfo;
  this->fields._IsDispSvtPoint_k__BackingField = 0;
  this->fields._SvtPointRank_k__BackingField = 0;
  this->fields._SvtPoint_k__BackingField = 0;
  if ( !v134 )
    goto LABEL_148;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  if ( !Instance )
    goto LABEL_226;
  v135 = (EventServantPointRankMaster_o *)Instance;
  if ( !EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Instance, v113, 0LL) )
    goto LABEL_148;
  this->fields._IsDispSvtPoint_k__BackingField = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v136 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_226;
  v137 = *(_OWORD *)&v136->fields.userId.fields.fakeValue;
  v138 = (UserEventServantPointMaster_o *)Instance;
  *(_OWORD *)&item.fields.currentCryptoKey = *(_OWORD *)&v136->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&item.fields.fakeValue = v137;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v205 = item;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v205, 0LL);
  if ( !*p_userServantEntity )
    goto LABEL_226;
  v139 = Instance;
  Instance = UserServantEntity__getSvtId(*p_userServantEntity, 0LL);
  if ( !v138 )
    goto LABEL_226;
  p_SvtPoint_k__BackingField = &this->fields._SvtPoint_k__BackingField;
  if ( UserEventServantPointMaster__TryGetEntity(v138, &v212, v139, v113, Instance, 0LL) )
  {
    Instance = (int64_t)v212;
    if ( !v212 )
      goto LABEL_226;
    *p_SvtPoint_k__BackingField = UserEventServantPointEntity__GetBuddyPoint(v212, 0LL);
  }
  Instance = (int64_t)*p_userServantEntity;
  if ( !*p_userServantEntity )
LABEL_226:
    sub_1B8880C(Instance, v26);
  v141 = *p_SvtPoint_k__BackingField;
  SvtId = UserServantEntity__getSvtId((UserServantEntity_o *)Instance, 0LL);
  EnableEntity = EventServantPointRankMaster__GetEnableEntity(v135, v113, v141, SvtId, 0LL);
  if ( EnableEntity )
    this->fields._SvtPointRank_k__BackingField = EnableEntity->fields.svtPointRank;
LABEL_148:
  if ( this->fields._PartyListViewItemMenuKind_k__BackingField != 9 )
  {
    this->fields._OrganizedWave_k__BackingField = 0;
    goto LABEL_186;
  }
  v144 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v144,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v145 = baseDeckItemList;
  if ( !baseDeckItemList )
    goto LABEL_226;
  v146 = *(_QWORD *)&baseDeckItemList->max_length;
  this->fields._MaxWave_k__BackingField = v146;
  if ( (int)v146 < 1 )
    goto LABEL_180;
  v147 = 0LL;
  v148 = 1;
  do
  {
    if ( v147 >= (unsigned int)v146 )
      sub_1B88814(Instance, v26);
    v149 = v145->m_Items[v147];
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
      if ( !v149 )
        goto LABEL_226;
      Instance = (int64_t)PartyListViewItem__GetMember(v149, j, 0LL);
      if ( !Instance )
        goto LABEL_226;
      v151 = (PartyOrganizationListViewItem_o *)Instance;
      if ( *(_QWORD *)(Instance + 112) )
      {
        v152 = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Instance, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v152, 0LL);
        if ( !v144 )
          goto LABEL_226;
        items = v144->fields._items;
        v154 = Method_System_Collections_Generic_List_int__Add__;
        ++v144->fields._version;
        if ( !items )
          goto LABEL_226;
        size = v144->fields._size;
        v26 = (const MethodInfo *)(unsigned int)Instance;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v144,
            Instance,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
          if ( !v148 )
            continue;
        }
        else
        {
          v144->fields._size = size + 1;
          items->m_Items[size + 1] = Instance;
          if ( !v148 )
            continue;
        }
        v156 = *p_userServantEntity;
        if ( !*p_userServantEntity )
          goto LABEL_226;
        v157 = v151->fields.userServantEntity;
        if ( !v157 )
          goto LABEL_226;
        v158 = *(_OWORD *)&v157->fields.id.fields.fakeValue;
        *(_OWORD *)&item.fields.currentCryptoKey = *(_OWORD *)&v157->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&item.fields.fakeValue = v158;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v204 = item;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__Equals_46453872(&v156->fields.id, &v204, 0LL) )
        {
          v159 = PartyOrganizationListViewItem__GetEquipList(v151, 0LL);
          PartyServantListViewItem__SetEquipStatus(this, v159, v160);
          this->fields._OrganizedWave_k__BackingField = v148;
          v148 = 0;
          this->fields._IsClearedWave_k__BackingField = v149->fields._IsClearedWave_k__BackingField;
        }
      }
    }
    v145 = baseDeckItemList;
    ++v147;
    if ( v148 )
      ++v148;
    else
      v148 = 0;
    LODWORD(v146) = baseDeckItemList->max_length;
  }
  while ( (__int64)v147 < (int)v146 );
  if ( !v148 )
    goto LABEL_186;
LABEL_180:
  v162 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v161 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v232.fields.currentCryptoKey = v162;
  *(_QWORD *)&v232.fields.fakeValue = v161;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v232, 0LL);
  if ( !v144 )
    goto LABEL_226;
  if ( System_Collections_Generic_List_int___Contains(
         v144,
         Instance,
         (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    this->fields.isSame = 1;
  }
LABEL_186:
  v163 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___TypeInfo);
  System_Collections_Generic_List_ValueTuple_int__int__Int32Enum_____ctor(
    v163,
    (const MethodInfo_34AEDE4 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType____ctor__);
  if ( *p_questRestrictionInfo )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_226;
    v164 = DataManager__GetMasterData_object_(
             (DataManager_o *)Instance,
             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance || !v164 )
      goto LABEL_226;
    Instance = (int64_t)EventCampaignMaster__GetFriendshipUpCampaigns(
                          (EventCampaignMaster_o *)v164,
                          *(_QWORD *)(Instance + 104),
                          0LL);
    if ( Instance )
    {
      v165 = (System_Collections_Generic_List_object__o *)Instance;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v166 = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventQuestMaster___);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&item,
          v165,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
        v211 = *(System_Collections_Generic_List_Enumerator_object__o *)&item.fields.currentCryptoKey;
        while ( 1 )
        {
          v167 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v211,
                   (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
          if ( !v167 )
            break;
          current = (EventCampaignEntity_o *)v211.fields._current;
          if ( !v211.fields._current )
            sub_1B8880C(v167, v168);
          monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v211.fields._current[2].monitor;
          if ( monitor && monitor[1].monitor )
          {
            v172 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
            v171 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v233.fields.currentCryptoKey = v172;
            *(_QWORD *)&v233.fields.fakeValue = v171;
            v173 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v233, 0LL);
            v167 = System_Linq_Enumerable__Contains_int_(
                     monitor,
                     v173,
                     (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
            if ( !v167 )
              continue;
          }
          if ( !*p_questRestrictionInfo )
            sub_1B8880C(v167, v168);
          if ( !v166 )
            sub_1B8880C(v167, v168);
          if ( !EventQuestMaster__IsEventNotIncluded(
                  (EventQuestMaster_o *)v166,
                  current->fields.eventId,
                  (*p_questRestrictionInfo)->fields.questId,
                  (*p_questRestrictionInfo)->fields.questPhase,
                  7,
                  0LL,
                  0LL) )
          {
            v174 = current->fields.eventId;
            FriendshipBonusValue = EventCampaignEntity__GetFriendshipBonusValue(current, 0LL);
            calcType = current->fields.calcType;
            v177 = FriendshipBonusValue;
            LODWORD(item.fields.hiddenValue) = 0;
            item.fields.currentCryptoKey = 0LL;
            *(_QWORD *)&v220.fields.Item1 = &item;
            v220.fields.Item3 = v174;
            System_ValueTuple_int__int__Int32Enum____ctor(
              v220,
              v177,
              calcType,
              Method_System_ValueTuple_int__int__EventCombineEntity_CalcType___ctor__,
              v178);
            if ( !v163 )
              sub_1B8880C(v179, v180);
            v221 = *(System_ValueTuple_int__int__Int32Enum__o *)&item.fields.currentCryptoKey;
            v181 = v163->fields._items;
            v182 = Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___Add__;
            ++v163->fields._version;
            if ( !v181 )
              sub_1B8880C(v179, *(_QWORD *)&v221.fields.Item1);
            v183 = v163->fields._size;
            if ( (unsigned int)v183 >= v181->max_length )
            {
              System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____AddWithResize(
                v163,
                v221,
                *(const MethodInfo_34AF670 **)(*(_QWORD *)(v182[4] + 192LL) + 112LL));
            }
            else
            {
              v163->fields._size = v183 + 1;
              *((System_ValueTuple_int__int__Int32Enum__o *)v181->m_Items + v183) = v221;
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v211,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
        goto LABEL_209;
      }
      goto LABEL_226;
    }
  }
LABEL_209:
  if ( !v163 )
    goto LABEL_226;
  v184 = (struct System_ValueTuple_int__int__EventCombineEntity_CalcType__array *)System_Collections_Generic_List_ValueTuple_int__int__Int32Enum____ToArray(
                                                                                    v163,
                                                                                    (const MethodInfo_34B1234 *)Method_System_Collections_Generic_List_ValueTuple_int__int__EventCombineEntity_CalcType___ToArray__);
  this->fields._FriendshipUpValTuple_k__BackingField = v184;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
    (int32_t)v184,
    v185,
    v186);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_226;
  Instance = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
  v187 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v187 )
    goto LABEL_226;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v187, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v189,
    v190);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_226;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v192,
    v193);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_226;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_226;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_226;
  this->fields.priority = *(_DWORD *)(Instance + 48);
  PartyServantListViewItem__InitAfterSecondSort(this, v26);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_226;
  v194 = BalanceConfig_TypeInfo;
  v195 = *(_DWORD *)(Instance + 276);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v194 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v194->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v195;
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


void __fastcall PartyServantListViewItem___ctor_32292228(
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
  IconLabelInfo_o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  IconLabelInfo_o *v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  int64_t Instance; // x0
  const MethodInfo *v27; // x1
  struct PartyOrganizationListViewItem_o *MemberItem; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  struct PartyOrganizationListViewItem_o *baseItem; // x8
  struct UserServantEntity_o **p_userServantEntity; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *MasterData_object; // x0
  __int64 v40; // x21
  __int64 v41; // x27
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // x20
  Il2CppObject *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_servantEntity; // x27
  int32_t v45; // w2
  int32_t v46; // w3
  Il2CppObject *v47; // x20
  struct UserServantEntity_o *v48; // x8
  int32_t v49; // w29
  ServantLimitEntity_o *v50; // x29
  struct UserServantEntity_o *v51; // x8
  __int128 v52; // q1
  UserServantCollectionMaster_o *v53; // x20
  int64_t v54; // x21
  UserServantCollectionEntity_o *v55; // x20
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w2
  int32_t v59; // w3
  int32_t v60; // w2
  int32_t v61; // w3
  struct PartyOrganizationListViewItem_array *memberItemList; // x8
  int32_t v63; // w28
  PartyOrganizationListViewItem_o *v64; // x29
  struct UserServantEntity_o *v65; // x8
  __int128 v66; // q0
  struct UserServantEntity_o *v67; // x8
  __int128 v68; // q0
  int64_t v69; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v70; // x8
  __int64 v71; // x20
  __int64 v72; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *servantEntity; // x8
  int v74; // w20
  struct ServantEntity_o *v75; // x8
  __int64 v76; // x20
  __int64 v77; // x21
  int32_t v78; // w20
  int32_t v79; // w21
  System_Int64_array *EquipList; // x0
  const MethodInfo *v81; // x2
  int32_t cost; // w20
  UserServantEntity_o *v83; // x8
  bool IsChoice; // w8
  UserServantEntity_o *v85; // x8
  const MethodInfo *v86; // x1
  UserServantEntity_o *v87; // x8
  UserServantEntity_o *v88; // x8
  bool IsUniqueIndividualityRestriction_40210708; // w0
  const MethodInfo *v90; // x1
  struct QuestRestrictionInfo_o *v91; // x8
  UserEventServantFatigueMaster_o *v92; // x20
  int32_t eventId; // w24
  __int64 v94; // x21
  __int64 v95; // x25
  int64_t v96; // x20
  UserServantEntity_o *v97; // x8
  UserServantEntity_o *v98; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  BalanceConfig_c *v105; // x8
  int v106; // w20
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct PartyOrganizationListViewItem_o **p_baseItem; // [xsp+10h] [xbp-110h]
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // [xsp+18h] [xbp-108h]
  struct IconLabelInfo_o **p_iconLabelInfo3; // [xsp+20h] [xbp-100h]
  struct IconLabelInfo_o **p_iconLabelInfo2; // [xsp+28h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+30h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+90h] [xbp-90h]
  int64_t recoverAt; // [xsp+B0h] [xbp-70h] BYREF
  int32_t friendshipRank; // [xsp+BCh] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16

  if ( (byte_4A5722F & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CommonRestrictionMaster_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5722F = 1;
  }
  friendshipRank = 0;
  recoverAt = 0LL;
  v17 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0LL);
  this->fields.iconLabelInfo1 = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo1, (int32_t)v17, v18, v19);
  v20 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v20, 0LL);
  this->fields.iconLabelInfo2 = v20;
  p_iconLabelInfo2 = &this->fields.iconLabelInfo2;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo2, (int32_t)v20, v21, v22);
  v23 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v23, 0LL);
  this->fields.iconLabelInfo3 = v23;
  p_iconLabelInfo3 = &this->fields.iconLabelInfo3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconLabelInfo3, (int32_t)v23, v24, v25);
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.memberIndex = num;
  if ( !partyItem )
    goto LABEL_87;
  MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, num, 0LL);
  this->fields.baseItem = MemberItem;
  p_baseItem = &this->fields.baseItem;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseItem, (int32_t)MemberItem, v29, v30);
  baseItem = this->fields.baseItem;
  this->fields.isSelectLeader = num == 0;
  if ( !baseItem )
    goto LABEL_87;
  this->fields.isSelectEmpty = baseItem->fields.userServantEntity == 0LL;
  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    v31,
    v32);
  this->fields.tutorialMode = tutorialMode;
  this->fields.setupInfo = setupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v35, v36);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v37,
    v38);
  if ( !this->fields.userServantEntity )
    goto LABEL_87;
  this->fields.svtId = this->fields.userServantEntity->fields.svtId;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v41 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v40 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v42 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v118.fields.currentCryptoKey = v41;
  *(_QWORD *)&v118.fields.fakeValue = v40;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v118, 0LL);
  if ( !v42 )
    goto LABEL_87;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v42,
             Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.servantEntity = (struct ServantEntity_o *)Entity;
  p_servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.servantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)Entity, v45, v46);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  v47 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.svtId, 0LL);
  v48 = this->fields.userServantEntity;
  if ( !v48 )
    goto LABEL_87;
  v49 = Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v48->fields.limitCount, 0LL);
  if ( !v47 )
    goto LABEL_87;
  v50 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v47, v49, Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v51 = *p_userServantEntity;
  if ( !*p_userServantEntity )
    goto LABEL_87;
  v52 = *(_OWORD *)&v51->fields.userId.fields.fakeValue;
  v53 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v115.fields.currentCryptoKey = *(_OWORD *)&v51->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v115.fields.fakeValue = v52;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v114 = v115;
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v114, 0LL);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.svtId, 0LL);
  if ( !v53 )
    goto LABEL_87;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(v53, v54, Instance, 0LL);
  if ( !*p_servantEntity )
    goto LABEL_87;
  this->fields.classId = (*p_servantEntity)[5].fields.currentCryptoKey;
  if ( !v50 )
    goto LABEL_87;
  this->fields.rarityId = v50->fields.rarity;
  if ( !userServantEntity )
    goto LABEL_87;
  v55 = (UserServantCollectionEntity_o *)Instance;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  Instance = UserServantEntity__getFrameType(userServantEntity, 0LL);
  this->fields.frameType = Instance;
  if ( !v55 )
    goto LABEL_87;
  UserServantCollectionEntity__getFriendShipRankInfo(v55, &friendshipRank, &this->fields.friendshipMax, 0LL);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(friendshipRank, 0LL);
  this->fields.isBase = 0;
  *(_WORD *)&this->fields.isCostOver = 0;
  this->fields.partyIndex = -1;
  this->fields.commonRestrictionId = -1;
  this->fields.equipUserServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipUserServantEntity, 0, v56, v57);
  this->fields.equipServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, 0, v58, v59);
  this->fields.equipIdList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipIdList, 0, v60, v61);
  memberItemList = partyItem->fields.memberItemList;
  if ( !memberItemList )
    goto LABEL_87;
  v63 = 0;
  while ( v63 < (signed int)memberItemList->max_length )
  {
    Instance = (int64_t)WarBoardPartyListViewItem__GetMemberItem(partyItem, v63, 0LL);
    if ( !Instance )
      goto LABEL_87;
    v64 = (PartyOrganizationListViewItem_o *)Instance;
    if ( *(_QWORD *)(Instance + 112) )
    {
      v65 = *p_userServantEntity;
      if ( !*p_userServantEntity )
        goto LABEL_87;
      v66 = *(_OWORD *)&v65->fields.id.fields.fakeValue;
      *(_OWORD *)&v115.fields.currentCryptoKey = *(_OWORD *)&v65->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v115.fields.fakeValue = v66;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v113 = v115;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v113, 0LL);
      v67 = v64->fields.userServantEntity;
      if ( !v67 )
        goto LABEL_87;
      v68 = *(_OWORD *)&v67->fields.id.fields.fakeValue;
      v69 = Instance;
      *(_OWORD *)&v112.fields.currentCryptoKey = *(_OWORD *)&v67->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v112.fields.fakeValue = v68;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v112, 0LL);
      if ( v69 == Instance )
      {
        this->fields.isSame = 0;
        this->fields.isBase = num == v63;
        this->fields.partyIndex = v63;
        EquipList = PartyOrganizationListViewItem__GetEquipList(v64, 0LL);
        PartyServantListViewItem__SetEquipStatus(this, EquipList, v81);
        break;
      }
      if ( num != v63 )
      {
        v70 = *p_servantEntity;
        if ( !*p_servantEntity )
          goto LABEL_87;
        v72 = *(_QWORD *)&v70[2].fields.currentCryptoKey;
        v71 = *(_QWORD *)&v70[2].fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v119.fields.currentCryptoKey = v72;
        *(_QWORD *)&v119.fields.fakeValue = v71;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v119, 0LL);
        servantEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v64->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_87;
        v74 = Instance;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(servantEntity[2], 0LL);
        if ( v74 == (_DWORD)Instance )
        {
          this->fields.isSame = 1;
        }
        else if ( this->fields.commonRestrictionId == -1 )
        {
          v75 = v64->fields.servantEntity;
          if ( !v75 )
            goto LABEL_87;
          v77 = *(_QWORD *)&v75->fields.baseSvtId.fields.currentCryptoKey;
          v76 = *(_QWORD *)&v75->fields.baseSvtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v120.fields.currentCryptoKey = v77;
          *(_QWORD *)&v120.fields.fakeValue = v76;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v120, 0LL);
          if ( !*p_servantEntity )
            goto LABEL_87;
          v78 = Instance;
          v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_servantEntity)[2], 0LL);
          if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
          Instance = CommonRestrictionMaster__GetIncludedRestrictionIds(v78, v79, 0LL);
          if ( (Instance & 0x80000000) == 0 )
            this->fields.commonRestrictionId = Instance;
        }
      }
    }
    memberItemList = partyItem->fields.memberItemList;
    ++v63;
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
  v83 = this->fields.userServantEntity;
  this->fields.isLock = Instance & 1;
  if ( !v83 )
    goto LABEL_87;
  IsChoice = UserServantEntity__IsChoice(v83, 0LL);
  Instance = (int64_t)this->fields.userServantEntity;
  this->fields.isChoice = IsChoice;
  *(_WORD *)&this->fields.isSwapLock = 0;
  this->fields.isInvalidRarity = 0;
  *(_DWORD *)&this->fields.isLockMode = 0;
  this->fields.isEnabled = 1;
  if ( !Instance )
    goto LABEL_87;
  Instance = UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
  v85 = this->fields.userServantEntity;
  this->fields.isEventJoin = Instance & 1;
  if ( !v85 )
    goto LABEL_87;
  this->fields.isLeave = UserServantEntity__IsLeave(v85, 0LL);
  *(_QWORD *)&this->fields.bonusKind = 1LL;
  this->fields.isEventUpVal = 0;
  Instance = PartyServantListViewItem__ChkQuestRestriction(this, v86);
  v87 = this->fields.userServantEntity;
  this->fields.isQuestRestriction = Instance & 1;
  if ( !v87 )
    goto LABEL_87;
  Instance = UserServantEntity__getUniqueSvtRestriction_40210332(
               v87,
               this->fields.questRestrictionInfo,
               0LL,
               num,
               this->fields.partyIndex,
               0LL);
  v88 = this->fields.userServantEntity;
  this->fields.isUniqueSvtRestriction = Instance & 1;
  if ( !v88 )
    goto LABEL_87;
  IsUniqueIndividualityRestriction_40210708 = UserServantEntity__IsUniqueIndividualityRestriction_40210708(
                                                v88,
                                                this->fields.questRestrictionInfo,
                                                0LL,
                                                num,
                                                this->fields.partyIndex,
                                                0LL);
  this->fields.isFatigureRecover = 0;
  this->fields.isUniqueIndividualityRestriction = IsUniqueIndividualityRestriction_40210708;
  this->fields.fatigureTime = -1LL;
  v91 = this->fields.questRestrictionInfo;
  if ( v91 && v91->fields.isFatigure )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
      if ( *p_questRestrictionInfo )
      {
        v92 = (UserEventServantFatigueMaster_o *)Instance;
        eventId = (*p_questRestrictionInfo)->fields.eventId;
        v95 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v94 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v121.fields.currentCryptoKey = v95;
        *(_QWORD *)&v121.fields.fakeValue = v94;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v121, 0LL);
        if ( v92 )
        {
          if ( UserEventServantFatigueMaster__GetFatigueInfo(
                 v92,
                 &recoverAt,
                 &this->fields.isFatigureRecover,
                 eventId,
                 Instance,
                 0LL) )
          {
            v96 = recoverAt;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( v96 > NetworkManager__getTime(0LL) )
              this->fields.fatigureTime = recoverAt;
          }
          goto LABEL_73;
        }
      }
    }
LABEL_87:
    sub_1B8880C(Instance, v27);
  }
LABEL_73:
  Instance = PartyServantListViewItem__GetAllOutBattleAlreadyUsed(this, v90);
  v97 = this->fields.userServantEntity;
  this->fields._IsAllOutBattle_k__BackingField = Instance & 1;
  if ( !v97 )
    goto LABEL_87;
  Instance = UserServantEntity__getDispLimitCount(v97, 0, 0LL);
  v98 = this->fields.userServantEntity;
  this->fields.dispLimitCount = Instance;
  if ( !v98 )
    goto LABEL_87;
  SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v98, -1, 0LL);
  this->fields.skillCategoryIdList = SkillCategoryIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.skillCategoryIdList,
    (int32_t)SkillCategoryIdList,
    v100,
    v101);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_87;
  TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                   (UserServantEntity_o *)Instance,
                                   0,
                                   0LL);
  this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.tdCategoryIdList,
    (int32_t)TreasureDeviceCategoryIdList,
    v103,
    v104);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_87;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                        this->fields.classId,
                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_87;
  this->fields.priority = *(_DWORD *)(Instance + 48);
  PartyServantListViewItem__InitAfterSecondSort(this, v27);
  Instance = (int64_t)this->fields.userServantEntity;
  if ( !Instance )
    goto LABEL_87;
  v105 = BalanceConfig_TypeInfo;
  v106 = *(_DWORD *)(Instance + 276);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v105 = BalanceConfig_TypeInfo;
    Instance = (int64_t)*p_userServantEntity;
  }
  static_fields = v105->static_fields;
  this->fields.hpReinforceValue = static_fields->StatusUpAdjustHp * v106;
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
  if ( (byte_4A57230 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A57230 = 1;
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
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v33, 0LL);
  v7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
  if ( !v7 )
    goto LABEL_38;
  v8 = (int)this;
  this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v7[6], 0LL);
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
  if ( !QuestRestrictionInfo__IsRestriction_40436712(
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
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v34, 0LL);
    v16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
    if ( !v16 )
      goto LABEL_38;
    v17 = (int)this;
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
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
    this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v35, 0LL);
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
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                               v36,
                                               0LL);
        v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.userServantEntity;
        if ( v28 )
        {
          v29 = (int)this;
          this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
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
    sub_1B8880C(this, method);
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
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x22
  __int64 v9; // x23
  UserEventAlloutBattleMaster_o *v10; // x21
  struct QuestRestrictionInfo_o *v11; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A57235 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57235 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !questRestrictionInfo->fields.isAllOutBattle )
    return 0;
  allOutBattleGroupNo = questRestrictionInfo->fields.allOutBattleGroupNo;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventAlloutBattleMaster___);
  v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v10 = (UserEventAlloutBattleMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v9;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
  v11 = this->fields.questRestrictionInfo;
  if ( !v11 || !v10 )
LABEL_13:
    sub_1B8880C(Instance, v6);
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
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A57238 & 1) == 0 )
  {
    sub_1B885B0(&TreasureDvcInfo_TypeInfo);
    byte_4A57238 = 1;
  }
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
    return UserServantEntity__getTreasureDeviceInfo(userServantEntity, tdInfo, -1, -1, 0, 0LL);
  v7 = (TreasureDvcInfo_o *)sub_1B887FC(TreasureDvcInfo_TypeInfo);
  TreasureDvcInfo___ctor(v7, 0LL);
  *tdInfo = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)tdInfo, (int32_t)v7, v8, v9);
  return 0;
}


System_String_o *__fastcall PartyServantListViewItem__GetRestrictionMessage(
        PartyServantListViewItem_o *this,
        const MethodInfo *method)
{
  int32_t commonRestrictionId; // w19

  if ( (byte_4A57234 & 1) == 0 )
  {
    sub_1B885B0(&CommonRestrictionMaster_TypeInfo);
    byte_4A57234 = 1;
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
  if ( (byte_4A57239 & 1) == 0 )
  {
    this = (PartyServantListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A57239 = 1;
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
      v2->fields.sortValue2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v8, 0LL);
      v2->fields.sortValue2B = 0LL;
      return;
    }
LABEL_14:
    sub_1B8880C(this, method);
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
  v2->fields.sortValue2B = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v9, 0LL);
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
  __int64 v16; // x1
  _BOOL4 isChoice; // w8
  FilterKindList_c *v18; // x0
  ListViewSort_FilterKind_array *v19; // x21
  UserServantEntity_o *v21; // x0
  int32_t dispLimitCount; // w21
  UserServantEntity_o *v23; // x8
  struct System_Int32_array *SkillCategoryIdList; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Int32_array *TreasureDeviceCategoryIdList; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  _BOOL4 IsUnSelectedAllTargetFilters; // w21
  _BOOL4 v31; // w23
  _BOOL4 IsMatchEffectCategory; // w22
  _BOOL4 v33; // w0

  if ( (byte_4A57232 & 1) == 0 )
  {
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&ListViewSort_FilterKind___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    sub_1B885B0(&ServantEventBonusFilterController_TypeInfo);
    byte_4A57232 = 1;
  }
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  ClassGroupFilterKindList = (__int64)System_Collections_Generic_List_Int32Enum___ToArray(
                                        (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                        (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !sort )
    goto LABEL_65;
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, (ListViewSort_FilterKind_array *)ClassGroupFilterKindList, 0LL) )
  {
    v7 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v7 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (__int64)v7->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_65;
    v8 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                            (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v9 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v9->static_fields->NpTypeFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( !ListViewSort__IsUnSelectedAllTargetFilters(sort, v10, 0LL)
    && !ListViewSort__IsMatchNPTypeFilter(sort, this->fields.userServantEntity, 0LL) )
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
LABEL_65:
    sub_1B8880C(ClassGroupFilterKindList, sort);
  v12 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    if ( !ServantEventBonusFilterController_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantEventBonusFilterController_TypeInfo);
    if ( ServantEventBonusFilterController__IsHideServant(userServantEntity, sort, eventId, 0LL) )
      return 0;
  }
  if ( !ListViewSort__CheckSvtEquipEffectFilterDefaultAll(sort, 0LL) )
  {
    v21 = this->fields.userServantEntity;
    if ( v21 )
    {
      dispLimitCount = this->fields.dispLimitCount;
      if ( dispLimitCount != UserServantEntity__getDispLimitCount(v21, 0, 0LL) )
      {
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_65;
        ClassGroupFilterKindList = UserServantEntity__getDispLimitCount(
                                     (UserServantEntity_o *)ClassGroupFilterKindList,
                                     0,
                                     0LL);
        v23 = this->fields.userServantEntity;
        this->fields.dispLimitCount = ClassGroupFilterKindList;
        if ( !v23 )
          goto LABEL_65;
        SkillCategoryIdList = UserServantEntity__GetSkillCategoryIdList(v23, -1, 0LL);
        this->fields.skillCategoryIdList = SkillCategoryIdList;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.skillCategoryIdList,
          (int32_t)SkillCategoryIdList,
          v25,
          v26);
        ClassGroupFilterKindList = (__int64)this->fields.userServantEntity;
        if ( !ClassGroupFilterKindList )
          goto LABEL_65;
        TreasureDeviceCategoryIdList = UserServantEntity__GetTreasureDeviceCategoryIdList(
                                         (UserServantEntity_o *)ClassGroupFilterKindList,
                                         0,
                                         0LL);
        this->fields.tdCategoryIdList = TreasureDeviceCategoryIdList;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.tdCategoryIdList,
          (int32_t)TreasureDeviceCategoryIdList,
          v28,
          v29);
      }
    }
    ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_65;
    v16 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
      goto LABEL_66;
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 50;
    IsUnSelectedAllTargetFilters = ListViewSort__IsUnSelectedAllTargetFilters(
                                     sort,
                                     (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
                                     0LL);
    ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
    if ( !ClassGroupFilterKindList )
      goto LABEL_65;
    v16 = ClassGroupFilterKindList;
    if ( !*(_DWORD *)(ClassGroupFilterKindList + 24) )
LABEL_66:
      sub_1B88814(ClassGroupFilterKindList, v16);
    *(_DWORD *)(ClassGroupFilterKindList + 32) = 51;
    v31 = ListViewSort__IsUnSelectedAllTargetFilters(
            sort,
            (ListViewSort_FilterKind_array *)ClassGroupFilterKindList,
            0LL);
    IsMatchEffectCategory = ServantEquipEffectFilterController__IsMatchEffectCategory(
                              this->fields.tdCategoryIdList,
                              sort,
                              0LL);
    v33 = ServantEquipEffectFilterController__IsMatchEffectCategory(this->fields.skillCategoryIdList, sort, 0LL);
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
  }
  ClassGroupFilterKindList = sub_1B88658(ListViewSort_FilterKind___TypeInfo, 1LL);
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  v16 = ClassGroupFilterKindList;
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
  v18 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v18 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (__int64)v18->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_65;
  v19 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           (System_Collections_Generic_List_T__o *)ClassGroupFilterKindList,
                                           (const MethodInfo_34E4AF4 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  return ListViewSort__IsUnSelectedAllTargetFilters(sort, v19, 0LL)
      || ListViewSort__IsSelectedAllTargetFilters(sort, v19, 0LL)
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
    sub_1B8880C(0LL, method);
  this->fields.isChoice = UserServantEntity__IsChoice(userServantEntity, 0LL);
  this->fields.isSwapChoice = 0;
}


void __fastcall PartyServantListViewItem__ModifyItem(
        PartyServantListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  UserServantEntity_o **p_userServantEntity; // x20
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  this->fields.userServantEntity = userServantEntity;
  p_userServantEntity = &this->fields.userServantEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userServantEntity,
    (int32_t)userServantEntity,
    (int32_t)method,
    v3);
  if ( !*p_userServantEntity )
    sub_1B8880C(0LL, v6);
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
    sub_1B8880C(0LL, method);
  this->fields.isLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  this->fields.isSwapLock = 0;
}


void __fastcall PartyServantListViewItem__SetEquipStatus(
        PartyServantListViewItem_o *this,
        System_Int64_array *equipIds,
        const MethodInfo *method)
{
  int32_t v3; // w3
  Il2CppObject **p_equipUserServantEntity; // x20
  ServantStatusBattleListViewItem_o *p_equipServantEntity; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Int64_array **p_equipIdList; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  struct System_Int64_array *v15; // x8
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x22
  __int64 v20; // x1
  BalanceConfig_c *v21; // x0
  struct System_Int64_array *v22; // x8
  Il2CppObject *v23; // x8
  void *monitor; // x21
  Il2CppClass *klass; // x22
  Il2CppObject *v26; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x20
  void *v28; // x21
  Il2CppClass *v29; // x22
  Il2CppObject *Entity; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4A57231 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A57231 = 1;
  }
  p_equipUserServantEntity = (Il2CppObject **)&this->fields.equipUserServantEntity;
  this->fields.equipUserServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipUserServantEntity, 0, (int32_t)method, v3);
  p_equipServantEntity = (ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity;
  this->fields.equipServantEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipServantEntity, 0, v8, v9);
  this->fields.equipIdList = 0LL;
  p_equipIdList = &this->fields.equipIdList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_equipIdList, 0, v11, v12);
  if ( !*(p_equipIdList - 1) )
    return;
  if ( !equipIds )
    goto LABEL_9;
  v15 = *p_equipIdList;
  if ( *p_equipIdList == equipIds )
    goto LABEL_14;
  v16 = System_Array__Clone((System_Array_o *)equipIds, 0LL);
  if ( v16 )
  {
    v19 = v16;
    v20 = sub_1B886EC(v16, long___TypeInfo);
    if ( !v20 )
    {
      sub_1B88ACC(v19);
LABEL_9:
      v21 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v21 = BalanceConfig_TypeInfo;
      }
      v20 = sub_1B88658(long___TypeInfo, (unsigned int)v21->static_fields->SvtEquipMax);
    }
  }
  else
  {
    v20 = 0LL;
  }
  *p_equipIdList = (struct System_Int64_array *)v20;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_equipIdList, v20, v17, v18);
  v15 = *p_equipIdList;
LABEL_14:
  if ( !v15 )
    goto LABEL_35;
  if ( !v15->max_length )
    goto LABEL_36;
  if ( v15->m_Items[0] < 1 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  v22 = *p_equipIdList;
  if ( !*p_equipIdList )
    goto LABEL_35;
  if ( !v22->max_length )
LABEL_36:
    sub_1B88814(Master_object, v14);
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    p_equipUserServantEntity,
                                    v22->m_Items[0],
                                    (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v23 = *p_equipUserServantEntity;
    if ( !*p_equipUserServantEntity )
      goto LABEL_35;
    klass = v23[5].klass;
    monitor = v23[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v33.fields.currentCryptoKey = klass;
    *(_QWORD *)&v33.fields.fakeValue = monitor;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v33, 0LL) >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
      v26 = *p_equipUserServantEntity;
      if ( *p_equipUserServantEntity )
      {
        v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        v29 = v26[5].klass;
        v28 = v26[5].monitor;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v34.fields.currentCryptoKey = v29;
        *(_QWORD *)&v34.fields.fakeValue = v28;
        Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v34, 0LL);
        if ( v27 )
        {
          Entity = DataMasterBase_object__object__int___GetEntity(
                     v27,
                     (int32_t)Master_object,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          p_equipServantEntity->klass = (ServantStatusBattleListViewItem_c *)Entity;
          sub_1B88554(p_equipServantEntity, (int32_t)Entity, v31, v32);
          return;
        }
      }
LABEL_35:
      sub_1B8880C(Master_object, v14);
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
  __int64 methodPtr_low; // x11
  struct ListViewManager_o *v7; // x21
  struct EventUpValSetupInfo_o *setupInfo; // x8
  int32_t bonusKind; // w8
  EventUpValSetupInfo_o *v10; // x21
  UserServantEntity_o *userServantEntity; // x22
  int32_t ServantFilterEventId; // w23
  struct ListViewObject_o *viewObject; // x3
  UserServantEntity_o *v14; // x0
  EventUpValSetupInfo_o *v15; // x1
  int32_t v16; // w2
  int32_t bonusKind2; // w8
  int32_t v18; // w21
  int32_t bonusKindId; // w8
  int32_t v20; // w8
  int32_t v21; // w9
  int32_t v22; // w8
  int32_t bonusKind2Id; // w8
  Il2CppObject *v24; // x0
  __int64 v25; // x22
  __int64 v26; // x23
  EventCampaignMaster_o *v27; // x21
  bool v28; // w0
  UserServantEntity_o *v29; // x22
  EventUpValSetupInfo_o *v30; // x23
  bool IsEnableServant; // w0
  Il2CppObject *Master_object; // x0
  __int64 v33; // x22
  __int64 v34; // x23
  EventCampaignMaster_o *v35; // x21
  System_Collections_Generic_List_EventGroupEntity__o *EntitiesByGroupId; // x21
  System_Func_object__bool__o *v37; // x0
  __int64 *v38; // x8
  System_Func_T__bool__o *v39; // x22
  PartyServantListViewItem_c *v40; // x0
  _BOOL4 isChoice; // w22
  struct PartyServantListViewItem_StaticFields *static_fields; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x9
  int64_t PRIORITY_NORMAL; // x10
  __int64 PRIORITY_LOWEST; // x8
  PartyServantListViewItem_c *v46; // x0
  __int64 PRIORITY_LOWEST_HEROIN_LEAVE; // x8
  struct ServantEntity_o *servantEntity; // x8
  struct ServantEntity_o *equipServantEntity; // x9
  int32_t cost; // w4
  struct UserServantEntity_o *v51; // x8
  __int128 v52; // q1
  struct UserServantEntity_o *v53; // x8
  int64_t rarityId; // x2
  struct UserServantEntity_o *v55; // x8
  int64_t hp; // x2
  int32_t adjustAtk; // w3
  int32_t v58; // w1
  struct UserServantEntity_o *v59; // x8
  struct UserServantEntity_o *equipUserServantEntity; // x9
  int32_t atk; // w4
  int32_t adjustHp; // w3
  int32_t v63; // w1
  struct UserServantEntity_o *v64; // x8
  struct UserServantEntity_o *v65; // x9
  struct ServantEntity_o *v66; // x8
  int64_t v67; // x8
  IconLabelInfo_o *iconLabelInfo2; // x19
  __int64 v69; // x20
  __int64 v70; // x21
  int32_t v71; // w0
  PartyServantListViewItem_o *v72; // x20
  int64_t v73; // x9
  struct ListViewManager_o *v74; // x8
  __int64 v75; // x11
  struct ListViewManager_o *v76; // x20
  struct QuestRestrictionInfo_o *v77; // x8
  int64_t fatigureTime; // x8
  int64_t iconLabelInfo1_low; // x20
  int64_t priority; // x9
  struct ServantEntity_o *v81; // x8
  IconLabelInfo_o *v82; // x21
  int32_t v83; // w3
  IconLabelInfo_o *v84; // x0
  int32_t v85; // w2
  int32_t iconLabelInfo1; // w20
  __int64 v87; // x21
  __int64 v88; // x22
  const MethodInfo *v89; // x2
  struct ServantEntity_o *v90; // x8
  __int64 collectionNo; // x10
  struct UserServantEntity_o *v92; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+30h] [xbp-60h]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o friendship; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v101; // 0:x0.16

  v4 = this;
  if ( (byte_4A57233 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_EventGroupEntity___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantFilterMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventGroupMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_Func_EventGroupEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_PartyServantListViewItem__SetSortValue_b__118_0__);
    sub_1B885B0(&Method_PartyServantListViewItem__SetSortValue_b__118_1__);
    sub_1B885B0(&PartyServantListViewItem_TypeInfo);
    sub_1B885B0(&PartyServantListViewManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    this = (PartyServantListViewItem_o *)sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A57233 = 1;
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
      v7 = sort->fields.manager;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  setupInfo = v4->fields.setupInfo;
  if ( !setupInfo )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (PartyServantListViewItem_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_26;
    if ( !v7 )
      goto LABEL_213;
    if ( !BYTE1(v7[1].fields.clipRange.fields.y) )
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
        this = (PartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventGroupMaster___);
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
            v37 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventGroupEntity__bool__TypeInfo);
            v38 = &Method_PartyServantListViewItem__SetSortValue_b__118_0__;
LABEL_85:
            v39 = (System_Func_T__bool__o *)v37;
            System_Func_object__bool____ctor(v37, (Il2CppObject *)v4, *v38, 0LL);
            v4->fields.isEventUpVal = BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)EntitiesByGroupId,
                                        v39,
                                        (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_EventGroupEntity___);
          }
        }
        goto LABEL_86;
      case 3:
        if ( v4->fields.bonusKind == 3 )
        {
          v20 = sort->fields.bonusKindId;
          if ( v4->fields.bonusKindId == v20 )
            goto LABEL_86;
        }
        else
        {
          v20 = sort->fields.bonusKindId;
        }
        v4->fields.bonusKind = 3;
        v4->fields.bonusKindId = v20;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
        v34 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
        v33 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
        v35 = (EventCampaignMaster_o *)Master_object;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v98.fields.currentCryptoKey = v34;
        *(_QWORD *)&v98.fields.fakeValue = v33;
        this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                               v98,
                                               0LL);
        if ( !v35 )
          goto LABEL_213;
        IsEnableServant = EventCampaignMaster__IsEnableServant(v35, (int32_t)this, v4->fields.bonusKindId, 0LL);
        goto LABEL_67;
      case 4:
      case 5:
        if ( v4->fields.bonusKind == bonusKind )
          goto LABEL_86;
        v4->fields.bonusKind = bonusKind;
        v10 = v4->fields.setupInfo;
        v4->fields.bonusKindId = sort->fields.bonusKindId;
        if ( !v10 )
          goto LABEL_213;
        userServantEntity = v4->fields.userServantEntity;
        ServantFilterEventId = EventUpValSetupInfo__get_ServantFilterEventId(v10, 0LL);
        this = (PartyServantListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !this || !userServantEntity )
          goto LABEL_213;
        viewObject = this->fields.viewObject;
        v14 = userServantEntity;
        v15 = v10;
        v16 = ServantFilterEventId;
        goto LABEL_54;
      case 7:
        if ( v4->fields.bonusKind == 7 )
        {
          v21 = v4->fields.bonusKindId;
          v22 = sort->fields.bonusKindId;
LABEL_48:
          if ( v21 == v22 )
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
          v22 = sort->fields.bonusKindId;
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
      this = (PartyServantListViewItem_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventGroupMaster___);
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
      v37 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_EventGroupEntity__bool__TypeInfo);
      v38 = &Method_PartyServantListViewItem__SetSortValue_b__118_1__;
      goto LABEL_85;
    case 3:
      v4->fields.bonusKind = 3;
      v4->fields.bonusKindId = sort->fields.bonusKind2Id;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v24 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
      v26 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v25 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      v27 = (EventCampaignMaster_o *)v24;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v97.fields.currentCryptoKey = v26;
      *(_QWORD *)&v97.fields.fakeValue = v25;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v97, 0LL);
      if ( !v27 )
        goto LABEL_213;
      v28 = EventCampaignMaster__IsEnableServant(v27, (int32_t)this, v4->fields.bonusKindId, 0LL);
      v4->fields.isEventUpVal = v28;
      if ( !v28 )
        goto LABEL_105;
      goto LABEL_87;
    case 4:
    case 5:
      if ( v4->fields.bonusKind == bonusKind2 )
      {
        v18 = sort->fields.bonusKind2Id;
        if ( v4->fields.bonusKindId == v18 )
          goto LABEL_86;
      }
      else
      {
        v18 = sort->fields.bonusKind2Id;
      }
      v4->fields.bonusKind = bonusKind2;
      v4->fields.bonusKindId = v18;
      v29 = v4->fields.userServantEntity;
      v30 = v4->fields.setupInfo;
      this = (PartyServantListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this || !v29 )
        goto LABEL_213;
      viewObject = this->fields.viewObject;
      v14 = v29;
      v15 = v30;
      v16 = v18;
LABEL_54:
      IsEnableServant = UserServantEntity__getEventUpVal_40205120(v14, v15, v16, (int64_t)viewObject, 0LL);
      goto LABEL_67;
    case 7:
      if ( v4->fields.bonusKind == 7 )
      {
        v21 = v4->fields.bonusKindId;
        v22 = sort->fields.bonusKind2Id;
        goto LABEL_48;
      }
      v22 = sort->fields.bonusKind2Id;
      break;
    default:
      goto LABEL_87;
  }
LABEL_64:
  v4->fields.bonusKind = 7;
  v4->fields.bonusKindId = v22;
  this = (PartyServantListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_213;
  this = (PartyServantListViewItem_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantFilterMaster___);
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
  v40 = PartyServantListViewItem_TypeInfo;
  if ( v4->fields.isSwapChoice )
    isChoice = !v4->fields.isChoice;
  else
    isChoice = v4->fields.isChoice;
  if ( !PartyServantListViewItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo);
    v40 = PartyServantListViewItem_TypeInfo;
  }
  static_fields = v40->static_fields;
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
        if ( !v40->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v40);
          v40 = PartyServantListViewItem_TypeInfo;
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
        if ( !v40->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v40);
          v40 = PartyServantListViewItem_TypeInfo;
        }
        v4->fields.sortValue0B = v40->static_fields->PRIORITY_TOP;
      }
      this = (PartyServantListViewItem_o *)v4->fields.servantEntity;
      if ( !this )
        goto LABEL_213;
      if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)this, 0LL) )
        goto LABEL_133;
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( !TutorialFlag__Get_37688364(126, 0LL) )
        goto LABEL_133;
      v46 = PartyServantListViewItem_TypeInfo;
      if ( !PartyServantListViewItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyServantListViewItem_TypeInfo);
        v46 = PartyServantListViewItem_TypeInfo;
      }
      PRIORITY_LOWEST_HEROIN_LEAVE = v46->static_fields->PRIORITY_LOWEST_HEROIN_LEAVE;
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
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
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
  IconLabelInfo__Set_38140136((IconLabelInfo_o *)this, 7, servantEntity->fields.cost, 0, cost, 0, 0, 0, 0LL);
  this = (PartyServantListViewItem_o *)(&dword_0 + 1);
  switch ( sort->fields.sortKind )
  {
    case 1:
      v51 = v4->fields.userServantEntity;
      if ( !v51 )
        goto LABEL_213;
      v52 = *(_OWORD *)&v51->fields.id.fields.fakeValue;
      *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)&v51->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v95.fields.fakeValue = v52;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v94 = v95;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                             &v94,
                                             0LL);
      v53 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (int64_t)this;
      if ( !v53 )
        goto LABEL_213;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_213;
      IconLabelInfo__SetTime((IconLabelInfo_o *)this, 49, v53->fields.createdAt, 0, 0, 0, 0LL);
      goto LABEL_196;
    case 2:
      rarityId = v4->fields.rarityId;
      v55 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = rarityId;
      if ( !v55 )
        goto LABEL_213;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      if ( !this )
        goto LABEL_213;
      IconLabelInfo__Set_38140136(
        (IconLabelInfo_o *)this,
        36,
        rarityId,
        v55->fields.exceedCount,
        0,
        0,
        0,
        v55->fields.lv,
        0LL);
      goto LABEL_202;
    case 3:
      goto LABEL_187;
    case 4:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      if ( !this )
        goto LABEL_213;
      UserServantEntity__getTreasureDeviceInfo_40212352((UserServantEntity_o *)this, &tdMaxLv[1], tdMaxLv, 0LL);
      LODWORD(hp) = tdMaxLv[1];
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = tdMaxLv[1];
      if ( !this )
        goto LABEL_213;
      adjustAtk = tdMaxLv[0];
      v58 = 33;
      goto LABEL_195;
    case 5:
      v59 = v4->fields.userServantEntity;
      if ( !v59 )
        goto LABEL_213;
      equipUserServantEntity = v4->fields.equipUserServantEntity;
      hp = v59->fields.hp;
      if ( equipUserServantEntity )
      {
        atk = equipUserServantEntity->fields.hp;
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = atk + (int)hp;
        if ( !this )
          goto LABEL_213;
        adjustHp = v59->fields.adjustHp;
        v63 = 46;
        goto LABEL_160;
      }
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_213;
      adjustAtk = v59->fields.adjustHp;
      v58 = 3;
      goto LABEL_195;
    case 6:
      v64 = v4->fields.userServantEntity;
      if ( !v64 )
        goto LABEL_213;
      v65 = v4->fields.equipUserServantEntity;
      hp = v64->fields.atk;
      if ( v65 )
      {
        atk = v65->fields.atk;
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = atk + (int)hp;
        if ( !this )
          goto LABEL_213;
        adjustHp = v64->fields.adjustAtk;
        v63 = 47;
LABEL_160:
        IconLabelInfo__Set_38140136((IconLabelInfo_o *)this, v63, hp, adjustHp, atk, 0, 0, 0, 0LL);
      }
      else
      {
        this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
        v4->fields.sortValue1 = hp;
        if ( !this )
          goto LABEL_213;
        adjustAtk = v64->fields.adjustAtk;
        v58 = 5;
LABEL_195:
        IconLabelInfo__Set_38140136((IconLabelInfo_o *)this, v58, hp, adjustAtk, 0, 0, 0, 0, 0LL);
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
      v83 = (int)this;
      v84 = iconLabelInfo2;
      v85 = iconLabelInfo1;
      goto LABEL_201;
    case 7:
      v66 = v4->fields.servantEntity;
      if ( !v66 )
        goto LABEL_213;
      v67 = v66->fields.cost;
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
LABEL_164:
      v4->fields.sortValue1 = v67;
      if ( !this )
        goto LABEL_213;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      goto LABEL_198;
    case 8:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      v67 = -v4->fields.priority;
      goto LABEL_164;
    case 0xA:
      v69 = *(_QWORD *)&v4->fields.friendship.fields.currentCryptoKey;
      v70 = *(_QWORD *)&v4->fields.friendship.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v99.fields.currentCryptoKey = v69;
      *(_QWORD *)&v99.fields.fakeValue = v70;
      v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v99, 0LL);
      v72 = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v73 = v71;
      friendship = v4->fields.friendship;
      v4->fields.sortValue1 = v73;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                             friendship,
                                             0LL);
      if ( !v72 )
        goto LABEL_213;
      adjustAtk = v4->fields.friendshipMax;
      LODWORD(hp) = (_DWORD)this;
      v58 = 32;
      this = v72;
      goto LABEL_195;
    case 0xE:
      this = (PartyServantListViewItem_o *)v4->fields.amountSortValue;
      if ( ((unsigned __int64)this & 0x8000000000000000LL) == 0 )
        goto LABEL_210;
      v74 = sort->fields.manager;
      if ( v74
        && (v75 = LOBYTE(PartyServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v74->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v75) )
      {
        if ( (PartyServantListViewManager_c *)v74->klass->_2.typeHierarchy[v75 - 1] == PartyServantListViewManager_TypeInfo )
          v76 = sort->fields.manager;
        else
          v76 = 0LL;
      }
      else
      {
        v76 = 0LL;
      }
      v88 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
      v87 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v101.fields.currentCryptoKey = v88;
      *(_QWORD *)&v101.fields.fakeValue = v87;
      this = (PartyServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                             v101,
                                             0LL);
      if ( !v76 )
        goto LABEL_213;
      this = (PartyServantListViewItem_o *)PartyServantListViewManager__GetAmountSortValue(
                                             (PartyServantListViewManager_o *)v76,
                                             (int32_t)this,
                                             v89);
      v4->fields.amountSortValue = (int64_t)this;
LABEL_210:
      v90 = v4->fields.servantEntity;
      if ( !v90 )
        goto LABEL_213;
      collectionNo = v90->fields.collectionNo;
      v92 = v4->fields.userServantEntity;
      v4->fields.sortValue1 = (((unsigned __int64)(unsigned int)v4->fields.rarityId << 32) + ((_QWORD)this << 48)) | collectionNo;
      if ( !v92 )
        goto LABEL_213;
      iconLabelInfo2 = v4->fields.iconLabelInfo1;
      iconLabelInfo1 = v92->fields.lv;
      this = (PartyServantListViewItem_o *)v92;
      goto LABEL_199;
    case 0xF:
      hp = v4->fields.hpReinforceValue;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_213;
      adjustAtk = v4->fields.nowMaxHpReinforceValue;
      v58 = 44;
      goto LABEL_195;
    case 0x10:
      hp = v4->fields.atkReinforceValue;
      this = (PartyServantListViewItem_o *)v4->fields.iconLabelInfo1;
      v4->fields.sortValue1 = hp;
      if ( !this )
        goto LABEL_213;
      adjustAtk = v4->fields.nowMaxAtkReinforceValue;
      v58 = 45;
      goto LABEL_195;
    case 0x19:
      v77 = v4->fields.questRestrictionInfo;
      if ( !v77 || !v77->fields.isFatigure )
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
          v82 = v4->fields.iconLabelInfo1;
          v4->fields.sortValue1 = iconLabelInfo1_low;
          goto LABEL_189;
        }
LABEL_213:
        sub_1B8880C(this, sort);
      }
      fatigureTime = v4->fields._SvtPoint_k__BackingField;
LABEL_183:
      this = (PartyServantListViewItem_o *)v4->fields.userServantEntity;
      v4->fields.sortValue1 = fatigureTime;
      if ( !this )
        goto LABEL_213;
      iconLabelInfo1_low = SLODWORD(this->fields.iconLabelInfo1);
      priority = v4->fields.priority;
      v81 = v4->fields.servantEntity;
      v4->fields.sortValue1B = iconLabelInfo1_low;
      v4->fields.sortValue2 = priority;
      if ( !v81 )
        goto LABEL_213;
      v82 = v4->fields.iconLabelInfo1;
      v4->fields.sortValue2B = iconLabelInfo1_low | ((unsigned __int64)(unsigned int)v4->fields.rarityId << 48) | ((__int64)v81->fields.collectionNo << 16);
LABEL_189:
      this = (PartyServantListViewItem_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)this, 0LL);
      if ( !v82 )
        goto LABEL_213;
      v83 = (int)this;
      v84 = v82;
      v85 = iconLabelInfo1_low;
LABEL_201:
      IconLabelInfo__Set_38140136(v84, 2, v85, v83, 0, 0, 0, 0, 0LL);
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

  if ( (byte_4A5723B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A5723B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v7;
  *(_QWORD *)&v15.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
  if ( !entity || !v8 )
    goto LABEL_18;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Instance, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !userServantEntity )
LABEL_18:
    sub_1B8880C(Instance, v10);
  return UserServantEntity__getEventUpVal_40205120(
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

  if ( (byte_4A5723C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantFilterMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A5723C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (EventCampaignMaster_o *)Master_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v7;
  *(_QWORD *)&v15.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
  if ( !entity || !v8 )
    goto LABEL_18;
  if ( EventCampaignMaster__IsEnableServant(v8, (int32_t)Instance, entity->fields.eventId, 0LL) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantFilterMaster___);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !userServantEntity )
LABEL_18:
    sub_1B8880C(Instance, v10);
  return UserServantEntity__getEventUpVal_40205120(
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
    sub_1B8880C(this, method);
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
  ServantEntity_o *servantEntity; // x19
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4A57237 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_19052/*"error"*/);
    byte_4A57237 = 1;
  }
  servantEntity = this->fields.servantEntity;
  if ( !servantEntity )
    return (System_String_o *)StringLiteral_19052/*"error"*/;
  userServantEntity = this->fields.userServantEntity;
  if ( userServantEntity )
  {
    v6 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&userServantEntity->fields.limitCount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL);
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

  if ( (byte_4A57236 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A57236 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6, 0LL);
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
    sub_1B8880C(this, method);
  return baseItem->fields._WaveEnemyClassIds_k__BackingField;
}


void __fastcall PartyServantListViewItem__set_FriendshipUpValTuple(
        PartyServantListViewItem_o *this,
        System_ValueTuple_int__int__EventCombineEntity_CalcType__array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._FriendshipUpValTuple_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._FriendshipUpValTuple_k__BackingField,
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