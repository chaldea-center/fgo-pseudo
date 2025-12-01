void PartyListViewItem___ctor(PartyListViewItem_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct PartyOrganizationListViewItem_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CC2C9F & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItem___TypeInfo);
    byte_4CC2C9F = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct PartyOrganizationListViewItem_array *)sub_1C71458(
                                                       PartyOrganizationListViewItem___TypeInfo,
                                                       (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.memberList = v4;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.memberList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void PartyListViewItem___ctor_34314756(
        PartyListViewItem_o *this,
        int32_t menuKind,
        int32_t index,
        int32_t maxCost,
        UserDeckEntity_o *deck,
        FollowerInfo_o *follower,
        int32_t followerClassId,
        int32_t followerGrandGraphId,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        int32_t followerDeckId,
        bool otherValidEventIdFilter,
        const MethodInfo *method)
{
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  PartyOrganizationListViewItem_o *Instance; // x0
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2
  struct DeckServant_o *deckInfo; // x8
  FollowerInfo_o *v36; // x26
  UserServantEntity_array *UserServantList; // x25
  int32_t FollowerIndex; // w0
  BalanceConfig_c *v39; // x8
  int32_t DeckMainMemberMax; // w24
  struct PartyOrganizationListViewItem_array *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int32_t v48; // w20
  struct DeckServant_o *v49; // x8
  struct DeckServantData_array *svts; // x8
  int32_t max_length; // w9
  DeckServantData_o *v52; // x8
  int32_t initPos; // w23
  int32_t v54; // w22
  UserServantEntity_array *v55; // x21
  struct PartyOrganizationListViewItem_array *v56; // x19
  PartyOrganizationListViewItem_o *v57; // x0
  PartyOrganizationListViewItem_o *v58; // x25
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  UserServantEntity_o *v65; // x21
  UserDeckEntity_o *v66; // x28
  System_Int64_array *EquipList; // x27
  Il2CppClass **v68; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v71; // x0
  UserServantEntity_array *v72; // [xsp+28h] [xbp-B8h]
  int32_t v73; // [xsp+34h] [xbp-ACh]
  struct PartyOrganizationListViewItem_array *v77; // [xsp+58h] [xbp-88h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+60h] [xbp-80h]

  if ( (byte_4CC2CA0 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CC2CA0 = 1;
  }
  ListViewItem___ctor_44097096((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v20, v21, v22, v23, v24, v25);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !deck )
    goto LABEL_57;
  PartyListViewItem__SetDeckName(this, deck->fields.name, v34);
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_57;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  v36 = follower;
  this->fields.id = deck->fields.id;
  UserServantList = UserDeckEntity__GetUserServantList(deck, 0);
  FollowerIndex = UserDeckEntity__GetFollowerIndex(deck, 0);
  v39 = BalanceConfig_TypeInfo;
  if ( FollowerIndex <= 0 )
  {
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v39 = BalanceConfig_TypeInfo;
    }
    DeckMainMemberMax = v39->static_fields->DeckMainMemberMax;
  }
  else
  {
    DeckMainMemberMax = FollowerIndex;
  }
  if ( !v39->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v39);
    v39 = BalanceConfig_TypeInfo;
  }
  v41 = (struct PartyOrganizationListViewItem_array *)sub_1C71458(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v39->static_fields->DeckMemberMax);
  this->fields.memberList = v41;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.memberList, (int32_t)v41, v42, v43, v44, v45, v46, v47);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  if ( *(_QWORD *)&Instance->fields.sortIndex )
  {
    Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      v36 = *(FollowerInfo_o **)&Instance->fields.sortIndex;
      Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        followerClassId = Instance->fields.sortValue0;
        Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          followerGrandGraphId = HIDWORD(Instance->fields.sortValue0);
          Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( Instance )
          {
            followerDeckId = Instance->fields.sortValue0B;
            goto LABEL_19;
          }
        }
      }
    }
LABEL_57:
    sub_1C71608(Instance, v33);
  }
LABEL_19:
  v48 = 0;
  v73 = DeckMainMemberMax;
  v72 = UserServantList;
  while ( 1 )
  {
    Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( v48 >= SHIDWORD(Instance->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
      break;
    v49 = deck->fields.deckInfo;
    if ( !v49 )
      goto LABEL_57;
    svts = v49->fields.svts;
    if ( !svts )
      goto LABEL_57;
    max_length = svts->max_length;
    if ( v48 >= max_length )
    {
      v54 = v48 + 1;
      initPos = v48 + 1;
    }
    else
    {
      if ( v48 >= (unsigned int)max_length )
        goto LABEL_58;
      v52 = svts->m_Items[v48];
      if ( !v52 )
        goto LABEL_57;
      initPos = v52->fields.initPos;
      v54 = v48 + 1;
    }
    if ( v54 == DeckMainMemberMax )
    {
      v55 = UserServantList;
      v56 = *p_memberList;
      v57 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
      v58 = v57;
      if ( v36 )
      {
        PartyOrganizationListViewItem___ctor_34444464(
          v57,
          v48,
          v36,
          followerClassId,
          followerGrandGraphId,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          followerDeckId,
          initPos,
          otherValidEventIdFilter,
          0);
        if ( !v56 )
          goto LABEL_57;
      }
      else
      {
        PartyOrganizationListViewItem___ctor_34482464(
          v57,
          v48,
          1,
          setupInfo,
          questRestrictionInfo,
          1,
          initPos,
          otherValidEventIdFilter,
          0);
        if ( !v56 )
          goto LABEL_57;
      }
      if ( v58 )
      {
        Instance = (PartyOrganizationListViewItem_o *)sub_1C714EC(v58, v56->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_59;
      }
      if ( (unsigned int)v48 >= LODWORD(v56->max_length) )
        goto LABEL_58;
      v68 = &v56->obj.klass + v48;
    }
    else
    {
      if ( !UserServantList )
        goto LABEL_57;
      if ( (unsigned int)v48 >= LODWORD(UserServantList->max_length) )
        goto LABEL_58;
      v65 = UserServantList->m_Items[v48];
      v77 = *p_memberList;
      if ( v65 )
      {
        v66 = deck;
        EquipList = UserDeckEntity__GetEquipList(deck, v48, 0);
        v58 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34471244(
          v58,
          v48,
          v65,
          EquipList,
          setupInfo,
          questRestrictionInfo,
          0,
          initPos,
          0,
          0,
          0,
          otherValidEventIdFilter,
          0);
        if ( !v77 )
          goto LABEL_57;
        if ( v58 )
        {
          Instance = (PartyOrganizationListViewItem_o *)sub_1C714EC(v58, v77->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_59;
        }
        if ( (unsigned int)v48 >= LODWORD(v77->max_length) )
          goto LABEL_58;
        deck = v66;
        v68 = &v77->obj.klass + v48;
        v55 = v72;
        DeckMainMemberMax = v73;
      }
      else
      {
        v55 = UserServantList;
        v58 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34482464(
          v58,
          v48,
          0,
          setupInfo,
          questRestrictionInfo,
          1,
          initPos,
          otherValidEventIdFilter,
          0);
        if ( !v77 )
          goto LABEL_57;
        if ( v58 )
        {
          Instance = (PartyOrganizationListViewItem_o *)sub_1C714EC(v58, v77->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_59:
            v71 = sub_1C7162C();
            sub_1C714D8(v71, 0);
          }
        }
        if ( (unsigned int)v48 >= LODWORD(v77->max_length) )
          goto LABEL_58;
        v68 = &v77->obj.klass + v48;
      }
    }
    v68[4] = (Il2CppClass *)v58;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v68 + 4), (int32_t)v58, v59, v60, v61, v62, v63, v64);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_57;
    if ( (unsigned int)v48 >= LODWORD(memberList->max_length) )
LABEL_58:
      sub_1C71610(Instance);
    Instance = memberList->m_Items[v48];
    if ( !Instance )
      goto LABEL_57;
    cost = this->fields.cost;
    UserServantList = v55;
    v48 = v54;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(Instance, 0) + cost;
  }
  PartyListViewItem__CheckRestriction(this, v33);
}


void PartyListViewItem___ctor_34316196(
        PartyListViewItem_o *this,
        bool *isBaseModify,
        int32_t menuKind,
        int32_t index,
        int32_t maxCost,
        UserEventDeckEntity_o *deck,
        FollowerInfo_o *follower,
        int32_t followerClassId,
        int32_t followerGrandGraphId,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        int32_t followerDeckId,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v14; // x28
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x24
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  const MethodInfo *v33; // x1
  struct System_String_o *DefaultDeckName; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  __int64 Instance; // x0
  unsigned __int64 SvtEquipMax; // x1
  const MethodInfo *v43; // x2
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo *v45; // x3
  int32_t FollowerIndex; // w25
  BalanceConfig_c *v47; // x0
  PartyListViewItem_o *v48; // x22
  int v49; // w27
  const MethodInfo *v50; // x2
  int32_t v51; // w23
  BalanceConfig_c *v52; // x0
  struct PartyOrganizationListViewItem_array *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  const MethodInfo *v60; // x2
  unsigned int v61; // w24
  struct DeckServant_o *v62; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v64; // x8
  int32_t *p_initPos; // x8
  int32_t v66; // w25
  const MethodInfo *v67; // x6
  int v68; // w27
  struct DeckServant_o *v69; // x8
  struct DeckServantData_array *v70; // x8
  DeckServantData_o *v71; // x8
  _BOOL4 v72; // w29
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v75; // x23
  int32_t v76; // w29
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v78; // x19
  int32_t v79; // w26
  PartyOrganizationListViewItem_o *v80; // x27
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  unsigned int max_length; // w8
  FollowerInfo_o *v88; // x23
  int32_t v89; // w29
  RestrictionEntity_o *GrandServantRestrictionEntity; // x23
  const MethodInfo *v91; // x6
  UserServantEntity_array *v92; // x26
  PartyOrganizationListViewItem_o *v93; // x0
  Il2CppClass **v94; // x27
  Il2CppClass *v95; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v96; // x27
  Il2CppClass *v97; // t1
  Il2CppClass *parent; // x23
  Il2CppClass *declaringType; // x29
  int32_t v100; // w23
  int32_t v101; // w29
  int32_t DispLimitCount; // w0
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x4
  int32_t v106; // w5
  int64_t v107; // x6
  System_String_o *v108; // x7
  System_Int64_array *v109; // x19
  UserServantEntity_o *v110; // x23
  struct PartyOrganizationListViewItem_array *v111; // x26
  QuestRestrictionInfo_o *v112; // x29
  int32_t v113; // w28
  unsigned int v114; // w8
  Il2CppClass **v115; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v118; // x1
  __int64 v119; // x0
  int32_t initPos; // [xsp+10h] [xbp-100h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+40h] [xbp-D0h]
  UserServantEntity_array *UserServantList; // [xsp+48h] [xbp-C8h]
  System_Int64_array *v125; // [xsp+50h] [xbp-C0h]
  int v126; // [xsp+58h] [xbp-B8h]
  int v127; // [xsp+5Ch] [xbp-B4h]
  int32_t followerGrandGraphIda; // [xsp+60h] [xbp-B0h]
  int32_t v130; // [xsp+74h] [xbp-9Ch]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+78h] [xbp-98h]
  _BOOL4 v132; // [xsp+84h] [xbp-8Ch]
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+94h] [xbp-7Ch] BYREF
  System_Int64_array *equipIdList; // [xsp+98h] [xbp-78h] BYREF
  int32_t followerClassIda; // [xsp+A4h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16

  v14 = questRestrictionInfo;
  if ( (byte_4CC2CA1 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&long___TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CC2CA1 = 1;
  }
  followera = 0;
  followerClassIda = 0;
  equipIdList = 0;
  isChangeFriendShipSvtEquipSkill = 0;
  ListViewItem___ctor_44097096((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v20, v21, v22, v23, v24, v25);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v33);
  this->fields.deckName = DefaultDeckName;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.deckName,
    (int32_t)DefaultDeckName,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( !deck )
    goto LABEL_130;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_130;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v43) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_130;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0);
  }
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0);
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0, v45);
  if ( FollowerIndex <= 0 )
  {
    v47 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v47 = BalanceConfig_TypeInfo;
    }
    FollowerIndex = v47->static_fields->DeckMainMemberMax;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_130;
  if ( *(int *)(Instance + 56) < 1 )
  {
    v48 = 0;
    v49 = 0;
    v132 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_130;
    v48 = *(PartyListViewItem_o **)(Instance + 80);
    v49 = 0;
    v132 = v48 == 0;
    if ( follower && v48 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_130;
      v49 = *(_DWORD *)(Instance + 56);
      Instance = (__int64)PartyListViewItem__GetMember(v48, v49 - 1, v50);
      if ( !Instance )
        goto LABEL_130;
      v51 = *(_DWORD *)(Instance + 372);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_130;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v51, follower, 0);
      v132 = 0;
    }
  }
  v52 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v52 = BalanceConfig_TypeInfo;
  }
  v53 = (struct PartyOrganizationListViewItem_array *)sub_1C71458(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v52->static_fields->DeckMemberMax);
  this->fields.memberList = v53;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.memberList, (int32_t)v53, v54, v55, v56, v57, v58, v59);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_130;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_130;
    follower = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_130;
    followerClassId = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_130;
    followerGrandGraphIda = *(_DWORD *)(Instance + 36);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_130;
    v130 = *(_DWORD *)(Instance + 40);
  }
  else
  {
    v130 = followerDeckId;
    followerGrandGraphIda = followerGrandGraphId;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || !Instance )
LABEL_130:
    sub_1C71608(Instance, SvtEquipMax);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)Instance,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0);
  v61 = 0;
  v126 = v49 - 1;
  v127 = FollowerIndex - 1;
  while ( 1 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v61 >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 172LL) )
      break;
    if ( v132 )
    {
      v62 = deck->fields.deckInfo;
      if ( !v62 )
        goto LABEL_130;
      svts = v62->fields.svts;
      if ( !svts )
        goto LABEL_130;
      if ( v61 >= LODWORD(svts->max_length) )
        goto LABEL_131;
      v64 = svts->m_Items[v61];
      if ( !v64 )
        goto LABEL_130;
      p_initPos = &v64->fields.initPos;
    }
    else
    {
      Instance = (__int64)PartyListViewItem__GetMember(v48, v61, v60);
      if ( !Instance )
        goto LABEL_130;
      p_initPos = (int32_t *)(Instance + 372);
    }
    v66 = *p_initPos;
    followera = 0;
    followerClassIda = 0;
    if ( !v14 )
      goto LABEL_130;
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43733304(v14, v66, 0);
    v68 = Instance;
    if ( (Instance & 1) != 0 )
    {
      v69 = deck->fields.deckInfo;
      if ( !v69 )
        goto LABEL_130;
      v70 = v69->fields.svts;
      if ( !v70 )
        goto LABEL_130;
      if ( v61 >= LODWORD(v70->max_length) )
        goto LABEL_131;
      v71 = v70->m_Items[v61];
      if ( !v71 )
        goto LABEL_130;
      v72 = 0;
      if ( v126 != v61 )
      {
        npcFollowerSvtId = v71->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v72 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  v66,
                  v67);
      }
    }
    else
    {
      v72 = 0;
    }
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_130;
    NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v66, 0);
    if ( NpcFollowerInfo && ((v68 ^ 1) & 1) == 0 )
    {
      v75 = NpcFollowerInfo;
      if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0) )
        v76 = 0;
      else
        v76 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v75, 0);
      v78 = *p_memberList;
      if ( IsNpc )
        v79 = 0;
      else
        v79 = v130;
      v80 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34444464(
        v80,
        v61,
        v75,
        v76,
        followerGrandGraphIda,
        setupInfo,
        v14,
        friendPointCampaignEntityList,
        0,
        v79,
        v66,
        0,
        0);
      if ( !v78 )
        goto LABEL_130;
      if ( v80 )
      {
        Instance = sub_1C714EC(v80, v78->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_132;
      }
      max_length = v78->max_length;
LABEL_121:
      if ( v61 >= max_length )
        goto LABEL_131;
      v115 = &v78->obj.klass + (int)v61;
      goto LABEL_123;
    }
    if ( v127 == v61 || v72 )
    {
      v88 = followera;
      v78 = *p_memberList;
      if ( followera )
      {
        v89 = followerClassIda;
        v80 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34444464(
          v80,
          v61,
          v88,
          v89,
          0,
          setupInfo,
          v14,
          friendPointCampaignEntityList,
          0,
          v130,
          v66,
          0,
          0);
        if ( !v78 )
          goto LABEL_130;
        if ( v80 )
        {
          Instance = sub_1C714EC(v80, v78->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_132;
        }
        max_length = v78->max_length;
      }
      else
      {
        v93 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
        v80 = v93;
        if ( follower )
          PartyOrganizationListViewItem___ctor_34444464(
            v93,
            v61,
            follower,
            followerClassId,
            followerGrandGraphIda,
            setupInfo,
            v14,
            friendPointCampaignEntityList,
            0,
            v130,
            v66,
            0,
            0);
        else
          PartyOrganizationListViewItem___ctor_34482464(v93, v61, 1, setupInfo, v14, 1, v66, 0, 0);
        if ( !v78 )
          goto LABEL_130;
        if ( v80 )
        {
          Instance = sub_1C714EC(v80, v78->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_132;
        }
        max_length = v78->max_length;
      }
      goto LABEL_121;
    }
    GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(v14, v66, 0);
    equipIdList = UserEventDeckEntity__GetEquipList(deck, v61, 0);
    Instance = UserEventDeckEntity__IsEquipTarget2SkillChange(deck, v61, 0);
    isChangeFriendShipSvtEquipSkill = Instance;
    if ( GrandServantRestrictionEntity )
    {
      Instance = (__int64)UserEventDeckEntity__GetGrandEquipList(deck, v61, 0);
      v92 = UserServantList;
      equipIdList = (System_Int64_array *)Instance;
      if ( !UserServantList )
        goto LABEL_130;
      if ( v61 >= LODWORD(UserServantList->max_length) )
        goto LABEL_131;
      PartyListViewItem__SetGrandServant(
        this,
        v66,
        v68 & 1,
        &UserServantList->m_Items[v61],
        &equipIdList,
        &isChangeFriendShipSvtEquipSkill,
        v91);
    }
    else
    {
      v92 = UserServantList;
      if ( (v68 & 1) != 0 )
      {
        if ( !UserServantList )
          goto LABEL_130;
        if ( v61 >= LODWORD(UserServantList->max_length) )
          goto LABEL_131;
        v94 = &UserServantList->obj.klass + (int)v61;
        v97 = v94[4];
        v96 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v94 + 4);
        v95 = v97;
        if ( v97 )
        {
          declaringType = v95->_1.declaringType;
          parent = v95->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v137.fields.currentCryptoKey = declaringType;
          *(_QWORD *)&v137.fields.fakeValue = parent;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v137, 0);
          if ( v61 >= LODWORD(UserServantList->max_length) )
            goto LABEL_131;
          if ( !*v96 )
            goto LABEL_130;
          v100 = Instance;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952((*v96)[6], 0);
          if ( v61 >= LODWORD(UserServantList->max_length) )
            goto LABEL_131;
          v101 = Instance;
          Instance = (__int64)*v96;
          if ( !*v96 )
            goto LABEL_130;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
          Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(v14, v100, v101, DispLimitCount, v66, 0, 0);
          if ( (Instance & 1) != 0 )
          {
            if ( v61 >= LODWORD(UserServantList->max_length) )
              goto LABEL_131;
            *v96 = 0;
            sub_1C71354((GrandQuestFolderBoardItem_o *)v96, 0, v103, v104, v105, v106, v107, v108);
          }
        }
      }
      v109 = equipIdList;
      if ( !equipIdList )
        goto LABEL_130;
      Instance = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (__int64)BalanceConfig_TypeInfo;
      }
      SvtEquipMax = *(unsigned int *)(*(_QWORD *)(Instance + 184) + 48LL);
      if ( (int)SvtEquipMax < SLODWORD(v109->max_length) )
      {
        if ( !*(_DWORD *)(Instance + 224) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          SvtEquipMax = (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax;
        }
        Instance = sub_1C71458(long___TypeInfo, SvtEquipMax);
        equipIdList = (System_Int64_array *)Instance;
      }
      if ( !UserServantList )
        goto LABEL_130;
    }
    if ( v61 >= LODWORD(v92->max_length) )
      goto LABEL_131;
    v110 = v92->m_Items[v61];
    v111 = *p_memberList;
    if ( v110 )
    {
      v112 = v14;
      v113 = isChangeFriendShipSvtEquipSkill;
      v125 = equipIdList;
      v80 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
      initPos = v113;
      v14 = v112;
      PartyOrganizationListViewItem___ctor_34471244(v80, v61, v110, v125, setupInfo, v112, 0, v66, 0, 0, initPos, 0, 0);
      if ( !v111 )
        goto LABEL_130;
      if ( v80 )
      {
        Instance = sub_1C714EC(v80, v111->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_132;
      }
      v114 = v111->max_length;
    }
    else
    {
      v80 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34482464(v80, v61, 0, setupInfo, v14, 1, v66, 0, 0);
      if ( !v111 )
        goto LABEL_130;
      if ( v80 )
      {
        Instance = sub_1C714EC(v80, v111->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_132:
          v119 = sub_1C7162C();
          sub_1C714D8(v119, 0);
        }
      }
      v114 = v111->max_length;
    }
    if ( v61 >= v114 )
      goto LABEL_131;
    v115 = &v111->obj.klass + (int)v61;
LABEL_123:
    v115[4] = (Il2CppClass *)v80;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v115 + 4), (int32_t)v80, v81, v82, v83, v84, v85, v86);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_130;
    if ( v61 >= LODWORD(memberList->max_length) )
LABEL_131:
      sub_1C71610(Instance);
    Instance = (__int64)memberList->m_Items[v61];
    if ( !Instance )
      goto LABEL_130;
    cost = this->fields.cost;
    ++v61;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)SvtEquipMax);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v118) )
    *isBaseModify = 1;
}


void PartyListViewItem___ctor_34322476(
        PartyListViewItem_o *this,
        bool *isBaseModify,
        int32_t menuKind,
        int32_t index,
        int32_t maxCost,
        UserEventDeckEntity_o *deck,
        FollowerInfo_o *follower,
        int32_t followerClassId,
        int32_t followerGrandGraphId,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        bool isFirstEnforceChange,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        int32_t followerDeckId,
        const MethodInfo *method)
{
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x24
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  const MethodInfo *v34; // x1
  struct System_String_o *DefaultDeckName; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  __int64 Instance; // x0
  unsigned __int64 SvtEquipMax; // x1
  const MethodInfo *v44; // x2
  struct DeckServant_o *deckInfo; // x8
  PartyListViewItem_o *v46; // x28
  unsigned int v47; // w23
  const MethodInfo *v48; // x2
  int32_t v49; // w19
  BalanceConfig_c *v50; // x0
  struct PartyOrganizationListViewItem_array *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  int32_t v58; // w8
  const MethodInfo *v59; // x2
  __int64 v60; // x26
  unsigned __int64 i; // x25
  int32_t *p_initPos; // x8
  struct DeckServant_o *v63; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v65; // x8
  int32_t initPos; // w29
  unsigned __int64 v67; // x8
  __int64 v68; // x9
  __int64 v69; // x23
  __int64 v70; // x24
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  __int64 v77; // x23
  const MethodInfo *v78; // x6
  int v79; // w24
  struct DeckServant_o *v80; // x8
  struct DeckServantData_array *v81; // x8
  DeckServantData_o *v82; // x8
  _BOOL4 v83; // w27
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v86; // x23
  int32_t v87; // w27
  bool IsNpc; // w0
  unsigned int *v89; // x20
  int32_t v90; // w19
  PartyOrganizationListViewItem_o *v91; // x24
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  unsigned __int64 v98; // x8
  FollowerInfo_o *v99; // x23
  int32_t v100; // w27
  unsigned int *v101; // x20
  PartyOrganizationListViewItem_o *v102; // x24
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x4
  int32_t v106; // w5
  int64_t v107; // x6
  System_String_o *v108; // x7
  RestrictionEntity_o *GrandServantRestrictionEntity; // x23
  const MethodInfo *v110; // x6
  unsigned int *v111; // x8
  PartyOrganizationListViewItem_o *v112; // x0
  __int64 v113; // x8
  __int64 v114; // x23
  __int64 v115; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v116; // x8
  int32_t v117; // w23
  int32_t v118; // w24
  int32_t DispLimitCount; // w0
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o *v122; // x4
  int32_t v123; // w5
  int64_t v124; // x6
  System_String_o *v125; // x7
  System_Int64_array *v126; // x20
  UserServantEntity_o *v127; // x23
  System_Int64_array *v128; // x27
  int32_t v129; // w19
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v132; // x1
  __int64 v133; // x0
  UserServantMaster_o *Master_object; // [xsp+30h] [xbp-110h]
  FollowerInfo_o *v136; // [xsp+40h] [xbp-100h]
  int32_t *m_Items; // [xsp+48h] [xbp-F8h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+50h] [xbp-F0h]
  int32_t followerGrandGraphIda; // [xsp+6Ch] [xbp-D4h]
  struct System_Int32_array *svtIdForceBattleList; // [xsp+70h] [xbp-D0h]
  unsigned int *v142; // [xsp+80h] [xbp-C0h]
  unsigned int *UserServantList; // [xsp+88h] [xbp-B8h]
  __int64 v144; // [xsp+90h] [xbp-B0h]
  int32_t v145; // [xsp+9Ch] [xbp-A4h]
  UserEventDeckEntity_o *v146; // [xsp+A0h] [xbp-A0h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+A8h] [xbp-98h]
  __int64 v148; // [xsp+B0h] [xbp-90h]
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+C4h] [xbp-7Ch] BYREF
  System_Int64_array *equipIdList; // [xsp+C8h] [xbp-78h] BYREF
  int32_t followerClassIda; // [xsp+D4h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+D8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v153; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v154; // 0:x0.16

  if ( (byte_4CC2CA2 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&long___TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CC2CA2 = 1;
  }
  followera = 0;
  followerClassIda = 0;
  equipIdList = 0;
  isChangeFriendShipSvtEquipSkill = 0;
  ListViewItem___ctor_44097096((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v21, v22, v23, v24, v25, v26);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v34);
  this->fields.deckName = DefaultDeckName;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.deckName,
    (int32_t)DefaultDeckName,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  if ( !deck )
    goto LABEL_151;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_151;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v44) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_151;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServantList = (unsigned int *)UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_151;
  if ( *(int *)(Instance + 56) < 1 )
  {
    v46 = 0;
    if ( !questRestrictionInfo )
      goto LABEL_15;
    goto LABEL_14;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_151;
  v46 = *(PartyListViewItem_o **)(Instance + 80);
  if ( questRestrictionInfo )
LABEL_14:
    QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0);
LABEL_15:
  v47 = 0;
  if ( follower && v46 )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_151;
    v47 = *(_DWORD *)(Instance + 56);
    Instance = (__int64)PartyListViewItem__GetMember(v46, v47 - 1, v48);
    if ( !Instance )
      goto LABEL_151;
    v49 = *(_DWORD *)(Instance + 372);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_151;
    PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v49, follower, 0);
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_151;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_151;
    follower = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_151;
    followerClassId = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_151;
    followerGrandGraphIda = *(_DWORD *)(Instance + 36);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_151;
    v145 = *(_DWORD *)(Instance + 40);
  }
  else
  {
    v145 = followerDeckId;
    followerGrandGraphIda = followerGrandGraphId;
  }
  v50 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v50 = BalanceConfig_TypeInfo;
  }
  v51 = (struct PartyOrganizationListViewItem_array *)sub_1C71458(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v50->static_fields->DeckMemberMax);
  this->fields.memberList = v51;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.memberList, (int32_t)v51, v52, v53, v54, v55, v56, v57);
  v58 = this->fields.menuKind;
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( v58 == 3 )
  {
    Instance = (__int64)*p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_151;
    Instance = (__int64)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList((QuestRestrictionInfo_o *)Instance, 0);
    if ( !*p_questRestrictionInfo )
      goto LABEL_151;
    v144 = Instance;
    svtIdForceBattleList = (*p_questRestrictionInfo)->fields.svtIdForceBattleList;
  }
  else
  {
    svtIdForceBattleList = 0;
    v144 = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || (v136 = follower, !Instance) )
LABEL_151:
    sub_1C71608(Instance, SvtEquipMax);
  m_Items = svtIdForceBattleList->m_Items;
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)Instance,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0);
  v148 = v47 - 1LL;
  v146 = deck;
  v142 = UserServantList + 8;
  v60 = 0;
  for ( i = 0; ; ++i )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= *(int *)(*(_QWORD *)(Instance + 184) + 172LL) )
      break;
    if ( v46 )
    {
      Instance = (__int64)PartyListViewItem__GetMember(v46, i, v59);
      if ( !Instance )
        goto LABEL_151;
      p_initPos = (int32_t *)(Instance + 372);
    }
    else
    {
      v63 = deck->fields.deckInfo;
      if ( !v63 )
        goto LABEL_151;
      svts = v63->fields.svts;
      if ( !svts )
        goto LABEL_151;
      if ( i >= LODWORD(svts->max_length) )
        goto LABEL_155;
      v65 = svts->m_Items[i];
      if ( !v65 )
        goto LABEL_151;
      p_initPos = &v65->fields.initPos;
    }
    initPos = *p_initPos;
    if ( this->fields.menuKind == 3 )
    {
      if ( !v144 )
        goto LABEL_151;
      if ( (__int64)i >= *(int *)(v144 + 24) )
      {
        v101 = (unsigned int *)*p_memberList;
        v102 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34482464(v102, i, 0, setupInfo, questRestrictionInfo, 1, initPos, 0, 0);
        if ( !v101 )
          goto LABEL_151;
        if ( v102 )
        {
          Instance = sub_1C714EC(v102, *(_QWORD *)(*(_QWORD *)v101 + 64LL));
          if ( !Instance )
          {
LABEL_156:
            v133 = sub_1C7162C();
            sub_1C714D8(v133, 0);
          }
        }
        if ( i >= v101[6] )
          goto LABEL_155;
        *(_QWORD *)&v101[2 * i + 8] = v102;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v101[v60 + 8], (int32_t)v102, v103, v104, v105, v106, v107, v108);
        goto LABEL_146;
      }
      if ( svtIdForceBattleList )
      {
        if ( v148 != i && isFirstEnforceChange )
        {
          v67 = *(unsigned int *)((char *)&off_18 + (_QWORD)svtIdForceBattleList);
          if ( (__int64)i < (int)v67 )
          {
            if ( i >= v67 )
              goto LABEL_155;
            SvtEquipMax = (unsigned int)m_Items[i];
            if ( (int)SvtEquipMax >= 1 )
            {
              if ( !UserServantList )
                goto LABEL_151;
              if ( i >= UserServantList[6] )
                goto LABEL_155;
              v68 = *(_QWORD *)&v142[2 * i];
              if ( !v68 )
                goto LABEL_69;
              v70 = *(_QWORD *)(v68 + 80);
              v69 = *(_QWORD *)(v68 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v153.fields.currentCryptoKey = v70;
              *(_QWORD *)&v153.fields.fakeValue = v69;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v153, 0);
              v67 = *(unsigned int *)((char *)&off_18 + (_QWORD)svtIdForceBattleList);
              if ( i >= v67 )
                goto LABEL_155;
              SvtEquipMax = (unsigned int)m_Items[i];
              if ( (_DWORD)Instance != (_DWORD)SvtEquipMax )
              {
LABEL_69:
                if ( i >= v67 )
                  goto LABEL_155;
                Instance = (__int64)Master_object;
                if ( !Master_object )
                  goto LABEL_151;
                Instance = (__int64)UserServantMaster__getSvtIdBattle(Master_object, SvtEquipMax, 0);
                v77 = Instance;
                if ( Instance )
                {
                  Instance = sub_1C714EC(Instance, *(_QWORD *)(*(_QWORD *)UserServantList + 64LL));
                  if ( !Instance )
                    goto LABEL_156;
                }
                if ( i >= UserServantList[6] )
                  goto LABEL_155;
                *(_QWORD *)&v142[2 * i] = v77;
                sub_1C71354((GrandQuestFolderBoardItem_o *)&v142[v60], v77, v71, v72, v73, v74, v75, v76);
                *isBaseModify = 1;
              }
            }
          }
        }
      }
    }
    followera = 0;
    followerClassIda = 0;
    if ( !questRestrictionInfo )
      goto LABEL_151;
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43733304(questRestrictionInfo, initPos, 0);
    v79 = Instance;
    if ( (Instance & 1) != 0 )
    {
      v80 = deck->fields.deckInfo;
      if ( !v80 )
        goto LABEL_151;
      v81 = v80->fields.svts;
      if ( !v81 )
        goto LABEL_151;
      if ( i >= LODWORD(v81->max_length) )
        goto LABEL_155;
      v82 = v81->m_Items[i];
      if ( !v82 )
        goto LABEL_151;
      v83 = 0;
      if ( v148 != i )
      {
        npcFollowerSvtId = v82->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v83 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v78);
      }
    }
    else
    {
      v83 = 0;
    }
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_151;
    NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, initPos, 0);
    if ( !NpcFollowerInfo || ((v79 ^ 1) & 1) != 0 )
    {
      if ( v148 != i && !v83 )
      {
        deck = v146;
        GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                          questRestrictionInfo,
                                          initPos,
                                          0);
        equipIdList = UserEventDeckEntity__GetEquipList(v146, i, 0);
        Instance = UserEventDeckEntity__IsEquipTarget2SkillChange(v146, i, 0);
        isChangeFriendShipSvtEquipSkill = Instance;
        if ( GrandServantRestrictionEntity )
        {
          Instance = (__int64)UserEventDeckEntity__GetGrandEquipList(v146, i, 0);
          equipIdList = (System_Int64_array *)Instance;
          if ( !UserServantList )
            goto LABEL_151;
          if ( i >= UserServantList[6] )
            goto LABEL_155;
          PartyListViewItem__SetGrandServant(
            this,
            initPos,
            v79 & 1,
            (UserServantEntity_o **)&v142[v60],
            &equipIdList,
            &isChangeFriendShipSvtEquipSkill,
            v110);
          v111 = UserServantList;
        }
        else
        {
          if ( (v79 & 1) != 0 )
          {
            if ( !UserServantList )
              goto LABEL_151;
            if ( i >= UserServantList[6] )
              goto LABEL_155;
            v113 = *(_QWORD *)&v142[2 * i];
            if ( v113 )
            {
              v115 = *(_QWORD *)(v113 + 80);
              v114 = *(_QWORD *)(v113 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v154.fields.currentCryptoKey = v115;
              *(_QWORD *)&v154.fields.fakeValue = v114;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v154, 0);
              if ( i >= UserServantList[6] )
                goto LABEL_155;
              v116 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v142[2 * i];
              if ( !v116 )
                goto LABEL_151;
              v117 = Instance;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v116[6], 0);
              if ( i >= UserServantList[6] )
LABEL_155:
                sub_1C71610(Instance);
              v118 = Instance;
              Instance = *(_QWORD *)&v142[2 * i];
              if ( !Instance )
                goto LABEL_151;
              DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
              Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                           questRestrictionInfo,
                           v117,
                           v118,
                           DispLimitCount,
                           initPos,
                           0,
                           0);
              if ( (Instance & 1) != 0 )
              {
                if ( i >= UserServantList[6] )
                  goto LABEL_155;
                *(_QWORD *)&v142[2 * i] = 0;
                sub_1C71354((GrandQuestFolderBoardItem_o *)&v142[v60], 0, v120, v121, v122, v123, v124, v125);
              }
            }
          }
          v126 = equipIdList;
          if ( !equipIdList )
            goto LABEL_151;
          Instance = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Instance = (__int64)BalanceConfig_TypeInfo;
          }
          SvtEquipMax = *(unsigned int *)(*(_QWORD *)(Instance + 184) + 48LL);
          if ( (int)SvtEquipMax < SLODWORD(v126->max_length) )
          {
            if ( !*(_DWORD *)(Instance + 224) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              SvtEquipMax = (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax;
            }
            Instance = sub_1C71458(long___TypeInfo, SvtEquipMax);
            equipIdList = (System_Int64_array *)Instance;
          }
          v111 = UserServantList;
          if ( !UserServantList )
            goto LABEL_151;
        }
        if ( i >= v111[6] )
          goto LABEL_155;
        v127 = *(UserServantEntity_o **)&v142[2 * i];
        v89 = (unsigned int *)*p_memberList;
        if ( v127 )
        {
          v128 = equipIdList;
          v129 = isChangeFriendShipSvtEquipSkill;
          v91 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34471244(
            v91,
            i,
            v127,
            v128,
            setupInfo,
            questRestrictionInfo,
            0,
            initPos,
            0,
            0,
            v129,
            0,
            0);
          if ( !v89 )
            goto LABEL_151;
          goto LABEL_138;
        }
        v91 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34482464(v91, i, 0, setupInfo, questRestrictionInfo, 1, initPos, 0, 0);
        if ( !v89 )
          goto LABEL_151;
      }
      else
      {
        v99 = followera;
        v89 = (unsigned int *)*p_memberList;
        if ( followera )
        {
          v100 = followerClassIda;
          v91 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34444464(
            v91,
            i,
            v99,
            v100,
            0,
            setupInfo,
            questRestrictionInfo,
            0,
            0,
            v145,
            initPos,
            0,
            0);
          if ( !v89 )
            goto LABEL_151;
LABEL_138:
          if ( v91 )
          {
            Instance = sub_1C714EC(v91, *(_QWORD *)(*(_QWORD *)v89 + 64LL));
            if ( !Instance )
              goto LABEL_156;
          }
          v98 = v89[6];
          deck = v146;
          goto LABEL_141;
        }
        v112 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
        v91 = v112;
        if ( v136 )
          PartyOrganizationListViewItem___ctor_34444464(
            v112,
            i,
            v136,
            followerClassId,
            followerGrandGraphIda,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v145,
            initPos,
            0,
            0);
        else
          PartyOrganizationListViewItem___ctor_34482464(v112, i, 1, setupInfo, questRestrictionInfo, 1, initPos, 0, 0);
        deck = v146;
        if ( !v89 )
          goto LABEL_151;
      }
    }
    else
    {
      v86 = NpcFollowerInfo;
      if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0) )
        v87 = 0;
      else
        v87 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v86, 0);
      v89 = (unsigned int *)*p_memberList;
      if ( IsNpc )
        v90 = 0;
      else
        v90 = v145;
      v91 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34444464(
        v91,
        i,
        v86,
        v87,
        followerGrandGraphIda,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v90,
        initPos,
        0,
        0);
      if ( !v89 )
        goto LABEL_151;
      deck = v146;
    }
    if ( v91 )
    {
      Instance = sub_1C714EC(v91, *(_QWORD *)(*(_QWORD *)v89 + 64LL));
      if ( !Instance )
        goto LABEL_156;
    }
    v98 = v89[6];
LABEL_141:
    if ( i >= v98 )
      goto LABEL_155;
    *(_QWORD *)&v89[2 * i + 8] = v91;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v89[v60 + 8], (int32_t)v91, v92, v93, v94, v95, v96, v97);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_151;
    if ( i >= LODWORD(memberList->max_length) )
      goto LABEL_155;
    Instance = (__int64)memberList->m_Items[i];
    if ( !Instance )
      goto LABEL_151;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                      + cost;
LABEL_146:
    v60 += 2;
  }
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)SvtEquipMax);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v132) )
    *isBaseModify = 1;
}


void PartyListViewItem___ctor_34325548(
        PartyListViewItem_o *this,
        int32_t menuKind,
        int32_t index,
        int32_t maxCost,
        int64_t userEquipId,
        FollowerInfo_o *follower,
        int32_t followerClassId,
        int32_t followerGrandGraphId,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        int32_t followerDeckId,
        const MethodInfo *method)
{
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  BalanceConfig_c *v38; // x0
  struct PartyOrganizationListViewItem_array *v39; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  Il2CppObject *Instance; // x0
  __int64 v48; // x1
  int32_t klass; // w23
  int32_t klass_high; // w27
  int32_t monitor; // w26
  struct PartyOrganizationListViewItem_array *v52; // x27
  PartyOrganizationListViewItem_o *v53; // x0
  PartyOrganizationListViewItem_o *v54; // x28
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w23
  const MethodInfo *v63; // x1
  int32_t i; // w23
  BalanceConfig_c *v65; // x0
  struct PartyOrganizationListViewItem_array *v66; // x26
  PartyOrganizationListViewItem_o *v67; // x24
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  Il2CppClass **v74; // x0
  struct PartyOrganizationListViewItem_array *v75; // x8
  int32_t v76; // w24
  __int64 v77; // x0

  if ( (byte_4CC2CA3 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC2CA3 = 1;
  }
  ListViewItem___ctor_44097096((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v19, v20, v21, v22, v23, v24);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.isDeckNameDefault = 0;
  v31 = StringLiteral_1/*""*/;
  this->fields.deckName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.deckName, v31, v32, v33, v34, v35, v36, v37);
  this->fields.userEquipId = userEquipId;
  this->fields.id = 0;
  v38 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v38 = BalanceConfig_TypeInfo;
  }
  v39 = (struct PartyOrganizationListViewItem_array *)sub_1C71458(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v38->static_fields->DeckMemberMax);
  this->fields.memberList = v39;
  p_memberList = &this->fields.memberList;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.memberList, (int32_t)v39, v41, v42, v43, v44, v45, v46);
  this->fields.cost = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  klass = followerClassId;
  if ( Instance[1].monitor )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    follower = (FollowerInfo_o *)Instance[1].monitor;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    klass = (int32_t)Instance[2].klass;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    klass_high = HIDWORD(Instance[2].klass);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    monitor = (int32_t)Instance[2].monitor;
    followerGrandGraphId = klass_high;
  }
  else
  {
    monitor = followerDeckId;
  }
  v52 = *p_memberList;
  v53 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
  v54 = v53;
  if ( follower )
  {
    PartyOrganizationListViewItem___ctor_34444464(
      v53,
      0,
      follower,
      klass,
      followerGrandGraphId,
      setupInfo,
      questRestrictionInfo,
      friendPointCampaignEntityList,
      0,
      monitor,
      0,
      0,
      0);
    if ( !v52 )
      goto LABEL_36;
  }
  else
  {
    PartyOrganizationListViewItem___ctor_34482464(v53, 0, 1, setupInfo, questRestrictionInfo, 1, 0, 0, 0);
    if ( !v52 )
      goto LABEL_36;
  }
  if ( v54 )
  {
    Instance = (Il2CppObject *)sub_1C714EC(v54, v52->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_38:
      v77 = sub_1C7162C();
      sub_1C714D8(v77, 0);
    }
  }
  if ( !LODWORD(v52->max_length) )
    goto LABEL_37;
  v52->m_Items[0] = v54;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v52->m_Items, (int32_t)v54, v55, v56, v57, v58, v59, v60);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_36;
  if ( !LODWORD(memberList->max_length) )
LABEL_37:
    sub_1C71610(Instance);
  Instance = (Il2CppObject *)memberList->m_Items[0];
  if ( !Instance )
LABEL_36:
    sub_1C71608(Instance, v48);
  cost = this->fields.cost;
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                    + cost;
  for ( i = 1; ; ++i )
  {
    v65 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v65 = BalanceConfig_TypeInfo;
    }
    if ( i >= v65->static_fields->DeckMemberMax )
      break;
    v66 = *p_memberList;
    v67 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_34482464(v67, i, 0, setupInfo, questRestrictionInfo, 1, 0, 0, 0);
    if ( !v66 )
      goto LABEL_36;
    if ( v67 )
    {
      Instance = (Il2CppObject *)sub_1C714EC(v67, v66->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_38;
    }
    if ( (unsigned int)i >= LODWORD(v66->max_length) )
      goto LABEL_37;
    v74 = &v66->obj.klass + i;
    v74[4] = (Il2CppClass *)v67;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v74 + 4), (int32_t)v67, v68, v69, v70, v71, v72, v73);
    v75 = this->fields.memberList;
    if ( !v75 )
      goto LABEL_36;
    if ( (unsigned int)i >= LODWORD(v75->max_length) )
      goto LABEL_37;
    Instance = (Il2CppObject *)v75->m_Items[i];
    if ( !Instance )
      goto LABEL_36;
    v76 = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                      + v76;
  }
  PartyListViewItem__CheckRestriction(this, v63);
}


void PartyListViewItem___ctor_34326476(
        PartyListViewItem_o *this,
        bool *isBaseModify,
        int32_t menuKind,
        int32_t index,
        int32_t maxCost,
        UserEventDeckEntity_o *deck,
        QuestRestrictionInfo_o *questRestrictionInfo,
        FollowerInfo_o *follower,
        int32_t followerClassId,
        int32_t followerGrandGraphId,
        EventUpValSetupInfo_o *setupInfo,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        int32_t followerDeckId,
        const MethodInfo *method)
{
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  __int64 IsNeedDeckPosReset; // x0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x2
  struct DeckServant_o *deckInfo; // x8
  int32_t servantNumMax; // w24
  const MethodInfo *v38; // x3
  PartyListViewItem_o *v39; // x27
  int v40; // w28
  const MethodInfo *v41; // x2
  int32_t v42; // w23
  int32_t FollowerIndex; // w25
  BalanceConfig_c *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  __int64 v51; // x9
  __int64 v52; // x28
  __int64 v53; // x23
  unsigned __int64 v54; // x8
  __int64 v55; // x27
  signed __int64 v56; // x26
  BalanceConfig_c *v57; // x0
  struct PartyOrganizationListViewItem_array *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  struct QuestRestrictionInfo_o *v65; // x8
  UserEventDeckEntity_o *v66; // x29
  unsigned int v67; // w19
  const MethodInfo *v68; // x2
  struct DeckServant_o *v69; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v71; // x8
  int32_t *p_initPos; // x8
  int32_t initPos; // w25
  const MethodInfo *v74; // x6
  int v75; // w26
  _BOOL4 v76; // w27
  struct DeckServant_o *v77; // x8
  struct DeckServantData_array *v78; // x8
  DeckServantData_o *v79; // x8
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v82; // x23
  int32_t v83; // w27
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v85; // x24
  int32_t v86; // w29
  PartyOrganizationListViewItem_o *v87; // x26
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  unsigned int max_length; // w8
  FollowerInfo_o *v95; // x23
  int32_t v96; // w27
  RestrictionEntity_o *GrandServantRestrictionEntity; // x23
  const MethodInfo *v98; // x6
  PartyOrganizationListViewItem_o *v99; // x0
  Il2CppClass **v100; // x8
  __int64 v101; // x26
  __int64 v102; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v103; // x26
  __int64 v104; // t1
  __int64 v105; // x23
  __int64 v106; // x27
  int32_t v107; // w23
  int32_t v108; // w27
  int32_t DispLimitCount; // w0
  int32_t v110; // w2
  int32_t v111; // w3
  System_String_o *v112; // x4
  int32_t v113; // w5
  int64_t v114; // x6
  System_String_o *v115; // x7
  System_Int64_array *v116; // x23
  __int64 SvtEquipMax; // x1
  UserServantEntity_o *v118; // x23
  struct PartyOrganizationListViewItem_array *v119; // x29
  System_Int64_array *v120; // x27
  int32_t v121; // w21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w21
  const MethodInfo *v124; // x1
  __int64 v125; // x0
  FollowerInfo_o *followerInfo; // [xsp+30h] [xbp-E0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+38h] [xbp-D8h]
  int v129; // [xsp+48h] [xbp-C8h]
  int v130; // [xsp+4Ch] [xbp-C4h]
  int v131; // [xsp+4Ch] [xbp-C4h]
  PartyListViewItem_o *v132; // [xsp+50h] [xbp-C0h]
  int32_t followerGrandGraphIda; // [xsp+58h] [xbp-B8h]
  int32_t v134; // [xsp+5Ch] [xbp-B4h]
  int32_t v135; // [xsp+6Ch] [xbp-A4h]
  UserEventDeckEntity_o *v136; // [xsp+70h] [xbp-A0h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+78h] [xbp-98h]
  _BOOL4 v138; // [xsp+84h] [xbp-8Ch]
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+94h] [xbp-7Ch] BYREF
  System_Int64_array *equipIdList; // [xsp+98h] [xbp-78h] BYREF
  int32_t followerClassIda; // [xsp+A4h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16

  if ( (byte_4CC2CA4 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&long___TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CC2CA4 = 1;
  }
  followera = 0;
  followerClassIda = 0;
  equipIdList = 0;
  isChangeFriendShipSvtEquipSkill = 0;
  ListViewItem___ctor_44097096((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v20, v21, v22, v23, v24, v25);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( !deck )
    goto LABEL_132;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_132;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  IsNeedDeckPosReset = PartyListViewItem__IsNeedDeckPosReset(this, deck, v35);
  if ( (IsNeedDeckPosReset & 1) != 0 )
  {
    IsNeedDeckPosReset = (__int64)deck->fields.deckInfo;
    if ( !IsNeedDeckPosReset )
      goto LABEL_132;
    DeckServant__ResetInitPos((DeckServant_o *)IsNeedDeckPosReset, 0);
  }
  if ( !questRestrictionInfo )
    goto LABEL_132;
  servantNumMax = questRestrictionInfo->fields.servantNumMax;
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_132;
  if ( *(int *)(IsNeedDeckPosReset + 56) < 1 )
  {
    v39 = 0;
    v40 = 0;
    v138 = 1;
  }
  else
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_132;
    v39 = *(PartyListViewItem_o **)(IsNeedDeckPosReset + 80);
    v40 = 0;
    v138 = v39 == 0;
    if ( followerInfo && v39 )
    {
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_132;
      v40 = *(_DWORD *)(IsNeedDeckPosReset + 56);
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v39, v40 - 1, v41);
      if ( !IsNeedDeckPosReset )
        goto LABEL_132;
      v42 = *(_DWORD *)(IsNeedDeckPosReset + 372);
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_132;
      PartyOrganizationUtility__SetNpcFollowerInfo(
        (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
        v42,
        followerInfo,
        0);
      v138 = 0;
    }
  }
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0, v38);
  if ( FollowerIndex > 0 || questRestrictionInfo->fields.isNotTransitionSupportList )
  {
    if ( FollowerIndex <= servantNumMax )
      goto LABEL_29;
  }
  else if ( FollowerIndex <= servantNumMax && questRestrictionInfo->fields.isNoSupportBattle )
  {
    goto LABEL_29;
  }
  *isBaseModify = 1;
  v44 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v44 = BalanceConfig_TypeInfo;
  }
  FollowerIndex = servantNumMax;
  if ( servantNumMax > v44->static_fields->DeckMainMemberMax )
  {
    FollowerIndex = v44->static_fields->DeckMainMemberMax;
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      FollowerIndex = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
    }
  }
LABEL_29:
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_132;
  v132 = v39;
  v130 = v40;
  if ( *(_QWORD *)(IsNeedDeckPosReset + 24) )
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_132;
    followerInfo = *(FollowerInfo_o **)(IsNeedDeckPosReset + 24);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_132;
    v134 = *(_DWORD *)(IsNeedDeckPosReset + 32);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_132;
    followerGrandGraphIda = *(_DWORD *)(IsNeedDeckPosReset + 36);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_132;
    v135 = *(_DWORD *)(IsNeedDeckPosReset + 40);
  }
  else
  {
    v135 = followerDeckId;
    followerGrandGraphIda = followerGrandGraphId;
    v134 = followerClassId;
  }
  v136 = deck;
  IsNeedDeckPosReset = (__int64)UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0);
  if ( !IsNeedDeckPosReset )
    goto LABEL_132;
  v51 = *(_QWORD *)(IsNeedDeckPosReset + 24);
  v52 = IsNeedDeckPosReset;
  if ( (int)v51 >= 1 )
  {
    v53 = 0;
    v54 = 0;
    v55 = IsNeedDeckPosReset + 32;
    do
    {
      if ( v54 >= (unsigned int)v51 )
LABEL_136:
        sub_1C71610(IsNeedDeckPosReset);
      v56 = v54 + 1;
      if ( servantNumMax < (int)v54 + 1 && *(_QWORD *)(v55 + 8 * v54) )
      {
        *isBaseModify = 1;
        if ( v54 >= *(unsigned int *)(v52 + 24) )
          goto LABEL_136;
        *(_QWORD *)(v55 + 8 * v54) = 0;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v55 + v53), 0, v45, v46, v47, v48, v49, v50);
      }
      LODWORD(v51) = *(_DWORD *)(v52 + 24);
      v53 += 8;
      v54 = v56;
    }
    while ( v56 < (int)v51 );
  }
  v57 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v57 = BalanceConfig_TypeInfo;
  }
  v58 = (struct PartyOrganizationListViewItem_array *)sub_1C71458(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v57->static_fields->DeckMemberMax);
  this->fields.memberList = v58;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.memberList, (int32_t)v58, v59, v60, v61, v62, v63, v64);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNeedDeckPosReset = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v65 = *p_questRestrictionInfo;
  v66 = deck;
  if ( !*p_questRestrictionInfo || !IsNeedDeckPosReset )
LABEL_132:
    sub_1C71608(IsNeedDeckPosReset, v34);
  v67 = 0;
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)IsNeedDeckPosReset,
                          v65->fields.questId,
                          v65->fields.questPhase,
                          0);
  v129 = v130 - 1;
  v131 = FollowerIndex - 1;
  while ( 1 )
  {
    IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v67 >= *(_DWORD *)(*(_QWORD *)(IsNeedDeckPosReset + 184) + 172LL) )
      break;
    if ( v138 )
    {
      v69 = v66->fields.deckInfo;
      if ( !v69 )
        goto LABEL_132;
      svts = v69->fields.svts;
      if ( !svts )
        goto LABEL_132;
      if ( v67 >= LODWORD(svts->max_length) )
        goto LABEL_136;
      v71 = svts->m_Items[v67];
      if ( !v71 )
        goto LABEL_132;
      p_initPos = &v71->fields.initPos;
    }
    else
    {
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v132, v67, v68);
      if ( !IsNeedDeckPosReset )
        goto LABEL_132;
      p_initPos = (int32_t *)(IsNeedDeckPosReset + 372);
    }
    initPos = *p_initPos;
    followera = 0;
    followerClassIda = 0;
    IsNeedDeckPosReset = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43733304(questRestrictionInfo, initPos, 0);
    v75 = IsNeedDeckPosReset;
    v76 = 0;
    if ( (IsNeedDeckPosReset & 1) != 0 )
    {
      v77 = v66->fields.deckInfo;
      if ( !v77 )
        goto LABEL_132;
      v78 = v77->fields.svts;
      if ( !v78 )
        goto LABEL_132;
      if ( v67 >= LODWORD(v78->max_length) )
        goto LABEL_136;
      v79 = v78->m_Items[v67];
      if ( !v79 )
        goto LABEL_132;
      v76 = 0;
      if ( v129 != v67 )
      {
        npcFollowerSvtId = v79->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v76 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v74);
      }
    }
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_132;
    NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo(
                        (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
                        initPos,
                        0);
    if ( NpcFollowerInfo && ((v75 ^ 1) & 1) == 0 )
    {
      v82 = NpcFollowerInfo;
      if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0) )
        v83 = 0;
      else
        v83 = v134;
      IsNpc = FollowerInfo__get_IsNpc(v82, 0);
      v85 = *p_memberList;
      if ( IsNpc )
        v86 = 0;
      else
        v86 = v135;
      v87 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34444464(
        v87,
        v67,
        v82,
        v83,
        followerGrandGraphIda,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v86,
        initPos,
        0,
        0);
      if ( !v85 )
        goto LABEL_132;
      if ( v87 )
      {
        IsNeedDeckPosReset = sub_1C714EC(v87, v85->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
          goto LABEL_137;
      }
      max_length = v85->max_length;
      v66 = v136;
      goto LABEL_97;
    }
    if ( v131 == v67 || v76 )
    {
      v95 = followera;
      v85 = *p_memberList;
      if ( followera )
      {
        v96 = followerClassIda;
        v87 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34444464(
          v87,
          v67,
          v95,
          v96,
          0,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v135,
          initPos,
          0,
          0);
LABEL_93:
        if ( !v85 )
          goto LABEL_132;
      }
      else
      {
        v99 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
        v87 = v99;
        if ( followerInfo )
        {
          PartyOrganizationListViewItem___ctor_34444464(
            v99,
            v67,
            followerInfo,
            v134,
            followerGrandGraphIda,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v135,
            initPos,
            0,
            0);
          goto LABEL_93;
        }
        PartyOrganizationListViewItem___ctor_34482464(v99, v67, 1, setupInfo, questRestrictionInfo, 1, initPos, 0, 0);
        if ( !v85 )
          goto LABEL_132;
      }
      if ( v87 )
      {
        IsNeedDeckPosReset = sub_1C714EC(v87, v85->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
          goto LABEL_137;
      }
      max_length = v85->max_length;
LABEL_97:
      if ( v67 >= max_length )
        goto LABEL_136;
      v100 = &v85->obj.klass + (int)v67;
      goto LABEL_127;
    }
    GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                      questRestrictionInfo,
                                      initPos,
                                      0);
    equipIdList = UserEventDeckEntity__GetEquipList(v66, v67, 0);
    IsNeedDeckPosReset = UserEventDeckEntity__IsEquipTarget2SkillChange(v66, v67, 0);
    isChangeFriendShipSvtEquipSkill = IsNeedDeckPosReset;
    if ( GrandServantRestrictionEntity )
    {
      IsNeedDeckPosReset = (__int64)UserEventDeckEntity__GetGrandEquipList(v66, v67, 0);
      equipIdList = (System_Int64_array *)IsNeedDeckPosReset;
      if ( v67 >= *(_DWORD *)(v52 + 24) )
        goto LABEL_136;
      PartyListViewItem__SetGrandServant(
        this,
        initPos,
        v75 & 1,
        (UserServantEntity_o **)(v52 + 8LL * (int)v67 + 32),
        &equipIdList,
        &isChangeFriendShipSvtEquipSkill,
        v98);
    }
    else
    {
      if ( (v75 & 1) != 0 )
      {
        if ( v67 >= *(_DWORD *)(v52 + 24) )
          goto LABEL_136;
        v101 = v52 + 8LL * (int)v67;
        v104 = *(_QWORD *)(v101 + 32);
        v103 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v101 + 32);
        v102 = v104;
        if ( v104 )
        {
          v106 = *(_QWORD *)(v102 + 80);
          v105 = *(_QWORD *)(v102 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v143.fields.currentCryptoKey = v106;
          *(_QWORD *)&v143.fields.fakeValue = v105;
          IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v143, 0);
          if ( v67 >= *(_DWORD *)(v52 + 24) )
            goto LABEL_136;
          if ( !*v103 )
            goto LABEL_132;
          v107 = IsNeedDeckPosReset;
          IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952((*v103)[6], 0);
          if ( v67 >= *(_DWORD *)(v52 + 24) )
            goto LABEL_136;
          v108 = IsNeedDeckPosReset;
          IsNeedDeckPosReset = (__int64)*v103;
          if ( !*v103 )
            goto LABEL_132;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)IsNeedDeckPosReset, 0, 0);
          IsNeedDeckPosReset = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                 questRestrictionInfo,
                                 v107,
                                 v108,
                                 DispLimitCount,
                                 initPos,
                                 0,
                                 0);
          if ( (IsNeedDeckPosReset & 1) != 0 )
          {
            if ( v67 >= *(_DWORD *)(v52 + 24) )
              goto LABEL_136;
            *v103 = 0;
            sub_1C71354((GrandQuestFolderBoardItem_o *)v103, 0, v110, v111, v112, v113, v114, v115);
          }
        }
      }
      v116 = equipIdList;
      if ( !equipIdList )
        goto LABEL_132;
      IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
      }
      SvtEquipMax = *(unsigned int *)(*(_QWORD *)(IsNeedDeckPosReset + 184) + 48LL);
      if ( (int)SvtEquipMax < SLODWORD(v116->max_length) )
      {
        if ( !*(_DWORD *)(IsNeedDeckPosReset + 224) )
        {
          j_il2cpp_runtime_class_init_0(IsNeedDeckPosReset);
          SvtEquipMax = (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax;
        }
        IsNeedDeckPosReset = sub_1C71458(long___TypeInfo, SvtEquipMax);
        equipIdList = (System_Int64_array *)IsNeedDeckPosReset;
      }
    }
    if ( v67 >= *(_DWORD *)(v52 + 24) )
      goto LABEL_136;
    v118 = *(UserServantEntity_o **)(v52 + 8LL * (int)v67 + 32);
    v119 = *p_memberList;
    if ( v118 )
    {
      v120 = equipIdList;
      v121 = isChangeFriendShipSvtEquipSkill;
      v87 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34471244(
        v87,
        v67,
        v118,
        v120,
        setupInfo,
        questRestrictionInfo,
        0,
        initPos,
        0,
        0,
        v121,
        0,
        0);
      if ( !v119 )
        goto LABEL_132;
    }
    else
    {
      v87 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34482464(v87, v67, 0, setupInfo, questRestrictionInfo, 1, initPos, 0, 0);
      if ( !v119 )
        goto LABEL_132;
    }
    if ( v87 )
    {
      IsNeedDeckPosReset = sub_1C714EC(v87, v119->obj.klass->_1.element_class);
      if ( !IsNeedDeckPosReset )
      {
LABEL_137:
        v125 = sub_1C7162C();
        sub_1C714D8(v125, 0);
      }
    }
    if ( v67 >= LODWORD(v119->max_length) )
      goto LABEL_136;
    v100 = &v119->obj.klass + (int)v67;
    v66 = v136;
LABEL_127:
    v100[4] = (Il2CppClass *)v87;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v100 + 4), (int32_t)v87, v88, v89, v90, v91, v92, v93);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_132;
    if ( v67 >= LODWORD(memberList->max_length) )
      goto LABEL_136;
    IsNeedDeckPosReset = (__int64)memberList->m_Items[v67];
    if ( !IsNeedDeckPosReset )
      goto LABEL_132;
    cost = this->fields.cost;
    ++v67;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)IsNeedDeckPosReset,
                          0)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, v34);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v124) )
    *isBaseModify = 1;
}


void PartyListViewItem___ctor_34329164(
        PartyListViewItem_o *this,
        bool *isBaseModify,
        int32_t menuKind,
        int32_t index,
        int32_t maxCost,
        UserEventDeckEntity_o *deck,
        QuestRestrictionInfo_o *questRestrictionInfo,
        EventUpValSetupInfo_o *setupInfo,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        bool isNew,
        FollowerInfo_o *follower,
        int32_t followerClassId,
        int32_t followerGrandGraphId,
        int32_t followerDeckId,
        const MethodInfo *method)
{
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  __int64 Instance; // x0
  unsigned __int64 SvtEquipMax; // x1
  const MethodInfo *v36; // x2
  UserEventDeckEntity_o *v37; // x20
  struct DeckServant_o *deckInfo; // x8
  System_Int64_array *NpcServantFollowerIds; // x23
  PartyListViewItem_o *v40; // x8
  const MethodInfo *v41; // x2
  int32_t v42; // w20
  int32_t DeckMemberMax; // w22
  FollowerInfo_array *QuestFollowerList; // x19
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  int max_length; // w8
  int i; // w19
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  bool v57; // w25
  int32_t v58; // w24
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v60; // w9
  int j; // w10
  QuestRestrictionInfo_SlotInfo_o *v62; // x11
  struct DeckServant_o *v63; // x8
  __int64 v64; // x29
  int v65; // w25
  int v66; // w28
  struct DeckServantData_array *svts; // x8
  PartyListViewItem___c__DisplayClass31_0_o *v68; // x19
  struct DeckServant_o *v69; // x8
  struct DeckServantData_array *v70; // x8
  DeckServantData_o *v71; // x8
  int64_t userSvtId; // x20
  System_Func_object__bool__o *v73; // x20
  BalanceConfig_c *v74; // x0
  _BOOL8 v75; // x0
  __int64 v76; // x1
  const MethodInfo *v77; // x2
  Il2CppClass *klass; // x20
  int v79; // w8
  Il2CppClass **v80; // x8
  __int64 NpcDeployIdx; // x0
  __int64 v82; // x1
  BalanceConfig_c *v83; // x0
  const MethodInfo *v84; // x2
  const MethodInfo *v85; // x3
  int32_t k; // w19
  struct DeckServant_o *v87; // x8
  struct DeckServantData_array *v88; // x8
  DeckServantData_o *v89; // x8
  int32_t UserServantDeployIndex; // w0
  unsigned int v91; // w20
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  __int64 v98; // x24
  Il2CppClass **v99; // x0
  BalanceConfig_c *v100; // x0
  struct PartyOrganizationListViewItem_array *v101; // x0
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *v104; // x4
  int32_t v105; // w5
  int64_t v106; // x6
  System_String_o *v107; // x7
  unsigned __int64 v108; // x24
  signed __int64 v109; // x28
  __int64 m; // x22
  BalanceConfig_c *v111; // x0
  PartyListViewItem___c__DisplayClass31_1_o *v112; // x25
  const MethodInfo *v113; // x2
  struct DeckServant_o *v114; // x8
  struct DeckServantData_array *v115; // x8
  DeckServantData_o *v116; // x8
  int32_t *p_initPos; // x8
  int32_t initPos; // w19
  unsigned int *v119; // x20
  PartyOrganizationListViewItem_o *v120; // x25
  int32_t v121; // w2
  int32_t v122; // w3
  System_String_o *v123; // x4
  int32_t v124; // w5
  int64_t v125; // x6
  System_String_o *v126; // x7
  const MethodInfo *v127; // x6
  bool v128; // w20
  int64_t v129; // x4
  FollowerInfo_o *v130; // x29
  bool IsNpc; // w0
  int32_t v132; // w8
  bool v133; // w0
  unsigned int *v134; // x23
  int32_t v135; // w20
  PartyOrganizationListViewItem_o *v136; // x28
  int32_t v137; // w2
  int32_t v138; // w3
  System_String_o *v139; // x4
  int32_t v140; // w5
  int64_t v141; // x6
  System_String_o *v142; // x7
  unsigned __int64 v143; // x20
  unsigned __int64 v144; // x8
  FollowerInfo_o *v145; // x29
  int32_t v146; // w25
  PartyOrganizationListViewItem_o *v147; // x0
  System_Func_object__bool__o *v148; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v149; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v150; // x25
  FollowerInfo_o *v151; // x29
  System_Collections_Generic_List_object__o *v152; // x20
  int32_t v153; // w25
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  int32_t v156; // w25
  RestrictionEntity_o *GrandServantRestrictionEntity; // x25
  const MethodInfo *v158; // x6
  UserServantEntity_array *v159; // x8
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v161; // x8
  int32_t classId; // w25
  UserServantEntity_o *v163; // x8
  __int64 v164; // x25
  __int64 v165; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v166; // x8
  int32_t v167; // w25
  int32_t v168; // w29
  int32_t DispLimitCount; // w0
  int32_t v170; // w2
  int32_t v171; // w3
  System_String_o *v172; // x4
  int32_t v173; // w5
  int64_t v174; // x6
  System_String_o *v175; // x7
  System_Int64_array *v176; // x20
  UserServantEntity_o *v177; // x29
  System_Int64_array *v178; // x25
  int32_t v179; // w20
  __int64 v180; // x23
  int v181; // w25
  unsigned __int64 v182; // x29
  UserServantEntity_o **v183; // x26
  PartyListViewItem___c__DisplayClass31_2_o *v184; // x19
  signed __int64 v185; // x20
  System_Func_object__bool__o *v186; // x24
  int32_t v187; // w2
  int32_t v188; // w3
  System_String_o *v189; // x4
  int32_t v190; // w5
  int64_t v191; // x6
  System_String_o *v192; // x7
  unsigned __int64 max_length_low; // x8
  signed __int64 v194; // x28
  EventUpValSetupInfo_o *v195; // x22
  unsigned __int64 v196; // x24
  int v197; // w26
  __int64 n; // x23
  BalanceConfig_c *v199; // x0
  PartyListViewItem___c__DisplayClass31_3_o *v200; // x25
  const MethodInfo *v201; // x2
  struct DeckServant_o *v202; // x8
  struct DeckServantData_array *v203; // x8
  __int64 v204; // x8
  int32_t *v205; // x8
  int32_t v206; // w19
  unsigned int *v207; // x20
  PartyOrganizationListViewItem_o *v208; // x25
  int32_t v209; // w2
  int32_t v210; // w3
  System_String_o *v211; // x4
  int32_t v212; // w5
  int64_t v213; // x6
  System_String_o *v214; // x7
  const MethodInfo *v215; // x6
  struct DeckServant_o *v216; // x8
  struct DeckServantData_array *v217; // x8
  __int64 v218; // x8
  int64_t v219; // x4
  _BOOL4 v220; // w22
  char v221; // w26
  int32_t chkIdx; // w8
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v224; // x29
  int32_t v225; // w22
  bool v226; // w0
  unsigned int *v227; // x20
  int32_t v228; // w26
  PartyOrganizationListViewItem_o *v229; // x0
  int32_t v230; // w3
  PartyOrganizationListViewItem_o *v231; // x25
  int32_t v232; // w2
  int32_t v233; // w3
  System_String_o *v234; // x4
  int32_t v235; // w5
  int64_t v236; // x6
  System_String_o *v237; // x7
  struct PartyOrganizationListViewItem_array *v238; // x8
  struct DeckServant_o *v239; // x9
  struct DeckServantData_array *v240; // x9
  __int64 v241; // x9
  __int64 v242; // x8
  int v243; // w9
  FollowerInfo_o *v244; // x29
  unsigned int *v245; // x27
  int32_t v246; // w22
  PartyOrganizationListViewItem_o *v247; // x0
  int32_t v248; // w3
  PartyOrganizationListViewItem_o *v249; // x25
  int32_t v250; // w2
  int32_t v251; // w3
  System_String_o *v252; // x4
  int32_t v253; // w5
  int64_t v254; // x6
  System_String_o *v255; // x7
  unsigned int *v256; // x19
  int v257; // w26
  PartyOrganizationListViewItem_o *v258; // x0
  System_Func_object__bool__o *v259; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v260; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v261; // x25
  bool v262; // w0
  RestrictionEntity_o *v263; // x22
  const MethodInfo *v264; // x6
  UserServantEntity_array *v265; // x20
  struct PartyOrganizationListViewItem_array *v266; // x8
  struct DeckServant_o *v267; // x9
  struct DeckServantData_array *v268; // x9
  __int64 v269; // x9
  FollowerInfo_o *v270; // x29
  unsigned int *v271; // x26
  __int64 v272; // x8
  __int64 v273; // x8
  int32_t v274; // w22
  PartyOrganizationListViewItem_o *v275; // x25
  int32_t v276; // w2
  int32_t v277; // w3
  System_String_o *v278; // x4
  int32_t v279; // w5
  int64_t v280; // x6
  System_String_o *v281; // x7
  __int64 v282; // x8
  __int64 v283; // x25
  __int64 v284; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v285; // x8
  int32_t v286; // w25
  int32_t v287; // w29
  int32_t v288; // w0
  int32_t v289; // w2
  int32_t v290; // w3
  System_String_o *v291; // x4
  int32_t v292; // w5
  int64_t v293; // x6
  System_String_o *v294; // x7
  System_Int64_array *v295; // x20
  UserServantEntity_o *v296; // x29
  unsigned int *v297; // x26
  System_Int64_array *v298; // x22
  int32_t v299; // w20
  PartyOrganizationListViewItem_o *v300; // x25
  int32_t v301; // w2
  int32_t v302; // w3
  System_String_o *v303; // x4
  int32_t v304; // w5
  int64_t v305; // x6
  System_String_o *v306; // x7
  struct PartyOrganizationListViewItem_array *v307; // x8
  int32_t v308; // w19
  const MethodInfo *v309; // x1
  __int64 v310; // x0
  UserServantEntity_o **v311; // [xsp+30h] [xbp-180h]
  bool v312; // [xsp+3Ch] [xbp-174h]
  _BOOL4 v313; // [xsp+3Ch] [xbp-174h]
  int v314; // [xsp+40h] [xbp-170h]
  int v315; // [xsp+40h] [xbp-170h]
  int32_t v316; // [xsp+44h] [xbp-16Ch]
  int32_t v317; // [xsp+44h] [xbp-16Ch]
  bool v318; // [xsp+44h] [xbp-16Ch]
  signed __int64 v320; // [xsp+50h] [xbp-160h]
  int32_t followerGrandGraphIda; // [xsp+64h] [xbp-14Ch]
  int32_t v322; // [xsp+68h] [xbp-148h]
  int v323; // [xsp+6Ch] [xbp-144h]
  int32_t v324; // [xsp+70h] [xbp-140h]
  int32_t FollowerIndex; // [xsp+74h] [xbp-13Ch]
  PartyListViewItem_o *v326; // [xsp+78h] [xbp-138h]
  FollowerInfo_o *v327; // [xsp+80h] [xbp-130h]
  EventUpValSetupInfo_o *setupInfoa; // [xsp+88h] [xbp-128h]
  System_Int64_array *v329; // [xsp+90h] [xbp-120h]
  int v330; // [xsp+90h] [xbp-120h]
  QuestRestrictionInfo_o *v331; // [xsp+98h] [xbp-118h]
  int64_t *m_Items; // [xsp+98h] [xbp-118h]
  int v333; // [xsp+98h] [xbp-118h]
  System_Collections_Generic_List_object__o *v334; // [xsp+A0h] [xbp-110h]
  PartyListViewItem_o *v335; // [xsp+A8h] [xbp-108h]
  UserServantEntity_array *userServantList; // [xsp+B0h] [xbp-100h]
  _BOOL4 v337; // [xsp+BCh] [xbp-F4h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+C0h] [xbp-F0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+D0h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v341; // [xsp+D8h] [xbp-D8h] BYREF
  int32_t v342; // [xsp+F4h] [xbp-BCh] BYREF
  System_Int64_array *EquipList; // [xsp+F8h] [xbp-B8h] BYREF
  int32_t v344; // [xsp+104h] [xbp-ACh] BYREF
  FollowerInfo_o *v345; // [xsp+108h] [xbp-A8h] BYREF
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+114h] [xbp-9Ch] BYREF
  System_Int64_array *equipIdList; // [xsp+118h] [xbp-98h] BYREF
  int32_t followerClassIda; // [xsp+124h] [xbp-8Ch] BYREF
  FollowerInfo_o *followera; // [xsp+128h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v350; // [xsp+130h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v351; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v352; // 0:x0.16

  if ( (byte_4CC2CA5 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_BasicHelper_Any_FollowerInfo___);
    sub_1C713B0(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_FollowerInfo___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Count_FollowerInfo___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__get_Current__);
    sub_1C713B0(&FollowerInfo___TypeInfo);
    sub_1C713B0(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_1C713B0(&long___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_FollowerInfo__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_FollowerInfo___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_FollowerInfo__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_FollowerInfo__TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C713B0(&Method_PartyListViewItem___c__DisplayClass31_0___ctor_b__0__);
    sub_1C713B0(&PartyListViewItem___c__DisplayClass31_0_TypeInfo);
    sub_1C713B0(&Method_PartyListViewItem___c__DisplayClass31_1___ctor_b__1__);
    sub_1C713B0(&PartyListViewItem___c__DisplayClass31_1_TypeInfo);
    sub_1C713B0(&Method_PartyListViewItem___c__DisplayClass31_2___ctor_b__2__);
    sub_1C713B0(&PartyListViewItem___c__DisplayClass31_2_TypeInfo);
    sub_1C713B0(&Method_PartyListViewItem___c__DisplayClass31_3___ctor_b__3__);
    sub_1C713B0(&PartyListViewItem___c__DisplayClass31_3_TypeInfo);
    sub_1C713B0(&UserServantEntity___TypeInfo);
    byte_4CC2CA5 = 1;
  }
  memset(&v350, 0, sizeof(v350));
  followera = 0;
  followerClassIda = 0;
  equipIdList = 0;
  isChangeFriendShipSvtEquipSkill = 0;
  v345 = 0;
  v344 = 0;
  EquipList = 0;
  v342 = 0;
  ListViewItem___ctor_44097096((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v21, v22, v23, v24, v25, v26);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v37 = deck;
  if ( !deck )
    goto LABEL_75;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_75;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v36) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_75;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0);
    v37 = deck;
  }
  NpcServantFollowerIds = UserEventDeckEntity__GetNpcServantFollowerIds(v37, 0);
  userServantList = UserEventDeckEntity__GetUserServantList(v37, 0, 0, 0);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  if ( *(int *)(Instance + 56) < 1 )
  {
    v335 = 0;
    v323 = 0;
    v337 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v40 = *(PartyListViewItem_o **)(Instance + 80);
    v323 = 0;
    v337 = v40 == 0;
    v335 = v40;
    if ( follower && v40 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      v323 = *(_DWORD *)(Instance + 56);
      Instance = (__int64)PartyListViewItem__GetMember(v335, v323 - 1, v41);
      if ( !Instance )
        goto LABEL_75;
      v42 = *(_DWORD *)(Instance + 372);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v42, follower, 0);
      v337 = 0;
    }
  }
  Instance = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  v327 = follower;
  if ( !questRestrictionInfo )
    goto LABEL_75;
  DeckMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMemberMax;
  if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0) )
    DeckMemberMax = questRestrictionInfo->fields.servantNumMax;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo
    || !Instance
    || (QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                              (NpcFollowerMaster_o *)Instance,
                              (*p_questRestrictionInfo)->fields.questId,
                              (*p_questRestrictionInfo)->fields.questPhase,
                              0),
        v334 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_FollowerInfo__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v334,
          (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_FollowerInfo___ctor__),
        !QuestFollowerList) )
  {
LABEL_75:
    sub_1C71608(Instance, SvtEquipMax);
  }
  max_length = QuestFollowerList->max_length;
  npcFollowerInfoList = QuestFollowerList;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        goto LABEL_423;
      SvtEquipMax = (unsigned __int64)npcFollowerInfoList->m_Items[i];
      if ( !SvtEquipMax )
        goto LABEL_75;
      if ( !*(_BYTE *)(SvtEquipMax + 104)
        && (questRestrictionInfo->fields.isNotTransitionSupportList
         || !questRestrictionInfo->fields.isNpcMultipleBattle
         || *(_BYTE *)(SvtEquipMax + 105)) )
      {
        if ( !v334 )
          goto LABEL_75;
        items = v334->fields._items;
        v54 = Method_System_Collections_Generic_List_FollowerInfo__Add__;
        ++v334->fields._version;
        if ( !items )
          goto LABEL_75;
        size = v334->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v334,
            (Il2CppObject *)SvtEquipMax,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
        }
        else
        {
          v56 = &items->obj.klass + size;
          v334->fields._size = size + 1;
          v56[4] = (Il2CppClass *)SvtEquipMax;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v56 + 4), SvtEquipMax, v45, (int32_t)v46, v47, v48, v49, v50);
        }
      }
      max_length = npcFollowerInfoList->max_length;
    }
  }
  v57 = isNew;
  FollowerIndex = PartyListViewItem__GetFollowerIndex(
                    this,
                    deck,
                    (System_Collections_Generic_List_FollowerInfo__o *)v334,
                    v46);
  setupInfoa = setupInfo;
  v331 = questRestrictionInfo;
  v326 = this;
  if ( isNew || !questRestrictionInfo->fields.isNpcEditablePos )
    goto LABEL_117;
  Instance = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
  if ( (Instance & 1) != 0 )
  {
    if ( !v334 )
      goto LABEL_75;
    v58 = v334->fields._size;
  }
  else
  {
    slotInfos = questRestrictionInfo->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_75;
    v60 = slotInfos->max_length;
    if ( v60 < 1 )
    {
      v58 = 0;
    }
    else
    {
      v58 = 0;
      for ( j = 0; j != v60; ++j )
      {
        if ( v60 == j )
          goto LABEL_423;
        v62 = slotInfos->m_Items[j];
        if ( !v62 )
          goto LABEL_75;
        if ( v62->fields.slotType == 1 )
          v58 += v62->fields.isMoved;
      }
    }
  }
  v63 = deck->fields.deckInfo;
  if ( !v63 )
    goto LABEL_75;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  while ( 1 )
  {
    svts = v63->fields.svts;
    if ( !svts )
      goto LABEL_75;
    if ( (int)v64 >= SLODWORD(svts->max_length) )
      break;
    v68 = (PartyListViewItem___c__DisplayClass31_0_o *)sub_1C715FC(PartyListViewItem___c__DisplayClass31_0_TypeInfo);
    PartyListViewItem___c__DisplayClass31_0___ctor(v68, 0);
    v69 = deck->fields.deckInfo;
    if ( !v69 )
      goto LABEL_75;
    v70 = v69->fields.svts;
    if ( !v70 )
      goto LABEL_75;
    if ( (unsigned int)v64 >= LODWORD(v70->max_length) )
      goto LABEL_423;
    v71 = v70->m_Items[v64];
    if ( v71 && v68 )
    {
      userSvtId = v71->fields.userSvtId;
      v68->fields.npcSvtId = v71->fields.npcFollowerSvtId;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43733304(
                   questRestrictionInfo,
                   v71->fields.initPos,
                   0);
      if ( (int)v64 >= DeckMemberMax && (userSvtId || v68->fields.npcSvtId) )
        v65 = 1;
      if ( !(Instance & 1 | (v68->fields.npcSvtId == 0)) )
      {
        v73 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v73,
          (Il2CppObject *)v68,
          Method_PartyListViewItem___c__DisplayClass31_0___ctor_b__0__,
          0);
        Instance = BasicHelper__Any_object_(
                     (System_Collections_Generic_List_T__o *)v334,
                     (System_Func_T__bool__o *)v73,
                     (const MethodInfo_31341D4 *)Method_BasicHelper_Any_FollowerInfo___);
        v66 += Instance & 1;
      }
      ++v64;
      v63 = deck->fields.deckInfo;
      if ( v63 )
        continue;
    }
    goto LABEL_75;
  }
  if ( ((v66 == v58) & (v65 ^ 1)) != 0 )
  {
    v57 = isNew;
    goto LABEL_117;
  }
  v74 = BalanceConfig_TypeInfo;
  v57 = isNew;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v74 = BalanceConfig_TypeInfo;
  }
  NpcServantFollowerIds = (System_Int64_array *)sub_1C71458(
                                                  long___TypeInfo,
                                                  (unsigned int)v74->static_fields->DeckMemberMax);
  Instance = (__int64)v334;
  if ( !v334 )
    goto LABEL_75;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v341,
    v334,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
  v350 = v341;
  while ( 1 )
  {
    v75 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v350,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    if ( !v75 )
      break;
    if ( !v350.fields._current )
      sub_1C71608(v75, v76);
    klass = v350.fields._current[5].klass;
    if ( klass )
    {
      v79 = LODWORD(v350.fields._current[5].monitor) - 1;
      if ( v79 >= 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_1C71608(v75, v76);
        if ( (unsigned int)v79 >= LODWORD(NpcServantFollowerIds->max_length) )
          sub_1C71610(v75);
        v80 = &NpcServantFollowerIds->obj.klass + (unsigned int)v79;
        goto LABEL_92;
      }
      NpcDeployIdx = PartyListViewItem__GetNpcDeployIdx(this, NpcServantFollowerIds, v77);
      if ( (NpcDeployIdx & 0x80000000) == 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_1C71608(NpcDeployIdx, v82);
        if ( (unsigned int)NpcDeployIdx >= LODWORD(NpcServantFollowerIds->max_length) )
          sub_1C71610(NpcDeployIdx);
        v80 = &NpcServantFollowerIds->obj.klass + (unsigned int)NpcDeployIdx;
LABEL_92:
        v80[4] = klass;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v350,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
  v83 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v83 = BalanceConfig_TypeInfo;
  }
  userServantList = (UserServantEntity_array *)sub_1C71458(
                                                 UserServantEntity___TypeInfo,
                                                 (unsigned int)v83->static_fields->DeckMemberMax);
  for ( k = 0; ; ++k )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( k >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 172LL) )
      break;
    v87 = deck->fields.deckInfo;
    if ( !v87 )
      goto LABEL_75;
    v88 = v87->fields.svts;
    if ( !v88 )
      goto LABEL_75;
    if ( (unsigned int)k >= LODWORD(v88->max_length) )
      goto LABEL_423;
    v89 = v88->m_Items[k];
    if ( !v89 )
      goto LABEL_75;
    if ( v89->fields.userSvtId )
    {
      UserServantDeployIndex = PartyListViewItem__GetUserServantDeployIndex(
                                 (PartyListViewItem_o *)Instance,
                                 userServantList,
                                 NpcServantFollowerIds,
                                 v85);
      if ( (UserServantDeployIndex & 0x80000000) == 0 )
      {
        v91 = UserServantDeployIndex;
        if ( UserServantDeployIndex < DeckMemberMax )
        {
          Instance = (__int64)UserEventDeckEntity__GetUserServant(deck, k, 0);
          if ( !userServantList )
            goto LABEL_75;
          v98 = Instance;
          if ( Instance )
          {
            Instance = sub_1C714EC(Instance, userServantList->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_424;
          }
          if ( v91 >= LODWORD(userServantList->max_length) )
            goto LABEL_423;
          v99 = &userServantList->obj.klass + v91;
          v99[4] = (Il2CppClass *)v98;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v99 + 4), v98, v92, v93, v94, v95, v96, v97);
          questRestrictionInfo = v331;
        }
      }
    }
  }
  if ( FollowerIndex >= 1
    && !questRestrictionInfo->fields.isNotTransitionSupportList
    && !questRestrictionInfo->fields.isNpcOnlyBattle )
  {
    FollowerIndex = PartyListViewItem__GetSupportInitIndex(
                      this,
                      (System_Collections_Generic_List_FollowerInfo__o *)v334,
                      v84);
  }
LABEL_117:
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v327 = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v322 = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    followerGrandGraphIda = *(_DWORD *)(Instance + 36);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v324 = *(_DWORD *)(Instance + 40);
  }
  else
  {
    v324 = followerDeckId;
    followerGrandGraphIda = followerGrandGraphId;
    v322 = followerClassId;
  }
  v100 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v100 = BalanceConfig_TypeInfo;
  }
  v101 = (struct PartyOrganizationListViewItem_array *)sub_1C71458(
                                                         PartyOrganizationListViewItem___TypeInfo,
                                                         (unsigned int)v100->static_fields->DeckMemberMax);
  this->fields.memberList = v101;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.memberList,
    (int32_t)v101,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( !v57 && questRestrictionInfo->fields.isNpcEditablePos )
  {
    m_Items = NpcServantFollowerIds->m_Items;
    v108 = 0;
    v109 = DeckMemberMax;
    v311 = userServantList->m_Items;
    v314 = -1;
    while ( 1 )
    {
      for ( m = 8 * v108; ; m += 8 )
      {
        v111 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v111 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v108 >= v111->static_fields->DeckMemberMax )
          goto LABEL_417;
        v112 = (PartyListViewItem___c__DisplayClass31_1_o *)sub_1C715FC(PartyListViewItem___c__DisplayClass31_1_TypeInfo);
        PartyListViewItem___c__DisplayClass31_1___ctor(v112, 0);
        if ( v337 )
        {
          v114 = deck->fields.deckInfo;
          if ( !v114 )
            goto LABEL_75;
          v115 = v114->fields.svts;
          if ( !v115 )
            goto LABEL_75;
          if ( v108 >= LODWORD(v115->max_length) )
            goto LABEL_423;
          v116 = v115->m_Items[v108];
          if ( !v116 )
            goto LABEL_75;
          p_initPos = &v116->fields.initPos;
        }
        else
        {
          Instance = (__int64)PartyListViewItem__GetMember(v335, v108, v113);
          if ( !Instance )
            goto LABEL_75;
          p_initPos = (int32_t *)(Instance + 372);
        }
        initPos = *p_initPos;
        if ( (__int64)v108 < v109 )
          break;
        v119 = (unsigned int *)*p_memberList;
        v120 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34482464(v120, v108, 0, setupInfo, questRestrictionInfo, 1, initPos, 0, 0);
        if ( !v119 )
          goto LABEL_75;
        if ( v120 )
        {
          Instance = sub_1C714EC(v120, *(_QWORD *)(*(_QWORD *)v119 + 64LL));
          if ( !Instance )
            goto LABEL_424;
        }
        if ( v108 >= v119[6] )
          goto LABEL_423;
        *(_QWORD *)&v119[2 * v108 + 8] = v120;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v119[(unsigned __int64)m / 4 + 8],
          (int32_t)v120,
          v121,
          v122,
          v123,
          v124,
          v125,
          v126);
        ++v108;
      }
      if ( !v112 )
        goto LABEL_75;
      v112->fields.chkIdx = v108 + 1;
      followera = 0;
      followerClassIda = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43733304(questRestrictionInfo, initPos, 0);
      v128 = 0;
      v316 = Instance;
      if ( (Instance & 1) != 0 )
      {
        if ( !NpcServantFollowerIds )
          goto LABEL_75;
        if ( v108 >= LODWORD(NpcServantFollowerIds->max_length) )
          goto LABEL_423;
        v129 = m_Items[v108];
        v128 = v129 >= 1
            && v112->fields.chkIdx != v323
            && PartyListViewItem__SetNpcFollowerInfo(
                 this,
                 &followera,
                 &followerClassIda,
                 npcFollowerInfoList,
                 v129,
                 initPos,
                 v127);
      }
      v312 = !QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0)
          && QuestRestrictionInfo__IsPositionFixNpc(questRestrictionInfo, initPos, 0);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                            (PartyOrganizationUtility_o *)Instance,
                            initPos,
                            0);
      v320 = v109;
      v329 = NpcServantFollowerIds;
      if ( !Instance || ((v316 ^ 1) & 1) != 0 )
        break;
      v130 = (FollowerInfo_o *)Instance;
      IsNpc = FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0);
      v132 = v322;
      if ( IsNpc )
        v132 = 0;
      v317 = v132;
      v133 = FollowerInfo__get_IsNpc(v130, 0);
      v134 = (unsigned int *)*p_memberList;
      if ( v133 )
        v135 = 0;
      else
        v135 = v324;
      v136 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34444464(
        v136,
        v108,
        v130,
        v317,
        followerGrandGraphIda,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v135,
        initPos,
        0,
        0);
      if ( !v134 )
        goto LABEL_75;
      v143 = v108 + 1;
      if ( v136 )
      {
        Instance = sub_1C714EC(v136, *(_QWORD *)(*(_QWORD *)v134 + 64LL));
        if ( !Instance )
          goto LABEL_424;
      }
      v144 = v134[6];
LABEL_203:
      if ( v108 >= v144 )
        goto LABEL_423;
      *(_QWORD *)&v134[2 * v108 + 8] = v136;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v134[(unsigned __int64)m / 4 + 8],
        (int32_t)v136,
        v137,
        v138,
        v139,
        v140,
        v141,
        v142);
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_75;
      NpcServantFollowerIds = v329;
      if ( v108 >= LODWORD(memberList->max_length) )
        goto LABEL_423;
      Instance = (__int64)memberList->m_Items[v108];
      v109 = v320;
      if ( !Instance )
        goto LABEL_75;
      cost = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                        + cost;
      v108 = v143;
    }
    if ( v128 || v112->fields.chkIdx == FollowerIndex )
    {
      v145 = followera;
      v134 = (unsigned int *)*p_memberList;
      if ( followera )
      {
        v146 = followerClassIda;
        v136 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34444464(
          v136,
          v108,
          v145,
          v146,
          0,
          setupInfo,
          questRestrictionInfo,
          0,
          0,
          v324,
          initPos,
          0,
          0);
        v143 = v108 + 1;
        if ( !v134 )
          goto LABEL_75;
        goto LABEL_175;
      }
      v147 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
      v143 = v108 + 1;
      v136 = v147;
      if ( v327 )
        PartyOrganizationListViewItem___ctor_34444464(
          v147,
          v108,
          v327,
          v322,
          followerGrandGraphIda,
          setupInfo,
          questRestrictionInfo,
          0,
          0,
          v324,
          initPos,
          0,
          0);
      else
        PartyOrganizationListViewItem___ctor_34482464(v147, v108, 1, setupInfo, questRestrictionInfo, 1, initPos, 0, 0);
      if ( !v134 )
        goto LABEL_75;
LABEL_200:
      if ( !v136 )
      {
LABEL_202:
        v144 = v134[6];
        goto LABEL_203;
      }
LABEL_201:
      Instance = sub_1C714EC(v136, *(_QWORD *)(*(_QWORD *)v134 + 64LL));
      if ( !Instance )
        goto LABEL_424;
      goto LABEL_202;
    }
    if ( v312 )
    {
      v148 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v148,
        (Il2CppObject *)v112,
        Method_PartyListViewItem___c__DisplayClass31_1___ctor_b__1__,
        0);
      v149 = System_Linq_Enumerable__Where_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v334,
               (System_Func_TSource__bool__o *)v148,
               (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v150 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C714EC(v149, FollowerInfo___TypeInfo);
      if ( !v150 )
        v150 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                      v149,
                                                                      (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
      v143 = v108 + 1;
      if ( System_Linq_Enumerable__Any_object_(
             v150,
             (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
      {
        Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                              v150,
                              0,
                              (const MethodInfo_316F1F4 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
        v151 = (FollowerInfo_o *)Instance;
      }
      else
      {
        Instance = (__int64)v334;
        if ( !v334 )
          goto LABEL_75;
        if ( v334->fields._size < 1 )
        {
LABEL_219:
          v134 = (unsigned int *)*p_memberList;
LABEL_220:
          v136 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34482464(
            v136,
            v108,
            0,
            setupInfo,
            questRestrictionInfo,
            0,
            initPos,
            0,
            0);
LABEL_221:
          if ( !v134 )
            goto LABEL_75;
          goto LABEL_200;
        }
        v156 = 0;
        while ( 1 )
        {
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                v156,
                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
          if ( !Instance || !NpcServantFollowerIds )
            goto LABEL_75;
          if ( v108 >= LODWORD(NpcServantFollowerIds->max_length) )
            goto LABEL_423;
          if ( *(_QWORD *)(Instance + 80) != m_Items[v108] )
          {
            Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                  v334,
                                  v156,
                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
            if ( !Instance )
              goto LABEL_75;
            if ( v314 < v156 && *(int *)(Instance + 88) <= 0 )
              break;
          }
          Instance = (__int64)v334;
          if ( ++v156 >= v334->fields._size )
            goto LABEL_219;
        }
        Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                              v334,
                              v156,
                              (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
        v151 = (FollowerInfo_o *)Instance;
        v314 = v156;
      }
      v134 = (unsigned int *)*p_memberList;
      if ( !v151 )
        goto LABEL_220;
LABEL_229:
      userSvtLeaderHash = v151->fields.userSvtLeaderHash;
      if ( !userSvtLeaderHash )
        goto LABEL_75;
      if ( !LODWORD(userSvtLeaderHash->max_length) )
        goto LABEL_423;
      v161 = userSvtLeaderHash->m_Items[0];
      if ( !v161 )
        goto LABEL_75;
      classId = v161->fields.classId;
      v136 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34444464(
        v136,
        v108,
        v151,
        classId,
        0,
        setupInfo,
        questRestrictionInfo,
        0,
        1,
        v324,
        initPos,
        0,
        0);
      if ( !v134 )
        goto LABEL_75;
LABEL_175:
      if ( !v136 )
        goto LABEL_202;
      goto LABEL_201;
    }
    if ( !NpcServantFollowerIds )
      goto LABEL_75;
    if ( v108 >= LODWORD(NpcServantFollowerIds->max_length) )
      goto LABEL_423;
    if ( !m_Items[v108] )
    {
      GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                        questRestrictionInfo,
                                        initPos,
                                        0);
      equipIdList = UserEventDeckEntity__GetEquipList(deck, v108, 0);
      Instance = UserEventDeckEntity__IsEquipTarget2SkillChange(deck, v108, 0);
      isChangeFriendShipSvtEquipSkill = Instance;
      if ( GrandServantRestrictionEntity )
      {
        Instance = (__int64)UserEventDeckEntity__GetGrandEquipList(deck, v108, 0);
        equipIdList = (System_Int64_array *)Instance;
        if ( !userServantList )
          goto LABEL_75;
        if ( v108 >= LODWORD(userServantList->max_length) )
          goto LABEL_423;
        PartyListViewItem__SetGrandServant(
          this,
          initPos,
          v316 & 1,
          &v311[(unsigned __int64)m / 8],
          &equipIdList,
          &isChangeFriendShipSvtEquipSkill,
          v158);
        v159 = userServantList;
      }
      else
      {
        if ( (v316 & 1) != 0 )
        {
          if ( !userServantList )
            goto LABEL_75;
          if ( v108 >= LODWORD(userServantList->max_length) )
            goto LABEL_423;
          v163 = v311[v108];
          if ( v163 )
          {
            v165 = *(_QWORD *)&v163->fields.svtId.fields.currentCryptoKey;
            v164 = *(_QWORD *)&v163->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v351.fields.currentCryptoKey = v165;
            *(_QWORD *)&v351.fields.fakeValue = v164;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v351, 0);
            if ( v108 >= LODWORD(userServantList->max_length) )
              goto LABEL_423;
            v166 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v311[v108];
            if ( !v166 )
              goto LABEL_75;
            v167 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v166[6], 0);
            if ( v108 >= LODWORD(userServantList->max_length) )
              goto LABEL_423;
            v168 = Instance;
            Instance = (__int64)v311[v108];
            if ( !Instance )
              goto LABEL_75;
            DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
            Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                         questRestrictionInfo,
                         v167,
                         v168,
                         DispLimitCount,
                         initPos,
                         0,
                         0);
            if ( (Instance & 1) != 0 )
            {
              if ( v108 >= LODWORD(userServantList->max_length) )
                goto LABEL_423;
              v311[v108] = 0;
              sub_1C71354(
                (GrandQuestFolderBoardItem_o *)&v311[(unsigned __int64)m / 8],
                0,
                v170,
                v171,
                v172,
                v173,
                v174,
                v175);
            }
          }
        }
        v176 = equipIdList;
        if ( !equipIdList )
          goto LABEL_75;
        Instance = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          Instance = (__int64)BalanceConfig_TypeInfo;
        }
        SvtEquipMax = *(unsigned int *)(*(_QWORD *)(Instance + 184) + 48LL);
        if ( (int)SvtEquipMax < SLODWORD(v176->max_length) )
        {
          if ( !*(_DWORD *)(Instance + 224) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            SvtEquipMax = (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax;
          }
          Instance = sub_1C71458(long___TypeInfo, SvtEquipMax);
          equipIdList = (System_Int64_array *)Instance;
        }
        v159 = userServantList;
        if ( !userServantList )
          goto LABEL_75;
      }
      if ( v108 >= LODWORD(v159->max_length) )
        goto LABEL_423;
      v177 = v311[v108];
      v134 = (unsigned int *)*p_memberList;
      if ( v177 )
      {
        v178 = equipIdList;
        v179 = isChangeFriendShipSvtEquipSkill;
        v136 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34471244(
          v136,
          v108,
          v177,
          v178,
          setupInfo,
          questRestrictionInfo,
          0,
          initPos,
          0,
          0,
          v179,
          0,
          0);
        if ( !v134 )
          goto LABEL_75;
        v143 = v108 + 1;
        if ( !v136 )
          goto LABEL_202;
        goto LABEL_201;
      }
      v136 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34482464(v136, v108, 0, setupInfo, questRestrictionInfo, 1, initPos, 0, 0);
      v143 = v108 + 1;
      if ( !v134 )
        goto LABEL_75;
      goto LABEL_200;
    }
    Instance = System_Linq_Enumerable__Count_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v334,
                 (const MethodInfo_316B570 *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
    if ( (int)Instance < 1 )
    {
LABEL_196:
      v143 = v108 + 1;
      v134 = (unsigned int *)*p_memberList;
    }
    else
    {
      if ( !v334 )
        goto LABEL_75;
      v152 = v334;
      v153 = 0;
      while ( 1 )
      {
        Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                              v152,
                              v153,
                              (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
        if ( !Instance )
          goto LABEL_75;
        if ( v108 >= LODWORD(NpcServantFollowerIds->max_length) )
          goto LABEL_423;
        if ( *(_QWORD *)(Instance + 80) == m_Items[v108] )
          break;
        v152 = v334;
        if ( ++v153 >= System_Linq_Enumerable__Count_object_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v334,
                         (const MethodInfo_316B570 *)Method_System_Linq_Enumerable_Count_FollowerInfo___) )
          goto LABEL_196;
      }
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            v334,
                            v153,
                            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
      v143 = v108 + 1;
      v134 = (unsigned int *)*p_memberList;
      if ( Instance )
      {
        v151 = (FollowerInfo_o *)Instance;
        goto LABEL_229;
      }
    }
    v136 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_34482464(v136, v108, 0, setupInfo, questRestrictionInfo, 1, initPos, 0, 0);
    goto LABEL_221;
  }
  v330 = questRestrictionInfo->fields.myServantNumMax
       + (FollowerIndex > 0 && !questRestrictionInfo->fields.isNotTransitionSupportList);
  if ( !v57 )
  {
    if ( !userServantList )
      goto LABEL_75;
    if ( SLODWORD(userServantList->max_length) >= 1 )
    {
      v180 = 0;
      v181 = 0;
      v182 = 0;
      v183 = userServantList->m_Items;
      while ( 1 )
      {
        v184 = (PartyListViewItem___c__DisplayClass31_2_o *)sub_1C715FC(PartyListViewItem___c__DisplayClass31_2_TypeInfo);
        PartyListViewItem___c__DisplayClass31_2___ctor(v184, 0);
        if ( !v184 )
          goto LABEL_75;
        v185 = v182 + 1;
        v184->fields.chkIdx = v182 + 1;
        if ( v182 >= LODWORD(userServantList->max_length) )
          goto LABEL_423;
        if ( v183[v182] )
          ++v181;
        v186 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v186,
          (Il2CppObject *)v184,
          Method_PartyListViewItem___c__DisplayClass31_2___ctor_b__2__,
          0);
        Instance = (__int64)System_Linq_Enumerable__Where_object_(
                              (System_Collections_Generic_IEnumerable_TSource__o *)npcFollowerInfoList,
                              (System_Func_TSource__bool__o *)v186,
                              (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
        max_length_low = LODWORD(userServantList->max_length);
        if ( v182 >= max_length_low )
          goto LABEL_423;
        questRestrictionInfo = v331;
        if ( !v183[v182] )
          goto LABEL_280;
        if ( v184->fields.chkIdx > DeckMemberMax )
          goto LABEL_278;
        Instance = System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                     (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
        if ( v181 > v330 || (Instance & 1) != 0 )
          break;
LABEL_280:
        ++v180;
        ++v182;
        if ( v185 >= SLODWORD(userServantList->max_length) )
          goto LABEL_281;
      }
      max_length_low = LODWORD(userServantList->max_length);
LABEL_278:
      if ( v182 >= max_length_low )
        goto LABEL_423;
      v183[v182] = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v183[v180], 0, v187, v188, v189, v190, v191, v192);
      goto LABEL_280;
    }
  }
LABEL_281:
  v194 = DeckMemberMax;
  v195 = setupInfoa;
  v196 = 0;
  v197 = 0;
LABEL_282:
  for ( n = 8 * v196 + 32; ; n += 8 )
  {
    v199 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v199 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v196 >= v199->static_fields->DeckMemberMax )
      break;
    v200 = (PartyListViewItem___c__DisplayClass31_3_o *)sub_1C715FC(PartyListViewItem___c__DisplayClass31_3_TypeInfo);
    PartyListViewItem___c__DisplayClass31_3___ctor(v200, 0);
    if ( v337 )
    {
      v202 = deck->fields.deckInfo;
      if ( !v202 )
        goto LABEL_75;
      v203 = v202->fields.svts;
      if ( !v203 )
        goto LABEL_75;
      if ( v196 >= LODWORD(v203->max_length) )
        goto LABEL_423;
      v204 = *(__int64 *)((char *)&v203->obj.klass + n);
      if ( !v204 )
        goto LABEL_75;
      v205 = (int32_t *)(v204 + 76);
    }
    else
    {
      Instance = (__int64)PartyListViewItem__GetMember(v335, v196, v201);
      if ( !Instance )
        goto LABEL_75;
      v205 = (int32_t *)(Instance + 372);
    }
    v206 = *v205;
    if ( (__int64)v196 < v194 )
    {
      if ( !v200 )
        goto LABEL_75;
      v200->fields.chkIdx = v196 + 1;
      v345 = 0;
      v344 = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43733304(questRestrictionInfo, v206, 0);
      v333 = v197;
      v315 = Instance;
      if ( (Instance & 1) == 0 )
        goto LABEL_309;
      v216 = deck->fields.deckInfo;
      if ( !v216 )
        goto LABEL_75;
      v217 = v216->fields.svts;
      if ( !v217 )
        goto LABEL_75;
      if ( v196 >= LODWORD(v217->max_length) )
        goto LABEL_423;
      v218 = *(__int64 *)((char *)&v217->obj.klass + n);
      if ( !v218 )
        goto LABEL_75;
      v219 = *(_QWORD *)(v218 + 64);
      if ( v219 >= 1 )
      {
        if ( v200->fields.chkIdx == v323 )
        {
          v220 = 0;
          v221 = 1;
          v318 = 1;
          goto LABEL_315;
        }
        v318 = PartyListViewItem__SetNpcFollowerInfo(this, &v345, &v344, npcFollowerInfoList, v219, v206, v215);
        v220 = 0;
LABEL_314:
        v221 = 1;
        goto LABEL_315;
      }
LABEL_309:
      if ( !v327 || questRestrictionInfo->fields.isNotTransitionSupportList )
      {
        v220 = 0;
        v318 = 0;
        goto LABEL_314;
      }
      chkIdx = v200->fields.chkIdx;
      v318 = 0;
      v221 = chkIdx != FollowerIndex;
      v220 = chkIdx == FollowerIndex;
LABEL_315:
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v206, 0);
      if ( NpcFollowerInfo && ((v315 ^ 1) & 1) == 0 )
      {
        v224 = NpcFollowerInfo;
        if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0) )
          v225 = 0;
        else
          v225 = v322;
        v226 = FollowerInfo__get_IsNpc(v224, 0);
        v227 = (unsigned int *)*p_memberList;
        if ( v226 )
          v228 = 0;
        else
          v228 = v324;
        v229 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
        v230 = v225;
        v195 = setupInfoa;
        v231 = v229;
        PartyOrganizationListViewItem___ctor_34444464(
          v229,
          v196,
          v224,
          v230,
          followerGrandGraphIda,
          setupInfoa,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v228,
          v206,
          0,
          0);
        if ( !v227 )
          goto LABEL_75;
        if ( !v231 || (Instance = sub_1C714EC(v231, *(_QWORD *)(*(_QWORD *)v227 + 64LL))) != 0 )
        {
          if ( v196 < v227[6] )
          {
            *(_QWORD *)((char *)v227 + n) = v231;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)((char *)v227 + n),
              (int32_t)v231,
              v232,
              v233,
              v234,
              v235,
              v236,
              v237);
            v238 = *p_memberList;
            if ( !*p_memberList )
              goto LABEL_75;
            if ( v196 < LODWORD(v238->max_length) )
            {
              v239 = deck->fields.deckInfo;
              if ( !v239 )
                goto LABEL_75;
              v240 = v239->fields.svts;
              if ( !v240 )
                goto LABEL_75;
              if ( v196 < LODWORD(v240->max_length) )
              {
                v241 = *(__int64 *)((char *)&v240->obj.klass + n);
                if ( v241 )
                {
                  v242 = *(__int64 *)((char *)&v238->obj.klass + n);
                  if ( v242 )
                  {
                    v243 = *(_DWORD *)(v241 + 76);
                    v197 = v333 + 1;
                    goto LABEL_366;
                  }
                }
                goto LABEL_75;
              }
            }
          }
LABEL_423:
          sub_1C71610(Instance);
        }
LABEL_424:
        v310 = sub_1C7162C();
        sub_1C714D8(v310, 0);
      }
      if ( v318 || v200->fields.chkIdx == FollowerIndex )
      {
        v244 = v345;
        v313 = v220;
        v245 = (unsigned int *)*p_memberList;
        if ( v345 )
        {
          v246 = v344;
          v247 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
          v248 = v246;
          v195 = setupInfoa;
          v249 = v247;
          PartyOrganizationListViewItem___ctor_34444464(
            v247,
            v196,
            v244,
            v248,
            0,
            setupInfoa,
            questRestrictionInfo,
            0,
            v221,
            v324,
            v206,
            0,
            0);
          if ( !v245 )
            goto LABEL_75;
          v256 = v245;
          v257 = v333;
          this = v326;
        }
        else
        {
          v258 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
          v249 = v258;
          if ( v327 )
          {
            v195 = setupInfoa;
            PartyOrganizationListViewItem___ctor_34444464(
              v258,
              v196,
              v327,
              v322,
              followerGrandGraphIda,
              setupInfoa,
              questRestrictionInfo,
              0,
              v221,
              v324,
              v206,
              0,
              0);
            v256 = v245;
            this = v326;
            if ( !v256 )
              goto LABEL_75;
            v257 = v333;
          }
          else
          {
            v195 = setupInfoa;
            PartyOrganizationListViewItem___ctor_34482464(
              v258,
              v196,
              1,
              setupInfoa,
              questRestrictionInfo,
              1,
              v206,
              0,
              0);
            v257 = v333;
            v256 = v245;
            this = v326;
            if ( !v256 )
              goto LABEL_75;
          }
        }
        if ( v249 )
        {
          Instance = sub_1C714EC(v249, *(_QWORD *)(*(_QWORD *)v256 + 64LL));
          if ( !Instance )
            goto LABEL_424;
        }
        if ( v196 >= v256[6] )
          goto LABEL_423;
        *(_QWORD *)((char *)v256 + n) = v249;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)((char *)v256 + n),
          (int32_t)v249,
          v250,
          v251,
          v252,
          v253,
          v254,
          v255);
        v266 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_75;
        if ( v196 >= LODWORD(v266->max_length) )
          goto LABEL_423;
        v267 = deck->fields.deckInfo;
        if ( !v267 )
          goto LABEL_75;
        v268 = v267->fields.svts;
        if ( !v268 )
          goto LABEL_75;
        if ( v196 >= LODWORD(v268->max_length) )
          goto LABEL_423;
        v269 = *(__int64 *)((char *)&v268->obj.klass + n);
        if ( !v269 )
          goto LABEL_75;
        v242 = *(__int64 *)((char *)&v266->obj.klass + n);
        if ( !v242 )
          goto LABEL_75;
        v243 = *(_DWORD *)(v269 + 76);
        v197 = (v313 || v318) + v257;
LABEL_366:
        *(_DWORD *)(v242 + 372) = v243;
        goto LABEL_367;
      }
      v259 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v259,
        (Il2CppObject *)v200,
        Method_PartyListViewItem___c__DisplayClass31_3___ctor_b__3__,
        0);
      v260 = System_Linq_Enumerable__Where_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v334,
               (System_Func_TSource__bool__o *)v259,
               (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v261 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C714EC(v260, FollowerInfo___TypeInfo);
      if ( !v261 )
        v261 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                      v260,
                                                                      (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
      v262 = System_Linq_Enumerable__Any_object_(
               v261,
               (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( v333 < v330 && !v262 )
      {
        v263 = QuestRestrictionInfo__GetGrandServantRestrictionEntity(questRestrictionInfo, v206, 0);
        EquipList = UserEventDeckEntity__GetEquipList(deck, v196, 0);
        Instance = UserEventDeckEntity__IsEquipTarget2SkillChange(deck, v196, 0);
        v342 = Instance;
        if ( v263 )
        {
          Instance = (__int64)UserEventDeckEntity__GetGrandEquipList(deck, v196, 0);
          v265 = userServantList;
          EquipList = (System_Int64_array *)Instance;
          if ( !userServantList )
            goto LABEL_75;
          if ( v196 >= LODWORD(userServantList->max_length) )
            goto LABEL_423;
          PartyListViewItem__SetGrandServant(
            this,
            v206,
            v315 & 1,
            (UserServantEntity_o **)((char *)userServantList + n),
            &EquipList,
            &v342,
            v264);
        }
        else
        {
          if ( (v315 & 1) != 0 )
          {
            if ( !userServantList )
              goto LABEL_75;
            if ( v196 >= LODWORD(userServantList->max_length) )
              goto LABEL_423;
            v282 = *(__int64 *)((char *)&userServantList->obj.klass + n);
            if ( v282 )
            {
              v284 = *(_QWORD *)(v282 + 80);
              v283 = *(_QWORD *)(v282 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v352.fields.currentCryptoKey = v284;
              *(_QWORD *)&v352.fields.fakeValue = v283;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v352, 0);
              if ( v196 >= LODWORD(userServantList->max_length) )
                goto LABEL_423;
              v285 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&userServantList->obj.klass + n);
              if ( !v285 )
                goto LABEL_75;
              v286 = Instance;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v285[6], 0);
              if ( v196 >= LODWORD(userServantList->max_length) )
                goto LABEL_423;
              v287 = Instance;
              Instance = *(__int64 *)((char *)&userServantList->obj.klass + n);
              if ( !Instance )
                goto LABEL_75;
              v288 = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
              Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                           questRestrictionInfo,
                           v286,
                           v287,
                           v288,
                           v206,
                           0,
                           0);
              if ( (Instance & 1) != 0 )
              {
                if ( v196 >= LODWORD(userServantList->max_length) )
                  goto LABEL_423;
                *(Il2CppClass **)((char *)&userServantList->obj.klass + n) = 0;
                sub_1C71354(
                  (GrandQuestFolderBoardItem_o *)((char *)userServantList + n),
                  0,
                  v289,
                  v290,
                  v291,
                  v292,
                  v293,
                  v294);
              }
            }
          }
          v295 = EquipList;
          if ( !EquipList )
            goto LABEL_75;
          Instance = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Instance = (__int64)BalanceConfig_TypeInfo;
          }
          SvtEquipMax = *(unsigned int *)(*(_QWORD *)(Instance + 184) + 48LL);
          if ( (int)SvtEquipMax < SLODWORD(v295->max_length) )
          {
            if ( !*(_DWORD *)(Instance + 224) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              SvtEquipMax = (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax;
            }
            Instance = sub_1C71458(long___TypeInfo, SvtEquipMax);
            EquipList = (System_Int64_array *)Instance;
          }
          v265 = userServantList;
          if ( !userServantList )
            goto LABEL_75;
        }
        if ( v196 >= LODWORD(v265->max_length) )
          goto LABEL_423;
        v296 = *(UserServantEntity_o **)((char *)&v265->obj.klass + n);
        v297 = (unsigned int *)*p_memberList;
        if ( v296 )
        {
          v298 = EquipList;
          v299 = v342;
          v300 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34471244(
            v300,
            v196,
            v296,
            v298,
            setupInfoa,
            questRestrictionInfo,
            0,
            v206,
            0,
            0,
            v299,
            0,
            0);
          if ( !v297 )
            goto LABEL_75;
        }
        else
        {
          v300 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34482464(v300, v196, 0, setupInfoa, questRestrictionInfo, 1, v206, 0, 0);
          if ( !v297 )
            goto LABEL_75;
        }
        if ( v300 )
        {
          Instance = sub_1C714EC(v300, *(_QWORD *)(*(_QWORD *)v297 + 64LL));
          if ( !Instance )
            goto LABEL_424;
        }
        if ( v196 >= v297[6] )
          goto LABEL_423;
        *(_QWORD *)((char *)v297 + n) = v300;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)((char *)v297 + n),
          (int32_t)v300,
          v301,
          v302,
          v303,
          v304,
          v305,
          v306);
        v197 = v333 + 1;
        goto LABEL_413;
      }
      if ( System_Linq_Enumerable__Any_object_(
             v261,
             (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
      {
        Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                              v261,
                              0,
                              (const MethodInfo_316F1F4 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
        goto LABEL_371;
      }
      Instance = (__int64)v334;
      if ( !v334 )
        goto LABEL_75;
      if ( v334->fields._size <= (int)v196 - v333 )
      {
        v271 = (unsigned int *)*p_memberList;
      }
      else
      {
        Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                              v334,
                              (int)v196 - v333,
                              (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
LABEL_371:
        v270 = (FollowerInfo_o *)Instance;
        v271 = (unsigned int *)*p_memberList;
        if ( Instance )
        {
          v272 = *(_QWORD *)(Instance + 40);
          if ( !v272 )
            goto LABEL_75;
          if ( !*(_DWORD *)(v272 + 24) )
            goto LABEL_423;
          v273 = *(_QWORD *)(v272 + 32);
          if ( !v273 )
            goto LABEL_75;
          v274 = *(_DWORD *)(v273 + 32);
          v275 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34444464(
            v275,
            v196,
            v270,
            v274,
            0,
            setupInfoa,
            questRestrictionInfo,
            0,
            1,
            v324,
            v206,
            0,
            0);
          if ( !v271 )
            goto LABEL_75;
          goto LABEL_409;
        }
      }
      v275 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34482464(v275, v196, 0, setupInfoa, questRestrictionInfo, 0, v206, 0, 0);
      if ( !v271 )
        goto LABEL_75;
LABEL_409:
      if ( v275 )
      {
        Instance = sub_1C714EC(v275, *(_QWORD *)(*(_QWORD *)v271 + 64LL));
        if ( !Instance )
          goto LABEL_424;
      }
      if ( v196 >= v271[6] )
        goto LABEL_423;
      *(_QWORD *)((char *)v271 + n) = v275;
      sub_1C71354((GrandQuestFolderBoardItem_o *)((char *)v271 + n), (int32_t)v275, v276, v277, v278, v279, v280, v281);
      v197 = v333;
LABEL_413:
      v307 = this->fields.memberList;
      v195 = setupInfoa;
      if ( !v307 )
        goto LABEL_75;
      if ( v196 >= LODWORD(v307->max_length) )
        goto LABEL_423;
      Instance = *(__int64 *)((char *)&v307->obj.klass + n);
      if ( !Instance )
        goto LABEL_75;
      v308 = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                        + v308;
LABEL_367:
      ++v196;
      goto LABEL_282;
    }
    v207 = (unsigned int *)*p_memberList;
    v208 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_34482464(v208, v196, 0, v195, questRestrictionInfo, 1, v206, 0, 0);
    if ( !v207 )
      goto LABEL_75;
    if ( v208 )
    {
      Instance = sub_1C714EC(v208, *(_QWORD *)(*(_QWORD *)v207 + 64LL));
      if ( !Instance )
        goto LABEL_424;
    }
    if ( v196 >= v207[6] )
      goto LABEL_423;
    *(_QWORD *)((char *)v207 + n) = v208;
    sub_1C71354((GrandQuestFolderBoardItem_o *)((char *)v207 + n), (int32_t)v208, v209, v210, v211, v212, v213, v214);
    ++v196;
  }
LABEL_417:
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)SvtEquipMax);
  if ( (questRestrictionInfo->fields.isNpcEditablePos
     || !questRestrictionInfo->fields.isNpcOnlyBattle
     || QuestRestrictionInfo__IsExistGrand(questRestrictionInfo, 0))
    && !PartyListViewItem__GetStartDeckCondition(this, v309) )
  {
    *isBaseModify = 1;
  }
}


void PartyListViewItem___ctor_34338512(
        PartyListViewItem_o *this,
        int32_t menuKind,
        int32_t index,
        int32_t maxCost,
        UserEventDeckEntity_o *deck,
        QuestRestrictionInfo_o *questRestrictionInfo,
        EventUpValSetupInfo_o *setupInfo,
        int32_t restartWave,
        const MethodInfo *method)
{
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  QuestRestrictionInfo_o *v20; // x25
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x26
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  __int64 Master_object; // x0
  __int64 classId; // x1
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *UserServantList; // x0
  BalanceConfig_c *v32; // x8
  UserServantEntity_array *v33; // x24
  struct PartyOrganizationListViewItem_array *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  _BOOL4 v41; // w21
  System_Collections_Generic_List_int__o *v42; // x29
  System_Collections_Generic_List_int__o *v43; // x28
  ViewWaveEnemyMaster_o *v44; // x20
  ViewWaveEnemyEntity_array *EntityListFromQuestId; // x26
  int32_t ReachedWave; // w22
  int max_length; // w8
  int i; // w19
  ViewWaveEnemyEntity_o *v49; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  int32_t version; // w10
  struct System_Int32_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  struct System_Int32_array *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  struct System_Int32_array *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  Il2CppObject *v71; // x26
  int32_t v72; // w27
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v74; // w29
  struct DeckServant_o *v75; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v77; // x8
  int32_t initPos; // w26
  UserServantEntity_o *v79; // x28
  struct PartyOrganizationListViewItem_array *v80; // x21
  __int128 v81; // q0
  int64_t v82; // x0
  System_Int64_array *v83; // x20
  struct DeckServant_o *v84; // x8
  struct DeckServantData_array *v85; // x8
  DeckServantData_o *v86; // x8
  MethodInfo *svtEquipIds; // x25
  PartyOrganizationListViewItem_o *v88; // x29
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  Il2CppClass **v95; // x0
  struct PartyOrganizationListViewItem_array *v96; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w20
  __int64 v99; // x0
  MethodInfo *methoda; // [xsp+0h] [xbp-120h]
  int32_t v101; // [xsp+3Ch] [xbp-E4h]
  char v102; // [xsp+44h] [xbp-DCh]
  bool isClearedWave; // [xsp+44h] [xbp-DCh]
  int32_t v106; // [xsp+54h] [xbp-CCh]
  int v107; // [xsp+54h] [xbp-CCh]
  UserEventDeckEntity_o *v109; // [xsp+60h] [xbp-C0h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+68h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+90h] [xbp-90h]
  UserInterruptionQuestEntity_o *entity; // [xsp+B8h] [xbp-68h] BYREF

  if ( (byte_4CC2CA6 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C713B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C713B0(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    byte_4CC2CA6 = 1;
  }
  entity = 0;
  ListViewItem___ctor_44097096((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v14, v15, v16, v17, v18, v19);
  v20 = questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( !deck )
    goto LABEL_105;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_105;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  this->fields._IsWaveBattleRestart_k__BackingField = restartWave > 0;
  v106 = index + 1;
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, index + 1, restartWave > 0, 0);
  v32 = BalanceConfig_TypeInfo;
  v33 = UserServantList;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v32 = BalanceConfig_TypeInfo;
  }
  v34 = (struct PartyOrganizationListViewItem_array *)sub_1C71458(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v32->static_fields->DeckMemberMax);
  this->fields.memberList = v34;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.memberList, (int32_t)v34, v35, v36, v37, v38, v39, v40);
  v109 = deck;
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  v101 = index;
  if ( questRestrictionInfo )
    v41 = !QuestRestrictionInfo__IsWaveSetupSwitchParty(questRestrictionInfo, 0);
  else
    LOBYTE(v41) = 1;
  v42 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  v43 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v43,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v41 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    if ( !*p_questRestrictionInfo )
      goto LABEL_105;
    v44 = (ViewWaveEnemyMaster_o *)Master_object;
    if ( !Master_object )
      goto LABEL_105;
    EntityListFromQuestId = ViewWaveEnemyMaster__GetEntityListFromQuestId(
                              (ViewWaveEnemyMaster_o *)Master_object,
                              (*p_questRestrictionInfo)->fields.questId,
                              0);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
    if ( !questRestrictionInfo )
      goto LABEL_105;
    if ( !Master_object )
      goto LABEL_105;
    ReachedWave = ReachedWaveInfoMaster__GetReachedWave(
                    (ReachedWaveInfoMaster_o *)Master_object,
                    questRestrictionInfo->fields.questId,
                    0);
    Master_object = ViewWaveEnemyMaster__IsSameUnknownNpcEncounter(v44, EntityListFromQuestId, ReachedWave, 0);
    v102 = Master_object;
    if ( !EntityListFromQuestId )
      goto LABEL_105;
    max_length = EntityListFromQuestId->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
LABEL_106:
          sub_1C71610(Master_object);
        v49 = EntityListFromQuestId->m_Items[i];
        if ( !v49 )
          goto LABEL_105;
        if ( v49->fields.wave == v106 )
        {
          if ( !v42 )
            goto LABEL_105;
          Master_object = System_Collections_Generic_List_int___Contains(
                            v42,
                            v49->fields.classId,
                            (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Master_object & 1) == 0 )
          {
            classId = (unsigned int)v49->fields.classId;
            items = v42->fields._items;
            v51 = Method_System_Collections_Generic_List_int__Add__;
            ++v42->fields._version;
            if ( !items )
              goto LABEL_105;
            size = v42->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v42,
                classId,
                *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v42->fields._size = size + 1;
              items->m_Items[size] = classId;
            }
          }
          if ( (v102 & 1) != 0
            || ReachedWave >= v49->fields.wave
            || (Master_object = ViewWaveEnemyEntity__IsUnknownDispInfo(v49, 0, 0, 0), (Master_object & 1) == 0) )
          {
            if ( !v43 )
              goto LABEL_105;
            Master_object = System_Collections_Generic_List_int___Contains(
                              v43,
                              v49->fields.classId,
                              (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__);
            if ( (Master_object & 1) == 0 )
            {
              classId = (unsigned int)v49->fields.classId;
              version = v43->fields._version;
              v54 = v43->fields._items;
LABEL_42:
              v55 = Method_System_Collections_Generic_List_int__Add__;
              v43->fields._version = version + 1;
              if ( !v54 )
                goto LABEL_105;
              v56 = v43->fields._size;
              if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v43,
                  classId,
                  *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
              }
              else
              {
                v43->fields._size = v56 + 1;
                v54->m_Items[v56] = classId;
              }
            }
          }
          else
          {
            Master_object = (__int64)WaveBattleWaveEnemyInfoItem_TypeInfo;
            if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
            if ( !v43 )
              goto LABEL_105;
            Master_object = System_Collections_Generic_List_int___Contains(
                              v43,
                              WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_UNKNOWN_CLASSID,
                              (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__);
            if ( (Master_object & 1) == 0 )
            {
              Master_object = (__int64)WaveBattleWaveEnemyInfoItem_TypeInfo;
              if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
                Master_object = (__int64)WaveBattleWaveEnemyInfoItem_TypeInfo;
              }
              version = v43->fields._version;
              v54 = v43->fields._items;
              classId = *(unsigned int *)(*(_QWORD *)(Master_object + 184) + 64LL);
              goto LABEL_42;
            }
          }
        }
        max_length = EntityListFromQuestId->max_length;
      }
    }
  }
  if ( !v42 )
    goto LABEL_105;
  v57 = System_Collections_Generic_List_int___ToArray(
          v42,
          (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.waveBattleEnemyClassIds = v57;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.waveBattleEnemyClassIds,
    (int32_t)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  if ( !v43 )
    goto LABEL_105;
  v64 = System_Collections_Generic_List_int___ToArray(
          v43,
          (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.trendDispWaveBattleEnemyClassIds = v64;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.trendDispWaveBattleEnemyClassIds,
    (int32_t)v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  isClearedWave = v106 < restartWave;
  this->fields._IsClearedWave_k__BackingField = v106 < restartWave;
  if ( !v41 )
  {
    this->fields._IsClearedWave_k__BackingField = 0;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v71 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CC112A )
    {
      sub_1C713B0(&NetworkManager_TypeInfo);
      byte_4CC112A = 1;
    }
    Master_object = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (__int64)NetworkManager_TypeInfo;
    }
    if ( questRestrictionInfo && v71 )
    {
      if ( !UserInterruptionQuestMaster__TryGetEntity(
              (UserInterruptionQuestMaster_o *)v71,
              &entity,
              *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
              questRestrictionInfo->fields.questId,
              questRestrictionInfo->fields.questPhase,
              0) )
      {
        isClearedWave = 0;
        goto LABEL_64;
      }
      Master_object = (__int64)entity;
      if ( entity )
      {
        isClearedWave = v106 <= UserInterruptionQuestEntity__GetAlreadySortiePartyNum(entity, restartWave, 0);
        this->fields._IsClearedWave_k__BackingField = isClearedWave;
        goto LABEL_64;
      }
    }
LABEL_105:
    sub_1C71608(Master_object, classId);
  }
LABEL_64:
  Master_object = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Master_object = (__int64)BalanceConfig_TypeInfo;
  }
  v72 = 0;
  v107 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 176LL) * v101;
  while ( 1 )
  {
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (__int64)BalanceConfig_TypeInfo;
    }
    static_fields = *(struct BalanceConfig_StaticFields **)(Master_object + 184);
    if ( v72 >= static_fields->DeckMemberMax )
      break;
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v74 = v107 + v72;
    if ( v72 < static_fields->DeckMainMemberMax )
    {
      v75 = v109->fields.deckInfo;
      if ( !v75 )
        goto LABEL_105;
      svts = v75->fields.svts;
      if ( !svts )
        goto LABEL_105;
      if ( (unsigned int)v74 >= LODWORD(svts->max_length) )
        goto LABEL_106;
      v77 = svts->m_Items[v74];
      if ( !v77 )
        goto LABEL_105;
      initPos = v77->fields.initPos;
    }
    else
    {
      initPos = v72 + 1;
    }
    if ( !v33 )
      goto LABEL_105;
    if ( (unsigned int)v72 >= LODWORD(v33->max_length) )
      goto LABEL_106;
    v79 = v33->m_Items[v72];
    v80 = *p_memberList;
    if ( v79 )
    {
      v81 = *(_OWORD *)&v79->fields.id.fields.fakeValue;
      *(_OWORD *)&v112.fields.currentCryptoKey = *(_OWORD *)&v79->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v112.fields.fakeValue = v81;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v111 = v112;
      v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v111, 0);
      Master_object = (__int64)UserEventDeckEntity__GetEquipList_43318216(v109, v82, restartWave > 0, 0);
      v83 = (System_Int64_array *)Master_object;
      if ( restartWave < 1 )
      {
        svtEquipIds = 0;
      }
      else
      {
        v84 = v109->fields.deckInfo;
        if ( !v84 )
          goto LABEL_105;
        v85 = v84->fields.svts;
        if ( !v85 )
          goto LABEL_105;
        if ( (unsigned int)v74 >= LODWORD(v85->max_length) )
          goto LABEL_106;
        v86 = v85->m_Items[v74];
        if ( !v86 )
          goto LABEL_105;
        svtEquipIds = (MethodInfo *)v86->fields.svtEquipIds;
      }
      methoda = svtEquipIds;
      v20 = questRestrictionInfo;
      v88 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34471244(
        v88,
        v72,
        v79,
        v83,
        setupInfo,
        questRestrictionInfo,
        0,
        initPos,
        (System_Int32_array *)methoda,
        isClearedWave,
        0,
        0,
        0);
      if ( !v80 )
        goto LABEL_105;
    }
    else
    {
      v88 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34482464(v88, v72, 0, setupInfo, v20, 1, initPos, 0, 0);
      if ( !v80 )
        goto LABEL_105;
    }
    if ( v88 )
    {
      Master_object = sub_1C714EC(v88, v80->obj.klass->_1.element_class);
      if ( !Master_object )
      {
        v99 = sub_1C7162C();
        sub_1C714D8(v99, 0);
      }
    }
    if ( (unsigned int)v72 >= LODWORD(v80->max_length) )
      goto LABEL_106;
    v95 = &v80->obj.klass + v72;
    v95[4] = (Il2CppClass *)v88;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v95 + 4), (int32_t)v88, v89, v90, v91, v92, v93, v94);
    v96 = *p_memberList;
    if ( !*p_memberList )
      goto LABEL_105;
    if ( (unsigned int)v72 >= LODWORD(v96->max_length) )
      goto LABEL_106;
    Master_object = (__int64)v96->m_Items[v72];
    if ( !Master_object )
      goto LABEL_105;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)Master_object,
      this->fields.waveBattleEnemyClassIds,
      0);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_105;
    if ( (unsigned int)v72 >= LODWORD(memberList->max_length) )
      goto LABEL_106;
    Master_object = (__int64)memberList->m_Items[v72];
    if ( !Master_object )
      goto LABEL_105;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)Master_object,
                          0)
                      + cost;
    Master_object = (__int64)BalanceConfig_TypeInfo;
    ++v72;
  }
}


void PartyListViewItem__CheckAndAddDuplicationUserSvtId(
        PartyListViewItem_o *this,
        System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___o *duplicationUserSvtIdDictionary,
        int32_t *orderIdx,
        int64_t *userSvtId,
        const MethodInfo *method)
{
  int32_t v8; // w1
  int64_t v9; // x22
  System_ValueTuple_int__bool__o p_value; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  System_ValueTuple_int__bool__o v13; // x2
  System_ValueTuple_int__bool__o v14; // x2
  System_ValueTuple_int__bool__o value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC2CD4 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TryAdd__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___set_Item__);
    sub_1C713B0(&Method_System_ValueTuple_int__bool___ctor__);
    byte_4CC2CD4 = 1;
  }
  v8 = *orderIdx;
  v9 = *userSvtId;
  p_value = (System_ValueTuple_int__bool__o)&value;
  value = 0;
  System_ValueTuple_int__bool____ctor(
    p_value,
    v8,
    0,
    (const MethodInfo_3B6EDF4 *)Method_System_ValueTuple_int__bool___ctor__);
  if ( !duplicationUserSvtIdDictionary )
    sub_1C71608(v11, v12);
  v13 = value;
  if ( !System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____TryAdd(
          duplicationUserSvtIdDictionary,
          v9,
          v13,
          (const MethodInfo_3499D20 *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TryAdd__) )
  {
    v14 = (System_ValueTuple_int__bool__o)(*(_QWORD *)&System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____get_Item(
                                                         duplicationUserSvtIdDictionary,
                                                         *userSvtId,
                                                         (const MethodInfo_3498508 *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___get_Item__)
                                         & 0xFFFFFF00FFFFFFFFLL
                                         | 0x100000000LL);
    System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____set_Item(
      duplicationUserSvtIdDictionary,
      *userSvtId,
      v14,
      (const MethodInfo_3498594 *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___set_Item__);
  }
}


bool PartyListViewItem__CheckAndUpdateDuplicationGrandQuestServant(PartyListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_array *SvtEntityList; // x0
  PartyListViewItem___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x20
  System_Func_object__int__o *_9__114_0; // x21
  Il2CppObject *v7; // x22
  struct PartyListViewItem___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Int32_array *v16; // x20
  const MethodInfo *v17; // x2
  Il2CppObject *Master_object; // x21
  __int64 v19; // x22
  ServantEntity_o *v20; // x28
  BalanceConfig_c *v21; // x0
  ServantEntity_o *Member; // x0
  __int64 v23; // x1
  RestrictionEntity_o *GrandServantRestrictionEntity; // x0
  const MethodInfo *v25; // x5
  int v26; // w23
  il2cpp_array_size_t max_length; // x9
  int32_t v28; // w8
  int32_t v29; // w24
  unsigned __int64 v30; // x25
  struct PartyOrganizationListViewItem_array *memberList; // x10
  PartyOrganizationListViewItem_o *v32; // x10
  ServantEntity_o *v33; // x26
  int32_t NotSamePartyKey; // w1
  System_Nullable_int__o v35; // x0
  bool v37; // [xsp+Ch] [xbp-84h]
  __int64 v38; // [xsp+10h] [xbp-80h] BYREF
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+1Ch] [xbp-74h] BYREF
  System_Int64_array *equipIdList; // [xsp+20h] [xbp-70h] BYREF
  UserServantEntity_o *userServantEntity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4CC2CD6 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_ServantEntity__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&System_Func_ServantEntity__int__TypeInfo);
    sub_1C713B0(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C713B0(&Method_System_Nullable_int___ctor__);
    sub_1C713B0(&Method_System_Nullable_int__get_HasValue__);
    sub_1C713B0(&Method_PartyListViewItem___c__CheckAndUpdateDuplicationGrandQuestServant_b__114_0__);
    sub_1C713B0(&PartyListViewItem___c_TypeInfo);
    byte_4CC2CD6 = 1;
  }
  equipIdList = 0;
  userServantEntity = 0;
  isChangeFriendShipSvtEquipSkill = 0;
  SvtEntityList = PartyListViewItem__GetSvtEntityList(this, method);
  v4 = PartyListViewItem___c_TypeInfo;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)SvtEntityList;
  if ( !PartyListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyListViewItem___c_TypeInfo);
    v4 = PartyListViewItem___c_TypeInfo;
  }
  _9__114_0 = (System_Func_object__int__o *)v4->static_fields->__9__114_0;
  if ( !_9__114_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = PartyListViewItem___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__114_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_ServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__114_0,
      v7,
      Method_PartyListViewItem___c__CheckAndUpdateDuplicationGrandQuestServant_b__114_0__,
      0);
    static_fields = PartyListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__114_0 = (struct System_Func_ServantEntity__int__o *)_9__114_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__114_0,
      (int32_t)_9__114_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v5,
                                                               (System_Func_TSource__TResult__o *)_9__114_0,
                                                               (const MethodInfo_3180FD8 *)Method_System_Linq_Enumerable_Select_ServantEntity__int___);
  v16 = System_Linq_Enumerable__ToArray_int_(
          v15,
          (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantMaster___);
  v19 = 0;
  v20 = 0;
  v37 = 0;
  while ( 1 )
  {
    v21 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v21 = BalanceConfig_TypeInfo;
    }
    if ( v19 >= v21->static_fields->DeckMemberMax )
      return v37;
    Member = (ServantEntity_o *)PartyListViewItem__GetMember(this, v19, v17);
    if ( !Member )
      goto LABEL_50;
    if ( !*(_QWORD *)&Member->fields.sellQp )
      goto LABEL_46;
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_50;
    GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                      this->fields.questRestrictionInfo,
                                      Member[1].fields.expType,
                                      0);
    if ( !GrandServantRestrictionEntity )
      goto LABEL_46;
    userServantEntity = 0;
    PartyListViewItem__GetGrandServantInfo(
      this,
      GrandServantRestrictionEntity,
      &userServantEntity,
      &equipIdList,
      &isChangeFriendShipSvtEquipSkill,
      v25);
    if ( !userServantEntity )
      goto LABEL_46;
    Member = (ServantEntity_o *)UserServantEntity__getSvtId(userServantEntity, 0);
    if ( !Master_object
      || (v26 = (int)Member,
          (Member = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                         (int32_t)Member,
                                         (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0)
      || (Member = (ServantEntity_o *)ServantEntity__GetNotSamePartyKey(Member, 0), !v16) )
    {
LABEL_50:
      sub_1C71608(Member, v23);
    }
    max_length = v16->max_length;
    v28 = isChangeFriendShipSvtEquipSkill;
    if ( (int)max_length < 1 )
    {
LABEL_45:
      isChangeFriendShipSvtEquipSkill = v28;
      goto LABEL_46;
    }
    v29 = (int)Member;
    v30 = 0;
    while ( 1 )
    {
      if ( v19 == v30 )
        goto LABEL_30;
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_50;
      if ( v30 >= LODWORD(memberList->max_length) )
LABEL_51:
        sub_1C71610(Member);
      v32 = memberList->m_Items[v30];
      if ( !v32 )
        goto LABEL_50;
      if ( v32->fields.isFollower )
        goto LABEL_30;
      if ( v30 >= (unsigned int)max_length )
        goto LABEL_51;
      v23 = (unsigned int)v16->m_Items[v30];
      if ( (_DWORD)v23 == v26 )
        break;
      if ( v29 )
      {
        if ( (int)v23 < 1 )
        {
          v28 = v29;
        }
        else
        {
          Member = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        v23,
                                        (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          v33 = Member;
          if ( !Member )
            Member = v20;
          v28 = v29;
          if ( v33 )
          {
            if ( !Member )
              goto LABEL_50;
            NotSamePartyKey = ServantEntity__GetNotSamePartyKey(Member, 0);
            v35 = (System_Nullable_int__o)&v38;
            v38 = 0;
            System_Nullable_int____ctor(
              v35,
              NotSamePartyKey,
              (const MethodInfo_3938D3C *)Method_System_Nullable_int___ctor__);
            if ( (_BYTE)v38 )
            {
              v20 = v33;
              v28 = v29;
              if ( v29 == HIDWORD(v38) )
              {
                v20 = v33;
                goto LABEL_48;
              }
            }
            else
            {
              v28 = v29;
              v20 = v33;
            }
          }
        }
      }
LABEL_30:
      LODWORD(max_length) = v16->max_length;
      if ( (__int64)++v30 >= (int)max_length )
        goto LABEL_45;
    }
    v29 = v28;
LABEL_48:
    isChangeFriendShipSvtEquipSkill = v29;
    PartyListViewItem__ClearMember(this, v30, v17);
    v37 = 1;
LABEL_46:
    ++v19;
  }
}


// local variable allocation has failed, the output may be wrong!
bool PartyListViewItem__CheckDeckConditionServantNum(
        PartyListViewItem_o *this,
        int32_t deckMemberCount,
        int32_t mainMemberCount,
        bool isFollowerMainMember,
        int32_t mainFollowerNum,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t v12; // w8
  int32_t v13; // w21
  int32_t servantNumMax; // w22
  int32_t ServantNumRangeType; // w0
  int32_t targetVals2; // w8
  struct QuestRestrictionInfo_o *v18; // x9
  int32_t servantNumMin; // w20
  int32_t v20; // w8
  BalanceConfig_c *v21; // x0

  if ( (byte_4CC2CB9 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC2CB9 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_28;
  if ( isFollowerMainMember )
    v12 = mainFollowerNum;
  else
    v12 = 0;
  v13 = v12 + mainMemberCount;
  if ( !(v12 + mainMemberCount) )
    return 0;
  servantNumMax = questRestrictionInfo->fields.servantNumMax;
  ServantNumRangeType = QuestRestrictionInfo__GetServantNumRangeType(questRestrictionInfo, 0);
  if ( ServantNumRangeType == 5 )
  {
    questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    }
    targetVals2 = (int32_t)questRestrictionInfo->fields.uniqueSvtRestrictionEntity[2].fields.targetVals2;
    if ( deckMemberCount - v13 >= 1 && v13 < targetVals2 )
      return 0;
    v18 = this->fields.questRestrictionInfo;
    if ( v18 )
    {
      servantNumMin = v18->fields.servantNumMin;
      if ( !LODWORD(questRestrictionInfo->fields.myServantNumRestrictionEntity) )
      {
        j_il2cpp_runtime_class_init_0(questRestrictionInfo);
        targetVals2 = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
      }
      if ( servantNumMin <= targetVals2 )
        v20 = v13;
      else
        v20 = deckMemberCount;
      return servantNumMax >= deckMemberCount && servantNumMin <= v20;
    }
LABEL_28:
    sub_1C71608(questRestrictionInfo, *(_QWORD *)&deckMemberCount);
  }
  if ( ServantNumRangeType != 4 )
  {
    if ( ServantNumRangeType == 1 )
      return servantNumMax == deckMemberCount;
    return 0;
  }
  if ( servantNumMax < deckMemberCount )
    return 0;
  v21 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  return v13 >= v21->static_fields->DeckMainMemberMax;
}


bool PartyListViewItem__CheckDuplicationGrandQuestEquipment(PartyListViewItem_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___o *v4; // x20
  const MethodInfo *v5; // x2
  int v6; // w29
  int32_t i; // w21
  BalanceConfig_c *v8; // x0
  QuestRestrictionInfo_o *Member; // x0
  __int64 v10; // x1
  PartyOrganizationListViewItem_o *v11; // x22
  RestrictionEntity_o *GrandServantRestrictionEntity; // x0
  const MethodInfo *v13; // x5
  const MethodInfo *v14; // x4
  struct System_Int64_array *v15; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v17; // x24
  int64_t *m_Items; // x22
  const MethodInfo *v19; // x4
  PartyListViewItem___c_c *v20; // x0
  System_Func_KeyValuePair_long__ValueTuple_int__bool____int__o *_9__110_0; // x21
  Il2CppObject *v22; // x22
  struct PartyListViewItem___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x0
  PartyListViewItem___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x20
  System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__o *_9__110_1; // x21
  Il2CppObject *v34; // x22
  struct PartyListViewItem___c_StaticFields *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  PartyListViewItem___c_c *v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x20
  System_Func_KeyValuePair_long__ValueTuple_int__bool____long__o *_9__110_2; // x21
  Il2CppObject *v46; // x22
  struct PartyListViewItem___c_StaticFields *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  struct System_Int64_array **p_duplicatedEquipmentUserSvtIdList; // x19
  PartyListViewItem_o *EquipUserSvtId; // [xsp+0h] [xbp-80h] BYREF
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+Ch] [xbp-74h] BYREF
  UserServantEntity_o *userServantEntity; // [xsp+10h] [xbp-70h] BYREF
  System_Int64_array *equipIdList; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4CC2CD2 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderBy_KeyValuePair_long__ValueTuple_int__bool____int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_KeyValuePair_long__ValueTuple_int__bool____long___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_KeyValuePair_long__ValueTuple_int__bool_____);
    sub_1C713B0(&System_Func_KeyValuePair_long__ValueTuple_int__bool____int__TypeInfo);
    sub_1C713B0(&System_Func_KeyValuePair_long__ValueTuple_int__bool____long__TypeInfo);
    sub_1C713B0(&System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__TypeInfo);
    sub_1C713B0(&Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__110_0__);
    sub_1C713B0(&Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__110_1__);
    sub_1C713B0(&Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__110_2__);
    sub_1C713B0(&PartyListViewItem___c_TypeInfo);
    byte_4CC2CD2 = 1;
  }
  userServantEntity = 0;
  equipIdList = 0;
  isChangeFriendShipSvtEquipSkill = 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    v4 = (System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___o *)sub_1C715FC(System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TypeInfo);
    System_Collections_Generic_Dictionary_long__ValueTuple_int__bool_____ctor(
      v4,
      (const MethodInfo_3497BD8 *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____ctor__);
    v6 = 0;
    for ( i = 0; ; ++i )
    {
      v8 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v8 = BalanceConfig_TypeInfo;
      }
      if ( i >= v8->static_fields->DeckMemberMax )
        break;
      Member = (QuestRestrictionInfo_o *)PartyListViewItem__GetMember(this, i, v5);
      if ( !Member )
        goto LABEL_47;
      v11 = (PartyOrganizationListViewItem_o *)Member;
      if ( Member->fields.restrictionWholeEntities )
      {
        Member = this->fields.questRestrictionInfo;
        if ( !Member )
          goto LABEL_47;
        GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                          Member,
                                          v11->fields._InitPos_k__BackingField,
                                          0);
        if ( GrandServantRestrictionEntity
          && ((userServantEntity = 0,
               PartyListViewItem__GetGrandServantInfo(
                 this,
                 GrandServantRestrictionEntity,
                 &userServantEntity,
                 &equipIdList,
                 &isChangeFriendShipSvtEquipSkill,
                 v13),
               userServantEntity)
           || v11->fields._IsUseGrandBoard_k__BackingField) )
        {
          v15 = v11->fields.equipIdList;
          if ( !v15 )
            goto LABEL_47;
          max_length = v15->max_length;
          if ( (int)max_length >= 1 )
          {
            v17 = 0;
            m_Items = v15->m_Items;
            do
            {
              if ( v17 >= (unsigned int)max_length )
                sub_1C71610(Member);
              if ( *m_Items >= 1 )
              {
                isChangeFriendShipSvtEquipSkill = v6 + v17;
                PartyListViewItem__CheckAndAddDuplicationUserSvtId(
                  (PartyListViewItem_o *)Member,
                  v4,
                  &isChangeFriendShipSvtEquipSkill,
                  m_Items,
                  v14);
              }
              LODWORD(max_length) = v15->max_length;
              ++v17;
              ++m_Items;
            }
            while ( (__int64)v17 < (int)max_length );
          }
        }
        else if ( PartyOrganizationListViewItem__get_EquipUserSvtId(v11, 0) >= 1 )
        {
          isChangeFriendShipSvtEquipSkill = 10 * i;
          EquipUserSvtId = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_EquipUserSvtId(v11, 0);
          PartyListViewItem__CheckAndAddDuplicationUserSvtId(
            EquipUserSvtId,
            v4,
            &isChangeFriendShipSvtEquipSkill,
            (int64_t *)&EquipUserSvtId,
            v19);
        }
      }
      v6 += 10;
    }
    v20 = PartyListViewItem___c_TypeInfo;
    if ( !PartyListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyListViewItem___c_TypeInfo);
      v20 = PartyListViewItem___c_TypeInfo;
    }
    _9__110_0 = v20->static_fields->__9__110_0;
    if ( !_9__110_0 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = PartyListViewItem___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v20->static_fields->__9;
      _9__110_0 = (System_Func_KeyValuePair_long__ValueTuple_int__bool____int__o *)sub_1C715FC(System_Func_KeyValuePair_long__ValueTuple_int__bool____int__TypeInfo);
      System_Func_KeyValuePair_long__ValueTuple_int__bool____int____ctor(
        _9__110_0,
        v22,
        Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__110_0__,
        0);
      static_fields = PartyListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__110_0 = _9__110_0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__110_0,
        (int32_t)_9__110_0,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
    }
    v30 = System_Linq_Enumerable__OrderBy_KeyValuePair_long__ValueTuple_int__bool____int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v4,
            (System_Func_TSource__TKey__o *)_9__110_0,
            (const MethodInfo_317A5DC *)Method_System_Linq_Enumerable_OrderBy_KeyValuePair_long__ValueTuple_int__bool____int___);
    v31 = PartyListViewItem___c_TypeInfo;
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)v30;
    if ( !PartyListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyListViewItem___c_TypeInfo);
      v31 = PartyListViewItem___c_TypeInfo;
    }
    _9__110_1 = v31->static_fields->__9__110_1;
    if ( !_9__110_1 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v31 = PartyListViewItem___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v31->static_fields->__9;
      _9__110_1 = (System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__o *)sub_1C715FC(System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__TypeInfo);
      System_Func_KeyValuePair_long__ValueTuple_int__bool____bool____ctor(
        _9__110_1,
        v34,
        Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__110_1__,
        0);
      v35 = PartyListViewItem___c_TypeInfo->static_fields;
      v35->__9__110_1 = _9__110_1;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v35->__9__110_1, (int32_t)_9__110_1, v36, v37, v38, v39, v40, v41);
    }
    v42 = System_Linq_Enumerable__Where_KeyValuePair_long__ValueTuple_int__bool___(
            v32,
            (System_Func_TSource__bool__o *)_9__110_1,
            (const MethodInfo_3190A68 *)Method_System_Linq_Enumerable_Where_KeyValuePair_long__ValueTuple_int__bool_____);
    v43 = PartyListViewItem___c_TypeInfo;
    v44 = v42;
    if ( !PartyListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyListViewItem___c_TypeInfo);
      v43 = PartyListViewItem___c_TypeInfo;
    }
    _9__110_2 = v43->static_fields->__9__110_2;
    if ( !_9__110_2 )
    {
      if ( !v43->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v43);
        v43 = PartyListViewItem___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v43->static_fields->__9;
      _9__110_2 = (System_Func_KeyValuePair_long__ValueTuple_int__bool____long__o *)sub_1C715FC(System_Func_KeyValuePair_long__ValueTuple_int__bool____long__TypeInfo);
      System_Func_KeyValuePair_long__ValueTuple_int__bool____long____ctor(
        _9__110_2,
        v46,
        Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__110_2__,
        0);
      v47 = PartyListViewItem___c_TypeInfo->static_fields;
      v47->__9__110_2 = _9__110_2;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v47->__9__110_2, (int32_t)_9__110_2, v48, v49, v50, v51, v52, v53);
    }
    v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_long__ValueTuple_int__bool____long_(
                                                                 v44,
                                                                 (System_Func_TSource__TResult__o *)_9__110_2,
                                                                 (const MethodInfo_317C524 *)Method_System_Linq_Enumerable_Select_KeyValuePair_long__ValueTuple_int__bool____long___);
    Member = (QuestRestrictionInfo_o *)System_Linq_Enumerable__ToArray_long_(
                                         v54,
                                         (const MethodInfo_318AF64 *)Method_System_Linq_Enumerable_ToArray_long___);
    if ( !this )
LABEL_47:
      sub_1C71608(Member, v10);
    this->fields.duplicatedEquipmentUserSvtIdList = (struct System_Int64_array *)Member;
    p_duplicatedEquipmentUserSvtIdList = &this->fields.duplicatedEquipmentUserSvtIdList;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)p_duplicatedEquipmentUserSvtIdList,
      (int32_t)Member,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    LOBYTE(questRestrictionInfo) = !BasicHelper__IsNullOrEmpty(
                                      (System_Collections_ICollection_o *)*p_duplicatedEquipmentUserSvtIdList,
                                      0);
  }
  return (unsigned __int8)questRestrictionInfo & 1;
}


System_Tuple_string__bool__o *PartyListViewItem__CheckDuplicationGrandServantEquipmentNameList(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  const MethodInfo *v5; // x2
  System_Int64_array *v6; // x21
  int32_t v7; // w22
  char v8; // w24
  BalanceConfig_c *v9; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  System_Collections_ICollection_o *v11; // x23
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Func_T__TResult__o *v22; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_String_array *v24; // x0
  Il2CppObject *v25; // x0

  if ( (byte_4CC2CD5 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Concat_long___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_long__string___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C713B0(&System_Func_long__string__TypeInfo);
    sub_1C713B0(&long___TypeInfo);
    sub_1C713B0(&Method_System_Tuple_Create_string__bool___);
    sub_1C713B0(&Method_PartyListViewItem___c__DisplayClass113_0__CheckDuplicationGrandServantEquipmentNameList_b__0__);
    sub_1C713B0(&PartyListViewItem___c__DisplayClass113_0_TypeInfo);
    sub_1C713B0(&StringLiteral_43/*"\n"*/);
    byte_4CC2CD5 = 1;
  }
  v3 = sub_1C715FC(PartyListViewItem___c__DisplayClass113_0_TypeInfo);
  PartyListViewItem___c__DisplayClass113_0___ctor((PartyListViewItem___c__DisplayClass113_0_o *)v3, 0);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !QuestRestrictionInfo__IsExistGrand(questRestrictionInfo, 0) )
    return 0;
  v6 = (System_Int64_array *)sub_1C71458(long___TypeInfo, 0);
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    if ( v7 >= v9->static_fields->DeckMemberMax )
      break;
    Member = PartyListViewItem__GetMember(this, v7, v5);
    if ( Member )
    {
      v11 = (System_Collections_ICollection_o *)PartyOrganizationListViewItem__CheckDuplicationGrandServantEquipment(
                                                  Member,
                                                  0);
      IsNullOrEmpty = (Il2CppObject *)BasicHelper__IsNullOrEmpty(v11, 0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( !v6 )
          goto LABEL_20;
        v8 |= SLODWORD(v6->max_length) > 0;
        v14 = System_Linq_Enumerable__Concat_long_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v6,
                (System_Collections_Generic_IEnumerable_TSource__o *)v11,
                (const MethodInfo_3167B80 *)Method_System_Linq_Enumerable_Concat_long___);
        v6 = System_Linq_Enumerable__ToArray_long_(
               v14,
               (const MethodInfo_318AF64 *)Method_System_Linq_Enumerable_ToArray_long___);
      }
    }
    ++v7;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v6, 0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !v3 )
LABEL_20:
    sub_1C71608(IsNullOrEmpty, v13);
  *(_QWORD *)(v3 + 16) = IsNullOrEmpty;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)IsNullOrEmpty, v16, v17, v18, v19, v20, v21);
  v22 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_long__string__TypeInfo);
  System_Func_long__object____ctor(
    v22,
    (Il2CppObject *)v3,
    Method_PartyListViewItem___c__DisplayClass113_0__CheckDuplicationGrandServantEquipmentNameList_b__0__,
    0);
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v6,
                                                               (System_Func_TSource__TResult__o *)v22,
                                                               (const MethodInfo_3180398 *)Method_System_Linq_Enumerable_Select_long__string___);
  v24 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v23,
                                 (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_string___);
  v25 = (Il2CppObject *)System_String__Join((System_String_o *)StringLiteral_43/*"\n"*/, v24, 0);
  return (System_Tuple_string__bool__o *)System_Tuple__Create_object__bool_(
                                           v25,
                                           v8 & 1,
                                           (const MethodInfo_321C9AC *)Method_System_Tuple_Create_string__bool___);
}


void PartyListViewItem__CheckRestriction(PartyListViewItem_o *this, const MethodInfo *method)
{
  int32_t v3; // w20
  int v4; // w23
  int v5; // w24
  PartyOrganizationListViewItem_o *IsUseOldMaster; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v8; // x8
  PartyOrganizationListViewItem_o *v9; // x8
  struct UserServantEntity_o *userServantEntity; // x10
  int isFollower; // w9
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t FixedServantPositionCount; // w20
  unsigned int v14; // w21
  char i; // w25
  struct PartyOrganizationListViewItem_array *v16; // x8
  PartyOrganizationListViewItem_o *v17; // x8
  int v18; // w21
  int32_t FixedPositionCount; // w20
  int v20; // w27
  char v21; // w25
  int v22; // w26
  struct PartyOrganizationListViewItem_array *v23; // x8
  PartyOrganizationListViewItem_o *v24; // x9
  bool isFixedSupportPositionRestriction; // w8
  _BOOL4 isRestrictionNeedStarting; // w11
  int isRestrictionMyServantPos; // w10
  int isRestrictionServantPos; // w9
  bool v29; // zf
  struct PartyOrganizationListViewItem_array *v30; // x20
  int max_length; // w8
  unsigned int v32; // w21
  struct PartyOrganizationListViewItem_array *v33; // x21
  int v34; // w8
  unsigned int v35; // w27
  struct PartyOrganizationListViewItem_array *v36; // x20
  int v37; // w8
  unsigned int v38; // w21
  struct QuestRestrictionInfo_o *v39; // x8
  int64_t sortValue2B; // x20
  __int64 sortStr1_low; // x21
  __int64 v42; // x25
  __int64 v43; // x8
  __int64 v44; // x8
  struct QuestRestrictionInfo_o *v45; // x8
  unsigned int k; // w20
  struct PartyOrganizationListViewItem_array *v47; // x8
  PartyOrganizationListViewItem_o *v48; // x8
  int j; // w21
  struct PartyOrganizationListViewItem_array *v50; // x8

  if ( (byte_4CC2CAC & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CC2CAC = 1;
  }
  if ( this->fields.questRestrictionInfo )
    PartyListViewItem__CheckDuplicationGrandQuestEquipment(this, method);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( v3 >= SHIDWORD(IsUseOldMaster->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_107;
    if ( (unsigned int)v3 >= LODWORD(memberList->max_length) )
      goto LABEL_108;
    IsUseOldMaster = memberList->m_Items[v3];
    if ( !IsUseOldMaster )
      goto LABEL_107;
    PartyOrganizationListViewItem__CheckRestriction(IsUseOldMaster, this, v3, 0);
    v8 = this->fields.memberList;
    if ( !v8 )
      goto LABEL_107;
    if ( (unsigned int)v3 >= LODWORD(v8->max_length) )
      goto LABEL_108;
    v9 = v8->m_Items[v3];
    if ( !v9 )
      goto LABEL_107;
    userServantEntity = v9->fields.userServantEntity;
    isFollower = v9->fields.isFollower;
    ++v3;
    v9->fields._IsNotSupportSingle_k__BackingField = 0;
    v4 += isFollower;
    if ( userServantEntity )
      ++v5;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_107;
    if ( ((unsigned __int8)IsUseOldMaster & 1) != 0 )
    {
      FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(
                                    this->fields.questRestrictionInfo,
                                    0);
      IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      v14 = 0;
      for ( i = 0; ; i |= v17->fields.isFixedSupportPositionRestriction )
      {
        if ( !IsUseOldMaster->fields.frameType )
        {
          j_il2cpp_runtime_class_init_0(IsUseOldMaster);
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
        }
        if ( (signed int)v14 >= SHIDWORD(IsUseOldMaster->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
          break;
        v16 = this->fields.memberList;
        if ( !v16 )
          goto LABEL_107;
        if ( v14 >= LODWORD(v16->max_length) )
          goto LABEL_108;
        v17 = v16->m_Items[v14];
        if ( !v17 )
          goto LABEL_107;
        ++v14;
        FixedServantPositionCount -= v17->fields.isFixedServantPositionAgreement;
      }
      if ( !(i & 1 | (FixedServantPositionCount > 0)) )
      {
        v30 = this->fields.memberList;
        if ( !v30 )
          goto LABEL_107;
        max_length = v30->max_length;
        if ( max_length >= 1 )
        {
          v32 = 0;
          while ( v32 < max_length )
          {
            IsUseOldMaster = v30->m_Items[v32];
            if ( !IsUseOldMaster )
              goto LABEL_107;
            PartyOrganizationListViewItem__ResetPositionRestriction(IsUseOldMaster, 0);
            max_length = v30->max_length;
            if ( (int)++v32 >= max_length )
              goto LABEL_68;
          }
          goto LABEL_108;
        }
      }
      goto LABEL_68;
    }
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)QuestRestrictionInfo__GetFixedMyServantPositionCount(
                                                          this->fields.questRestrictionInfo,
                                                          0);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_107;
    v18 = (int)IsUseOldMaster;
    FixedPositionCount = QuestRestrictionInfo__GetFixedPositionCount(this->fields.questRestrictionInfo, 0);
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    v20 = 0;
    v21 = 0;
    v22 = -1;
    while ( 1 )
    {
      if ( !IsUseOldMaster->fields.frameType )
      {
        j_il2cpp_runtime_class_init_0(IsUseOldMaster);
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( v20 >= SHIDWORD(IsUseOldMaster->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
        break;
      v23 = this->fields.memberList;
      if ( !v23 )
        goto LABEL_107;
      if ( (unsigned int)v20 >= LODWORD(v23->max_length) )
        goto LABEL_108;
      v24 = v23->m_Items[v20];
      if ( !v24 )
        goto LABEL_107;
      isFixedSupportPositionRestriction = v24->fields.isFixedSupportPositionRestriction;
      if ( v24->fields.isFixedServantPositionAgreement )
      {
        isRestrictionNeedStarting = v24->fields.isRestrictionNeedStarting;
        isRestrictionMyServantPos = v24->fields.isRestrictionMyServantPos;
        isRestrictionServantPos = v24->fields.isRestrictionServantPos;
        v29 = isRestrictionNeedStarting && v22 == -1;
        v18 -= isRestrictionMyServantPos;
        if ( v29 )
          v22 = v20;
        FixedPositionCount -= isRestrictionServantPos;
      }
      v21 |= isFixedSupportPositionRestriction;
      ++v20;
    }
    if ( v18 > 0 )
      goto LABEL_60;
    v33 = this->fields.memberList;
    if ( !v33 )
      goto LABEL_107;
    v34 = v33->max_length;
    if ( v34 < 1 )
    {
LABEL_60:
      if ( !((v22 < 0) | v21 & 1) )
      {
        for ( j = v22 + 1; ; ++j )
        {
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
          }
          if ( j >= SHIDWORD(IsUseOldMaster->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
            break;
          v50 = this->fields.memberList;
          if ( !v50 )
            goto LABEL_107;
          if ( (unsigned int)j >= LODWORD(v50->max_length) )
            goto LABEL_108;
          IsUseOldMaster = v50->m_Items[j];
          if ( !IsUseOldMaster )
            goto LABEL_107;
          PartyOrganizationListViewItem__ResetPositionRestrictionNeedStarting(IsUseOldMaster, 0);
        }
      }
      if ( (FixedPositionCount > 0) | v21 & 1 )
        goto LABEL_68;
      v36 = this->fields.memberList;
      if ( !v36 )
        goto LABEL_107;
      v37 = v36->max_length;
      if ( v37 < 1 )
      {
LABEL_68:
        v39 = this->fields.questRestrictionInfo;
        if ( !v39 || v39->fields.servantNumMin != 1 )
          return;
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( IsUseOldMaster )
        {
          sortValue2B = IsUseOldMaster->fields.sortValue2B;
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( IsUseOldMaster )
          {
            if ( sortValue2B )
            {
              sortStr1_low = LODWORD(IsUseOldMaster->fields.sortStr1);
              if ( (int)sortStr1_low >= 1 )
              {
                IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                v42 = 0;
                v5 = 0;
                while ( 1 )
                {
                  if ( !IsUseOldMaster->fields.frameType )
                  {
                    j_il2cpp_runtime_class_init_0(IsUseOldMaster);
                    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                  }
                  if ( v42 >= SHIDWORD(IsUseOldMaster->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
                    break;
                  if ( sortStr1_low != ++v42 )
                  {
                    v43 = *(_QWORD *)(sortValue2B + 128);
                    if ( !v43 )
                      goto LABEL_107;
                    if ( v42 - 1 >= (unsigned __int64)*(unsigned int *)(v43 + 24) )
                      goto LABEL_108;
                    v44 = *(_QWORD *)(v43 + 8 * v42 + 24);
                    if ( !v44 )
                      goto LABEL_107;
                    if ( *(_QWORD *)(v44 + 120) )
                      ++v5;
                  }
                }
              }
            }
            v45 = this->fields.questRestrictionInfo;
            if ( v45 )
            {
              if ( !v5 && v4 == 1 && v45->fields.isNotSingleSupportOnly )
              {
                IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                for ( k = 0; ; ++k )
                {
                  if ( !IsUseOldMaster->fields.frameType )
                  {
                    j_il2cpp_runtime_class_init_0(IsUseOldMaster);
                    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                  }
                  if ( (signed int)k >= SHIDWORD(IsUseOldMaster->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
                    break;
                  v47 = this->fields.memberList;
                  if ( !v47 )
                    goto LABEL_107;
                  if ( k >= LODWORD(v47->max_length) )
                    goto LABEL_108;
                  v48 = v47->m_Items[k];
                  if ( !v48 )
                    goto LABEL_107;
                  if ( v48->fields.isFollower )
                  {
                    v48->fields._IsNotSupportSingle_k__BackingField = 1;
                    return;
                  }
                }
              }
              return;
            }
          }
        }
LABEL_107:
        sub_1C71608(IsUseOldMaster, method);
      }
      v38 = 0;
      while ( v38 < v37 )
      {
        IsUseOldMaster = v36->m_Items[v38];
        if ( !IsUseOldMaster )
          goto LABEL_107;
        PartyOrganizationListViewItem__ResetPositionRestrictionServant(IsUseOldMaster, 0);
        v37 = v36->max_length;
        if ( (int)++v38 >= v37 )
          goto LABEL_68;
      }
    }
    else
    {
      v35 = 0;
      while ( v35 < v34 )
      {
        IsUseOldMaster = v33->m_Items[v35];
        if ( !IsUseOldMaster )
          goto LABEL_107;
        PartyOrganizationListViewItem__ResetPositionRestrictionMyServant(IsUseOldMaster, 0);
        v34 = v33->max_length;
        if ( (int)++v35 >= v34 )
          goto LABEL_60;
      }
    }
LABEL_108:
    sub_1C71610(IsUseOldMaster);
  }
}


void PartyListViewItem__ClearDeckName(PartyListViewItem_o *this, const MethodInfo *method)
{
  struct System_String_o *DefaultDeckName; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, method);
  this->fields.deckName = DefaultDeckName;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.deckName, (int32_t)DefaultDeckName, v4, v5, v6, v7, v8, v9);
}


void PartyListViewItem__ClearEquip(PartyListViewItem_o *this, const MethodInfo *method)
{
  unsigned int i; // w20
  PartyOrganizationListViewItem_o *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w22

  if ( (byte_4CC2CB3 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC2CB3 = 1;
  }
  for ( i = 0; ; ++i )
  {
    v4 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v4 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= SHIDWORD(v4->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_15;
    if ( i >= LODWORD(memberList->max_length) )
      sub_1C71610(v4);
    v4 = memberList->m_Items[i];
    if ( !v4 )
LABEL_15:
      sub_1C71608(v4, method);
    if ( !v4->fields.isFollower && !v4->fields.isRestrictionGrandServant )
    {
      cost = this->fields.cost;
      this->fields.cost = cost - PartyOrganizationListViewItem__ClearEquip(v4, 0);
    }
  }
  PartyListViewItem__CheckRestriction(this, method);
}


void PartyListViewItem__ClearFollower(PartyListViewItem_o *this, const MethodInfo *method)
{
  unsigned int i; // w20
  PartyOrganizationListViewItem_o *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8

  if ( (byte_4CC2CB4 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC2CB4 = 1;
  }
  for ( i = 0; ; ++i )
  {
    v4 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v4 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= SHIDWORD(v4->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_12;
    if ( i >= LODWORD(memberList->max_length) )
      sub_1C71610(v4);
    v4 = memberList->m_Items[i];
    if ( !v4 )
LABEL_12:
      sub_1C71608(v4, method);
    PartyOrganizationListViewItem__ClearFollower(v4, 0);
  }
  PartyListViewItem__CheckRestriction(this, method);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewItem__ClearMember(PartyListViewItem_o *this, int32_t num, const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v5; // x19
  int32_t cost; // w22
  struct PartyOrganizationListViewItem_array *v7; // x8
  const MethodInfo *v8; // x1

  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_8;
  if ( LODWORD(memberList->max_length) <= num )
    goto LABEL_9;
  v5 = this;
  this = (PartyListViewItem_o *)memberList->m_Items[num];
  if ( !this
    || (cost = v5->fields.cost,
        this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(
                                        (PartyOrganizationListViewItem_o *)this,
                                        0),
        v7 = v5->fields.memberList,
        v5->fields.cost = cost - (_DWORD)this,
        !v7) )
  {
LABEL_8:
    sub_1C71608(this, *(_QWORD *)&num);
  }
  if ( LODWORD(v7->max_length) <= num )
LABEL_9:
    sub_1C71610(this);
  this = (PartyListViewItem_o *)v7->m_Items[num];
  if ( !this )
    goto LABEL_8;
  PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)this, 0);
  PartyListViewItem__CheckRestriction(v5, v8);
}


void PartyListViewItem__ClearMember_34344376(PartyListViewItem_o *this, const MethodInfo *method)
{
  unsigned int v3; // w20
  PartyOrganizationListViewItem_o *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w22

  if ( (byte_4CC2CB2 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC2CB2 = 1;
  }
  v3 = 0;
  this->fields.cost = 0;
  while ( 1 )
  {
    v4 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v4 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v3 >= SHIDWORD(v4->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_19;
    if ( v3 >= LODWORD(memberList->max_length) )
LABEL_20:
      sub_1C71610(v4);
    v4 = memberList->m_Items[v3];
    if ( !v4 )
      goto LABEL_19;
    if ( !v4->fields.isFollower && !v4->fields.isRestrictionGrandServant )
    {
      PartyOrganizationListViewItem__Empty(v4, 0);
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_19;
    }
    if ( v3 >= LODWORD(memberList->max_length) )
      goto LABEL_20;
    v4 = memberList->m_Items[v3];
    if ( !v4 )
LABEL_19:
      sub_1C71608(v4, method);
    if ( v4->fields.isRestrictionGrandServant )
    {
      cost = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v4, 0) + cost;
    }
    ++v3;
  }
  PartyListViewItem__CheckRestriction(this, method);
}


PartyListViewItem_o *PartyListViewItem__Clone(PartyListViewItem_o *this, const MethodInfo *method)
{
  PartyListViewItem_o *v3; // x20
  const MethodInfo *v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4CC2CAB & 1) == 0 )
  {
    sub_1C713B0(&PartyListViewItem_TypeInfo);
    byte_4CC2CAB = 1;
  }
  v3 = (PartyListViewItem_o *)sub_1C715FC(PartyListViewItem_TypeInfo);
  PartyListViewItem___ctor(v3, v4);
  if ( !v3 )
    sub_1C71608(v5, v6);
  PartyListViewItem__Set(v3, this, v7);
  return v3;
}


bool PartyListViewItem__CompMember(PartyListViewItem_o *this, PartyListViewItem_o *item, const MethodInfo *method)
{
  PartyListViewItem_o *v4; // x20
  int v6; // w21
  int32_t v7; // w24
  int32_t v8; // w23
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v10; // x9

  v4 = this;
  if ( (byte_4CC2CBF & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC2CBF = 1;
  }
  if ( !item )
LABEL_17:
    sub_1C71608(this, item);
  if ( System_String__op_Inequality(v4->fields.deckName, item->fields.deckName, 0) )
    return 0;
  v6 = -1;
  do
  {
    this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    }
    v7 = v6 + 1;
    v8 = this->fields.waveBattleEnemyClassIds->m_Items[35];
    if ( v6 + 1 >= v8 )
      break;
    memberList = v4->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( (unsigned int)v7 >= LODWORD(memberList->max_length) )
      goto LABEL_18;
    v10 = item->fields.memberList;
    if ( !v10 )
      goto LABEL_17;
    if ( (unsigned int)++v6 >= LODWORD(v10->max_length) )
LABEL_18:
      sub_1C71610(this);
    this = (PartyListViewItem_o *)memberList->m_Items[v7];
    if ( !this )
      goto LABEL_17;
  }
  while ( PartyOrganizationListViewItem__CompMember((PartyOrganizationListViewItem_o *)this, v10->m_Items[v7], 0) );
  return v7 >= v8;
}


void PartyListViewItem__Finalize(PartyListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_array *PartyListViewItem__GetAssetNameList(PartyListViewItem_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  unsigned __int64 i; // x24
  Il2CppObject *AssetName; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppObject *v18; // x1
  Il2CppClass **v19; // x0

  if ( (byte_4CC2CCE & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C713B0(&System_Collections_Generic_List_string__TypeInfo);
    byte_4CC2CCE = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
  for ( i = 0; ; ++i )
  {
    AssetName = (Il2CppObject *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      AssetName = (Il2CppObject *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= *((int *)AssetName[11].monitor + 43) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_21;
    if ( i >= LODWORD(memberList->max_length) )
      sub_1C71610(AssetName);
    v8 = memberList->m_Items[i];
    if ( v8 )
    {
      AssetName = (Il2CppObject *)PartyOrganizationListViewItem__GetAssetName(v8, 0);
      if ( AssetName )
      {
        if ( !v3 )
          goto LABEL_21;
        items = v3->fields._items;
        v16 = Method_System_Collections_Generic_List_string__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v3->fields._size;
        v18 = AssetName;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            AssetName,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v18;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
        }
      }
    }
  }
  if ( !v3 )
LABEL_21:
    sub_1C71608(AssetName, v4);
  if ( v3->fields._size < 1 )
    return 0;
  else
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_Int32_array *PartyListViewItem__GetCommandCardList(
        PartyListViewItem_o *this,
        int32_t typeMax,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x21
  unsigned __int64 i; // x23
  _QWORD *p_image; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v10; // x0
  unsigned __int64 v11; // x9
  unsigned __int64 j; // x8

  if ( (byte_4CC2CCD & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&int___TypeInfo);
    byte_4CC2CCD = 1;
  }
  v6 = sub_1C71458(int___TypeInfo, (unsigned int)typeMax);
  for ( i = 0; ; ++i )
  {
    p_image = &BalanceConfig_TypeInfo->_1.image;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      p_image = &BalanceConfig_TypeInfo->_1.image;
    }
    if ( (__int64)i >= *(int *)(p_image[23] + 176LL) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
LABEL_22:
      sub_1C71608(p_image, v5);
    if ( i >= LODWORD(memberList->max_length) )
LABEL_21:
      sub_1C71610(p_image);
    v10 = memberList->m_Items[i];
    if ( v10 )
    {
      p_image = PartyOrganizationListViewItem__GetCommandCardList(v10, 0);
      if ( p_image )
      {
        if ( typeMax >= 1 )
        {
          v11 = *((unsigned int *)p_image + 6);
          for ( j = 0; typeMax != j; ++j )
          {
            if ( (__int64)j < (int)v11 )
            {
              if ( !v6 )
                goto LABEL_22;
              if ( j >= *(unsigned int *)(v6 + 24) || j >= v11 )
                goto LABEL_21;
              *(_DWORD *)(v6 + 32 + 4 * j) += *((_DWORD *)p_image + j + 8);
            }
          }
        }
      }
    }
  }
  return (System_Int32_array *)v6;
}


int32_t PartyListViewItem__GetDeckCondition(PartyListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  void *DeckConditionServantNumAndPosition; // x0
  int32_t v5; // w28
  int v6; // w25
  char v7; // w26
  int v8; // w29
  int32_t v9; // w21
  int32_t v10; // w20
  int32_t DeckMainMemberMax; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v13; // x8
  PartyOrganizationListViewItem_o *v14; // x22
  _BOOL4 isFollower; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v17; // w28
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct PartyOrganizationListViewItem_array *v19; // x8
  Il2CppClass **v20; // x8
  PartyOrganizationListViewItem_o *v21; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // kr20_16
  _DWORD *v23; // kr08_8
  int32_t v24; // w23
  struct PartyOrganizationListViewItem_array *v25; // x9
  PartyOrganizationListViewItem_o *v26; // x9
  const MethodInfo *v27; // x5
  const MethodInfo *v28; // x5
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  _BOOL4 isNotSingleSupportOnly; // w8
  struct PartyOrganizationListViewItem_array *v31; // x26
  int max_length; // w8
  const MethodInfo_3810448 **v33; // x25
  unsigned int v34; // w29
  Il2CppClass **v35; // x8
  PartyOrganizationListViewItem_o *v36; // x20
  PartyOrganizationListViewItem_o *v37; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // kr30_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // kr40_16
  System_Collections_Generic_List_object__o *v40; // x21
  int size; // w8
  int v42; // w9
  char v43; // w24
  int32_t v44; // w23
  struct PartyOrganizationListViewItem_array *v45; // x22
  const MethodInfo_3810448 **v46; // x28
  Il2CppObject *Item; // x0
  ServantEntity_o *servantEntity; // x25
  int32_t svtLimitCount; // w26
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x24
  System_Collections_Generic_IEnumerable_TSource__o *Individuality; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x24
  __int64 i; // x23
  struct PartyOrganizationListViewItem_array *v55; // x8
  PartyOrganizationListViewItem_o *v56; // x24
  struct ServantEntity_o *v57; // x8
  __int64 v58; // x20
  __int64 v59; // x21
  int32_t v60; // w20
  unsigned __int64 j; // x25
  struct PartyOrganizationListViewItem_array *v62; // x8
  PartyOrganizationListViewItem_o *v63; // x26
  struct ServantEntity_o *v64; // x8
  __int64 v65; // x21
  __int64 v66; // x22
  System_Collections_Generic_List_T__o *v68; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_4CC2CBD & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC2CBD = 1;
  }
  if ( this->fields.cost > this->fields.maxCost )
  {
    LODWORD(DeckConditionServantNumAndPosition) = 7;
    return (int)DeckConditionServantNumAndPosition;
  }
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    }
    DeckMainMemberMax = *(_DWORD *)(*((_QWORD *)DeckConditionServantNumAndPosition + 23) + 176LL);
    if ( v5 >= DeckMainMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_178;
    if ( (unsigned int)v5 >= LODWORD(memberList->max_length) )
      goto LABEL_179;
    v13 = &memberList->obj.klass + v5;
    v14 = (PartyOrganizationListViewItem_o *)v13[4];
    if ( !v14 )
      goto LABEL_178;
    if ( PartyOrganizationListViewItem__get_IsLeave((PartyOrganizationListViewItem_o *)v13[4], 0) )
    {
LABEL_54:
      LODWORD(DeckConditionServantNumAndPosition) = 5;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( (v14->fields.fatigureTime & 0x8000000000000000LL) == 0 )
    {
LABEL_55:
      LODWORD(DeckConditionServantNumAndPosition) = 6;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v14->fields._IsAllOutBattle_k__BackingField )
    {
LABEL_56:
      LODWORD(DeckConditionServantNumAndPosition) = 19;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v14->fields._IsDataLost_k__BackingField )
    {
LABEL_57:
      LODWORD(DeckConditionServantNumAndPosition) = 20;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v14->fields._TimesToRestart_k__BackingField > 0 )
    {
LABEL_58:
      LODWORD(DeckConditionServantNumAndPosition) = 21;
      return (int)DeckConditionServantNumAndPosition;
    }
    isFollower = v14->fields.isFollower;
    if ( v14->fields.isFollower && !v14->fields.isMyServantOrNpcRestriction )
    {
      ++v9;
      ++v8;
      v7 = 1;
    }
    else
    {
      if ( v14->fields.userServantEntity )
        goto LABEL_21;
      if ( v14->fields.isMyServantOrNpcRestriction )
      {
        SvtId = PartyOrganizationListViewItem__get_SvtId(v14, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(SvtId, 0) >= 1 )
        {
          isFollower = v14->fields.isFollower;
LABEL_21:
          ++v10;
          v6 |= isFollower;
        }
      }
    }
    ++v5;
  }
  if ( !*((_DWORD *)DeckConditionServantNumAndPosition + 56) )
  {
    j_il2cpp_runtime_class_init_0(DeckConditionServantNumAndPosition);
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    DeckMainMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
  }
  v17 = v10;
  while ( 1 )
  {
    if ( !*((_DWORD *)DeckConditionServantNumAndPosition + 56) )
    {
      j_il2cpp_runtime_class_init_0(DeckConditionServantNumAndPosition);
      DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    }
    static_fields = (struct BalanceConfig_StaticFields *)*((_QWORD *)DeckConditionServantNumAndPosition + 23);
    if ( DeckMainMemberMax >= static_fields->DeckMemberMax )
      break;
    v19 = this->fields.memberList;
    if ( !v19 )
      goto LABEL_178;
    if ( (unsigned int)DeckMainMemberMax >= LODWORD(v19->max_length) )
      goto LABEL_179;
    v20 = &v19->obj.klass + DeckMainMemberMax;
    v21 = (PartyOrganizationListViewItem_o *)v20[4];
    if ( !v21 )
      goto LABEL_178;
    if ( PartyOrganizationListViewItem__get_IsLeave((PartyOrganizationListViewItem_o *)v20[4], 0) )
      goto LABEL_54;
    if ( (v21->fields.fatigureTime & 0x8000000000000000LL) == 0 )
      goto LABEL_55;
    if ( v21->fields._IsAllOutBattle_k__BackingField )
      goto LABEL_56;
    if ( v21->fields._IsDataLost_k__BackingField )
      goto LABEL_57;
    if ( v21->fields._TimesToRestart_k__BackingField > 0 )
      goto LABEL_58;
    if ( v21->fields.isFollower && !v21->fields.isMyServantOrNpcRestriction )
    {
      ++v8;
    }
    else
    {
      if ( v21->fields.userServantEntity )
        goto LABEL_46;
      if ( v21->fields.isMyServantOrNpcRestriction )
      {
        v22 = PartyOrganizationListViewItem__get_SvtId(v21, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v22, 0) >= 1 )
LABEL_46:
          ++v17;
      }
    }
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    ++DeckMainMemberMax;
  }
  v23 = DeckConditionServantNumAndPosition;
  LODWORD(DeckConditionServantNumAndPosition) = 0;
  v24 = v8 + v17;
  switch ( this->fields.menuKind )
  {
    case 4:
      DeckConditionServantNumAndPosition = (void *)PartyListViewItem__CheckDeckConditionServantNum(
                                                     this,
                                                     v24,
                                                     v10,
                                                     v7 & 1,
                                                     1,
                                                     v2);
      if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
        goto LABEL_100;
      goto LABEL_96;
    case 5:
      DeckConditionServantNumAndPosition = (void *)PartyListViewItem__GetDeckConditionServantNumAndPosition(
                                                     this,
                                                     v24,
                                                     v10,
                                                     v7 & 1,
                                                     1,
                                                     v2);
      if ( !(_DWORD)DeckConditionServantNumAndPosition )
        goto LABEL_96;
      return (int)DeckConditionServantNumAndPosition;
    case 6:
      return (int)DeckConditionServantNumAndPosition;
    case 7:
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
        goto LABEL_178;
      if ( !QuestRestrictionInfo__IsServantNum((QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition, 0) )
        goto LABEL_75;
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
        goto LABEL_178;
      if ( QuestRestrictionInfo__IsFixedServantPosition((QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition, 0) )
      {
LABEL_75:
        DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
        if ( !DeckConditionServantNumAndPosition )
          goto LABEL_178;
        if ( QuestRestrictionInfo__IsServantNum((QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition, 0) )
        {
          DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
          if ( !DeckConditionServantNumAndPosition )
            goto LABEL_178;
          if ( QuestRestrictionInfo__IsFixedServantPosition(
                 (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                 0) )
          {
            LODWORD(DeckConditionServantNumAndPosition) = PartyListViewItem__GetDeckConditionServantNumAndPosition(
                                                            this,
                                                            v24,
                                                            v10,
                                                            v7 & 1,
                                                            v9,
                                                            v28);
            if ( (_DWORD)DeckConditionServantNumAndPosition )
              return (int)DeckConditionServantNumAndPosition;
          }
        }
      }
      else if ( !PartyListViewItem__CheckDeckConditionServantNum(this, v24, v10, v7 & 1, v9, v27) )
      {
LABEL_100:
        LODWORD(DeckConditionServantNumAndPosition) = 14;
        return (int)DeckConditionServantNumAndPosition;
      }
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
        goto LABEL_178;
      if ( QuestRestrictionInfo__IsMyServantNum((QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition, 0) )
      {
        DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
        if ( !DeckConditionServantNumAndPosition )
          goto LABEL_178;
        if ( !QuestRestrictionInfo__CheckMyServantNumRestriction(
                (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                v17,
                0) )
        {
          LODWORD(DeckConditionServantNumAndPosition) = 16;
          return (int)DeckConditionServantNumAndPosition;
        }
      }
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
LABEL_178:
        sub_1C71608(DeckConditionServantNumAndPosition, method);
      DeckConditionServantNumAndPosition = (void *)QuestRestrictionInfo__IsServantNum(
                                                     (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                                                     0);
      if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
      {
        DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
        }
        static_fields = (struct BalanceConfig_StaticFields *)*((_QWORD *)DeckConditionServantNumAndPosition + 23);
LABEL_94:
        if ( v10 + v9 < static_fields->DeckMainMemberMax )
        {
          LODWORD(DeckConditionServantNumAndPosition) = 3;
          return (int)DeckConditionServantNumAndPosition;
        }
      }
LABEL_96:
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( questRestrictionInfo )
      {
        isNotSingleSupportOnly = questRestrictionInfo->fields.isNotSingleSupportOnly;
        if ( v10 == 1 && (v6 & isNotSingleSupportOnly & 1) != 0 )
        {
          LODWORD(DeckConditionServantNumAndPosition) = 22;
          return (int)DeckConditionServantNumAndPosition;
        }
        v31 = this->fields.memberList;
        if ( !v31 )
          goto LABEL_178;
        max_length = v31->max_length;
        if ( max_length >= 1 )
        {
          v33 = (const MethodInfo_3810448 **)&Method_System_Collections_Generic_List_int____get_Item__;
          v34 = 0;
          while ( 1 )
          {
            if ( v34 >= max_length )
              goto LABEL_179;
            v35 = &v31->obj.klass + (int)v34;
            v36 = (PartyOrganizationListViewItem_o *)v35[4];
            if ( !v36 )
              goto LABEL_178;
            v37 = (PartyOrganizationListViewItem_o *)v35[4];
            v36->fields._IsErrorNeedIndividuality_k__BackingField = 0;
            v38 = PartyOrganizationListViewItem__get_SvtId(v37, 0);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v38, 0) )
            {
              DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
              if ( !DeckConditionServantNumAndPosition )
                goto LABEL_178;
              if ( QuestRestrictionInfo__IsSetRequired(
                     (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                     v36->fields.index + 1,
                     v36->fields._InitPos_k__BackingField,
                     0) )
              {
                LODWORD(DeckConditionServantNumAndPosition) = 18;
                return (int)DeckConditionServantNumAndPosition;
              }
            }
            v39 = PartyOrganizationListViewItem__get_SvtId(v36, 0);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            DeckConditionServantNumAndPosition = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                           v39,
                                                           0);
            if ( !(_DWORD)DeckConditionServantNumAndPosition )
            {
              DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
              if ( !DeckConditionServantNumAndPosition )
                goto LABEL_178;
              DeckConditionServantNumAndPosition = (void *)QuestRestrictionInfo__IsGrandServantRestriction(
                                                             (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                                                             v36->fields._InitPos_k__BackingField,
                                                             0);
              if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) != 0 )
              {
                LODWORD(DeckConditionServantNumAndPosition) = 25;
                return (int)DeckConditionServantNumAndPosition;
              }
            }
            if ( v36->fields.userServantEntity )
            {
              DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
              if ( !DeckConditionServantNumAndPosition )
                goto LABEL_178;
              DeckConditionServantNumAndPosition = QuestRestrictionInfo__GetNeedIndividualityList(
                                                     (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                                                     v36->fields._InitPos_k__BackingField,
                                                     0);
              if ( !this->fields.questRestrictionInfo )
                goto LABEL_178;
              v40 = (System_Collections_Generic_List_object__o *)DeckConditionServantNumAndPosition;
              DeckConditionServantNumAndPosition = QuestRestrictionInfo__GetRangeTypeList(
                                                     this->fields.questRestrictionInfo,
                                                     v36->fields._InitPos_k__BackingField,
                                                     0);
              v68 = (System_Collections_Generic_List_T__o *)DeckConditionServantNumAndPosition;
              if ( v40 )
              {
                if ( DeckConditionServantNumAndPosition )
                {
                  size = v40->fields._size;
                  if ( size >= 1 )
                  {
                    v42 = *((_DWORD *)DeckConditionServantNumAndPosition + 6);
                    if ( v42 >= 1 && size == v42 )
                      break;
                  }
                }
              }
            }
LABEL_138:
            max_length = v31->max_length;
            if ( (int)++v34 >= max_length )
              goto LABEL_139;
          }
          v43 = 0;
          v44 = 0;
          while ( 1 )
          {
            DeckConditionServantNumAndPosition = System_Collections_Generic_List_object___get_Item(v40, v44, *v33);
            if ( !DeckConditionServantNumAndPosition )
              goto LABEL_136;
            DeckConditionServantNumAndPosition = System_Collections_Generic_List_object___get_Item(v40, v44, *v33);
            if ( !DeckConditionServantNumAndPosition )
              goto LABEL_178;
            if ( !*((_QWORD *)DeckConditionServantNumAndPosition + 3) )
              goto LABEL_136;
            v45 = v31;
            v46 = v33;
            Item = System_Collections_Generic_List_object___get_Item(v40, v44, *v33);
            servantEntity = v36->fields.servantEntity;
            svtLimitCount = v36->fields.svtLimitCount;
            v50 = (System_Collections_Generic_IEnumerable_TSource__o *)Item;
            DeckConditionServantNumAndPosition = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(v36, 0);
            if ( !servantEntity )
              goto LABEL_178;
            Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                   servantEntity,
                                                                                   svtLimitCount,
                                                                                   (int32_t)DeckConditionServantNumAndPosition,
                                                                                   0);
            v52 = System_Linq_Enumerable__Intersect_int_(
                    v50,
                    Individuality,
                    (const MethodInfo_3175898 *)Method_System_Linq_Enumerable_Intersect_int___);
            v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                         v52,
                                                                         (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
            if ( System_Collections_Generic_List_Int32Enum___get_Item(
                   v68,
                   v44,
                   (const MethodInfo_37F5C30 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
            {
              DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                             v53,
                                                             (const MethodInfo_3156754 *)Method_System_Linq_Enumerable_Any_int___);
              v33 = v46;
              v31 = v45;
              if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) != 0 )
                goto LABEL_138;
            }
            else
            {
              DeckConditionServantNumAndPosition = (void *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                             v68,
                                                             v44,
                                                             (const MethodInfo_37F5C30 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
              v33 = v46;
              if ( (_DWORD)DeckConditionServantNumAndPosition != 2 )
              {
                v43 = 1;
                v31 = v45;
                goto LABEL_136;
              }
              DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                             v53,
                                                             (const MethodInfo_3156754 *)Method_System_Linq_Enumerable_Any_int___);
              v31 = v45;
              if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
                goto LABEL_138;
            }
            v43 = 1;
LABEL_136:
            if ( ++v44 >= v40->fields._size )
            {
              if ( (v43 & 1) != 0 )
              {
                v36->fields._IsErrorNeedIndividuality_k__BackingField = 1;
                LODWORD(DeckConditionServantNumAndPosition) = 23;
                return (int)DeckConditionServantNumAndPosition;
              }
              goto LABEL_138;
            }
          }
        }
      }
LABEL_139:
      DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
      for ( i = 0; ; ++i )
      {
        if ( !*((_DWORD *)DeckConditionServantNumAndPosition + 56) )
        {
          j_il2cpp_runtime_class_init_0(DeckConditionServantNumAndPosition);
          DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
        }
        if ( (int)i >= *(_DWORD *)(*((_QWORD *)DeckConditionServantNumAndPosition + 23) + 172LL) )
          break;
        v55 = this->fields.memberList;
        if ( !v55 )
          goto LABEL_178;
        if ( (unsigned int)i >= LODWORD(v55->max_length) )
          goto LABEL_179;
        v56 = v55->m_Items[(int)i];
        if ( !v56 )
          goto LABEL_178;
        if ( v56->fields.userServantEntity )
        {
          v57 = v56->fields.servantEntity;
          if ( v57 )
          {
            v59 = *(_QWORD *)&v57->fields.baseSvtId.fields.currentCryptoKey;
            v58 = *(_QWORD *)&v57->fields.baseSvtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v69.fields.currentCryptoKey = v59;
            *(_QWORD *)&v69.fields.fakeValue = v58;
            v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v69, 0);
            for ( j = 0; ; ++j )
            {
              DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
              }
              if ( (__int64)j >= *(int *)(*((_QWORD *)DeckConditionServantNumAndPosition + 23) + 172LL) )
                goto LABEL_169;
              if ( i != j )
              {
                v62 = this->fields.memberList;
                if ( !v62 )
                  goto LABEL_178;
                if ( j >= LODWORD(v62->max_length) )
                  goto LABEL_179;
                v63 = v62->m_Items[j];
                if ( !v63 )
                  goto LABEL_178;
                if ( v63->fields.userServantEntity )
                {
                  v64 = v63->fields.servantEntity;
                  if ( !v64 )
                    goto LABEL_178;
                  v66 = *(_QWORD *)&v64->fields.baseSvtId.fields.currentCryptoKey;
                  v65 = *(_QWORD *)&v64->fields.baseSvtId.fields.fakeValue;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v70.fields.currentCryptoKey = v66;
                  *(_QWORD *)&v70.fields.fakeValue = v65;
                  if ( v60 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v70, 0) )
                  {
LABEL_170:
                    LODWORD(DeckConditionServantNumAndPosition) = 4;
                    return (int)DeckConditionServantNumAndPosition;
                  }
                  DeckConditionServantNumAndPosition = v56->fields.servantEntity;
                  if ( !DeckConditionServantNumAndPosition )
                    goto LABEL_178;
                  if ( ServantEntity__IsNotSameParty((ServantEntity_o *)DeckConditionServantNumAndPosition, 0) )
                  {
                    DeckConditionServantNumAndPosition = v56->fields.servantEntity;
                    if ( !DeckConditionServantNumAndPosition )
                      goto LABEL_178;
                    DeckConditionServantNumAndPosition = (void *)ServantEntity__GetNotSamePartyKey(
                                                                   (ServantEntity_o *)DeckConditionServantNumAndPosition,
                                                                   0);
                    if ( !v63->fields.servantEntity )
                      goto LABEL_178;
                    if ( (_DWORD)DeckConditionServantNumAndPosition == ServantEntity__GetNotSamePartyKey(
                                                                         v63->fields.servantEntity,
                                                                         0) )
                      goto LABEL_170;
                  }
                }
              }
            }
          }
          goto LABEL_178;
        }
LABEL_169:
        ;
      }
      if ( PartyListViewItem__CheckDuplicationGrandQuestEquipment(this, method) )
        LODWORD(DeckConditionServantNumAndPosition) = 24;
      else
        LODWORD(DeckConditionServantNumAndPosition) = 0;
      return (int)DeckConditionServantNumAndPosition;
    default:
      DeckConditionServantNumAndPosition = v23;
      if ( !v17 )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 1;
        return (int)DeckConditionServantNumAndPosition;
      }
      if ( v10 == 1 )
      {
        v25 = this->fields.memberList;
        if ( !v25 )
          goto LABEL_178;
        if ( !LODWORD(v25->max_length) )
LABEL_179:
          sub_1C71610(DeckConditionServantNumAndPosition);
        v26 = v25->m_Items[0];
        if ( !v26 )
          goto LABEL_178;
        if ( v26->fields.userServantEntity )
        {
          LODWORD(DeckConditionServantNumAndPosition) = 2;
          return (int)DeckConditionServantNumAndPosition;
        }
      }
      v9 = v7 & 1;
      if ( !v23[56] )
      {
        j_il2cpp_runtime_class_init_0(v23);
        static_fields = BalanceConfig_TypeInfo->static_fields;
      }
      goto LABEL_94;
  }
}


int32_t PartyListViewItem__GetDeckConditionServantNum(
        PartyListViewItem_o *this,
        int32_t deckMemberCount,
        int32_t mainMemberCount,
        bool isFollowerMainMember,
        int32_t mainFollowerNum,
        const MethodInfo *method)
{
  if ( PartyListViewItem__CheckDeckConditionServantNum(
         this,
         deckMemberCount,
         mainMemberCount,
         isFollowerMainMember,
         mainFollowerNum,
         method) )
  {
    return 0;
  }
  else
  {
    return 14;
  }
}


int32_t PartyListViewItem__GetDeckConditionServantNumAndPosition(
        PartyListViewItem_o *this,
        int32_t deckMemberCount,
        int32_t mainMemberCount,
        bool isFollowerMainMember,
        int32_t mainFollowerNum,
        const MethodInfo *method)
{
  __int64 v11; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t FixedServantPositionCount; // w20
  unsigned int v15; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v17; // x8

  if ( (byte_4CC2CBA & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC2CBA = 1;
  }
  if ( PartyListViewItem__CheckDeckConditionServantNum(
         this,
         deckMemberCount,
         mainMemberCount,
         isFollowerMainMember,
         mainFollowerNum,
         method) )
  {
    return 0;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_17:
    sub_1C71608(questRestrictionInfo, v11);
  FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(questRestrictionInfo, 0);
  v15 = 0;
  questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( !LODWORD(questRestrictionInfo->fields.myServantNumRestrictionEntity) )
    {
      j_il2cpp_runtime_class_init_0(questRestrictionInfo);
      questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v15 >= SHIDWORD(questRestrictionInfo->fields.uniqueSvtRestrictionEntity[2].fields.targetVals) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( v15 >= LODWORD(memberList->max_length) )
      sub_1C71610(questRestrictionInfo);
    v17 = memberList->m_Items[v15];
    if ( !v17 )
      goto LABEL_17;
    ++v15;
    FixedServantPositionCount -= v17->fields.isFixedServantPositionAgreement;
  }
  if ( FixedServantPositionCount < 1 )
    return 14;
  else
    return 15;
}


System_Int64_array *PartyListViewItem__GetEquipList(PartyListViewItem_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  __int64 EquipUserSvtId; // x0
  __int64 v5; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x8
  __int64 v7; // x23
  int max_length; // w9
  Il2CppClass **v9; // x8
  PartyOrganizationListViewItem_o *v10; // x21
  struct System_Int64_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4CC2CC2 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_long__TypeInfo);
    byte_4CC2CC2 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_15;
  v7 = 0;
  while ( 1 )
  {
    max_length = memberList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1C71610(EquipUserSvtId);
    v9 = &memberList->obj.klass + v7;
    v10 = (PartyOrganizationListViewItem_o *)v9[4];
    if ( !v10 )
      goto LABEL_15;
    EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)v9[4], 0);
    if ( EquipUserSvtId >= 1 )
    {
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v10, 0);
      if ( !v3 )
        goto LABEL_15;
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_long__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_15;
      size = v3->fields._size;
      v5 = EquipUserSvtId;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v3,
          EquipUserSvtId,
          *(const MethodInfo_37F874C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = EquipUserSvtId;
      }
    }
    memberList = this->fields.memberList;
    ++v7;
    if ( !memberList )
      goto LABEL_15;
  }
  if ( !v3 )
LABEL_15:
    sub_1C71608(EquipUserSvtId, v5);
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_37FA204 *)Method_System_Collections_Generic_List_long__ToArray__);
}


bool PartyListViewItem__GetEventUpVal(
        PartyListViewItem_o *this,
        int32_t *eventId,
        EventUpValInfo_array **eventUpValList,
        const MethodInfo *method)
{
  PartyListViewItem_o *v6; // x20
  struct EventUpValSetupInfo_o *setupInfo; // x8
  __int64 v8; // x9
  BalanceConfig_c *v9; // x0
  EventUpValInfo_array *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  unsigned __int64 i; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  EventUpValInfo_array *v19; // x8

  v6 = this;
  if ( (byte_4CC2CCC & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    this = (PartyListViewItem_o *)sub_1C713B0(&EventUpValInfo___TypeInfo);
    byte_4CC2CCC = 1;
  }
  setupInfo = v6->fields.setupInfo;
  if ( setupInfo )
  {
    setupInfo = (struct EventUpValSetupInfo_o *)setupInfo->fields.eventIdList;
    if ( !setupInfo )
LABEL_23:
      sub_1C71608(this, eventId);
    v8 = *(_QWORD *)&setupInfo->fields.questPhase;
    if ( v8 )
    {
      if ( !(_DWORD)v8 )
LABEL_24:
        sub_1C71610(this);
      LODWORD(setupInfo) = setupInfo->fields.eventIdList;
    }
    else
    {
      LODWORD(setupInfo) = 0;
    }
  }
  *eventId = (int)setupInfo;
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  v10 = (EventUpValInfo_array *)sub_1C71458(EventUpValInfo___TypeInfo, (unsigned int)v9->static_fields->DeckMemberMax);
  *eventUpValList = v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)eventUpValList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  for ( i = 0; ; ++i )
  {
    this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= this->fields.waveBattleEnemyClassIds->m_Items[35] )
      break;
    memberList = v6->fields.memberList;
    if ( !memberList )
      goto LABEL_23;
    if ( i >= LODWORD(memberList->max_length) )
      goto LABEL_24;
    this = (PartyListViewItem_o *)memberList->m_Items[i];
    if ( this )
    {
      v19 = *eventUpValList;
      if ( !*eventUpValList )
        goto LABEL_23;
      if ( i >= LODWORD(v19->max_length) )
        goto LABEL_24;
      PartyOrganizationListViewItem__GetEventUpVal((PartyOrganizationListViewItem_o *)this, &v19->m_Items[i], 0);
    }
  }
  return 1;
}


int32_t PartyListViewItem__GetFollowerIndex(
        PartyListViewItem_o *this,
        UserEventDeckEntity_o *deck,
        System_Collections_Generic_List_FollowerInfo__o *fixNpcFollowerInfoList,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  int current; // w22
  DeckServantData_o *v13; // x8
  QuestRestrictionInfo_o *v14; // x0
  const MethodInfo *v15; // x2
  struct QuestRestrictionInfo_o *v16; // x8
  int servantNumMax; // w9
  PartyListViewItem___c__DisplayClass36_0_o *v18; // x21
  System_Func_object__bool__o *v19; // x23
  struct QuestRestrictionInfo_o *v20; // x8
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CC2CA9 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_FollowerInfo___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C713B0(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C713B0(&Method_PartyListViewItem___c__DisplayClass36_0__GetFollowerIndex_b__0__);
    sub_1C713B0(&PartyListViewItem___c__DisplayClass36_0_TypeInfo);
    byte_4CC2CA9 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_19;
  if ( questRestrictionInfo->fields.isNotTransitionSupportList
    || questRestrictionInfo->fields.isNpcOnlyBattle
    || questRestrictionInfo->fields.isNoSupportBattle )
  {
    return 0;
  }
  questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction(
                                                     questRestrictionInfo,
                                                     0);
  if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
  {
    if ( !deck )
      goto LABEL_39;
    questRestrictionInfo = (QuestRestrictionInfo_o *)UserEventDeckEntity__GetFollowerIndexList(deck, 0);
    if ( !questRestrictionInfo )
      goto LABEL_39;
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_int__o *)questRestrictionInfo,
      (const MethodInfo_37F41C8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v23 = v22;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
             &v23,
             (const MethodInfo_35924B0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
      if ( !v8 )
        break;
      deckInfo = deck->fields.deckInfo;
      if ( !deckInfo )
        sub_1C71608(v8, v9);
      svts = deckInfo->fields.svts;
      if ( !svts )
        sub_1C71608(v8, v9);
      current = v23.fields._current;
      if ( (unsigned int)(v23.fields._current - 1) >= LODWORD(svts->max_length) )
        sub_1C71610(v8);
      v13 = svts->m_Items[v23.fields._current - 1];
      if ( !v13 )
        sub_1C71608(v8, v9);
      v14 = this->fields.questRestrictionInfo;
      if ( !v14 )
        sub_1C71608(0, v9);
      if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_43733304(v14, v13->fields.initPos, 0) )
        goto LABEL_38;
    }
    current = 0;
LABEL_38:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v23,
      (const MethodInfo_35924AC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  }
  else
  {
LABEL_19:
    if ( !deck )
      goto LABEL_39;
    current = UserEventDeckEntity__GetFollowerIndex(deck, 0);
  }
  if ( current < 1 )
  {
    if ( current )
      return current;
    goto LABEL_31;
  }
  v16 = this->fields.questRestrictionInfo;
  if ( !v16 )
    return current;
  servantNumMax = v16->fields.servantNumMax;
  if ( servantNumMax >= 1 && servantNumMax < current )
  {
LABEL_31:
    v20 = this->fields.questRestrictionInfo;
    if ( v20 )
    {
      if ( fixNpcFollowerInfoList )
        return PartyListViewItem__GetSupportInitIndex(this, fixNpcFollowerInfoList, v15);
      else
        return v20->fields.supportInitIndex;
    }
    return 0;
  }
  if ( fixNpcFollowerInfoList && !v16->fields.isNpcEditablePos )
  {
    v18 = (PartyListViewItem___c__DisplayClass36_0_o *)sub_1C715FC(PartyListViewItem___c__DisplayClass36_0_TypeInfo);
    PartyListViewItem___c__DisplayClass36_0___ctor(v18, 0);
    if ( v18 )
    {
      v18->fields.chkIndex = current;
      v19 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v19,
        (Il2CppObject *)v18,
        Method_PartyListViewItem___c__DisplayClass36_0__GetFollowerIndex_b__0__,
        0);
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)fixNpcFollowerInfoList,
              (System_Func_T__bool__o *)v19,
              (const MethodInfo_31341D4 *)Method_BasicHelper_Any_FollowerInfo___) )
        return current;
      goto LABEL_31;
    }
LABEL_39:
    sub_1C71608(questRestrictionInfo, deck);
  }
  return current;
}


System_String_o *PartyListViewItem__GetGrandQuestDuplicationEquipmentNameList(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Collections_Generic_IEnumerable_TSource__o *duplicatedEquipmentUserSvtIdList; // x19
  System_Func_T__TResult__o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_String_array *v16; // x0

  if ( (byte_4CC2CD3 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_long__string___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C713B0(&System_Func_long__string__TypeInfo);
    sub_1C713B0(&Method_PartyListViewItem___c__DisplayClass111_0__GetGrandQuestDuplicationEquipmentNameList_b__0__);
    sub_1C713B0(&PartyListViewItem___c__DisplayClass111_0_TypeInfo);
    sub_1C713B0(&StringLiteral_43/*"\n"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC2CD3 = 1;
  }
  v3 = sub_1C715FC(PartyListViewItem___c__DisplayClass111_0_TypeInfo);
  PartyListViewItem___c__DisplayClass111_0___ctor((PartyListViewItem___c__DisplayClass111_0_o *)v3, 0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.duplicatedEquipmentUserSvtIdList, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !v3 )
    sub_1C71608(Master_object, v6);
  *(_QWORD *)(v3 + 16) = Master_object;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)Master_object, v7, v8, v9, v10, v11, v12);
  duplicatedEquipmentUserSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.duplicatedEquipmentUserSvtIdList;
  v14 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_long__string__TypeInfo);
  System_Func_long__object____ctor(
    v14,
    (Il2CppObject *)v3,
    Method_PartyListViewItem___c__DisplayClass111_0__GetGrandQuestDuplicationEquipmentNameList_b__0__,
    0);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               duplicatedEquipmentUserSvtIdList,
                                                               (System_Func_TSource__TResult__o *)v14,
                                                               (const MethodInfo_3180398 *)Method_System_Linq_Enumerable_Select_long__string___);
  v16 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v15,
                                 (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_string___);
  return System_String__Join((System_String_o *)StringLiteral_43/*"\n"*/, v16, 0);
}


void PartyListViewItem__GetGrandServantInfo(
        PartyListViewItem_o *this,
        RestrictionEntity_o *restrictionEntity,
        UserServantEntity_o **userServantEntity,
        System_Int64_array **equipIdList,
        int32_t *isChangeFriendShipSvtEquipSkill,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v9; // x1
  System_Collections_ICollection_o *list; // x23
  BalanceConfig_c *v11; // x0
  System_Int64_array *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  bool IsNullOrEmpty; // w0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x27
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v28; // x1
  System_Collections_IEnumerator_c **v29; // x25
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **v30; // x26
  PartyListViewItem___c__DisplayClass62_0_c **v31; // x22
  const MethodInfo_340B428 **v32; // x24
  System_Collections_Generic_IEnumerator_T__o *v33; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  System_Collections_IEnumerator_c *v35; // x1
  __int64 v36; // x9
  int *p_offset; // x10
  __int64 v38; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c *v40; // x1
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x28
  __int64 v45; // x29
  __int64 v46; // x0
  __int64 v47; // x1
  __int64 v48; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v49; // x23
  const MethodInfo_340B428 **v50; // x27
  PartyListViewItem___c__DisplayClass62_0_c **v51; // x24
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **v52; // x22
  System_Collections_IEnumerator_c **v53; // x26
  QuestRestrictionInfo_o *questRestrictionInfo; // x19
  int32_t v55; // w20
  int32_t v56; // w21
  int32_t v57; // w25
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  __int64 v59; // x1
  _BOOL8 IsRestriction_43712820; // x0
  __int64 v61; // x1
  void *monitor; // x20
  Il2CppClass *v63; // x21
  QuestRestrictionInfo_o *v64; // x19
  __int64 v65; // x0
  __int64 v66; // x1
  int32_t v67; // w20
  __int64 v68; // x1
  int32_t v69; // w21
  __int64 DispLimitCount; // x0
  __int64 v71; // x1
  System_Int32_array *ServantIndividuality; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  int64_t v79; // x0
  __int64 v80; // x1
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  struct System_Int32_array *targetVals; // x19
  System_Func_int__bool__o *v88; // x20
  UserServantEntity_o *v89; // x8
  __int128 v90; // q0
  int64_t v91; // x0
  __int64 v92; // x1
  Il2CppObject v93; // q0
  int64_t v94; // x19
  struct System_Object_array *items; // x8
  _QWORD *v96; // x9
  __int64 size; // x10
  Il2CppClass **v98; // x0
  __int64 v99; // x0
  __int64 v100; // x1
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  Il2CppObject *v107; // x1
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  Il2CppClass **v111; // x0
  int v112; // w19
  System_Collections_Generic_IEnumerator_T__c *v113; // x8
  __int64 v114; // x9
  int *v115; // x10
  __int64 v116; // x0
  Il2CppObject *Item; // x0
  int32_t v118; // w2
  int32_t v119; // w3
  System_String_o *v120; // x4
  int32_t v121; // w5
  int64_t v122; // x6
  System_String_o *v123; // x7
  System_Int64_array *v124; // x0
  int32_t v125; // w2
  int32_t v126; // w3
  System_String_o *v127; // x4
  int32_t v128; // w5
  int64_t v129; // x6
  System_String_o *v130; // x7
  System_Int64_array *EquipUserServantIdList; // x0
  int32_t v132; // w2
  int32_t v133; // w3
  System_String_o *v134; // x4
  int32_t v135; // w5
  int64_t v136; // x6
  System_String_o *v137; // x7
  int32_t *v138; // [xsp+10h] [xbp-110h]
  GrandQuestFolderBoardItem_o *v139; // [xsp+18h] [xbp-108h]
  System_Collections_Generic_List_object__o *v140; // [xsp+20h] [xbp-100h]
  System_Collections_Generic_List_object__o *v141; // [xsp+28h] [xbp-F8h]
  System_Collections_Generic_IEnumerator_T__o *v144; // [xsp+40h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v146; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v147; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v148; // [xsp+90h] [xbp-90h]
  Il2CppObject *entity; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16

  if ( (byte_4CC2CBC & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_BasicHelper_Any_int____78639760);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntityList__);
    sub_1C713B0(&System_Func_int__bool__TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&long___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantGrandEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantGrandEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantGrandEntity__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&Method_PartyListViewItem___c__DisplayClass62_0__GetGrandServantInfo_b__0__);
    sub_1C713B0(&PartyListViewItem___c__DisplayClass62_0_TypeInfo);
    byte_4CC2CBC = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    goto LABEL_96;
  list = (System_Collections_ICollection_o *)Master_object->fields.list;
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  v12 = (System_Int64_array *)sub_1C71458(long___TypeInfo, (unsigned int)v11->static_fields->GrandSvtEquipMax);
  *equipIdList = v12;
  sub_1C71354((GrandQuestFolderBoardItem_o *)equipIdList, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  *isChangeFriendShipSvtEquipSkill = 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(list, 0);
  if ( !restrictionEntity || IsNullOrEmpty )
    goto LABEL_79;
  v138 = isChangeFriendShipSvtEquipSkill;
  v139 = (GrandQuestFolderBoardItem_o *)equipIdList;
  v141 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v141,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
  v140 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v140,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !list )
    goto LABEL_96;
  v26 = Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
  v144 = Enumerator;
  if ( !Enumerator )
    sub_1C71608(0, v28);
  v29 = &System_Collections_IEnumerator_TypeInfo;
  v30 = &System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo;
  v31 = &PartyListViewItem___c__DisplayClass62_0_TypeInfo;
  v32 = (const MethodInfo_340B428 **)&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__;
  v33 = Enumerator;
  while ( 1 )
  {
    while ( 1 )
    {
      klass = v33->klass;
      v35 = *v29;
      v36 = *(unsigned __int16 *)&v33->klass->_2.rank;
      if ( *(_WORD *)&v33->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != v35 )
        {
          --v36;
          p_offset += 4;
          if ( !v36 )
            goto LABEL_19;
        }
        v38 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_19:
        v38 = sub_1C47738(v33, v35, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
              v33,
              *(_QWORD *)(v38 + 8))
          & 1) == 0 )
      {
        v112 = 9;
        goto LABEL_63;
      }
      v39 = v33->klass;
      v40 = *v30;
      v41 = *(unsigned __int16 *)&v33->klass->_2.rank;
      if ( *(_WORD *)&v33->klass->_2.rank )
      {
        v42 = &v39->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **)v42 - 1) != v40 )
        {
          --v41;
          v42 += 4;
          if ( !v41 )
            goto LABEL_26;
        }
        v43 = (__int64)&v39->vtable[*v42];
      }
      else
      {
LABEL_26:
        v43 = sub_1C47738(v33, v40, 0);
      }
      v44 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
              v33,
              *(_QWORD *)(v43 + 8));
      v45 = sub_1C715FC(*v31);
      PartyListViewItem___c__DisplayClass62_0___ctor((PartyListViewItem___c__DisplayClass62_0_o *)v45, 0);
      if ( !v44 )
        sub_1C71608(v46, v47);
      if ( !v26 )
        sub_1C71608(v46, v47);
      if ( DataMasterBase_object__object__long___TryGetEntity(v26, &entity, *(_QWORD *)(v44 + 32), *v32) )
      {
        if ( !entity )
          sub_1C71608(0, v48);
        v49 = v26;
        v50 = v32;
        v51 = v31;
        v52 = v30;
        v53 = v29;
        questRestrictionInfo = this->fields.questRestrictionInfo;
        v55 = *(_DWORD *)(v44 + 40);
        v56 = *(_DWORD *)(v44 + 44);
        v57 = *(_DWORD *)(v44 + 48);
        OverwriteStatus = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)entity, 0, 0);
        if ( !OverwriteStatus )
          sub_1C71608(0, v59);
        if ( !questRestrictionInfo )
          sub_1C71608(OverwriteStatus, v59);
        IsRestriction_43712820 = QuestRestrictionInfo__IsRestriction_43712820(
                                   questRestrictionInfo,
                                   v55,
                                   v56,
                                   v57,
                                   OverwriteStatus->fields._Rarity_k__BackingField,
                                   *(_DWORD *)(v44 + 52),
                                   1,
                                   0);
        v29 = v53;
        v30 = v52;
        v31 = v51;
        v32 = v50;
        v26 = v49;
        v33 = v144;
        if ( !IsRestriction_43712820 )
        {
          if ( !entity )
            sub_1C71608(IsRestriction_43712820, v61);
          v63 = entity[5].klass;
          monitor = entity[5].monitor;
          v64 = this->fields.questRestrictionInfo;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v150.fields.currentCryptoKey = v63;
          *(_QWORD *)&v150.fields.fakeValue = monitor;
          v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v150, 0);
          if ( !entity )
            sub_1C71608(v65, v66);
          v67 = v65;
          v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
                  0);
          if ( !entity )
            sub_1C71608(0, v68);
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0);
          if ( !v64 )
            sub_1C71608(DispLimitCount, v71);
          ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(v64, v67, v69, DispLimitCount, 0);
          if ( !v45 )
            sub_1C71608(ServantIndividuality, ServantIndividuality);
          *(_QWORD *)(v45 + 16) = ServantIndividuality;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)(v45 + 16),
            (int32_t)ServantIndividuality,
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
          v79 = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)restrictionEntity->fields.targetVals, 0);
          if ( (v79 & 1) != 0 )
            break;
          targetVals = restrictionEntity->fields.targetVals;
          if ( !targetVals )
            sub_1C71608(v79, v80);
          if ( !LODWORD(targetVals->max_length) )
            sub_1C71610(v79);
          if ( !targetVals->m_Items[0] )
            break;
          v88 = (System_Func_int__bool__o *)sub_1C715FC(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v88,
            (Il2CppObject *)v45,
            Method_PartyListViewItem___c__DisplayClass62_0__GetGrandServantInfo_b__0__,
            0);
          v79 = BasicHelper__Any_int__51593044(
                  targetVals,
                  (System_Func_T__bool__o *)v88,
                  (const MethodInfo_3133F54 *)Method_BasicHelper_Any_int____78639760);
          if ( (v79 & 1) != 0 )
            break;
        }
      }
    }
    v89 = *userServantEntity;
    if ( *userServantEntity )
    {
      v90 = *(_OWORD *)&v89->fields.id.fields.fakeValue;
      *(_OWORD *)&v148.fields.currentCryptoKey = *(_OWORD *)&v89->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v148.fields.fakeValue = v90;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v147 = v148;
      v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v147, 0);
      if ( !entity )
        sub_1C71608(v91, v92);
      v93 = entity[2];
      v94 = v91;
      *(Il2CppObject *)&v146.fields.currentCryptoKey = entity[1];
      *(Il2CppObject *)&v146.fields.fakeValue = v93;
      v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v146, 0);
      if ( v94 == v79 )
        break;
    }
    if ( !v141 )
      sub_1C71608(v79, v80);
    items = v141->fields._items;
    v96 = Method_System_Collections_Generic_List_UserServantGrandEntity__Add__;
    ++v141->fields._version;
    if ( !items )
      sub_1C71608(v79, v80);
    size = v141->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v141,
        (Il2CppObject *)v44,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
    }
    else
    {
      v98 = &items->obj.klass + size;
      v141->fields._size = size + 1;
      v98[4] = (Il2CppClass *)v44;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v98 + 4), v44, v81, v82, v83, v84, v85, v86);
    }
    if ( !v140 )
      sub_1C71608(v99, v100);
    v107 = entity;
    v108 = v140->fields._items;
    v109 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v140->fields._version;
    if ( !v108 )
      sub_1C71608(v99, v107);
    v110 = v140->fields._size;
    if ( (unsigned int)v110 >= LODWORD(v108->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v140,
        v107,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    }
    else
    {
      v111 = &v108->obj.klass + v110;
      v140->fields._size = v110 + 1;
      v111[4] = (Il2CppClass *)v107;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v111 + 4), (int32_t)v107, v101, v102, v103, v104, v105, v106);
    }
  }
  EquipUserServantIdList = UserServantGrandEntity__GetEquipUserServantIdList((UserServantGrandEntity_o *)v44, 0);
  v139->klass = (GrandQuestFolderBoardItem_c *)EquipUserServantIdList;
  sub_1C71354(v139, (int32_t)EquipUserServantIdList, v132, v133, v134, v135, v136, v137);
  v112 = 8;
  *v138 = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill((UserServantGrandEntity_o *)v44, 0);
LABEL_63:
  if ( v33 )
  {
    v113 = v33->klass;
    v114 = *(unsigned __int16 *)&v33->klass->_2.rank;
    if ( *(_WORD *)&v33->klass->_2.rank )
    {
      v115 = &v113->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v115 - 1) != System_IDisposable_TypeInfo )
      {
        --v114;
        v115 += 4;
        if ( !v114 )
          goto LABEL_68;
      }
      v116 = (__int64)&v113->vtable[*v115];
    }
    else
    {
LABEL_68:
      v116 = sub_1C47738(v33, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v116)(v33, *(_QWORD *)(v116 + 8));
  }
  if ( v112 == 9 )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__IsNullOrEmpty(
                                                                    (System_Collections_ICollection_o *)v141,
                                                                    0);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      if ( !v141 )
        goto LABEL_96;
      if ( v141->fields._size < 2 )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v140;
        if ( v140 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v140,
                   0,
                   (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          *userServantEntity = (UserServantEntity_o *)Item;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)userServantEntity,
            (int32_t)Item,
            v118,
            v119,
            v120,
            v121,
            v122,
            v123);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v141,
                                                                          0,
                                                                          (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UserServantGrandEntity__get_Item__);
          if ( Master_object )
          {
            v124 = UserServantGrandEntity__GetEquipUserServantIdList((UserServantGrandEntity_o *)Master_object, 0);
            v139->klass = (GrandQuestFolderBoardItem_c *)v124;
            sub_1C71354(v139, (int32_t)v124, v125, v126, v127, v128, v129, v130);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_List_object___get_Item(
                                                                            v141,
                                                                            0,
                                                                            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UserServantGrandEntity__get_Item__);
            if ( Master_object )
            {
              *v138 = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(
                        (UserServantGrandEntity_o *)Master_object,
                        0);
              return;
            }
          }
        }
LABEL_96:
        sub_1C71608(Master_object, v9);
      }
    }
LABEL_79:
    *userServantEntity = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)userServantEntity, 0, v20, v21, v22, v23, v24, v25);
  }
}


System_Collections_Generic_List_int__o *PartyListViewItem__GetGrandSvtIdListInParty(
        PartyListViewItem_o *this,
        bool getFollower,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v7; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x25
  PartyOrganizationListViewItem_o *v11; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  if ( (byte_4CC2CD0 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC2CD0 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.questRestrictionInfo )
  {
    memberList = this->fields.memberList;
    if ( !memberList )
LABEL_26:
      sub_1C71608(questRestrictionInfo, v7);
    max_length = memberList->max_length;
    if ( (int)max_length >= 1 )
    {
      for ( i = 0; (__int64)i < (int)max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1C71610(questRestrictionInfo);
        v11 = memberList->m_Items[i];
        if ( getFollower )
        {
          if ( !v11 )
            goto LABEL_26;
        }
        else
        {
          if ( !v11 )
            goto LABEL_26;
          if ( v11->fields.isFollower )
            goto LABEL_24;
        }
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_26;
        questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                                           questRestrictionInfo,
                                                           v11->fields._InitPos_k__BackingField,
                                                           0);
        if ( questRestrictionInfo
          && (v11->fields._IsGrandServant_k__BackingField || v11->fields._IsTempGrandServant_k__BackingField) )
        {
          SvtId = PartyOrganizationListViewItem__get_SvtId(v11, 0);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                             SvtId,
                                                             0);
          if ( !v5 )
            goto LABEL_26;
          items = v5->fields._items;
          v14 = Method_System_Collections_Generic_List_int__Add__;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_26;
          size = v5->fields._size;
          v7 = (unsigned int)questRestrictionInfo;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v5,
              (int32_t)questRestrictionInfo,
              *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v5->fields._size = size + 1;
            items->m_Items[size] = (int)questRestrictionInfo;
          }
        }
LABEL_24:
        LODWORD(max_length) = memberList->max_length;
      }
    }
  }
  return v5;
}


GrandSvtInfo_array *PartyListViewItem__GetGrandSvtInfoInParty(
        PartyListViewItem_o *this,
        PartyListViewItem_o *oldPartyItem,
        const MethodInfo *method)
{
  long double inited; // q0
  System_Collections_Generic_List_object__o *v6; // x20
  UserServantGrandMaster_o *Master_object; // x0
  __int64 v8; // x1
  UserServantGrandMaster_o *v9; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x28
  il2cpp_array_size_t max_length; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v12; // x27
  unsigned __int64 v13; // x29
  PartyOrganizationListViewItem_o *v14; // x23
  RestrictionEntity_o *GrandServantRestrictionEntity; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  UserServantGrandEntity_o *v17; // x26
  int32_t EquipFriendShipSkillChange_k__BackingField; // w25
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v20; // q0
  int32_t grandGraphId; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v22; // x24
  int64_t v23; // x27
  GrandSvtInfo_o *v24; // x23
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  _QWORD *v36; // x19
  __int64 v37; // x8
  __int64 v38; // x0
  __int64 v39; // x0
  char v40; // [xsp+4h] [xbp-ACh]
  System_Int64_array *userSvtEquipIds; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+30h] [xbp-80h]

  if ( (byte_4CC2CD1 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_GrandSvtInfo___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&GrandSvtInfo_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_GrandSvtInfo__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GrandSvtInfo__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GrandSvtInfo___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_GrandSvtInfo__TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CC2CD1 = 1;
  }
  if ( oldPartyItem && this->fields.questRestrictionInfo )
  {
    v6 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_GrandSvtInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_GrandSvtInfo___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UserServantGrandMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_48;
    v9 = Master_object;
    Master_object = (UserServantGrandMaster_o *)QuestRestrictionInfo__IsIgnoreSyncEquipGrand(
                                                  this->fields.questRestrictionInfo,
                                                  0);
    memberList = this->fields.memberList;
    v40 = (char)Master_object;
    if ( !memberList )
      goto LABEL_48;
    max_length = memberList->max_length;
    if ( (int)max_length >= 1 )
    {
      v12 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
      v13 = 0;
      do
      {
        if ( v13 >= (unsigned int)max_length )
          sub_1C71610(Master_object);
        v14 = memberList->m_Items[v13];
        if ( v14
          && v14->fields.isRestrictionGrandServant
          && v14->fields.userServantEntity
          && (v14->fields._IsGrandServant_k__BackingField || v14->fields._IsTempGrandServant_k__BackingField) )
        {
          Master_object = (UserServantGrandMaster_o *)this->fields.questRestrictionInfo;
          if ( !Master_object )
            goto LABEL_48;
          GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                            (QuestRestrictionInfo_o *)Master_object,
                                            v14->fields._InitPos_k__BackingField,
                                            0);
          SvtId = PartyOrganizationListViewItem__get_SvtId(v14, 0);
          if ( !(*v12)->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(*v12);
          Master_object = (UserServantGrandMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                        SvtId,
                                                        0);
          if ( !v9 )
            goto LABEL_48;
          Master_object = (UserServantGrandMaster_o *)UserServantGrandMaster__GetEntityFromSvtId(
                                                        v9,
                                                        (int32_t)Master_object,
                                                        0);
          if ( GrandServantRestrictionEntity )
          {
            v17 = (UserServantGrandEntity_o *)Master_object;
            if ( Master_object )
            {
              if ( (v40 & 1) != 0 )
              {
                userSvtEquipIds = UserServantGrandEntity__GetEquipUserServantIdList(
                                    (UserServantGrandEntity_o *)Master_object,
                                    0);
                Master_object = (UserServantGrandMaster_o *)UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(
                                                              v17,
                                                              0);
                EquipFriendShipSkillChange_k__BackingField = (int)Master_object;
              }
              else
              {
                Master_object = (UserServantGrandMaster_o *)PartyOrganizationListViewItem__GetEquipList(v14, 0);
                EquipFriendShipSkillChange_k__BackingField = v14->fields._EquipFriendShipSkillChange_k__BackingField;
                userSvtEquipIds = (System_Int64_array *)Master_object;
              }
              userServantEntity = v14->fields.userServantEntity;
              if ( !userServantEntity )
                goto LABEL_48;
              v20 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
              grandGraphId = v17->fields.grandGraphId;
              *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v43.fields.fakeValue = v20;
              v22 = v12;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v42 = v43;
              v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v42, 0);
              v24 = (GrandSvtInfo_o *)sub_1C715FC(GrandSvtInfo_TypeInfo);
              GrandSvtInfo___ctor(
                v24,
                grandGraphId,
                v23,
                userSvtEquipIds,
                EquipFriendShipSkillChange_k__BackingField,
                0);
              if ( !v6 )
                goto LABEL_48;
              items = v6->fields._items;
              v32 = Method_System_Collections_Generic_List_GrandSvtInfo__Add__;
              ++v6->fields._version;
              if ( !items )
                goto LABEL_48;
              size = v6->fields._size;
              v12 = v22;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v6,
                  (Il2CppObject *)v24,
                  *(const MethodInfo_3810718 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
              }
              else
              {
                v34 = &items->obj.klass + size;
                v6->fields._size = size + 1;
                v34[4] = (Il2CppClass *)v24;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v34 + 4), (int32_t)v24, v25, v26, v27, v28, v29, v30);
              }
            }
          }
        }
        LODWORD(max_length) = memberList->max_length;
      }
      while ( (__int64)++v13 < (int)max_length );
    }
    if ( !v6 )
LABEL_48:
      sub_1C71608(Master_object, v8);
    return (GrandSvtInfo_array *)System_Collections_Generic_List_object___ToArray(
                                   v6,
                                   (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_GrandSvtInfo__ToArray__);
  }
  else
  {
    v36 = Method_System_Array_Empty_GrandSvtInfo___;
    v37 = *((_QWORD *)Method_System_Array_Empty_GrandSvtInfo___ + 7);
    if ( !v37 )
    {
      sub_1C474A0(Method_System_Array_Empty_GrandSvtInfo___);
      v37 = v36[7];
    }
    v38 = *(_QWORD *)(v37 + 16);
    if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
      v38 = sub_1C47444(inited);
    if ( !*(_DWORD *)(v38 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v38);
    v39 = *(_QWORD *)(v36[7] + 16LL);
    if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
      v39 = sub_1C47444(inited);
    return **(GrandSvtInfo_array ***)(v39 + 184);
  }
}


System_Boolean_array *PartyListViewItem__GetIsFollowerList(PartyListViewItem_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  BalanceConfig_c *v6; // x0
  unsigned __int64 i; // x22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v9; // x8

  if ( (byte_4CC2CCB & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&bool___TypeInfo);
    byte_4CC2CCB = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v5 = sub_1C71458(bool___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  v6 = BalanceConfig_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= v6->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( i >= LODWORD(memberList->max_length) )
      goto LABEL_18;
    v9 = memberList->m_Items[i];
    if ( v9 )
    {
      if ( !v5 )
LABEL_17:
        sub_1C71608(v6, v4);
      if ( i >= *(unsigned int *)(v5 + 24) )
LABEL_18:
        sub_1C71610(v6);
      *(_BYTE *)(v5 + 32 + i) = v9->fields.isFollower;
    }
  }
  return (System_Boolean_array *)v5;
}


PartyOrganizationListViewItem_o *PartyListViewItem__GetMember(
        PartyListViewItem_o *this,
        int32_t num,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8

  memberList = this->fields.memberList;
  if ( !memberList )
    sub_1C71608(this, num);
  if ( LODWORD(memberList->max_length) <= num )
    sub_1C71610(this);
  return memberList->m_Items[num];
}


int32_t PartyListViewItem__GetMenuKind(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.menuKind;
}


int32_t PartyListViewItem__GetNpcDeployIdx(
        PartyListViewItem_o *this,
        System_Int64_array *npcSvtIds,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 myServantNumMax; // x0
  int max_length; // w9
  bool v6; // cc
  int32_t v7; // w8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !npcSvtIds )
    sub_1C71608(this, npcSvtIds);
  myServantNumMax = (unsigned int)questRestrictionInfo->fields.myServantNumMax;
  max_length = npcSvtIds->max_length;
  v6 = (int)myServantNumMax < max_length;
  if ( (int)myServantNumMax <= max_length )
    v7 = npcSvtIds->max_length;
  else
    v7 = questRestrictionInfo->fields.myServantNumMax;
  if ( (unsigned int)myServantNumMax > max_length )
    max_length = myServantNumMax;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( max_length == (_DWORD)myServantNumMax )
        sub_1C71610(myServantNumMax);
      if ( !npcSvtIds->m_Items[(int)myServantNumMax] )
        break;
      myServantNumMax = (unsigned int)(myServantNumMax + 1);
      if ( v7 == (_DWORD)myServantNumMax )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    LODWORD(myServantNumMax) = -1;
  }
  return myServantNumMax;
}


QuestRestrictionInfo_o *PartyListViewItem__GetQuestRestriction(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.questRestrictionInfo;
}


int32_t PartyListViewItem__GetStartDeckCondition(PartyListViewItem_o *this, const MethodInfo *method)
{
  int32_t menuKind; // w8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int dialogMessageInfoDictionary; // w23
  PartyOrganizationListViewItem_o *v6; // x20
  unsigned int v7; // w24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int TotalCostRestriction; // w0
  QuestRestrictionInfo_o *v11; // x0
  int32_t FixedServantPositionCount; // w20
  unsigned int v13; // w25
  char v14; // w24
  char v15; // w22
  char v16; // w23
  struct PartyOrganizationListViewItem_array *v17; // x8
  Il2CppClass **v18; // x8
  Il2CppClass *v19; // x21
  bool v20; // w10
  int v21; // w8
  char v22; // w9
  char v23; // w10

  if ( (byte_4CC2CBE & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC2CBE = 1;
  }
  menuKind = this->fields.menuKind;
  if ( menuKind == 1 )
    goto LABEL_4;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( menuKind == 3 )
  {
    if ( !questRestrictionInfo )
LABEL_47:
      sub_1C71608(questRestrictionInfo, method);
    questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(
                                                       questRestrictionInfo,
                                                       0);
    if ( questRestrictionInfo )
    {
      dialogMessageInfoDictionary = (int)questRestrictionInfo->fields.dialogMessageInfoDictionary;
      v6 = (PartyOrganizationListViewItem_o *)questRestrictionInfo;
      if ( dialogMessageInfoDictionary < 1 )
      {
LABEL_4:
        LODWORD(questRestrictionInfo) = 0;
        return (int)questRestrictionInfo;
      }
      v7 = 0;
      while ( 1 )
      {
        memberList = this->fields.memberList;
        if ( !memberList )
          goto LABEL_47;
        if ( v7 >= LODWORD(memberList->max_length) )
          goto LABEL_48;
        questRestrictionInfo = (QuestRestrictionInfo_o *)memberList->m_Items[v7];
        if ( !questRestrictionInfo )
          goto LABEL_47;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)questRestrictionInfo, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                           SvtId,
                                                           0);
        if ( v7 >= v6->fields.sortIndex )
          goto LABEL_48;
        if ( (_DWORD)questRestrictionInfo != *((_DWORD *)&v6->fields.sortValue0 + (int)v7) )
          break;
        if ( dialogMessageInfoDictionary == ++v7 )
          goto LABEL_4;
      }
      LODWORD(questRestrictionInfo) = 11;
    }
  }
  else if ( questRestrictionInfo
         && (TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0),
             TotalCostRestriction >= 1)
         && this->fields.cost > TotalCostRestriction )
  {
    LODWORD(questRestrictionInfo) = 8;
  }
  else
  {
    LODWORD(questRestrictionInfo) = PartyListViewItem__GetDeckCondition(this, method);
    if ( !(_DWORD)questRestrictionInfo )
    {
      v11 = this->fields.questRestrictionInfo;
      if ( !v11 )
        goto LABEL_4;
      FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(v11, 0);
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      while ( 1 )
      {
        questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( (signed int)v13 >= SHIDWORD(questRestrictionInfo->fields.uniqueSvtRestrictionEntity[2].fields.targetVals) )
          break;
        v17 = this->fields.memberList;
        if ( !v17 )
          goto LABEL_47;
        if ( v13 >= LODWORD(v17->max_length) )
LABEL_48:
          sub_1C71610(questRestrictionInfo);
        v18 = &v17->obj.klass + (int)v13;
        v19 = v18[4];
        if ( !v19 )
          goto LABEL_47;
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction((PartyOrganizationListViewItem_o *)v18[4], 0) )
        {
          LODWORD(questRestrictionInfo) = 18;
          return (int)questRestrictionInfo;
        }
        ++v13;
        v16 |= BYTE2(v19->_2.genericContainerHandle) != 0;
        v15 |= BYTE3(v19->_2.genericContainerHandle) != 0;
        FixedServantPositionCount -= BYTE6(v19->_2.genericContainerHandle) & 1;
        v14 |= BYTE4(v19->_2.genericContainerHandle) != 0;
      }
      if ( (v14 & 1) != 0 )
      {
        LODWORD(questRestrictionInfo) = 9;
        return (int)questRestrictionInfo;
      }
      v20 = FixedServantPositionCount > 0;
      v21 = FixedServantPositionCount <= 0 ? 12 : 10;
      v22 = v20 | v16;
      v23 = v15 | v20 | v16;
      LODWORD(questRestrictionInfo) = (v22 & 1) != 0 ? v21 : 13;
      if ( (v23 & 1) == 0 )
        goto LABEL_4;
    }
  }
  return (int)questRestrictionInfo;
}


int32_t PartyListViewItem__GetSupportInitIndex(
        PartyListViewItem_o *this,
        System_Collections_Generic_List_FollowerInfo__o *fixNpcFollowerInfoList,
        const MethodInfo *method)
{
  PartyListViewItem_o *v4; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t supportInitIndex; // w20
  int32_t v8; // w23
  BalanceConfig_c *v9; // x0
  PartyListViewItem___c__DisplayClass37_0_o *v10; // x21
  System_Func_object__bool__o *v11; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  int myServantNumMax; // [xsp+Ch] [xbp-64h]

  v4 = this;
  if ( (byte_4CC2CAA & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_FollowerInfo___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_1C713B0(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_1C713B0(&Method_PartyListViewItem___c__DisplayClass37_0__GetSupportInitIndex_b__0__);
    this = (PartyListViewItem_o *)sub_1C713B0(&PartyListViewItem___c__DisplayClass37_0_TypeInfo);
    byte_4CC2CAA = 1;
  }
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_15:
    sub_1C71608(this, fixNpcFollowerInfoList);
  supportInitIndex = questRestrictionInfo->fields.supportInitIndex;
  if ( supportInitIndex <= 0 )
  {
    myServantNumMax = questRestrictionInfo->fields.myServantNumMax;
    v8 = 0;
    while ( 1 )
    {
      v9 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v9 = BalanceConfig_TypeInfo;
      }
      if ( v8 >= v9->static_fields->DeckMemberMax )
        break;
      v10 = (PartyListViewItem___c__DisplayClass37_0_o *)sub_1C715FC(PartyListViewItem___c__DisplayClass37_0_TypeInfo);
      PartyListViewItem___c__DisplayClass37_0___ctor(v10, 0);
      if ( !v10 )
        goto LABEL_15;
      v10->fields.chkIdx = ++v8;
      v11 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v11,
        (Il2CppObject *)v10,
        Method_PartyListViewItem___c__DisplayClass37_0__GetSupportInitIndex_b__0__,
        0);
      v12 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)fixNpcFollowerInfoList,
              (System_Func_TSource__bool__o *)v11,
              (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      if ( !System_Linq_Enumerable__Any_object_(
              v12,
              (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
      {
        if ( myServantNumMax < 1 )
          return v10->fields.chkIdx;
        --myServantNumMax;
      }
    }
  }
  return supportInitIndex;
}


ServantEntity_array *PartyListViewItem__GetSvtEntityList(PartyListViewItem_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  unsigned int *v11; // x20
  unsigned __int64 v12; // x24
  GrandQuestFolderBoardItem_o *i; // x21
  BalanceConfig_c *v14; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v16; // x8
  GrandQuestFolderBoardItem_c *servantEntity; // x22
  __int64 v19; // x0

  if ( (byte_4CC2CC9 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&ServantEntity___TypeInfo);
    byte_4CC2CC9 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v11 = (unsigned int *)sub_1C71458(ServantEntity___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  v12 = 0;
  for ( i = (GrandQuestFolderBoardItem_o *)(v11 + 8); ; i = (GrandQuestFolderBoardItem_o *)((char *)i + 8) )
  {
    v14 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v12 >= v14->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_19;
    if ( v12 >= LODWORD(memberList->max_length) )
      goto LABEL_20;
    v16 = memberList->m_Items[v12];
    if ( v16 )
    {
      if ( !v11 )
LABEL_19:
        sub_1C71608(v14, v4);
      servantEntity = (GrandQuestFolderBoardItem_c *)v16->fields.servantEntity;
      if ( servantEntity )
      {
        v14 = (BalanceConfig_c *)sub_1C714EC(servantEntity, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
        if ( !v14 )
        {
          v19 = sub_1C7162C();
          sub_1C714D8(v19, 0);
        }
      }
      if ( v12 >= v11[6] )
LABEL_20:
        sub_1C71610(v14);
      i->klass = servantEntity;
      sub_1C71354(i, (int32_t)servantEntity, v5, v6, v7, v8, v9, v10);
    }
    ++v12;
  }
  return (ServantEntity_array *)v11;
}


System_String_array *PartyListViewItem__GetSvtNameList(PartyListViewItem_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  unsigned __int64 v6; // x23
  GrandQuestFolderBoardItem_o *i; // x21
  GrandQuestFolderBoardItem_c *SvtNameText; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CC2CCA & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&string___TypeInfo);
    byte_4CC2CCA = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v5 = sub_1C71458(string___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  v6 = 0;
  for ( i = (GrandQuestFolderBoardItem_o *)(v5 + 32); ; i = (GrandQuestFolderBoardItem_o *)((char *)i + 8) )
  {
    SvtNameText = (GrandQuestFolderBoardItem_c *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      SvtNameText = (GrandQuestFolderBoardItem_c *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v6 >= *((int *)SvtNameText->static_fields + 43) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( v6 >= LODWORD(memberList->max_length) )
      goto LABEL_18;
    v10 = memberList->m_Items[v6];
    if ( v10 )
    {
      SvtNameText = (GrandQuestFolderBoardItem_c *)PartyOrganizationListViewItem__get_SvtNameText(v10, 0);
      if ( !v5 )
LABEL_17:
        sub_1C71608(SvtNameText, v4);
      if ( v6 >= *(unsigned int *)(v5 + 24) )
LABEL_18:
        sub_1C71610(SvtNameText);
      i->klass = SvtNameText;
      sub_1C71354(i, (int32_t)SvtNameText, v11, v12, v13, v14, v15, v16);
    }
    ++v6;
  }
  return (System_String_array *)v5;
}


int32_t PartyListViewItem__GetTotalCost(PartyListViewItem_o *this, const MethodInfo *method)
{
  unsigned int v3; // w23
  int32_t v4; // w20
  int64_t Entity; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v7; // x21
  int64_t userServantEntity; // x22
  Il2CppObject *Master_object; // x0
  __int128 v10; // q0
  __int128 v11; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x22
  int v13; // w20
  int32_t EquipCost; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-80h]

  if ( (byte_4CC2CC7 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CC2CC7 = 1;
  }
  v3 = 0;
  v4 = 0;
  while ( 1 )
  {
    Entity = (int64_t)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Entity = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v3 >= *(_DWORD *)(*(_QWORD *)(Entity + 184) + 172LL) )
      return v4;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_22;
    if ( v3 >= LODWORD(memberList->max_length) )
      sub_1C71610(Entity);
    v7 = memberList->m_Items[v3];
    if ( !v7 )
LABEL_22:
      sub_1C71608(Entity, method);
    userServantEntity = (int64_t)v7->fields.userServantEntity;
    if ( userServantEntity )
    {
      if ( !v7->fields._IsDisappearSvt_k__BackingField )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
        v11 = *(_OWORD *)(userServantEntity + 16);
        v10 = *(_OWORD *)(userServantEntity + 32);
        v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        *(_OWORD *)&v17.fields.currentCryptoKey = v11;
        *(_OWORD *)&v17.fields.fakeValue = v10;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v16 = v17;
        Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v16, 0);
        if ( !v12 )
          goto LABEL_22;
        Entity = (int64_t)DataMasterBase_object__object__long___GetEntity(
                            v12,
                            Entity,
                            (const MethodInfo_340B3DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        userServantEntity = Entity;
        if ( !Entity )
          goto LABEL_22;
      }
      Entity = (int64_t)UserServantEntity__GetOverwriteStatus(
                          (UserServantEntity_o *)userServantEntity,
                          this->fields.questRestrictionInfo,
                          0);
      if ( !Entity )
        goto LABEL_22;
      v13 = *(_DWORD *)(Entity + 28) + v4;
      EquipCost = PartyOrganizationListViewItem__get_EquipCost(v7, 0);
      v4 = v13 + (EquipCost & ~(EquipCost >> 31));
    }
    ++v3;
  }
}


int32_t PartyListViewItem__GetUseEquipServantId(PartyListViewItem_o *this, int64_t userSvtId, const MethodInfo *method)
{
  PartyListViewItem_o *v4; // x20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  unsigned int v6; // w24
  unsigned int max_length; // w9
  Il2CppClass **v8; // x8
  PartyOrganizationListViewItem_o *v9; // x21
  System_Collections_Generic_List_object__o *equipUserServantEntityList; // x22
  int32_t v11; // w23
  __int128 v12; // q0
  __int128 v13; // q0
  int32_t sortIndex; // w8
  int v15; // w9
  __int64 v16; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+40h] [xbp-70h]

  v4 = this;
  if ( (byte_4CC2CC4 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (PartyListViewItem_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CC2CC4 = 1;
  }
  if ( userSvtId < 1 )
    return 0;
  memberList = v4->fields.memberList;
  if ( !memberList )
LABEL_38:
    sub_1C71608(this, userSvtId);
  v6 = 0;
  while ( 1 )
  {
    max_length = memberList->max_length;
    if ( (int)v6 >= (int)max_length )
      return 0;
    if ( v6 >= max_length )
LABEL_39:
      sub_1C71610(this);
    v8 = &memberList->obj.klass + (int)v6;
    v9 = (PartyOrganizationListViewItem_o *)v8[4];
    if ( !v9 )
      goto LABEL_38;
    this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                    (PartyOrganizationListViewItem_o *)v8[4],
                                    0);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_24;
    if ( !v9->fields._IsGrandServant_k__BackingField && !v9->fields._IsTempGrandServant_k__BackingField )
      break;
    equipUserServantEntityList = (System_Collections_Generic_List_object__o *)v9->fields.equipUserServantEntityList;
    if ( !equipUserServantEntityList )
      goto LABEL_38;
    if ( equipUserServantEntityList->fields._size >= 1 )
    {
      v11 = 0;
      do
      {
        this = (PartyListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                        equipUserServantEntityList,
                                        v11,
                                        (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
        if ( !this )
          goto LABEL_38;
        v12 = *(_OWORD *)&this->fields.sortValue0;
        *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&this->fields.selectNum;
        *(_OWORD *)&v21.fields.fakeValue = v12;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v20 = v21;
        this = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v20, 0);
        if ( this )
        {
          this = (PartyListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                          equipUserServantEntityList,
                                          v11,
                                          (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !this )
            goto LABEL_38;
          v13 = *(_OWORD *)&this->fields.sortValue0;
          *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&this->fields.selectNum;
          *(_OWORD *)&v21.fields.fakeValue = v13;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v19 = v21;
          this = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v19, 0);
          if ( this == (PartyListViewItem_o *)userSvtId )
            goto LABEL_35;
        }
      }
      while ( ++v11 < equipUserServantEntityList->fields._size );
    }
LABEL_24:
    memberList = v4->fields.memberList;
    ++v6;
    if ( !memberList )
      goto LABEL_38;
  }
  this = (PartyListViewItem_o *)PartyOrganizationListViewItem__GetEquipList(v9, 0);
  if ( !this )
    goto LABEL_38;
  sortIndex = this->fields.sortIndex;
  if ( sortIndex < 1 )
    goto LABEL_24;
  v15 = 0;
  while ( 1 )
  {
    if ( sortIndex == v15 )
      goto LABEL_39;
    v16 = *(&this->fields.sortValue0 + v15);
    if ( v16 )
    {
      if ( v16 == userSvtId )
        break;
    }
    if ( sortIndex == ++v15 )
      goto LABEL_24;
  }
LABEL_35:
  SvtId = PartyOrganizationListViewItem__get_SvtId(v9, 0);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(SvtId, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t PartyListViewItem__GetUseIdenticalEquipServantId(
        PartyListViewItem_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  PartyListViewItem_o *v4; // x20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  __int64 v6; // x25
  int max_length; // w9
  Il2CppClass **v8; // x8
  PartyOrganizationListViewItem_o *v9; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // kr10_16

  v4 = this;
  if ( (byte_4CC2CC5 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC2CC5 = 1;
  }
  if ( svtId >= 1 )
  {
    memberList = v4->fields.memberList;
    if ( !memberList )
LABEL_14:
      sub_1C71608(this, *(_QWORD *)&svtId);
    v6 = 0;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
        sub_1C71610(this);
      v8 = &memberList->obj.klass + v6;
      v9 = (PartyOrganizationListViewItem_o *)v8[4];
      if ( !v9 )
        goto LABEL_14;
      this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                      (PartyOrganizationListViewItem_o *)v8[4],
                                      0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v9, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        this = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(EquipSvtId, 0);
        if ( (_DWORD)this == svtId )
        {
          v12 = PartyOrganizationListViewItem__get_SvtId(v9, 0);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v12, 0);
        }
      }
      memberList = v4->fields.memberList;
      ++v6;
      if ( !memberList )
        goto LABEL_14;
    }
  }
  return 0;
}


UserDeckEntity_o *PartyListViewItem__GetUserDeck(
        PartyListViewItem_o *this,
        PartyListViewItem_o *baseItem,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_String_o *deckName; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v16; // x23
  int32_t max_length; // w22
  int64_t userEquipId; // x20
  DeckServant_o *v19; // x21
  __int64 v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct PartyOrganizationListViewItem_array *v27; // x24
  il2cpp_array_size_t v28; // x25
  __int64 v29; // x29
  int v30; // w28
  PartyOrganizationListViewItem_o *v31; // x22
  __int64 v32; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v34; // q0
  System_Int64_array *EquipList; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  _DWORD *v42; // x22
  __int64 v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  _DWORD *v50; // x0
  __int64 v53; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+40h] [xbp-80h]

  if ( (byte_4CC2CC0 & 1) == 0 )
  {
    sub_1C713B0(&DeckServantData_TypeInfo);
    sub_1C713B0(&DeckServant_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&UserDeckEntity_TypeInfo);
    byte_4CC2CC0 = 1;
  }
  v5 = sub_1C715FC(UserDeckEntity_TypeInfo);
  UserDeckEntity___ctor((UserDeckEntity_o *)v5, 0);
  if ( !v5 )
    goto LABEL_29;
  *(_QWORD *)(v5 + 16) = this->fields.id;
  *(_DWORD *)(v5 + 32) = this->fields.index + 1;
  deckName = this->fields.deckName;
  *(_QWORD *)(v5 + 40) = deckName;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)deckName, v8, v9, v10, v11, v12, v13);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_29;
  v16 = baseItem ? baseItem : this;
  max_length = memberList->max_length;
  userEquipId = v16->fields.userEquipId;
  v19 = (DeckServant_o *)sub_1C715FC(DeckServant_TypeInfo);
  DeckServant___ctor_41975020(v19, max_length, userEquipId, 0);
  *(_QWORD *)(v5 + 48) = v19;
  v20 = v5 + 48;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 48), (int32_t)v19, v21, v22, v23, v24, v25, v26);
  v27 = v16->fields.memberList;
  if ( !v27 )
    goto LABEL_29;
  v28 = v27->max_length;
  if ( (int)v28 >= 1 )
  {
    v29 = 0;
    v30 = 1;
    while ( 1 )
    {
      v31 = v27->m_Items[v29];
      v32 = sub_1C715FC(DeckServantData_TypeInfo);
      DeckServantData___ctor((DeckServantData_o *)v32, 0);
      if ( !v32 )
        break;
      *(_DWORD *)(v32 + 16) = v30;
      if ( !v31 )
        break;
      userServantEntity = v31->fields.userServantEntity;
      if ( userServantEntity )
      {
        v34 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v56.fields.fakeValue = v34;
      }
      else
      {
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v55, 0, 0);
        v56 = v55;
      }
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v54 = v56;
      *(_QWORD *)(v32 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v54, 0);
      *(_BYTE *)(v32 + 56) = v31->fields.isFollower;
      EquipList = PartyOrganizationListViewItem__GetEquipList(v31, 0);
      *(_QWORD *)(v32 + 40) = EquipList;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v32 + 40), (int32_t)EquipList, v36, v37, v38, v39, v40, v41);
      *(_DWORD *)(v32 + 76) = v31->fields._InitPos_k__BackingField;
      if ( !*(_QWORD *)v20 )
        break;
      v42 = *(_DWORD **)(*(_QWORD *)v20 + 16LL);
      if ( !v42 )
        break;
      v43 = sub_1C714EC(v32, *(_QWORD *)(*(_QWORD *)v42 + 64LL));
      if ( !v43 )
      {
        v53 = sub_1C7162C();
        sub_1C714D8(v53, 0);
      }
      if ( (unsigned int)(v30 - 1) < v42[6] )
      {
        v50 = &v42[2 * v29];
        *((_QWORD *)v50 + 4) = v32;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v50 + 8), v32, v44, v45, v46, v47, v48, v49);
        if ( (_DWORD)v28 == v30 )
          return (UserDeckEntity_o *)v5;
        v29 = v30;
        if ( (unsigned int)v30++ < LODWORD(v27->max_length) )
          continue;
      }
      sub_1C71610(v43);
    }
LABEL_29:
    sub_1C71608(v6, v7);
  }
  return (UserDeckEntity_o *)v5;
}


UserEventDeckEntity_o *PartyListViewItem__GetUserEventDeck(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x1
  NetworkManager_c *IsUseOldMaster; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x22
  int64_t userEquipId; // x21
  DeckServant_o *v8; // x0
  int32_t max_length; // w1
  DeckServant_o *v10; // x22
  __int64 v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct PartyOrganizationListViewItem_array *v18; // x8
  unsigned __int64 v19; // x28
  unsigned __int64 max_length_low; // x9
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  PartyOrganizationListViewItem_o *v22; // x22
  struct QuestRestrictionInfo_o *v23; // x8
  _BOOL4 isNpcEditablePos; // w23
  _BOOL4 IsEditablePos; // w0
  __int64 v26; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v28; // q0
  System_Int64_array *EquipList; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t InitPos_k__BackingField; // w8
  int v37; // w8
  unsigned int *v38; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  unsigned int *v45; // x0
  __int64 v47; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49[2]; // [xsp+20h] [xbp-A0h] BYREF

  if ( (byte_4CC2CC1 & 1) == 0 )
  {
    sub_1C713B0(&DeckServantData_TypeInfo);
    sub_1C713B0(&DeckServant_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C713B0(&UserEventDeckEntity_TypeInfo);
    byte_4CC2CC1 = 1;
  }
  memset(&v49[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v3 = sub_1C715FC(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor((UserEventDeckEntity_o *)v3, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  IsUseOldMaster = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    IsUseOldMaster = NetworkManager_TypeInfo;
  }
  if ( !v3 )
    goto LABEL_55;
  *(_QWORD *)(v3 + 16) = IsUseOldMaster->static_fields->userIdNumber;
  *(_DWORD *)(v3 + 24) = this->fields.id;
  *(_DWORD *)(v3 + 28) = this->fields.index + 1;
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_55;
  userEquipId = this->fields.userEquipId;
  v8 = (DeckServant_o *)sub_1C715FC(DeckServant_TypeInfo);
  max_length = memberList->max_length;
  v10 = v8;
  DeckServant___ctor_41975020(v8, max_length, userEquipId, 0);
  *(_QWORD *)(v3 + 32) = v10;
  v11 = v3 + 32;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)v10, v12, v13, v14, v15, v16, v17);
  v18 = this->fields.memberList;
  if ( !v18 )
LABEL_55:
    sub_1C71608(IsUseOldMaster, v4);
  v19 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v18->max_length);
    if ( (__int64)v19 >= (int)max_length_low )
      return (UserEventDeckEntity_o *)v3;
    if ( v19 >= max_length_low )
      goto LABEL_56;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v22 = v18->m_Items[v19];
    if ( !questRestrictionInfo )
    {
      isNpcEditablePos = 0;
      goto LABEL_28;
    }
    IsUseOldMaster = (NetworkManager_c *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
    v23 = this->fields.questRestrictionInfo;
    if ( ((unsigned __int8)IsUseOldMaster & 1) != 0 )
    {
      if ( !v23 )
        goto LABEL_55;
      isNpcEditablePos = v23->fields.isNpcEditablePos;
    }
    else
    {
      if ( !v22 || !v23 )
        goto LABEL_55;
      IsEditablePos = QuestRestrictionInfo__IsEditablePos(
                        this->fields.questRestrictionInfo,
                        v22->fields._InitPos_k__BackingField,
                        0);
      v23 = this->fields.questRestrictionInfo;
      isNpcEditablePos = IsEditablePos;
      if ( !v23 )
        goto LABEL_28;
    }
    IsUseOldMaster = (NetworkManager_c *)QuestRestrictionInfo__IsNpcMulitipleOrOnly(v23, 0);
    if ( ((unsigned __int8)IsUseOldMaster & 1) != 0 )
    {
      if ( !v22 )
        goto LABEL_55;
      if ( v22->fields.isFixNpc
        && v22->fields.isFollower
        && !isNpcEditablePos
        && !v22->fields.isMyServantOrNpcRestriction )
      {
        ++v19;
        goto LABEL_51;
      }
    }
LABEL_28:
    v26 = sub_1C715FC(DeckServantData_TypeInfo);
    DeckServantData___ctor((DeckServantData_o *)v26, 0);
    if ( !v26 )
      goto LABEL_55;
    *(_DWORD *)(v26 + 16) = v19 + 1;
    if ( !v22 )
      goto LABEL_55;
    userServantEntity = v22->fields.userServantEntity;
    if ( userServantEntity )
    {
      v28 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v49[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v49[1].fields.fakeValue = v28;
    }
    else
    {
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v49, 0, 0);
      v49[1] = v49[0];
    }
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v48 = v49[1];
    *(_QWORD *)(v26 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v48, 0);
    *(_BYTE *)(v26 + 56) = v22->fields.isFollower;
    EquipList = PartyOrganizationListViewItem__GetEquipList(v22, 0);
    *(_QWORD *)(v26 + 40) = EquipList;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v26 + 40), (int32_t)EquipList, v30, v31, v32, v33, v34, v35);
    InitPos_k__BackingField = v22->fields._InitPos_k__BackingField;
    *(_QWORD *)(v26 + 64) = 0;
    *(_DWORD *)(v26 + 76) = InitPos_k__BackingField;
    if ( *(_QWORD *)(v26 + 24) )
    {
      v37 = 0;
LABEL_43:
      if ( (isNpcEditablePos & v37 & 1) != 0 )
      {
        *(_QWORD *)(v26 + 64) = v22->fields.npcFollowerSvtId;
        if ( v22->fields.isFixNpc )
          *(_BYTE *)(v26 + 56) = 0;
      }
      goto LABEL_46;
    }
    if ( !v22->fields.isMyServantOrNpcRestriction || !v22->fields.isFollower )
    {
      v37 = !v22->fields.isMyServantOrNpcRestriction;
      goto LABEL_43;
    }
    *(_QWORD *)(v26 + 64) = v22->fields.npcFollowerSvtId;
LABEL_46:
    *(_DWORD *)(v26 + 80) = v22->fields._EquipFriendShipSkillChange_k__BackingField;
    if ( !*(_QWORD *)v11 )
      goto LABEL_55;
    v38 = *(unsigned int **)(*(_QWORD *)v11 + 16LL);
    if ( !v38 )
      goto LABEL_55;
    IsUseOldMaster = (NetworkManager_c *)sub_1C714EC(v26, *(_QWORD *)(*(_QWORD *)v38 + 64LL));
    if ( !IsUseOldMaster )
    {
      v47 = sub_1C7162C();
      sub_1C714D8(v47, 0);
    }
    if ( v19 >= v38[6] )
LABEL_56:
      sub_1C71610(IsUseOldMaster);
    v45 = &v38[2 * v19];
    *((_QWORD *)v45 + 4) = v26;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v45 + 8), v26, v39, v40, v41, v42, v43, v44);
    ++v19;
LABEL_51:
    v18 = this->fields.memberList;
    if ( !v18 )
      goto LABEL_55;
  }
}


int32_t PartyListViewItem__GetUserServantDeployIndex(
        PartyListViewItem_o *this,
        UserServantEntity_array *userServantList,
        System_Int64_array *npcSvtIds,
        const MethodInfo *method)
{
  BalanceConfig_c *v6; // x0
  unsigned __int64 i; // x21

  if ( (byte_4CC2CA8 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC2CA8 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= v6->static_fields->DeckMemberMax )
      break;
    if ( !userServantList )
      goto LABEL_16;
    if ( i >= LODWORD(userServantList->max_length) )
      goto LABEL_17;
    if ( !userServantList->m_Items[i] )
    {
      if ( !npcSvtIds )
LABEL_16:
        sub_1C71608(v6, userServantList);
      if ( i >= LODWORD(npcSvtIds->max_length) )
LABEL_17:
        sub_1C71610(v6);
      if ( !npcSvtIds->m_Items[i] )
        return i;
    }
  }
  LODWORD(i) = -1;
  return i;
}


System_Int32_array *PartyListViewItem__GetWaveBattleEnemyClassIds(
        PartyListViewItem_o *this,
        bool isTrendDisp,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 184;
  if ( isTrendDisp )
    v3 = 192;
  return *(System_Int32_array **)((char *)&this->klass + v3);
}


System_Collections_Generic_Dictionary_int__int__o *PartyListViewItem__GetWearerMember(
        PartyListViewItem_o *this,
        int64_t userSvtId,
        int32_t memberIndex,
        int32_t editEquipIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v9; // x22
  System_Int64_array *EquipList; // x0
  __int64 v11; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t v13; // w23
  __int64 v14; // x27
  int32_t max_length; // w9
  il2cpp_array_size_t v16; // x8
  System_Int64_array *v17; // x24
  unsigned __int64 v18; // x25
  int64_t v19; // x8

  if ( (byte_4CC2CC3 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int__TryAdd__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    byte_4CC2CC3 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v9,
    (const MethodInfo_3458E18 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( userSvtId >= 1 )
  {
    memberList = this->fields.memberList;
    if ( !memberList )
LABEL_21:
      sub_1C71608(EquipList, v11);
    v13 = 0;
    v14 = (unsigned int)editEquipIndex;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( v13 >= max_length )
        break;
      if ( v13 >= (unsigned int)max_length )
LABEL_23:
        sub_1C71610(EquipList);
      EquipList = (System_Int64_array *)memberList->m_Items[v13];
      if ( EquipList )
      {
        EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)EquipList, 0);
        if ( EquipList )
        {
          v16 = EquipList->max_length;
          v17 = EquipList;
          if ( (int)v16 >= 1 )
          {
            v18 = 0;
            do
            {
              if ( v13 != memberIndex || v14 != v18 )
              {
                if ( v18 >= (unsigned int)v16 )
                  goto LABEL_23;
                v19 = v17->m_Items[v18];
                if ( v19 )
                {
                  if ( v19 == userSvtId )
                  {
                    if ( !v9 )
                      goto LABEL_21;
                    EquipList = (System_Int64_array *)System_Collections_Generic_Dictionary_int__int___TryAdd(
                                                        v9,
                                                        v13,
                                                        v18,
                                                        (const MethodInfo_345AEDC *)Method_System_Collections_Generic_Dictionary_int__int__TryAdd__);
                  }
                }
              }
              LODWORD(v16) = v17->max_length;
              ++v18;
            }
            while ( (__int64)v18 < (int)v16 );
          }
          memberList = this->fields.memberList;
          ++v13;
          if ( memberList )
            continue;
        }
      }
      goto LABEL_21;
    }
  }
  return v9;
}


bool PartyListViewItem__IsDeckEmpty(PartyListViewItem_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t v4; // w9
  int32_t v5; // w21
  int32_t DeckMemberMax; // w8
  struct PartyOrganizationListViewItem_array *memberList; // x9
  PartyOrganizationListViewItem_o *v8; // x9
  struct UserServantEntity_o *userServantEntity; // x10

  if ( (byte_4CC2CB7 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC2CB7 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  v4 = 0;
  do
  {
    v5 = v4;
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BalanceConfig_TypeInfo;
    }
    DeckMemberMax = v3->static_fields->DeckMemberMax;
    if ( v5 >= DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_12;
    if ( (unsigned int)v5 >= LODWORD(memberList->max_length) )
      sub_1C71610(v3);
    v8 = memberList->m_Items[v5];
    if ( !v8 )
LABEL_12:
      sub_1C71608(v3, method);
    userServantEntity = v8->fields.userServantEntity;
    v4 = v5 + 1;
  }
  while ( !userServantEntity );
  return v5 >= DeckMemberMax;
}


bool PartyListViewItem__IsDeckInit(PartyListViewItem_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  int32_t i; // w21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v6; // x8
  System_String_o *deckName; // x20
  System_String_o *DefaultDeckName; // x1

  if ( (byte_4CC2CB6 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC2CB6 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BalanceConfig_TypeInfo;
    }
    if ( i >= v3->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_15;
    if ( (unsigned int)i >= LODWORD(memberList->max_length) )
      sub_1C71610(v3);
    v6 = memberList->m_Items[i];
    if ( !v6 )
LABEL_15:
      sub_1C71608(v3, method);
    if ( v6->fields.userServantEntity )
      return 0;
  }
  if ( this->fields.isDeckNameDefault )
    return 1;
  deckName = this->fields.deckName;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, method);
  return System_String__op_Equality(deckName, DefaultDeckName, 0);
}


bool PartyListViewItem__IsDuplicateEventBonus(PartyListViewItem_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  signed __int64 i; // x21
  signed __int64 DeckMemberMax; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x9
  PartyOrganizationListViewItem_o *v7; // x9

  if ( (byte_4CC2CCF & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC2CCF = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BalanceConfig_TypeInfo;
    }
    DeckMemberMax = v3->static_fields->DeckMemberMax;
    if ( i >= DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      sub_1C71608(v3, method);
    if ( i >= (unsigned __int64)LODWORD(memberList->max_length) )
      sub_1C71610(v3);
    v7 = memberList->m_Items[i];
    if ( v7 )
    {
      if ( v7->fields._IsDuplicateBonus_k__BackingField )
        break;
    }
  }
  return i < DeckMemberMax;
}


bool PartyListViewItem__IsEquipEmpty(PartyListViewItem_o *this, const MethodInfo *method)
{
  unsigned int v3; // w8
  PartyOrganizationListViewItem_o *v4; // x0
  unsigned int v5; // w21
  int totalCostRestrictionEntity_high; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int64_t EquipUserSvtId; // x0

  if ( (byte_4CC2CB8 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC2CB8 = 1;
  }
  v3 = 0;
  do
  {
    v4 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    v5 = v3;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v4 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    totalCostRestrictionEntity_high = HIDWORD(v4->fields.questRestrictionInfo->fields.totalCostRestrictionEntity);
    if ( (int)v5 >= totalCostRestrictionEntity_high )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_12;
    if ( v5 >= LODWORD(memberList->max_length) )
      sub_1C71610(v4);
    v4 = memberList->m_Items[v5];
    if ( !v4 )
LABEL_12:
      sub_1C71608(v4, method);
    EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v4, 0);
    v3 = v5 + 1;
  }
  while ( EquipUserSvtId <= 0 );
  return (int)v5 >= totalCostRestrictionEntity_high;
}


// local variable allocation has failed, the output may be wrong!
bool PartyListViewItem__IsIdenticalEquipMember(PartyListViewItem_o *this, int32_t svtId, const MethodInfo *method)
{
  PartyListViewItem_o *v4; // x20
  struct PartyOrganizationListViewItem_array *memberList; // x22
  int max_length; // w8
  unsigned int v7; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  bool v9; // zf

  v4 = this;
  if ( (byte_4CC2CC6 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC2CC6 = 1;
  }
  if ( svtId >= 1 )
  {
    memberList = v4->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    max_length = memberList->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( v7 >= max_length )
          sub_1C71610(this);
        this = (PartyListViewItem_o *)memberList->m_Items[v7];
        if ( !this )
          break;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)this, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(EquipSvtId, 0) == svtId;
        this = (PartyListViewItem_o *)v9;
        if ( !v9 )
        {
          max_length = memberList->max_length;
          if ( (int)++v7 < max_length )
            continue;
        }
        return (char)this;
      }
LABEL_17:
      sub_1C71608(this, *(_QWORD *)&svtId);
    }
  }
  LOBYTE(this) = 0;
  return (char)this;
}


bool PartyListViewItem__IsNeedDeckPosReset(
        PartyListViewItem_o *this,
        UserEventDeckEntity_o *deck,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  System_Object_array *v6; // x21
  struct QuestRestrictionInfo_o *v7; // x8
  struct QuestRestrictionInfo_o *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *QuestFollowerList; // x21
  PartyListViewItem___c_c *v10; // x8
  System_Func_object__bool__o *_9__33_0; // x22
  Il2CppObject *v12; // x23
  struct PartyListViewItem___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  bool IsUseOldMaster; // w22
  signed __int64 i; // x29
  BalanceConfig_c *v23; // x0
  signed __int64 DeckMemberMax; // x26
  __int64 v25; // x24
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v34; // x1
  __int64 v35; // x23
  System_Func_object__bool__o *v36; // x25

  if ( (byte_4CC2CA7 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_BasicHelper_Any_FollowerInfo____78639672);
    sub_1C713B0(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_1C713B0(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_1C713B0(&Method_PartyListViewItem___c__IsNeedDeckPosReset_b__33_0__);
    sub_1C713B0(&Method_PartyListViewItem___c__DisplayClass33_0__IsNeedDeckPosReset_b__1__);
    sub_1C713B0(&PartyListViewItem___c__DisplayClass33_0_TypeInfo);
    sub_1C713B0(&PartyListViewItem___c_TypeInfo);
    byte_4CC2CA7 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_46;
  questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsNpcMulitipleOrOnly(questRestrictionInfo, 0);
  v6 = 0;
  if ( ((unsigned __int8)questRestrictionInfo & 1) == 0 )
    goto LABEL_19;
  v7 = this->fields.questRestrictionInfo;
  if ( !v7 )
    goto LABEL_46;
  if ( v7->fields.isNpcEditablePos )
  {
    v6 = 0;
    goto LABEL_19;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  questRestrictionInfo = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v8 = this->fields.questRestrictionInfo;
  if ( !v8 || !questRestrictionInfo )
LABEL_46:
    sub_1C71608(questRestrictionInfo, deck);
  QuestFollowerList = (System_Collections_Generic_IEnumerable_TSource__o *)NpcFollowerMaster__GetQuestFollowerList(
                                                                             (NpcFollowerMaster_o *)questRestrictionInfo,
                                                                             v8->fields.questId,
                                                                             v8->fields.questPhase,
                                                                             0);
  v10 = PartyListViewItem___c_TypeInfo;
  if ( !PartyListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyListViewItem___c_TypeInfo);
    v10 = PartyListViewItem___c_TypeInfo;
  }
  _9__33_0 = (System_Func_object__bool__o *)v10->static_fields->__9__33_0;
  if ( !_9__33_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = PartyListViewItem___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__33_0 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_FollowerInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__33_0, v12, Method_PartyListViewItem___c__IsNeedDeckPosReset_b__33_0__, 0);
    static_fields = PartyListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__33_0 = (struct System_Func_FollowerInfo__bool__o *)_9__33_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__33_0,
      (int32_t)_9__33_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = System_Linq_Enumerable__Where_object_(
          QuestFollowerList,
          (System_Func_TSource__bool__o *)_9__33_0,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
  v6 = System_Linq_Enumerable__ToArray_object_(
         v20,
         (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
LABEL_19:
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_46;
  IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
  for ( i = 0; ; ++i )
  {
    v23 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    DeckMemberMax = v23->static_fields->DeckMemberMax;
    if ( i >= DeckMemberMax )
      break;
    v25 = sub_1C715FC(PartyListViewItem___c__DisplayClass33_0_TypeInfo);
    PartyListViewItem___c__DisplayClass33_0___ctor((PartyListViewItem___c__DisplayClass33_0_o *)v25, 0);
    if ( !deck )
      goto LABEL_46;
    deckInfo = deck->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_46;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_46;
    if ( i >= (unsigned __int64)LODWORD(svts->max_length) )
      sub_1C71610(questRestrictionInfo);
    if ( !v25 )
      goto LABEL_46;
    v34 = svts->m_Items[i];
    *(_QWORD *)(v25 + 16) = v34;
    v35 = v25 + 16;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v25 + 16), (int32_t)v34, v26, v27, v28, v29, v30, v31);
    if ( IsUseOldMaster )
    {
      if ( !v6
        || (v36 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_FollowerInfo__bool__TypeInfo),
            System_Func_object__bool____ctor(
              v36,
              (Il2CppObject *)v25,
              Method_PartyListViewItem___c__DisplayClass33_0__IsNeedDeckPosReset_b__1__,
              0),
            questRestrictionInfo = (QuestRestrictionInfo_o *)BasicHelper__Any_object__51593856(
                                                               v6,
                                                               (System_Func_T__bool__o *)v36,
                                                               (const MethodInfo_3134280 *)Method_BasicHelper_Any_FollowerInfo____78639672),
            ((unsigned __int8)questRestrictionInfo & 1) != 0) )
      {
        if ( !*(_QWORD *)v35 )
          goto LABEL_46;
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_46;
        questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_43733304(
                                                           questRestrictionInfo,
                                                           *(_DWORD *)(*(_QWORD *)v35 + 76LL),
                                                           0);
        if ( ((unsigned __int8)questRestrictionInfo & 1) == 0 )
          continue;
        if ( !*(_QWORD *)v35 )
          goto LABEL_46;
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_46;
        questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsGrandServantRestriction(
                                                           questRestrictionInfo,
                                                           *(_DWORD *)(*(_QWORD *)v35 + 76LL),
                                                           0);
        if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
          continue;
      }
    }
    else
    {
      if ( !*(_QWORD *)v35 )
        goto LABEL_46;
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_46;
      questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsEditablePos(
                                                         questRestrictionInfo,
                                                         *(_DWORD *)(*(_QWORD *)v35 + 76LL),
                                                         0);
      if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
        continue;
    }
    if ( !*(_QWORD *)v35 )
      goto LABEL_46;
    if ( *(_DWORD *)(*(_QWORD *)v35 + 76LL) != *(_DWORD *)(*(_QWORD *)v35 + 16LL) )
      return i < DeckMemberMax;
  }
  return i < DeckMemberMax;
}


bool PartyListViewItem__IsSpecificMenuKind(PartyListViewItem_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    LOBYTE(questRestrictionInfo) = questRestrictionInfo->fields.eventDeckNum > 0;
  return (unsigned __int8)questRestrictionInfo | ((unsigned int)(this->fields.menuKind - 1) < 7);
}


bool PartyListViewItem__IsSpecificMenuKind_34290120(int32_t menuKind, bool isEventDeck, const MethodInfo *method)
{
  return (unsigned int)(menuKind - 1) < 7 || isEventDeck;
}


bool PartyListViewItem__IsSupportOnly(PartyListViewItem_o *this, const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    LOBYTE(questRestrictionInfo) = QuestRestrictionInfo__IsSupportOnly(questRestrictionInfo, 0);
  return (char)questRestrictionInfo;
}


void PartyListViewItem__LeaderOnly(PartyListViewItem_o *this, const MethodInfo *method)
{
  int32_t i; // w21
  PartyOrganizationListViewItem_o *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  il2cpp_array_size_t max_length; // x9
  const MethodInfo *v7; // x1

  if ( (byte_4CC2CB5 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC2CB5 = 1;
  }
  for ( i = 1; ; ++i )
  {
    v4 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_16;
    max_length = memberList->max_length;
    if ( i >= BalanceConfig_TypeInfo->static_fields->DeckMemberMax )
      break;
    if ( i >= (unsigned int)max_length )
      goto LABEL_17;
    v4 = memberList->m_Items[i];
    if ( !v4 )
      goto LABEL_16;
    if ( !v4->fields.isFollower )
      PartyOrganizationListViewItem__Empty(v4, 0);
  }
  if ( !(_DWORD)max_length )
LABEL_17:
    sub_1C71610(v4);
  v4 = memberList->m_Items[0];
  if ( !v4 )
LABEL_16:
    sub_1C71608(v4, method);
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v4, 0);
  PartyListViewItem__CheckRestriction(this, v7);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewItem__Modify(PartyListViewItem_o *this, bool otherValidEventIdFilter, const MethodInfo *method)
{
  int32_t v5; // w8
  int i; // w23
  BalanceConfig_c *v7; // x0
  int32_t v8; // w21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v10; // x8
  PartyOrganizationListViewItem_o *v11; // x21
  PartyOrganizationListViewItem_o *v12; // x0
  int32_t cost; // w24
  const MethodInfo *v14; // x2

  if ( (byte_4CC2CAD & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC2CAD = 1;
  }
  v5 = 0;
  for ( i = 1; ; ++i )
  {
    this->fields.cost = v5;
    v7 = BalanceConfig_TypeInfo;
    v8 = i - 1;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v7 = BalanceConfig_TypeInfo;
    }
    if ( v8 >= v7->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_12;
    if ( (unsigned int)v8 >= LODWORD(memberList->max_length) )
      sub_1C71610(v7);
    v10 = &memberList->obj.klass + v8;
    v11 = (PartyOrganizationListViewItem_o *)v10[4];
    if ( !v11 )
LABEL_12:
      sub_1C71608(v7, otherValidEventIdFilter);
    v12 = (PartyOrganizationListViewItem_o *)v10[4];
    v11->fields._NowPos_k__BackingField = i;
    PartyOrganizationListViewItem__Modify(v12, 0);
    cost = this->fields.cost;
    v5 = PartyOrganizationListViewItem__get_MargeCost(v11, 0) + cost;
  }
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)otherValidEventIdFilter);
  PartyListViewItem__UpdateEventEffect(this, otherValidEventIdFilter, v14);
}


void PartyListViewItem__Set(PartyListViewItem_o *this, PartyListViewItem_o *item, const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct EventUpValSetupInfo_o *setupInfo; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int v27; // w23
  unsigned int v28; // w24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v30; // x26
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  PartyOrganizationListViewItem_o *v37; // x21
  Il2CppClass **v38; // x0
  struct PartyOrganizationListViewItem_array *v39; // x8
  PartyOrganizationListViewItem_o *v40; // x8
  struct System_String_o *deckName; // x1
  struct System_Int32_array *waveBattleEnemyClassIds; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  struct System_Int32_array *trendDispWaveBattleEnemyClassIds; // x1
  struct System_Int32_array **p_trendDispWaveBattleEnemyClassIds; // x20
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  __int64 v57; // x0

  if ( (byte_4CC2CAE & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC2CAE = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0);
  if ( !item )
LABEL_20:
    sub_1C71608(v5, v6);
  *(_QWORD *)&this->fields.menuKind = *(_QWORD *)&item->fields.menuKind;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v7, v8, v9, v10, v11, v12);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v27 = 1;
  this->fields.id = item->fields.id;
  while ( 1 )
  {
    v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    v28 = v27 - 1;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v28 >= SHIDWORD(v5->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
      break;
    memberList = item->fields.memberList;
    if ( !memberList )
      goto LABEL_20;
    if ( v28 >= LODWORD(memberList->max_length) )
      goto LABEL_21;
    v5 = memberList->m_Items[v28];
    if ( !v5 )
      goto LABEL_20;
    v30 = this->fields.memberList;
    v5 = PartyOrganizationListViewItem__Clone(v5, -1, 0);
    if ( !v30 )
      goto LABEL_20;
    v37 = v5;
    if ( v5 )
    {
      v5 = (PartyOrganizationListViewItem_o *)sub_1C714EC(v5, v30->obj.klass->_1.element_class);
      if ( !v5 )
      {
        v57 = sub_1C7162C();
        sub_1C714D8(v57, 0);
      }
    }
    if ( v28 >= LODWORD(v30->max_length) )
      goto LABEL_21;
    v38 = &v30->obj.klass + (int)v28;
    v38[4] = (Il2CppClass *)v37;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v38 + 4), (int32_t)v37, v31, v32, v33, v34, v35, v36);
    v39 = this->fields.memberList;
    if ( !v39 )
      goto LABEL_20;
    if ( v28 >= LODWORD(v39->max_length) )
LABEL_21:
      sub_1C71610(v5);
    v40 = v39->m_Items[v28];
    if ( !v40 )
      goto LABEL_20;
    v40->fields._NowPos_k__BackingField = v27++;
  }
  this->fields.cost = item->fields.cost;
  this->fields.isDeckNameDefault = item->fields.isDeckNameDefault;
  deckName = item->fields.deckName;
  this->fields.deckName = deckName;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.deckName, (int32_t)deckName, v21, v22, v23, v24, v25, v26);
  this->fields.userEquipId = item->fields.userEquipId;
  waveBattleEnemyClassIds = item->fields.waveBattleEnemyClassIds;
  this->fields.waveBattleEnemyClassIds = waveBattleEnemyClassIds;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.waveBattleEnemyClassIds,
    (int32_t)waveBattleEnemyClassIds,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  trendDispWaveBattleEnemyClassIds = item->fields.trendDispWaveBattleEnemyClassIds;
  this->fields.trendDispWaveBattleEnemyClassIds = trendDispWaveBattleEnemyClassIds;
  p_trendDispWaveBattleEnemyClassIds = &this->fields.trendDispWaveBattleEnemyClassIds;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)p_trendDispWaveBattleEnemyClassIds,
    (int32_t)trendDispWaveBattleEnemyClassIds,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  *((_BYTE *)p_trendDispWaveBattleEnemyClassIds + 8) = item->fields._IsWaveBattleRestart_k__BackingField;
  *((_BYTE *)p_trendDispWaveBattleEnemyClassIds + 9) = item->fields._IsClearedWave_k__BackingField;
}


void PartyListViewItem__SetDeckName(PartyListViewItem_o *this, System_String_o *name, const MethodInfo *method)
{
  struct System_String_o *v3; // x20
  const MethodInfo *v5; // x1
  System_String_o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_String_o *DefaultDeckName; // x0
  struct System_String_o **p_deckName; // x19

  v3 = name;
  if ( System_String__IsNullOrEmpty(name, 0)
    || (v6 = PartyListViewItem__get_DefaultDeckName(this, v5), System_String__op_Equality(v3, v6, 0)) )
  {
    this->fields.isDeckNameDefault = 1;
    DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v5);
    LODWORD(v3) = (_DWORD)DefaultDeckName;
    this->fields.deckName = DefaultDeckName;
    p_deckName = &this->fields.deckName;
  }
  else
  {
    this->fields.deckName = v3;
    p_deckName = &this->fields.deckName;
    *((_BYTE *)p_deckName - 4) = 0;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_deckName, (int32_t)v3, v7, v8, v9, v10, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewItem__SetEquip(
        PartyListViewItem_o *this,
        int32_t num,
        int64_t userSvtId,
        int32_t equipFrameIndex,
        const MethodInfo *method)
{
  int32_t i; // w24
  BalanceConfig_c *v10; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v12; // x8
  PartyOrganizationListViewItem_o *v13; // x23
  int32_t cost; // w26
  int32_t v15; // w26
  int32_t v16; // w8

  if ( (byte_4CC2CAF & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC2CAF = 1;
  }
  for ( i = 0; ; ++i )
  {
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    if ( i >= v10->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_15;
    if ( (unsigned int)i >= LODWORD(memberList->max_length) )
      sub_1C71610(v10);
    v12 = &memberList->obj.klass + i;
    v13 = (PartyOrganizationListViewItem_o *)v12[4];
    if ( !v13 )
LABEL_15:
      sub_1C71608(v10, *(_QWORD *)&num);
    cost = this->fields.cost;
    if ( num == i )
    {
      this->fields.cost = cost
                        - PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)v12[4], 0);
      PartyOrganizationListViewItem__SetEquipUserServantId(v13, userSvtId, equipFrameIndex, 0);
      v15 = this->fields.cost;
      v16 = PartyOrganizationListViewItem__get_MargeCost(v13, 0) + v15;
    }
    else
    {
      v16 = cost
          - PartyOrganizationListViewItem__RemoveEquipUserServantId(
              (PartyOrganizationListViewItem_o *)v12[4],
              userSvtId,
              0);
    }
    this->fields.cost = v16;
  }
  PartyListViewItem__CheckRestriction(this, *(const MethodInfo **)&num);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewItem__SetEquipRemoveIncludeSelf(
        PartyListViewItem_o *this,
        int32_t num,
        int64_t userSvtId,
        int32_t equipFrameIndex,
        const MethodInfo *method)
{
  int32_t i; // w24
  BalanceConfig_c *v10; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v12; // x8
  PartyOrganizationListViewItem_o *v13; // x23
  int32_t cost; // w26
  int32_t v15; // w26
  int32_t v16; // w26

  if ( (byte_4CC2CB0 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    byte_4CC2CB0 = 1;
  }
  for ( i = 0; ; ++i )
  {
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    if ( i >= v10->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_14;
    if ( (unsigned int)i >= LODWORD(memberList->max_length) )
      sub_1C71610(v10);
    v12 = &memberList->obj.klass + i;
    v13 = (PartyOrganizationListViewItem_o *)v12[4];
    if ( !v13 )
LABEL_14:
      sub_1C71608(v10, *(_QWORD *)&num);
    cost = this->fields.cost;
    v15 = cost
        - PartyOrganizationListViewItem__RemoveEquipUserServantId(
            (PartyOrganizationListViewItem_o *)v12[4],
            userSvtId,
            0);
    this->fields.cost = v15;
    if ( num == i )
    {
      this->fields.cost = v15 - PartyOrganizationListViewItem__get_MargeCost(v13, 0);
      PartyOrganizationListViewItem__SetEquipUserServantId(v13, userSvtId, equipFrameIndex, 0);
      v16 = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v13, 0) + v16;
    }
  }
  PartyListViewItem__CheckRestriction(this, *(const MethodInfo **)&num);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewItem__SetEquipUserSvtIds(
        PartyListViewItem_o *this,
        int32_t num,
        System_Int64_array *equipUserSvtIds,
        int32_t isChangeFriendShipSkill,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v7; // x19
  int32_t cost; // w24
  struct PartyOrganizationListViewItem_array *v11; // x8
  struct PartyOrganizationListViewItem_array *v12; // x8
  int32_t v13; // w20

  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_11;
  if ( LODWORD(memberList->max_length) <= num )
    goto LABEL_12;
  v7 = this;
  this = (PartyListViewItem_o *)memberList->m_Items[num];
  if ( !this )
    goto LABEL_11;
  cost = v7->fields.cost;
  this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0);
  v11 = v7->fields.memberList;
  v7->fields.cost = cost - (_DWORD)this;
  if ( !v11 )
    goto LABEL_11;
  if ( LODWORD(v11->max_length) <= num )
    goto LABEL_12;
  this = (PartyListViewItem_o *)v11->m_Items[num];
  if ( !this
    || (PartyOrganizationListViewItem__SetEquipUserServantIdList(
          (PartyOrganizationListViewItem_o *)this,
          equipUserSvtIds,
          0),
        (v12 = v7->fields.memberList) == 0) )
  {
LABEL_11:
    sub_1C71608(this, *(_QWORD *)&num);
  }
  if ( LODWORD(v12->max_length) <= num )
LABEL_12:
    sub_1C71610(this);
  this = (PartyListViewItem_o *)v12->m_Items[num];
  if ( !this )
    goto LABEL_11;
  LODWORD(this->fields.userEquipId) = isChangeFriendShipSkill;
  v13 = v7->fields.cost;
  v7->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0) + v13;
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewItem__SetGrandServant(
        PartyListViewItem_o *this,
        int32_t initPos,
        bool isMyServantOrSupport,
        UserServantEntity_o **userServantEntity,
        System_Int64_array **equipIdList,
        int32_t *isChangeFriendShipSvtEquipSkill,
        const MethodInfo *method)
{
  UserServantEntity_o *v13; // x25
  UserServantGrandMaster_o *Master_object; // x0
  UserServantEntity_o *v15; // x8
  UserServantGrandMaster_o *v16; // x22
  __int64 v17; // x23
  __int64 v18; // x24
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  UserServantEntity_o *v25; // x8
  __int128 v26; // q1
  UserServantGrandMaster_o *v27; // x22
  __int64 v28; // x19
  Il2CppObject *Entity; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  RestrictionEntity_o *GrandServantRestrictionEntity; // x0
  const MethodInfo *v37; // x5
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  UserServantEntity_o *v44; // x8
  __int64 v45; // x21
  __int64 v46; // x22
  int32_t v47; // w21
  int32_t v48; // w1
  BalanceConfig_c *v49; // x0
  System_Int64_array *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+20h] [xbp-70h]
  int32_t isChangeFriendShipSvtEquipSkilla; // [xsp+44h] [xbp-4Ch] BYREF
  System_Int64_array *equipIdLista; // [xsp+48h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_4CC2CBB & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C713B0(&long___TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CC2CBB = 1;
  }
  equipIdLista = 0;
  isChangeFriendShipSvtEquipSkilla = 0;
  v13 = *userServantEntity;
  if ( isMyServantOrSupport )
  {
    if ( v13 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (UserServantGrandMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
      v15 = *userServantEntity;
      if ( !*userServantEntity )
        goto LABEL_33;
      v16 = Master_object;
      v18 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v61.fields.currentCryptoKey = v18;
      *(_QWORD *)&v61.fields.fakeValue = v17;
      Master_object = (UserServantGrandMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(
                                                    v61,
                                                    0);
      if ( !v16 )
        goto LABEL_33;
      Master_object = (UserServantGrandMaster_o *)UserServantGrandMaster__GetEntityFromSvtId(
                                                    v16,
                                                    (int32_t)Master_object,
                                                    0);
      if ( Master_object )
      {
        v25 = *userServantEntity;
        if ( !*userServantEntity )
          goto LABEL_33;
        v26 = *(_OWORD *)&v25->fields.id.fields.fakeValue;
        v27 = Master_object;
        v28 = *(_QWORD *)&Master_object->fields.revision;
        *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&v25->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v58.fields.fakeValue = v26;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v57 = v58;
        if ( v28 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v57, 0) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = (UserServantGrandMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantMaster___);
          if ( Master_object )
          {
            Entity = DataMasterBase_object__object__long___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                       *(_QWORD *)&v27->fields.revision,
                       (const MethodInfo_340B3DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            *userServantEntity = (UserServantEntity_o *)Entity;
            sub_1C71354((GrandQuestFolderBoardItem_o *)userServantEntity, (int32_t)Entity, v30, v31, v32, v33, v34, v35);
            return;
          }
LABEL_33:
          sub_1C71608(Master_object, *(_QWORD *)&initPos);
        }
      }
      else
      {
        *userServantEntity = 0;
        sub_1C71354((GrandQuestFolderBoardItem_o *)userServantEntity, 0, v19, v20, v21, v22, v23, v24);
        v49 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v49 = BalanceConfig_TypeInfo;
        }
        v50 = (System_Int64_array *)sub_1C71458(long___TypeInfo, (unsigned int)v49->static_fields->GrandSvtEquipMax);
        *equipIdList = v50;
        sub_1C71354((GrandQuestFolderBoardItem_o *)equipIdList, (int32_t)v50, v51, v52, v53, v54, v55, v56);
        *isChangeFriendShipSvtEquipSkill = 0;
      }
    }
  }
  else
  {
    Master_object = (UserServantGrandMaster_o *)this->fields.questRestrictionInfo;
    if ( !Master_object )
      goto LABEL_33;
    GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                      (QuestRestrictionInfo_o *)Master_object,
                                      initPos,
                                      0);
    PartyListViewItem__GetGrandServantInfo(
      this,
      GrandServantRestrictionEntity,
      userServantEntity,
      &equipIdLista,
      &isChangeFriendShipSvtEquipSkilla,
      v37);
    Master_object = (UserServantGrandMaster_o *)this->fields.questRestrictionInfo;
    if ( !Master_object )
      goto LABEL_33;
    if ( !QuestRestrictionInfo__IsIgnoreSyncEquipGrand((QuestRestrictionInfo_o *)Master_object, 0) )
      goto LABEL_28;
    if ( !v13 )
      goto LABEL_28;
    v44 = *userServantEntity;
    if ( !*userServantEntity )
      goto LABEL_28;
    v46 = *(_QWORD *)&v44->fields.svtId.fields.currentCryptoKey;
    v45 = *(_QWORD *)&v44->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v62.fields.currentCryptoKey = v46;
    *(_QWORD *)&v62.fields.fakeValue = v45;
    v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v62, 0);
    if ( v47 != CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v13->fields.svtId, 0) )
    {
LABEL_28:
      v48 = (int)equipIdLista;
      *equipIdList = equipIdLista;
      sub_1C71354((GrandQuestFolderBoardItem_o *)equipIdList, v48, v38, v39, v40, v41, v42, v43);
      *isChangeFriendShipSvtEquipSkill = isChangeFriendShipSvtEquipSkilla;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewItem__SetMember(
        PartyListViewItem_o *this,
        int32_t num,
        PartyServantListViewItem_o *item,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v6; // x19
  int32_t cost; // w23
  struct PartyOrganizationListViewItem_array *v9; // x8
  struct PartyOrganizationListViewItem_array *v10; // x8
  int32_t v11; // w20
  const MethodInfo *v12; // x1

  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_11;
  if ( LODWORD(memberList->max_length) <= num )
    goto LABEL_12;
  v6 = this;
  this = (PartyListViewItem_o *)memberList->m_Items[num];
  if ( !this )
    goto LABEL_11;
  cost = v6->fields.cost;
  this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0);
  v9 = v6->fields.memberList;
  v6->fields.cost = cost - (_DWORD)this;
  if ( !v9 )
    goto LABEL_11;
  if ( LODWORD(v9->max_length) <= num )
    goto LABEL_12;
  this = (PartyListViewItem_o *)v9->m_Items[num];
  if ( !this
    || (PartyOrganizationListViewItem__Modify_34489888((PartyOrganizationListViewItem_o *)this, item, 0),
        (v10 = v6->fields.memberList) == 0) )
  {
LABEL_11:
    sub_1C71608(this, *(_QWORD *)&num);
  }
  if ( LODWORD(v10->max_length) <= num )
LABEL_12:
    sub_1C71610(this);
  this = (PartyListViewItem_o *)v10->m_Items[num];
  if ( !this )
    goto LABEL_11;
  v11 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0) + v11;
  PartyListViewItem__CheckRestriction(v6, v12);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewItem__SetMember_34356352(
        PartyListViewItem_o *this,
        int32_t idx,
        PartyOrganizationListViewItem_o *member,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v6; // x19
  int32_t cost; // w24
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct PartyOrganizationListViewItem_array *v15; // x23
  Il2CppClass **v16; // x0
  struct PartyOrganizationListViewItem_array *v17; // x8
  struct PartyOrganizationListViewItem_array *v18; // x8
  int32_t v19; // w20
  __int64 v20; // x0

  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_17;
  if ( LODWORD(memberList->max_length) <= idx )
    goto LABEL_18;
  v6 = this;
  this = (PartyListViewItem_o *)memberList->m_Items[idx];
  if ( !this
    || (cost = v6->fields.cost,
        this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(
                                        (PartyOrganizationListViewItem_o *)this,
                                        0),
        v15 = v6->fields.memberList,
        v6->fields.cost = cost - (_DWORD)this,
        !v15) )
  {
LABEL_17:
    sub_1C71608(this, *(_QWORD *)&idx);
  }
  if ( member )
  {
    this = (PartyListViewItem_o *)sub_1C714EC(member, v15->obj.klass->_1.element_class);
    if ( !this )
    {
      v20 = sub_1C7162C();
      sub_1C714D8(v20, 0);
    }
  }
  if ( LODWORD(v15->max_length) <= idx )
    goto LABEL_18;
  v16 = &v15->obj.klass + idx;
  v16[4] = (Il2CppClass *)member;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v16 + 4), (int32_t)member, v9, v10, v11, v12, v13, v14);
  if ( v6->fields.menuKind == 9 )
  {
    v17 = v6->fields.memberList;
    if ( !v17 )
      goto LABEL_17;
    if ( LODWORD(v17->max_length) <= idx )
      goto LABEL_18;
    this = (PartyListViewItem_o *)v17->m_Items[idx];
    if ( !this )
      goto LABEL_17;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)this,
      v6->fields.waveBattleEnemyClassIds,
      0);
  }
  v18 = v6->fields.memberList;
  if ( !v18 )
    goto LABEL_17;
  if ( LODWORD(v18->max_length) <= idx )
LABEL_18:
    sub_1C71610(this);
  this = (PartyListViewItem_o *)v18->m_Items[idx];
  if ( !this )
    goto LABEL_17;
  v19 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0) + v19;
}


bool PartyListViewItem__SetNpcFollowerInfo(
        PartyListViewItem_o *this,
        FollowerInfo_o **follower,
        int32_t *followerClassId,
        FollowerInfo_array *npcFollowerInfoList,
        int64_t npcFollowerSvtId,
        int32_t pos,
        const MethodInfo *method)
{
  int max_length; // w8
  bool v9; // w29
  PartyListViewItem_o *v13; // x24
  int v14; // w19
  FollowerInfo_o *v15; // x25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w0
  struct QuestRestrictionInfo_o *v18; // x8
  ServantLeaderInfo_o *v19; // x26
  int32_t v20; // w0
  QuestRestrictionInfo_o *v21; // x28
  PartyListViewItem_o *v22; // x27
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  bool isWhole; // [xsp+Ch] [xbp-64h] BYREF

  isWhole = 0;
  if ( !npcFollowerInfoList )
LABEL_19:
    sub_1C71608(this, follower);
  max_length = npcFollowerInfoList->max_length;
  v9 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = this;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1C71610(this);
      v15 = npcFollowerInfoList->m_Items[v14];
      if ( !v15 )
        goto LABEL_19;
      if ( v15->fields.npcFollowerSvtId == npcFollowerSvtId )
      {
        questRestrictionInfo = v13->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_19;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0);
        this = (PartyListViewItem_o *)FollowerInfo__getServantLeaderInfo(v15, 0, ReturnTypeByQuestId, 0);
        v18 = v13->fields.questRestrictionInfo;
        if ( !v18 )
          goto LABEL_19;
        v19 = (ServantLeaderInfo_o *)this;
        v20 = FollowerInfo__GetReturnTypeByQuestId(v18->fields.questId, 0);
        this = (PartyListViewItem_o *)FollowerInfo__GetNpcServantIndividualityFull(v15, 0, v20, 0);
        if ( !v19 )
          goto LABEL_19;
        v21 = v13->fields.questRestrictionInfo;
        v22 = this;
        this = (PartyListViewItem_o *)ServantLeaderInfo__GetOverwriteStatus(v19, 0);
        if ( !this || !v21 )
          goto LABEL_19;
        this = (PartyListViewItem_o *)QuestRestrictionInfo__IsRestriction_43714332(
                                        v21,
                                        &isWhole,
                                        (System_Int32_array *)v22,
                                        this->fields.sortIndex,
                                        v19->fields.lv,
                                        pos,
                                        3,
                                        0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = (PartyListViewItem_o *)v13->fields.questRestrictionInfo;
          if ( !this )
            goto LABEL_19;
          this = (PartyListViewItem_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_43736492(
                                          (QuestRestrictionInfo_o *)this,
                                          (System_Int32_array *)v22,
                                          pos,
                                          0);
          if ( ((unsigned __int8)this & 1) == 0 )
            break;
        }
      }
      max_length = npcFollowerInfoList->max_length;
      v9 = ++v14 < max_length;
      if ( v14 >= max_length )
        return v9;
    }
    *follower = v15;
    sub_1C71354((GrandQuestFolderBoardItem_o *)follower, (int32_t)v15, v23, v24, v25, v26, v27, v28);
    *followerClassId = v19->fields.classId;
  }
  return v9;
}


void PartyListViewItem__SetNpcMember(
        PartyListViewItem_o *this,
        int32_t num,
        FollowerInfo_o *follower,
        int32_t initPos,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x27
  EventUpValSetupInfo_o *setupInfo; // x25
  QuestRestrictionInfo_o *questRestrictionInfo; // x26
  PartyOrganizationListViewItem_o *v16; // x24
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  Il2CppClass **v23; // x0
  const MethodInfo *v24; // x1
  __int64 v25; // x0

  if ( (byte_4CC2CB1 & 1) == 0 )
  {
    sub_1C713B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4CC2CB1 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance
    || (PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, initPos, follower, 0),
        memberList = this->fields.memberList,
        setupInfo = this->fields.setupInfo,
        questRestrictionInfo = this->fields.questRestrictionInfo,
        v16 = (PartyOrganizationListViewItem_o *)sub_1C715FC(PartyOrganizationListViewItem_TypeInfo),
        PartyOrganizationListViewItem___ctor_34444464(
          v16,
          num,
          follower,
          0,
          0,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          0,
          initPos,
          0,
          0),
        !memberList) )
  {
    sub_1C71608(Instance, v12);
  }
  if ( v16 )
  {
    Instance = (Il2CppObject *)sub_1C714EC(v16, memberList->obj.klass->_1.element_class);
    if ( !Instance )
    {
      v25 = sub_1C7162C();
      sub_1C714D8(v25, 0);
    }
  }
  if ( LODWORD(memberList->max_length) <= num )
    sub_1C71610(Instance);
  v23 = &memberList->obj.klass + num;
  v23[4] = (Il2CppClass *)v16;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v16, v17, v18, v19, v20, v21, v22);
  PartyListViewItem__CheckRestriction(this, v24);
}


void PartyListViewItem__SetUserEquip(PartyListViewItem_o *this, int64_t userEquipId, const MethodInfo *method)
{
  this->fields.userEquipId = userEquipId;
}


void PartyListViewItem__SwapMember(
        PartyListViewItem_o *this,
        int32_t num1,
        int32_t num2,
        bool notChangeInitPos,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8
  unsigned int max_length; // w9

  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_7;
  max_length = memberList->max_length;
  if ( max_length <= num1 || max_length <= num2 )
    sub_1C71610(this);
  this = (PartyListViewItem_o *)memberList->m_Items[num1];
  if ( !this )
LABEL_7:
    sub_1C71608(this, num1);
  PartyOrganizationListViewItem__Swap(
    (PartyOrganizationListViewItem_o *)this,
    memberList->m_Items[num2],
    notChangeInitPos,
    0);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewItem__UpdateEventEffect(
        PartyListViewItem_o *this,
        bool otherValidEventIdFilter,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x20
  int max_length; // w8
  unsigned int v5; // w21
  bool v6; // w19

  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_9;
  max_length = memberList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    v6 = otherValidEventIdFilter;
    while ( 1 )
    {
      if ( v5 >= max_length )
        sub_1C71610(this);
      this = (PartyListViewItem_o *)memberList->m_Items[v5];
      if ( !this )
        break;
      PartyOrganizationListViewItem__UpdateEventEffect((PartyOrganizationListViewItem_o *)this, v6, 0);
      max_length = memberList->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_1C71608(this, otherValidEventIdFilter);
  }
}


void PartyListViewItem__UpdateServantInfo(PartyListViewItem_o *this, const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x21
  int max_length; // w8
  PartyListViewItem_o *v4; // x19
  unsigned int v5; // w22
  Il2CppClass **v6; // x8
  PartyOrganizationListViewItem_o *v7; // x20
  int32_t cost; // w23

  memberList = this->fields.memberList;
  this->fields.cost = 0;
  if ( !memberList )
    goto LABEL_9;
  max_length = memberList->max_length;
  if ( max_length >= 1 )
  {
    v4 = this;
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
        sub_1C71610(this);
      v6 = &memberList->obj.klass + (int)v5;
      v7 = (PartyOrganizationListViewItem_o *)v6[4];
      if ( !v7 )
        break;
      PartyOrganizationListViewItem__UpdateServantInfo((PartyOrganizationListViewItem_o *)v6[4], 0);
      cost = v4->fields.cost;
      this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(v7, 0);
      v4->fields.cost = (_DWORD)this + cost;
      max_length = memberList->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_1C71608(this, method);
  }
}


int32_t PartyListViewItem__get_Cost(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.cost;
}


int64_t PartyListViewItem__get_DeckId(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *PartyListViewItem__get_DeckName(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.deckName;
}


int32_t PartyListViewItem__get_DeckNum(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.index + 1;
}


System_String_o *PartyListViewItem__get_DefaultDeckName(PartyListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CC2CC8 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_10262/*"PARTY_ORGANIZATION_NAME_BASE"*/);
    byte_4CC2CC8 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_10262/*"PARTY_ORGANIZATION_NAME_BASE"*/, 0);
  v6 = this->fields.index + 1;
  v4 = (Il2CppObject *)System_Int32__ToString((int32_t)&v6, 0);
  return System_String__Format(v3, v4, 0);
}


System_Int64_array *PartyListViewItem__get_DuplicatedEquipmentUserSvtIdList(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.duplicatedEquipmentUserSvtIdList;
}


bool PartyListViewItem__get_IsClearedWave(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsClearedWave_k__BackingField;
}


bool PartyListViewItem__get_IsWaveBattleRestart(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsWaveBattleRestart_k__BackingField;
}


int32_t PartyListViewItem__get_MaxCost(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.maxCost;
}


int64_t PartyListViewItem__get_UserEquipId(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.userEquipId;
}


void PartyListViewItem__set_IsClearedWave(PartyListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsClearedWave_k__BackingField = value;
}


void PartyListViewItem__set_IsWaveBattleRestart(PartyListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsWaveBattleRestart_k__BackingField = value;
}


void PartyListViewItem___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC2CD7 & 1) == 0 )
  {
    sub_1C713B0(&PartyListViewItem___c_TypeInfo);
    byte_4CC2CD7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(PartyListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PartyListViewItem___c_TypeInfo->static_fields->__9 = (struct PartyListViewItem___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)PartyListViewItem___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PartyListViewItem___c___ctor(PartyListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t PartyListViewItem___c___CheckAndUpdateDuplicationGrandQuestServant_b__114_0(
        PartyListViewItem___c_o *this,
        ServantEntity_o *e,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4CC2CDB & 1) == 0 )
  {
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC2CDB = 1;
  }
  if ( e )
  {
    v4 = *(_QWORD *)&e->fields.baseSvtId.fields.currentCryptoKey;
    v5 = *(_QWORD *)&e->fields.baseSvtId.fields.fakeValue;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(-1, 0);
    v4 = *(_QWORD *)&v6.fields.currentCryptoKey;
    v5 = *(_QWORD *)&v6.fields.fakeValue;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v8, 0);
}


int32_t PartyListViewItem___c___CheckDuplicationGrandQuestEquipment_b__110_0(
        PartyListViewItem___c_o *this,
        System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___o pair,
        const MethodInfo *method)
{
  int32_t Item1; // w19

  Item1 = pair.fields.value.fields.Item1;
  if ( (byte_4CC2CD8 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___get_Value__);
    byte_4CC2CD8 = 1;
  }
  return Item1;
}


bool PartyListViewItem___c___CheckDuplicationGrandQuestEquipment_b__110_1(
        PartyListViewItem___c_o *this,
        System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___o pair,
        const MethodInfo *method)
{
  struct System_ValueTuple_int__bool__o value; // x19

  value = pair.fields.value;
  if ( (byte_4CC2CD9 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___get_Value__);
    byte_4CC2CD9 = 1;
  }
  return HIDWORD(*(unsigned __int64 *)&value) & 1;
}


int64_t PartyListViewItem___c___CheckDuplicationGrandQuestEquipment_b__110_2(
        PartyListViewItem___c_o *this,
        System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___o pair,
        const MethodInfo *method)
{
  int64_t key; // x19

  key = pair.fields.key;
  if ( (byte_4CC2CDA & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___get_Key__);
    byte_4CC2CDA = 1;
  }
  return key;
}


bool PartyListViewItem___c___IsNeedDeckPosReset_b__33_0(
        PartyListViewItem___c_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.isFixedNpc;
}


void PartyListViewItem___c__DisplayClass111_0___ctor(
        PartyListViewItem___c__DisplayClass111_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *PartyListViewItem___c__DisplayClass111_0___GetGrandQuestDuplicationEquipmentNameList_b__0(
        PartyListViewItem___c__DisplayClass111_0_o *this,
        int64_t id,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *userServantMaster; // x0

  if ( (byte_4CC2CDC & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    byte_4CC2CDC = 1;
  }
  userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userServantMaster;
  if ( !userServantMaster
    || (userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                            userServantMaster,
                                                                            id,
                                                                            (const MethodInfo_340B3DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0 )
  {
    sub_1C71608(userServantMaster, id);
  }
  return UserServantEntity__GetSvtName((UserServantEntity_o *)userServantMaster, 0);
}


void PartyListViewItem___c__DisplayClass113_0___ctor(
        PartyListViewItem___c__DisplayClass113_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *PartyListViewItem___c__DisplayClass113_0___CheckDuplicationGrandServantEquipmentNameList_b__0(
        PartyListViewItem___c__DisplayClass113_0_o *this,
        int64_t id,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *userServantMaster; // x0

  if ( (byte_4CC2CDD & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    byte_4CC2CDD = 1;
  }
  userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userServantMaster;
  if ( !userServantMaster
    || (userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                            userServantMaster,
                                                                            id,
                                                                            (const MethodInfo_340B3DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0 )
  {
    sub_1C71608(userServantMaster, id);
  }
  return UserServantEntity__GetSvtName((UserServantEntity_o *)userServantMaster, 0);
}


void PartyListViewItem___c__DisplayClass31_0___ctor(
        PartyListViewItem___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyListViewItem___c__DisplayClass31_0____ctor_b__0(
        PartyListViewItem___c__DisplayClass31_0_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.npcFollowerSvtId == this->fields.npcSvtId;
}


void PartyListViewItem___c__DisplayClass31_1___ctor(
        PartyListViewItem___c__DisplayClass31_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyListViewItem___c__DisplayClass31_1____ctor_b__1(
        PartyListViewItem___c__DisplayClass31_1_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}


void PartyListViewItem___c__DisplayClass31_2___ctor(
        PartyListViewItem___c__DisplayClass31_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyListViewItem___c__DisplayClass31_2____ctor_b__2(
        PartyListViewItem___c__DisplayClass31_2_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}


void PartyListViewItem___c__DisplayClass31_3___ctor(
        PartyListViewItem___c__DisplayClass31_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyListViewItem___c__DisplayClass31_3____ctor_b__3(
        PartyListViewItem___c__DisplayClass31_3_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}


void PartyListViewItem___c__DisplayClass33_0___ctor(
        PartyListViewItem___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyListViewItem___c__DisplayClass33_0___IsNeedDeckPosReset_b__1(
        PartyListViewItem___c__DisplayClass33_0_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  struct DeckServantData_o *deckSvtData; // x8

  if ( !x || (deckSvtData = this->fields.deckSvtData) == 0 )
    sub_1C71608(this, x);
  return x->fields.npcInitIdx != deckSvtData->fields.initPos;
}


void PartyListViewItem___c__DisplayClass36_0___ctor(
        PartyListViewItem___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyListViewItem___c__DisplayClass36_0___GetFollowerIndex_b__0(
        PartyListViewItem___c__DisplayClass36_0_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.npcInitIdx == this->fields.chkIndex;
}


void PartyListViewItem___c__DisplayClass37_0___ctor(
        PartyListViewItem___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyListViewItem___c__DisplayClass37_0___GetSupportInitIndex_b__0(
        PartyListViewItem___c__DisplayClass37_0_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}


void PartyListViewItem___c__DisplayClass62_0___ctor(
        PartyListViewItem___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyListViewItem___c__DisplayClass62_0___GetGrandServantInfo_b__0(
        PartyListViewItem___c__DisplayClass62_0_o *this,
        int32_t classIndividuality,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *individuality; // x19
  System_Func_int__bool__o *v9; // x20

  if ( (byte_4CC2CDE & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_int____78639760);
    sub_1C713B0(&System_Func_int__bool__TypeInfo);
    sub_1C713B0(&Method_PartyListViewItem___c__DisplayClass62_1__GetGrandServantInfo_b__1__);
    sub_1C713B0(&PartyListViewItem___c__DisplayClass62_1_TypeInfo);
    byte_4CC2CDE = 1;
  }
  v5 = sub_1C715FC(PartyListViewItem___c__DisplayClass62_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_DWORD *)(v5 + 16) = classIndividuality;
  individuality = this->fields.individuality;
  v9 = (System_Func_int__bool__o *)sub_1C715FC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_PartyListViewItem___c__DisplayClass62_1__GetGrandServantInfo_b__1__,
    0);
  return BasicHelper__Any_int__51593044(
           individuality,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_3133F54 *)Method_BasicHelper_Any_int____78639760);
}


void PartyListViewItem___c__DisplayClass62_1___ctor(
        PartyListViewItem___c__DisplayClass62_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyListViewItem___c__DisplayClass62_1___GetGrandServantInfo_b__1(
        PartyListViewItem___c__DisplayClass62_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.classIndividuality == x;
}