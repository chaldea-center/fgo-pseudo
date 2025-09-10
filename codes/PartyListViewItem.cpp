void PartyListViewItem___ctor(PartyListViewItem_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct PartyOrganizationListViewItem_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C22C03 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItem___TypeInfo);
    byte_4C22C03 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct PartyOrganizationListViewItem_array *)sub_1C2D538(
                                                       PartyOrganizationListViewItem___TypeInfo,
                                                       (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.memberList = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v4, v5, v6);
}


void PartyListViewItem___ctor_33864848(
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
        const MethodInfo *method)
{
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  PartyOrganizationListViewItem_o *Instance; // x0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *UserServantList; // x24
  int32_t FollowerIndex; // w0
  BalanceConfig_c *v29; // x8
  struct PartyOrganizationListViewItem_array *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x2
  int32_t v34; // w20
  struct DeckServant_o *v35; // x8
  struct DeckServantData_array *svts; // x8
  int32_t max_length; // w9
  DeckServantData_o *v38; // x8
  int32_t initPos; // w26
  int v40; // w9
  struct PartyOrganizationListViewItem_array *v41; // x19
  PartyOrganizationListViewItem_o *v42; // x0
  PartyOrganizationListViewItem_o *v43; // x25
  const MethodInfo *v44; // x3
  UserServantEntity_o *v45; // x24
  struct PartyOrganizationListViewItem_array *v46; // x19
  PartyListViewItem_o *v47; // x28
  FollowerInfo_o *v48; // x27
  UserDeckEntity_o *v49; // x23
  System_Int64_array *EquipList; // x29
  __int64 v51; // x8
  Il2CppClass **v52; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v55; // x0
  UserServantEntity_array *v59; // [xsp+40h] [xbp-80h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+50h] [xbp-70h]
  int32_t DeckMainMemberMax; // [xsp+58h] [xbp-68h]
  int32_t v62; // [xsp+5Ch] [xbp-64h]

  if ( (byte_4C22C04 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C22C04 = 1;
  }
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v19, v20);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v21, v22);
  if ( !deck )
    goto LABEL_57;
  PartyListViewItem__SetDeckName(this, deck->fields.name, v25);
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_57;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.id;
  UserServantList = UserDeckEntity__GetUserServantList(deck, 0);
  FollowerIndex = UserDeckEntity__GetFollowerIndex(deck, 0);
  v29 = BalanceConfig_TypeInfo;
  DeckMainMemberMax = FollowerIndex;
  if ( FollowerIndex <= 0 )
  {
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v29 = BalanceConfig_TypeInfo;
    }
    DeckMainMemberMax = v29->static_fields->DeckMainMemberMax;
  }
  if ( !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = BalanceConfig_TypeInfo;
  }
  v30 = (struct PartyOrganizationListViewItem_array *)sub_1C2D538(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v29->static_fields->DeckMemberMax);
  this->fields.memberList = v30;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v30, v31, v32);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  if ( *(_QWORD *)&Instance->fields.sortIndex )
  {
    Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      follower = *(FollowerInfo_o **)&Instance->fields.sortIndex;
      Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        followerClassId = Instance->fields.sortValue0;
        Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          followerGrandGraphId = HIDWORD(Instance->fields.sortValue0);
          Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( Instance )
          {
            followerDeckId = Instance->fields.sortValue0B;
            goto LABEL_18;
          }
        }
      }
    }
LABEL_57:
    sub_1C2D6EC(Instance, v24);
  }
LABEL_18:
  v34 = 0;
  v59 = UserServantList;
  while ( 1 )
  {
    Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( v34 >= SHIDWORD(Instance->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
      break;
    v35 = deck->fields.deckInfo;
    if ( !v35 )
      goto LABEL_57;
    svts = v35->fields.svts;
    if ( !svts )
      goto LABEL_57;
    max_length = svts->max_length;
    if ( v34 >= max_length )
    {
      v40 = v34 + 1;
      initPos = v34 + 1;
    }
    else
    {
      if ( v34 >= (unsigned int)max_length )
        goto LABEL_58;
      v38 = svts->m_Items[v34];
      if ( !v38 )
        goto LABEL_57;
      initPos = v38->fields.initPos;
      v40 = v34 + 1;
    }
    v62 = v40;
    if ( v40 == DeckMainMemberMax )
    {
      v41 = *p_memberList;
      v42 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
      v43 = v42;
      if ( follower )
      {
        PartyOrganizationListViewItem___ctor_33993044(
          v42,
          v34,
          follower,
          followerClassId,
          followerGrandGraphId,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          followerDeckId,
          initPos,
          0);
        if ( !v41 )
          goto LABEL_57;
      }
      else
      {
        PartyOrganizationListViewItem___ctor_34030324(v42, v34, 1, setupInfo, questRestrictionInfo, 1, initPos, 0);
        if ( !v41 )
          goto LABEL_57;
      }
      if ( v43 )
      {
        Instance = (PartyOrganizationListViewItem_o *)sub_1C2D5CC(v43, v41->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_59;
      }
      if ( (unsigned int)v34 >= LODWORD(v41->max_length) )
        goto LABEL_58;
      v52 = &v41->obj.klass + v34;
    }
    else
    {
      if ( !UserServantList )
        goto LABEL_57;
      if ( (unsigned int)v34 >= LODWORD(UserServantList->max_length) )
        goto LABEL_58;
      v45 = UserServantList->m_Items[v34];
      v46 = *p_memberList;
      if ( v45 )
      {
        v47 = this;
        v48 = follower;
        v49 = deck;
        EquipList = UserDeckEntity__GetEquipList(deck, v34, 0);
        v43 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34019620(
          v43,
          v34,
          v45,
          EquipList,
          setupInfo,
          questRestrictionInfo,
          0,
          initPos,
          0,
          0,
          0,
          0);
        if ( !v46 )
          goto LABEL_57;
        UserServantList = v59;
        if ( v43 )
        {
          Instance = (PartyOrganizationListViewItem_o *)sub_1C2D5CC(v43, v46->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_59;
        }
        if ( (unsigned int)v34 >= LODWORD(v46->max_length) )
          goto LABEL_58;
        v51 = v34;
        deck = v49;
        follower = v48;
        this = v47;
      }
      else
      {
        v43 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34030324(v43, v34, 0, setupInfo, questRestrictionInfo, 1, initPos, 0);
        if ( !v46 )
          goto LABEL_57;
        UserServantList = v59;
        if ( v43 )
        {
          Instance = (PartyOrganizationListViewItem_o *)sub_1C2D5CC(v43, v46->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_59:
            v55 = sub_1C2D710();
            sub_1C2D5B8(v55, 0);
          }
        }
        if ( (unsigned int)v34 >= LODWORD(v46->max_length) )
          goto LABEL_58;
        v51 = v34;
      }
      v52 = &v46->obj.klass + v51;
    }
    v52[4] = (Il2CppClass *)v43;
    sub_1C2D434((CGThumbnailListItem_o *)(v52 + 4), (int32_t)v43, v33, v44);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_57;
    if ( (unsigned int)v34 >= LODWORD(memberList->max_length) )
LABEL_58:
      sub_1C2D6F4(Instance, v24, v33);
    Instance = memberList->m_Items[v34];
    if ( !Instance )
      goto LABEL_57;
    cost = this->fields.cost;
    v34 = v62;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(Instance, 0) + cost;
  }
  PartyListViewItem__CheckRestriction(this, v24);
}


void PartyListViewItem___ctor_33866216(
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x24
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  struct System_String_o *DefaultDeckName; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 Instance; // x0
  unsigned __int64 SvtEquipMax; // x1
  const MethodInfo *v30; // x2
  UserEventDeckEntity_o *v31; // x19
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo *v33; // x3
  int32_t FollowerIndex; // w29
  BalanceConfig_c *v35; // x0
  PartyListViewItem_o *v36; // x27
  int v37; // w25
  const MethodInfo *v38; // x2
  int32_t v39; // w23
  BalanceConfig_c *v40; // x0
  struct PartyOrganizationListViewItem_array *v41; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x28
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  UserEventDeckEntity_o *v45; // x20
  const MethodInfo *v46; // x2
  unsigned int v47; // w24
  struct DeckServant_o *v48; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v50; // x8
  int32_t *p_initPos; // x8
  int32_t initPos; // w29
  const MethodInfo *v53; // x6
  int v54; // w25
  struct DeckServant_o *v55; // x8
  struct DeckServantData_array *v56; // x8
  DeckServantData_o *v57; // x8
  _BOOL4 v58; // w27
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v61; // x23
  int32_t v62; // w27
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v64; // x19
  int32_t v65; // w26
  PartyOrganizationListViewItem_o *v66; // x25
  const MethodInfo *v67; // x3
  unsigned int max_length; // w8
  FollowerInfo_o *v69; // x23
  int32_t v70; // w27
  RestrictionEntity_o *GrandServantRestrictionEntity; // x27
  const MethodInfo *v72; // x5
  UserServantEntity_array *v73; // x26
  PartyOrganizationListViewItem_o *v74; // x0
  Il2CppClass **v75; // x8
  System_Int64_array *v76; // x23
  Il2CppClass **v77; // x25
  Il2CppClass *v78; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v79; // x25
  Il2CppClass *v80; // t1
  Il2CppClass *parent; // x23
  Il2CppClass *declaringType; // x27
  int32_t v83; // w23
  int32_t v84; // w27
  int32_t DispLimitCount; // w0
  const MethodInfo *v86; // x3
  UserServantEntity_o *v87; // x23
  struct PartyOrganizationListViewItem_array *v88; // x26
  System_Int64_array *v89; // x27
  int32_t v90; // w20
  unsigned int v91; // w8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v94; // x1
  __int64 v95; // x0
  bool *v96; // [xsp+30h] [xbp-E0h]
  int32_t followerGrandGraphIda; // [xsp+3Ch] [xbp-D4h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+50h] [xbp-C0h]
  UserServantEntity_array *UserServantList; // [xsp+58h] [xbp-B8h]
  int v102; // [xsp+60h] [xbp-B0h]
  int v103; // [xsp+64h] [xbp-ACh]
  PartyListViewItem_o *v104; // [xsp+68h] [xbp-A8h]
  int32_t v106; // [xsp+80h] [xbp-90h]
  _BOOL4 v107; // [xsp+84h] [xbp-8Ch]
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+94h] [xbp-7Ch] BYREF
  System_Int64_array *equipIdList; // [xsp+98h] [xbp-78h] BYREF
  int32_t followerClassIda; // [xsp+A4h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16

  if ( (byte_4C22C05 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C22C05 = 1;
  }
  followera = 0;
  followerClassIda = 0;
  equipIdList = 0;
  isChangeFriendShipSvtEquipSkill = 0;
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v19, v20);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v22, v23);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v24);
  this->fields.deckName = DefaultDeckName;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.deckName, (int32_t)DefaultDeckName, v26, v27);
  v31 = deck;
  if ( !deck )
    goto LABEL_125;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_125;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v30) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_125;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0);
    v31 = deck;
  }
  UserServantList = UserEventDeckEntity__GetUserServantList(v31, 0, 0, 0);
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, v31, 0, v33);
  if ( FollowerIndex <= 0 )
  {
    v35 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v35 = BalanceConfig_TypeInfo;
    }
    FollowerIndex = v35->static_fields->DeckMainMemberMax;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_125;
  if ( *(int *)(Instance + 56) < 1 )
  {
    v36 = 0;
    v37 = 0;
    v107 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_125;
    v36 = *(PartyListViewItem_o **)(Instance + 80);
    v37 = 0;
    v107 = v36 == 0;
    if ( follower && v36 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_125;
      v37 = *(_DWORD *)(Instance + 56);
      Instance = (__int64)PartyListViewItem__GetMember(v36, v37 - 1, v38);
      if ( !Instance )
        goto LABEL_125;
      v39 = *(_DWORD *)(Instance + 372);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_125;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v39, follower, 0);
      v107 = 0;
    }
  }
  v40 = BalanceConfig_TypeInfo;
  v96 = isBaseModify;
  v104 = v36;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v40 = BalanceConfig_TypeInfo;
  }
  v41 = (struct PartyOrganizationListViewItem_array *)sub_1C2D538(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v40->static_fields->DeckMemberMax);
  this->fields.memberList = v41;
  p_memberList = &this->fields.memberList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v41, v43, v44);
  this->fields.cost = 0;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v45 = deck;
  if ( !Instance )
    goto LABEL_125;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_125;
    follower = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_125;
    followerClassId = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_125;
    followerGrandGraphIda = *(_DWORD *)(Instance + 36);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_125;
    v106 = *(_DWORD *)(Instance + 40);
  }
  else
  {
    v106 = followerDeckId;
    followerGrandGraphIda = followerGrandGraphId;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || !Instance )
LABEL_125:
    sub_1C2D6EC(Instance, SvtEquipMax);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)Instance,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0);
  v47 = 0;
  v102 = v37 - 1;
  v103 = FollowerIndex - 1;
  while ( 1 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v47 >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 172LL) )
      break;
    if ( v107 )
    {
      v48 = v45->fields.deckInfo;
      if ( !v48 )
        goto LABEL_125;
      svts = v48->fields.svts;
      if ( !svts )
        goto LABEL_125;
      if ( v47 >= LODWORD(svts->max_length) )
        goto LABEL_129;
      v50 = svts->m_Items[v47];
      if ( !v50 )
        goto LABEL_125;
      p_initPos = &v50->fields.initPos;
    }
    else
    {
      Instance = (__int64)PartyListViewItem__GetMember(v104, v47, v46);
      if ( !Instance )
        goto LABEL_125;
      p_initPos = (int32_t *)(Instance + 372);
    }
    initPos = *p_initPos;
    followera = 0;
    followerClassIda = 0;
    if ( !questRestrictionInfo )
      goto LABEL_125;
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(questRestrictionInfo, initPos, 0);
    v54 = Instance;
    if ( (Instance & 1) != 0 )
    {
      v55 = v45->fields.deckInfo;
      if ( !v55 )
        goto LABEL_125;
      v56 = v55->fields.svts;
      if ( !v56 )
        goto LABEL_125;
      if ( v47 >= LODWORD(v56->max_length) )
        goto LABEL_129;
      v57 = v56->m_Items[v47];
      if ( !v57 )
        goto LABEL_125;
      v58 = 0;
      if ( v102 != v47 )
      {
        npcFollowerSvtId = v57->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v58 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v53);
      }
    }
    else
    {
      v58 = 0;
    }
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_125;
    NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, initPos, 0);
    if ( NpcFollowerInfo && ((v54 ^ 1) & 1) == 0 )
    {
      v61 = NpcFollowerInfo;
      if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0) )
        v62 = 0;
      else
        v62 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v61, 0);
      v64 = *p_memberList;
      if ( IsNpc )
        v65 = 0;
      else
        v65 = v106;
      v66 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_33993044(
        v66,
        v47,
        v61,
        v62,
        0,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v65,
        initPos,
        0);
      if ( !v64 )
        goto LABEL_125;
      if ( v66 )
      {
        Instance = sub_1C2D5CC(v66, v64->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_130;
      }
      max_length = v64->max_length;
      goto LABEL_84;
    }
    if ( v103 == v47 || v58 )
    {
      v69 = followera;
      v64 = *p_memberList;
      if ( followera )
      {
        v70 = followerClassIda;
        v66 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_33993044(
          v66,
          v47,
          v69,
          v70,
          0,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v106,
          initPos,
          0);
LABEL_80:
        if ( !v64 )
          goto LABEL_125;
      }
      else
      {
        v74 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
        v66 = v74;
        if ( follower )
        {
          PartyOrganizationListViewItem___ctor_33993044(
            v74,
            v47,
            follower,
            followerClassId,
            followerGrandGraphIda,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v106,
            initPos,
            0);
          goto LABEL_80;
        }
        PartyOrganizationListViewItem___ctor_34030324(v74, v47, 1, setupInfo, questRestrictionInfo, 1, initPos, 0);
        if ( !v64 )
          goto LABEL_125;
      }
      if ( v66 )
      {
        Instance = sub_1C2D5CC(v66, v64->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_130;
      }
      max_length = v64->max_length;
LABEL_84:
      if ( v47 >= max_length )
        goto LABEL_129;
      v75 = &v64->obj.klass + (int)v47;
      goto LABEL_120;
    }
    GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                      questRestrictionInfo,
                                      initPos,
                                      0);
    Instance = (__int64)UserEventDeckEntity__GetEquipList(v45, v47, 0);
    equipIdList = (System_Int64_array *)Instance;
    isChangeFriendShipSvtEquipSkill = 0;
    if ( GrandServantRestrictionEntity )
    {
      v73 = UserServantList;
      if ( !UserServantList )
        goto LABEL_125;
      if ( v47 >= LODWORD(UserServantList->max_length) )
        goto LABEL_129;
      PartyListViewItem__GetGrandServantInfo(
        this,
        GrandServantRestrictionEntity,
        &UserServantList->m_Items[v47],
        &equipIdList,
        &isChangeFriendShipSvtEquipSkill,
        v72);
    }
    else
    {
      v73 = UserServantList;
      v76 = (System_Int64_array *)Instance;
      if ( (v54 & 1) != 0 )
      {
        if ( !UserServantList )
          goto LABEL_125;
        if ( v47 >= LODWORD(UserServantList->max_length) )
          goto LABEL_129;
        v77 = &UserServantList->obj.klass + (int)v47;
        v80 = v77[4];
        v79 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v77 + 4);
        v78 = v80;
        if ( v80 )
        {
          declaringType = v78->_1.declaringType;
          parent = v78->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v112.fields.currentCryptoKey = declaringType;
          *(_QWORD *)&v112.fields.fakeValue = parent;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v112, 0);
          if ( v47 >= LODWORD(UserServantList->max_length) )
            goto LABEL_129;
          if ( !*v79 )
            goto LABEL_125;
          v83 = Instance;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*v79)[6], 0);
          if ( v47 >= LODWORD(UserServantList->max_length) )
            goto LABEL_129;
          v84 = Instance;
          Instance = (__int64)*v79;
          if ( !*v79 )
            goto LABEL_125;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
          Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                       questRestrictionInfo,
                       v83,
                       v84,
                       DispLimitCount,
                       initPos,
                       0,
                       0);
          if ( (Instance & 1) != 0 )
          {
            if ( v47 >= LODWORD(UserServantList->max_length) )
              goto LABEL_129;
            *v79 = 0;
            sub_1C2D434((CGThumbnailListItem_o *)v79, 0, (int32_t)v46, v86);
          }
        }
        v76 = equipIdList;
      }
      if ( !v76 )
        goto LABEL_125;
      Instance = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (__int64)BalanceConfig_TypeInfo;
      }
      SvtEquipMax = *(unsigned int *)(*(_QWORD *)(Instance + 184) + 48LL);
      if ( (int)SvtEquipMax < SLODWORD(v76->max_length) )
      {
        if ( !*(_DWORD *)(Instance + 224) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          SvtEquipMax = (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax;
        }
        Instance = sub_1C2D538(long___TypeInfo, SvtEquipMax);
        equipIdList = (System_Int64_array *)Instance;
      }
      if ( !UserServantList )
        goto LABEL_125;
    }
    if ( v47 >= LODWORD(v73->max_length) )
      goto LABEL_129;
    v87 = v73->m_Items[v47];
    v88 = *p_memberList;
    if ( v87 )
    {
      v89 = equipIdList;
      v90 = isChangeFriendShipSvtEquipSkill;
      v66 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34019620(
        v66,
        v47,
        v87,
        v89,
        setupInfo,
        questRestrictionInfo,
        0,
        initPos,
        0,
        0,
        v90,
        0);
      if ( !v88 )
        goto LABEL_125;
      if ( v66 )
      {
        Instance = sub_1C2D5CC(v66, v88->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_130;
      }
      v91 = v88->max_length;
      v45 = deck;
    }
    else
    {
      v66 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34030324(v66, v47, 0, setupInfo, questRestrictionInfo, 1, initPos, 0);
      if ( !v88 )
        goto LABEL_125;
      if ( v66 )
      {
        Instance = sub_1C2D5CC(v66, v88->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_130:
          v95 = sub_1C2D710();
          sub_1C2D5B8(v95, 0);
        }
      }
      v91 = v88->max_length;
    }
    if ( v47 >= v91 )
      goto LABEL_129;
    v75 = &v88->obj.klass + (int)v47;
LABEL_120:
    v75[4] = (Il2CppClass *)v66;
    sub_1C2D434((CGThumbnailListItem_o *)(v75 + 4), (int32_t)v66, (int32_t)v46, v67);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_125;
    if ( v47 >= LODWORD(memberList->max_length) )
LABEL_129:
      sub_1C2D6F4(Instance, SvtEquipMax, v46);
    Instance = (__int64)memberList->m_Items[v47];
    if ( !Instance )
      goto LABEL_125;
    cost = this->fields.cost;
    ++v47;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)SvtEquipMax);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v94) )
    *v96 = 1;
}


void PartyListViewItem___ctor_33874072(
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
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x24
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1
  struct System_String_o *DefaultDeckName; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 Instance; // x0
  unsigned __int64 SvtEquipMax; // x1
  const MethodInfo *v31; // x2
  struct DeckServant_o *deckInfo; // x8
  PartyListViewItem_o *v33; // x22
  unsigned int v34; // w23
  const MethodInfo *v35; // x2
  int32_t v36; // w19
  BalanceConfig_c *v37; // x0
  struct PartyOrganizationListViewItem_array *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w8
  QuestRestrictionInfo_o *v42; // x19
  struct QuestRestrictionInfo_o *v43; // x8
  __int64 v44; // x20
  unsigned __int64 v45; // x24
  const MethodInfo *v46; // x2
  int32_t *p_initPos; // x8
  struct DeckServant_o *v48; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v50; // x8
  int32_t v51; // w25
  unsigned __int64 v52; // x8
  __int64 v53; // x9
  __int64 v54; // x23
  __int64 v55; // x27
  const MethodInfo *v56; // x3
  __int64 v57; // x23
  const MethodInfo *v58; // x6
  int v59; // w29
  struct DeckServant_o *v60; // x8
  struct DeckServantData_array *v61; // x8
  DeckServantData_o *v62; // x8
  _BOOL4 v63; // w27
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v66; // x23
  int32_t v67; // w27
  bool IsNpc; // w0
  unsigned int *v69; // x26
  int32_t v70; // w19
  PartyOrganizationListViewItem_o *v71; // x0
  EventUpValSetupInfo_o *v72; // x5
  QuestRestrictionInfo_o *v73; // x6
  PartyOrganizationListViewItem_o *v74; // x29
  int32_t v75; // w1
  FollowerInfo_o *v76; // x2
  int32_t v77; // w3
  int32_t v78; // w4
  EventCampaignEntity_array *v79; // x7
  FollowerInfo_o *v80; // x23
  int32_t v81; // w27
  const MethodInfo *v82; // x3
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  int32_t v85; // w8
  unsigned int *v86; // x23
  PartyOrganizationListViewItem_o *v87; // x27
  const MethodInfo *v88; // x3
  RestrictionEntity_o *GrandServantRestrictionEntity; // x27
  const MethodInfo *v90; // x5
  unsigned int *v91; // x19
  System_Int64_array *v92; // x23
  __int64 v93; // x8
  __int64 v94; // x23
  __int64 v95; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v96; // x8
  int32_t v97; // w23
  int32_t v98; // w27
  int32_t DispLimitCount; // w0
  const MethodInfo *v100; // x3
  UserServantEntity_o *v101; // x23
  System_Int64_array *v102; // x27
  int32_t v103; // w19
  EventUpValSetupInfo_o *v104; // x3
  QuestRestrictionInfo_o *v105; // x4
  int32_t v106; // w1
  bool v107; // w2
  const MethodInfo *v108; // x1
  __int64 v109; // x0
  int32_t followerDeckIda; // [xsp+8h] [xbp-138h]
  int32_t initPos; // [xsp+10h] [xbp-130h]
  UserServantMaster_o *Master_object; // [xsp+28h] [xbp-118h]
  int32_t v114; // [xsp+3Ch] [xbp-104h]
  int32_t *m_Items; // [xsp+40h] [xbp-100h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+50h] [xbp-F0h]
  unsigned int *UserServantList; // [xsp+60h] [xbp-E0h]
  struct System_Int32_array *svtIdForceBattleList; // [xsp+70h] [xbp-D0h]
  unsigned int *v121; // [xsp+80h] [xbp-C0h]
  __int64 v122; // [xsp+88h] [xbp-B8h]
  int32_t v123; // [xsp+94h] [xbp-ACh]
  UserEventDeckEntity_o *v124; // [xsp+98h] [xbp-A8h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+A0h] [xbp-A0h]
  __int64 v126; // [xsp+A8h] [xbp-98h]
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+C4h] [xbp-7Ch] BYREF
  System_Int64_array *equipIdList; // [xsp+C8h] [xbp-78h] BYREF
  int32_t followerClassIda; // [xsp+D4h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+D8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16

  if ( (byte_4C22C06 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C22C06 = 1;
  }
  followera = 0;
  followerClassIda = 0;
  equipIdList = 0;
  isChangeFriendShipSvtEquipSkill = 0;
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v20, v21);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v23, v24);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v25);
  this->fields.deckName = DefaultDeckName;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.deckName, (int32_t)DefaultDeckName, v27, v28);
  if ( !deck )
    goto LABEL_148;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_148;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v31) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_148;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServantList = (unsigned int *)UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  if ( *(int *)(Instance + 56) < 1 )
  {
    v33 = 0;
    if ( !questRestrictionInfo )
      goto LABEL_15;
    goto LABEL_14;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  v33 = *(PartyListViewItem_o **)(Instance + 80);
  if ( questRestrictionInfo )
LABEL_14:
    QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0);
LABEL_15:
  v34 = 0;
  if ( follower && v33 )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    v34 = *(_DWORD *)(Instance + 56);
    Instance = (__int64)PartyListViewItem__GetMember(v33, v34 - 1, v35);
    if ( !Instance )
      goto LABEL_148;
    v36 = *(_DWORD *)(Instance + 372);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v36, follower, 0);
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    follower = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    followerClassId = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    v114 = *(_DWORD *)(Instance + 36);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    v123 = *(_DWORD *)(Instance + 40);
  }
  else
  {
    v123 = followerDeckId;
    v114 = followerGrandGraphId;
  }
  v37 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v37 = BalanceConfig_TypeInfo;
  }
  v38 = (struct PartyOrganizationListViewItem_array *)sub_1C2D538(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v37->static_fields->DeckMemberMax);
  this->fields.memberList = v38;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v38, v39, v40);
  v41 = this->fields.menuKind;
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( v41 == 3 )
  {
    Instance = (__int64)*p_questRestrictionInfo;
    v42 = questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_148;
    Instance = (__int64)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList((QuestRestrictionInfo_o *)Instance, 0);
    if ( !*p_questRestrictionInfo )
      goto LABEL_148;
    v122 = Instance;
    svtIdForceBattleList = (*p_questRestrictionInfo)->fields.svtIdForceBattleList;
  }
  else
  {
    v42 = questRestrictionInfo;
    svtIdForceBattleList = 0;
    v122 = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v43 = *p_questRestrictionInfo;
  if ( !*p_questRestrictionInfo || !Instance )
LABEL_148:
    sub_1C2D6EC(Instance, SvtEquipMax);
  m_Items = svtIdForceBattleList->m_Items;
  v44 = 0;
  v45 = 0;
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)Instance,
                          v43->fields.questId,
                          v43->fields.questPhase,
                          0);
  v121 = UserServantList + 8;
  v126 = v34 - 1LL;
  v124 = deck;
  while ( 1 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v45 >= *(int *)(*(_QWORD *)(Instance + 184) + 172LL) )
      break;
    if ( v33 )
    {
      Instance = (__int64)PartyListViewItem__GetMember(v33, v45, v46);
      if ( !Instance )
        goto LABEL_148;
      p_initPos = (int32_t *)(Instance + 372);
    }
    else
    {
      v48 = deck->fields.deckInfo;
      if ( !v48 )
        goto LABEL_148;
      svts = v48->fields.svts;
      if ( !svts )
        goto LABEL_148;
      if ( v45 >= LODWORD(svts->max_length) )
        goto LABEL_152;
      v50 = svts->m_Items[v45];
      if ( !v50 )
        goto LABEL_148;
      p_initPos = &v50->fields.initPos;
    }
    v51 = *p_initPos;
    if ( this->fields.menuKind == 3 )
    {
      if ( !v122 )
        goto LABEL_148;
      if ( (__int64)v45 >= *(int *)(v122 + 24) )
      {
        v86 = (unsigned int *)*p_memberList;
        v87 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34030324(v87, v45, 0, setupInfo, v42, 1, v51, 0);
        if ( !v86 )
          goto LABEL_148;
        if ( v87 )
        {
          Instance = sub_1C2D5CC(v87, *(_QWORD *)(*(_QWORD *)v86 + 64LL));
          if ( !Instance )
          {
LABEL_153:
            v109 = sub_1C2D710();
            sub_1C2D5B8(v109, 0);
          }
        }
        if ( v45 >= v86[6] )
          goto LABEL_152;
        *(_QWORD *)&v86[2 * v45 + 8] = v87;
        sub_1C2D434((CGThumbnailListItem_o *)&v86[v44 + 8], (int32_t)v87, (int32_t)v46, v88);
        goto LABEL_112;
      }
      if ( svtIdForceBattleList )
      {
        if ( v126 != v45 && isFirstEnforceChange )
        {
          v52 = *(unsigned int *)((char *)&off_18 + (_QWORD)svtIdForceBattleList);
          if ( (__int64)v45 < (int)v52 )
          {
            if ( v45 >= v52 )
              goto LABEL_152;
            SvtEquipMax = (unsigned int)m_Items[v45];
            if ( (int)SvtEquipMax >= 1 )
            {
              if ( !UserServantList )
                goto LABEL_148;
              if ( v45 >= UserServantList[6] )
                goto LABEL_152;
              v53 = *(_QWORD *)&v121[2 * v45];
              if ( !v53 )
                goto LABEL_69;
              v55 = *(_QWORD *)(v53 + 80);
              v54 = *(_QWORD *)(v53 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v131.fields.currentCryptoKey = v55;
              *(_QWORD *)&v131.fields.fakeValue = v54;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v131, 0);
              v52 = *(unsigned int *)((char *)&off_18 + (_QWORD)svtIdForceBattleList);
              if ( v45 >= v52 )
                goto LABEL_152;
              SvtEquipMax = (unsigned int)m_Items[v45];
              if ( (_DWORD)Instance != (_DWORD)SvtEquipMax )
              {
LABEL_69:
                if ( v45 >= v52 )
                  goto LABEL_152;
                Instance = (__int64)Master_object;
                if ( !Master_object )
                  goto LABEL_148;
                Instance = (__int64)UserServantMaster__getSvtIdBattle(Master_object, SvtEquipMax, 0);
                v57 = Instance;
                if ( Instance )
                {
                  Instance = sub_1C2D5CC(Instance, *(_QWORD *)(*(_QWORD *)UserServantList + 64LL));
                  if ( !Instance )
                    goto LABEL_153;
                }
                if ( v45 >= UserServantList[6] )
                  goto LABEL_152;
                *(_QWORD *)&v121[2 * v45] = v57;
                sub_1C2D434((CGThumbnailListItem_o *)&v121[v44], v57, (int32_t)v46, v56);
                v42 = questRestrictionInfo;
                *isBaseModify = 1;
              }
            }
          }
        }
      }
    }
    followera = 0;
    followerClassIda = 0;
    if ( !v42 )
      goto LABEL_148;
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(v42, v51, 0);
    v59 = Instance;
    if ( (Instance & 1) != 0 )
    {
      v60 = deck->fields.deckInfo;
      if ( !v60 )
        goto LABEL_148;
      v61 = v60->fields.svts;
      if ( !v61 )
        goto LABEL_148;
      if ( v45 >= LODWORD(v61->max_length) )
        goto LABEL_152;
      v62 = v61->m_Items[v45];
      if ( !v62 )
        goto LABEL_148;
      v63 = 0;
      if ( v126 != v45 )
      {
        npcFollowerSvtId = v62->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v63 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  v51,
                  v58);
      }
    }
    else
    {
      v63 = 0;
    }
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v51, 0);
    if ( NpcFollowerInfo && ((v59 ^ 1) & 1) == 0 )
    {
      v66 = NpcFollowerInfo;
      if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0) )
        v67 = 0;
      else
        v67 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v66, 0);
      v69 = (unsigned int *)*p_memberList;
      if ( IsNpc )
        v70 = 0;
      else
        v70 = v123;
      v71 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
      v72 = setupInfo;
      v73 = questRestrictionInfo;
      v74 = v71;
      v75 = v45;
      v76 = v66;
      v77 = v67;
      v78 = 0;
      initPos = v51;
      followerDeckIda = v70;
      goto LABEL_95;
    }
    if ( v126 == v45 || v63 )
    {
      v80 = followera;
      v69 = (unsigned int *)*p_memberList;
      if ( followera )
      {
        v81 = followerClassIda;
        v71 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
        v72 = setupInfo;
        v74 = v71;
        initPos = v51;
        followerDeckIda = v123;
        v75 = v45;
        v76 = v80;
        v77 = v81;
        v78 = 0;
        v73 = v42;
        v79 = 0;
      }
      else
      {
        v71 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
        v76 = follower;
        v74 = v71;
        if ( !follower )
        {
          v104 = setupInfo;
          v107 = 1;
          v106 = v45;
          v105 = v42;
LABEL_147:
          PartyOrganizationListViewItem___ctor_34030324(v71, v106, v107, v104, v105, 1, v51, 0);
          if ( !v69 )
            goto LABEL_148;
          goto LABEL_100;
        }
        v77 = followerClassId;
        v78 = v114;
        v72 = setupInfo;
        initPos = v51;
        followerDeckIda = v123;
        v75 = v45;
        v73 = v42;
LABEL_95:
        v79 = friendPointCampaignEntityList;
      }
      PartyOrganizationListViewItem___ctor_33993044(
        v71,
        v75,
        v76,
        v77,
        v78,
        v72,
        v73,
        v79,
        0,
        followerDeckIda,
        initPos,
        0);
      if ( !v69 )
        goto LABEL_148;
      goto LABEL_100;
    }
    GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(v42, v51, 0);
    Instance = (__int64)UserEventDeckEntity__GetEquipList(deck, v45, 0);
    equipIdList = (System_Int64_array *)Instance;
    isChangeFriendShipSvtEquipSkill = 0;
    if ( GrandServantRestrictionEntity )
    {
      v91 = UserServantList;
      if ( !UserServantList )
        goto LABEL_148;
      if ( v45 >= UserServantList[6] )
        goto LABEL_152;
      PartyListViewItem__GetGrandServantInfo(
        this,
        GrandServantRestrictionEntity,
        (UserServantEntity_o **)&v121[v44],
        &equipIdList,
        &isChangeFriendShipSvtEquipSkill,
        v90);
    }
    else
    {
      v91 = UserServantList;
      v92 = (System_Int64_array *)Instance;
      if ( (v59 & 1) != 0 )
      {
        if ( !UserServantList )
          goto LABEL_148;
        if ( v45 >= UserServantList[6] )
          goto LABEL_152;
        v93 = *(_QWORD *)&v121[2 * v45];
        if ( v93 )
        {
          v95 = *(_QWORD *)(v93 + 80);
          v94 = *(_QWORD *)(v93 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v132.fields.currentCryptoKey = v95;
          *(_QWORD *)&v132.fields.fakeValue = v94;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v132, 0);
          if ( v45 >= UserServantList[6] )
            goto LABEL_152;
          v96 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v121[2 * v45];
          if ( !v96 )
            goto LABEL_148;
          v97 = Instance;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v96[6], 0);
          if ( v45 >= UserServantList[6] )
LABEL_152:
            sub_1C2D6F4(Instance, SvtEquipMax, v46);
          v98 = Instance;
          Instance = *(_QWORD *)&v121[2 * v45];
          if ( !Instance )
            goto LABEL_148;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
          Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                       questRestrictionInfo,
                       v97,
                       v98,
                       DispLimitCount,
                       v51,
                       0,
                       0);
          if ( (Instance & 1) != 0 )
          {
            if ( v45 >= UserServantList[6] )
              goto LABEL_152;
            *(_QWORD *)&v121[2 * v45] = 0;
            sub_1C2D434((CGThumbnailListItem_o *)&v121[v44], 0, (int32_t)v46, v100);
          }
        }
        v92 = equipIdList;
      }
      if ( !v92 )
        goto LABEL_148;
      Instance = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (__int64)BalanceConfig_TypeInfo;
      }
      SvtEquipMax = *(unsigned int *)(*(_QWORD *)(Instance + 184) + 48LL);
      if ( (int)SvtEquipMax < SLODWORD(v92->max_length) )
      {
        if ( !*(_DWORD *)(Instance + 224) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          SvtEquipMax = (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax;
        }
        Instance = sub_1C2D538(long___TypeInfo, SvtEquipMax);
        equipIdList = (System_Int64_array *)Instance;
      }
      if ( !UserServantList )
        goto LABEL_148;
    }
    if ( v45 >= v91[6] )
      goto LABEL_152;
    v101 = *(UserServantEntity_o **)&v121[2 * v45];
    v69 = (unsigned int *)*p_memberList;
    if ( !v101 )
    {
      v71 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
      v104 = setupInfo;
      v105 = questRestrictionInfo;
      v74 = v71;
      v106 = v45;
      v107 = 0;
      goto LABEL_147;
    }
    v102 = equipIdList;
    v103 = isChangeFriendShipSvtEquipSkill;
    v74 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_34019620(
      v74,
      v45,
      v101,
      v102,
      setupInfo,
      questRestrictionInfo,
      0,
      v51,
      0,
      0,
      v103,
      0);
    if ( !v69 )
      goto LABEL_148;
LABEL_100:
    if ( v74 )
    {
      Instance = sub_1C2D5CC(v74, *(_QWORD *)(*(_QWORD *)v69 + 64LL));
      if ( !Instance )
        goto LABEL_153;
    }
    if ( v45 >= v69[6] )
      goto LABEL_152;
    *(_QWORD *)&v69[2 * v45 + 8] = v74;
    sub_1C2D434((CGThumbnailListItem_o *)&v69[v44 + 8], (int32_t)v74, (int32_t)v46, v82);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_148;
    deck = v124;
    if ( v45 >= LODWORD(memberList->max_length) )
      goto LABEL_152;
    Instance = (__int64)memberList->m_Items[v45];
    if ( !Instance )
      goto LABEL_148;
    cost = this->fields.cost;
    v85 = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0) + cost;
    v42 = questRestrictionInfo;
    this->fields.cost = v85;
LABEL_112:
    ++v45;
    v44 += 2;
  }
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)SvtEquipMax);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v108) )
    *isBaseModify = 1;
}


void PartyListViewItem___ctor_33876964(
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
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  BalanceConfig_c *v26; // x0
  struct PartyOrganizationListViewItem_array *v27; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x22
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *Instance; // x0
  __int64 v32; // x1
  int32_t klass; // w23
  int32_t klass_high; // w27
  int32_t monitor; // w26
  struct PartyOrganizationListViewItem_array *v36; // x27
  PartyOrganizationListViewItem_o *v37; // x0
  PartyOrganizationListViewItem_o *v38; // x28
  __int64 v39; // x2
  const MethodInfo *v40; // x3
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w23
  const MethodInfo *v43; // x1
  int32_t i; // w23
  BalanceConfig_c *v45; // x0
  struct PartyOrganizationListViewItem_array *v46; // x26
  PartyOrganizationListViewItem_o *v47; // x24
  const MethodInfo *v48; // x3
  Il2CppClass **v49; // x0
  struct PartyOrganizationListViewItem_array *v50; // x8
  int32_t v51; // w24
  __int64 v52; // x0

  if ( (byte_4C22C07 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22C07 = 1;
  }
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v19, v20);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v21, v22);
  this->fields.isDeckNameDefault = 0;
  v23 = StringLiteral_1/*""*/;
  this->fields.deckName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.deckName, v23, v24, v25);
  this->fields.userEquipId = userEquipId;
  this->fields.id = 0;
  v26 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v26 = BalanceConfig_TypeInfo;
  }
  v27 = (struct PartyOrganizationListViewItem_array *)sub_1C2D538(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v26->static_fields->DeckMemberMax);
  this->fields.memberList = v27;
  p_memberList = &this->fields.memberList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v27, v29, v30);
  this->fields.cost = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  klass = followerClassId;
  if ( Instance[1].monitor )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    follower = (FollowerInfo_o *)Instance[1].monitor;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    klass = (int32_t)Instance[2].klass;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    klass_high = HIDWORD(Instance[2].klass);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    monitor = (int32_t)Instance[2].monitor;
    followerGrandGraphId = klass_high;
  }
  else
  {
    monitor = followerDeckId;
  }
  v36 = *p_memberList;
  v37 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
  v38 = v37;
  if ( follower )
  {
    PartyOrganizationListViewItem___ctor_33993044(
      v37,
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
      0);
    if ( !v36 )
      goto LABEL_36;
  }
  else
  {
    PartyOrganizationListViewItem___ctor_34030324(v37, 0, 1, setupInfo, questRestrictionInfo, 1, 0, 0);
    if ( !v36 )
      goto LABEL_36;
  }
  if ( v38 )
  {
    Instance = (Il2CppObject *)sub_1C2D5CC(v38, v36->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_38:
      v52 = sub_1C2D710();
      sub_1C2D5B8(v52, 0);
    }
  }
  if ( !LODWORD(v36->max_length) )
    goto LABEL_37;
  v36->m_Items[0] = v38;
  sub_1C2D434((CGThumbnailListItem_o *)v36->m_Items, (int32_t)v38, v39, v40);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_36;
  if ( !LODWORD(memberList->max_length) )
LABEL_37:
    sub_1C2D6F4(Instance, v32, v39);
  Instance = (Il2CppObject *)memberList->m_Items[0];
  if ( !Instance )
LABEL_36:
    sub_1C2D6EC(Instance, v32);
  cost = this->fields.cost;
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                    + cost;
  for ( i = 1; ; ++i )
  {
    v45 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v45 = BalanceConfig_TypeInfo;
    }
    if ( i >= v45->static_fields->DeckMemberMax )
      break;
    v46 = *p_memberList;
    v47 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_34030324(v47, i, 0, setupInfo, questRestrictionInfo, 1, 0, 0);
    if ( !v46 )
      goto LABEL_36;
    if ( v47 )
    {
      Instance = (Il2CppObject *)sub_1C2D5CC(v47, v46->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_38;
    }
    if ( (unsigned int)i >= LODWORD(v46->max_length) )
      goto LABEL_37;
    v49 = &v46->obj.klass + i;
    v49[4] = (Il2CppClass *)v47;
    sub_1C2D434((CGThumbnailListItem_o *)(v49 + 4), (int32_t)v47, v39, v48);
    v50 = this->fields.memberList;
    if ( !v50 )
      goto LABEL_36;
    if ( (unsigned int)i >= LODWORD(v50->max_length) )
      goto LABEL_37;
    Instance = (Il2CppObject *)v50->m_Items[i];
    if ( !Instance )
      goto LABEL_36;
    v51 = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                      + v51;
  }
  PartyListViewItem__CheckRestriction(this, v43);
}


void PartyListViewItem___ctor_33877880(
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
  const MethodInfo *v21; // x3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 IsNeedDeckPosReset; // x0
  unsigned __int64 SvtEquipMax; // x1
  const MethodInfo *v27; // x2
  struct DeckServant_o *deckInfo; // x8
  int32_t servantNumMax; // w26
  const MethodInfo *v30; // x3
  PartyListViewItem_o *v31; // x28
  int v32; // w25
  const MethodInfo *v33; // x2
  int32_t v34; // w23
  int32_t FollowerIndex; // w24
  BalanceConfig_c *v36; // x0
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x3
  __int64 v39; // x9
  __int64 v40; // x28
  __int64 v41; // x21
  unsigned __int64 v42; // x8
  __int64 v43; // x23
  signed __int64 v44; // x29
  BalanceConfig_c *v45; // x0
  UserEventDeckEntity_o *v46; // x29
  struct PartyOrganizationListViewItem_array *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  unsigned int v50; // w19
  struct DeckServant_o *v51; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v53; // x8
  int32_t *p_initPos; // x8
  int32_t initPos; // w24
  const MethodInfo *v56; // x6
  int v57; // w25
  _BOOL4 v58; // w26
  struct DeckServant_o *v59; // x8
  struct DeckServantData_array *v60; // x8
  DeckServantData_o *v61; // x8
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v64; // x23
  int32_t v65; // w26
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v67; // x21
  int32_t v68; // w27
  PartyOrganizationListViewItem_o *v69; // x25
  const MethodInfo *v70; // x3
  Il2CppClass **v71; // x8
  FollowerInfo_o *v72; // x23
  struct PartyOrganizationListViewItem_array *v73; // x27
  int32_t v74; // w26
  RestrictionEntity_o *GrandServantRestrictionEntity; // x26
  const MethodInfo *v76; // x5
  PartyOrganizationListViewItem_o *v77; // x0
  System_Int64_array *v78; // x23
  __int64 v79; // x25
  __int64 v80; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v81; // x25
  __int64 v82; // t1
  __int64 v83; // x23
  __int64 v84; // x26
  int32_t v85; // w23
  int32_t v86; // w26
  int32_t DispLimitCount; // w0
  const MethodInfo *v88; // x3
  UserServantEntity_o *v89; // x23
  struct PartyOrganizationListViewItem_array *v90; // x21
  System_Int64_array *v91; // x26
  int32_t v92; // w29
  unsigned int max_length; // w8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w21
  const MethodInfo *v96; // x1
  __int64 v97; // x0
  int32_t followerGrandGraphIda; // [xsp+2Ch] [xbp-E4h]
  FollowerInfo_o *followerInfo; // [xsp+30h] [xbp-E0h]
  UserEventDeckEntity_o *v100; // [xsp+38h] [xbp-D8h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+40h] [xbp-D0h]
  int v103; // [xsp+50h] [xbp-C0h]
  int v104; // [xsp+54h] [xbp-BCh]
  PartyListViewItem_o *v105; // [xsp+58h] [xbp-B8h]
  int32_t v106; // [xsp+64h] [xbp-ACh]
  int32_t v107; // [xsp+74h] [xbp-9Ch]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+78h] [xbp-98h]
  _BOOL4 v109; // [xsp+84h] [xbp-8Ch]
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+94h] [xbp-7Ch] BYREF
  System_Int64_array *equipIdList; // [xsp+98h] [xbp-78h] BYREF
  int32_t followerClassIda; // [xsp+A4h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16

  if ( (byte_4C22C08 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C22C08 = 1;
  }
  followera = 0;
  followerClassIda = 0;
  equipIdList = 0;
  isChangeFriendShipSvtEquipSkill = 0;
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v20, v21);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v23, v24);
  if ( !deck )
    goto LABEL_136;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_136;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  IsNeedDeckPosReset = PartyListViewItem__IsNeedDeckPosReset(this, deck, v27);
  if ( (IsNeedDeckPosReset & 1) != 0 )
  {
    IsNeedDeckPosReset = (__int64)deck->fields.deckInfo;
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    DeckServant__ResetInitPos((DeckServant_o *)IsNeedDeckPosReset, 0);
  }
  if ( !questRestrictionInfo )
    goto LABEL_136;
  servantNumMax = questRestrictionInfo->fields.servantNumMax;
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_136;
  if ( *(int *)(IsNeedDeckPosReset + 56) < 1 )
  {
    v31 = 0;
    v32 = 0;
    v109 = 1;
  }
  else
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    v31 = *(PartyListViewItem_o **)(IsNeedDeckPosReset + 80);
    v32 = 0;
    v109 = v31 == 0;
    if ( followerInfo && v31 )
    {
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_136;
      v32 = *(_DWORD *)(IsNeedDeckPosReset + 56);
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v31, v32 - 1, v33);
      if ( !IsNeedDeckPosReset )
        goto LABEL_136;
      v34 = *(_DWORD *)(IsNeedDeckPosReset + 372);
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_136;
      PartyOrganizationUtility__SetNpcFollowerInfo(
        (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
        v34,
        followerInfo,
        0);
      v109 = 0;
    }
  }
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0, v30);
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
  v36 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v36 = BalanceConfig_TypeInfo;
  }
  FollowerIndex = servantNumMax;
  if ( servantNumMax > v36->static_fields->DeckMainMemberMax )
  {
    FollowerIndex = v36->static_fields->DeckMainMemberMax;
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      FollowerIndex = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
    }
  }
LABEL_29:
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_136;
  v105 = v31;
  if ( *(_QWORD *)(IsNeedDeckPosReset + 24) )
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    followerInfo = *(FollowerInfo_o **)(IsNeedDeckPosReset + 24);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    v106 = *(_DWORD *)(IsNeedDeckPosReset + 32);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    followerGrandGraphIda = *(_DWORD *)(IsNeedDeckPosReset + 36);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    v107 = *(_DWORD *)(IsNeedDeckPosReset + 40);
  }
  else
  {
    v107 = followerDeckId;
    followerGrandGraphIda = followerGrandGraphId;
    v106 = followerClassId;
  }
  v100 = deck;
  IsNeedDeckPosReset = (__int64)UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0);
  if ( !IsNeedDeckPosReset )
    goto LABEL_136;
  v39 = *(_QWORD *)(IsNeedDeckPosReset + 24);
  v40 = IsNeedDeckPosReset;
  if ( (int)v39 >= 1 )
  {
    v41 = 0;
    v42 = 0;
    v43 = IsNeedDeckPosReset + 32;
    do
    {
      if ( v42 >= (unsigned int)v39 )
LABEL_140:
        sub_1C2D6F4(IsNeedDeckPosReset, SvtEquipMax, v37);
      v44 = v42 + 1;
      if ( servantNumMax < (int)v42 + 1 && *(_QWORD *)(v43 + 8 * v42) )
      {
        *isBaseModify = 1;
        if ( v42 >= *(unsigned int *)(v40 + 24) )
          goto LABEL_140;
        *(_QWORD *)(v43 + 8 * v42) = 0;
        sub_1C2D434((CGThumbnailListItem_o *)(v43 + v41), 0, (int32_t)v37, v38);
      }
      LODWORD(v39) = *(_DWORD *)(v40 + 24);
      v41 += 8;
      v42 = v44;
    }
    while ( v44 < (int)v39 );
  }
  v45 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v45 = BalanceConfig_TypeInfo;
  }
  v46 = deck;
  v47 = (struct PartyOrganizationListViewItem_array *)sub_1C2D538(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v45->static_fields->DeckMemberMax);
  this->fields.memberList = v47;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v47, v48, v49);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNeedDeckPosReset = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || !IsNeedDeckPosReset )
LABEL_136:
    sub_1C2D6EC(IsNeedDeckPosReset, SvtEquipMax);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)IsNeedDeckPosReset,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0);
  v50 = 0;
  v103 = v32 - 1;
  v104 = FollowerIndex - 1;
  while ( 1 )
  {
    IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v50 >= *(_DWORD *)(*(_QWORD *)(IsNeedDeckPosReset + 184) + 172LL) )
      break;
    if ( v109 )
    {
      v51 = v46->fields.deckInfo;
      if ( !v51 )
        goto LABEL_136;
      svts = v51->fields.svts;
      if ( !svts )
        goto LABEL_136;
      if ( v50 >= LODWORD(svts->max_length) )
        goto LABEL_140;
      v53 = svts->m_Items[v50];
      if ( !v53 )
        goto LABEL_136;
      p_initPos = &v53->fields.initPos;
    }
    else
    {
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v105, v50, v37);
      if ( !IsNeedDeckPosReset )
        goto LABEL_136;
      p_initPos = (int32_t *)(IsNeedDeckPosReset + 372);
    }
    initPos = *p_initPos;
    followera = 0;
    followerClassIda = 0;
    IsNeedDeckPosReset = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(questRestrictionInfo, initPos, 0);
    v57 = IsNeedDeckPosReset;
    v58 = 0;
    if ( (IsNeedDeckPosReset & 1) != 0 )
    {
      v59 = v46->fields.deckInfo;
      if ( !v59 )
        goto LABEL_136;
      v60 = v59->fields.svts;
      if ( !v60 )
        goto LABEL_136;
      if ( v50 >= LODWORD(v60->max_length) )
        goto LABEL_140;
      v61 = v60->m_Items[v50];
      if ( !v61 )
        goto LABEL_136;
      v58 = 0;
      if ( v103 != v50 )
      {
        npcFollowerSvtId = v61->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v58 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v56);
      }
    }
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo(
                        (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
                        initPos,
                        0);
    if ( !NpcFollowerInfo || ((v57 ^ 1) & 1) != 0 )
    {
      if ( v104 == v50 || v58 )
      {
        v72 = followera;
        v73 = *p_memberList;
        if ( followera )
        {
          v74 = followerClassIda;
          v69 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_33993044(
            v69,
            v50,
            v72,
            v74,
            0,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v107,
            initPos,
            0);
LABEL_94:
          if ( !v73 )
            goto LABEL_136;
        }
        else
        {
          v77 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
          v69 = v77;
          if ( followerInfo )
          {
            PartyOrganizationListViewItem___ctor_33993044(
              v77,
              v50,
              followerInfo,
              v106,
              followerGrandGraphIda,
              setupInfo,
              questRestrictionInfo,
              friendPointCampaignEntityList,
              0,
              v107,
              initPos,
              0);
            goto LABEL_94;
          }
          PartyOrganizationListViewItem___ctor_34030324(v77, v50, 1, setupInfo, questRestrictionInfo, 1, initPos, 0);
          if ( !v73 )
            goto LABEL_136;
        }
        if ( v69 )
        {
          IsNeedDeckPosReset = sub_1C2D5CC(v69, v73->obj.klass->_1.element_class);
          if ( !IsNeedDeckPosReset )
            goto LABEL_141;
        }
        if ( v50 >= LODWORD(v73->max_length) )
          goto LABEL_140;
        v71 = &v73->obj.klass + (int)v50;
        goto LABEL_131;
      }
      GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                        questRestrictionInfo,
                                        initPos,
                                        0);
      IsNeedDeckPosReset = (__int64)UserEventDeckEntity__GetEquipList(v46, v50, 0);
      equipIdList = (System_Int64_array *)IsNeedDeckPosReset;
      isChangeFriendShipSvtEquipSkill = 0;
      if ( GrandServantRestrictionEntity )
      {
        if ( v50 >= *(_DWORD *)(v40 + 24) )
          goto LABEL_140;
        PartyListViewItem__GetGrandServantInfo(
          this,
          GrandServantRestrictionEntity,
          (UserServantEntity_o **)(v40 + 8LL * (int)v50 + 32),
          &equipIdList,
          &isChangeFriendShipSvtEquipSkill,
          v76);
      }
      else
      {
        v78 = (System_Int64_array *)IsNeedDeckPosReset;
        if ( (v57 & 1) != 0 )
        {
          if ( v50 >= *(_DWORD *)(v40 + 24) )
            goto LABEL_140;
          v79 = v40 + 8LL * (int)v50;
          v82 = *(_QWORD *)(v79 + 32);
          v81 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v79 + 32);
          v80 = v82;
          if ( v82 )
          {
            v84 = *(_QWORD *)(v80 + 80);
            v83 = *(_QWORD *)(v80 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v114.fields.currentCryptoKey = v84;
            *(_QWORD *)&v114.fields.fakeValue = v83;
            IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v114, 0);
            if ( v50 >= *(_DWORD *)(v40 + 24) )
              goto LABEL_140;
            if ( !*v81 )
              goto LABEL_136;
            v85 = IsNeedDeckPosReset;
            IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868((*v81)[6], 0);
            if ( v50 >= *(_DWORD *)(v40 + 24) )
              goto LABEL_140;
            v86 = IsNeedDeckPosReset;
            IsNeedDeckPosReset = (__int64)*v81;
            if ( !*v81 )
              goto LABEL_136;
            DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)IsNeedDeckPosReset, 0, 0);
            IsNeedDeckPosReset = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                   questRestrictionInfo,
                                   v85,
                                   v86,
                                   DispLimitCount,
                                   initPos,
                                   0,
                                   0);
            if ( (IsNeedDeckPosReset & 1) != 0 )
            {
              if ( v50 >= *(_DWORD *)(v40 + 24) )
                goto LABEL_140;
              *v81 = 0;
              sub_1C2D434((CGThumbnailListItem_o *)v81, 0, (int32_t)v37, v88);
            }
          }
          v78 = equipIdList;
        }
        if ( !v78 )
          goto LABEL_136;
        IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
        }
        SvtEquipMax = *(unsigned int *)(*(_QWORD *)(IsNeedDeckPosReset + 184) + 48LL);
        if ( (int)SvtEquipMax < SLODWORD(v78->max_length) )
        {
          if ( !*(_DWORD *)(IsNeedDeckPosReset + 224) )
          {
            j_il2cpp_runtime_class_init_0(IsNeedDeckPosReset);
            SvtEquipMax = (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax;
          }
          IsNeedDeckPosReset = sub_1C2D538(long___TypeInfo, SvtEquipMax);
          equipIdList = (System_Int64_array *)IsNeedDeckPosReset;
        }
      }
      if ( v50 >= *(_DWORD *)(v40 + 24) )
        goto LABEL_140;
      v89 = *(UserServantEntity_o **)(v40 + 8LL * (int)v50 + 32);
      v90 = *p_memberList;
      if ( v89 )
      {
        v91 = equipIdList;
        v92 = isChangeFriendShipSvtEquipSkill;
        v69 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34019620(
          v69,
          v50,
          v89,
          v91,
          setupInfo,
          questRestrictionInfo,
          0,
          initPos,
          0,
          0,
          v92,
          0);
        if ( !v90 )
          goto LABEL_136;
        if ( v69 )
        {
          IsNeedDeckPosReset = sub_1C2D5CC(v69, v90->obj.klass->_1.element_class);
          if ( !IsNeedDeckPosReset )
            goto LABEL_141;
        }
        max_length = v90->max_length;
        v46 = v100;
      }
      else
      {
        v69 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34030324(v69, v50, 0, setupInfo, questRestrictionInfo, 1, initPos, 0);
        if ( !v90 )
          goto LABEL_136;
        if ( v69 )
        {
          IsNeedDeckPosReset = sub_1C2D5CC(v69, v90->obj.klass->_1.element_class);
          if ( !IsNeedDeckPosReset )
          {
LABEL_141:
            v97 = sub_1C2D710();
            sub_1C2D5B8(v97, 0);
          }
        }
        max_length = v90->max_length;
      }
      if ( v50 >= max_length )
        goto LABEL_140;
      v71 = &v90->obj.klass + (int)v50;
    }
    else
    {
      v64 = NpcFollowerInfo;
      if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0) )
        v65 = 0;
      else
        v65 = v106;
      IsNpc = FollowerInfo__get_IsNpc(v64, 0);
      v67 = *p_memberList;
      if ( IsNpc )
        v68 = 0;
      else
        v68 = v107;
      v69 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_33993044(
        v69,
        v50,
        v64,
        v65,
        0,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v68,
        initPos,
        0);
      if ( !v67 )
        goto LABEL_136;
      if ( v69 )
      {
        IsNeedDeckPosReset = sub_1C2D5CC(v69, v67->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
          goto LABEL_141;
      }
      if ( v50 >= LODWORD(v67->max_length) )
        goto LABEL_140;
      v71 = &v67->obj.klass + (int)v50;
    }
LABEL_131:
    v71[4] = (Il2CppClass *)v69;
    sub_1C2D434((CGThumbnailListItem_o *)(v71 + 4), (int32_t)v69, (int32_t)v37, v70);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_136;
    if ( v50 >= LODWORD(memberList->max_length) )
      goto LABEL_140;
    IsNeedDeckPosReset = (__int64)memberList->m_Items[v50];
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    cost = this->fields.cost;
    ++v50;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)IsNeedDeckPosReset,
                          0)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)SvtEquipMax);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v96) )
    *isBaseModify = 1;
}


void PartyListViewItem___ctor_33880544(
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
  const MethodInfo *v22; // x3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 Instance; // x0
  unsigned __int64 SvtEquipMax; // x1
  const MethodInfo *v28; // x2
  UserEventDeckEntity_o *v29; // x20
  struct DeckServant_o *deckInfo; // x8
  System_Int64_array *NpcServantFollowerIds; // x23
  PartyListViewItem_o *v32; // x8
  const MethodInfo *v33; // x2
  int32_t v34; // w20
  int32_t DeckMemberMax; // w22
  FollowerInfo_array *QuestFollowerList; // x19
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x3
  int max_length; // w8
  int i; // w19
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  bool v45; // w25
  int32_t v46; // w24
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v48; // w9
  int j; // w10
  QuestRestrictionInfo_SlotInfo_o *v50; // x11
  struct DeckServant_o *v51; // x8
  __int64 v52; // x29
  int v53; // w25
  int v54; // w28
  struct DeckServantData_array *svts; // x8
  PartyListViewItem___c__DisplayClass31_0_o *v56; // x19
  struct DeckServant_o *v57; // x8
  struct DeckServantData_array *v58; // x8
  DeckServantData_o *v59; // x8
  int64_t userSvtId; // x20
  System_Func_object__bool__o *v61; // x20
  BalanceConfig_c *v62; // x0
  _BOOL8 v63; // x0
  __int64 v64; // x1
  const MethodInfo *v65; // x2
  Il2CppClass *klass; // x20
  int v67; // w8
  Il2CppClass **v68; // x8
  __int64 NpcDeployIdx; // x0
  __int64 v70; // x1
  __int64 v71; // x2
  BalanceConfig_c *v72; // x0
  const MethodInfo *v73; // x3
  int32_t k; // w19
  struct DeckServant_o *v75; // x8
  struct DeckServantData_array *v76; // x8
  DeckServantData_o *v77; // x8
  int32_t UserServantDeployIndex; // w0
  unsigned int v79; // w20
  const MethodInfo *v80; // x3
  __int64 v81; // x24
  Il2CppClass **v82; // x0
  BalanceConfig_c *v83; // x0
  struct PartyOrganizationListViewItem_array *v84; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  unsigned __int64 v87; // x24
  signed __int64 v88; // x28
  __int64 m; // x22
  BalanceConfig_c *v90; // x0
  PartyListViewItem___c__DisplayClass31_1_o *v91; // x25
  struct DeckServant_o *v92; // x8
  struct DeckServantData_array *v93; // x8
  DeckServantData_o *v94; // x8
  int32_t *p_initPos; // x8
  int32_t initPos; // w19
  unsigned int *v97; // x20
  PartyOrganizationListViewItem_o *v98; // x25
  const MethodInfo *v99; // x3
  const MethodInfo *v100; // x6
  bool v101; // w20
  int64_t v102; // x4
  FollowerInfo_o *v103; // x29
  bool IsNpc; // w0
  int32_t v105; // w8
  bool v106; // w0
  unsigned int *v107; // x23
  int32_t v108; // w20
  PartyOrganizationListViewItem_o *v109; // x28
  const MethodInfo *v110; // x3
  unsigned __int64 v111; // x20
  unsigned __int64 questPhase; // x8
  FollowerInfo_o *v113; // x29
  int32_t v114; // w25
  PartyOrganizationListViewItem_o *v115; // x0
  System_Func_object__bool__o *v116; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v118; // x25
  FollowerInfo_o *v119; // x29
  System_Collections_Generic_List_object__o *v120; // x20
  int32_t v121; // w25
  PartyOrganizationListViewItem_o *v122; // x0
  bool v123; // w5
  int32_t v124; // w1
  EventUpValSetupInfo_o *v125; // x3
  QuestRestrictionInfo_o *v126; // x4
  bool v127; // w2
  int32_t v128; // w1
  int32_t v129; // w25
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  RestrictionEntity_o *GrandServantRestrictionEntity; // x29
  const MethodInfo *v133; // x5
  UserServantEntity_array *v134; // x8
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v136; // x8
  int32_t classId; // w25
  System_Int64_array *v138; // x25
  UserServantEntity_o *v139; // x8
  __int64 v140; // x25
  __int64 v141; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v142; // x8
  int32_t v143; // w25
  int32_t v144; // w29
  int32_t DispLimitCount; // w0
  const MethodInfo *v146; // x3
  UserServantEntity_o *v147; // x29
  EventUpValSetupInfo_o *v148; // x23
  PartyListViewItem_o *v149; // x26
  unsigned __int64 v150; // x27
  System_Int64_array *v151; // x25
  int32_t v152; // w20
  PartyOrganizationListViewItem_o *v153; // x0
  System_Int64_array *v154; // x3
  EventUpValSetupInfo_o *v155; // x25
  EventUpValSetupInfo_o *v156; // x4
  __int64 v157; // x23
  int v158; // w25
  unsigned __int64 v159; // x29
  UserServantEntity_o **v160; // x26
  PartyListViewItem___c__DisplayClass31_2_o *v161; // x19
  signed __int64 v162; // x20
  System_Func_object__bool__o *v163; // x24
  const MethodInfo *v164; // x3
  unsigned __int64 max_length_low; // x8
  signed __int64 v166; // x28
  EventUpValSetupInfo_o *v167; // x22
  unsigned __int64 v168; // x24
  int v169; // w26
  __int64 n; // x23
  BalanceConfig_c *v171; // x0
  PartyListViewItem___c__DisplayClass31_3_o *v172; // x25
  struct DeckServant_o *v173; // x8
  struct DeckServantData_array *v174; // x8
  __int64 v175; // x8
  int32_t *v176; // x8
  int32_t v177; // w19
  unsigned int *v178; // x20
  PartyOrganizationListViewItem_o *v179; // x25
  const MethodInfo *v180; // x3
  const MethodInfo *v181; // x6
  struct DeckServant_o *v182; // x8
  struct DeckServantData_array *v183; // x8
  __int64 v184; // x8
  int64_t v185; // x4
  _BOOL4 v186; // w22
  char isFixNpc; // w26
  int32_t chkIdx; // w8
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v190; // x29
  int32_t v191; // w22
  bool v192; // w0
  unsigned int *v193; // x20
  int32_t v194; // w26
  PartyOrganizationListViewItem_o *v195; // x0
  int32_t v196; // w3
  PartyOrganizationListViewItem_o *v197; // x25
  const MethodInfo *v198; // x3
  struct PartyOrganizationListViewItem_array *v199; // x8
  struct DeckServant_o *v200; // x9
  struct DeckServantData_array *v201; // x9
  __int64 v202; // x9
  __int64 v203; // x8
  int v204; // w9
  FollowerInfo_o *v205; // x29
  unsigned int *v206; // x27
  int32_t v207; // w22
  PartyOrganizationListViewItem_o *v208; // x0
  int32_t v209; // w3
  PartyOrganizationListViewItem_o *v210; // x25
  const MethodInfo *v211; // x3
  unsigned int *v212; // x19
  int v213; // w26
  PartyOrganizationListViewItem_o *v214; // x0
  System_Func_object__bool__o *v215; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v216; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v217; // x25
  bool v218; // w0
  RestrictionEntity_o *v219; // x29
  const MethodInfo *v220; // x5
  UserServantEntity_array *v221; // x20
  struct PartyOrganizationListViewItem_array *v222; // x8
  struct DeckServant_o *v223; // x9
  struct DeckServantData_array *v224; // x9
  __int64 v225; // x9
  FollowerInfo_o *v226; // x29
  unsigned int *v227; // x26
  __int64 v228; // x8
  __int64 v229; // x8
  int32_t v230; // w22
  PartyOrganizationListViewItem_o *v231; // x25
  const MethodInfo *v232; // x3
  System_Int64_array *v233; // x25
  __int64 v234; // x8
  __int64 v235; // x25
  __int64 v236; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v237; // x8
  int32_t v238; // w25
  int32_t v239; // w29
  int32_t v240; // w0
  const MethodInfo *v241; // x3
  UserServantEntity_o *v242; // x29
  unsigned int *v243; // x26
  System_Int64_array *v244; // x22
  int32_t v245; // w20
  PartyOrganizationListViewItem_o *v246; // x25
  const MethodInfo *v247; // x3
  struct PartyOrganizationListViewItem_array *v248; // x8
  int32_t v249; // w19
  const MethodInfo *v250; // x1
  __int64 v251; // x0
  UserServantEntity_o **v252; // [xsp+28h] [xbp-178h]
  bool v253; // [xsp+30h] [xbp-170h]
  _BOOL4 v254; // [xsp+30h] [xbp-170h]
  int32_t followerGrandGraphIda; // [xsp+34h] [xbp-16Ch]
  int v256; // [xsp+38h] [xbp-168h]
  int v257; // [xsp+38h] [xbp-168h]
  int32_t v258; // [xsp+3Ch] [xbp-164h]
  int32_t v259; // [xsp+3Ch] [xbp-164h]
  bool v260; // [xsp+3Ch] [xbp-164h]
  signed __int64 v262; // [xsp+48h] [xbp-158h]
  int32_t v263; // [xsp+58h] [xbp-148h]
  int v264; // [xsp+5Ch] [xbp-144h]
  int32_t v265; // [xsp+60h] [xbp-140h]
  int32_t FollowerIndex; // [xsp+64h] [xbp-13Ch]
  PartyListViewItem_o *v267; // [xsp+68h] [xbp-138h]
  FollowerInfo_o *v268; // [xsp+70h] [xbp-130h]
  EventUpValSetupInfo_o *setupInfoa; // [xsp+78h] [xbp-128h]
  EventUpValSetupInfo_o *setupInfob; // [xsp+78h] [xbp-128h]
  System_Int64_array *v271; // [xsp+80h] [xbp-120h]
  int v272; // [xsp+80h] [xbp-120h]
  QuestRestrictionInfo_o *v273; // [xsp+88h] [xbp-118h]
  int64_t *m_Items; // [xsp+88h] [xbp-118h]
  int v275; // [xsp+88h] [xbp-118h]
  System_Collections_Generic_List_object__o *v276; // [xsp+90h] [xbp-110h]
  PartyListViewItem_o *v277; // [xsp+98h] [xbp-108h]
  UserServantEntity_array *userServantList; // [xsp+A0h] [xbp-100h]
  _BOOL4 v279; // [xsp+ACh] [xbp-F4h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+B0h] [xbp-F0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+C0h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v283; // [xsp+C8h] [xbp-D8h] BYREF
  int32_t v284; // [xsp+E4h] [xbp-BCh] BYREF
  System_Int64_array *v285; // [xsp+E8h] [xbp-B8h] BYREF
  int32_t v286; // [xsp+F4h] [xbp-ACh] BYREF
  FollowerInfo_o *v287; // [xsp+F8h] [xbp-A8h] BYREF
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+104h] [xbp-9Ch] BYREF
  System_Int64_array *equipIdList; // [xsp+108h] [xbp-98h] BYREF
  int32_t followerClassIda; // [xsp+114h] [xbp-8Ch] BYREF
  FollowerInfo_o *followera; // [xsp+118h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v292; // [xsp+120h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v293; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v294; // 0:x0.16

  if ( (byte_4C22C09 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_BasicHelper_Any_FollowerInfo___);
    sub_1C2D490(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_FollowerInfo___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_FollowerInfo___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__get_Current__);
    sub_1C2D490(&FollowerInfo___TypeInfo);
    sub_1C2D490(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_FollowerInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FollowerInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FollowerInfo__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_FollowerInfo__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&Method_PartyListViewItem___c__DisplayClass31_0___ctor_b__0__);
    sub_1C2D490(&PartyListViewItem___c__DisplayClass31_0_TypeInfo);
    sub_1C2D490(&Method_PartyListViewItem___c__DisplayClass31_1___ctor_b__1__);
    sub_1C2D490(&PartyListViewItem___c__DisplayClass31_1_TypeInfo);
    sub_1C2D490(&Method_PartyListViewItem___c__DisplayClass31_2___ctor_b__2__);
    sub_1C2D490(&PartyListViewItem___c__DisplayClass31_2_TypeInfo);
    sub_1C2D490(&Method_PartyListViewItem___c__DisplayClass31_3___ctor_b__3__);
    sub_1C2D490(&PartyListViewItem___c__DisplayClass31_3_TypeInfo);
    sub_1C2D490(&UserServantEntity___TypeInfo);
    byte_4C22C09 = 1;
  }
  memset(&v292, 0, sizeof(v292));
  followera = 0;
  followerClassIda = 0;
  equipIdList = 0;
  isChangeFriendShipSvtEquipSkill = 0;
  v287 = 0;
  v286 = 0;
  v285 = 0;
  v284 = 0;
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v21, v22);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v24, v25);
  v29 = deck;
  if ( !deck )
    goto LABEL_75;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_75;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v28) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_75;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0);
    v29 = deck;
  }
  NpcServantFollowerIds = UserEventDeckEntity__GetNpcServantFollowerIds(v29, 0);
  userServantList = UserEventDeckEntity__GetUserServantList(v29, 0, 0, 0);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  if ( *(int *)(Instance + 56) < 1 )
  {
    v277 = 0;
    v264 = 0;
    v279 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v32 = *(PartyListViewItem_o **)(Instance + 80);
    v264 = 0;
    v279 = v32 == 0;
    v277 = v32;
    if ( follower && v32 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      v264 = *(_DWORD *)(Instance + 56);
      Instance = (__int64)PartyListViewItem__GetMember(v277, v264 - 1, v33);
      if ( !Instance )
        goto LABEL_75;
      v34 = *(_DWORD *)(Instance + 372);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v34, follower, 0);
      v279 = 0;
    }
  }
  Instance = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  v268 = follower;
  if ( !questRestrictionInfo )
    goto LABEL_75;
  DeckMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMemberMax;
  if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0) )
    DeckMemberMax = questRestrictionInfo->fields.servantNumMax;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo
    || !Instance
    || (QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                              (NpcFollowerMaster_o *)Instance,
                              (*p_questRestrictionInfo)->fields.questId,
                              (*p_questRestrictionInfo)->fields.questPhase,
                              0),
        v276 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_FollowerInfo__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v276,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_FollowerInfo___ctor__),
        !QuestFollowerList) )
  {
LABEL_75:
    sub_1C2D6EC(Instance, SvtEquipMax);
  }
  max_length = QuestFollowerList->max_length;
  npcFollowerInfoList = QuestFollowerList;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        goto LABEL_425;
      SvtEquipMax = (unsigned __int64)npcFollowerInfoList->m_Items[i];
      if ( !SvtEquipMax )
        goto LABEL_75;
      if ( !*(_BYTE *)(SvtEquipMax + 104)
        && (questRestrictionInfo->fields.isNotTransitionSupportList
         || !questRestrictionInfo->fields.isNpcMultipleBattle
         || *(_BYTE *)(SvtEquipMax + 105)) )
      {
        if ( !v276 )
          goto LABEL_75;
        items = v276->fields._items;
        v42 = Method_System_Collections_Generic_List_FollowerInfo__Add__;
        ++v276->fields._version;
        if ( !items )
          goto LABEL_75;
        size = v276->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v276,
            (Il2CppObject *)SvtEquipMax,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = &items->obj.klass + size;
          v276->fields._size = size + 1;
          v44[4] = (Il2CppClass *)SvtEquipMax;
          sub_1C2D434((CGThumbnailListItem_o *)(v44 + 4), SvtEquipMax, (int32_t)v37, v38);
        }
      }
      max_length = npcFollowerInfoList->max_length;
    }
  }
  v45 = isNew;
  FollowerIndex = PartyListViewItem__GetFollowerIndex(
                    this,
                    deck,
                    (System_Collections_Generic_List_FollowerInfo__o *)v276,
                    v38);
  setupInfoa = setupInfo;
  v273 = questRestrictionInfo;
  v267 = this;
  if ( isNew || !questRestrictionInfo->fields.isNpcEditablePos )
    goto LABEL_117;
  Instance = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
  if ( (Instance & 1) != 0 )
  {
    if ( !v276 )
      goto LABEL_75;
    v46 = v276->fields._size;
  }
  else
  {
    slotInfos = questRestrictionInfo->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_75;
    v48 = slotInfos->max_length;
    if ( v48 < 1 )
    {
      v46 = 0;
    }
    else
    {
      v46 = 0;
      for ( j = 0; j != v48; ++j )
      {
        if ( v48 == j )
          goto LABEL_425;
        v50 = slotInfos->m_Items[j];
        if ( !v50 )
          goto LABEL_75;
        if ( v50->fields.slotType == 1 )
          v46 += v50->fields.isMoved;
      }
    }
  }
  v51 = deck->fields.deckInfo;
  if ( !v51 )
    goto LABEL_75;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  while ( 1 )
  {
    svts = v51->fields.svts;
    if ( !svts )
      goto LABEL_75;
    if ( (int)v52 >= SLODWORD(svts->max_length) )
      break;
    v56 = (PartyListViewItem___c__DisplayClass31_0_o *)sub_1C2D6DC(PartyListViewItem___c__DisplayClass31_0_TypeInfo);
    PartyListViewItem___c__DisplayClass31_0___ctor(v56, 0);
    v57 = deck->fields.deckInfo;
    if ( !v57 )
      goto LABEL_75;
    v58 = v57->fields.svts;
    if ( !v58 )
      goto LABEL_75;
    if ( (unsigned int)v52 >= LODWORD(v58->max_length) )
      goto LABEL_425;
    v59 = v58->m_Items[v52];
    if ( v59 && v56 )
    {
      userSvtId = v59->fields.userSvtId;
      v56->fields.npcSvtId = v59->fields.npcFollowerSvtId;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(
                   questRestrictionInfo,
                   v59->fields.initPos,
                   0);
      if ( (int)v52 >= DeckMemberMax && (userSvtId || v56->fields.npcSvtId) )
        v53 = 1;
      if ( !(Instance & 1 | (v56->fields.npcSvtId == 0)) )
      {
        v61 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v61,
          (Il2CppObject *)v56,
          Method_PartyListViewItem___c__DisplayClass31_0___ctor_b__0__,
          0);
        Instance = BasicHelper__Any_object_(
                     (System_Collections_Generic_List_T__o *)v276,
                     (System_Func_T__bool__o *)v61,
                     (const MethodInfo_30B7CF0 *)Method_BasicHelper_Any_FollowerInfo___);
        v54 += Instance & 1;
      }
      ++v52;
      v51 = deck->fields.deckInfo;
      if ( v51 )
        continue;
    }
    goto LABEL_75;
  }
  if ( ((v54 == v46) & (v53 ^ 1)) != 0 )
  {
    v45 = isNew;
    goto LABEL_117;
  }
  v62 = BalanceConfig_TypeInfo;
  v45 = isNew;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v62 = BalanceConfig_TypeInfo;
  }
  NpcServantFollowerIds = (System_Int64_array *)sub_1C2D538(
                                                  long___TypeInfo,
                                                  (unsigned int)v62->static_fields->DeckMemberMax);
  Instance = (__int64)v276;
  if ( !v276 )
    goto LABEL_75;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v283,
    v276,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
  v292 = v283;
  while ( 1 )
  {
    v63 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v292,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    if ( !v63 )
      break;
    if ( !v292.fields._current )
      sub_1C2D6EC(v63, v64);
    klass = v292.fields._current[5].klass;
    if ( klass )
    {
      v67 = LODWORD(v292.fields._current[5].monitor) - 1;
      if ( v67 >= 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_1C2D6EC(v63, v64);
        if ( (unsigned int)v67 >= LODWORD(NpcServantFollowerIds->max_length) )
          sub_1C2D6F4(v63, v64, v65);
        v68 = &NpcServantFollowerIds->obj.klass + (unsigned int)v67;
        goto LABEL_92;
      }
      NpcDeployIdx = PartyListViewItem__GetNpcDeployIdx(this, NpcServantFollowerIds, v65);
      if ( (NpcDeployIdx & 0x80000000) == 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_1C2D6EC(NpcDeployIdx, v70);
        if ( (unsigned int)NpcDeployIdx >= LODWORD(NpcServantFollowerIds->max_length) )
          sub_1C2D6F4(NpcDeployIdx, v70, v71);
        v68 = &NpcServantFollowerIds->obj.klass + (unsigned int)NpcDeployIdx;
LABEL_92:
        v68[4] = klass;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v292,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
  v72 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v72 = BalanceConfig_TypeInfo;
  }
  userServantList = (UserServantEntity_array *)sub_1C2D538(
                                                 UserServantEntity___TypeInfo,
                                                 (unsigned int)v72->static_fields->DeckMemberMax);
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
    v75 = deck->fields.deckInfo;
    if ( !v75 )
      goto LABEL_75;
    v76 = v75->fields.svts;
    if ( !v76 )
      goto LABEL_75;
    if ( (unsigned int)k >= LODWORD(v76->max_length) )
      goto LABEL_425;
    v77 = v76->m_Items[k];
    if ( !v77 )
      goto LABEL_75;
    if ( v77->fields.userSvtId )
    {
      UserServantDeployIndex = PartyListViewItem__GetUserServantDeployIndex(
                                 (PartyListViewItem_o *)Instance,
                                 userServantList,
                                 NpcServantFollowerIds,
                                 v73);
      if ( (UserServantDeployIndex & 0x80000000) == 0 )
      {
        v79 = UserServantDeployIndex;
        if ( UserServantDeployIndex < DeckMemberMax )
        {
          Instance = (__int64)UserEventDeckEntity__GetUserServant(deck, k, 0);
          if ( !userServantList )
            goto LABEL_75;
          v81 = Instance;
          if ( Instance )
          {
            Instance = sub_1C2D5CC(Instance, userServantList->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_426;
          }
          if ( v79 >= LODWORD(userServantList->max_length) )
            goto LABEL_425;
          v82 = &userServantList->obj.klass + v79;
          v82[4] = (Il2CppClass *)v81;
          sub_1C2D434((CGThumbnailListItem_o *)(v82 + 4), v81, (int32_t)v37, v80);
          questRestrictionInfo = v273;
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
                      (System_Collections_Generic_List_FollowerInfo__o *)v276,
                      v37);
  }
LABEL_117:
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v268 = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v263 = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    followerGrandGraphIda = *(_DWORD *)(Instance + 36);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v265 = *(_DWORD *)(Instance + 40);
  }
  else
  {
    v265 = followerDeckId;
    followerGrandGraphIda = followerGrandGraphId;
    v263 = followerClassId;
  }
  v83 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v83 = BalanceConfig_TypeInfo;
  }
  v84 = (struct PartyOrganizationListViewItem_array *)sub_1C2D538(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v83->static_fields->DeckMemberMax);
  this->fields.memberList = v84;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v84, v85, v86);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( !v45 && questRestrictionInfo->fields.isNpcEditablePos )
  {
    m_Items = NpcServantFollowerIds->m_Items;
    v87 = 0;
    v88 = DeckMemberMax;
    v252 = userServantList->m_Items;
    v256 = -1;
    while ( 1 )
    {
      for ( m = 8 * v87; ; m += 8 )
      {
        v90 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v90 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v87 >= v90->static_fields->DeckMemberMax )
          goto LABEL_419;
        v91 = (PartyListViewItem___c__DisplayClass31_1_o *)sub_1C2D6DC(PartyListViewItem___c__DisplayClass31_1_TypeInfo);
        PartyListViewItem___c__DisplayClass31_1___ctor(v91, 0);
        if ( v279 )
        {
          v92 = deck->fields.deckInfo;
          if ( !v92 )
            goto LABEL_75;
          v93 = v92->fields.svts;
          if ( !v93 )
            goto LABEL_75;
          if ( v87 >= LODWORD(v93->max_length) )
            goto LABEL_425;
          v94 = v93->m_Items[v87];
          if ( !v94 )
            goto LABEL_75;
          p_initPos = &v94->fields.initPos;
        }
        else
        {
          Instance = (__int64)PartyListViewItem__GetMember(v277, v87, v37);
          if ( !Instance )
            goto LABEL_75;
          p_initPos = (int32_t *)(Instance + 372);
        }
        initPos = *p_initPos;
        if ( (__int64)v87 < v88 )
          break;
        v97 = (unsigned int *)*p_memberList;
        v98 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34030324(v98, v87, 0, setupInfo, questRestrictionInfo, 1, initPos, 0);
        if ( !v97 )
          goto LABEL_75;
        if ( v98 )
        {
          Instance = sub_1C2D5CC(v98, *(_QWORD *)(*(_QWORD *)v97 + 64LL));
          if ( !Instance )
            goto LABEL_426;
        }
        if ( v87 >= v97[6] )
          goto LABEL_425;
        *(_QWORD *)&v97[2 * v87 + 8] = v98;
        sub_1C2D434((CGThumbnailListItem_o *)&v97[(unsigned __int64)m / 4 + 8], (int32_t)v98, (int32_t)v37, v99);
        ++v87;
      }
      if ( !v91 )
        goto LABEL_75;
      v91->fields.chkIdx = v87 + 1;
      followera = 0;
      followerClassIda = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(questRestrictionInfo, initPos, 0);
      v101 = 0;
      v258 = Instance;
      if ( (Instance & 1) != 0 )
      {
        if ( !NpcServantFollowerIds )
          goto LABEL_75;
        if ( v87 >= LODWORD(NpcServantFollowerIds->max_length) )
          goto LABEL_425;
        v102 = m_Items[v87];
        v101 = v102 >= 1
            && v91->fields.chkIdx != v264
            && PartyListViewItem__SetNpcFollowerInfo(
                 this,
                 &followera,
                 &followerClassIda,
                 npcFollowerInfoList,
                 v102,
                 initPos,
                 v100);
      }
      v253 = !QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0)
          && QuestRestrictionInfo__IsPositionFixNpc(questRestrictionInfo, initPos, 0);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                            (PartyOrganizationUtility_o *)Instance,
                            initPos,
                            0);
      v262 = v88;
      v271 = NpcServantFollowerIds;
      if ( !Instance || ((v258 ^ 1) & 1) != 0 )
      {
        if ( v101 || v91->fields.chkIdx == FollowerIndex )
        {
          v113 = followera;
          v107 = (unsigned int *)*p_memberList;
          if ( followera )
          {
            v114 = followerClassIda;
            v109 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_33993044(
              v109,
              v87,
              v113,
              v114,
              0,
              setupInfo,
              questRestrictionInfo,
              0,
              0,
              v265,
              initPos,
              0);
            v111 = v87 + 1;
            if ( !v107 )
              goto LABEL_75;
          }
          else
          {
            v115 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
            v111 = v87 + 1;
            v109 = v115;
            if ( !v268 )
            {
              v127 = 1;
              v128 = v87;
              goto LABEL_198;
            }
            PartyOrganizationListViewItem___ctor_33993044(
              v115,
              v87,
              v268,
              v263,
              followerGrandGraphIda,
              setupInfo,
              questRestrictionInfo,
              0,
              0,
              v265,
              initPos,
              0);
LABEL_199:
            if ( !v107 )
              goto LABEL_75;
          }
          goto LABEL_215;
        }
        if ( v253 )
        {
          v116 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_FollowerInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v116,
            (Il2CppObject *)v91,
            Method_PartyListViewItem___c__DisplayClass31_1___ctor_b__1__,
            0);
          v117 = System_Linq_Enumerable__Where_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v276,
                   (System_Func_TSource__bool__o *)v116,
                   (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
          v118 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C2D5CC(v117, FollowerInfo___TypeInfo);
          if ( !v118 )
            v118 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                          v117,
                                                                          (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
          v111 = v87 + 1;
          if ( System_Linq_Enumerable__Any_object_(
                 v118,
                 (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
          {
            Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                                  v118,
                                  0,
                                  (const MethodInfo_30F295C *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
            v119 = (FollowerInfo_o *)Instance;
LABEL_183:
            v107 = (unsigned int *)*p_memberList;
            if ( v119 )
              goto LABEL_229;
          }
          else
          {
            Instance = (__int64)v276;
            if ( !v276 )
              goto LABEL_75;
            if ( v276->fields._size >= 1 )
            {
              v129 = 0;
              while ( 1 )
              {
                Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      v129,
                                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
                if ( !Instance || !NpcServantFollowerIds )
                  goto LABEL_75;
                if ( v87 >= LODWORD(NpcServantFollowerIds->max_length) )
                  goto LABEL_425;
                if ( *(_QWORD *)(Instance + 80) != m_Items[v87] )
                {
                  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                        v276,
                                        v129,
                                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
                  if ( !Instance )
                    goto LABEL_75;
                  if ( v256 < v129 && *(int *)(Instance + 88) <= 0 )
                    break;
                }
                Instance = (__int64)v276;
                if ( ++v129 >= v276->fields._size )
                  goto LABEL_212;
              }
              Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                    v276,
                                    v129,
                                    (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
              v119 = (FollowerInfo_o *)Instance;
              v256 = v129;
              goto LABEL_183;
            }
LABEL_212:
            v107 = (unsigned int *)*p_memberList;
          }
          v122 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
          v109 = v122;
          v124 = v87;
          v125 = setupInfo;
          v126 = questRestrictionInfo;
          v123 = 0;
LABEL_214:
          PartyOrganizationListViewItem___ctor_34030324(v122, v124, 0, v125, v126, v123, initPos, 0);
          if ( !v107 )
            goto LABEL_75;
          goto LABEL_215;
        }
        if ( !NpcServantFollowerIds )
          goto LABEL_75;
        if ( v87 >= LODWORD(NpcServantFollowerIds->max_length) )
          goto LABEL_425;
        if ( m_Items[v87] )
        {
          Instance = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v276,
                       (const MethodInfo_30EECD8 *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
          if ( (int)Instance < 1 )
          {
LABEL_195:
            v111 = v87 + 1;
            v107 = (unsigned int *)*p_memberList;
          }
          else
          {
            if ( !v276 )
              goto LABEL_75;
            v120 = v276;
            v121 = 0;
            while ( 1 )
            {
              Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                    v120,
                                    v121,
                                    (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
              if ( !Instance )
                goto LABEL_75;
              if ( v87 >= LODWORD(NpcServantFollowerIds->max_length) )
                goto LABEL_425;
              if ( *(_QWORD *)(Instance + 80) == m_Items[v87] )
                break;
              v120 = v276;
              if ( ++v121 >= System_Linq_Enumerable__Count_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)v276,
                               (const MethodInfo_30EECD8 *)Method_System_Linq_Enumerable_Count_FollowerInfo___) )
                goto LABEL_195;
            }
            Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                  v276,
                                  v121,
                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
            v111 = v87 + 1;
            v107 = (unsigned int *)*p_memberList;
            if ( Instance )
            {
              v119 = (FollowerInfo_o *)Instance;
LABEL_229:
              userSvtLeaderHash = v119->fields.userSvtLeaderHash;
              if ( !userSvtLeaderHash )
                goto LABEL_75;
              if ( !LODWORD(userSvtLeaderHash->max_length) )
                goto LABEL_425;
              v136 = userSvtLeaderHash->m_Items[0];
              if ( !v136 )
                goto LABEL_75;
              classId = v136->fields.classId;
              v109 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_33993044(
                v109,
                v87,
                v119,
                classId,
                0,
                setupInfo,
                questRestrictionInfo,
                0,
                1,
                v265,
                initPos,
                0);
              if ( !v107 )
                goto LABEL_75;
LABEL_215:
              if ( v109 )
              {
                Instance = sub_1C2D5CC(v109, *(_QWORD *)(*(_QWORD *)v107 + 64LL));
                if ( !Instance )
                  goto LABEL_426;
              }
              questPhase = v107[6];
              goto LABEL_218;
            }
          }
          v122 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
          v109 = v122;
          v123 = 1;
          v124 = v87;
          v125 = setupInfo;
          v126 = questRestrictionInfo;
          goto LABEL_214;
        }
        GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                          questRestrictionInfo,
                                          initPos,
                                          0);
        Instance = (__int64)UserEventDeckEntity__GetEquipList(deck, v87, 0);
        equipIdList = (System_Int64_array *)Instance;
        isChangeFriendShipSvtEquipSkill = 0;
        if ( GrandServantRestrictionEntity )
        {
          if ( !userServantList )
            goto LABEL_75;
          v111 = v87 + 1;
          if ( v87 >= LODWORD(userServantList->max_length) )
            goto LABEL_425;
          PartyListViewItem__GetGrandServantInfo(
            this,
            GrandServantRestrictionEntity,
            &v252[(unsigned __int64)m / 8],
            &equipIdList,
            &isChangeFriendShipSvtEquipSkill,
            v133);
          v134 = userServantList;
        }
        else
        {
          v138 = (System_Int64_array *)Instance;
          if ( (v258 & 1) != 0 )
          {
            if ( !userServantList )
              goto LABEL_75;
            if ( v87 >= LODWORD(userServantList->max_length) )
              goto LABEL_425;
            v139 = v252[v87];
            if ( v139 )
            {
              v141 = *(_QWORD *)&v139->fields.svtId.fields.currentCryptoKey;
              v140 = *(_QWORD *)&v139->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v293.fields.currentCryptoKey = v141;
              *(_QWORD *)&v293.fields.fakeValue = v140;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v293, 0);
              if ( v87 >= LODWORD(userServantList->max_length) )
                goto LABEL_425;
              v142 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v252[v87];
              if ( !v142 )
                goto LABEL_75;
              v143 = Instance;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v142[6], 0);
              if ( v87 >= LODWORD(userServantList->max_length) )
                goto LABEL_425;
              v144 = Instance;
              Instance = (__int64)v252[v87];
              if ( !Instance )
                goto LABEL_75;
              DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
              Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                           questRestrictionInfo,
                           v143,
                           v144,
                           DispLimitCount,
                           initPos,
                           0,
                           0);
              if ( (Instance & 1) != 0 )
              {
                if ( v87 >= LODWORD(userServantList->max_length) )
                  goto LABEL_425;
                v252[v87] = 0;
                sub_1C2D434((CGThumbnailListItem_o *)&v252[(unsigned __int64)m / 8], 0, (int32_t)v37, v146);
              }
            }
            v138 = equipIdList;
          }
          if ( !v138 )
            goto LABEL_75;
          Instance = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Instance = (__int64)BalanceConfig_TypeInfo;
          }
          v111 = v87 + 1;
          SvtEquipMax = *(unsigned int *)(*(_QWORD *)(Instance + 184) + 48LL);
          if ( (int)SvtEquipMax < SLODWORD(v138->max_length) )
          {
            if ( !*(_DWORD *)(Instance + 224) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              SvtEquipMax = (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax;
            }
            Instance = sub_1C2D538(long___TypeInfo, SvtEquipMax);
            equipIdList = (System_Int64_array *)Instance;
          }
          v134 = userServantList;
          if ( !userServantList )
            goto LABEL_75;
        }
        if ( v87 >= LODWORD(v134->max_length) )
          goto LABEL_425;
        v147 = v252[v87];
        v107 = (unsigned int *)*p_memberList;
        if ( !v147 )
        {
          v115 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
          v109 = v115;
          v128 = v87;
          v127 = 0;
LABEL_198:
          PartyOrganizationListViewItem___ctor_34030324(
            v115,
            v128,
            v127,
            setupInfo,
            questRestrictionInfo,
            1,
            initPos,
            0);
          goto LABEL_199;
        }
        setupInfob = (EventUpValSetupInfo_o *)*p_memberList;
        v148 = setupInfo;
        v149 = this;
        v150 = v111;
        v151 = equipIdList;
        v152 = isChangeFriendShipSvtEquipSkill;
        v153 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
        v154 = v151;
        v155 = v148;
        v156 = v148;
        v107 = (unsigned int *)setupInfob;
        v109 = v153;
        PartyOrganizationListViewItem___ctor_34019620(
          v153,
          v87,
          v147,
          v154,
          v156,
          questRestrictionInfo,
          0,
          initPos,
          0,
          0,
          v152,
          0);
        if ( !setupInfob )
          goto LABEL_75;
        v111 = v150;
        if ( v109 )
        {
          Instance = sub_1C2D5CC(v109, setupInfob->klass->_1.element_class);
          if ( !Instance )
            goto LABEL_426;
        }
        questPhase = (unsigned int)setupInfob->fields.questPhase;
        this = v149;
        setupInfo = v155;
      }
      else
      {
        v103 = (FollowerInfo_o *)Instance;
        IsNpc = FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0);
        v105 = v263;
        if ( IsNpc )
          v105 = 0;
        v259 = v105;
        v106 = FollowerInfo__get_IsNpc(v103, 0);
        v107 = (unsigned int *)*p_memberList;
        if ( v106 )
          v108 = 0;
        else
          v108 = v265;
        v109 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_33993044(
          v109,
          v87,
          v103,
          v259,
          0,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v108,
          initPos,
          0);
        if ( !v107 )
          goto LABEL_75;
        v111 = v87 + 1;
        if ( v109 )
        {
          Instance = sub_1C2D5CC(v109, *(_QWORD *)(*(_QWORD *)v107 + 64LL));
          if ( !Instance )
            goto LABEL_426;
        }
        questPhase = v107[6];
      }
LABEL_218:
      if ( v87 >= questPhase )
        goto LABEL_425;
      *(_QWORD *)&v107[2 * v87 + 8] = v109;
      sub_1C2D434((CGThumbnailListItem_o *)&v107[(unsigned __int64)m / 4 + 8], (int32_t)v109, (int32_t)v37, v110);
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_75;
      NpcServantFollowerIds = v271;
      if ( v87 >= LODWORD(memberList->max_length) )
        goto LABEL_425;
      Instance = (__int64)memberList->m_Items[v87];
      v88 = v262;
      if ( !Instance )
        goto LABEL_75;
      cost = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                        + cost;
      v87 = v111;
    }
  }
  v272 = questRestrictionInfo->fields.myServantNumMax
       + (FollowerIndex > 0 && !questRestrictionInfo->fields.isNotTransitionSupportList);
  if ( !v45 )
  {
    if ( !userServantList )
      goto LABEL_75;
    if ( SLODWORD(userServantList->max_length) >= 1 )
    {
      v157 = 0;
      v158 = 0;
      v159 = 0;
      v160 = userServantList->m_Items;
      while ( 1 )
      {
        v161 = (PartyListViewItem___c__DisplayClass31_2_o *)sub_1C2D6DC(PartyListViewItem___c__DisplayClass31_2_TypeInfo);
        PartyListViewItem___c__DisplayClass31_2___ctor(v161, 0);
        if ( !v161 )
          goto LABEL_75;
        v162 = v159 + 1;
        v161->fields.chkIdx = v159 + 1;
        if ( v159 >= LODWORD(userServantList->max_length) )
          goto LABEL_425;
        if ( v160[v159] )
          ++v158;
        v163 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v163,
          (Il2CppObject *)v161,
          Method_PartyListViewItem___c__DisplayClass31_2___ctor_b__2__,
          0);
        Instance = (__int64)System_Linq_Enumerable__Where_object_(
                              (System_Collections_Generic_IEnumerable_TSource__o *)npcFollowerInfoList,
                              (System_Func_TSource__bool__o *)v163,
                              (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
        max_length_low = LODWORD(userServantList->max_length);
        if ( v159 >= max_length_low )
          goto LABEL_425;
        questRestrictionInfo = v273;
        if ( !v160[v159] )
          goto LABEL_281;
        if ( v161->fields.chkIdx > DeckMemberMax )
          goto LABEL_279;
        Instance = System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                     (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
        if ( v158 > v272 || (Instance & 1) != 0 )
          break;
LABEL_281:
        ++v157;
        ++v159;
        if ( v162 >= SLODWORD(userServantList->max_length) )
          goto LABEL_282;
      }
      max_length_low = LODWORD(userServantList->max_length);
LABEL_279:
      if ( v159 >= max_length_low )
        goto LABEL_425;
      v160[v159] = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v160[v157], 0, (int32_t)v37, v164);
      goto LABEL_281;
    }
  }
LABEL_282:
  v166 = DeckMemberMax;
  v167 = setupInfoa;
  v168 = 0;
  v169 = 0;
LABEL_283:
  for ( n = 8 * v168 + 32; ; n += 8 )
  {
    v171 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v171 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v168 >= v171->static_fields->DeckMemberMax )
      break;
    v172 = (PartyListViewItem___c__DisplayClass31_3_o *)sub_1C2D6DC(PartyListViewItem___c__DisplayClass31_3_TypeInfo);
    PartyListViewItem___c__DisplayClass31_3___ctor(v172, 0);
    if ( v279 )
    {
      v173 = deck->fields.deckInfo;
      if ( !v173 )
        goto LABEL_75;
      v174 = v173->fields.svts;
      if ( !v174 )
        goto LABEL_75;
      if ( v168 >= LODWORD(v174->max_length) )
        goto LABEL_425;
      v175 = *(__int64 *)((char *)&v174->obj.klass + n);
      if ( !v175 )
        goto LABEL_75;
      v176 = (int32_t *)(v175 + 76);
    }
    else
    {
      Instance = (__int64)PartyListViewItem__GetMember(v277, v168, v37);
      if ( !Instance )
        goto LABEL_75;
      v176 = (int32_t *)(Instance + 372);
    }
    v177 = *v176;
    if ( (__int64)v168 < v166 )
    {
      if ( !v172 )
        goto LABEL_75;
      v172->fields.chkIdx = v168 + 1;
      v287 = 0;
      v286 = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(questRestrictionInfo, v177, 0);
      v275 = v169;
      v257 = Instance;
      if ( (Instance & 1) == 0 )
        goto LABEL_310;
      v182 = deck->fields.deckInfo;
      if ( !v182 )
        goto LABEL_75;
      v183 = v182->fields.svts;
      if ( !v183 )
        goto LABEL_75;
      if ( v168 >= LODWORD(v183->max_length) )
        goto LABEL_425;
      v184 = *(__int64 *)((char *)&v183->obj.klass + n);
      if ( !v184 )
        goto LABEL_75;
      v185 = *(_QWORD *)(v184 + 64);
      if ( v185 >= 1 )
      {
        if ( v172->fields.chkIdx == v264 )
        {
          v186 = 0;
          isFixNpc = 1;
          v260 = 1;
          goto LABEL_316;
        }
        v260 = PartyListViewItem__SetNpcFollowerInfo(this, &v287, &v286, npcFollowerInfoList, v185, v177, v181);
        v186 = 0;
LABEL_315:
        isFixNpc = 1;
        goto LABEL_316;
      }
LABEL_310:
      if ( !v268 || questRestrictionInfo->fields.isNotTransitionSupportList )
      {
        v186 = 0;
        v260 = 0;
        goto LABEL_315;
      }
      chkIdx = v172->fields.chkIdx;
      v260 = 0;
      isFixNpc = chkIdx != FollowerIndex;
      v186 = chkIdx == FollowerIndex;
LABEL_316:
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v177, 0);
      if ( NpcFollowerInfo && ((v257 ^ 1) & 1) == 0 )
      {
        v190 = NpcFollowerInfo;
        if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0) )
          v191 = 0;
        else
          v191 = v263;
        v192 = FollowerInfo__get_IsNpc(v190, 0);
        v193 = (unsigned int *)*p_memberList;
        if ( v192 )
          v194 = 0;
        else
          v194 = v265;
        v195 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
        v196 = v191;
        v167 = setupInfoa;
        v197 = v195;
        PartyOrganizationListViewItem___ctor_33993044(
          v195,
          v168,
          v190,
          v196,
          0,
          setupInfoa,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v194,
          v177,
          0);
        if ( !v193 )
          goto LABEL_75;
        if ( !v197 || (Instance = sub_1C2D5CC(v197, *(_QWORD *)(*(_QWORD *)v193 + 64LL))) != 0 )
        {
          if ( v168 < v193[6] )
          {
            *(_QWORD *)((char *)v193 + n) = v197;
            sub_1C2D434((CGThumbnailListItem_o *)((char *)v193 + n), (int32_t)v197, (int32_t)v37, v198);
            v199 = *p_memberList;
            if ( !*p_memberList )
              goto LABEL_75;
            if ( v168 < LODWORD(v199->max_length) )
            {
              v200 = deck->fields.deckInfo;
              if ( !v200 )
                goto LABEL_75;
              v201 = v200->fields.svts;
              if ( !v201 )
                goto LABEL_75;
              if ( v168 < LODWORD(v201->max_length) )
              {
                v202 = *(__int64 *)((char *)&v201->obj.klass + n);
                if ( v202 )
                {
                  v203 = *(__int64 *)((char *)&v199->obj.klass + n);
                  if ( v203 )
                  {
                    v204 = *(_DWORD *)(v202 + 76);
                    v169 = v275 + 1;
                    goto LABEL_367;
                  }
                }
                goto LABEL_75;
              }
            }
          }
LABEL_425:
          sub_1C2D6F4(Instance, SvtEquipMax, v37);
        }
LABEL_426:
        v251 = sub_1C2D710();
        sub_1C2D5B8(v251, 0);
      }
      if ( v260 || v172->fields.chkIdx == FollowerIndex )
      {
        v205 = v287;
        v254 = v186;
        v206 = (unsigned int *)*p_memberList;
        if ( v287 )
        {
          v207 = v286;
          v208 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
          v209 = v207;
          v167 = setupInfoa;
          v210 = v208;
          PartyOrganizationListViewItem___ctor_33993044(
            v208,
            v168,
            v205,
            v209,
            0,
            setupInfoa,
            questRestrictionInfo,
            0,
            isFixNpc,
            v265,
            v177,
            0);
          if ( !v206 )
            goto LABEL_75;
          v212 = v206;
          v213 = v275;
          this = v267;
        }
        else
        {
          v214 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
          v210 = v214;
          if ( v268 )
          {
            v167 = setupInfoa;
            PartyOrganizationListViewItem___ctor_33993044(
              v214,
              v168,
              v268,
              v263,
              followerGrandGraphIda,
              setupInfoa,
              questRestrictionInfo,
              0,
              isFixNpc,
              v265,
              v177,
              0);
            v212 = v206;
            this = v267;
            if ( !v212 )
              goto LABEL_75;
            v213 = v275;
          }
          else
          {
            v167 = setupInfoa;
            PartyOrganizationListViewItem___ctor_34030324(v214, v168, 1, setupInfoa, questRestrictionInfo, 1, v177, 0);
            v213 = v275;
            v212 = v206;
            this = v267;
            if ( !v212 )
              goto LABEL_75;
          }
        }
        if ( v210 )
        {
          Instance = sub_1C2D5CC(v210, *(_QWORD *)(*(_QWORD *)v212 + 64LL));
          if ( !Instance )
            goto LABEL_426;
        }
        if ( v168 >= v212[6] )
          goto LABEL_425;
        *(_QWORD *)((char *)v212 + n) = v210;
        sub_1C2D434((CGThumbnailListItem_o *)((char *)v212 + n), (int32_t)v210, (int32_t)v37, v211);
        v222 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_75;
        if ( v168 >= LODWORD(v222->max_length) )
          goto LABEL_425;
        v223 = deck->fields.deckInfo;
        if ( !v223 )
          goto LABEL_75;
        v224 = v223->fields.svts;
        if ( !v224 )
          goto LABEL_75;
        if ( v168 >= LODWORD(v224->max_length) )
          goto LABEL_425;
        v225 = *(__int64 *)((char *)&v224->obj.klass + n);
        if ( !v225 )
          goto LABEL_75;
        v203 = *(__int64 *)((char *)&v222->obj.klass + n);
        if ( !v203 )
          goto LABEL_75;
        v204 = *(_DWORD *)(v225 + 76);
        v169 = (v254 || v260) + v213;
LABEL_367:
        *(_DWORD *)(v203 + 372) = v204;
        goto LABEL_368;
      }
      v215 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v215,
        (Il2CppObject *)v172,
        Method_PartyListViewItem___c__DisplayClass31_3___ctor_b__3__,
        0);
      v216 = System_Linq_Enumerable__Where_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v276,
               (System_Func_TSource__bool__o *)v215,
               (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v217 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C2D5CC(v216, FollowerInfo___TypeInfo);
      if ( !v217 )
        v217 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                      v216,
                                                                      (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
      v218 = System_Linq_Enumerable__Any_object_(
               v217,
               (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( v275 < v272 && !v218 )
      {
        v219 = QuestRestrictionInfo__GetGrandServantRestrictionEntity(questRestrictionInfo, v177, 0);
        Instance = (__int64)UserEventDeckEntity__GetEquipList(deck, v168, 0);
        v285 = (System_Int64_array *)Instance;
        v284 = 0;
        if ( v219 )
        {
          v221 = userServantList;
          if ( !userServantList )
            goto LABEL_75;
          if ( v168 >= LODWORD(userServantList->max_length) )
            goto LABEL_425;
          PartyListViewItem__GetGrandServantInfo(
            this,
            v219,
            (UserServantEntity_o **)((char *)userServantList + n),
            &v285,
            &v284,
            v220);
        }
        else
        {
          v233 = (System_Int64_array *)Instance;
          if ( (v257 & 1) != 0 )
          {
            if ( !userServantList )
              goto LABEL_75;
            if ( v168 >= LODWORD(userServantList->max_length) )
              goto LABEL_425;
            v234 = *(__int64 *)((char *)&userServantList->obj.klass + n);
            if ( v234 )
            {
              v236 = *(_QWORD *)(v234 + 80);
              v235 = *(_QWORD *)(v234 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v294.fields.currentCryptoKey = v236;
              *(_QWORD *)&v294.fields.fakeValue = v235;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v294, 0);
              if ( v168 >= LODWORD(userServantList->max_length) )
                goto LABEL_425;
              v237 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&userServantList->obj.klass + n);
              if ( !v237 )
                goto LABEL_75;
              v238 = Instance;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v237[6], 0);
              if ( v168 >= LODWORD(userServantList->max_length) )
                goto LABEL_425;
              v239 = Instance;
              Instance = *(__int64 *)((char *)&userServantList->obj.klass + n);
              if ( !Instance )
                goto LABEL_75;
              v240 = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
              Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                           questRestrictionInfo,
                           v238,
                           v239,
                           v240,
                           v177,
                           0,
                           0);
              if ( (Instance & 1) != 0 )
              {
                if ( v168 >= LODWORD(userServantList->max_length) )
                  goto LABEL_425;
                *(Il2CppClass **)((char *)&userServantList->obj.klass + n) = 0;
                sub_1C2D434((CGThumbnailListItem_o *)((char *)userServantList + n), 0, (int32_t)v37, v241);
              }
            }
            v233 = v285;
          }
          if ( !v233 )
            goto LABEL_75;
          Instance = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Instance = (__int64)BalanceConfig_TypeInfo;
          }
          SvtEquipMax = *(unsigned int *)(*(_QWORD *)(Instance + 184) + 48LL);
          if ( (int)SvtEquipMax < SLODWORD(v233->max_length) )
          {
            if ( !*(_DWORD *)(Instance + 224) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              SvtEquipMax = (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax;
            }
            Instance = sub_1C2D538(long___TypeInfo, SvtEquipMax);
            v285 = (System_Int64_array *)Instance;
          }
          v221 = userServantList;
          if ( !userServantList )
            goto LABEL_75;
        }
        if ( v168 >= LODWORD(v221->max_length) )
          goto LABEL_425;
        v242 = *(UserServantEntity_o **)((char *)&v221->obj.klass + n);
        v243 = (unsigned int *)*p_memberList;
        if ( v242 )
        {
          v244 = v285;
          v245 = v284;
          v246 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34019620(
            v246,
            v168,
            v242,
            v244,
            setupInfoa,
            questRestrictionInfo,
            0,
            v177,
            0,
            0,
            v245,
            0);
          if ( !v243 )
            goto LABEL_75;
        }
        else
        {
          v246 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34030324(v246, v168, 0, setupInfoa, questRestrictionInfo, 1, v177, 0);
          if ( !v243 )
            goto LABEL_75;
        }
        if ( v246 )
        {
          Instance = sub_1C2D5CC(v246, *(_QWORD *)(*(_QWORD *)v243 + 64LL));
          if ( !Instance )
            goto LABEL_426;
        }
        if ( v168 >= v243[6] )
          goto LABEL_425;
        *(_QWORD *)((char *)v243 + n) = v246;
        sub_1C2D434((CGThumbnailListItem_o *)((char *)v243 + n), (int32_t)v246, (int32_t)v37, v247);
        v169 = v275 + 1;
        goto LABEL_415;
      }
      if ( System_Linq_Enumerable__Any_object_(
             v217,
             (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
      {
        Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                              v217,
                              0,
                              (const MethodInfo_30F295C *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
        goto LABEL_372;
      }
      Instance = (__int64)v276;
      if ( !v276 )
        goto LABEL_75;
      if ( v276->fields._size <= (int)v168 - v275 )
      {
        v227 = (unsigned int *)*p_memberList;
      }
      else
      {
        Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                              v276,
                              (int)v168 - v275,
                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
LABEL_372:
        v226 = (FollowerInfo_o *)Instance;
        v227 = (unsigned int *)*p_memberList;
        if ( Instance )
        {
          v228 = *(_QWORD *)(Instance + 40);
          if ( !v228 )
            goto LABEL_75;
          if ( !*(_DWORD *)(v228 + 24) )
            goto LABEL_425;
          v229 = *(_QWORD *)(v228 + 32);
          if ( !v229 )
            goto LABEL_75;
          v230 = *(_DWORD *)(v229 + 32);
          v231 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_33993044(
            v231,
            v168,
            v226,
            v230,
            0,
            setupInfoa,
            questRestrictionInfo,
            0,
            1,
            v265,
            v177,
            0);
          if ( !v227 )
            goto LABEL_75;
          goto LABEL_411;
        }
      }
      v231 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34030324(v231, v168, 0, setupInfoa, questRestrictionInfo, 0, v177, 0);
      if ( !v227 )
        goto LABEL_75;
LABEL_411:
      if ( v231 )
      {
        Instance = sub_1C2D5CC(v231, *(_QWORD *)(*(_QWORD *)v227 + 64LL));
        if ( !Instance )
          goto LABEL_426;
      }
      if ( v168 >= v227[6] )
        goto LABEL_425;
      *(_QWORD *)((char *)v227 + n) = v231;
      sub_1C2D434((CGThumbnailListItem_o *)((char *)v227 + n), (int32_t)v231, (int32_t)v37, v232);
      v169 = v275;
LABEL_415:
      v248 = this->fields.memberList;
      v167 = setupInfoa;
      if ( !v248 )
        goto LABEL_75;
      if ( v168 >= LODWORD(v248->max_length) )
        goto LABEL_425;
      Instance = *(__int64 *)((char *)&v248->obj.klass + n);
      if ( !Instance )
        goto LABEL_75;
      v249 = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                        + v249;
LABEL_368:
      ++v168;
      goto LABEL_283;
    }
    v178 = (unsigned int *)*p_memberList;
    v179 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_34030324(v179, v168, 0, v167, questRestrictionInfo, 1, v177, 0);
    if ( !v178 )
      goto LABEL_75;
    if ( v179 )
    {
      Instance = sub_1C2D5CC(v179, *(_QWORD *)(*(_QWORD *)v178 + 64LL));
      if ( !Instance )
        goto LABEL_426;
    }
    if ( v168 >= v178[6] )
      goto LABEL_425;
    *(_QWORD *)((char *)v178 + n) = v179;
    sub_1C2D434((CGThumbnailListItem_o *)((char *)v178 + n), (int32_t)v179, (int32_t)v37, v180);
    ++v168;
  }
LABEL_419:
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)SvtEquipMax);
  if ( (questRestrictionInfo->fields.isNpcEditablePos
     || !questRestrictionInfo->fields.isNpcOnlyBattle
     || QuestRestrictionInfo__IsExistGrand(questRestrictionInfo, 0))
    && !PartyListViewItem__GetStartDeckCondition(this, v250) )
  {
    *isBaseModify = 1;
  }
}


void PartyListViewItem___ctor_33889784(
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
  const MethodInfo *v15; // x3
  QuestRestrictionInfo_o *v16; // x25
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x26
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 Master_object; // x0
  __int64 classId; // x1
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *UserServantList; // x0
  BalanceConfig_c *v24; // x8
  UserServantEntity_array *v25; // x24
  struct PartyOrganizationListViewItem_array *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  _BOOL4 v29; // w21
  System_Collections_Generic_List_int__o *v30; // x29
  System_Collections_Generic_List_int__o *v31; // x28
  ViewWaveEnemyMaster_o *v32; // x20
  ViewWaveEnemyEntity_array *EntityListFromQuestId; // x26
  int32_t ReachedWave; // w22
  __int64 v35; // x2
  int max_length; // w8
  int i; // w19
  ViewWaveEnemyEntity_o *v38; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  int32_t version; // w10
  struct System_Int32_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  struct System_Int32_array *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct System_Int32_array *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  Il2CppObject *v52; // x26
  int32_t v53; // w27
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v55; // w29
  struct DeckServant_o *v56; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v58; // x8
  int32_t initPos; // w26
  UserServantEntity_o *v60; // x28
  struct PartyOrganizationListViewItem_array *v61; // x21
  __int128 v62; // q0
  int64_t v63; // x0
  System_Int64_array *v64; // x20
  struct DeckServant_o *v65; // x8
  struct DeckServantData_array *v66; // x8
  DeckServantData_o *v67; // x8
  System_Int32_array *svtEquipIds; // x25
  PartyOrganizationListViewItem_o *v69; // x29
  const MethodInfo *v70; // x3
  Il2CppClass **v71; // x0
  struct PartyOrganizationListViewItem_array *v72; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w20
  __int64 v75; // x0
  System_Int32_array *equipSvtIdList; // [xsp+0h] [xbp-110h]
  int32_t v77; // [xsp+2Ch] [xbp-E4h]
  char v78; // [xsp+34h] [xbp-DCh]
  bool isClearedWave; // [xsp+34h] [xbp-DCh]
  int32_t v82; // [xsp+44h] [xbp-CCh]
  int v83; // [xsp+44h] [xbp-CCh]
  UserEventDeckEntity_o *v85; // [xsp+50h] [xbp-C0h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+58h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+60h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+80h] [xbp-90h]
  UserInterruptionQuestEntity_o *entity; // [xsp+A8h] [xbp-68h] BYREF

  if ( (byte_4C22C0A & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C2D490(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C2D490(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    byte_4C22C0A = 1;
  }
  entity = 0;
  ListViewItem___ctor_43566844((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v14, v15);
  v16 = questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v18, v19);
  if ( !deck )
    goto LABEL_105;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_105;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  this->fields._IsWaveBattleRestart_k__BackingField = restartWave > 0;
  v82 = index + 1;
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, index + 1, restartWave > 0, 0);
  v24 = BalanceConfig_TypeInfo;
  v25 = UserServantList;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v24 = BalanceConfig_TypeInfo;
  }
  v26 = (struct PartyOrganizationListViewItem_array *)sub_1C2D538(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v24->static_fields->DeckMemberMax);
  this->fields.memberList = v26;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v26, v27, v28);
  v85 = deck;
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  v77 = index;
  if ( questRestrictionInfo )
    v29 = !QuestRestrictionInfo__IsWaveSetupSwitchParty(questRestrictionInfo, 0);
  else
    LOBYTE(v29) = 1;
  v30 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  v31 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v29 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    if ( !*p_questRestrictionInfo )
      goto LABEL_105;
    v32 = (ViewWaveEnemyMaster_o *)Master_object;
    if ( !Master_object )
      goto LABEL_105;
    EntityListFromQuestId = ViewWaveEnemyMaster__GetEntityListFromQuestId(
                              (ViewWaveEnemyMaster_o *)Master_object,
                              (*p_questRestrictionInfo)->fields.questId,
                              0);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
    if ( !questRestrictionInfo )
      goto LABEL_105;
    if ( !Master_object )
      goto LABEL_105;
    ReachedWave = ReachedWaveInfoMaster__GetReachedWave(
                    (ReachedWaveInfoMaster_o *)Master_object,
                    questRestrictionInfo->fields.questId,
                    0);
    Master_object = ViewWaveEnemyMaster__IsSameUnknownNpcEncounter(v32, EntityListFromQuestId, ReachedWave, 0);
    v78 = Master_object;
    if ( !EntityListFromQuestId )
      goto LABEL_105;
    max_length = EntityListFromQuestId->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
LABEL_106:
          sub_1C2D6F4(Master_object, classId, v35);
        v38 = EntityListFromQuestId->m_Items[i];
        if ( !v38 )
          goto LABEL_105;
        if ( v38->fields.wave == v82 )
        {
          if ( !v30 )
            goto LABEL_105;
          Master_object = System_Collections_Generic_List_int___Contains(
                            v30,
                            v38->fields.classId,
                            (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Master_object & 1) == 0 )
          {
            classId = (unsigned int)v38->fields.classId;
            items = v30->fields._items;
            v40 = Method_System_Collections_Generic_List_int__Add__;
            ++v30->fields._version;
            if ( !items )
              goto LABEL_105;
            size = v30->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v30,
                classId,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v30->fields._size = size + 1;
              items->m_Items[size] = classId;
            }
          }
          if ( (v78 & 1) != 0
            || ReachedWave >= v38->fields.wave
            || (Master_object = ViewWaveEnemyEntity__IsUnknownDispInfo(v38, 0, 0, 0), (Master_object & 1) == 0) )
          {
            if ( !v31 )
              goto LABEL_105;
            Master_object = System_Collections_Generic_List_int___Contains(
                              v31,
                              v38->fields.classId,
                              (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( (Master_object & 1) == 0 )
            {
              classId = (unsigned int)v38->fields.classId;
              version = v31->fields._version;
              v43 = v31->fields._items;
LABEL_42:
              v44 = Method_System_Collections_Generic_List_int__Add__;
              v31->fields._version = version + 1;
              if ( !v43 )
                goto LABEL_105;
              v45 = v31->fields._size;
              if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v31,
                  classId,
                  *(const MethodInfo_376CB60 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
              }
              else
              {
                v31->fields._size = v45 + 1;
                v43->m_Items[v45] = classId;
              }
            }
          }
          else
          {
            Master_object = (__int64)WaveBattleWaveEnemyInfoItem_TypeInfo;
            if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
            if ( !v31 )
              goto LABEL_105;
            Master_object = System_Collections_Generic_List_int___Contains(
                              v31,
                              WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_UNKNOWN_CLASSID,
                              (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( (Master_object & 1) == 0 )
            {
              Master_object = (__int64)WaveBattleWaveEnemyInfoItem_TypeInfo;
              if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
                Master_object = (__int64)WaveBattleWaveEnemyInfoItem_TypeInfo;
              }
              version = v31->fields._version;
              v43 = v31->fields._items;
              classId = *(unsigned int *)(*(_QWORD *)(Master_object + 184) + 64LL);
              goto LABEL_42;
            }
          }
        }
        max_length = EntityListFromQuestId->max_length;
      }
    }
  }
  if ( !v30 )
    goto LABEL_105;
  v46 = System_Collections_Generic_List_int___ToArray(
          v30,
          (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.waveBattleEnemyClassIds = v46;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.waveBattleEnemyClassIds, (int32_t)v46, v47, v48);
  if ( !v31 )
    goto LABEL_105;
  v49 = System_Collections_Generic_List_int___ToArray(
          v31,
          (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.trendDispWaveBattleEnemyClassIds = v49;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.trendDispWaveBattleEnemyClassIds, (int32_t)v49, v50, v51);
  isClearedWave = v82 < restartWave;
  this->fields._IsClearedWave_k__BackingField = v82 < restartWave;
  if ( !v29 )
  {
    this->fields._IsClearedWave_k__BackingField = 0;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v52 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
    }
    Master_object = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (__int64)NetworkManager_TypeInfo;
    }
    if ( questRestrictionInfo && v52 )
    {
      if ( !UserInterruptionQuestMaster__TryGetEntity(
              (UserInterruptionQuestMaster_o *)v52,
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
        isClearedWave = v82 <= UserInterruptionQuestEntity__GetAlreadySortiePartyNum(entity, restartWave, 0);
        this->fields._IsClearedWave_k__BackingField = isClearedWave;
        goto LABEL_64;
      }
    }
LABEL_105:
    sub_1C2D6EC(Master_object, classId);
  }
LABEL_64:
  Master_object = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Master_object = (__int64)BalanceConfig_TypeInfo;
  }
  v53 = 0;
  v83 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 176LL) * v77;
  while ( 1 )
  {
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (__int64)BalanceConfig_TypeInfo;
    }
    static_fields = *(struct BalanceConfig_StaticFields **)(Master_object + 184);
    if ( v53 >= static_fields->DeckMemberMax )
      break;
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v55 = v83 + v53;
    if ( v53 < static_fields->DeckMainMemberMax )
    {
      v56 = v85->fields.deckInfo;
      if ( !v56 )
        goto LABEL_105;
      svts = v56->fields.svts;
      if ( !svts )
        goto LABEL_105;
      if ( (unsigned int)v55 >= LODWORD(svts->max_length) )
        goto LABEL_106;
      v58 = svts->m_Items[v55];
      if ( !v58 )
        goto LABEL_105;
      initPos = v58->fields.initPos;
    }
    else
    {
      initPos = v53 + 1;
    }
    if ( !v25 )
      goto LABEL_105;
    if ( (unsigned int)v53 >= LODWORD(v25->max_length) )
      goto LABEL_106;
    v60 = v25->m_Items[v53];
    v61 = *p_memberList;
    if ( v60 )
    {
      v62 = *(_OWORD *)&v60->fields.id.fields.fakeValue;
      *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&v60->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v88.fields.fakeValue = v62;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v87 = v88;
      v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v87, 0);
      Master_object = (__int64)UserEventDeckEntity__GetEquipList_42797376(v85, v63, restartWave > 0, 0);
      v64 = (System_Int64_array *)Master_object;
      if ( restartWave < 1 )
      {
        svtEquipIds = 0;
      }
      else
      {
        v65 = v85->fields.deckInfo;
        if ( !v65 )
          goto LABEL_105;
        v66 = v65->fields.svts;
        if ( !v66 )
          goto LABEL_105;
        if ( (unsigned int)v55 >= LODWORD(v66->max_length) )
          goto LABEL_106;
        v67 = v66->m_Items[v55];
        if ( !v67 )
          goto LABEL_105;
        svtEquipIds = v67->fields.svtEquipIds;
      }
      equipSvtIdList = svtEquipIds;
      v16 = questRestrictionInfo;
      v69 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34019620(
        v69,
        v53,
        v60,
        v64,
        setupInfo,
        questRestrictionInfo,
        0,
        initPos,
        equipSvtIdList,
        isClearedWave,
        0,
        0);
      if ( !v61 )
        goto LABEL_105;
    }
    else
    {
      v69 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34030324(v69, v53, 0, setupInfo, v16, 1, initPos, 0);
      if ( !v61 )
        goto LABEL_105;
    }
    if ( v69 )
    {
      Master_object = sub_1C2D5CC(v69, v61->obj.klass->_1.element_class);
      if ( !Master_object )
      {
        v75 = sub_1C2D710();
        sub_1C2D5B8(v75, 0);
      }
    }
    if ( (unsigned int)v53 >= LODWORD(v61->max_length) )
      goto LABEL_106;
    v71 = &v61->obj.klass + v53;
    v71[4] = (Il2CppClass *)v69;
    sub_1C2D434((CGThumbnailListItem_o *)(v71 + 4), (int32_t)v69, v35, v70);
    v72 = *p_memberList;
    if ( !*p_memberList )
      goto LABEL_105;
    if ( (unsigned int)v53 >= LODWORD(v72->max_length) )
      goto LABEL_106;
    Master_object = (__int64)v72->m_Items[v53];
    if ( !Master_object )
      goto LABEL_105;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)Master_object,
      this->fields.waveBattleEnemyClassIds,
      0);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_105;
    if ( (unsigned int)v53 >= LODWORD(memberList->max_length) )
      goto LABEL_106;
    Master_object = (__int64)memberList->m_Items[v53];
    if ( !Master_object )
      goto LABEL_105;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)Master_object,
                          0)
                      + cost;
    Master_object = (__int64)BalanceConfig_TypeInfo;
    ++v53;
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

  if ( (byte_4C22C37 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TryAdd__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___set_Item__);
    sub_1C2D490(&Method_System_ValueTuple_int__bool___ctor__);
    byte_4C22C37 = 1;
  }
  v8 = *orderIdx;
  v9 = *userSvtId;
  p_value = (System_ValueTuple_int__bool__o)&value;
  value = 0;
  System_ValueTuple_int__bool____ctor(
    p_value,
    v8,
    0,
    (const MethodInfo_3AE2818 *)Method_System_ValueTuple_int__bool___ctor__);
  if ( !duplicationUserSvtIdDictionary )
    sub_1C2D6EC(v11, v12);
  v13 = value;
  if ( !System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____TryAdd(
          duplicationUserSvtIdDictionary,
          v9,
          v13,
          (const MethodInfo_3418968 *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TryAdd__) )
  {
    v14 = (System_ValueTuple_int__bool__o)(*(_QWORD *)&System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____get_Item(
                                                         duplicationUserSvtIdDictionary,
                                                         *userSvtId,
                                                         (const MethodInfo_3417150 *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___get_Item__)
                                         & 0xFFFFFF00FFFFFFFFLL
                                         | 0x100000000LL);
    System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____set_Item(
      duplicationUserSvtIdDictionary,
      *userSvtId,
      v14,
      (const MethodInfo_34171DC *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___set_Item__);
  }
}


bool PartyListViewItem__CheckAndUpdateDuplicationGrandQuestServant(PartyListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_array *SvtEntityList; // x0
  PartyListViewItem___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x20
  System_Func_object__int__o *_9__113_0; // x21
  Il2CppObject *v7; // x22
  struct PartyListViewItem___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Int32_array *v12; // x20
  const MethodInfo *v13; // x2
  Il2CppObject *Master_object; // x21
  __int64 v15; // x22
  ServantEntity_o *v16; // x28
  BalanceConfig_c *v17; // x0
  ServantEntity_o *Member; // x0
  __int64 v19; // x1
  RestrictionEntity_o *GrandServantRestrictionEntity; // x0
  const MethodInfo *v21; // x5
  int v22; // w23
  il2cpp_array_size_t max_length; // x9
  int32_t v24; // w8
  int32_t v25; // w24
  unsigned __int64 v26; // x25
  struct PartyOrganizationListViewItem_array *memberList; // x10
  PartyOrganizationListViewItem_o *v28; // x10
  ServantEntity_o *v29; // x26
  int32_t NotSamePartyKey; // w1
  System_Nullable_int__o v31; // x0
  bool v33; // [xsp+Ch] [xbp-84h]
  __int64 v34; // [xsp+10h] [xbp-80h] BYREF
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+1Ch] [xbp-74h] BYREF
  System_Int64_array *equipIdList; // [xsp+20h] [xbp-70h] BYREF
  UserServantEntity_o *userServantEntity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4C22C39 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_ServantEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&System_Func_ServantEntity__int__TypeInfo);
    sub_1C2D490(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_int___ctor__);
    sub_1C2D490(&Method_System_Nullable_int__get_HasValue__);
    sub_1C2D490(&Method_PartyListViewItem___c__CheckAndUpdateDuplicationGrandQuestServant_b__113_0__);
    sub_1C2D490(&PartyListViewItem___c_TypeInfo);
    byte_4C22C39 = 1;
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
  _9__113_0 = (System_Func_object__int__o *)v4->static_fields->__9__113_0;
  if ( !_9__113_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = PartyListViewItem___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__113_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_ServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__113_0,
      v7,
      Method_PartyListViewItem___c__CheckAndUpdateDuplicationGrandQuestServant_b__113_0__,
      0);
    static_fields = PartyListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__113_0 = (struct System_Func_ServantEntity__int__o *)_9__113_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__113_0, (int32_t)_9__113_0, v9, v10);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v5,
                                                               (System_Func_TSource__TResult__o *)_9__113_0,
                                                               (const MethodInfo_3104740 *)Method_System_Linq_Enumerable_Select_ServantEntity__int___);
  v12 = System_Linq_Enumerable__ToArray_int_(
          v11,
          (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
  v15 = 0;
  v16 = 0;
  v33 = 0;
  while ( 1 )
  {
    v17 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v17 = BalanceConfig_TypeInfo;
    }
    if ( v15 >= v17->static_fields->DeckMemberMax )
      return v33;
    Member = (ServantEntity_o *)PartyListViewItem__GetMember(this, v15, v13);
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
      v21);
    if ( !userServantEntity )
      goto LABEL_46;
    Member = (ServantEntity_o *)UserServantEntity__getSvtId(userServantEntity, 0);
    if ( !Master_object
      || (v22 = (int)Member,
          (Member = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                         (int32_t)Member,
                                         (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0)
      || (Member = (ServantEntity_o *)ServantEntity__GetNotSamePartyKey(Member, 0), !v12) )
    {
LABEL_50:
      sub_1C2D6EC(Member, v19);
    }
    max_length = v12->max_length;
    v24 = isChangeFriendShipSvtEquipSkill;
    if ( (int)max_length < 1 )
    {
LABEL_45:
      isChangeFriendShipSvtEquipSkill = v24;
      goto LABEL_46;
    }
    v25 = (int)Member;
    v26 = 0;
    while ( 1 )
    {
      if ( v15 == v26 )
        goto LABEL_30;
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_50;
      if ( v26 >= LODWORD(memberList->max_length) )
LABEL_51:
        sub_1C2D6F4(Member, v19, v13);
      v28 = memberList->m_Items[v26];
      if ( !v28 )
        goto LABEL_50;
      if ( v28->fields.isFollower )
        goto LABEL_30;
      if ( v26 >= (unsigned int)max_length )
        goto LABEL_51;
      v19 = (unsigned int)v12->m_Items[v26];
      if ( (_DWORD)v19 == v22 )
        break;
      if ( v25 )
      {
        if ( (int)v19 < 1 )
        {
          v24 = v25;
        }
        else
        {
          Member = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        v19,
                                        (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          v29 = Member;
          if ( !Member )
            Member = v16;
          v24 = v25;
          if ( v29 )
          {
            if ( !Member )
              goto LABEL_50;
            NotSamePartyKey = ServantEntity__GetNotSamePartyKey(Member, 0);
            v31 = (System_Nullable_int__o)&v34;
            v34 = 0;
            System_Nullable_int____ctor(
              v31,
              NotSamePartyKey,
              (const MethodInfo_38AF304 *)Method_System_Nullable_int___ctor__);
            if ( (_BYTE)v34 )
            {
              v16 = v29;
              v24 = v25;
              if ( v25 == HIDWORD(v34) )
              {
                v16 = v29;
                goto LABEL_48;
              }
            }
            else
            {
              v24 = v25;
              v16 = v29;
            }
          }
        }
      }
LABEL_30:
      LODWORD(max_length) = v12->max_length;
      if ( (__int64)++v26 >= (int)max_length )
        goto LABEL_45;
    }
    v25 = v24;
LABEL_48:
    isChangeFriendShipSvtEquipSkill = v25;
    PartyListViewItem__ClearMember(this, v26, v13);
    v33 = 1;
LABEL_46:
    ++v15;
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

  if ( (byte_4C22C1D & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C22C1D = 1;
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
    sub_1C2D6EC(questRestrictionInfo, *(_QWORD *)&deckMemberCount);
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
  System_Func_KeyValuePair_long__ValueTuple_int__bool____int__o *_9__109_0; // x21
  Il2CppObject *v22; // x22
  struct PartyListViewItem___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v26; // x0
  PartyListViewItem___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x20
  System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__o *_9__109_1; // x21
  Il2CppObject *v30; // x22
  struct PartyListViewItem___c_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  PartyListViewItem___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x20
  System_Func_KeyValuePair_long__ValueTuple_int__bool____long__o *_9__109_2; // x21
  Il2CppObject *v38; // x22
  struct PartyListViewItem___c_StaticFields *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct System_Int64_array **p_duplicatedEquipmentUserSvtIdList; // x19
  PartyListViewItem_o *EquipUserSvtId; // [xsp+0h] [xbp-80h] BYREF
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+Ch] [xbp-74h] BYREF
  UserServantEntity_o *userServantEntity; // [xsp+10h] [xbp-70h] BYREF
  System_Int64_array *equipIdList; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C22C35 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderBy_KeyValuePair_long__ValueTuple_int__bool____int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_KeyValuePair_long__ValueTuple_int__bool____long___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_KeyValuePair_long__ValueTuple_int__bool_____);
    sub_1C2D490(&System_Func_KeyValuePair_long__ValueTuple_int__bool____int__TypeInfo);
    sub_1C2D490(&System_Func_KeyValuePair_long__ValueTuple_int__bool____long__TypeInfo);
    sub_1C2D490(&System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__TypeInfo);
    sub_1C2D490(&Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__109_0__);
    sub_1C2D490(&Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__109_1__);
    sub_1C2D490(&Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__109_2__);
    sub_1C2D490(&PartyListViewItem___c_TypeInfo);
    byte_4C22C35 = 1;
  }
  userServantEntity = 0;
  equipIdList = 0;
  isChangeFriendShipSvtEquipSkill = 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    v4 = (System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TypeInfo);
    System_Collections_Generic_Dictionary_long__ValueTuple_int__bool_____ctor(
      v4,
      (const MethodInfo_3416820 *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____ctor__);
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
                sub_1C2D6F4(Member, v10, v5);
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
    _9__109_0 = v20->static_fields->__9__109_0;
    if ( !_9__109_0 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = PartyListViewItem___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v20->static_fields->__9;
      _9__109_0 = (System_Func_KeyValuePair_long__ValueTuple_int__bool____int__o *)sub_1C2D6DC(System_Func_KeyValuePair_long__ValueTuple_int__bool____int__TypeInfo);
      System_Func_KeyValuePair_long__ValueTuple_int__bool____int____ctor(
        _9__109_0,
        v22,
        Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__109_0__,
        0);
      static_fields = PartyListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__109_0 = _9__109_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__109_0, (int32_t)_9__109_0, v24, v25);
    }
    v26 = System_Linq_Enumerable__OrderBy_KeyValuePair_long__ValueTuple_int__bool____int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v4,
            (System_Func_TSource__TKey__o *)_9__109_0,
            (const MethodInfo_30FDD44 *)Method_System_Linq_Enumerable_OrderBy_KeyValuePair_long__ValueTuple_int__bool____int___);
    v27 = PartyListViewItem___c_TypeInfo;
    v28 = (System_Collections_Generic_IEnumerable_TSource__o *)v26;
    if ( !PartyListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyListViewItem___c_TypeInfo);
      v27 = PartyListViewItem___c_TypeInfo;
    }
    _9__109_1 = v27->static_fields->__9__109_1;
    if ( !_9__109_1 )
    {
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = PartyListViewItem___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v27->static_fields->__9;
      _9__109_1 = (System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__o *)sub_1C2D6DC(System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__TypeInfo);
      System_Func_KeyValuePair_long__ValueTuple_int__bool____bool____ctor(
        _9__109_1,
        v30,
        Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__109_1__,
        0);
      v31 = PartyListViewItem___c_TypeInfo->static_fields;
      v31->__9__109_1 = _9__109_1;
      sub_1C2D434((CGThumbnailListItem_o *)&v31->__9__109_1, (int32_t)_9__109_1, v32, v33);
    }
    v34 = System_Linq_Enumerable__Where_KeyValuePair_long__ValueTuple_int__bool___(
            v28,
            (System_Func_TSource__bool__o *)_9__109_1,
            (const MethodInfo_3113A68 *)Method_System_Linq_Enumerable_Where_KeyValuePair_long__ValueTuple_int__bool_____);
    v35 = PartyListViewItem___c_TypeInfo;
    v36 = v34;
    if ( !PartyListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyListViewItem___c_TypeInfo);
      v35 = PartyListViewItem___c_TypeInfo;
    }
    _9__109_2 = v35->static_fields->__9__109_2;
    if ( !_9__109_2 )
    {
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v35 = PartyListViewItem___c_TypeInfo;
      }
      v38 = (Il2CppObject *)v35->static_fields->__9;
      _9__109_2 = (System_Func_KeyValuePair_long__ValueTuple_int__bool____long__o *)sub_1C2D6DC(System_Func_KeyValuePair_long__ValueTuple_int__bool____long__TypeInfo);
      System_Func_KeyValuePair_long__ValueTuple_int__bool____long____ctor(
        _9__109_2,
        v38,
        Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__109_2__,
        0);
      v39 = PartyListViewItem___c_TypeInfo->static_fields;
      v39->__9__109_2 = _9__109_2;
      sub_1C2D434((CGThumbnailListItem_o *)&v39->__9__109_2, (int32_t)_9__109_2, v40, v41);
    }
    v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_long__ValueTuple_int__bool____long_(
                                                                 v36,
                                                                 (System_Func_TSource__TResult__o *)_9__109_2,
                                                                 (const MethodInfo_30FFC8C *)Method_System_Linq_Enumerable_Select_KeyValuePair_long__ValueTuple_int__bool____long___);
    Member = (QuestRestrictionInfo_o *)System_Linq_Enumerable__ToArray_long_(
                                         v42,
                                         (const MethodInfo_310DF64 *)Method_System_Linq_Enumerable_ToArray_long___);
    if ( !this )
LABEL_47:
      sub_1C2D6EC(Member, v10);
    this->fields.duplicatedEquipmentUserSvtIdList = (struct System_Int64_array *)Member;
    p_duplicatedEquipmentUserSvtIdList = &this->fields.duplicatedEquipmentUserSvtIdList;
    sub_1C2D434((CGThumbnailListItem_o *)p_duplicatedEquipmentUserSvtIdList, (int32_t)Member, v43, v44);
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
  const MethodInfo *v17; // x3
  System_Func_T__TResult__o *v18; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_String_array *v20; // x0
  Il2CppObject *v21; // x0

  if ( (byte_4C22C38 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Concat_long___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_long__string___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C2D490(&System_Func_long__string__TypeInfo);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&Method_System_Tuple_Create_string__bool___);
    sub_1C2D490(&Method_PartyListViewItem___c__DisplayClass112_0__CheckDuplicationGrandServantEquipmentNameList_b__0__);
    sub_1C2D490(&PartyListViewItem___c__DisplayClass112_0_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    byte_4C22C38 = 1;
  }
  v3 = sub_1C2D6DC(PartyListViewItem___c__DisplayClass112_0_TypeInfo);
  PartyListViewItem___c__DisplayClass112_0___ctor((PartyListViewItem___c__DisplayClass112_0_o *)v3, 0);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !QuestRestrictionInfo__IsExistGrand(questRestrictionInfo, 0) )
    return 0;
  v6 = (System_Int64_array *)sub_1C2D538(long___TypeInfo, 0);
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
                (const MethodInfo_30EB2E8 *)Method_System_Linq_Enumerable_Concat_long___);
        v6 = System_Linq_Enumerable__ToArray_long_(
               v14,
               (const MethodInfo_310DF64 *)Method_System_Linq_Enumerable_ToArray_long___);
      }
    }
    ++v7;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v6, 0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !v3 )
LABEL_20:
    sub_1C2D6EC(IsNullOrEmpty, v13);
  *(_QWORD *)(v3 + 16) = IsNullOrEmpty;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)IsNullOrEmpty, v16, v17);
  v18 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_long__string__TypeInfo);
  System_Func_long__object____ctor(
    v18,
    (Il2CppObject *)v3,
    Method_PartyListViewItem___c__DisplayClass112_0__CheckDuplicationGrandServantEquipmentNameList_b__0__,
    0);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v6,
                                                               (System_Func_TSource__TResult__o *)v18,
                                                               (const MethodInfo_3103B00 *)Method_System_Linq_Enumerable_Select_long__string___);
  v20 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v19,
                                 (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_string___);
  v21 = (Il2CppObject *)System_String__Join((System_String_o *)StringLiteral_43/*"\n"*/, v20, 0);
  return (System_Tuple_string__bool__o *)System_Tuple__Create_object__bool_(
                                           v21,
                                           v8 & 1,
                                           (const MethodInfo_318625C *)Method_System_Tuple_Create_string__bool___);
}


void PartyListViewItem__CheckRestriction(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v4; // w20
  int v5; // w23
  int v6; // w24
  PartyOrganizationListViewItem_o *IsUseOldMaster; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v9; // x8
  PartyOrganizationListViewItem_o *v10; // x8
  struct UserServantEntity_o *userServantEntity; // x10
  int isFollower; // w9
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t FixedServantPositionCount; // w20
  unsigned int v15; // w21
  char i; // w25
  struct PartyOrganizationListViewItem_array *v17; // x8
  PartyOrganizationListViewItem_o *v18; // x8
  int v19; // w21
  int32_t FixedPositionCount; // w20
  int v21; // w27
  char v22; // w25
  int v23; // w26
  struct PartyOrganizationListViewItem_array *v24; // x8
  PartyOrganizationListViewItem_o *v25; // x9
  bool isFixedSupportPositionRestriction; // w8
  _BOOL4 isRestrictionNeedStarting; // w11
  int isRestrictionMyServantPos; // w10
  int isRestrictionServantPos; // w9
  bool v30; // zf
  struct PartyOrganizationListViewItem_array *v31; // x20
  int max_length; // w8
  unsigned int v33; // w21
  struct PartyOrganizationListViewItem_array *v34; // x21
  int v35; // w8
  unsigned int v36; // w27
  struct PartyOrganizationListViewItem_array *v37; // x20
  int v38; // w8
  unsigned int v39; // w21
  struct QuestRestrictionInfo_o *v40; // x8
  int64_t sortValue2B; // x20
  __int64 sortStr1_low; // x21
  __int64 v43; // x25
  __int64 v44; // x8
  __int64 v45; // x8
  struct QuestRestrictionInfo_o *v46; // x8
  unsigned int k; // w20
  struct PartyOrganizationListViewItem_array *v48; // x8
  PartyOrganizationListViewItem_o *v49; // x8
  int j; // w21
  struct PartyOrganizationListViewItem_array *v51; // x8

  if ( (byte_4C22C10 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C22C10 = 1;
  }
  if ( this->fields.questRestrictionInfo )
    PartyListViewItem__CheckDuplicationGrandQuestEquipment(this, method);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( v4 >= SHIDWORD(IsUseOldMaster->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_107;
    if ( (unsigned int)v4 >= LODWORD(memberList->max_length) )
      goto LABEL_108;
    IsUseOldMaster = memberList->m_Items[v4];
    if ( !IsUseOldMaster )
      goto LABEL_107;
    PartyOrganizationListViewItem__CheckRestriction(IsUseOldMaster, this, v4, 0);
    v9 = this->fields.memberList;
    if ( !v9 )
      goto LABEL_107;
    if ( (unsigned int)v4 >= LODWORD(v9->max_length) )
      goto LABEL_108;
    v10 = v9->m_Items[v4];
    if ( !v10 )
      goto LABEL_107;
    userServantEntity = v10->fields.userServantEntity;
    isFollower = v10->fields.isFollower;
    ++v4;
    v10->fields._IsNotSupportSingle_k__BackingField = 0;
    v5 += isFollower;
    if ( userServantEntity )
      ++v6;
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
      v15 = 0;
      for ( i = 0; ; i |= v18->fields.isFixedSupportPositionRestriction )
      {
        if ( !IsUseOldMaster->fields.frameType )
        {
          j_il2cpp_runtime_class_init_0(IsUseOldMaster);
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
        }
        if ( (signed int)v15 >= SHIDWORD(IsUseOldMaster->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
          break;
        v17 = this->fields.memberList;
        if ( !v17 )
          goto LABEL_107;
        if ( v15 >= LODWORD(v17->max_length) )
          goto LABEL_108;
        v18 = v17->m_Items[v15];
        if ( !v18 )
          goto LABEL_107;
        ++v15;
        FixedServantPositionCount -= v18->fields.isFixedServantPositionAgreement;
      }
      if ( !(i & 1 | (FixedServantPositionCount > 0)) )
      {
        v31 = this->fields.memberList;
        if ( !v31 )
          goto LABEL_107;
        max_length = v31->max_length;
        if ( max_length >= 1 )
        {
          v33 = 0;
          while ( v33 < max_length )
          {
            IsUseOldMaster = v31->m_Items[v33];
            if ( !IsUseOldMaster )
              goto LABEL_107;
            PartyOrganizationListViewItem__ResetPositionRestriction(IsUseOldMaster, 0);
            max_length = v31->max_length;
            if ( (int)++v33 >= max_length )
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
    v19 = (int)IsUseOldMaster;
    FixedPositionCount = QuestRestrictionInfo__GetFixedPositionCount(this->fields.questRestrictionInfo, 0);
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    v21 = 0;
    v22 = 0;
    v23 = -1;
    while ( 1 )
    {
      if ( !IsUseOldMaster->fields.frameType )
      {
        j_il2cpp_runtime_class_init_0(IsUseOldMaster);
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( v21 >= SHIDWORD(IsUseOldMaster->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
        break;
      v24 = this->fields.memberList;
      if ( !v24 )
        goto LABEL_107;
      if ( (unsigned int)v21 >= LODWORD(v24->max_length) )
        goto LABEL_108;
      v25 = v24->m_Items[v21];
      if ( !v25 )
        goto LABEL_107;
      isFixedSupportPositionRestriction = v25->fields.isFixedSupportPositionRestriction;
      if ( v25->fields.isFixedServantPositionAgreement )
      {
        isRestrictionNeedStarting = v25->fields.isRestrictionNeedStarting;
        isRestrictionMyServantPos = v25->fields.isRestrictionMyServantPos;
        isRestrictionServantPos = v25->fields.isRestrictionServantPos;
        v30 = isRestrictionNeedStarting && v23 == -1;
        v19 -= isRestrictionMyServantPos;
        if ( v30 )
          v23 = v21;
        FixedPositionCount -= isRestrictionServantPos;
      }
      v22 |= isFixedSupportPositionRestriction;
      ++v21;
    }
    if ( v19 > 0 )
      goto LABEL_60;
    v34 = this->fields.memberList;
    if ( !v34 )
      goto LABEL_107;
    v35 = v34->max_length;
    if ( v35 < 1 )
    {
LABEL_60:
      if ( !((v23 < 0) | v22 & 1) )
      {
        for ( j = v23 + 1; ; ++j )
        {
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
          }
          if ( j >= SHIDWORD(IsUseOldMaster->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
            break;
          v51 = this->fields.memberList;
          if ( !v51 )
            goto LABEL_107;
          if ( (unsigned int)j >= LODWORD(v51->max_length) )
            goto LABEL_108;
          IsUseOldMaster = v51->m_Items[j];
          if ( !IsUseOldMaster )
            goto LABEL_107;
          PartyOrganizationListViewItem__ResetPositionRestrictionNeedStarting(IsUseOldMaster, 0);
        }
      }
      if ( (FixedPositionCount > 0) | v22 & 1 )
        goto LABEL_68;
      v37 = this->fields.memberList;
      if ( !v37 )
        goto LABEL_107;
      v38 = v37->max_length;
      if ( v38 < 1 )
      {
LABEL_68:
        v40 = this->fields.questRestrictionInfo;
        if ( !v40 || v40->fields.servantNumMin != 1 )
          return;
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( IsUseOldMaster )
        {
          sortValue2B = IsUseOldMaster->fields.sortValue2B;
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( IsUseOldMaster )
          {
            if ( sortValue2B )
            {
              sortStr1_low = LODWORD(IsUseOldMaster->fields.sortStr1);
              if ( (int)sortStr1_low >= 1 )
              {
                IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                v43 = 0;
                v6 = 0;
                while ( 1 )
                {
                  if ( !IsUseOldMaster->fields.frameType )
                  {
                    j_il2cpp_runtime_class_init_0(IsUseOldMaster);
                    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                  }
                  if ( v43 >= SHIDWORD(IsUseOldMaster->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
                    break;
                  if ( sortStr1_low != ++v43 )
                  {
                    v44 = *(_QWORD *)(sortValue2B + 128);
                    if ( !v44 )
                      goto LABEL_107;
                    if ( v43 - 1 >= (unsigned __int64)*(unsigned int *)(v44 + 24) )
                      goto LABEL_108;
                    v45 = *(_QWORD *)(v44 + 8 * v43 + 24);
                    if ( !v45 )
                      goto LABEL_107;
                    if ( *(_QWORD *)(v45 + 120) )
                      ++v6;
                  }
                }
              }
            }
            v46 = this->fields.questRestrictionInfo;
            if ( v46 )
            {
              if ( !v6 && v5 == 1 && v46->fields.isNotSingleSupportOnly )
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
                  v48 = this->fields.memberList;
                  if ( !v48 )
                    goto LABEL_107;
                  if ( k >= LODWORD(v48->max_length) )
                    goto LABEL_108;
                  v49 = v48->m_Items[k];
                  if ( !v49 )
                    goto LABEL_107;
                  if ( v49->fields.isFollower )
                  {
                    v49->fields._IsNotSupportSingle_k__BackingField = 1;
                    return;
                  }
                }
              }
              return;
            }
          }
        }
LABEL_107:
        sub_1C2D6EC(IsUseOldMaster, method);
      }
      v39 = 0;
      while ( v39 < v38 )
      {
        IsUseOldMaster = v37->m_Items[v39];
        if ( !IsUseOldMaster )
          goto LABEL_107;
        PartyOrganizationListViewItem__ResetPositionRestrictionServant(IsUseOldMaster, 0);
        v38 = v37->max_length;
        if ( (int)++v39 >= v38 )
          goto LABEL_68;
      }
    }
    else
    {
      v36 = 0;
      while ( v36 < v35 )
      {
        IsUseOldMaster = v34->m_Items[v36];
        if ( !IsUseOldMaster )
          goto LABEL_107;
        PartyOrganizationListViewItem__ResetPositionRestrictionMyServant(IsUseOldMaster, 0);
        v35 = v34->max_length;
        if ( (int)++v36 >= v35 )
          goto LABEL_60;
      }
    }
LABEL_108:
    sub_1C2D6F4(IsUseOldMaster, method, v2);
  }
}


void PartyListViewItem__ClearDeckName(PartyListViewItem_o *this, const MethodInfo *method)
{
  struct System_String_o *DefaultDeckName; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, method);
  this->fields.deckName = DefaultDeckName;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.deckName, (int32_t)DefaultDeckName, v4, v5);
}


void PartyListViewItem__ClearEquip(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  unsigned int i; // w20
  PartyOrganizationListViewItem_o *v5; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w22

  if ( (byte_4C22C17 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C22C17 = 1;
  }
  for ( i = 0; ; ++i )
  {
    v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= SHIDWORD(v5->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_15;
    if ( i >= LODWORD(memberList->max_length) )
      sub_1C2D6F4(v5, method, v2);
    v5 = memberList->m_Items[i];
    if ( !v5 )
LABEL_15:
      sub_1C2D6EC(v5, method);
    if ( !v5->fields.isFollower && !v5->fields.isRestrictionGrandServant )
    {
      cost = this->fields.cost;
      this->fields.cost = cost - PartyOrganizationListViewItem__ClearEquip(v5, 0);
    }
  }
  PartyListViewItem__CheckRestriction(this, method);
}


void PartyListViewItem__ClearFollower(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  unsigned int i; // w20
  PartyOrganizationListViewItem_o *v5; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8

  if ( (byte_4C22C18 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C22C18 = 1;
  }
  for ( i = 0; ; ++i )
  {
    v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= SHIDWORD(v5->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_12;
    if ( i >= LODWORD(memberList->max_length) )
      sub_1C2D6F4(v5, method, v2);
    v5 = memberList->m_Items[i];
    if ( !v5 )
LABEL_12:
      sub_1C2D6EC(v5, method);
    PartyOrganizationListViewItem__ClearFollower(v5, 0);
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
    sub_1C2D6EC(this, *(_QWORD *)&num);
  }
  if ( LODWORD(v7->max_length) <= num )
LABEL_9:
    sub_1C2D6F4(this, *(_QWORD *)&num, method);
  this = (PartyListViewItem_o *)v7->m_Items[num];
  if ( !this )
    goto LABEL_8;
  PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)this, 0);
  PartyListViewItem__CheckRestriction(v5, v8);
}


void PartyListViewItem__ClearMember_33895612(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  unsigned int v4; // w20
  PartyOrganizationListViewItem_o *v5; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w22

  if ( (byte_4C22C16 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C22C16 = 1;
  }
  v4 = 0;
  this->fields.cost = 0;
  while ( 1 )
  {
    v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v4 >= SHIDWORD(v5->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_19;
    if ( v4 >= LODWORD(memberList->max_length) )
LABEL_20:
      sub_1C2D6F4(v5, method, v2);
    v5 = memberList->m_Items[v4];
    if ( !v5 )
      goto LABEL_19;
    if ( !v5->fields.isFollower && !v5->fields.isRestrictionGrandServant )
    {
      PartyOrganizationListViewItem__Empty(v5, 0);
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_19;
    }
    if ( v4 >= LODWORD(memberList->max_length) )
      goto LABEL_20;
    v5 = memberList->m_Items[v4];
    if ( !v5 )
LABEL_19:
      sub_1C2D6EC(v5, method);
    if ( v5->fields.isRestrictionGrandServant )
    {
      cost = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v5, 0) + cost;
    }
    ++v4;
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

  if ( (byte_4C22C0F & 1) == 0 )
  {
    sub_1C2D490(&PartyListViewItem_TypeInfo);
    byte_4C22C0F = 1;
  }
  v3 = (PartyListViewItem_o *)sub_1C2D6DC(PartyListViewItem_TypeInfo);
  PartyListViewItem___ctor(v3, v4);
  if ( !v3 )
    sub_1C2D6EC(v5, v6);
  PartyListViewItem__Set(v3, this, v7);
  return v3;
}


bool PartyListViewItem__CompMember(PartyListViewItem_o *this, PartyListViewItem_o *item, const MethodInfo *method)
{
  PartyListViewItem_o *v4; // x20
  __int64 v5; // x2
  int v7; // w21
  int32_t v8; // w24
  int32_t v9; // w23
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v11; // x9

  v4 = this;
  if ( (byte_4C22C22 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C22C22 = 1;
  }
  if ( !item )
LABEL_17:
    sub_1C2D6EC(this, item);
  if ( System_String__op_Inequality(v4->fields.deckName, item->fields.deckName, 0) )
    return 0;
  v7 = -1;
  do
  {
    this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    }
    v8 = v7 + 1;
    v9 = this->fields.waveBattleEnemyClassIds->m_Items[35];
    if ( v7 + 1 >= v9 )
      break;
    memberList = v4->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( (unsigned int)v8 >= LODWORD(memberList->max_length) )
      goto LABEL_18;
    v11 = item->fields.memberList;
    if ( !v11 )
      goto LABEL_17;
    if ( (unsigned int)++v7 >= LODWORD(v11->max_length) )
LABEL_18:
      sub_1C2D6F4(this, item, v5);
    this = (PartyListViewItem_o *)memberList->m_Items[v8];
    if ( !this )
      goto LABEL_17;
  }
  while ( PartyOrganizationListViewItem__CompMember((PartyOrganizationListViewItem_o *)this, v11->m_Items[v8], 0) );
  return v8 >= v9;
}


void PartyListViewItem__Finalize(PartyListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_String_array *PartyListViewItem__GetAssetNameList(PartyListViewItem_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  unsigned __int64 i; // x24
  Il2CppObject *AssetName; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v9; // x0
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppObject *v14; // x1
  Il2CppClass **v15; // x0

  if ( (byte_4C22C31 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    byte_4C22C31 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
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
      sub_1C2D6F4(AssetName, v4, v5);
    v9 = memberList->m_Items[i];
    if ( v9 )
    {
      AssetName = (Il2CppObject *)PartyOrganizationListViewItem__GetAssetName(v9, 0);
      if ( AssetName )
      {
        if ( !v3 )
          goto LABEL_21;
        items = v3->fields._items;
        v12 = Method_System_Collections_Generic_List_string__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v3->fields._size;
        v14 = AssetName;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            AssetName,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v14;
          sub_1C2D434((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v14, v5, v10);
        }
      }
    }
  }
  if ( !v3 )
LABEL_21:
    sub_1C2D6EC(AssetName, v4);
  if ( v3->fields._size < 1 )
    return 0;
  else
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_Int32_array *PartyListViewItem__GetCommandCardList(
        PartyListViewItem_o *this,
        int32_t typeMax,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x21
  unsigned __int64 i; // x23
  _QWORD *p_image; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v11; // x0
  unsigned __int64 v12; // x9
  unsigned __int64 j; // x8

  if ( (byte_4C22C30 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    byte_4C22C30 = 1;
  }
  v7 = sub_1C2D538(int___TypeInfo, (unsigned int)typeMax);
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
      sub_1C2D6EC(p_image, v5);
    if ( i >= LODWORD(memberList->max_length) )
LABEL_21:
      sub_1C2D6F4(p_image, v5, v6);
    v11 = memberList->m_Items[i];
    if ( v11 )
    {
      p_image = PartyOrganizationListViewItem__GetCommandCardList(v11, 0);
      if ( p_image )
      {
        if ( typeMax >= 1 )
        {
          v12 = *((unsigned int *)p_image + 6);
          for ( j = 0; typeMax != j; ++j )
          {
            if ( (__int64)j < (int)v12 )
            {
              if ( !v7 )
                goto LABEL_22;
              if ( j >= *(unsigned int *)(v7 + 24) || j >= v12 )
                goto LABEL_21;
              *(_DWORD *)(v7 + 32 + 4 * j) += *((_DWORD *)p_image + j + 8);
            }
          }
        }
      }
    }
  }
  return (System_Int32_array *)v7;
}


int32_t PartyListViewItem__GetDeckCondition(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x5
  void *DeckConditionServantNumAndPosition; // x0
  int32_t v6; // w28
  int v7; // w25
  char v8; // w26
  int v9; // w29
  int32_t v10; // w21
  int32_t v11; // w20
  int32_t DeckMainMemberMax; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v14; // x8
  PartyOrganizationListViewItem_o *v15; // x22
  _BOOL4 isFollower; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr10_16
  int32_t v18; // w28
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct PartyOrganizationListViewItem_array *v20; // x8
  Il2CppClass **v21; // x8
  PartyOrganizationListViewItem_o *v22; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // kr20_16
  _DWORD *v24; // kr08_8
  int32_t v25; // w23
  struct PartyOrganizationListViewItem_array *v26; // x9
  PartyOrganizationListViewItem_o *v27; // x9
  const MethodInfo *v28; // x5
  const MethodInfo *v29; // x5
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  _BOOL4 isNotSingleSupportOnly; // w8
  struct PartyOrganizationListViewItem_array *v32; // x26
  int max_length; // w8
  const MethodInfo_37898B4 **v34; // x25
  unsigned int v35; // w29
  Il2CppClass **v36; // x8
  PartyOrganizationListViewItem_o *v37; // x20
  PartyOrganizationListViewItem_o *v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // kr30_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // kr40_16
  System_Collections_Generic_List_object__o *v41; // x21
  int size; // w8
  int v43; // w9
  char v44; // w24
  int32_t v45; // w23
  struct PartyOrganizationListViewItem_array *v46; // x22
  const MethodInfo_37898B4 **v47; // x28
  Il2CppObject *Item; // x0
  ServantEntity_o *servantEntity; // x25
  int32_t svtLimitCount; // w26
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x24
  System_Collections_Generic_IEnumerable_TSource__o *Individuality; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x24
  __int64 i; // x23
  struct PartyOrganizationListViewItem_array *v56; // x8
  PartyOrganizationListViewItem_o *v57; // x24
  struct ServantEntity_o *v58; // x8
  __int64 v59; // x20
  __int64 v60; // x21
  int32_t v61; // w20
  unsigned __int64 j; // x25
  struct PartyOrganizationListViewItem_array *v63; // x8
  PartyOrganizationListViewItem_o *v64; // x26
  struct ServantEntity_o *v65; // x8
  __int64 v66; // x21
  __int64 v67; // x22
  System_Collections_Generic_List_T__o *v69; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_4C22C20 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C22C20 = 1;
  }
  if ( this->fields.cost > this->fields.maxCost )
  {
    LODWORD(DeckConditionServantNumAndPosition) = 7;
    return (int)DeckConditionServantNumAndPosition;
  }
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  while ( 1 )
  {
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    }
    DeckMainMemberMax = *(_DWORD *)(*((_QWORD *)DeckConditionServantNumAndPosition + 23) + 176LL);
    if ( v6 >= DeckMainMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_178;
    if ( (unsigned int)v6 >= LODWORD(memberList->max_length) )
      goto LABEL_179;
    v14 = &memberList->obj.klass + v6;
    v15 = (PartyOrganizationListViewItem_o *)v14[4];
    if ( !v15 )
      goto LABEL_178;
    if ( PartyOrganizationListViewItem__get_IsLeave((PartyOrganizationListViewItem_o *)v14[4], 0) )
    {
LABEL_54:
      LODWORD(DeckConditionServantNumAndPosition) = 5;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( (v15->fields.fatigureTime & 0x8000000000000000LL) == 0 )
    {
LABEL_55:
      LODWORD(DeckConditionServantNumAndPosition) = 6;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v15->fields._IsAllOutBattle_k__BackingField )
    {
LABEL_56:
      LODWORD(DeckConditionServantNumAndPosition) = 19;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v15->fields._IsDataLost_k__BackingField )
    {
LABEL_57:
      LODWORD(DeckConditionServantNumAndPosition) = 20;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v15->fields._TimesToRestart_k__BackingField > 0 )
    {
LABEL_58:
      LODWORD(DeckConditionServantNumAndPosition) = 21;
      return (int)DeckConditionServantNumAndPosition;
    }
    isFollower = v15->fields.isFollower;
    if ( v15->fields.isFollower && !v15->fields.isMyServantOrNpcRestriction )
    {
      ++v10;
      ++v9;
      v8 = 1;
    }
    else
    {
      if ( v15->fields.userServantEntity )
        goto LABEL_21;
      if ( v15->fields.isMyServantOrNpcRestriction )
      {
        SvtId = PartyOrganizationListViewItem__get_SvtId(v15, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(SvtId, 0) >= 1 )
        {
          isFollower = v15->fields.isFollower;
LABEL_21:
          ++v11;
          v7 |= isFollower;
        }
      }
    }
    ++v6;
  }
  if ( !*((_DWORD *)DeckConditionServantNumAndPosition + 56) )
  {
    j_il2cpp_runtime_class_init_0(DeckConditionServantNumAndPosition);
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    DeckMainMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
  }
  v18 = v11;
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
    v20 = this->fields.memberList;
    if ( !v20 )
      goto LABEL_178;
    if ( (unsigned int)DeckMainMemberMax >= LODWORD(v20->max_length) )
      goto LABEL_179;
    v21 = &v20->obj.klass + DeckMainMemberMax;
    v22 = (PartyOrganizationListViewItem_o *)v21[4];
    if ( !v22 )
      goto LABEL_178;
    if ( PartyOrganizationListViewItem__get_IsLeave((PartyOrganizationListViewItem_o *)v21[4], 0) )
      goto LABEL_54;
    if ( (v22->fields.fatigureTime & 0x8000000000000000LL) == 0 )
      goto LABEL_55;
    if ( v22->fields._IsAllOutBattle_k__BackingField )
      goto LABEL_56;
    if ( v22->fields._IsDataLost_k__BackingField )
      goto LABEL_57;
    if ( v22->fields._TimesToRestart_k__BackingField > 0 )
      goto LABEL_58;
    if ( v22->fields.isFollower && !v22->fields.isMyServantOrNpcRestriction )
    {
      ++v9;
    }
    else
    {
      if ( v22->fields.userServantEntity )
        goto LABEL_46;
      if ( v22->fields.isMyServantOrNpcRestriction )
      {
        v23 = PartyOrganizationListViewItem__get_SvtId(v22, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v23, 0) >= 1 )
LABEL_46:
          ++v18;
      }
    }
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    ++DeckMainMemberMax;
  }
  v24 = DeckConditionServantNumAndPosition;
  LODWORD(DeckConditionServantNumAndPosition) = 0;
  v25 = v9 + v18;
  switch ( this->fields.menuKind )
  {
    case 4:
      DeckConditionServantNumAndPosition = (void *)PartyListViewItem__CheckDeckConditionServantNum(
                                                     this,
                                                     v25,
                                                     v11,
                                                     v8 & 1,
                                                     1,
                                                     v3);
      if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
        goto LABEL_100;
      goto LABEL_96;
    case 5:
      DeckConditionServantNumAndPosition = (void *)PartyListViewItem__GetDeckConditionServantNumAndPosition(
                                                     this,
                                                     v25,
                                                     v11,
                                                     v8 & 1,
                                                     1,
                                                     v3);
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
                                                            v25,
                                                            v11,
                                                            v8 & 1,
                                                            v10,
                                                            v29);
            if ( (_DWORD)DeckConditionServantNumAndPosition )
              return (int)DeckConditionServantNumAndPosition;
          }
        }
      }
      else if ( !PartyListViewItem__CheckDeckConditionServantNum(this, v25, v11, v8 & 1, v10, v28) )
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
                v18,
                0) )
        {
          LODWORD(DeckConditionServantNumAndPosition) = 16;
          return (int)DeckConditionServantNumAndPosition;
        }
      }
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
LABEL_178:
        sub_1C2D6EC(DeckConditionServantNumAndPosition, method);
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
        if ( v11 + v10 < static_fields->DeckMainMemberMax )
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
        if ( v11 == 1 && (v7 & isNotSingleSupportOnly & 1) != 0 )
        {
          LODWORD(DeckConditionServantNumAndPosition) = 22;
          return (int)DeckConditionServantNumAndPosition;
        }
        v32 = this->fields.memberList;
        if ( !v32 )
          goto LABEL_178;
        max_length = v32->max_length;
        if ( max_length >= 1 )
        {
          v34 = (const MethodInfo_37898B4 **)&Method_System_Collections_Generic_List_int____get_Item__;
          v35 = 0;
          while ( 1 )
          {
            if ( v35 >= max_length )
              goto LABEL_179;
            v36 = &v32->obj.klass + (int)v35;
            v37 = (PartyOrganizationListViewItem_o *)v36[4];
            if ( !v37 )
              goto LABEL_178;
            v38 = (PartyOrganizationListViewItem_o *)v36[4];
            v37->fields._IsErrorNeedIndividuality_k__BackingField = 0;
            v39 = PartyOrganizationListViewItem__get_SvtId(v38, 0);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v39, 0) )
            {
              DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
              if ( !DeckConditionServantNumAndPosition )
                goto LABEL_178;
              if ( QuestRestrictionInfo__IsSetRequired(
                     (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                     v37->fields.index + 1,
                     v37->fields._InitPos_k__BackingField,
                     0) )
              {
                LODWORD(DeckConditionServantNumAndPosition) = 18;
                return (int)DeckConditionServantNumAndPosition;
              }
            }
            v40 = PartyOrganizationListViewItem__get_SvtId(v37, 0);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            DeckConditionServantNumAndPosition = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                           v40,
                                                           0);
            if ( !(_DWORD)DeckConditionServantNumAndPosition )
            {
              DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
              if ( !DeckConditionServantNumAndPosition )
                goto LABEL_178;
              DeckConditionServantNumAndPosition = (void *)QuestRestrictionInfo__IsGrandServantRestriction(
                                                             (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                                                             v37->fields._InitPos_k__BackingField,
                                                             0);
              if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) != 0 )
              {
                LODWORD(DeckConditionServantNumAndPosition) = 25;
                return (int)DeckConditionServantNumAndPosition;
              }
            }
            if ( v37->fields.userServantEntity )
            {
              DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
              if ( !DeckConditionServantNumAndPosition )
                goto LABEL_178;
              DeckConditionServantNumAndPosition = QuestRestrictionInfo__GetNeedIndividualityList(
                                                     (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                                                     v37->fields._InitPos_k__BackingField,
                                                     0);
              if ( !this->fields.questRestrictionInfo )
                goto LABEL_178;
              v41 = (System_Collections_Generic_List_object__o *)DeckConditionServantNumAndPosition;
              DeckConditionServantNumAndPosition = QuestRestrictionInfo__GetRangeTypeList(
                                                     this->fields.questRestrictionInfo,
                                                     v37->fields._InitPos_k__BackingField,
                                                     0);
              v69 = (System_Collections_Generic_List_T__o *)DeckConditionServantNumAndPosition;
              if ( v41 )
              {
                if ( DeckConditionServantNumAndPosition )
                {
                  size = v41->fields._size;
                  if ( size >= 1 )
                  {
                    v43 = *((_DWORD *)DeckConditionServantNumAndPosition + 6);
                    if ( v43 >= 1 && size == v43 )
                      break;
                  }
                }
              }
            }
LABEL_138:
            max_length = v32->max_length;
            if ( (int)++v35 >= max_length )
              goto LABEL_139;
          }
          v44 = 0;
          v45 = 0;
          while ( 1 )
          {
            DeckConditionServantNumAndPosition = System_Collections_Generic_List_object___get_Item(v41, v45, *v34);
            if ( !DeckConditionServantNumAndPosition )
              goto LABEL_136;
            DeckConditionServantNumAndPosition = System_Collections_Generic_List_object___get_Item(v41, v45, *v34);
            if ( !DeckConditionServantNumAndPosition )
              goto LABEL_178;
            if ( !*((_QWORD *)DeckConditionServantNumAndPosition + 3) )
              goto LABEL_136;
            v46 = v32;
            v47 = v34;
            Item = System_Collections_Generic_List_object___get_Item(v41, v45, *v34);
            servantEntity = v37->fields.servantEntity;
            svtLimitCount = v37->fields.svtLimitCount;
            v51 = (System_Collections_Generic_IEnumerable_TSource__o *)Item;
            DeckConditionServantNumAndPosition = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(v37, 0);
            if ( !servantEntity )
              goto LABEL_178;
            Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                   servantEntity,
                                                                                   svtLimitCount,
                                                                                   (int32_t)DeckConditionServantNumAndPosition,
                                                                                   0);
            v53 = System_Linq_Enumerable__Intersect_int_(
                    v51,
                    Individuality,
                    (const MethodInfo_30F9000 *)Method_System_Linq_Enumerable_Intersect_int___);
            v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                         v53,
                                                                         (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
            if ( System_Collections_Generic_List_Int32Enum___get_Item(
                   v69,
                   v45,
                   (const MethodInfo_376F09C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
            {
              DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                             v54,
                                                             (const MethodInfo_30D9F98 *)Method_System_Linq_Enumerable_Any_int___);
              v34 = v47;
              v32 = v46;
              if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) != 0 )
                goto LABEL_138;
            }
            else
            {
              DeckConditionServantNumAndPosition = (void *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                             v69,
                                                             v45,
                                                             (const MethodInfo_376F09C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
              v34 = v47;
              if ( (_DWORD)DeckConditionServantNumAndPosition != 2 )
              {
                v44 = 1;
                v32 = v46;
                goto LABEL_136;
              }
              DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                             v54,
                                                             (const MethodInfo_30D9F98 *)Method_System_Linq_Enumerable_Any_int___);
              v32 = v46;
              if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
                goto LABEL_138;
            }
            v44 = 1;
LABEL_136:
            if ( ++v45 >= v41->fields._size )
            {
              if ( (v44 & 1) != 0 )
              {
                v37->fields._IsErrorNeedIndividuality_k__BackingField = 1;
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
        v56 = this->fields.memberList;
        if ( !v56 )
          goto LABEL_178;
        if ( (unsigned int)i >= LODWORD(v56->max_length) )
          goto LABEL_179;
        v57 = v56->m_Items[(int)i];
        if ( !v57 )
          goto LABEL_178;
        if ( v57->fields.userServantEntity )
        {
          v58 = v57->fields.servantEntity;
          if ( v58 )
          {
            v60 = *(_QWORD *)&v58->fields.baseSvtId.fields.currentCryptoKey;
            v59 = *(_QWORD *)&v58->fields.baseSvtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v70.fields.currentCryptoKey = v60;
            *(_QWORD *)&v70.fields.fakeValue = v59;
            v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v70, 0);
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
                v63 = this->fields.memberList;
                if ( !v63 )
                  goto LABEL_178;
                if ( j >= LODWORD(v63->max_length) )
                  goto LABEL_179;
                v64 = v63->m_Items[j];
                if ( !v64 )
                  goto LABEL_178;
                if ( v64->fields.userServantEntity )
                {
                  v65 = v64->fields.servantEntity;
                  if ( !v65 )
                    goto LABEL_178;
                  v67 = *(_QWORD *)&v65->fields.baseSvtId.fields.currentCryptoKey;
                  v66 = *(_QWORD *)&v65->fields.baseSvtId.fields.fakeValue;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                  *(_QWORD *)&v71.fields.currentCryptoKey = v67;
                  *(_QWORD *)&v71.fields.fakeValue = v66;
                  if ( v61 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v71, 0) )
                  {
LABEL_170:
                    LODWORD(DeckConditionServantNumAndPosition) = 4;
                    return (int)DeckConditionServantNumAndPosition;
                  }
                  DeckConditionServantNumAndPosition = v57->fields.servantEntity;
                  if ( !DeckConditionServantNumAndPosition )
                    goto LABEL_178;
                  if ( ServantEntity__IsNotSameParty((ServantEntity_o *)DeckConditionServantNumAndPosition, 0) )
                  {
                    DeckConditionServantNumAndPosition = v57->fields.servantEntity;
                    if ( !DeckConditionServantNumAndPosition )
                      goto LABEL_178;
                    DeckConditionServantNumAndPosition = (void *)ServantEntity__GetNotSamePartyKey(
                                                                   (ServantEntity_o *)DeckConditionServantNumAndPosition,
                                                                   0);
                    if ( !v64->fields.servantEntity )
                      goto LABEL_178;
                    if ( (_DWORD)DeckConditionServantNumAndPosition == ServantEntity__GetNotSamePartyKey(
                                                                         v64->fields.servantEntity,
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
      DeckConditionServantNumAndPosition = v24;
      if ( !v18 )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 1;
        return (int)DeckConditionServantNumAndPosition;
      }
      if ( v11 == 1 )
      {
        v26 = this->fields.memberList;
        if ( !v26 )
          goto LABEL_178;
        if ( !LODWORD(v26->max_length) )
LABEL_179:
          sub_1C2D6F4(DeckConditionServantNumAndPosition, method, v2);
        v27 = v26->m_Items[0];
        if ( !v27 )
          goto LABEL_178;
        if ( v27->fields.userServantEntity )
        {
          LODWORD(DeckConditionServantNumAndPosition) = 2;
          return (int)DeckConditionServantNumAndPosition;
        }
      }
      v10 = v8 & 1;
      if ( !v24[56] )
      {
        j_il2cpp_runtime_class_init_0(v24);
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
  __int64 v14; // x2
  int32_t FixedServantPositionCount; // w20
  unsigned int v16; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v18; // x8

  if ( (byte_4C22C1E & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C22C1E = 1;
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
    sub_1C2D6EC(questRestrictionInfo, v11);
  FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(questRestrictionInfo, 0);
  v16 = 0;
  questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( !LODWORD(questRestrictionInfo->fields.myServantNumRestrictionEntity) )
    {
      j_il2cpp_runtime_class_init_0(questRestrictionInfo);
      questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v16 >= SHIDWORD(questRestrictionInfo->fields.uniqueSvtRestrictionEntity[2].fields.targetVals) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( v16 >= LODWORD(memberList->max_length) )
      sub_1C2D6F4(questRestrictionInfo, v11, v14);
    v18 = memberList->m_Items[v16];
    if ( !v18 )
      goto LABEL_17;
    ++v16;
    FixedServantPositionCount -= v18->fields.isFixedServantPositionAgreement;
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
  __int64 v6; // x2
  struct PartyOrganizationListViewItem_array *memberList; // x8
  __int64 v8; // x23
  int max_length; // w9
  Il2CppClass **v10; // x8
  PartyOrganizationListViewItem_o *v11; // x21
  struct System_Int64_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4C22C25 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C22C25 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_15;
  v8 = 0;
  while ( 1 )
  {
    max_length = memberList->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
      sub_1C2D6F4(EquipUserSvtId, v5, v6);
    v10 = &memberList->obj.klass + v8;
    v11 = (PartyOrganizationListViewItem_o *)v10[4];
    if ( !v11 )
      goto LABEL_15;
    EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)v10[4], 0);
    if ( EquipUserSvtId >= 1 )
    {
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v11, 0);
      if ( !v3 )
        goto LABEL_15;
      items = v3->fields._items;
      v13 = Method_System_Collections_Generic_List_long__Add__;
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
          *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = EquipUserSvtId;
      }
    }
    memberList = this->fields.memberList;
    ++v8;
    if ( !memberList )
      goto LABEL_15;
  }
  if ( !v3 )
LABEL_15:
    sub_1C2D6EC(EquipUserSvtId, v5);
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_3773670 *)Method_System_Collections_Generic_List_long__ToArray__);
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
  const MethodInfo *v12; // x3
  unsigned __int64 i; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  EventUpValInfo_array *v15; // x8

  v6 = this;
  if ( (byte_4C22C2F & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    this = (PartyListViewItem_o *)sub_1C2D490(&EventUpValInfo___TypeInfo);
    byte_4C22C2F = 1;
  }
  setupInfo = v6->fields.setupInfo;
  if ( setupInfo )
  {
    setupInfo = (struct EventUpValSetupInfo_o *)setupInfo->fields.eventIdList;
    if ( !setupInfo )
LABEL_23:
      sub_1C2D6EC(this, eventId);
    v8 = *(_QWORD *)&setupInfo->fields.questPhase;
    if ( v8 )
    {
      if ( !(_DWORD)v8 )
LABEL_24:
        sub_1C2D6F4(this, eventId, eventUpValList);
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
  v10 = (EventUpValInfo_array *)sub_1C2D538(EventUpValInfo___TypeInfo, (unsigned int)v9->static_fields->DeckMemberMax);
  *eventUpValList = v10;
  sub_1C2D434((CGThumbnailListItem_o *)eventUpValList, (int32_t)v10, v11, v12);
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
      v15 = *eventUpValList;
      if ( !*eventUpValList )
        goto LABEL_23;
      if ( i >= LODWORD(v15->max_length) )
        goto LABEL_24;
      PartyOrganizationListViewItem__GetEventUpVal((PartyOrganizationListViewItem_o *)this, &v15->m_Items[i], 0);
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
  __int64 v10; // x2
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  int current; // w22
  DeckServantData_o *v14; // x8
  QuestRestrictionInfo_o *v15; // x0
  const MethodInfo *v16; // x2
  struct QuestRestrictionInfo_o *v17; // x8
  int servantNumMax; // w9
  PartyListViewItem___c__DisplayClass36_0_o *v19; // x21
  System_Func_object__bool__o *v20; // x23
  struct QuestRestrictionInfo_o *v21; // x8
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v24; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C22C0D & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_FollowerInfo___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C2D490(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C2D490(&Method_PartyListViewItem___c__DisplayClass36_0__GetFollowerIndex_b__0__);
    sub_1C2D490(&PartyListViewItem___c__DisplayClass36_0_TypeInfo);
    byte_4C22C0D = 1;
  }
  memset(&v24, 0, sizeof(v24));
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      (System_Collections_Generic_List_int__o *)questRestrictionInfo,
      (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v24 = v23;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
             &v24,
             (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
      if ( !v8 )
        break;
      deckInfo = deck->fields.deckInfo;
      if ( !deckInfo )
        sub_1C2D6EC(v8, v9);
      svts = deckInfo->fields.svts;
      if ( !svts )
        sub_1C2D6EC(v8, v9);
      current = v24.fields._current;
      if ( (unsigned int)(v24.fields._current - 1) >= LODWORD(svts->max_length) )
        sub_1C2D6F4(v8, v9, v10);
      v14 = svts->m_Items[v24.fields._current - 1];
      if ( !v14 )
        sub_1C2D6EC(v8, v9);
      v15 = this->fields.questRestrictionInfo;
      if ( !v15 )
        sub_1C2D6EC(0, v9);
      if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(v15, v14->fields.initPos, 0) )
        goto LABEL_38;
    }
    current = 0;
LABEL_38:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v24,
      (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  v17 = this->fields.questRestrictionInfo;
  if ( !v17 )
    return current;
  servantNumMax = v17->fields.servantNumMax;
  if ( servantNumMax >= 1 && servantNumMax < current )
  {
LABEL_31:
    v21 = this->fields.questRestrictionInfo;
    if ( v21 )
    {
      if ( fixNpcFollowerInfoList )
        return PartyListViewItem__GetSupportInitIndex(this, fixNpcFollowerInfoList, v16);
      else
        return v21->fields.supportInitIndex;
    }
    return 0;
  }
  if ( fixNpcFollowerInfoList && !v17->fields.isNpcEditablePos )
  {
    v19 = (PartyListViewItem___c__DisplayClass36_0_o *)sub_1C2D6DC(PartyListViewItem___c__DisplayClass36_0_TypeInfo);
    PartyListViewItem___c__DisplayClass36_0___ctor(v19, 0);
    if ( v19 )
    {
      v19->fields.chkIndex = current;
      v20 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v20,
        (Il2CppObject *)v19,
        Method_PartyListViewItem___c__DisplayClass36_0__GetFollowerIndex_b__0__,
        0);
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)fixNpcFollowerInfoList,
              (System_Func_T__bool__o *)v20,
              (const MethodInfo_30B7CF0 *)Method_BasicHelper_Any_FollowerInfo___) )
        return current;
      goto LABEL_31;
    }
LABEL_39:
    sub_1C2D6EC(questRestrictionInfo, deck);
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
  const MethodInfo *v8; // x3
  System_Collections_Generic_IEnumerable_TSource__o *duplicatedEquipmentUserSvtIdList; // x19
  System_Func_T__TResult__o *v10; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_String_array *v12; // x0

  if ( (byte_4C22C36 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_long__string___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C2D490(&System_Func_long__string__TypeInfo);
    sub_1C2D490(&Method_PartyListViewItem___c__DisplayClass110_0__GetGrandQuestDuplicationEquipmentNameList_b__0__);
    sub_1C2D490(&PartyListViewItem___c__DisplayClass110_0_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22C36 = 1;
  }
  v3 = sub_1C2D6DC(PartyListViewItem___c__DisplayClass110_0_TypeInfo);
  PartyListViewItem___c__DisplayClass110_0___ctor((PartyListViewItem___c__DisplayClass110_0_o *)v3, 0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.duplicatedEquipmentUserSvtIdList, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !v3 )
    sub_1C2D6EC(Master_object, v6);
  *(_QWORD *)(v3 + 16) = Master_object;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)Master_object, v7, v8);
  duplicatedEquipmentUserSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.duplicatedEquipmentUserSvtIdList;
  v10 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_long__string__TypeInfo);
  System_Func_long__object____ctor(
    v10,
    (Il2CppObject *)v3,
    Method_PartyListViewItem___c__DisplayClass110_0__GetGrandQuestDuplicationEquipmentNameList_b__0__,
    0);
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               duplicatedEquipmentUserSvtIdList,
                                                               (System_Func_TSource__TResult__o *)v10,
                                                               (const MethodInfo_3103B00 *)Method_System_Linq_Enumerable_Select_long__string___);
  v12 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v11,
                                 (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_string___);
  return System_String__Join((System_String_o *)StringLiteral_43/*"\n"*/, v12, 0);
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
  const MethodInfo *v14; // x3
  bool IsNullOrEmpty; // w0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x27
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v20; // x1
  System_Collections_IEnumerator_c **v21; // x25
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **v22; // x26
  PartyListViewItem___c__DisplayClass61_0_c **v23; // x22
  const MethodInfo_338A340 **v24; // x24
  System_Collections_Generic_IEnumerator_T__o *v25; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  System_Collections_IEnumerator_c *v27; // x1
  __int64 v28; // x9
  int *p_offset; // x10
  __int64 v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c *v32; // x1
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x28
  __int64 v37; // x29
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v41; // x23
  const MethodInfo_338A340 **v42; // x27
  PartyListViewItem___c__DisplayClass61_0_c **v43; // x24
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **v44; // x22
  System_Collections_IEnumerator_c **v45; // x26
  QuestRestrictionInfo_o *questRestrictionInfo; // x19
  int32_t v47; // w20
  int32_t v48; // w21
  int32_t v49; // w25
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  __int64 v51; // x1
  _BOOL8 IsRestriction_43186300; // x0
  __int64 v53; // x1
  void *monitor; // x20
  Il2CppClass *v55; // x21
  QuestRestrictionInfo_o *v56; // x19
  __int64 v57; // x0
  __int64 v58; // x1
  int32_t v59; // w20
  __int64 v60; // x1
  int32_t v61; // w21
  __int64 DispLimitCount; // x0
  __int64 v63; // x1
  System_Int32_array *ServantIndividuality; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  int64_t v67; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  const MethodInfo *v70; // x3
  struct System_Int32_array *targetVals; // x19
  System_Func_int__bool__o *v72; // x20
  UserServantEntity_o *v73; // x8
  __int128 v74; // q0
  int64_t v75; // x0
  __int64 v76; // x1
  Il2CppObject v77; // q0
  int64_t v78; // x19
  struct System_Object_array *items; // x8
  _QWORD *v80; // x9
  __int64 size; // x10
  Il2CppClass **v82; // x0
  __int64 v83; // x0
  __int64 v84; // x1
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  Il2CppObject *v87; // x1
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  int v92; // w19
  System_Collections_Generic_IEnumerator_T__c *v93; // x8
  __int64 v94; // x9
  int *v95; // x10
  __int64 v96; // x0
  Il2CppObject *Item; // x0
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  System_Int64_array *v100; // x0
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  System_Int64_array *EquipUserServantIdList; // x0
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  int32_t *v106; // [xsp+10h] [xbp-110h]
  CGThumbnailListItem_o *v107; // [xsp+18h] [xbp-108h]
  System_Collections_Generic_List_object__o *v108; // [xsp+20h] [xbp-100h]
  System_Collections_Generic_List_object__o *v109; // [xsp+28h] [xbp-F8h]
  System_Collections_Generic_IEnumerator_T__o *v112; // [xsp+40h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+50h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+90h] [xbp-90h]
  Il2CppObject *entity; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16

  if ( (byte_4C22C1F & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_BasicHelper_Any_int____77996856);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntityList__);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantGrandEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantGrandEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantGrandEntity__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_PartyListViewItem___c__DisplayClass61_0__GetGrandServantInfo_b__0__);
    sub_1C2D490(&PartyListViewItem___c__DisplayClass61_0_TypeInfo);
    byte_4C22C1F = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    goto LABEL_96;
  list = (System_Collections_ICollection_o *)Master_object->fields.list;
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  v12 = (System_Int64_array *)sub_1C2D538(long___TypeInfo, (unsigned int)v11->static_fields->GrandSvtEquipMax);
  *equipIdList = v12;
  sub_1C2D434((CGThumbnailListItem_o *)equipIdList, (int32_t)v12, v13, v14);
  *isChangeFriendShipSvtEquipSkill = 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(list, 0);
  if ( !restrictionEntity || IsNullOrEmpty )
    goto LABEL_79;
  v106 = isChangeFriendShipSvtEquipSkill;
  v107 = (CGThumbnailListItem_o *)equipIdList;
  v109 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v109,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
  v108 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v108,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !list )
    goto LABEL_96;
  v18 = Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
  v112 = Enumerator;
  if ( !Enumerator )
    sub_1C2D6EC(0, v20);
  v21 = &System_Collections_IEnumerator_TypeInfo;
  v22 = &System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo;
  v23 = &PartyListViewItem___c__DisplayClass61_0_TypeInfo;
  v24 = (const MethodInfo_338A340 **)&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__;
  v25 = Enumerator;
  while ( 1 )
  {
    while ( 1 )
    {
      klass = v25->klass;
      v27 = *v21;
      v28 = *(unsigned __int16 *)&v25->klass->_2.rank;
      if ( *(_WORD *)&v25->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != v27 )
        {
          --v28;
          p_offset += 4;
          if ( !v28 )
            goto LABEL_19;
        }
        v30 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_19:
        v30 = sub_1C7DCA8(v25, v27, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
              v25,
              *(_QWORD *)(v30 + 8))
          & 1) == 0 )
      {
        v92 = 9;
        goto LABEL_63;
      }
      v31 = v25->klass;
      v32 = *v22;
      v33 = *(unsigned __int16 *)&v25->klass->_2.rank;
      if ( *(_WORD *)&v25->klass->_2.rank )
      {
        v34 = &v31->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **)v34 - 1) != v32 )
        {
          --v33;
          v34 += 4;
          if ( !v33 )
            goto LABEL_26;
        }
        v35 = (__int64)&v31->vtable[*v34];
      }
      else
      {
LABEL_26:
        v35 = sub_1C7DCA8(v25, v32, 0);
      }
      v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
              v25,
              *(_QWORD *)(v35 + 8));
      v37 = sub_1C2D6DC(*v23);
      PartyListViewItem___c__DisplayClass61_0___ctor((PartyListViewItem___c__DisplayClass61_0_o *)v37, 0);
      if ( !v36 )
        sub_1C2D6EC(v38, v39);
      if ( !v18 )
        sub_1C2D6EC(v38, v39);
      if ( DataMasterBase_object__object__long___TryGetEntity(v18, &entity, *(_QWORD *)(v36 + 32), *v24) )
      {
        if ( !entity )
          sub_1C2D6EC(0, v40);
        v41 = v18;
        v42 = v24;
        v43 = v23;
        v44 = v22;
        v45 = v21;
        questRestrictionInfo = this->fields.questRestrictionInfo;
        v47 = *(_DWORD *)(v36 + 40);
        v48 = *(_DWORD *)(v36 + 44);
        v49 = *(_DWORD *)(v36 + 48);
        OverwriteStatus = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)entity, 0, 0);
        if ( !OverwriteStatus )
          sub_1C2D6EC(0, v51);
        if ( !questRestrictionInfo )
          sub_1C2D6EC(OverwriteStatus, v51);
        IsRestriction_43186300 = QuestRestrictionInfo__IsRestriction_43186300(
                                   questRestrictionInfo,
                                   v47,
                                   v48,
                                   v49,
                                   OverwriteStatus->fields._Rarity_k__BackingField,
                                   *(_DWORD *)(v36 + 52),
                                   1,
                                   0);
        v21 = v45;
        v22 = v44;
        v23 = v43;
        v24 = v42;
        v18 = v41;
        v25 = v112;
        if ( !IsRestriction_43186300 )
        {
          if ( !entity )
            sub_1C2D6EC(IsRestriction_43186300, v53);
          v55 = entity[5].klass;
          monitor = entity[5].monitor;
          v56 = this->fields.questRestrictionInfo;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v118.fields.currentCryptoKey = v55;
          *(_QWORD *)&v118.fields.fakeValue = monitor;
          v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v118, 0);
          if ( !entity )
            sub_1C2D6EC(v57, v58);
          v59 = v57;
          v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
                  0);
          if ( !entity )
            sub_1C2D6EC(0, v60);
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0);
          if ( !v56 )
            sub_1C2D6EC(DispLimitCount, v63);
          ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(v56, v59, v61, DispLimitCount, 0);
          if ( !v37 )
            sub_1C2D6EC(ServantIndividuality, ServantIndividuality);
          *(_QWORD *)(v37 + 16) = ServantIndividuality;
          sub_1C2D434((CGThumbnailListItem_o *)(v37 + 16), (int32_t)ServantIndividuality, v65, v66);
          v67 = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)restrictionEntity->fields.targetVals, 0);
          if ( (v67 & 1) != 0 )
            break;
          targetVals = restrictionEntity->fields.targetVals;
          if ( !targetVals )
            sub_1C2D6EC(v67, v68);
          if ( !LODWORD(targetVals->max_length) )
            sub_1C2D6F4(v67, v68, v69);
          if ( !targetVals->m_Items[0] )
            break;
          v72 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v72,
            (Il2CppObject *)v37,
            Method_PartyListViewItem___c__DisplayClass61_0__GetGrandServantInfo_b__0__,
            0);
          v67 = BasicHelper__Any_int__51083888(
                  targetVals,
                  (System_Func_T__bool__o *)v72,
                  (const MethodInfo_30B7A70 *)Method_BasicHelper_Any_int____77996856);
          if ( (v67 & 1) != 0 )
            break;
        }
      }
    }
    v73 = *userServantEntity;
    if ( *userServantEntity )
    {
      v74 = *(_OWORD *)&v73->fields.id.fields.fakeValue;
      *(_OWORD *)&v116.fields.currentCryptoKey = *(_OWORD *)&v73->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v116.fields.fakeValue = v74;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v115 = v116;
      v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v115, 0);
      if ( !entity )
        sub_1C2D6EC(v75, v76);
      v77 = entity[2];
      v78 = v75;
      *(Il2CppObject *)&v114.fields.currentCryptoKey = entity[1];
      *(Il2CppObject *)&v114.fields.fakeValue = v77;
      v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v114, 0);
      if ( v78 == v67 )
        break;
    }
    if ( !v109 )
      sub_1C2D6EC(v67, v68);
    items = v109->fields._items;
    v80 = Method_System_Collections_Generic_List_UserServantGrandEntity__Add__;
    ++v109->fields._version;
    if ( !items )
      sub_1C2D6EC(v67, v68);
    size = v109->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v109,
        (Il2CppObject *)v36,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
    }
    else
    {
      v82 = &items->obj.klass + size;
      v109->fields._size = size + 1;
      v82[4] = (Il2CppClass *)v36;
      sub_1C2D434((CGThumbnailListItem_o *)(v82 + 4), v36, v69, v70);
    }
    if ( !v108 )
      sub_1C2D6EC(v83, v84);
    v87 = entity;
    v88 = v108->fields._items;
    v89 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v108->fields._version;
    if ( !v88 )
      sub_1C2D6EC(v83, v87);
    v90 = v108->fields._size;
    if ( (unsigned int)v90 >= LODWORD(v88->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v108,
        v87,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
    }
    else
    {
      v91 = &v88->obj.klass + v90;
      v108->fields._size = v90 + 1;
      v91[4] = (Il2CppClass *)v87;
      sub_1C2D434((CGThumbnailListItem_o *)(v91 + 4), (int32_t)v87, v85, v86);
    }
  }
  EquipUserServantIdList = UserServantGrandEntity__GetEquipUserServantIdList((UserServantGrandEntity_o *)v36, 0);
  v107->klass = (CGThumbnailListItem_c *)EquipUserServantIdList;
  sub_1C2D434(v107, (int32_t)EquipUserServantIdList, v104, v105);
  v92 = 8;
  *v106 = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill((UserServantGrandEntity_o *)v36, 0);
LABEL_63:
  if ( v25 )
  {
    v93 = v25->klass;
    v94 = *(unsigned __int16 *)&v25->klass->_2.rank;
    if ( *(_WORD *)&v25->klass->_2.rank )
    {
      v95 = &v93->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v95 - 1) != System_IDisposable_TypeInfo )
      {
        --v94;
        v95 += 4;
        if ( !v94 )
          goto LABEL_68;
      }
      v96 = (__int64)&v93->vtable[*v95];
    }
    else
    {
LABEL_68:
      v96 = sub_1C7DCA8(v25, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v96)(v25, *(_QWORD *)(v96 + 8));
  }
  if ( v92 == 9 )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__IsNullOrEmpty(
                                                                    (System_Collections_ICollection_o *)v109,
                                                                    0);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      if ( !v109 )
        goto LABEL_96;
      if ( v109->fields._size < 2 )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v108;
        if ( v108 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v108,
                   0,
                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          *userServantEntity = (UserServantEntity_o *)Item;
          sub_1C2D434((CGThumbnailListItem_o *)userServantEntity, (int32_t)Item, v98, v99);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v109,
                                                                          0,
                                                                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantGrandEntity__get_Item__);
          if ( Master_object )
          {
            v100 = UserServantGrandEntity__GetEquipUserServantIdList((UserServantGrandEntity_o *)Master_object, 0);
            v107->klass = (CGThumbnailListItem_c *)v100;
            sub_1C2D434(v107, (int32_t)v100, v101, v102);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_List_object___get_Item(
                                                                            v109,
                                                                            0,
                                                                            (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantGrandEntity__get_Item__);
            if ( Master_object )
            {
              *v106 = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(
                        (UserServantGrandEntity_o *)Master_object,
                        0);
              return;
            }
          }
        }
LABEL_96:
        sub_1C2D6EC(Master_object, v9);
      }
    }
LABEL_79:
    *userServantEntity = 0;
    sub_1C2D434((CGThumbnailListItem_o *)userServantEntity, 0, v16, v17);
  }
}


System_Collections_Generic_List_int__o *PartyListViewItem__GetGrandSvtIdListInParty(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct PartyOrganizationListViewItem_array *memberList; // x23
  int max_length; // w8
  unsigned int v9; // w24
  PartyOrganizationListViewItem_o *v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4C22C33 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C22C33 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.questRestrictionInfo )
  {
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_22;
    max_length = memberList->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= max_length )
          sub_1C2D6F4(questRestrictionInfo, v5, v6);
        v10 = memberList->m_Items[v9];
        if ( !v10 )
          break;
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          break;
        questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                                           questRestrictionInfo,
                                                           v10->fields._InitPos_k__BackingField,
                                                           0);
        if ( questRestrictionInfo
          && (v10->fields._IsGrandServant_k__BackingField || v10->fields._IsTempGrandServant_k__BackingField) )
        {
          SvtId = PartyOrganizationListViewItem__get_SvtId(v10, 0);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                             SvtId,
                                                             0);
          if ( !v3 )
            break;
          items = v3->fields._items;
          v13 = Method_System_Collections_Generic_List_int__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          v5 = (unsigned int)questRestrictionInfo;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v3,
              (int32_t)questRestrictionInfo,
              *(const MethodInfo_376CB60 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size] = (int)questRestrictionInfo;
          }
        }
        max_length = memberList->max_length;
        if ( (int)++v9 >= max_length )
          return v3;
      }
LABEL_22:
      sub_1C2D6EC(questRestrictionInfo, v5);
    }
  }
  return v3;
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
  __int64 v9; // x2
  struct PartyOrganizationListViewItem_array *memberList; // x27
  il2cpp_array_size_t max_length; // x8
  UserServantGrandMaster_o *v12; // x21
  unsigned __int64 v13; // x28
  PartyOrganizationListViewItem_o *v14; // x22
  RestrictionEntity_o *GrandServantRestrictionEntity; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  UserServantGrandMaster_o *v17; // x25
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v19; // q1
  int32_t EquipFriendShipSkillChange_k__BackingField; // w24
  System_Int64_array *v21; // x23
  int32_t MasterName_k__BackingField; // w25
  int64_t v23; // x26
  GrandSvtInfo_o *v24; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  _QWORD *v32; // x19
  __int64 v33; // x8
  __int64 v34; // x0
  __int64 v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-80h]

  if ( (byte_4C22C34 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_GrandSvtInfo___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&GrandSvtInfo_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GrandSvtInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GrandSvtInfo__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GrandSvtInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GrandSvtInfo__TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C22C34 = 1;
  }
  if ( oldPartyItem && this->fields.questRestrictionInfo )
  {
    v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GrandSvtInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GrandSvtInfo___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UserServantGrandMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_42;
    max_length = memberList->max_length;
    if ( (int)max_length >= 1 )
    {
      v12 = Master_object;
      v13 = 0;
      do
      {
        if ( v13 >= (unsigned int)max_length )
          sub_1C2D6F4(Master_object, v8, v9);
        v14 = memberList->m_Items[v13];
        if ( v14
          && v14->fields.isRestrictionGrandServant
          && (v14->fields._IsGrandServant_k__BackingField || v14->fields._IsTempGrandServant_k__BackingField) )
        {
          Master_object = (UserServantGrandMaster_o *)this->fields.questRestrictionInfo;
          if ( !Master_object )
            goto LABEL_42;
          GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                            (QuestRestrictionInfo_o *)Master_object,
                                            v14->fields._InitPos_k__BackingField,
                                            0);
          SvtId = PartyOrganizationListViewItem__get_SvtId(v14, 0);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          Master_object = (UserServantGrandMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                        SvtId,
                                                        0);
          if ( !v12 )
            goto LABEL_42;
          Master_object = (UserServantGrandMaster_o *)UserServantGrandMaster__GetEntityFromSvtId(
                                                        v12,
                                                        (int32_t)Master_object,
                                                        0);
          if ( GrandServantRestrictionEntity )
          {
            v17 = Master_object;
            if ( Master_object )
            {
              Master_object = (UserServantGrandMaster_o *)PartyOrganizationListViewItem__GetEquipList(v14, 0);
              userServantEntity = v14->fields.userServantEntity;
              if ( !userServantEntity )
                goto LABEL_42;
              v19 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
              EquipFriendShipSkillChange_k__BackingField = v14->fields._EquipFriendShipSkillChange_k__BackingField;
              v21 = (System_Int64_array *)Master_object;
              MasterName_k__BackingField = (int32_t)v17->fields._MasterName_k__BackingField;
              *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v37.fields.fakeValue = v19;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v36 = v37;
              v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v36, 0);
              v24 = (GrandSvtInfo_o *)sub_1C2D6DC(GrandSvtInfo_TypeInfo);
              GrandSvtInfo___ctor(
                v24,
                MasterName_k__BackingField,
                v23,
                v21,
                EquipFriendShipSkillChange_k__BackingField,
                0);
              if ( !v6 )
                goto LABEL_42;
              items = v6->fields._items;
              v28 = Method_System_Collections_Generic_List_GrandSvtInfo__Add__;
              ++v6->fields._version;
              if ( !items )
                goto LABEL_42;
              size = v6->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v6,
                  (Il2CppObject *)v24,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
              }
              else
              {
                v30 = &items->obj.klass + size;
                v6->fields._size = size + 1;
                v30[4] = (Il2CppClass *)v24;
                sub_1C2D434((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v24, v25, v26);
              }
            }
          }
        }
        LODWORD(max_length) = memberList->max_length;
      }
      while ( (__int64)++v13 < (int)max_length );
    }
    if ( !v6 )
LABEL_42:
      sub_1C2D6EC(Master_object, v8);
    return (GrandSvtInfo_array *)System_Collections_Generic_List_object___ToArray(
                                   v6,
                                   (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_GrandSvtInfo__ToArray__);
  }
  else
  {
    v32 = Method_System_Array_Empty_GrandSvtInfo___;
    v33 = *((_QWORD *)Method_System_Array_Empty_GrandSvtInfo___ + 7);
    if ( !v33 )
    {
      sub_1C7DC00(Method_System_Array_Empty_GrandSvtInfo___);
      v33 = v32[7];
    }
    v34 = *(_QWORD *)(v33 + 16);
    if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
      v34 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v34 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v34);
    v35 = *(_QWORD *)(v32[7] + 16LL);
    if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
      v35 = sub_1C7DBA4(inited);
    return **(GrandSvtInfo_array ***)(v35 + 184);
  }
}


System_Boolean_array *PartyListViewItem__GetIsFollowerList(PartyListViewItem_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x20
  BalanceConfig_c *v7; // x0
  unsigned __int64 i; // x22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v10; // x8

  if ( (byte_4C22C2E & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&bool___TypeInfo);
    byte_4C22C2E = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v6 = sub_1C2D538(bool___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  v7 = BalanceConfig_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= v7->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( i >= LODWORD(memberList->max_length) )
      goto LABEL_18;
    v10 = memberList->m_Items[i];
    if ( v10 )
    {
      if ( !v6 )
LABEL_17:
        sub_1C2D6EC(v7, v4);
      if ( i >= *(unsigned int *)(v6 + 24) )
LABEL_18:
        sub_1C2D6F4(v7, v4, v5);
      *(_BYTE *)(v6 + 32 + i) = v10->fields.isFollower;
    }
  }
  return (System_Boolean_array *)v6;
}


// local variable allocation has failed, the output may be wrong!
PartyOrganizationListViewItem_o *PartyListViewItem__GetMember(
        PartyListViewItem_o *this,
        int32_t num,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8

  memberList = this->fields.memberList;
  if ( !memberList )
    sub_1C2D6EC(this, num);
  if ( LODWORD(memberList->max_length) <= num )
    sub_1C2D6F4(this, *(_QWORD *)&num, method);
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
    sub_1C2D6EC(this, npcSvtIds);
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
        sub_1C2D6F4(myServantNumMax, npcSvtIds, method);
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
  __int64 v5; // x2
  int dialogMessageInfoDictionary; // w23
  PartyOrganizationListViewItem_o *v7; // x20
  unsigned int v8; // w24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int TotalCostRestriction; // w0
  QuestRestrictionInfo_o *v12; // x0
  int32_t FixedServantPositionCount; // w20
  unsigned int v14; // w25
  char v15; // w24
  char v16; // w22
  char v17; // w23
  struct PartyOrganizationListViewItem_array *v18; // x8
  Il2CppClass **v19; // x8
  Il2CppClass *v20; // x21
  bool v21; // w10
  int v22; // w8
  char v23; // w9
  char v24; // w10

  if ( (byte_4C22C21 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C22C21 = 1;
  }
  menuKind = this->fields.menuKind;
  if ( menuKind == 1 )
    goto LABEL_4;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( menuKind == 3 )
  {
    if ( !questRestrictionInfo )
LABEL_47:
      sub_1C2D6EC(questRestrictionInfo, method);
    questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(
                                                       questRestrictionInfo,
                                                       0);
    if ( questRestrictionInfo )
    {
      dialogMessageInfoDictionary = (int)questRestrictionInfo->fields.dialogMessageInfoDictionary;
      v7 = (PartyOrganizationListViewItem_o *)questRestrictionInfo;
      if ( dialogMessageInfoDictionary < 1 )
      {
LABEL_4:
        LODWORD(questRestrictionInfo) = 0;
        return (int)questRestrictionInfo;
      }
      v8 = 0;
      while ( 1 )
      {
        memberList = this->fields.memberList;
        if ( !memberList )
          goto LABEL_47;
        if ( v8 >= LODWORD(memberList->max_length) )
          goto LABEL_48;
        questRestrictionInfo = (QuestRestrictionInfo_o *)memberList->m_Items[v8];
        if ( !questRestrictionInfo )
          goto LABEL_47;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)questRestrictionInfo, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                                           SvtId,
                                                           0);
        if ( v8 >= v7->fields.sortIndex )
          goto LABEL_48;
        if ( (_DWORD)questRestrictionInfo != *((_DWORD *)&v7->fields.sortValue0 + (int)v8) )
          break;
        if ( dialogMessageInfoDictionary == ++v8 )
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
      v12 = this->fields.questRestrictionInfo;
      if ( !v12 )
        goto LABEL_4;
      FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(v12, 0);
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      while ( 1 )
      {
        questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( (signed int)v14 >= SHIDWORD(questRestrictionInfo->fields.uniqueSvtRestrictionEntity[2].fields.targetVals) )
          break;
        v18 = this->fields.memberList;
        if ( !v18 )
          goto LABEL_47;
        if ( v14 >= LODWORD(v18->max_length) )
LABEL_48:
          sub_1C2D6F4(questRestrictionInfo, method, v5);
        v19 = &v18->obj.klass + (int)v14;
        v20 = v19[4];
        if ( !v20 )
          goto LABEL_47;
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction((PartyOrganizationListViewItem_o *)v19[4], 0) )
        {
          LODWORD(questRestrictionInfo) = 18;
          return (int)questRestrictionInfo;
        }
        ++v14;
        v17 |= BYTE2(v20->_2.genericContainerHandle) != 0;
        v16 |= BYTE3(v20->_2.genericContainerHandle) != 0;
        FixedServantPositionCount -= BYTE6(v20->_2.genericContainerHandle) & 1;
        v15 |= BYTE4(v20->_2.genericContainerHandle) != 0;
      }
      if ( (v15 & 1) != 0 )
      {
        LODWORD(questRestrictionInfo) = 9;
        return (int)questRestrictionInfo;
      }
      v21 = FixedServantPositionCount > 0;
      v22 = FixedServantPositionCount <= 0 ? 12 : 10;
      v23 = v21 | v17;
      v24 = v16 | v21 | v17;
      LODWORD(questRestrictionInfo) = (v23 & 1) != 0 ? v22 : 13;
      if ( (v24 & 1) == 0 )
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
  if ( (byte_4C22C0E & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_FollowerInfo___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_1C2D490(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_1C2D490(&Method_PartyListViewItem___c__DisplayClass37_0__GetSupportInitIndex_b__0__);
    this = (PartyListViewItem_o *)sub_1C2D490(&PartyListViewItem___c__DisplayClass37_0_TypeInfo);
    byte_4C22C0E = 1;
  }
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_15:
    sub_1C2D6EC(this, fixNpcFollowerInfoList);
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
      v10 = (PartyListViewItem___c__DisplayClass37_0_o *)sub_1C2D6DC(PartyListViewItem___c__DisplayClass37_0_TypeInfo);
      PartyListViewItem___c__DisplayClass37_0___ctor(v10, 0);
      if ( !v10 )
        goto LABEL_15;
      v10->fields.chkIdx = ++v8;
      v11 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v11,
        (Il2CppObject *)v10,
        Method_PartyListViewItem___c__DisplayClass37_0__GetSupportInitIndex_b__0__,
        0);
      v12 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)fixNpcFollowerInfoList,
              (System_Func_TSource__bool__o *)v11,
              (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      if ( !System_Linq_Enumerable__Any_object_(
              v12,
              (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
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
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  unsigned int *v7; // x20
  unsigned __int64 v8; // x24
  CGThumbnailListItem_o *i; // x21
  BalanceConfig_c *v10; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v12; // x8
  CGThumbnailListItem_c *servantEntity; // x22
  __int64 v15; // x0

  if ( (byte_4C22C2C & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&ServantEntity___TypeInfo);
    byte_4C22C2C = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v7 = (unsigned int *)sub_1C2D538(ServantEntity___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  v8 = 0;
  for ( i = (CGThumbnailListItem_o *)(v7 + 8); ; i = (CGThumbnailListItem_o *)((char *)i + 8) )
  {
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v8 >= v10->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_19;
    if ( v8 >= LODWORD(memberList->max_length) )
      goto LABEL_20;
    v12 = memberList->m_Items[v8];
    if ( v12 )
    {
      if ( !v7 )
LABEL_19:
        sub_1C2D6EC(v10, v4);
      servantEntity = (CGThumbnailListItem_c *)v12->fields.servantEntity;
      if ( servantEntity )
      {
        v10 = (BalanceConfig_c *)sub_1C2D5CC(servantEntity, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
        if ( !v10 )
        {
          v15 = sub_1C2D710();
          sub_1C2D5B8(v15, 0);
        }
      }
      if ( v8 >= v7[6] )
LABEL_20:
        sub_1C2D6F4(v10, v4, v5);
      i->klass = servantEntity;
      sub_1C2D434(i, (int32_t)servantEntity, v5, v6);
    }
    ++v8;
  }
  return (ServantEntity_array *)v7;
}


System_String_array *PartyListViewItem__GetSvtNameList(PartyListViewItem_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x20
  unsigned __int64 v7; // x23
  CGThumbnailListItem_o *i; // x21
  CGThumbnailListItem_c *SvtNameText; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v11; // x0
  const MethodInfo *v12; // x3

  if ( (byte_4C22C2D & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    byte_4C22C2D = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v6 = sub_1C2D538(string___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  v7 = 0;
  for ( i = (CGThumbnailListItem_o *)(v6 + 32); ; i = (CGThumbnailListItem_o *)((char *)i + 8) )
  {
    SvtNameText = (CGThumbnailListItem_c *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      SvtNameText = (CGThumbnailListItem_c *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v7 >= *((int *)SvtNameText->static_fields + 43) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( v7 >= LODWORD(memberList->max_length) )
      goto LABEL_18;
    v11 = memberList->m_Items[v7];
    if ( v11 )
    {
      SvtNameText = (CGThumbnailListItem_c *)PartyOrganizationListViewItem__get_SvtNameText(v11, 0);
      if ( !v6 )
LABEL_17:
        sub_1C2D6EC(SvtNameText, v4);
      if ( v7 >= *(unsigned int *)(v6 + 24) )
LABEL_18:
        sub_1C2D6F4(SvtNameText, v4, v5);
      i->klass = SvtNameText;
      sub_1C2D434(i, (int32_t)SvtNameText, v5, v12);
    }
    ++v7;
  }
  return (System_String_array *)v6;
}


int32_t PartyListViewItem__GetTotalCost(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  unsigned int v4; // w23
  int32_t v5; // w20
  int64_t Entity; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v8; // x21
  int64_t userServantEntity; // x22
  Il2CppObject *Master_object; // x0
  __int128 v11; // q0
  __int128 v12; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x22
  int v14; // w20
  int32_t EquipCost; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-80h]

  if ( (byte_4C22C2A & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C22C2A = 1;
  }
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    Entity = (int64_t)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Entity = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v4 >= *(_DWORD *)(*(_QWORD *)(Entity + 184) + 172LL) )
      return v5;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_22;
    if ( v4 >= LODWORD(memberList->max_length) )
      sub_1C2D6F4(Entity, method, v2);
    v8 = memberList->m_Items[v4];
    if ( !v8 )
LABEL_22:
      sub_1C2D6EC(Entity, method);
    userServantEntity = (int64_t)v8->fields.userServantEntity;
    if ( userServantEntity )
    {
      if ( !v8->fields._IsDisappearSvt_k__BackingField )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
        v12 = *(_OWORD *)(userServantEntity + 16);
        v11 = *(_OWORD *)(userServantEntity + 32);
        v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        *(_OWORD *)&v18.fields.currentCryptoKey = v12;
        *(_OWORD *)&v18.fields.fakeValue = v11;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v17 = v18;
        Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v17, 0);
        if ( !v13 )
          goto LABEL_22;
        Entity = (int64_t)DataMasterBase_object__object__long___GetEntity(
                            v13,
                            Entity,
                            (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
      v14 = *(_DWORD *)(Entity + 28) + v5;
      EquipCost = PartyOrganizationListViewItem__get_EquipCost(v8, 0);
      v5 = v14 + (EquipCost & ~(EquipCost >> 31));
    }
    ++v4;
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
  if ( (byte_4C22C27 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (PartyListViewItem_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C22C27 = 1;
  }
  if ( userSvtId < 1 )
    return 0;
  memberList = v4->fields.memberList;
  if ( !memberList )
LABEL_38:
    sub_1C2D6EC(this, userSvtId);
  v6 = 0;
  while ( 1 )
  {
    max_length = memberList->max_length;
    if ( (int)v6 >= (int)max_length )
      return 0;
    if ( v6 >= max_length )
LABEL_39:
      sub_1C2D6F4(this, userSvtId, method);
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
                                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
        if ( !this )
          goto LABEL_38;
        v12 = *(_OWORD *)&this->fields.sortValue0;
        *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&this->fields.selectNum;
        *(_OWORD *)&v21.fields.fakeValue = v12;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v20 = v21;
        this = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v20, 0);
        if ( this )
        {
          this = (PartyListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                          equipUserServantEntityList,
                                          v11,
                                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !this )
            goto LABEL_38;
          v13 = *(_OWORD *)&this->fields.sortValue0;
          *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&this->fields.selectNum;
          *(_OWORD *)&v21.fields.fakeValue = v13;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v19 = v21;
          this = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v19, 0);
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(SvtId, 0);
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
  if ( (byte_4C22C28 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C22C28 = 1;
  }
  if ( svtId >= 1 )
  {
    memberList = v4->fields.memberList;
    if ( !memberList )
LABEL_14:
      sub_1C2D6EC(this, *(_QWORD *)&svtId);
    v6 = 0;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
        sub_1C2D6F4(this, *(_QWORD *)&svtId, method);
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
        this = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(EquipSvtId, 0);
        if ( (_DWORD)this == svtId )
        {
          v12 = PartyOrganizationListViewItem__get_SvtId(v9, 0);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v12, 0);
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
  const MethodInfo *v9; // x3
  struct System_String_o *deckName; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v12; // x23
  int32_t max_length; // w22
  int64_t userEquipId; // x20
  DeckServant_o *v15; // x21
  __int64 v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct PartyOrganizationListViewItem_array *v19; // x24
  il2cpp_array_size_t v20; // x25
  __int64 v21; // x29
  int v22; // w28
  PartyOrganizationListViewItem_o *v23; // x22
  __int64 v24; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v26; // q0
  System_Int64_array *EquipList; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  _DWORD *v30; // x22
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  const MethodInfo *v34; // x3
  _DWORD *v35; // x0
  __int64 v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+40h] [xbp-80h]

  if ( (byte_4C22C23 & 1) == 0 )
  {
    sub_1C2D490(&DeckServantData_TypeInfo);
    sub_1C2D490(&DeckServant_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&UserDeckEntity_TypeInfo);
    byte_4C22C23 = 1;
  }
  v5 = sub_1C2D6DC(UserDeckEntity_TypeInfo);
  UserDeckEntity___ctor((UserDeckEntity_o *)v5, 0);
  if ( !v5 )
    goto LABEL_29;
  *(_QWORD *)(v5 + 16) = this->fields.id;
  *(_DWORD *)(v5 + 32) = this->fields.index + 1;
  deckName = this->fields.deckName;
  *(_QWORD *)(v5 + 40) = deckName;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), (int32_t)deckName, v8, v9);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_29;
  v12 = baseItem ? baseItem : this;
  max_length = memberList->max_length;
  userEquipId = v12->fields.userEquipId;
  v15 = (DeckServant_o *)sub_1C2D6DC(DeckServant_TypeInfo);
  DeckServant___ctor_41475048(v15, max_length, userEquipId, 0);
  *(_QWORD *)(v5 + 48) = v15;
  v16 = v5 + 48;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 48), (int32_t)v15, v17, v18);
  v19 = v12->fields.memberList;
  if ( !v19 )
    goto LABEL_29;
  v20 = v19->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = 0;
    v22 = 1;
    while ( 1 )
    {
      v23 = v19->m_Items[v21];
      v24 = sub_1C2D6DC(DeckServantData_TypeInfo);
      DeckServantData___ctor((DeckServantData_o *)v24, 0);
      if ( !v24 )
        break;
      *(_DWORD *)(v24 + 16) = v22;
      if ( !v23 )
        break;
      userServantEntity = v23->fields.userServantEntity;
      if ( userServantEntity )
      {
        v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v41.fields.fakeValue = v26;
      }
      else
      {
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v40, 0, 0);
        v41 = v40;
      }
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v39 = v41;
      *(_QWORD *)(v24 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v39, 0);
      *(_BYTE *)(v24 + 56) = v23->fields.isFollower;
      EquipList = PartyOrganizationListViewItem__GetEquipList(v23, 0);
      *(_QWORD *)(v24 + 40) = EquipList;
      sub_1C2D434((CGThumbnailListItem_o *)(v24 + 40), (int32_t)EquipList, v28, v29);
      *(_DWORD *)(v24 + 76) = v23->fields._InitPos_k__BackingField;
      if ( !*(_QWORD *)v16 )
        break;
      v30 = *(_DWORD **)(*(_QWORD *)v16 + 16LL);
      if ( !v30 )
        break;
      v31 = sub_1C2D5CC(v24, *(_QWORD *)(*(_QWORD *)v30 + 64LL));
      if ( !v31 )
      {
        v38 = sub_1C2D710();
        sub_1C2D5B8(v38, 0);
      }
      if ( (unsigned int)(v22 - 1) < v30[6] )
      {
        v35 = &v30[2 * v21];
        *((_QWORD *)v35 + 4) = v24;
        sub_1C2D434((CGThumbnailListItem_o *)(v35 + 8), v24, v33, v34);
        if ( (_DWORD)v20 == v22 )
          return (UserDeckEntity_o *)v5;
        v21 = v22;
        if ( (unsigned int)v22++ < LODWORD(v19->max_length) )
          continue;
      }
      sub_1C2D6F4(v31, v32, v33);
    }
LABEL_29:
    sub_1C2D6EC(v6, v7);
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
  const MethodInfo *v13; // x3
  __int64 v14; // x2
  struct PartyOrganizationListViewItem_array *v15; // x8
  unsigned __int64 v16; // x28
  unsigned __int64 max_length_low; // x9
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  PartyOrganizationListViewItem_o *v19; // x22
  struct QuestRestrictionInfo_o *v20; // x8
  _BOOL4 isNpcEditablePos; // w23
  _BOOL4 IsEditablePos; // w0
  __int64 v23; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v25; // q0
  System_Int64_array *EquipList; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t InitPos_k__BackingField; // w8
  int v30; // w8
  unsigned int *v31; // x22
  const MethodInfo *v32; // x3
  unsigned int *v33; // x0
  __int64 v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37[2]; // [xsp+20h] [xbp-A0h] BYREF

  if ( (byte_4C22C24 & 1) == 0 )
  {
    sub_1C2D490(&DeckServantData_TypeInfo);
    sub_1C2D490(&DeckServant_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&UserEventDeckEntity_TypeInfo);
    byte_4C22C24 = 1;
  }
  memset(&v37[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v3 = sub_1C2D6DC(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor((UserEventDeckEntity_o *)v3, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
  v8 = (DeckServant_o *)sub_1C2D6DC(DeckServant_TypeInfo);
  max_length = memberList->max_length;
  v10 = v8;
  DeckServant___ctor_41475048(v8, max_length, userEquipId, 0);
  *(_QWORD *)(v3 + 32) = v10;
  v11 = v3 + 32;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)v10, v12, v13);
  v15 = this->fields.memberList;
  if ( !v15 )
LABEL_55:
    sub_1C2D6EC(IsUseOldMaster, v4);
  v16 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v15->max_length);
    if ( (__int64)v16 >= (int)max_length_low )
      return (UserEventDeckEntity_o *)v3;
    if ( v16 >= max_length_low )
      goto LABEL_56;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v19 = v15->m_Items[v16];
    if ( !questRestrictionInfo )
    {
      isNpcEditablePos = 0;
      goto LABEL_28;
    }
    IsUseOldMaster = (NetworkManager_c *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
    v20 = this->fields.questRestrictionInfo;
    if ( ((unsigned __int8)IsUseOldMaster & 1) != 0 )
    {
      if ( !v20 )
        goto LABEL_55;
      isNpcEditablePos = v20->fields.isNpcEditablePos;
    }
    else
    {
      if ( !v19 || !v20 )
        goto LABEL_55;
      IsEditablePos = QuestRestrictionInfo__IsEditablePos(
                        this->fields.questRestrictionInfo,
                        v19->fields._InitPos_k__BackingField,
                        0);
      v20 = this->fields.questRestrictionInfo;
      isNpcEditablePos = IsEditablePos;
      if ( !v20 )
        goto LABEL_28;
    }
    IsUseOldMaster = (NetworkManager_c *)QuestRestrictionInfo__IsNpcMulitipleOrOnly(v20, 0);
    if ( ((unsigned __int8)IsUseOldMaster & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_55;
      if ( v19->fields.isFixNpc
        && v19->fields.isFollower
        && !isNpcEditablePos
        && !v19->fields.isMyServantOrNpcRestriction )
      {
        ++v16;
        goto LABEL_51;
      }
    }
LABEL_28:
    v23 = sub_1C2D6DC(DeckServantData_TypeInfo);
    DeckServantData___ctor((DeckServantData_o *)v23, 0);
    if ( !v23 )
      goto LABEL_55;
    *(_DWORD *)(v23 + 16) = v16 + 1;
    if ( !v19 )
      goto LABEL_55;
    userServantEntity = v19->fields.userServantEntity;
    if ( userServantEntity )
    {
      v25 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v37[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v37[1].fields.fakeValue = v25;
    }
    else
    {
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v37, 0, 0);
      v37[1] = v37[0];
    }
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v36 = v37[1];
    *(_QWORD *)(v23 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v36, 0);
    *(_BYTE *)(v23 + 56) = v19->fields.isFollower;
    EquipList = PartyOrganizationListViewItem__GetEquipList(v19, 0);
    *(_QWORD *)(v23 + 40) = EquipList;
    sub_1C2D434((CGThumbnailListItem_o *)(v23 + 40), (int32_t)EquipList, v27, v28);
    InitPos_k__BackingField = v19->fields._InitPos_k__BackingField;
    *(_QWORD *)(v23 + 64) = 0;
    *(_DWORD *)(v23 + 76) = InitPos_k__BackingField;
    if ( *(_QWORD *)(v23 + 24) )
    {
      v30 = 0;
LABEL_43:
      if ( (isNpcEditablePos & v30 & 1) != 0 )
      {
        *(_QWORD *)(v23 + 64) = v19->fields.npcFollowerSvtId;
        if ( v19->fields.isFixNpc )
          *(_BYTE *)(v23 + 56) = 0;
      }
      goto LABEL_46;
    }
    if ( !v19->fields.isMyServantOrNpcRestriction || !v19->fields.isFollower )
    {
      v30 = !v19->fields.isMyServantOrNpcRestriction;
      goto LABEL_43;
    }
    *(_QWORD *)(v23 + 64) = v19->fields.npcFollowerSvtId;
LABEL_46:
    *(_DWORD *)(v23 + 80) = v19->fields._EquipFriendShipSkillChange_k__BackingField;
    if ( !*(_QWORD *)v11 )
      goto LABEL_55;
    v31 = *(unsigned int **)(*(_QWORD *)v11 + 16LL);
    if ( !v31 )
      goto LABEL_55;
    IsUseOldMaster = (NetworkManager_c *)sub_1C2D5CC(v23, *(_QWORD *)(*(_QWORD *)v31 + 64LL));
    if ( !IsUseOldMaster )
    {
      v35 = sub_1C2D710();
      sub_1C2D5B8(v35, 0);
    }
    if ( v16 >= v31[6] )
LABEL_56:
      sub_1C2D6F4(IsUseOldMaster, v4, v14);
    v33 = &v31[2 * v16];
    *((_QWORD *)v33 + 4) = v23;
    sub_1C2D434((CGThumbnailListItem_o *)(v33 + 8), v23, v14, v32);
    ++v16;
LABEL_51:
    v15 = this->fields.memberList;
    if ( !v15 )
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

  if ( (byte_4C22C0C & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C22C0C = 1;
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
        sub_1C2D6EC(v6, userServantList);
      if ( i >= LODWORD(npcSvtIds->max_length) )
LABEL_17:
        sub_1C2D6F4(v6, userServantList, npcSvtIds);
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
  __int64 v12; // x2
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t v14; // w23
  __int64 v15; // x27
  int32_t max_length; // w9
  il2cpp_array_size_t v17; // x8
  System_Int64_array *v18; // x24
  unsigned __int64 v19; // x25
  int64_t v20; // x8

  if ( (byte_4C22C26 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__TryAdd__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    byte_4C22C26 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v9,
    (const MethodInfo_33D7E00 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( userSvtId >= 1 )
  {
    memberList = this->fields.memberList;
    if ( !memberList )
LABEL_21:
      sub_1C2D6EC(EquipList, v11);
    v14 = 0;
    v15 = (unsigned int)editEquipIndex;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( v14 >= max_length )
        break;
      if ( v14 >= (unsigned int)max_length )
LABEL_23:
        sub_1C2D6F4(EquipList, v11, v12);
      EquipList = (System_Int64_array *)memberList->m_Items[v14];
      if ( EquipList )
      {
        EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)EquipList, 0);
        if ( EquipList )
        {
          v17 = EquipList->max_length;
          v18 = EquipList;
          if ( (int)v17 >= 1 )
          {
            v19 = 0;
            do
            {
              if ( v14 != memberIndex || v15 != v19 )
              {
                if ( v19 >= (unsigned int)v17 )
                  goto LABEL_23;
                v20 = v18->m_Items[v19];
                if ( v20 )
                {
                  if ( v20 == userSvtId )
                  {
                    if ( !v9 )
                      goto LABEL_21;
                    EquipList = (System_Int64_array *)System_Collections_Generic_Dictionary_int__int___TryAdd(
                                                        v9,
                                                        v14,
                                                        v19,
                                                        (const MethodInfo_33D9EC4 *)Method_System_Collections_Generic_Dictionary_int__int__TryAdd__);
                  }
                }
              }
              LODWORD(v17) = v18->max_length;
              ++v19;
            }
            while ( (__int64)v19 < (int)v17 );
          }
          memberList = this->fields.memberList;
          ++v14;
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
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  int32_t v5; // w9
  int32_t v6; // w21
  int32_t DeckMemberMax; // w8
  struct PartyOrganizationListViewItem_array *memberList; // x9
  PartyOrganizationListViewItem_o *v9; // x9
  struct UserServantEntity_o *userServantEntity; // x10

  if ( (byte_4C22C1B & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C22C1B = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  v5 = 0;
  do
  {
    v6 = v5;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BalanceConfig_TypeInfo;
    }
    DeckMemberMax = v4->static_fields->DeckMemberMax;
    if ( v6 >= DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_12;
    if ( (unsigned int)v6 >= LODWORD(memberList->max_length) )
      sub_1C2D6F4(v4, method, v2);
    v9 = memberList->m_Items[v6];
    if ( !v9 )
LABEL_12:
      sub_1C2D6EC(v4, method);
    userServantEntity = v9->fields.userServantEntity;
    v5 = v6 + 1;
  }
  while ( !userServantEntity );
  return v6 >= DeckMemberMax;
}


bool PartyListViewItem__IsDeckInit(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  int32_t i; // w21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v7; // x8
  System_String_o *deckName; // x20
  System_String_o *DefaultDeckName; // x1

  if ( (byte_4C22C1A & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C22C1A = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( i >= v4->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_15;
    if ( (unsigned int)i >= LODWORD(memberList->max_length) )
      sub_1C2D6F4(v4, method, v2);
    v7 = memberList->m_Items[i];
    if ( !v7 )
LABEL_15:
      sub_1C2D6EC(v4, method);
    if ( v7->fields.userServantEntity )
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
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  signed __int64 i; // x21
  signed __int64 DeckMemberMax; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x9
  PartyOrganizationListViewItem_o *v8; // x9

  if ( (byte_4C22C32 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C22C32 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BalanceConfig_TypeInfo;
    }
    DeckMemberMax = v4->static_fields->DeckMemberMax;
    if ( i >= DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      sub_1C2D6EC(v4, method);
    if ( i >= (unsigned __int64)LODWORD(memberList->max_length) )
      sub_1C2D6F4(v4, method, v2);
    v8 = memberList->m_Items[i];
    if ( v8 )
    {
      if ( v8->fields._IsDuplicateBonus_k__BackingField )
        break;
    }
  }
  return i < DeckMemberMax;
}


bool PartyListViewItem__IsEquipEmpty(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  unsigned int v4; // w8
  PartyOrganizationListViewItem_o *v5; // x0
  unsigned int v6; // w21
  int totalCostRestrictionEntity_high; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int64_t EquipUserSvtId; // x0

  if ( (byte_4C22C1C & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C22C1C = 1;
  }
  v4 = 0;
  do
  {
    v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    v6 = v4;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    totalCostRestrictionEntity_high = HIDWORD(v5->fields.questRestrictionInfo->fields.totalCostRestrictionEntity);
    if ( (int)v6 >= totalCostRestrictionEntity_high )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_12;
    if ( v6 >= LODWORD(memberList->max_length) )
      sub_1C2D6F4(v5, method, v2);
    v5 = memberList->m_Items[v6];
    if ( !v5 )
LABEL_12:
      sub_1C2D6EC(v5, method);
    EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v5, 0);
    v4 = v6 + 1;
  }
  while ( EquipUserSvtId <= 0 );
  return (int)v6 >= totalCostRestrictionEntity_high;
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
  if ( (byte_4C22C29 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C22C29 = 1;
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
          sub_1C2D6F4(this, *(_QWORD *)&svtId, method);
        this = (PartyListViewItem_o *)memberList->m_Items[v7];
        if ( !this )
          break;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)this, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(EquipSvtId, 0) == svtId;
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
      sub_1C2D6EC(this, *(_QWORD *)&svtId);
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
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  bool IsUseOldMaster; // w22
  signed __int64 i; // x29
  BalanceConfig_c *v19; // x0
  signed __int64 DeckMemberMax; // x26
  __int64 v21; // x24
  __int64 v22; // x2
  const MethodInfo *v23; // x3
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v26; // x1
  __int64 v27; // x23
  System_Func_object__bool__o *v28; // x25

  if ( (byte_4C22C0B & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_BasicHelper_Any_FollowerInfo____77996784);
    sub_1C2D490(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_1C2D490(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_1C2D490(&Method_PartyListViewItem___c__IsNeedDeckPosReset_b__33_0__);
    sub_1C2D490(&Method_PartyListViewItem___c__DisplayClass33_0__IsNeedDeckPosReset_b__1__);
    sub_1C2D490(&PartyListViewItem___c__DisplayClass33_0_TypeInfo);
    sub_1C2D490(&PartyListViewItem___c_TypeInfo);
    byte_4C22C0B = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_43;
  questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsNpcMulitipleOrOnly(questRestrictionInfo, 0);
  v6 = 0;
  if ( ((unsigned __int8)questRestrictionInfo & 1) == 0 )
    goto LABEL_19;
  v7 = this->fields.questRestrictionInfo;
  if ( !v7 )
    goto LABEL_43;
  if ( v7->fields.isNpcEditablePos )
  {
    v6 = 0;
    goto LABEL_19;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  questRestrictionInfo = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v8 = this->fields.questRestrictionInfo;
  if ( !v8 || !questRestrictionInfo )
LABEL_43:
    sub_1C2D6EC(questRestrictionInfo, deck);
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
    _9__33_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_FollowerInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__33_0, v12, Method_PartyListViewItem___c__IsNeedDeckPosReset_b__33_0__, 0);
    static_fields = PartyListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__33_0 = (struct System_Func_FollowerInfo__bool__o *)_9__33_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__33_0, (int32_t)_9__33_0, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          QuestFollowerList,
          (System_Func_TSource__bool__o *)_9__33_0,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
  v6 = System_Linq_Enumerable__ToArray_object_(
         v16,
         (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
LABEL_19:
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_43;
  IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
  for ( i = 0; ; ++i )
  {
    v19 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v19 = BalanceConfig_TypeInfo;
    }
    DeckMemberMax = v19->static_fields->DeckMemberMax;
    if ( i >= DeckMemberMax )
      break;
    v21 = sub_1C2D6DC(PartyListViewItem___c__DisplayClass33_0_TypeInfo);
    PartyListViewItem___c__DisplayClass33_0___ctor((PartyListViewItem___c__DisplayClass33_0_o *)v21, 0);
    if ( !deck )
      goto LABEL_43;
    deckInfo = deck->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_43;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_43;
    if ( i >= (unsigned __int64)LODWORD(svts->max_length) )
      sub_1C2D6F4(questRestrictionInfo, deck, v22);
    if ( !v21 )
      goto LABEL_43;
    v26 = svts->m_Items[i];
    *(_QWORD *)(v21 + 16) = v26;
    v27 = v21 + 16;
    sub_1C2D434((CGThumbnailListItem_o *)(v21 + 16), (int32_t)v26, v22, v23);
    if ( IsUseOldMaster )
    {
      if ( !v6
        || (v28 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_FollowerInfo__bool__TypeInfo),
            System_Func_object__bool____ctor(
              v28,
              (Il2CppObject *)v21,
              Method_PartyListViewItem___c__DisplayClass33_0__IsNeedDeckPosReset_b__1__,
              0),
            questRestrictionInfo = (QuestRestrictionInfo_o *)BasicHelper__Any_object__51084700(
                                                               v6,
                                                               (System_Func_T__bool__o *)v28,
                                                               (const MethodInfo_30B7D9C *)Method_BasicHelper_Any_FollowerInfo____77996784),
            ((unsigned __int8)questRestrictionInfo & 1) != 0) )
      {
        if ( !*(_QWORD *)v27 )
          goto LABEL_43;
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_43;
        questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(
                                                           questRestrictionInfo,
                                                           *(_DWORD *)(*(_QWORD *)v27 + 76LL),
                                                           0);
        if ( ((unsigned __int8)questRestrictionInfo & 1) == 0 )
          continue;
      }
    }
    else
    {
      if ( !*(_QWORD *)v27 )
        goto LABEL_43;
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_43;
      questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsEditablePos(
                                                         questRestrictionInfo,
                                                         *(_DWORD *)(*(_QWORD *)v27 + 76LL),
                                                         0);
      if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
        continue;
    }
    if ( !*(_QWORD *)v27 )
      goto LABEL_43;
    if ( *(_DWORD *)(*(_QWORD *)v27 + 76LL) != *(_DWORD *)(*(_QWORD *)v27 + 16LL) )
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


bool PartyListViewItem__IsSpecificMenuKind_33840448(int32_t menuKind, bool isEventDeck, const MethodInfo *method)
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
  __int64 v2; // x2
  int32_t i; // w21
  PartyOrganizationListViewItem_o *v5; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  il2cpp_array_size_t max_length; // x9
  const MethodInfo *v8; // x1

  if ( (byte_4C22C19 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C22C19 = 1;
  }
  for ( i = 1; ; ++i )
  {
    v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
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
    v5 = memberList->m_Items[i];
    if ( !v5 )
      goto LABEL_16;
    if ( !v5->fields.isFollower )
      PartyOrganizationListViewItem__Empty(v5, 0);
  }
  if ( !(_DWORD)max_length )
LABEL_17:
    sub_1C2D6F4(v5, method, v2);
  v5 = memberList->m_Items[0];
  if ( !v5 )
LABEL_16:
    sub_1C2D6EC(v5, method);
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v5, 0);
  PartyListViewItem__CheckRestriction(this, v8);
}


void PartyListViewItem__Modify(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v4; // w8
  int i; // w22
  BalanceConfig_c *v6; // x0
  int32_t v7; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v9; // x8
  PartyOrganizationListViewItem_o *v10; // x20
  PartyOrganizationListViewItem_o *v11; // x0
  int32_t cost; // w23
  const MethodInfo *v13; // x1

  if ( (byte_4C22C11 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C22C11 = 1;
  }
  v4 = 0;
  for ( i = 1; ; ++i )
  {
    this->fields.cost = v4;
    v6 = BalanceConfig_TypeInfo;
    v7 = i - 1;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
    }
    if ( v7 >= v6->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_12;
    if ( (unsigned int)v7 >= LODWORD(memberList->max_length) )
      sub_1C2D6F4(v6, method, v2);
    v9 = &memberList->obj.klass + v7;
    v10 = (PartyOrganizationListViewItem_o *)v9[4];
    if ( !v10 )
LABEL_12:
      sub_1C2D6EC(v6, method);
    v11 = (PartyOrganizationListViewItem_o *)v9[4];
    v10->fields._NowPos_k__BackingField = i;
    PartyOrganizationListViewItem__Modify(v11, 0);
    cost = this->fields.cost;
    v4 = PartyOrganizationListViewItem__get_MargeCost(v10, 0) + cost;
  }
  PartyListViewItem__CheckRestriction(this, method);
  PartyListViewItem__UpdateEventEffect(this, v13);
}


void PartyListViewItem__Set(PartyListViewItem_o *this, PartyListViewItem_o *item, const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct EventUpValSetupInfo_o *setupInfo; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  int v15; // w23
  unsigned int v16; // w24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v18; // x26
  const MethodInfo *v19; // x3
  PartyOrganizationListViewItem_o *v20; // x21
  Il2CppClass **v21; // x0
  struct PartyOrganizationListViewItem_array *v22; // x8
  PartyOrganizationListViewItem_o *v23; // x8
  struct System_String_o *deckName; // x1
  struct System_Int32_array *waveBattleEnemyClassIds; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Int32_array *trendDispWaveBattleEnemyClassIds; // x1
  struct System_Int32_array **p_trendDispWaveBattleEnemyClassIds; // x20
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x0

  if ( (byte_4C22C12 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C22C12 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0);
  if ( !item )
LABEL_20:
    sub_1C2D6EC(v5, v6);
  *(_QWORD *)&this->fields.menuKind = *(_QWORD *)&item->fields.menuKind;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v7, v8);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v11, v12);
  v15 = 1;
  this->fields.id = item->fields.id;
  while ( 1 )
  {
    v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    v16 = v15 - 1;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v16 >= SHIDWORD(v5->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
      break;
    memberList = item->fields.memberList;
    if ( !memberList )
      goto LABEL_20;
    if ( v16 >= LODWORD(memberList->max_length) )
      goto LABEL_21;
    v5 = memberList->m_Items[v16];
    if ( !v5 )
      goto LABEL_20;
    v18 = this->fields.memberList;
    v5 = PartyOrganizationListViewItem__Clone(v5, -1, 0);
    if ( !v18 )
      goto LABEL_20;
    v20 = v5;
    if ( v5 )
    {
      v5 = (PartyOrganizationListViewItem_o *)sub_1C2D5CC(v5, v18->obj.klass->_1.element_class);
      if ( !v5 )
      {
        v32 = sub_1C2D710();
        sub_1C2D5B8(v32, 0);
      }
    }
    if ( v16 >= LODWORD(v18->max_length) )
      goto LABEL_21;
    v21 = &v18->obj.klass + (int)v16;
    v21[4] = (Il2CppClass *)v20;
    sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v20, v13, v19);
    v22 = this->fields.memberList;
    if ( !v22 )
      goto LABEL_20;
    if ( v16 >= LODWORD(v22->max_length) )
LABEL_21:
      sub_1C2D6F4(v5, v6, v13);
    v23 = v22->m_Items[v16];
    if ( !v23 )
      goto LABEL_20;
    v23->fields._NowPos_k__BackingField = v15++;
  }
  this->fields.cost = item->fields.cost;
  this->fields.isDeckNameDefault = item->fields.isDeckNameDefault;
  deckName = item->fields.deckName;
  this->fields.deckName = deckName;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.deckName, (int32_t)deckName, v13, v14);
  this->fields.userEquipId = item->fields.userEquipId;
  waveBattleEnemyClassIds = item->fields.waveBattleEnemyClassIds;
  this->fields.waveBattleEnemyClassIds = waveBattleEnemyClassIds;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.waveBattleEnemyClassIds,
    (int32_t)waveBattleEnemyClassIds,
    v26,
    v27);
  trendDispWaveBattleEnemyClassIds = item->fields.trendDispWaveBattleEnemyClassIds;
  this->fields.trendDispWaveBattleEnemyClassIds = trendDispWaveBattleEnemyClassIds;
  p_trendDispWaveBattleEnemyClassIds = &this->fields.trendDispWaveBattleEnemyClassIds;
  sub_1C2D434(
    (CGThumbnailListItem_o *)p_trendDispWaveBattleEnemyClassIds,
    (int32_t)trendDispWaveBattleEnemyClassIds,
    v30,
    v31);
  *((_BYTE *)p_trendDispWaveBattleEnemyClassIds + 8) = item->fields._IsWaveBattleRestart_k__BackingField;
  *((_BYTE *)p_trendDispWaveBattleEnemyClassIds + 9) = item->fields._IsClearedWave_k__BackingField;
}


void PartyListViewItem__SetDeckName(PartyListViewItem_o *this, System_String_o *name, const MethodInfo *method)
{
  struct System_String_o *v3; // x20
  const MethodInfo *v5; // x1
  System_String_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
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
  sub_1C2D434((CGThumbnailListItem_o *)p_deckName, (int32_t)v3, v7, v8);
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

  if ( (byte_4C22C13 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C22C13 = 1;
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
      sub_1C2D6F4(v10, *(_QWORD *)&num, userSvtId);
    v12 = &memberList->obj.klass + i;
    v13 = (PartyOrganizationListViewItem_o *)v12[4];
    if ( !v13 )
LABEL_15:
      sub_1C2D6EC(v10, *(_QWORD *)&num);
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

  if ( (byte_4C22C14 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C22C14 = 1;
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
      sub_1C2D6F4(v10, *(_QWORD *)&num, userSvtId);
    v12 = &memberList->obj.klass + i;
    v13 = (PartyOrganizationListViewItem_o *)v12[4];
    if ( !v13 )
LABEL_14:
      sub_1C2D6EC(v10, *(_QWORD *)&num);
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
    sub_1C2D6EC(this, *(_QWORD *)&num);
  }
  if ( LODWORD(v12->max_length) <= num )
LABEL_12:
    sub_1C2D6F4(this, *(_QWORD *)&num, equipUserSvtIds);
  this = (PartyListViewItem_o *)v12->m_Items[num];
  if ( !this )
    goto LABEL_11;
  LODWORD(this->fields.userEquipId) = isChangeFriendShipSkill;
  v13 = v7->fields.cost;
  v7->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0) + v13;
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
    || (PartyOrganizationListViewItem__Modify_34037668((PartyOrganizationListViewItem_o *)this, item, 0),
        (v10 = v6->fields.memberList) == 0) )
  {
LABEL_11:
    sub_1C2D6EC(this, *(_QWORD *)&num);
  }
  if ( LODWORD(v10->max_length) <= num )
LABEL_12:
    sub_1C2D6F4(this, *(_QWORD *)&num, item);
  this = (PartyListViewItem_o *)v10->m_Items[num];
  if ( !this )
    goto LABEL_11;
  v11 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0) + v11;
  PartyListViewItem__CheckRestriction(v6, v12);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewItem__SetMember_33905100(
        PartyListViewItem_o *this,
        int32_t idx,
        PartyOrganizationListViewItem_o *member,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v6; // x19
  int32_t cost; // w24
  const MethodInfo *v9; // x3
  struct PartyOrganizationListViewItem_array *v10; // x23
  Il2CppClass **v11; // x0
  struct PartyOrganizationListViewItem_array *v12; // x8
  struct PartyOrganizationListViewItem_array *v13; // x8
  int32_t v14; // w20
  __int64 v15; // x0

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
        v10 = v6->fields.memberList,
        v6->fields.cost = cost - (_DWORD)this,
        !v10) )
  {
LABEL_17:
    sub_1C2D6EC(this, *(_QWORD *)&idx);
  }
  if ( member )
  {
    this = (PartyListViewItem_o *)sub_1C2D5CC(member, v10->obj.klass->_1.element_class);
    if ( !this )
    {
      v15 = sub_1C2D710();
      sub_1C2D5B8(v15, 0);
    }
  }
  if ( LODWORD(v10->max_length) <= idx )
    goto LABEL_18;
  v11 = &v10->obj.klass + idx;
  v11[4] = (Il2CppClass *)member;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 4), (int32_t)member, (int32_t)member, v9);
  if ( v6->fields.menuKind == 9 )
  {
    v12 = v6->fields.memberList;
    if ( !v12 )
      goto LABEL_17;
    if ( LODWORD(v12->max_length) <= idx )
      goto LABEL_18;
    this = (PartyListViewItem_o *)v12->m_Items[idx];
    if ( !this )
      goto LABEL_17;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)this,
      v6->fields.waveBattleEnemyClassIds,
      0);
  }
  v13 = v6->fields.memberList;
  if ( !v13 )
    goto LABEL_17;
  if ( LODWORD(v13->max_length) <= idx )
LABEL_18:
    sub_1C2D6F4(this, *(_QWORD *)&idx, member);
  this = (PartyListViewItem_o *)v13->m_Items[idx];
  if ( !this )
    goto LABEL_17;
  v14 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0) + v14;
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
  const MethodInfo *v23; // x3
  bool isWhole; // [xsp+Ch] [xbp-64h] BYREF

  isWhole = 0;
  if ( !npcFollowerInfoList )
LABEL_19:
    sub_1C2D6EC(this, follower);
  max_length = npcFollowerInfoList->max_length;
  v9 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = this;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1C2D6F4(this, follower, followerClassId);
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
        this = (PartyListViewItem_o *)QuestRestrictionInfo__IsRestriction_43187812(
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
          this = (PartyListViewItem_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_43209828(
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
    sub_1C2D434((CGThumbnailListItem_o *)follower, (int32_t)v15, (int32_t)followerClassId, v23);
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
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  Il2CppClass **v19; // x0
  const MethodInfo *v20; // x1
  __int64 v21; // x0

  if ( (byte_4C22C15 & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C22C15 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance
    || (PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, initPos, follower, 0),
        memberList = this->fields.memberList,
        setupInfo = this->fields.setupInfo,
        questRestrictionInfo = this->fields.questRestrictionInfo,
        v16 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo),
        PartyOrganizationListViewItem___ctor_33993044(
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
          0),
        !memberList) )
  {
    sub_1C2D6EC(Instance, v12);
  }
  if ( v16 )
  {
    Instance = (Il2CppObject *)sub_1C2D5CC(v16, memberList->obj.klass->_1.element_class);
    if ( !Instance )
    {
      v21 = sub_1C2D710();
      sub_1C2D5B8(v21, 0);
    }
  }
  if ( LODWORD(memberList->max_length) <= num )
    sub_1C2D6F4(Instance, v12, v17);
  v19 = &memberList->obj.klass + num;
  v19[4] = (Il2CppClass *)v16;
  sub_1C2D434((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v16, v17, v18);
  PartyListViewItem__CheckRestriction(this, v20);
}


void PartyListViewItem__SetUserEquip(PartyListViewItem_o *this, int64_t userEquipId, const MethodInfo *method)
{
  this->fields.userEquipId = userEquipId;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C2D6F4(this, *(_QWORD *)&num1, *(_QWORD *)&num2);
  this = (PartyListViewItem_o *)memberList->m_Items[num1];
  if ( !this )
LABEL_7:
    sub_1C2D6EC(this, num1);
  PartyOrganizationListViewItem__Swap(
    (PartyOrganizationListViewItem_o *)this,
    memberList->m_Items[num2],
    notChangeInitPos,
    0);
}


void PartyListViewItem__UpdateEventEffect(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct PartyOrganizationListViewItem_array *memberList; // x19
  int max_length; // w8
  unsigned int v5; // w20

  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_9;
  max_length = memberList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
        sub_1C2D6F4(this, method, v2);
      this = (PartyListViewItem_o *)memberList->m_Items[v5];
      if ( !this )
        break;
      PartyOrganizationListViewItem__UpdateEventEffect((PartyOrganizationListViewItem_o *)this, 0);
      max_length = memberList->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_1C2D6EC(this, method);
  }
}


void PartyListViewItem__UpdateServantInfo(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct PartyOrganizationListViewItem_array *memberList; // x21
  int max_length; // w8
  PartyListViewItem_o *v5; // x19
  unsigned int v6; // w22
  Il2CppClass **v7; // x8
  PartyOrganizationListViewItem_o *v8; // x20
  int32_t cost; // w23

  memberList = this->fields.memberList;
  this->fields.cost = 0;
  if ( !memberList )
    goto LABEL_9;
  max_length = memberList->max_length;
  if ( max_length >= 1 )
  {
    v5 = this;
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C2D6F4(this, method, v2);
      v7 = &memberList->obj.klass + (int)v6;
      v8 = (PartyOrganizationListViewItem_o *)v7[4];
      if ( !v8 )
        break;
      PartyOrganizationListViewItem__UpdateServantInfo((PartyOrganizationListViewItem_o *)v7[4], 0);
      cost = v5->fields.cost;
      this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(v8, 0);
      v5->fields.cost = (_DWORD)this + cost;
      max_length = memberList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C22C2B & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_10252/*"PARTY_ORGANIZATION_NAME_BASE"*/);
    byte_4C22C2B = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_10252/*"PARTY_ORGANIZATION_NAME_BASE"*/, 0);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C22C3A & 1) == 0 )
  {
    sub_1C2D490(&PartyListViewItem___c_TypeInfo);
    byte_4C22C3A = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(PartyListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PartyListViewItem___c_TypeInfo->static_fields->__9 = (struct PartyListViewItem___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)PartyListViewItem___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void PartyListViewItem___c___ctor(PartyListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t PartyListViewItem___c___CheckAndUpdateDuplicationGrandQuestServant_b__113_0(
        PartyListViewItem___c_o *this,
        ServantEntity_o *e,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4C22C3E & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C22C3E = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v8, 0);
}


int32_t PartyListViewItem___c___CheckDuplicationGrandQuestEquipment_b__109_0(
        PartyListViewItem___c_o *this,
        System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___o pair,
        const MethodInfo *method)
{
  int32_t Item1; // w19

  Item1 = pair.fields.value.fields.Item1;
  if ( (byte_4C22C3B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___get_Value__);
    byte_4C22C3B = 1;
  }
  return Item1;
}


bool PartyListViewItem___c___CheckDuplicationGrandQuestEquipment_b__109_1(
        PartyListViewItem___c_o *this,
        System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___o pair,
        const MethodInfo *method)
{
  struct System_ValueTuple_int__bool__o value; // x19

  value = pair.fields.value;
  if ( (byte_4C22C3C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___get_Value__);
    byte_4C22C3C = 1;
  }
  return HIDWORD(*(unsigned __int64 *)&value) & 1;
}


int64_t PartyListViewItem___c___CheckDuplicationGrandQuestEquipment_b__109_2(
        PartyListViewItem___c_o *this,
        System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___o pair,
        const MethodInfo *method)
{
  int64_t key; // x19

  key = pair.fields.key;
  if ( (byte_4C22C3D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___get_Key__);
    byte_4C22C3D = 1;
  }
  return key;
}


bool PartyListViewItem___c___IsNeedDeckPosReset_b__33_0(
        PartyListViewItem___c_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.isFixedNpc;
}


void PartyListViewItem___c__DisplayClass110_0___ctor(
        PartyListViewItem___c__DisplayClass110_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *PartyListViewItem___c__DisplayClass110_0___GetGrandQuestDuplicationEquipmentNameList_b__0(
        PartyListViewItem___c__DisplayClass110_0_o *this,
        int64_t id,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *userServantMaster; // x0

  if ( (byte_4C22C3F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    byte_4C22C3F = 1;
  }
  userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userServantMaster;
  if ( !userServantMaster
    || (userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                            userServantMaster,
                                                                            id,
                                                                            (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0 )
  {
    sub_1C2D6EC(userServantMaster, id);
  }
  return UserServantEntity__GetSvtName((UserServantEntity_o *)userServantMaster, 0);
}


void PartyListViewItem___c__DisplayClass112_0___ctor(
        PartyListViewItem___c__DisplayClass112_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *PartyListViewItem___c__DisplayClass112_0___CheckDuplicationGrandServantEquipmentNameList_b__0(
        PartyListViewItem___c__DisplayClass112_0_o *this,
        int64_t id,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *userServantMaster; // x0

  if ( (byte_4C22C40 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    byte_4C22C40 = 1;
  }
  userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userServantMaster;
  if ( !userServantMaster
    || (userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                            userServantMaster,
                                                                            id,
                                                                            (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0 )
  {
    sub_1C2D6EC(userServantMaster, id);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, x);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}


void PartyListViewItem___c__DisplayClass61_0___ctor(
        PartyListViewItem___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyListViewItem___c__DisplayClass61_0___GetGrandServantInfo_b__0(
        PartyListViewItem___c__DisplayClass61_0_o *this,
        int32_t classIndividuality,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *individuality; // x19
  System_Func_int__bool__o *v9; // x20

  if ( (byte_4C22C41 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_int____77996856);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&Method_PartyListViewItem___c__DisplayClass61_1__GetGrandServantInfo_b__1__);
    sub_1C2D490(&PartyListViewItem___c__DisplayClass61_1_TypeInfo);
    byte_4C22C41 = 1;
  }
  v5 = sub_1C2D6DC(PartyListViewItem___c__DisplayClass61_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_DWORD *)(v5 + 16) = classIndividuality;
  individuality = this->fields.individuality;
  v9 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_PartyListViewItem___c__DisplayClass61_1__GetGrandServantInfo_b__1__,
    0);
  return BasicHelper__Any_int__51083888(
           individuality,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_30B7A70 *)Method_BasicHelper_Any_int____77996856);
}


void PartyListViewItem___c__DisplayClass61_1___ctor(
        PartyListViewItem___c__DisplayClass61_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyListViewItem___c__DisplayClass61_1___GetGrandServantInfo_b__1(
        PartyListViewItem___c__DisplayClass61_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.classIndividuality == x;
}