void PartyListViewItem___ctor(PartyListViewItem_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct PartyOrganizationListViewItem_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C52642 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&PartyOrganizationListViewItem___TypeInfo);
    byte_4C52642 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct PartyOrganizationListViewItem_array *)sub_1C3E60C(
                                                       PartyOrganizationListViewItem___TypeInfo,
                                                       (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.memberList = v4;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v4, v5, v6);
}


void PartyListViewItem___ctor_34107552(
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
  int32_t v33; // w20
  struct DeckServant_o *v34; // x8
  struct DeckServantData_array *svts; // x8
  int32_t max_length; // w9
  DeckServantData_o *v37; // x8
  int32_t initPos; // w26
  int v39; // w9
  struct PartyOrganizationListViewItem_array *v40; // x19
  PartyOrganizationListViewItem_o *v41; // x0
  PartyOrganizationListViewItem_o *v42; // x25
  int32_t v43; // w2
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

  if ( (byte_4C52643 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C3E564(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C52643 = 1;
  }
  ListViewItem___ctor_43860152((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v19, v20);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v21, v22);
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
  v30 = (struct PartyOrganizationListViewItem_array *)sub_1C3E60C(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v29->static_fields->DeckMemberMax);
  this->fields.memberList = v30;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v30, v31, v32);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  if ( *(_QWORD *)&Instance->fields.sortIndex )
  {
    Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      follower = *(FollowerInfo_o **)&Instance->fields.sortIndex;
      Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        followerClassId = Instance->fields.sortValue0;
        Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          followerGrandGraphId = HIDWORD(Instance->fields.sortValue0);
          Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( Instance )
          {
            followerDeckId = Instance->fields.sortValue0B;
            goto LABEL_18;
          }
        }
      }
    }
LABEL_57:
    sub_1C3E7C0(Instance, v24);
  }
LABEL_18:
  v33 = 0;
  v59 = UserServantList;
  while ( 1 )
  {
    Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( v33 >= SHIDWORD(Instance->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
      break;
    v34 = deck->fields.deckInfo;
    if ( !v34 )
      goto LABEL_57;
    svts = v34->fields.svts;
    if ( !svts )
      goto LABEL_57;
    max_length = svts->max_length;
    if ( v33 >= max_length )
    {
      v39 = v33 + 1;
      initPos = v33 + 1;
    }
    else
    {
      if ( v33 >= (unsigned int)max_length )
        goto LABEL_58;
      v37 = svts->m_Items[v33];
      if ( !v37 )
        goto LABEL_57;
      initPos = v37->fields.initPos;
      v39 = v33 + 1;
    }
    v62 = v39;
    if ( v39 == DeckMainMemberMax )
    {
      v40 = *p_memberList;
      v41 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
      v42 = v41;
      if ( follower )
      {
        PartyOrganizationListViewItem___ctor_34235788(
          v41,
          v33,
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
        if ( !v40 )
          goto LABEL_57;
      }
      else
      {
        PartyOrganizationListViewItem___ctor_34273464(v41, v33, 1, setupInfo, questRestrictionInfo, 1, initPos, 0);
        if ( !v40 )
          goto LABEL_57;
      }
      if ( v42 )
      {
        Instance = (PartyOrganizationListViewItem_o *)sub_1C3E6A0(v42, v40->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_59;
      }
      if ( (unsigned int)v33 >= LODWORD(v40->max_length) )
        goto LABEL_58;
      v52 = &v40->obj.klass + v33;
    }
    else
    {
      if ( !UserServantList )
        goto LABEL_57;
      if ( (unsigned int)v33 >= LODWORD(UserServantList->max_length) )
        goto LABEL_58;
      v45 = UserServantList->m_Items[v33];
      v46 = *p_memberList;
      if ( v45 )
      {
        v47 = this;
        v48 = follower;
        v49 = deck;
        EquipList = UserDeckEntity__GetEquipList(deck, v33, 0);
        v42 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34262368(
          v42,
          v33,
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
        if ( v42 )
        {
          Instance = (PartyOrganizationListViewItem_o *)sub_1C3E6A0(v42, v46->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_59;
        }
        if ( (unsigned int)v33 >= LODWORD(v46->max_length) )
          goto LABEL_58;
        v51 = v33;
        deck = v49;
        follower = v48;
        this = v47;
      }
      else
      {
        v42 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34273464(v42, v33, 0, setupInfo, questRestrictionInfo, 1, initPos, 0);
        if ( !v46 )
          goto LABEL_57;
        UserServantList = v59;
        if ( v42 )
        {
          Instance = (PartyOrganizationListViewItem_o *)sub_1C3E6A0(v42, v46->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_59:
            v55 = sub_1C3E7E4();
            sub_1C3E68C(v55, 0);
          }
        }
        if ( (unsigned int)v33 >= LODWORD(v46->max_length) )
          goto LABEL_58;
        v51 = v33;
      }
      v52 = &v46->obj.klass + v51;
    }
    v52[4] = (Il2CppClass *)v42;
    sub_1C3E508((CGThumbnailListItem_o *)(v52 + 4), (int32_t)v42, v43, v44);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_57;
    if ( (unsigned int)v33 >= LODWORD(memberList->max_length) )
LABEL_58:
      sub_1C3E7C8(Instance, v24);
    Instance = memberList->m_Items[v33];
    if ( !Instance )
      goto LABEL_57;
    cost = this->fields.cost;
    v33 = v62;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(Instance, 0) + cost;
  }
  PartyListViewItem__CheckRestriction(this, v24);
}


void PartyListViewItem___ctor_34108920(
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
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  unsigned int max_length; // w8
  FollowerInfo_o *v70; // x23
  int32_t v71; // w27
  RestrictionEntity_o *GrandServantRestrictionEntity; // x27
  const MethodInfo *v73; // x5
  UserServantEntity_array *v74; // x26
  PartyOrganizationListViewItem_o *v75; // x0
  Il2CppClass **v76; // x8
  System_Int64_array *v77; // x23
  Il2CppClass **v78; // x25
  Il2CppClass *v79; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v80; // x25
  Il2CppClass *v81; // t1
  Il2CppClass *parent; // x23
  Il2CppClass *declaringType; // x27
  int32_t v84; // w23
  int32_t v85; // w27
  int32_t DispLimitCount; // w0
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  UserServantEntity_o *v89; // x23
  struct PartyOrganizationListViewItem_array *v90; // x26
  System_Int64_array *v91; // x27
  int32_t v92; // w20
  unsigned int v93; // w8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v96; // x1
  __int64 v97; // x0
  bool *v98; // [xsp+30h] [xbp-E0h]
  int32_t followerGrandGraphIda; // [xsp+3Ch] [xbp-D4h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+50h] [xbp-C0h]
  UserServantEntity_array *UserServantList; // [xsp+58h] [xbp-B8h]
  int v104; // [xsp+60h] [xbp-B0h]
  int v105; // [xsp+64h] [xbp-ACh]
  PartyListViewItem_o *v106; // [xsp+68h] [xbp-A8h]
  int32_t v108; // [xsp+80h] [xbp-90h]
  _BOOL4 v109; // [xsp+84h] [xbp-8Ch]
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+94h] [xbp-7Ch] BYREF
  System_Int64_array *equipIdList; // [xsp+98h] [xbp-78h] BYREF
  int32_t followerClassIda; // [xsp+A4h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16

  if ( (byte_4C52644 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&long___TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C3E564(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C52644 = 1;
  }
  followera = 0;
  followerClassIda = 0;
  equipIdList = 0;
  isChangeFriendShipSvtEquipSkill = 0;
  ListViewItem___ctor_43860152((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v19, v20);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v22, v23);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v24);
  this->fields.deckName = DefaultDeckName;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.deckName, (int32_t)DefaultDeckName, v26, v27);
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
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_125;
  if ( *(int *)(Instance + 56) < 1 )
  {
    v36 = 0;
    v37 = 0;
    v109 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_125;
    v36 = *(PartyListViewItem_o **)(Instance + 80);
    v37 = 0;
    v109 = v36 == 0;
    if ( follower && v36 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_125;
      v37 = *(_DWORD *)(Instance + 56);
      Instance = (__int64)PartyListViewItem__GetMember(v36, v37 - 1, v38);
      if ( !Instance )
        goto LABEL_125;
      v39 = *(_DWORD *)(Instance + 372);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_125;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v39, follower, 0);
      v109 = 0;
    }
  }
  v40 = BalanceConfig_TypeInfo;
  v98 = isBaseModify;
  v106 = v36;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v40 = BalanceConfig_TypeInfo;
  }
  v41 = (struct PartyOrganizationListViewItem_array *)sub_1C3E60C(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v40->static_fields->DeckMemberMax);
  this->fields.memberList = v41;
  p_memberList = &this->fields.memberList;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v41, v43, v44);
  this->fields.cost = 0;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v45 = deck;
  if ( !Instance )
    goto LABEL_125;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_125;
    follower = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_125;
    followerClassId = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_125;
    followerGrandGraphIda = *(_DWORD *)(Instance + 36);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_125;
    v108 = *(_DWORD *)(Instance + 40);
  }
  else
  {
    v108 = followerDeckId;
    followerGrandGraphIda = followerGrandGraphId;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || !Instance )
LABEL_125:
    sub_1C3E7C0(Instance, SvtEquipMax);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)Instance,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0);
  v47 = 0;
  v104 = v37 - 1;
  v105 = FollowerIndex - 1;
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
    if ( v109 )
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
      Instance = (__int64)PartyListViewItem__GetMember(v106, v47, v46);
      if ( !Instance )
        goto LABEL_125;
      p_initPos = (int32_t *)(Instance + 372);
    }
    initPos = *p_initPos;
    followera = 0;
    followerClassIda = 0;
    if ( !questRestrictionInfo )
      goto LABEL_125;
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43497264(questRestrictionInfo, initPos, 0);
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
      if ( v104 != v47 )
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
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
        v65 = v108;
      v66 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34235788(
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
        Instance = sub_1C3E6A0(v66, v64->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_130;
      }
      max_length = v64->max_length;
      goto LABEL_84;
    }
    if ( v105 == v47 || v58 )
    {
      v70 = followera;
      v64 = *p_memberList;
      if ( followera )
      {
        v71 = followerClassIda;
        v66 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34235788(
          v66,
          v47,
          v70,
          v71,
          0,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v108,
          initPos,
          0);
LABEL_80:
        if ( !v64 )
          goto LABEL_125;
      }
      else
      {
        v75 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
        v66 = v75;
        if ( follower )
        {
          PartyOrganizationListViewItem___ctor_34235788(
            v75,
            v47,
            follower,
            followerClassId,
            followerGrandGraphIda,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v108,
            initPos,
            0);
          goto LABEL_80;
        }
        PartyOrganizationListViewItem___ctor_34273464(v75, v47, 1, setupInfo, questRestrictionInfo, 1, initPos, 0);
        if ( !v64 )
          goto LABEL_125;
      }
      if ( v66 )
      {
        Instance = sub_1C3E6A0(v66, v64->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_130;
      }
      max_length = v64->max_length;
LABEL_84:
      if ( v47 >= max_length )
        goto LABEL_129;
      v76 = &v64->obj.klass + (int)v47;
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
      v74 = UserServantList;
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
        v73);
    }
    else
    {
      v74 = UserServantList;
      v77 = (System_Int64_array *)Instance;
      if ( (v54 & 1) != 0 )
      {
        if ( !UserServantList )
          goto LABEL_125;
        if ( v47 >= LODWORD(UserServantList->max_length) )
          goto LABEL_129;
        v78 = &UserServantList->obj.klass + (int)v47;
        v81 = v78[4];
        v80 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v78 + 4);
        v79 = v81;
        if ( v81 )
        {
          declaringType = v79->_1.declaringType;
          parent = v79->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v114.fields.currentCryptoKey = declaringType;
          *(_QWORD *)&v114.fields.fakeValue = parent;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v114, 0);
          if ( v47 >= LODWORD(UserServantList->max_length) )
            goto LABEL_129;
          if ( !*v80 )
            goto LABEL_125;
          v84 = Instance;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136((*v80)[6], 0);
          if ( v47 >= LODWORD(UserServantList->max_length) )
            goto LABEL_129;
          v85 = Instance;
          Instance = (__int64)*v80;
          if ( !*v80 )
            goto LABEL_125;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
          Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                       questRestrictionInfo,
                       v84,
                       v85,
                       DispLimitCount,
                       initPos,
                       0,
                       0);
          if ( (Instance & 1) != 0 )
          {
            if ( v47 >= LODWORD(UserServantList->max_length) )
              goto LABEL_129;
            *v80 = 0;
            sub_1C3E508((CGThumbnailListItem_o *)v80, 0, v87, v88);
          }
        }
        v77 = equipIdList;
      }
      if ( !v77 )
        goto LABEL_125;
      Instance = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (__int64)BalanceConfig_TypeInfo;
      }
      SvtEquipMax = *(unsigned int *)(*(_QWORD *)(Instance + 184) + 48LL);
      if ( (int)SvtEquipMax < SLODWORD(v77->max_length) )
      {
        if ( !*(_DWORD *)(Instance + 224) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          SvtEquipMax = (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax;
        }
        Instance = sub_1C3E60C(long___TypeInfo, SvtEquipMax);
        equipIdList = (System_Int64_array *)Instance;
      }
      if ( !UserServantList )
        goto LABEL_125;
    }
    if ( v47 >= LODWORD(v74->max_length) )
      goto LABEL_129;
    v89 = v74->m_Items[v47];
    v90 = *p_memberList;
    if ( v89 )
    {
      v91 = equipIdList;
      v92 = isChangeFriendShipSvtEquipSkill;
      v66 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34262368(
        v66,
        v47,
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
        goto LABEL_125;
      if ( v66 )
      {
        Instance = sub_1C3E6A0(v66, v90->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_130;
      }
      v93 = v90->max_length;
      v45 = deck;
    }
    else
    {
      v66 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34273464(v66, v47, 0, setupInfo, questRestrictionInfo, 1, initPos, 0);
      if ( !v90 )
        goto LABEL_125;
      if ( v66 )
      {
        Instance = sub_1C3E6A0(v66, v90->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_130:
          v97 = sub_1C3E7E4();
          sub_1C3E68C(v97, 0);
        }
      }
      v93 = v90->max_length;
    }
    if ( v47 >= v93 )
      goto LABEL_129;
    v76 = &v90->obj.klass + (int)v47;
LABEL_120:
    v76[4] = (Il2CppClass *)v66;
    sub_1C3E508((CGThumbnailListItem_o *)(v76 + 4), (int32_t)v66, v67, v68);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_125;
    if ( v47 >= LODWORD(memberList->max_length) )
LABEL_129:
      sub_1C3E7C8(Instance, SvtEquipMax);
    Instance = (__int64)memberList->m_Items[v47];
    if ( !Instance )
      goto LABEL_125;
    cost = this->fields.cost;
    ++v47;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)SvtEquipMax);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v96) )
    *v98 = 1;
}


void PartyListViewItem___ctor_34116776(
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
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  __int64 v58; // x23
  const MethodInfo *v59; // x6
  int v60; // w29
  struct DeckServant_o *v61; // x8
  struct DeckServantData_array *v62; // x8
  DeckServantData_o *v63; // x8
  _BOOL4 v64; // w27
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v67; // x23
  int32_t v68; // w27
  bool IsNpc; // w0
  unsigned int *v70; // x26
  int32_t v71; // w19
  PartyOrganizationListViewItem_o *v72; // x0
  EventUpValSetupInfo_o *v73; // x5
  QuestRestrictionInfo_o *v74; // x6
  PartyOrganizationListViewItem_o *v75; // x29
  int32_t v76; // w1
  FollowerInfo_o *v77; // x2
  int32_t v78; // w3
  int32_t v79; // w4
  EventCampaignEntity_array *v80; // x7
  FollowerInfo_o *v81; // x23
  int32_t v82; // w27
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  int32_t v87; // w8
  unsigned int *v88; // x23
  PartyOrganizationListViewItem_o *v89; // x27
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  RestrictionEntity_o *GrandServantRestrictionEntity; // x27
  const MethodInfo *v93; // x5
  unsigned int *v94; // x19
  System_Int64_array *v95; // x23
  __int64 v96; // x8
  __int64 v97; // x23
  __int64 v98; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v99; // x8
  int32_t v100; // w23
  int32_t v101; // w27
  int32_t DispLimitCount; // w0
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  UserServantEntity_o *v105; // x23
  System_Int64_array *v106; // x27
  int32_t v107; // w19
  EventUpValSetupInfo_o *v108; // x3
  QuestRestrictionInfo_o *v109; // x4
  int32_t v110; // w1
  bool v111; // w2
  const MethodInfo *v112; // x1
  __int64 v113; // x0
  int32_t followerDeckIda; // [xsp+8h] [xbp-138h]
  int32_t initPos; // [xsp+10h] [xbp-130h]
  UserServantMaster_o *Master_object; // [xsp+28h] [xbp-118h]
  int32_t v118; // [xsp+3Ch] [xbp-104h]
  int32_t *m_Items; // [xsp+40h] [xbp-100h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+50h] [xbp-F0h]
  unsigned int *UserServantList; // [xsp+60h] [xbp-E0h]
  struct System_Int32_array *svtIdForceBattleList; // [xsp+70h] [xbp-D0h]
  unsigned int *v125; // [xsp+80h] [xbp-C0h]
  __int64 v126; // [xsp+88h] [xbp-B8h]
  int32_t v127; // [xsp+94h] [xbp-ACh]
  UserEventDeckEntity_o *v128; // [xsp+98h] [xbp-A8h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+A0h] [xbp-A0h]
  __int64 v130; // [xsp+A8h] [xbp-98h]
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+C4h] [xbp-7Ch] BYREF
  System_Int64_array *equipIdList; // [xsp+C8h] [xbp-78h] BYREF
  int32_t followerClassIda; // [xsp+D4h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+D8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16

  if ( (byte_4C52645 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&long___TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C3E564(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C52645 = 1;
  }
  followera = 0;
  followerClassIda = 0;
  equipIdList = 0;
  isChangeFriendShipSvtEquipSkill = 0;
  ListViewItem___ctor_43860152((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v20, v21);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v23, v24);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v25);
  this->fields.deckName = DefaultDeckName;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.deckName, (int32_t)DefaultDeckName, v27, v28);
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
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServantList = (unsigned int *)UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  if ( *(int *)(Instance + 56) < 1 )
  {
    v33 = 0;
    if ( !questRestrictionInfo )
      goto LABEL_15;
    goto LABEL_14;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    v34 = *(_DWORD *)(Instance + 56);
    Instance = (__int64)PartyListViewItem__GetMember(v33, v34 - 1, v35);
    if ( !Instance )
      goto LABEL_148;
    v36 = *(_DWORD *)(Instance + 372);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v36, follower, 0);
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    follower = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    followerClassId = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    v118 = *(_DWORD *)(Instance + 36);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    v127 = *(_DWORD *)(Instance + 40);
  }
  else
  {
    v127 = followerDeckId;
    v118 = followerGrandGraphId;
  }
  v37 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v37 = BalanceConfig_TypeInfo;
  }
  v38 = (struct PartyOrganizationListViewItem_array *)sub_1C3E60C(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v37->static_fields->DeckMemberMax);
  this->fields.memberList = v38;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v38, v39, v40);
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
    v126 = Instance;
    svtIdForceBattleList = (*p_questRestrictionInfo)->fields.svtIdForceBattleList;
  }
  else
  {
    v42 = questRestrictionInfo;
    svtIdForceBattleList = 0;
    v126 = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v43 = *p_questRestrictionInfo;
  if ( !*p_questRestrictionInfo || !Instance )
LABEL_148:
    sub_1C3E7C0(Instance, SvtEquipMax);
  m_Items = svtIdForceBattleList->m_Items;
  v44 = 0;
  v45 = 0;
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)Instance,
                          v43->fields.questId,
                          v43->fields.questPhase,
                          0);
  v125 = UserServantList + 8;
  v130 = v34 - 1LL;
  v128 = deck;
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
      if ( !v126 )
        goto LABEL_148;
      if ( (__int64)v45 >= *(int *)(v126 + 24) )
      {
        v88 = (unsigned int *)*p_memberList;
        v89 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34273464(v89, v45, 0, setupInfo, v42, 1, v51, 0);
        if ( !v88 )
          goto LABEL_148;
        if ( v89 )
        {
          Instance = sub_1C3E6A0(v89, *(_QWORD *)(*(_QWORD *)v88 + 64LL));
          if ( !Instance )
          {
LABEL_153:
            v113 = sub_1C3E7E4();
            sub_1C3E68C(v113, 0);
          }
        }
        if ( v45 >= v88[6] )
          goto LABEL_152;
        *(_QWORD *)&v88[2 * v45 + 8] = v89;
        sub_1C3E508((CGThumbnailListItem_o *)&v88[v44 + 8], (int32_t)v89, v90, v91);
        goto LABEL_112;
      }
      if ( svtIdForceBattleList )
      {
        if ( v130 != v45 && isFirstEnforceChange )
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
              v53 = *(_QWORD *)&v125[2 * v45];
              if ( !v53 )
                goto LABEL_69;
              v55 = *(_QWORD *)(v53 + 80);
              v54 = *(_QWORD *)(v53 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v135.fields.currentCryptoKey = v55;
              *(_QWORD *)&v135.fields.fakeValue = v54;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v135, 0);
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
                v58 = Instance;
                if ( Instance )
                {
                  Instance = sub_1C3E6A0(Instance, *(_QWORD *)(*(_QWORD *)UserServantList + 64LL));
                  if ( !Instance )
                    goto LABEL_153;
                }
                if ( v45 >= UserServantList[6] )
                  goto LABEL_152;
                *(_QWORD *)&v125[2 * v45] = v58;
                sub_1C3E508((CGThumbnailListItem_o *)&v125[v44], v58, v56, v57);
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
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43497264(v42, v51, 0);
    v60 = Instance;
    if ( (Instance & 1) != 0 )
    {
      v61 = deck->fields.deckInfo;
      if ( !v61 )
        goto LABEL_148;
      v62 = v61->fields.svts;
      if ( !v62 )
        goto LABEL_148;
      if ( v45 >= LODWORD(v62->max_length) )
        goto LABEL_152;
      v63 = v62->m_Items[v45];
      if ( !v63 )
        goto LABEL_148;
      v64 = 0;
      if ( v130 != v45 )
      {
        npcFollowerSvtId = v63->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v64 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  v51,
                  v59);
      }
    }
    else
    {
      v64 = 0;
    }
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v51, 0);
    if ( NpcFollowerInfo && ((v60 ^ 1) & 1) == 0 )
    {
      v67 = NpcFollowerInfo;
      if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0) )
        v68 = 0;
      else
        v68 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v67, 0);
      v70 = (unsigned int *)*p_memberList;
      if ( IsNpc )
        v71 = 0;
      else
        v71 = v127;
      v72 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
      v73 = setupInfo;
      v74 = questRestrictionInfo;
      v75 = v72;
      v76 = v45;
      v77 = v67;
      v78 = v68;
      v79 = 0;
      initPos = v51;
      followerDeckIda = v71;
      goto LABEL_95;
    }
    if ( v130 == v45 || v64 )
    {
      v81 = followera;
      v70 = (unsigned int *)*p_memberList;
      if ( followera )
      {
        v82 = followerClassIda;
        v72 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
        v73 = setupInfo;
        v75 = v72;
        initPos = v51;
        followerDeckIda = v127;
        v76 = v45;
        v77 = v81;
        v78 = v82;
        v79 = 0;
        v74 = v42;
        v80 = 0;
      }
      else
      {
        v72 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
        v77 = follower;
        v75 = v72;
        if ( !follower )
        {
          v108 = setupInfo;
          v111 = 1;
          v110 = v45;
          v109 = v42;
LABEL_147:
          PartyOrganizationListViewItem___ctor_34273464(v72, v110, v111, v108, v109, 1, v51, 0);
          if ( !v70 )
            goto LABEL_148;
          goto LABEL_100;
        }
        v78 = followerClassId;
        v79 = v118;
        v73 = setupInfo;
        initPos = v51;
        followerDeckIda = v127;
        v76 = v45;
        v74 = v42;
LABEL_95:
        v80 = friendPointCampaignEntityList;
      }
      PartyOrganizationListViewItem___ctor_34235788(
        v72,
        v76,
        v77,
        v78,
        v79,
        v73,
        v74,
        v80,
        0,
        followerDeckIda,
        initPos,
        0);
      if ( !v70 )
        goto LABEL_148;
      goto LABEL_100;
    }
    GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(v42, v51, 0);
    Instance = (__int64)UserEventDeckEntity__GetEquipList(deck, v45, 0);
    equipIdList = (System_Int64_array *)Instance;
    isChangeFriendShipSvtEquipSkill = 0;
    if ( GrandServantRestrictionEntity )
    {
      v94 = UserServantList;
      if ( !UserServantList )
        goto LABEL_148;
      if ( v45 >= UserServantList[6] )
        goto LABEL_152;
      PartyListViewItem__GetGrandServantInfo(
        this,
        GrandServantRestrictionEntity,
        (UserServantEntity_o **)&v125[v44],
        &equipIdList,
        &isChangeFriendShipSvtEquipSkill,
        v93);
    }
    else
    {
      v94 = UserServantList;
      v95 = (System_Int64_array *)Instance;
      if ( (v60 & 1) != 0 )
      {
        if ( !UserServantList )
          goto LABEL_148;
        if ( v45 >= UserServantList[6] )
          goto LABEL_152;
        v96 = *(_QWORD *)&v125[2 * v45];
        if ( v96 )
        {
          v98 = *(_QWORD *)(v96 + 80);
          v97 = *(_QWORD *)(v96 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v136.fields.currentCryptoKey = v98;
          *(_QWORD *)&v136.fields.fakeValue = v97;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v136, 0);
          if ( v45 >= UserServantList[6] )
            goto LABEL_152;
          v99 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v125[2 * v45];
          if ( !v99 )
            goto LABEL_148;
          v100 = Instance;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v99[6], 0);
          if ( v45 >= UserServantList[6] )
LABEL_152:
            sub_1C3E7C8(Instance, SvtEquipMax);
          v101 = Instance;
          Instance = *(_QWORD *)&v125[2 * v45];
          if ( !Instance )
            goto LABEL_148;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
          Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                       questRestrictionInfo,
                       v100,
                       v101,
                       DispLimitCount,
                       v51,
                       0,
                       0);
          if ( (Instance & 1) != 0 )
          {
            if ( v45 >= UserServantList[6] )
              goto LABEL_152;
            *(_QWORD *)&v125[2 * v45] = 0;
            sub_1C3E508((CGThumbnailListItem_o *)&v125[v44], 0, v103, v104);
          }
        }
        v95 = equipIdList;
      }
      if ( !v95 )
        goto LABEL_148;
      Instance = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (__int64)BalanceConfig_TypeInfo;
      }
      SvtEquipMax = *(unsigned int *)(*(_QWORD *)(Instance + 184) + 48LL);
      if ( (int)SvtEquipMax < SLODWORD(v95->max_length) )
      {
        if ( !*(_DWORD *)(Instance + 224) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          SvtEquipMax = (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax;
        }
        Instance = sub_1C3E60C(long___TypeInfo, SvtEquipMax);
        equipIdList = (System_Int64_array *)Instance;
      }
      if ( !UserServantList )
        goto LABEL_148;
    }
    if ( v45 >= v94[6] )
      goto LABEL_152;
    v105 = *(UserServantEntity_o **)&v125[2 * v45];
    v70 = (unsigned int *)*p_memberList;
    if ( !v105 )
    {
      v72 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
      v108 = setupInfo;
      v109 = questRestrictionInfo;
      v75 = v72;
      v110 = v45;
      v111 = 0;
      goto LABEL_147;
    }
    v106 = equipIdList;
    v107 = isChangeFriendShipSvtEquipSkill;
    v75 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_34262368(
      v75,
      v45,
      v105,
      v106,
      setupInfo,
      questRestrictionInfo,
      0,
      v51,
      0,
      0,
      v107,
      0);
    if ( !v70 )
      goto LABEL_148;
LABEL_100:
    if ( v75 )
    {
      Instance = sub_1C3E6A0(v75, *(_QWORD *)(*(_QWORD *)v70 + 64LL));
      if ( !Instance )
        goto LABEL_153;
    }
    if ( v45 >= v70[6] )
      goto LABEL_152;
    *(_QWORD *)&v70[2 * v45 + 8] = v75;
    sub_1C3E508((CGThumbnailListItem_o *)&v70[v44 + 8], (int32_t)v75, v83, v84);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_148;
    deck = v128;
    if ( v45 >= LODWORD(memberList->max_length) )
      goto LABEL_152;
    Instance = (__int64)memberList->m_Items[v45];
    if ( !Instance )
      goto LABEL_148;
    cost = this->fields.cost;
    v87 = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0) + cost;
    v42 = questRestrictionInfo;
    this->fields.cost = v87;
LABEL_112:
    ++v45;
    v44 += 2;
  }
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)SvtEquipMax);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v112) )
    *isBaseModify = 1;
}


void PartyListViewItem___ctor_34119668(
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
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w23
  const MethodInfo *v43; // x1
  int32_t i; // w23
  BalanceConfig_c *v45; // x0
  struct PartyOrganizationListViewItem_array *v46; // x26
  PartyOrganizationListViewItem_o *v47; // x24
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  Il2CppClass **v50; // x0
  struct PartyOrganizationListViewItem_array *v51; // x8
  int32_t v52; // w24
  __int64 v53; // x0

  if ( (byte_4C52646 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C3E564(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C52646 = 1;
  }
  ListViewItem___ctor_43860152((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v19, v20);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v21, v22);
  this->fields.isDeckNameDefault = 0;
  v23 = StringLiteral_1/*""*/;
  this->fields.deckName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.deckName, v23, v24, v25);
  this->fields.userEquipId = userEquipId;
  this->fields.id = 0;
  v26 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v26 = BalanceConfig_TypeInfo;
  }
  v27 = (struct PartyOrganizationListViewItem_array *)sub_1C3E60C(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v26->static_fields->DeckMemberMax);
  this->fields.memberList = v27;
  p_memberList = &this->fields.memberList;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v27, v29, v30);
  this->fields.cost = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  klass = followerClassId;
  if ( Instance[1].monitor )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    follower = (FollowerInfo_o *)Instance[1].monitor;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    klass = (int32_t)Instance[2].klass;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    klass_high = HIDWORD(Instance[2].klass);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
  v37 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
  v38 = v37;
  if ( follower )
  {
    PartyOrganizationListViewItem___ctor_34235788(
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
    PartyOrganizationListViewItem___ctor_34273464(v37, 0, 1, setupInfo, questRestrictionInfo, 1, 0, 0);
    if ( !v36 )
      goto LABEL_36;
  }
  if ( v38 )
  {
    Instance = (Il2CppObject *)sub_1C3E6A0(v38, v36->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_38:
      v53 = sub_1C3E7E4();
      sub_1C3E68C(v53, 0);
    }
  }
  if ( !LODWORD(v36->max_length) )
    goto LABEL_37;
  v36->m_Items[0] = v38;
  sub_1C3E508((CGThumbnailListItem_o *)v36->m_Items, (int32_t)v38, v39, v40);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_36;
  if ( !LODWORD(memberList->max_length) )
LABEL_37:
    sub_1C3E7C8(Instance, v32);
  Instance = (Il2CppObject *)memberList->m_Items[0];
  if ( !Instance )
LABEL_36:
    sub_1C3E7C0(Instance, v32);
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
    v47 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_34273464(v47, i, 0, setupInfo, questRestrictionInfo, 1, 0, 0);
    if ( !v46 )
      goto LABEL_36;
    if ( v47 )
    {
      Instance = (Il2CppObject *)sub_1C3E6A0(v47, v46->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_38;
    }
    if ( (unsigned int)i >= LODWORD(v46->max_length) )
      goto LABEL_37;
    v50 = &v46->obj.klass + i;
    v50[4] = (Il2CppClass *)v47;
    sub_1C3E508((CGThumbnailListItem_o *)(v50 + 4), (int32_t)v47, v48, v49);
    v51 = this->fields.memberList;
    if ( !v51 )
      goto LABEL_36;
    if ( (unsigned int)i >= LODWORD(v51->max_length) )
      goto LABEL_37;
    Instance = (Il2CppObject *)v51->m_Items[i];
    if ( !Instance )
      goto LABEL_36;
    v52 = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                      + v52;
  }
  PartyListViewItem__CheckRestriction(this, v43);
}


void PartyListViewItem___ctor_34120584(
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
  int32_t v37; // w2
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
  const MethodInfo *v50; // x2
  unsigned int v51; // w19
  struct DeckServant_o *v52; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v54; // x8
  int32_t *p_initPos; // x8
  int32_t initPos; // w24
  const MethodInfo *v57; // x6
  int v58; // w25
  _BOOL4 v59; // w26
  struct DeckServant_o *v60; // x8
  struct DeckServantData_array *v61; // x8
  DeckServantData_o *v62; // x8
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v65; // x23
  int32_t v66; // w26
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v68; // x21
  int32_t v69; // w27
  PartyOrganizationListViewItem_o *v70; // x25
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  Il2CppClass **v73; // x8
  FollowerInfo_o *v74; // x23
  struct PartyOrganizationListViewItem_array *v75; // x27
  int32_t v76; // w26
  RestrictionEntity_o *GrandServantRestrictionEntity; // x26
  const MethodInfo *v78; // x5
  PartyOrganizationListViewItem_o *v79; // x0
  System_Int64_array *v80; // x23
  __int64 v81; // x25
  __int64 v82; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v83; // x25
  __int64 v84; // t1
  __int64 v85; // x23
  __int64 v86; // x26
  int32_t v87; // w23
  int32_t v88; // w26
  int32_t DispLimitCount; // w0
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  UserServantEntity_o *v92; // x23
  struct PartyOrganizationListViewItem_array *v93; // x21
  System_Int64_array *v94; // x26
  int32_t v95; // w29
  unsigned int max_length; // w8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w21
  const MethodInfo *v99; // x1
  __int64 v100; // x0
  int32_t followerGrandGraphIda; // [xsp+2Ch] [xbp-E4h]
  FollowerInfo_o *followerInfo; // [xsp+30h] [xbp-E0h]
  UserEventDeckEntity_o *v103; // [xsp+38h] [xbp-D8h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+40h] [xbp-D0h]
  int v106; // [xsp+50h] [xbp-C0h]
  int v107; // [xsp+54h] [xbp-BCh]
  PartyListViewItem_o *v108; // [xsp+58h] [xbp-B8h]
  int32_t v109; // [xsp+64h] [xbp-ACh]
  int32_t v110; // [xsp+74h] [xbp-9Ch]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+78h] [xbp-98h]
  _BOOL4 v112; // [xsp+84h] [xbp-8Ch]
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+94h] [xbp-7Ch] BYREF
  System_Int64_array *equipIdList; // [xsp+98h] [xbp-78h] BYREF
  int32_t followerClassIda; // [xsp+A4h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16

  if ( (byte_4C52647 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&long___TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C3E564(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C52647 = 1;
  }
  followera = 0;
  followerClassIda = 0;
  equipIdList = 0;
  isChangeFriendShipSvtEquipSkill = 0;
  ListViewItem___ctor_43860152((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v20, v21);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v23, v24);
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
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_136;
  if ( *(int *)(IsNeedDeckPosReset + 56) < 1 )
  {
    v31 = 0;
    v32 = 0;
    v112 = 1;
  }
  else
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    v31 = *(PartyListViewItem_o **)(IsNeedDeckPosReset + 80);
    v32 = 0;
    v112 = v31 == 0;
    if ( followerInfo && v31 )
    {
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_136;
      v32 = *(_DWORD *)(IsNeedDeckPosReset + 56);
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v31, v32 - 1, v33);
      if ( !IsNeedDeckPosReset )
        goto LABEL_136;
      v34 = *(_DWORD *)(IsNeedDeckPosReset + 372);
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_136;
      PartyOrganizationUtility__SetNpcFollowerInfo(
        (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
        v34,
        followerInfo,
        0);
      v112 = 0;
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
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_136;
  v108 = v31;
  if ( *(_QWORD *)(IsNeedDeckPosReset + 24) )
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    followerInfo = *(FollowerInfo_o **)(IsNeedDeckPosReset + 24);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    v109 = *(_DWORD *)(IsNeedDeckPosReset + 32);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    followerGrandGraphIda = *(_DWORD *)(IsNeedDeckPosReset + 36);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    v110 = *(_DWORD *)(IsNeedDeckPosReset + 40);
  }
  else
  {
    v110 = followerDeckId;
    followerGrandGraphIda = followerGrandGraphId;
    v109 = followerClassId;
  }
  v103 = deck;
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
        sub_1C3E7C8(IsNeedDeckPosReset, SvtEquipMax);
      v44 = v42 + 1;
      if ( servantNumMax < (int)v42 + 1 && *(_QWORD *)(v43 + 8 * v42) )
      {
        *isBaseModify = 1;
        if ( v42 >= *(unsigned int *)(v40 + 24) )
          goto LABEL_140;
        *(_QWORD *)(v43 + 8 * v42) = 0;
        sub_1C3E508((CGThumbnailListItem_o *)(v43 + v41), 0, v37, v38);
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
  v47 = (struct PartyOrganizationListViewItem_array *)sub_1C3E60C(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v45->static_fields->DeckMemberMax);
  this->fields.memberList = v47;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v47, v48, v49);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNeedDeckPosReset = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || !IsNeedDeckPosReset )
LABEL_136:
    sub_1C3E7C0(IsNeedDeckPosReset, SvtEquipMax);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)IsNeedDeckPosReset,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0);
  v51 = 0;
  v106 = v32 - 1;
  v107 = FollowerIndex - 1;
  while ( 1 )
  {
    IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v51 >= *(_DWORD *)(*(_QWORD *)(IsNeedDeckPosReset + 184) + 172LL) )
      break;
    if ( v112 )
    {
      v52 = v46->fields.deckInfo;
      if ( !v52 )
        goto LABEL_136;
      svts = v52->fields.svts;
      if ( !svts )
        goto LABEL_136;
      if ( v51 >= LODWORD(svts->max_length) )
        goto LABEL_140;
      v54 = svts->m_Items[v51];
      if ( !v54 )
        goto LABEL_136;
      p_initPos = &v54->fields.initPos;
    }
    else
    {
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v108, v51, v50);
      if ( !IsNeedDeckPosReset )
        goto LABEL_136;
      p_initPos = (int32_t *)(IsNeedDeckPosReset + 372);
    }
    initPos = *p_initPos;
    followera = 0;
    followerClassIda = 0;
    IsNeedDeckPosReset = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43497264(questRestrictionInfo, initPos, 0);
    v58 = IsNeedDeckPosReset;
    v59 = 0;
    if ( (IsNeedDeckPosReset & 1) != 0 )
    {
      v60 = v46->fields.deckInfo;
      if ( !v60 )
        goto LABEL_136;
      v61 = v60->fields.svts;
      if ( !v61 )
        goto LABEL_136;
      if ( v51 >= LODWORD(v61->max_length) )
        goto LABEL_140;
      v62 = v61->m_Items[v51];
      if ( !v62 )
        goto LABEL_136;
      v59 = 0;
      if ( v106 != v51 )
      {
        npcFollowerSvtId = v62->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v59 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v57);
      }
    }
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo(
                        (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
                        initPos,
                        0);
    if ( !NpcFollowerInfo || ((v58 ^ 1) & 1) != 0 )
    {
      if ( v107 == v51 || v59 )
      {
        v74 = followera;
        v75 = *p_memberList;
        if ( followera )
        {
          v76 = followerClassIda;
          v70 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34235788(
            v70,
            v51,
            v74,
            v76,
            0,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v110,
            initPos,
            0);
LABEL_94:
          if ( !v75 )
            goto LABEL_136;
        }
        else
        {
          v79 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
          v70 = v79;
          if ( followerInfo )
          {
            PartyOrganizationListViewItem___ctor_34235788(
              v79,
              v51,
              followerInfo,
              v109,
              followerGrandGraphIda,
              setupInfo,
              questRestrictionInfo,
              friendPointCampaignEntityList,
              0,
              v110,
              initPos,
              0);
            goto LABEL_94;
          }
          PartyOrganizationListViewItem___ctor_34273464(v79, v51, 1, setupInfo, questRestrictionInfo, 1, initPos, 0);
          if ( !v75 )
            goto LABEL_136;
        }
        if ( v70 )
        {
          IsNeedDeckPosReset = sub_1C3E6A0(v70, v75->obj.klass->_1.element_class);
          if ( !IsNeedDeckPosReset )
            goto LABEL_141;
        }
        if ( v51 >= LODWORD(v75->max_length) )
          goto LABEL_140;
        v73 = &v75->obj.klass + (int)v51;
        goto LABEL_131;
      }
      GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                        questRestrictionInfo,
                                        initPos,
                                        0);
      IsNeedDeckPosReset = (__int64)UserEventDeckEntity__GetEquipList(v46, v51, 0);
      equipIdList = (System_Int64_array *)IsNeedDeckPosReset;
      isChangeFriendShipSvtEquipSkill = 0;
      if ( GrandServantRestrictionEntity )
      {
        if ( v51 >= *(_DWORD *)(v40 + 24) )
          goto LABEL_140;
        PartyListViewItem__GetGrandServantInfo(
          this,
          GrandServantRestrictionEntity,
          (UserServantEntity_o **)(v40 + 8LL * (int)v51 + 32),
          &equipIdList,
          &isChangeFriendShipSvtEquipSkill,
          v78);
      }
      else
      {
        v80 = (System_Int64_array *)IsNeedDeckPosReset;
        if ( (v58 & 1) != 0 )
        {
          if ( v51 >= *(_DWORD *)(v40 + 24) )
            goto LABEL_140;
          v81 = v40 + 8LL * (int)v51;
          v84 = *(_QWORD *)(v81 + 32);
          v83 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v81 + 32);
          v82 = v84;
          if ( v84 )
          {
            v86 = *(_QWORD *)(v82 + 80);
            v85 = *(_QWORD *)(v82 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v117.fields.currentCryptoKey = v86;
            *(_QWORD *)&v117.fields.fakeValue = v85;
            IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v117, 0);
            if ( v51 >= *(_DWORD *)(v40 + 24) )
              goto LABEL_140;
            if ( !*v83 )
              goto LABEL_136;
            v87 = IsNeedDeckPosReset;
            IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136((*v83)[6], 0);
            if ( v51 >= *(_DWORD *)(v40 + 24) )
              goto LABEL_140;
            v88 = IsNeedDeckPosReset;
            IsNeedDeckPosReset = (__int64)*v83;
            if ( !*v83 )
              goto LABEL_136;
            DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)IsNeedDeckPosReset, 0, 0);
            IsNeedDeckPosReset = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                   questRestrictionInfo,
                                   v87,
                                   v88,
                                   DispLimitCount,
                                   initPos,
                                   0,
                                   0);
            if ( (IsNeedDeckPosReset & 1) != 0 )
            {
              if ( v51 >= *(_DWORD *)(v40 + 24) )
                goto LABEL_140;
              *v83 = 0;
              sub_1C3E508((CGThumbnailListItem_o *)v83, 0, v90, v91);
            }
          }
          v80 = equipIdList;
        }
        if ( !v80 )
          goto LABEL_136;
        IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
        }
        SvtEquipMax = *(unsigned int *)(*(_QWORD *)(IsNeedDeckPosReset + 184) + 48LL);
        if ( (int)SvtEquipMax < SLODWORD(v80->max_length) )
        {
          if ( !*(_DWORD *)(IsNeedDeckPosReset + 224) )
          {
            j_il2cpp_runtime_class_init_0(IsNeedDeckPosReset);
            SvtEquipMax = (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax;
          }
          IsNeedDeckPosReset = sub_1C3E60C(long___TypeInfo, SvtEquipMax);
          equipIdList = (System_Int64_array *)IsNeedDeckPosReset;
        }
      }
      if ( v51 >= *(_DWORD *)(v40 + 24) )
        goto LABEL_140;
      v92 = *(UserServantEntity_o **)(v40 + 8LL * (int)v51 + 32);
      v93 = *p_memberList;
      if ( v92 )
      {
        v94 = equipIdList;
        v95 = isChangeFriendShipSvtEquipSkill;
        v70 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34262368(
          v70,
          v51,
          v92,
          v94,
          setupInfo,
          questRestrictionInfo,
          0,
          initPos,
          0,
          0,
          v95,
          0);
        if ( !v93 )
          goto LABEL_136;
        if ( v70 )
        {
          IsNeedDeckPosReset = sub_1C3E6A0(v70, v93->obj.klass->_1.element_class);
          if ( !IsNeedDeckPosReset )
            goto LABEL_141;
        }
        max_length = v93->max_length;
        v46 = v103;
      }
      else
      {
        v70 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34273464(v70, v51, 0, setupInfo, questRestrictionInfo, 1, initPos, 0);
        if ( !v93 )
          goto LABEL_136;
        if ( v70 )
        {
          IsNeedDeckPosReset = sub_1C3E6A0(v70, v93->obj.klass->_1.element_class);
          if ( !IsNeedDeckPosReset )
          {
LABEL_141:
            v100 = sub_1C3E7E4();
            sub_1C3E68C(v100, 0);
          }
        }
        max_length = v93->max_length;
      }
      if ( v51 >= max_length )
        goto LABEL_140;
      v73 = &v93->obj.klass + (int)v51;
    }
    else
    {
      v65 = NpcFollowerInfo;
      if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0) )
        v66 = 0;
      else
        v66 = v109;
      IsNpc = FollowerInfo__get_IsNpc(v65, 0);
      v68 = *p_memberList;
      if ( IsNpc )
        v69 = 0;
      else
        v69 = v110;
      v70 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34235788(
        v70,
        v51,
        v65,
        v66,
        0,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v69,
        initPos,
        0);
      if ( !v68 )
        goto LABEL_136;
      if ( v70 )
      {
        IsNeedDeckPosReset = sub_1C3E6A0(v70, v68->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
          goto LABEL_141;
      }
      if ( v51 >= LODWORD(v68->max_length) )
        goto LABEL_140;
      v73 = &v68->obj.klass + (int)v51;
    }
LABEL_131:
    v73[4] = (Il2CppClass *)v70;
    sub_1C3E508((CGThumbnailListItem_o *)(v73 + 4), (int32_t)v70, v71, v72);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_136;
    if ( v51 >= LODWORD(memberList->max_length) )
      goto LABEL_140;
    IsNeedDeckPosReset = (__int64)memberList->m_Items[v51];
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    cost = this->fields.cost;
    ++v51;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)IsNeedDeckPosReset,
                          0)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)SvtEquipMax);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v99) )
    *isBaseModify = 1;
}


void PartyListViewItem___ctor_34123248(
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
  int32_t v37; // w2
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
  BalanceConfig_c *v71; // x0
  const MethodInfo *v72; // x2
  const MethodInfo *v73; // x3
  int32_t k; // w19
  struct DeckServant_o *v75; // x8
  struct DeckServantData_array *v76; // x8
  DeckServantData_o *v77; // x8
  int32_t UserServantDeployIndex; // w0
  unsigned int v79; // w20
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  __int64 v82; // x24
  Il2CppClass **v83; // x0
  BalanceConfig_c *v84; // x0
  struct PartyOrganizationListViewItem_array *v85; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  unsigned __int64 v88; // x24
  signed __int64 v89; // x28
  __int64 m; // x22
  BalanceConfig_c *v91; // x0
  PartyListViewItem___c__DisplayClass31_1_o *v92; // x25
  const MethodInfo *v93; // x2
  struct DeckServant_o *v94; // x8
  struct DeckServantData_array *v95; // x8
  DeckServantData_o *v96; // x8
  int32_t *p_initPos; // x8
  int32_t initPos; // w19
  unsigned int *v99; // x20
  PartyOrganizationListViewItem_o *v100; // x25
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  const MethodInfo *v103; // x6
  bool v104; // w20
  int64_t v105; // x4
  FollowerInfo_o *v106; // x29
  bool IsNpc; // w0
  int32_t v108; // w8
  bool v109; // w0
  unsigned int *v110; // x23
  int32_t v111; // w20
  PartyOrganizationListViewItem_o *v112; // x28
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  unsigned __int64 v115; // x20
  unsigned __int64 questPhase; // x8
  FollowerInfo_o *v117; // x29
  int32_t v118; // w25
  PartyOrganizationListViewItem_o *v119; // x0
  System_Func_object__bool__o *v120; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v121; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v122; // x25
  FollowerInfo_o *v123; // x29
  System_Collections_Generic_List_object__o *v124; // x20
  int32_t v125; // w25
  PartyOrganizationListViewItem_o *v126; // x0
  bool v127; // w5
  int32_t v128; // w1
  EventUpValSetupInfo_o *v129; // x3
  QuestRestrictionInfo_o *v130; // x4
  bool v131; // w2
  int32_t v132; // w1
  int32_t v133; // w25
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  RestrictionEntity_o *GrandServantRestrictionEntity; // x29
  const MethodInfo *v137; // x5
  UserServantEntity_array *v138; // x8
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v140; // x8
  int32_t classId; // w25
  System_Int64_array *v142; // x25
  UserServantEntity_o *v143; // x8
  __int64 v144; // x25
  __int64 v145; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v146; // x8
  int32_t v147; // w25
  int32_t v148; // w29
  int32_t DispLimitCount; // w0
  int32_t v150; // w2
  const MethodInfo *v151; // x3
  UserServantEntity_o *v152; // x29
  EventUpValSetupInfo_o *v153; // x23
  PartyListViewItem_o *v154; // x26
  unsigned __int64 v155; // x27
  System_Int64_array *v156; // x25
  int32_t v157; // w20
  PartyOrganizationListViewItem_o *v158; // x0
  System_Int64_array *v159; // x3
  EventUpValSetupInfo_o *v160; // x25
  EventUpValSetupInfo_o *v161; // x4
  __int64 v162; // x23
  int v163; // w25
  unsigned __int64 v164; // x29
  UserServantEntity_o **v165; // x26
  PartyListViewItem___c__DisplayClass31_2_o *v166; // x19
  signed __int64 v167; // x20
  System_Func_object__bool__o *v168; // x24
  int32_t v169; // w2
  const MethodInfo *v170; // x3
  unsigned __int64 max_length_low; // x8
  signed __int64 v172; // x28
  EventUpValSetupInfo_o *v173; // x22
  unsigned __int64 v174; // x24
  int v175; // w26
  __int64 n; // x23
  BalanceConfig_c *v177; // x0
  PartyListViewItem___c__DisplayClass31_3_o *v178; // x25
  const MethodInfo *v179; // x2
  struct DeckServant_o *v180; // x8
  struct DeckServantData_array *v181; // x8
  __int64 v182; // x8
  int32_t *v183; // x8
  int32_t v184; // w19
  unsigned int *v185; // x20
  PartyOrganizationListViewItem_o *v186; // x25
  int32_t v187; // w2
  const MethodInfo *v188; // x3
  const MethodInfo *v189; // x6
  struct DeckServant_o *v190; // x8
  struct DeckServantData_array *v191; // x8
  __int64 v192; // x8
  int64_t v193; // x4
  _BOOL4 v194; // w22
  char isFixNpc; // w26
  int32_t chkIdx; // w8
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v198; // x29
  int32_t v199; // w22
  bool v200; // w0
  unsigned int *v201; // x20
  int32_t v202; // w26
  PartyOrganizationListViewItem_o *v203; // x0
  int32_t v204; // w3
  PartyOrganizationListViewItem_o *v205; // x25
  int32_t v206; // w2
  const MethodInfo *v207; // x3
  struct PartyOrganizationListViewItem_array *v208; // x8
  struct DeckServant_o *v209; // x9
  struct DeckServantData_array *v210; // x9
  __int64 v211; // x9
  __int64 v212; // x8
  int v213; // w9
  FollowerInfo_o *v214; // x29
  unsigned int *v215; // x27
  int32_t v216; // w22
  PartyOrganizationListViewItem_o *v217; // x0
  int32_t v218; // w3
  PartyOrganizationListViewItem_o *v219; // x25
  int32_t v220; // w2
  const MethodInfo *v221; // x3
  unsigned int *v222; // x19
  int v223; // w26
  PartyOrganizationListViewItem_o *v224; // x0
  System_Func_object__bool__o *v225; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v226; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v227; // x25
  bool v228; // w0
  RestrictionEntity_o *v229; // x29
  const MethodInfo *v230; // x5
  UserServantEntity_array *v231; // x20
  struct PartyOrganizationListViewItem_array *v232; // x8
  struct DeckServant_o *v233; // x9
  struct DeckServantData_array *v234; // x9
  __int64 v235; // x9
  FollowerInfo_o *v236; // x29
  unsigned int *v237; // x26
  __int64 v238; // x8
  __int64 v239; // x8
  int32_t v240; // w22
  PartyOrganizationListViewItem_o *v241; // x25
  int32_t v242; // w2
  const MethodInfo *v243; // x3
  System_Int64_array *v244; // x25
  __int64 v245; // x8
  __int64 v246; // x25
  __int64 v247; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v248; // x8
  int32_t v249; // w25
  int32_t v250; // w29
  int32_t v251; // w0
  int32_t v252; // w2
  const MethodInfo *v253; // x3
  UserServantEntity_o *v254; // x29
  unsigned int *v255; // x26
  System_Int64_array *v256; // x22
  int32_t v257; // w20
  PartyOrganizationListViewItem_o *v258; // x25
  int32_t v259; // w2
  const MethodInfo *v260; // x3
  struct PartyOrganizationListViewItem_array *v261; // x8
  int32_t v262; // w19
  const MethodInfo *v263; // x1
  __int64 v264; // x0
  UserServantEntity_o **v265; // [xsp+28h] [xbp-178h]
  bool v266; // [xsp+30h] [xbp-170h]
  _BOOL4 v267; // [xsp+30h] [xbp-170h]
  int32_t followerGrandGraphIda; // [xsp+34h] [xbp-16Ch]
  int v269; // [xsp+38h] [xbp-168h]
  int v270; // [xsp+38h] [xbp-168h]
  int32_t v271; // [xsp+3Ch] [xbp-164h]
  int32_t v272; // [xsp+3Ch] [xbp-164h]
  bool v273; // [xsp+3Ch] [xbp-164h]
  signed __int64 v275; // [xsp+48h] [xbp-158h]
  int32_t v276; // [xsp+58h] [xbp-148h]
  int v277; // [xsp+5Ch] [xbp-144h]
  int32_t v278; // [xsp+60h] [xbp-140h]
  int32_t FollowerIndex; // [xsp+64h] [xbp-13Ch]
  PartyListViewItem_o *v280; // [xsp+68h] [xbp-138h]
  FollowerInfo_o *v281; // [xsp+70h] [xbp-130h]
  EventUpValSetupInfo_o *setupInfoa; // [xsp+78h] [xbp-128h]
  EventUpValSetupInfo_o *setupInfob; // [xsp+78h] [xbp-128h]
  System_Int64_array *v284; // [xsp+80h] [xbp-120h]
  int v285; // [xsp+80h] [xbp-120h]
  QuestRestrictionInfo_o *v286; // [xsp+88h] [xbp-118h]
  int64_t *m_Items; // [xsp+88h] [xbp-118h]
  int v288; // [xsp+88h] [xbp-118h]
  System_Collections_Generic_List_object__o *v289; // [xsp+90h] [xbp-110h]
  PartyListViewItem_o *v290; // [xsp+98h] [xbp-108h]
  UserServantEntity_array *userServantList; // [xsp+A0h] [xbp-100h]
  _BOOL4 v292; // [xsp+ACh] [xbp-F4h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+B0h] [xbp-F0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+C0h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v296; // [xsp+C8h] [xbp-D8h] BYREF
  int32_t v297; // [xsp+E4h] [xbp-BCh] BYREF
  System_Int64_array *v298; // [xsp+E8h] [xbp-B8h] BYREF
  int32_t v299; // [xsp+F4h] [xbp-ACh] BYREF
  FollowerInfo_o *v300; // [xsp+F8h] [xbp-A8h] BYREF
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+104h] [xbp-9Ch] BYREF
  System_Int64_array *equipIdList; // [xsp+108h] [xbp-98h] BYREF
  int32_t followerClassIda; // [xsp+114h] [xbp-8Ch] BYREF
  FollowerInfo_o *followera; // [xsp+118h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v305; // [xsp+120h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v306; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v307; // 0:x0.16

  if ( (byte_4C52648 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_BasicHelper_Any_FollowerInfo___);
    sub_1C3E564(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_FollowerInfo___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Count_FollowerInfo___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__get_Current__);
    sub_1C3E564(&FollowerInfo___TypeInfo);
    sub_1C3E564(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_1C3E564(&long___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_FollowerInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_FollowerInfo___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_FollowerInfo__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_FollowerInfo__TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C3E564(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C3E564(&Method_PartyListViewItem___c__DisplayClass31_0___ctor_b__0__);
    sub_1C3E564(&PartyListViewItem___c__DisplayClass31_0_TypeInfo);
    sub_1C3E564(&Method_PartyListViewItem___c__DisplayClass31_1___ctor_b__1__);
    sub_1C3E564(&PartyListViewItem___c__DisplayClass31_1_TypeInfo);
    sub_1C3E564(&Method_PartyListViewItem___c__DisplayClass31_2___ctor_b__2__);
    sub_1C3E564(&PartyListViewItem___c__DisplayClass31_2_TypeInfo);
    sub_1C3E564(&Method_PartyListViewItem___c__DisplayClass31_3___ctor_b__3__);
    sub_1C3E564(&PartyListViewItem___c__DisplayClass31_3_TypeInfo);
    sub_1C3E564(&UserServantEntity___TypeInfo);
    byte_4C52648 = 1;
  }
  memset(&v305, 0, sizeof(v305));
  followera = 0;
  followerClassIda = 0;
  equipIdList = 0;
  isChangeFriendShipSvtEquipSkill = 0;
  v300 = 0;
  v299 = 0;
  v298 = 0;
  v297 = 0;
  ListViewItem___ctor_43860152((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v21, v22);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v24, v25);
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
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  if ( *(int *)(Instance + 56) < 1 )
  {
    v290 = 0;
    v277 = 0;
    v292 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v32 = *(PartyListViewItem_o **)(Instance + 80);
    v277 = 0;
    v292 = v32 == 0;
    v290 = v32;
    if ( follower && v32 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      v277 = *(_DWORD *)(Instance + 56);
      Instance = (__int64)PartyListViewItem__GetMember(v290, v277 - 1, v33);
      if ( !Instance )
        goto LABEL_75;
      v34 = *(_DWORD *)(Instance + 372);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v34, follower, 0);
      v292 = 0;
    }
  }
  Instance = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  v281 = follower;
  if ( !questRestrictionInfo )
    goto LABEL_75;
  DeckMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMemberMax;
  if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0) )
    DeckMemberMax = questRestrictionInfo->fields.servantNumMax;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo
    || !Instance
    || (QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                              (NpcFollowerMaster_o *)Instance,
                              (*p_questRestrictionInfo)->fields.questId,
                              (*p_questRestrictionInfo)->fields.questPhase,
                              0),
        v289 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_FollowerInfo__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v289,
          (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_FollowerInfo___ctor__),
        !QuestFollowerList) )
  {
LABEL_75:
    sub_1C3E7C0(Instance, SvtEquipMax);
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
        if ( !v289 )
          goto LABEL_75;
        items = v289->fields._items;
        v42 = Method_System_Collections_Generic_List_FollowerInfo__Add__;
        ++v289->fields._version;
        if ( !items )
          goto LABEL_75;
        size = v289->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v289,
            (Il2CppObject *)SvtEquipMax,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = &items->obj.klass + size;
          v289->fields._size = size + 1;
          v44[4] = (Il2CppClass *)SvtEquipMax;
          sub_1C3E508((CGThumbnailListItem_o *)(v44 + 4), SvtEquipMax, v37, v38);
        }
      }
      max_length = npcFollowerInfoList->max_length;
    }
  }
  v45 = isNew;
  FollowerIndex = PartyListViewItem__GetFollowerIndex(
                    this,
                    deck,
                    (System_Collections_Generic_List_FollowerInfo__o *)v289,
                    v38);
  setupInfoa = setupInfo;
  v286 = questRestrictionInfo;
  v280 = this;
  if ( isNew || !questRestrictionInfo->fields.isNpcEditablePos )
    goto LABEL_117;
  Instance = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
  if ( (Instance & 1) != 0 )
  {
    if ( !v289 )
      goto LABEL_75;
    v46 = v289->fields._size;
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
    v56 = (PartyListViewItem___c__DisplayClass31_0_o *)sub_1C3E7B0(PartyListViewItem___c__DisplayClass31_0_TypeInfo);
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
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43497264(
                   questRestrictionInfo,
                   v59->fields.initPos,
                   0);
      if ( (int)v52 >= DeckMemberMax && (userSvtId || v56->fields.npcSvtId) )
        v53 = 1;
      if ( !(Instance & 1 | (v56->fields.npcSvtId == 0)) )
      {
        v61 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v61,
          (Il2CppObject *)v56,
          Method_PartyListViewItem___c__DisplayClass31_0___ctor_b__0__,
          0);
        Instance = BasicHelper__Any_object_(
                     (System_Collections_Generic_List_T__o *)v289,
                     (System_Func_T__bool__o *)v61,
                     (const MethodInfo_30E2E10 *)Method_BasicHelper_Any_FollowerInfo___);
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
  NpcServantFollowerIds = (System_Int64_array *)sub_1C3E60C(
                                                  long___TypeInfo,
                                                  (unsigned int)v62->static_fields->DeckMemberMax);
  Instance = (__int64)v289;
  if ( !v289 )
    goto LABEL_75;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v296,
    v289,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
  v305 = v296;
  while ( 1 )
  {
    v63 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v305,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    if ( !v63 )
      break;
    if ( !v305.fields._current )
      sub_1C3E7C0(v63, v64);
    klass = v305.fields._current[5].klass;
    if ( klass )
    {
      v67 = LODWORD(v305.fields._current[5].monitor) - 1;
      if ( v67 >= 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_1C3E7C0(v63, v64);
        if ( (unsigned int)v67 >= LODWORD(NpcServantFollowerIds->max_length) )
          sub_1C3E7C8(v63, v64);
        v68 = &NpcServantFollowerIds->obj.klass + (unsigned int)v67;
        goto LABEL_92;
      }
      NpcDeployIdx = PartyListViewItem__GetNpcDeployIdx(this, NpcServantFollowerIds, v65);
      if ( (NpcDeployIdx & 0x80000000) == 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_1C3E7C0(NpcDeployIdx, v70);
        if ( (unsigned int)NpcDeployIdx >= LODWORD(NpcServantFollowerIds->max_length) )
          sub_1C3E7C8(NpcDeployIdx, v70);
        v68 = &NpcServantFollowerIds->obj.klass + (unsigned int)NpcDeployIdx;
LABEL_92:
        v68[4] = klass;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v305,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
  v71 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v71 = BalanceConfig_TypeInfo;
  }
  userServantList = (UserServantEntity_array *)sub_1C3E60C(
                                                 UserServantEntity___TypeInfo,
                                                 (unsigned int)v71->static_fields->DeckMemberMax);
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
          v82 = Instance;
          if ( Instance )
          {
            Instance = sub_1C3E6A0(Instance, userServantList->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_426;
          }
          if ( v79 >= LODWORD(userServantList->max_length) )
            goto LABEL_425;
          v83 = &userServantList->obj.klass + v79;
          v83[4] = (Il2CppClass *)v82;
          sub_1C3E508((CGThumbnailListItem_o *)(v83 + 4), v82, v80, v81);
          questRestrictionInfo = v286;
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
                      (System_Collections_Generic_List_FollowerInfo__o *)v289,
                      v72);
  }
LABEL_117:
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v281 = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v276 = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    followerGrandGraphIda = *(_DWORD *)(Instance + 36);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v278 = *(_DWORD *)(Instance + 40);
  }
  else
  {
    v278 = followerDeckId;
    followerGrandGraphIda = followerGrandGraphId;
    v276 = followerClassId;
  }
  v84 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v84 = BalanceConfig_TypeInfo;
  }
  v85 = (struct PartyOrganizationListViewItem_array *)sub_1C3E60C(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v84->static_fields->DeckMemberMax);
  this->fields.memberList = v85;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v85, v86, v87);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( !v45 && questRestrictionInfo->fields.isNpcEditablePos )
  {
    m_Items = NpcServantFollowerIds->m_Items;
    v88 = 0;
    v89 = DeckMemberMax;
    v265 = userServantList->m_Items;
    v269 = -1;
    while ( 1 )
    {
      for ( m = 8 * v88; ; m += 8 )
      {
        v91 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v91 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v88 >= v91->static_fields->DeckMemberMax )
          goto LABEL_419;
        v92 = (PartyListViewItem___c__DisplayClass31_1_o *)sub_1C3E7B0(PartyListViewItem___c__DisplayClass31_1_TypeInfo);
        PartyListViewItem___c__DisplayClass31_1___ctor(v92, 0);
        if ( v292 )
        {
          v94 = deck->fields.deckInfo;
          if ( !v94 )
            goto LABEL_75;
          v95 = v94->fields.svts;
          if ( !v95 )
            goto LABEL_75;
          if ( v88 >= LODWORD(v95->max_length) )
            goto LABEL_425;
          v96 = v95->m_Items[v88];
          if ( !v96 )
            goto LABEL_75;
          p_initPos = &v96->fields.initPos;
        }
        else
        {
          Instance = (__int64)PartyListViewItem__GetMember(v290, v88, v93);
          if ( !Instance )
            goto LABEL_75;
          p_initPos = (int32_t *)(Instance + 372);
        }
        initPos = *p_initPos;
        if ( (__int64)v88 < v89 )
          break;
        v99 = (unsigned int *)*p_memberList;
        v100 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34273464(v100, v88, 0, setupInfo, questRestrictionInfo, 1, initPos, 0);
        if ( !v99 )
          goto LABEL_75;
        if ( v100 )
        {
          Instance = sub_1C3E6A0(v100, *(_QWORD *)(*(_QWORD *)v99 + 64LL));
          if ( !Instance )
            goto LABEL_426;
        }
        if ( v88 >= v99[6] )
          goto LABEL_425;
        *(_QWORD *)&v99[2 * v88 + 8] = v100;
        sub_1C3E508((CGThumbnailListItem_o *)&v99[(unsigned __int64)m / 4 + 8], (int32_t)v100, v101, v102);
        ++v88;
      }
      if ( !v92 )
        goto LABEL_75;
      v92->fields.chkIdx = v88 + 1;
      followera = 0;
      followerClassIda = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43497264(questRestrictionInfo, initPos, 0);
      v104 = 0;
      v271 = Instance;
      if ( (Instance & 1) != 0 )
      {
        if ( !NpcServantFollowerIds )
          goto LABEL_75;
        if ( v88 >= LODWORD(NpcServantFollowerIds->max_length) )
          goto LABEL_425;
        v105 = m_Items[v88];
        v104 = v105 >= 1
            && v92->fields.chkIdx != v277
            && PartyListViewItem__SetNpcFollowerInfo(
                 this,
                 &followera,
                 &followerClassIda,
                 npcFollowerInfoList,
                 v105,
                 initPos,
                 v103);
      }
      v266 = !QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0)
          && QuestRestrictionInfo__IsPositionFixNpc(questRestrictionInfo, initPos, 0);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                            (PartyOrganizationUtility_o *)Instance,
                            initPos,
                            0);
      v275 = v89;
      v284 = NpcServantFollowerIds;
      if ( !Instance || ((v271 ^ 1) & 1) != 0 )
      {
        if ( v104 || v92->fields.chkIdx == FollowerIndex )
        {
          v117 = followera;
          v110 = (unsigned int *)*p_memberList;
          if ( followera )
          {
            v118 = followerClassIda;
            v112 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_34235788(
              v112,
              v88,
              v117,
              v118,
              0,
              setupInfo,
              questRestrictionInfo,
              0,
              0,
              v278,
              initPos,
              0);
            v115 = v88 + 1;
            if ( !v110 )
              goto LABEL_75;
          }
          else
          {
            v119 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
            v115 = v88 + 1;
            v112 = v119;
            if ( !v281 )
            {
              v131 = 1;
              v132 = v88;
              goto LABEL_198;
            }
            PartyOrganizationListViewItem___ctor_34235788(
              v119,
              v88,
              v281,
              v276,
              followerGrandGraphIda,
              setupInfo,
              questRestrictionInfo,
              0,
              0,
              v278,
              initPos,
              0);
LABEL_199:
            if ( !v110 )
              goto LABEL_75;
          }
          goto LABEL_215;
        }
        if ( v266 )
        {
          v120 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_FollowerInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v120,
            (Il2CppObject *)v92,
            Method_PartyListViewItem___c__DisplayClass31_1___ctor_b__1__,
            0);
          v121 = System_Linq_Enumerable__Where_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v289,
                   (System_Func_TSource__bool__o *)v120,
                   (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
          v122 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C3E6A0(v121, FollowerInfo___TypeInfo);
          if ( !v122 )
            v122 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                          v121,
                                                                          (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
          v115 = v88 + 1;
          if ( System_Linq_Enumerable__Any_object_(
                 v122,
                 (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
          {
            Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                                  v122,
                                  0,
                                  (const MethodInfo_311DB58 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
            v123 = (FollowerInfo_o *)Instance;
LABEL_183:
            v110 = (unsigned int *)*p_memberList;
            if ( v123 )
              goto LABEL_229;
          }
          else
          {
            Instance = (__int64)v289;
            if ( !v289 )
              goto LABEL_75;
            if ( v289->fields._size >= 1 )
            {
              v133 = 0;
              while ( 1 )
              {
                Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      v133,
                                      (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
                if ( !Instance || !NpcServantFollowerIds )
                  goto LABEL_75;
                if ( v88 >= LODWORD(NpcServantFollowerIds->max_length) )
                  goto LABEL_425;
                if ( *(_QWORD *)(Instance + 80) != m_Items[v88] )
                {
                  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                        v289,
                                        v133,
                                        (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
                  if ( !Instance )
                    goto LABEL_75;
                  if ( v269 < v133 && *(int *)(Instance + 88) <= 0 )
                    break;
                }
                Instance = (__int64)v289;
                if ( ++v133 >= v289->fields._size )
                  goto LABEL_212;
              }
              Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                    v289,
                                    v133,
                                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
              v123 = (FollowerInfo_o *)Instance;
              v269 = v133;
              goto LABEL_183;
            }
LABEL_212:
            v110 = (unsigned int *)*p_memberList;
          }
          v126 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
          v112 = v126;
          v128 = v88;
          v129 = setupInfo;
          v130 = questRestrictionInfo;
          v127 = 0;
LABEL_214:
          PartyOrganizationListViewItem___ctor_34273464(v126, v128, 0, v129, v130, v127, initPos, 0);
          if ( !v110 )
            goto LABEL_75;
          goto LABEL_215;
        }
        if ( !NpcServantFollowerIds )
          goto LABEL_75;
        if ( v88 >= LODWORD(NpcServantFollowerIds->max_length) )
          goto LABEL_425;
        if ( m_Items[v88] )
        {
          Instance = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v289,
                       (const MethodInfo_3119ED4 *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
          if ( (int)Instance < 1 )
          {
LABEL_195:
            v115 = v88 + 1;
            v110 = (unsigned int *)*p_memberList;
          }
          else
          {
            if ( !v289 )
              goto LABEL_75;
            v124 = v289;
            v125 = 0;
            while ( 1 )
            {
              Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                    v124,
                                    v125,
                                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
              if ( !Instance )
                goto LABEL_75;
              if ( v88 >= LODWORD(NpcServantFollowerIds->max_length) )
                goto LABEL_425;
              if ( *(_QWORD *)(Instance + 80) == m_Items[v88] )
                break;
              v124 = v289;
              if ( ++v125 >= System_Linq_Enumerable__Count_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)v289,
                               (const MethodInfo_3119ED4 *)Method_System_Linq_Enumerable_Count_FollowerInfo___) )
                goto LABEL_195;
            }
            Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                  v289,
                                  v125,
                                  (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
            v115 = v88 + 1;
            v110 = (unsigned int *)*p_memberList;
            if ( Instance )
            {
              v123 = (FollowerInfo_o *)Instance;
LABEL_229:
              userSvtLeaderHash = v123->fields.userSvtLeaderHash;
              if ( !userSvtLeaderHash )
                goto LABEL_75;
              if ( !LODWORD(userSvtLeaderHash->max_length) )
                goto LABEL_425;
              v140 = userSvtLeaderHash->m_Items[0];
              if ( !v140 )
                goto LABEL_75;
              classId = v140->fields.classId;
              v112 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_34235788(
                v112,
                v88,
                v123,
                classId,
                0,
                setupInfo,
                questRestrictionInfo,
                0,
                1,
                v278,
                initPos,
                0);
              if ( !v110 )
                goto LABEL_75;
LABEL_215:
              if ( v112 )
              {
                Instance = sub_1C3E6A0(v112, *(_QWORD *)(*(_QWORD *)v110 + 64LL));
                if ( !Instance )
                  goto LABEL_426;
              }
              questPhase = v110[6];
              goto LABEL_218;
            }
          }
          v126 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
          v112 = v126;
          v127 = 1;
          v128 = v88;
          v129 = setupInfo;
          v130 = questRestrictionInfo;
          goto LABEL_214;
        }
        GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                          questRestrictionInfo,
                                          initPos,
                                          0);
        Instance = (__int64)UserEventDeckEntity__GetEquipList(deck, v88, 0);
        equipIdList = (System_Int64_array *)Instance;
        isChangeFriendShipSvtEquipSkill = 0;
        if ( GrandServantRestrictionEntity )
        {
          if ( !userServantList )
            goto LABEL_75;
          v115 = v88 + 1;
          if ( v88 >= LODWORD(userServantList->max_length) )
            goto LABEL_425;
          PartyListViewItem__GetGrandServantInfo(
            this,
            GrandServantRestrictionEntity,
            &v265[(unsigned __int64)m / 8],
            &equipIdList,
            &isChangeFriendShipSvtEquipSkill,
            v137);
          v138 = userServantList;
        }
        else
        {
          v142 = (System_Int64_array *)Instance;
          if ( (v271 & 1) != 0 )
          {
            if ( !userServantList )
              goto LABEL_75;
            if ( v88 >= LODWORD(userServantList->max_length) )
              goto LABEL_425;
            v143 = v265[v88];
            if ( v143 )
            {
              v145 = *(_QWORD *)&v143->fields.svtId.fields.currentCryptoKey;
              v144 = *(_QWORD *)&v143->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v306.fields.currentCryptoKey = v145;
              *(_QWORD *)&v306.fields.fakeValue = v144;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v306, 0);
              if ( v88 >= LODWORD(userServantList->max_length) )
                goto LABEL_425;
              v146 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v265[v88];
              if ( !v146 )
                goto LABEL_75;
              v147 = Instance;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v146[6], 0);
              if ( v88 >= LODWORD(userServantList->max_length) )
                goto LABEL_425;
              v148 = Instance;
              Instance = (__int64)v265[v88];
              if ( !Instance )
                goto LABEL_75;
              DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
              Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                           questRestrictionInfo,
                           v147,
                           v148,
                           DispLimitCount,
                           initPos,
                           0,
                           0);
              if ( (Instance & 1) != 0 )
              {
                if ( v88 >= LODWORD(userServantList->max_length) )
                  goto LABEL_425;
                v265[v88] = 0;
                sub_1C3E508((CGThumbnailListItem_o *)&v265[(unsigned __int64)m / 8], 0, v150, v151);
              }
            }
            v142 = equipIdList;
          }
          if ( !v142 )
            goto LABEL_75;
          Instance = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Instance = (__int64)BalanceConfig_TypeInfo;
          }
          v115 = v88 + 1;
          SvtEquipMax = *(unsigned int *)(*(_QWORD *)(Instance + 184) + 48LL);
          if ( (int)SvtEquipMax < SLODWORD(v142->max_length) )
          {
            if ( !*(_DWORD *)(Instance + 224) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              SvtEquipMax = (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax;
            }
            Instance = sub_1C3E60C(long___TypeInfo, SvtEquipMax);
            equipIdList = (System_Int64_array *)Instance;
          }
          v138 = userServantList;
          if ( !userServantList )
            goto LABEL_75;
        }
        if ( v88 >= LODWORD(v138->max_length) )
          goto LABEL_425;
        v152 = v265[v88];
        v110 = (unsigned int *)*p_memberList;
        if ( !v152 )
        {
          v119 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
          v112 = v119;
          v132 = v88;
          v131 = 0;
LABEL_198:
          PartyOrganizationListViewItem___ctor_34273464(
            v119,
            v132,
            v131,
            setupInfo,
            questRestrictionInfo,
            1,
            initPos,
            0);
          goto LABEL_199;
        }
        setupInfob = (EventUpValSetupInfo_o *)*p_memberList;
        v153 = setupInfo;
        v154 = this;
        v155 = v115;
        v156 = equipIdList;
        v157 = isChangeFriendShipSvtEquipSkill;
        v158 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
        v159 = v156;
        v160 = v153;
        v161 = v153;
        v110 = (unsigned int *)setupInfob;
        v112 = v158;
        PartyOrganizationListViewItem___ctor_34262368(
          v158,
          v88,
          v152,
          v159,
          v161,
          questRestrictionInfo,
          0,
          initPos,
          0,
          0,
          v157,
          0);
        if ( !setupInfob )
          goto LABEL_75;
        v115 = v155;
        if ( v112 )
        {
          Instance = sub_1C3E6A0(v112, setupInfob->klass->_1.element_class);
          if ( !Instance )
            goto LABEL_426;
        }
        questPhase = (unsigned int)setupInfob->fields.questPhase;
        this = v154;
        setupInfo = v160;
      }
      else
      {
        v106 = (FollowerInfo_o *)Instance;
        IsNpc = FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0);
        v108 = v276;
        if ( IsNpc )
          v108 = 0;
        v272 = v108;
        v109 = FollowerInfo__get_IsNpc(v106, 0);
        v110 = (unsigned int *)*p_memberList;
        if ( v109 )
          v111 = 0;
        else
          v111 = v278;
        v112 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34235788(
          v112,
          v88,
          v106,
          v272,
          0,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v111,
          initPos,
          0);
        if ( !v110 )
          goto LABEL_75;
        v115 = v88 + 1;
        if ( v112 )
        {
          Instance = sub_1C3E6A0(v112, *(_QWORD *)(*(_QWORD *)v110 + 64LL));
          if ( !Instance )
            goto LABEL_426;
        }
        questPhase = v110[6];
      }
LABEL_218:
      if ( v88 >= questPhase )
        goto LABEL_425;
      *(_QWORD *)&v110[2 * v88 + 8] = v112;
      sub_1C3E508((CGThumbnailListItem_o *)&v110[(unsigned __int64)m / 4 + 8], (int32_t)v112, v113, v114);
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_75;
      NpcServantFollowerIds = v284;
      if ( v88 >= LODWORD(memberList->max_length) )
        goto LABEL_425;
      Instance = (__int64)memberList->m_Items[v88];
      v89 = v275;
      if ( !Instance )
        goto LABEL_75;
      cost = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                        + cost;
      v88 = v115;
    }
  }
  v285 = questRestrictionInfo->fields.myServantNumMax
       + (FollowerIndex > 0 && !questRestrictionInfo->fields.isNotTransitionSupportList);
  if ( !v45 )
  {
    if ( !userServantList )
      goto LABEL_75;
    if ( SLODWORD(userServantList->max_length) >= 1 )
    {
      v162 = 0;
      v163 = 0;
      v164 = 0;
      v165 = userServantList->m_Items;
      while ( 1 )
      {
        v166 = (PartyListViewItem___c__DisplayClass31_2_o *)sub_1C3E7B0(PartyListViewItem___c__DisplayClass31_2_TypeInfo);
        PartyListViewItem___c__DisplayClass31_2___ctor(v166, 0);
        if ( !v166 )
          goto LABEL_75;
        v167 = v164 + 1;
        v166->fields.chkIdx = v164 + 1;
        if ( v164 >= LODWORD(userServantList->max_length) )
          goto LABEL_425;
        if ( v165[v164] )
          ++v163;
        v168 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v168,
          (Il2CppObject *)v166,
          Method_PartyListViewItem___c__DisplayClass31_2___ctor_b__2__,
          0);
        Instance = (__int64)System_Linq_Enumerable__Where_object_(
                              (System_Collections_Generic_IEnumerable_TSource__o *)npcFollowerInfoList,
                              (System_Func_TSource__bool__o *)v168,
                              (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
        max_length_low = LODWORD(userServantList->max_length);
        if ( v164 >= max_length_low )
          goto LABEL_425;
        questRestrictionInfo = v286;
        if ( !v165[v164] )
          goto LABEL_281;
        if ( v166->fields.chkIdx > DeckMemberMax )
          goto LABEL_279;
        Instance = System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                     (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
        if ( v163 > v285 || (Instance & 1) != 0 )
          break;
LABEL_281:
        ++v162;
        ++v164;
        if ( v167 >= SLODWORD(userServantList->max_length) )
          goto LABEL_282;
      }
      max_length_low = LODWORD(userServantList->max_length);
LABEL_279:
      if ( v164 >= max_length_low )
        goto LABEL_425;
      v165[v164] = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&v165[v162], 0, v169, v170);
      goto LABEL_281;
    }
  }
LABEL_282:
  v172 = DeckMemberMax;
  v173 = setupInfoa;
  v174 = 0;
  v175 = 0;
LABEL_283:
  for ( n = 8 * v174 + 32; ; n += 8 )
  {
    v177 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v177 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v174 >= v177->static_fields->DeckMemberMax )
      break;
    v178 = (PartyListViewItem___c__DisplayClass31_3_o *)sub_1C3E7B0(PartyListViewItem___c__DisplayClass31_3_TypeInfo);
    PartyListViewItem___c__DisplayClass31_3___ctor(v178, 0);
    if ( v292 )
    {
      v180 = deck->fields.deckInfo;
      if ( !v180 )
        goto LABEL_75;
      v181 = v180->fields.svts;
      if ( !v181 )
        goto LABEL_75;
      if ( v174 >= LODWORD(v181->max_length) )
        goto LABEL_425;
      v182 = *(__int64 *)((char *)&v181->obj.klass + n);
      if ( !v182 )
        goto LABEL_75;
      v183 = (int32_t *)(v182 + 76);
    }
    else
    {
      Instance = (__int64)PartyListViewItem__GetMember(v290, v174, v179);
      if ( !Instance )
        goto LABEL_75;
      v183 = (int32_t *)(Instance + 372);
    }
    v184 = *v183;
    if ( (__int64)v174 < v172 )
    {
      if ( !v178 )
        goto LABEL_75;
      v178->fields.chkIdx = v174 + 1;
      v300 = 0;
      v299 = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_43497264(questRestrictionInfo, v184, 0);
      v288 = v175;
      v270 = Instance;
      if ( (Instance & 1) == 0 )
        goto LABEL_310;
      v190 = deck->fields.deckInfo;
      if ( !v190 )
        goto LABEL_75;
      v191 = v190->fields.svts;
      if ( !v191 )
        goto LABEL_75;
      if ( v174 >= LODWORD(v191->max_length) )
        goto LABEL_425;
      v192 = *(__int64 *)((char *)&v191->obj.klass + n);
      if ( !v192 )
        goto LABEL_75;
      v193 = *(_QWORD *)(v192 + 64);
      if ( v193 >= 1 )
      {
        if ( v178->fields.chkIdx == v277 )
        {
          v194 = 0;
          isFixNpc = 1;
          v273 = 1;
          goto LABEL_316;
        }
        v273 = PartyListViewItem__SetNpcFollowerInfo(this, &v300, &v299, npcFollowerInfoList, v193, v184, v189);
        v194 = 0;
LABEL_315:
        isFixNpc = 1;
        goto LABEL_316;
      }
LABEL_310:
      if ( !v281 || questRestrictionInfo->fields.isNotTransitionSupportList )
      {
        v194 = 0;
        v273 = 0;
        goto LABEL_315;
      }
      chkIdx = v178->fields.chkIdx;
      v273 = 0;
      isFixNpc = chkIdx != FollowerIndex;
      v194 = chkIdx == FollowerIndex;
LABEL_316:
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v184, 0);
      if ( NpcFollowerInfo && ((v270 ^ 1) & 1) == 0 )
      {
        v198 = NpcFollowerInfo;
        if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0) )
          v199 = 0;
        else
          v199 = v276;
        v200 = FollowerInfo__get_IsNpc(v198, 0);
        v201 = (unsigned int *)*p_memberList;
        if ( v200 )
          v202 = 0;
        else
          v202 = v278;
        v203 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
        v204 = v199;
        v173 = setupInfoa;
        v205 = v203;
        PartyOrganizationListViewItem___ctor_34235788(
          v203,
          v174,
          v198,
          v204,
          0,
          setupInfoa,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v202,
          v184,
          0);
        if ( !v201 )
          goto LABEL_75;
        if ( !v205 || (Instance = sub_1C3E6A0(v205, *(_QWORD *)(*(_QWORD *)v201 + 64LL))) != 0 )
        {
          if ( v174 < v201[6] )
          {
            *(_QWORD *)((char *)v201 + n) = v205;
            sub_1C3E508((CGThumbnailListItem_o *)((char *)v201 + n), (int32_t)v205, v206, v207);
            v208 = *p_memberList;
            if ( !*p_memberList )
              goto LABEL_75;
            if ( v174 < LODWORD(v208->max_length) )
            {
              v209 = deck->fields.deckInfo;
              if ( !v209 )
                goto LABEL_75;
              v210 = v209->fields.svts;
              if ( !v210 )
                goto LABEL_75;
              if ( v174 < LODWORD(v210->max_length) )
              {
                v211 = *(__int64 *)((char *)&v210->obj.klass + n);
                if ( v211 )
                {
                  v212 = *(__int64 *)((char *)&v208->obj.klass + n);
                  if ( v212 )
                  {
                    v213 = *(_DWORD *)(v211 + 76);
                    v175 = v288 + 1;
                    goto LABEL_367;
                  }
                }
                goto LABEL_75;
              }
            }
          }
LABEL_425:
          sub_1C3E7C8(Instance, SvtEquipMax);
        }
LABEL_426:
        v264 = sub_1C3E7E4();
        sub_1C3E68C(v264, 0);
      }
      if ( v273 || v178->fields.chkIdx == FollowerIndex )
      {
        v214 = v300;
        v267 = v194;
        v215 = (unsigned int *)*p_memberList;
        if ( v300 )
        {
          v216 = v299;
          v217 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
          v218 = v216;
          v173 = setupInfoa;
          v219 = v217;
          PartyOrganizationListViewItem___ctor_34235788(
            v217,
            v174,
            v214,
            v218,
            0,
            setupInfoa,
            questRestrictionInfo,
            0,
            isFixNpc,
            v278,
            v184,
            0);
          if ( !v215 )
            goto LABEL_75;
          v222 = v215;
          v223 = v288;
          this = v280;
        }
        else
        {
          v224 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
          v219 = v224;
          if ( v281 )
          {
            v173 = setupInfoa;
            PartyOrganizationListViewItem___ctor_34235788(
              v224,
              v174,
              v281,
              v276,
              followerGrandGraphIda,
              setupInfoa,
              questRestrictionInfo,
              0,
              isFixNpc,
              v278,
              v184,
              0);
            v222 = v215;
            this = v280;
            if ( !v222 )
              goto LABEL_75;
            v223 = v288;
          }
          else
          {
            v173 = setupInfoa;
            PartyOrganizationListViewItem___ctor_34273464(v224, v174, 1, setupInfoa, questRestrictionInfo, 1, v184, 0);
            v223 = v288;
            v222 = v215;
            this = v280;
            if ( !v222 )
              goto LABEL_75;
          }
        }
        if ( v219 )
        {
          Instance = sub_1C3E6A0(v219, *(_QWORD *)(*(_QWORD *)v222 + 64LL));
          if ( !Instance )
            goto LABEL_426;
        }
        if ( v174 >= v222[6] )
          goto LABEL_425;
        *(_QWORD *)((char *)v222 + n) = v219;
        sub_1C3E508((CGThumbnailListItem_o *)((char *)v222 + n), (int32_t)v219, v220, v221);
        v232 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_75;
        if ( v174 >= LODWORD(v232->max_length) )
          goto LABEL_425;
        v233 = deck->fields.deckInfo;
        if ( !v233 )
          goto LABEL_75;
        v234 = v233->fields.svts;
        if ( !v234 )
          goto LABEL_75;
        if ( v174 >= LODWORD(v234->max_length) )
          goto LABEL_425;
        v235 = *(__int64 *)((char *)&v234->obj.klass + n);
        if ( !v235 )
          goto LABEL_75;
        v212 = *(__int64 *)((char *)&v232->obj.klass + n);
        if ( !v212 )
          goto LABEL_75;
        v213 = *(_DWORD *)(v235 + 76);
        v175 = (v267 || v273) + v223;
LABEL_367:
        *(_DWORD *)(v212 + 372) = v213;
        goto LABEL_368;
      }
      v225 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v225,
        (Il2CppObject *)v178,
        Method_PartyListViewItem___c__DisplayClass31_3___ctor_b__3__,
        0);
      v226 = System_Linq_Enumerable__Where_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v289,
               (System_Func_TSource__bool__o *)v225,
               (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v227 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C3E6A0(v226, FollowerInfo___TypeInfo);
      if ( !v227 )
        v227 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                      v226,
                                                                      (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
      v228 = System_Linq_Enumerable__Any_object_(
               v227,
               (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( v288 < v285 && !v228 )
      {
        v229 = QuestRestrictionInfo__GetGrandServantRestrictionEntity(questRestrictionInfo, v184, 0);
        Instance = (__int64)UserEventDeckEntity__GetEquipList(deck, v174, 0);
        v298 = (System_Int64_array *)Instance;
        v297 = 0;
        if ( v229 )
        {
          v231 = userServantList;
          if ( !userServantList )
            goto LABEL_75;
          if ( v174 >= LODWORD(userServantList->max_length) )
            goto LABEL_425;
          PartyListViewItem__GetGrandServantInfo(
            this,
            v229,
            (UserServantEntity_o **)((char *)userServantList + n),
            &v298,
            &v297,
            v230);
        }
        else
        {
          v244 = (System_Int64_array *)Instance;
          if ( (v270 & 1) != 0 )
          {
            if ( !userServantList )
              goto LABEL_75;
            if ( v174 >= LODWORD(userServantList->max_length) )
              goto LABEL_425;
            v245 = *(__int64 *)((char *)&userServantList->obj.klass + n);
            if ( v245 )
            {
              v247 = *(_QWORD *)(v245 + 80);
              v246 = *(_QWORD *)(v245 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v307.fields.currentCryptoKey = v247;
              *(_QWORD *)&v307.fields.fakeValue = v246;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v307, 0);
              if ( v174 >= LODWORD(userServantList->max_length) )
                goto LABEL_425;
              v248 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&userServantList->obj.klass + n);
              if ( !v248 )
                goto LABEL_75;
              v249 = Instance;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v248[6], 0);
              if ( v174 >= LODWORD(userServantList->max_length) )
                goto LABEL_425;
              v250 = Instance;
              Instance = *(__int64 *)((char *)&userServantList->obj.klass + n);
              if ( !Instance )
                goto LABEL_75;
              v251 = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0);
              Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                           questRestrictionInfo,
                           v249,
                           v250,
                           v251,
                           v184,
                           0,
                           0);
              if ( (Instance & 1) != 0 )
              {
                if ( v174 >= LODWORD(userServantList->max_length) )
                  goto LABEL_425;
                *(Il2CppClass **)((char *)&userServantList->obj.klass + n) = 0;
                sub_1C3E508((CGThumbnailListItem_o *)((char *)userServantList + n), 0, v252, v253);
              }
            }
            v244 = v298;
          }
          if ( !v244 )
            goto LABEL_75;
          Instance = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Instance = (__int64)BalanceConfig_TypeInfo;
          }
          SvtEquipMax = *(unsigned int *)(*(_QWORD *)(Instance + 184) + 48LL);
          if ( (int)SvtEquipMax < SLODWORD(v244->max_length) )
          {
            if ( !*(_DWORD *)(Instance + 224) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              SvtEquipMax = (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax;
            }
            Instance = sub_1C3E60C(long___TypeInfo, SvtEquipMax);
            v298 = (System_Int64_array *)Instance;
          }
          v231 = userServantList;
          if ( !userServantList )
            goto LABEL_75;
        }
        if ( v174 >= LODWORD(v231->max_length) )
          goto LABEL_425;
        v254 = *(UserServantEntity_o **)((char *)&v231->obj.klass + n);
        v255 = (unsigned int *)*p_memberList;
        if ( v254 )
        {
          v256 = v298;
          v257 = v297;
          v258 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34262368(
            v258,
            v174,
            v254,
            v256,
            setupInfoa,
            questRestrictionInfo,
            0,
            v184,
            0,
            0,
            v257,
            0);
          if ( !v255 )
            goto LABEL_75;
        }
        else
        {
          v258 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34273464(v258, v174, 0, setupInfoa, questRestrictionInfo, 1, v184, 0);
          if ( !v255 )
            goto LABEL_75;
        }
        if ( v258 )
        {
          Instance = sub_1C3E6A0(v258, *(_QWORD *)(*(_QWORD *)v255 + 64LL));
          if ( !Instance )
            goto LABEL_426;
        }
        if ( v174 >= v255[6] )
          goto LABEL_425;
        *(_QWORD *)((char *)v255 + n) = v258;
        sub_1C3E508((CGThumbnailListItem_o *)((char *)v255 + n), (int32_t)v258, v259, v260);
        v175 = v288 + 1;
        goto LABEL_415;
      }
      if ( System_Linq_Enumerable__Any_object_(
             v227,
             (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
      {
        Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                              v227,
                              0,
                              (const MethodInfo_311DB58 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
        goto LABEL_372;
      }
      Instance = (__int64)v289;
      if ( !v289 )
        goto LABEL_75;
      if ( v289->fields._size <= (int)v174 - v288 )
      {
        v237 = (unsigned int *)*p_memberList;
      }
      else
      {
        Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                              v289,
                              (int)v174 - v288,
                              (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
LABEL_372:
        v236 = (FollowerInfo_o *)Instance;
        v237 = (unsigned int *)*p_memberList;
        if ( Instance )
        {
          v238 = *(_QWORD *)(Instance + 40);
          if ( !v238 )
            goto LABEL_75;
          if ( !*(_DWORD *)(v238 + 24) )
            goto LABEL_425;
          v239 = *(_QWORD *)(v238 + 32);
          if ( !v239 )
            goto LABEL_75;
          v240 = *(_DWORD *)(v239 + 32);
          v241 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34235788(
            v241,
            v174,
            v236,
            v240,
            0,
            setupInfoa,
            questRestrictionInfo,
            0,
            1,
            v278,
            v184,
            0);
          if ( !v237 )
            goto LABEL_75;
          goto LABEL_411;
        }
      }
      v241 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34273464(v241, v174, 0, setupInfoa, questRestrictionInfo, 0, v184, 0);
      if ( !v237 )
        goto LABEL_75;
LABEL_411:
      if ( v241 )
      {
        Instance = sub_1C3E6A0(v241, *(_QWORD *)(*(_QWORD *)v237 + 64LL));
        if ( !Instance )
          goto LABEL_426;
      }
      if ( v174 >= v237[6] )
        goto LABEL_425;
      *(_QWORD *)((char *)v237 + n) = v241;
      sub_1C3E508((CGThumbnailListItem_o *)((char *)v237 + n), (int32_t)v241, v242, v243);
      v175 = v288;
LABEL_415:
      v261 = this->fields.memberList;
      v173 = setupInfoa;
      if ( !v261 )
        goto LABEL_75;
      if ( v174 >= LODWORD(v261->max_length) )
        goto LABEL_425;
      Instance = *(__int64 *)((char *)&v261->obj.klass + n);
      if ( !Instance )
        goto LABEL_75;
      v262 = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                        + v262;
LABEL_368:
      ++v174;
      goto LABEL_283;
    }
    v185 = (unsigned int *)*p_memberList;
    v186 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_34273464(v186, v174, 0, v173, questRestrictionInfo, 1, v184, 0);
    if ( !v185 )
      goto LABEL_75;
    if ( v186 )
    {
      Instance = sub_1C3E6A0(v186, *(_QWORD *)(*(_QWORD *)v185 + 64LL));
      if ( !Instance )
        goto LABEL_426;
    }
    if ( v174 >= v185[6] )
      goto LABEL_425;
    *(_QWORD *)((char *)v185 + n) = v186;
    sub_1C3E508((CGThumbnailListItem_o *)((char *)v185 + n), (int32_t)v186, v187, v188);
    ++v174;
  }
LABEL_419:
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)SvtEquipMax);
  if ( (questRestrictionInfo->fields.isNpcEditablePos
     || !questRestrictionInfo->fields.isNpcOnlyBattle
     || QuestRestrictionInfo__IsExistGrand(questRestrictionInfo, 0))
    && !PartyListViewItem__GetStartDeckCondition(this, v263) )
  {
    *isBaseModify = 1;
  }
}


void PartyListViewItem___ctor_34132488(
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
  int max_length; // w8
  int i; // w19
  ViewWaveEnemyEntity_o *v37; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  int32_t version; // w10
  struct System_Int32_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  struct System_Int32_array *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Int32_array *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  Il2CppObject *v51; // x26
  int32_t v52; // w27
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v54; // w29
  struct DeckServant_o *v55; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v57; // x8
  int32_t initPos; // w26
  UserServantEntity_o *v59; // x28
  struct PartyOrganizationListViewItem_array *v60; // x21
  __int128 v61; // q0
  int64_t v62; // x0
  System_Int64_array *v63; // x20
  struct DeckServant_o *v64; // x8
  struct DeckServantData_array *v65; // x8
  DeckServantData_o *v66; // x8
  System_Int32_array *svtEquipIds; // x25
  PartyOrganizationListViewItem_o *v68; // x29
  int32_t v69; // w2
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

  if ( (byte_4C52649 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C3E564(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C3E564(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    byte_4C52649 = 1;
  }
  entity = 0;
  ListViewItem___ctor_43860152((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v14, v15);
  v16 = questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v18, v19);
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
  v26 = (struct PartyOrganizationListViewItem_array *)sub_1C3E60C(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v24->static_fields->DeckMemberMax);
  this->fields.memberList = v26;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v26, v27, v28);
  v85 = deck;
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  v77 = index;
  if ( questRestrictionInfo )
    v29 = !QuestRestrictionInfo__IsWaveSetupSwitchParty(questRestrictionInfo, 0);
  else
    LOBYTE(v29) = 1;
  v30 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  v31 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v29 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    if ( !*p_questRestrictionInfo )
      goto LABEL_105;
    v32 = (ViewWaveEnemyMaster_o *)Master_object;
    if ( !Master_object )
      goto LABEL_105;
    EntityListFromQuestId = ViewWaveEnemyMaster__GetEntityListFromQuestId(
                              (ViewWaveEnemyMaster_o *)Master_object,
                              (*p_questRestrictionInfo)->fields.questId,
                              0);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
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
          sub_1C3E7C8(Master_object, classId);
        v37 = EntityListFromQuestId->m_Items[i];
        if ( !v37 )
          goto LABEL_105;
        if ( v37->fields.wave == v82 )
        {
          if ( !v30 )
            goto LABEL_105;
          Master_object = System_Collections_Generic_List_int___Contains(
                            v30,
                            v37->fields.classId,
                            (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Master_object & 1) == 0 )
          {
            classId = (unsigned int)v37->fields.classId;
            items = v30->fields._items;
            v39 = Method_System_Collections_Generic_List_int__Add__;
            ++v30->fields._version;
            if ( !items )
              goto LABEL_105;
            size = v30->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v30,
                classId,
                *(const MethodInfo_379843C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v30->fields._size = size + 1;
              items->m_Items[size] = classId;
            }
          }
          if ( (v78 & 1) != 0
            || ReachedWave >= v37->fields.wave
            || (Master_object = ViewWaveEnemyEntity__IsUnknownDispInfo(v37, 0, 0, 0), (Master_object & 1) == 0) )
          {
            if ( !v31 )
              goto LABEL_105;
            Master_object = System_Collections_Generic_List_int___Contains(
                              v31,
                              v37->fields.classId,
                              (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( (Master_object & 1) == 0 )
            {
              classId = (unsigned int)v37->fields.classId;
              version = v31->fields._version;
              v42 = v31->fields._items;
LABEL_42:
              v43 = Method_System_Collections_Generic_List_int__Add__;
              v31->fields._version = version + 1;
              if ( !v42 )
                goto LABEL_105;
              v44 = v31->fields._size;
              if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v31,
                  classId,
                  *(const MethodInfo_379843C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
              }
              else
              {
                v31->fields._size = v44 + 1;
                v42->m_Items[v44] = classId;
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
                              (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( (Master_object & 1) == 0 )
            {
              Master_object = (__int64)WaveBattleWaveEnemyInfoItem_TypeInfo;
              if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
                Master_object = (__int64)WaveBattleWaveEnemyInfoItem_TypeInfo;
              }
              version = v31->fields._version;
              v42 = v31->fields._items;
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
  v45 = System_Collections_Generic_List_int___ToArray(
          v30,
          (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.waveBattleEnemyClassIds = v45;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.waveBattleEnemyClassIds, (int32_t)v45, v46, v47);
  if ( !v31 )
    goto LABEL_105;
  v48 = System_Collections_Generic_List_int___ToArray(
          v31,
          (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.trendDispWaveBattleEnemyClassIds = v48;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.trendDispWaveBattleEnemyClassIds, (int32_t)v48, v49, v50);
  isClearedWave = v82 < restartWave;
  this->fields._IsClearedWave_k__BackingField = v82 < restartWave;
  if ( !v29 )
  {
    this->fields._IsClearedWave_k__BackingField = 0;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v51 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C50AE2 )
    {
      sub_1C3E564(&NetworkManager_TypeInfo);
      byte_4C50AE2 = 1;
    }
    Master_object = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (__int64)NetworkManager_TypeInfo;
    }
    if ( questRestrictionInfo && v51 )
    {
      if ( !UserInterruptionQuestMaster__TryGetEntity(
              (UserInterruptionQuestMaster_o *)v51,
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
    sub_1C3E7C0(Master_object, classId);
  }
LABEL_64:
  Master_object = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Master_object = (__int64)BalanceConfig_TypeInfo;
  }
  v52 = 0;
  v83 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 176LL) * v77;
  while ( 1 )
  {
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (__int64)BalanceConfig_TypeInfo;
    }
    static_fields = *(struct BalanceConfig_StaticFields **)(Master_object + 184);
    if ( v52 >= static_fields->DeckMemberMax )
      break;
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v54 = v83 + v52;
    if ( v52 < static_fields->DeckMainMemberMax )
    {
      v55 = v85->fields.deckInfo;
      if ( !v55 )
        goto LABEL_105;
      svts = v55->fields.svts;
      if ( !svts )
        goto LABEL_105;
      if ( (unsigned int)v54 >= LODWORD(svts->max_length) )
        goto LABEL_106;
      v57 = svts->m_Items[v54];
      if ( !v57 )
        goto LABEL_105;
      initPos = v57->fields.initPos;
    }
    else
    {
      initPos = v52 + 1;
    }
    if ( !v25 )
      goto LABEL_105;
    if ( (unsigned int)v52 >= LODWORD(v25->max_length) )
      goto LABEL_106;
    v59 = v25->m_Items[v52];
    v60 = *p_memberList;
    if ( v59 )
    {
      v61 = *(_OWORD *)&v59->fields.id.fields.fakeValue;
      *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&v59->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v88.fields.fakeValue = v61;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v87 = v88;
      v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v87, 0);
      Master_object = (__int64)UserEventDeckEntity__GetEquipList_43084060(v85, v62, restartWave > 0, 0);
      v63 = (System_Int64_array *)Master_object;
      if ( restartWave < 1 )
      {
        svtEquipIds = 0;
      }
      else
      {
        v64 = v85->fields.deckInfo;
        if ( !v64 )
          goto LABEL_105;
        v65 = v64->fields.svts;
        if ( !v65 )
          goto LABEL_105;
        if ( (unsigned int)v54 >= LODWORD(v65->max_length) )
          goto LABEL_106;
        v66 = v65->m_Items[v54];
        if ( !v66 )
          goto LABEL_105;
        svtEquipIds = v66->fields.svtEquipIds;
      }
      equipSvtIdList = svtEquipIds;
      v16 = questRestrictionInfo;
      v68 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34262368(
        v68,
        v52,
        v59,
        v63,
        setupInfo,
        questRestrictionInfo,
        0,
        initPos,
        equipSvtIdList,
        isClearedWave,
        0,
        0);
      if ( !v60 )
        goto LABEL_105;
    }
    else
    {
      v68 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34273464(v68, v52, 0, setupInfo, v16, 1, initPos, 0);
      if ( !v60 )
        goto LABEL_105;
    }
    if ( v68 )
    {
      Master_object = sub_1C3E6A0(v68, v60->obj.klass->_1.element_class);
      if ( !Master_object )
      {
        v75 = sub_1C3E7E4();
        sub_1C3E68C(v75, 0);
      }
    }
    if ( (unsigned int)v52 >= LODWORD(v60->max_length) )
      goto LABEL_106;
    v71 = &v60->obj.klass + v52;
    v71[4] = (Il2CppClass *)v68;
    sub_1C3E508((CGThumbnailListItem_o *)(v71 + 4), (int32_t)v68, v69, v70);
    v72 = *p_memberList;
    if ( !*p_memberList )
      goto LABEL_105;
    if ( (unsigned int)v52 >= LODWORD(v72->max_length) )
      goto LABEL_106;
    Master_object = (__int64)v72->m_Items[v52];
    if ( !Master_object )
      goto LABEL_105;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)Master_object,
      this->fields.waveBattleEnemyClassIds,
      0);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_105;
    if ( (unsigned int)v52 >= LODWORD(memberList->max_length) )
      goto LABEL_106;
    Master_object = (__int64)memberList->m_Items[v52];
    if ( !Master_object )
      goto LABEL_105;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)Master_object,
                          0)
                      + cost;
    Master_object = (__int64)BalanceConfig_TypeInfo;
    ++v52;
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

  if ( (byte_4C52676 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TryAdd__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___set_Item__);
    sub_1C3E564(&Method_System_ValueTuple_int__bool___ctor__);
    byte_4C52676 = 1;
  }
  v8 = *orderIdx;
  v9 = *userSvtId;
  p_value = (System_ValueTuple_int__bool__o)&value;
  value = 0;
  System_ValueTuple_int__bool____ctor(
    p_value,
    v8,
    0,
    (const MethodInfo_3B0E1C4 *)Method_System_ValueTuple_int__bool___ctor__);
  if ( !duplicationUserSvtIdDictionary )
    sub_1C3E7C0(v11, v12);
  v13 = value;
  if ( !System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____TryAdd(
          duplicationUserSvtIdDictionary,
          v9,
          v13,
          (const MethodInfo_3443E20 *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TryAdd__) )
  {
    v14 = (System_ValueTuple_int__bool__o)(*(_QWORD *)&System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____get_Item(
                                                         duplicationUserSvtIdDictionary,
                                                         *userSvtId,
                                                         (const MethodInfo_3442608 *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___get_Item__)
                                         & 0xFFFFFF00FFFFFFFFLL
                                         | 0x100000000LL);
    System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____set_Item(
      duplicationUserSvtIdDictionary,
      *userSvtId,
      v14,
      (const MethodInfo_3442694 *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___set_Item__);
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

  if ( (byte_4C52678 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_ServantEntity__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C3E564(&System_Func_ServantEntity__int__TypeInfo);
    sub_1C3E564(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C3E564(&Method_System_Nullable_int___ctor__);
    sub_1C3E564(&Method_System_Nullable_int__get_HasValue__);
    sub_1C3E564(&Method_PartyListViewItem___c__CheckAndUpdateDuplicationGrandQuestServant_b__113_0__);
    sub_1C3E564(&PartyListViewItem___c_TypeInfo);
    byte_4C52678 = 1;
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
    _9__113_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_ServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__113_0,
      v7,
      Method_PartyListViewItem___c__CheckAndUpdateDuplicationGrandQuestServant_b__113_0__,
      0);
    static_fields = PartyListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__113_0 = (struct System_Func_ServantEntity__int__o *)_9__113_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__113_0, (int32_t)_9__113_0, v9, v10);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v5,
                                                               (System_Func_TSource__TResult__o *)_9__113_0,
                                                               (const MethodInfo_312F93C *)Method_System_Linq_Enumerable_Select_ServantEntity__int___);
  v12 = System_Linq_Enumerable__ToArray_int_(
          v11,
          (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantMaster___);
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
                                         (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0)
      || (Member = (ServantEntity_o *)ServantEntity__GetNotSamePartyKey(Member, 0), !v12) )
    {
LABEL_50:
      sub_1C3E7C0(Member, v19);
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
        sub_1C3E7C8(Member, v19);
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
                                        (const MethodInfo_33B2F58 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
              (const MethodInfo_38DABE0 *)Method_System_Nullable_int___ctor__);
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

  if ( (byte_4C5265C & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C5265C = 1;
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
    sub_1C3E7C0(questRestrictionInfo, *(_QWORD *)&deckMemberCount);
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

  if ( (byte_4C52674 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderBy_KeyValuePair_long__ValueTuple_int__bool____int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_KeyValuePair_long__ValueTuple_int__bool____long___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_KeyValuePair_long__ValueTuple_int__bool_____);
    sub_1C3E564(&System_Func_KeyValuePair_long__ValueTuple_int__bool____int__TypeInfo);
    sub_1C3E564(&System_Func_KeyValuePair_long__ValueTuple_int__bool____long__TypeInfo);
    sub_1C3E564(&System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__TypeInfo);
    sub_1C3E564(&Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__109_0__);
    sub_1C3E564(&Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__109_1__);
    sub_1C3E564(&Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__109_2__);
    sub_1C3E564(&PartyListViewItem___c_TypeInfo);
    byte_4C52674 = 1;
  }
  userServantEntity = 0;
  equipIdList = 0;
  isChangeFriendShipSvtEquipSkill = 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    v4 = (System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TypeInfo);
    System_Collections_Generic_Dictionary_long__ValueTuple_int__bool_____ctor(
      v4,
      (const MethodInfo_3441CD8 *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____ctor__);
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
                sub_1C3E7C8(Member, v10);
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
      _9__109_0 = (System_Func_KeyValuePair_long__ValueTuple_int__bool____int__o *)sub_1C3E7B0(System_Func_KeyValuePair_long__ValueTuple_int__bool____int__TypeInfo);
      System_Func_KeyValuePair_long__ValueTuple_int__bool____int____ctor(
        _9__109_0,
        v22,
        Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__109_0__,
        0);
      static_fields = PartyListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__109_0 = _9__109_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__109_0, (int32_t)_9__109_0, v24, v25);
    }
    v26 = System_Linq_Enumerable__OrderBy_KeyValuePair_long__ValueTuple_int__bool____int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v4,
            (System_Func_TSource__TKey__o *)_9__109_0,
            (const MethodInfo_3128F40 *)Method_System_Linq_Enumerable_OrderBy_KeyValuePair_long__ValueTuple_int__bool____int___);
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
      _9__109_1 = (System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__o *)sub_1C3E7B0(System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__TypeInfo);
      System_Func_KeyValuePair_long__ValueTuple_int__bool____bool____ctor(
        _9__109_1,
        v30,
        Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__109_1__,
        0);
      v31 = PartyListViewItem___c_TypeInfo->static_fields;
      v31->__9__109_1 = _9__109_1;
      sub_1C3E508((CGThumbnailListItem_o *)&v31->__9__109_1, (int32_t)_9__109_1, v32, v33);
    }
    v34 = System_Linq_Enumerable__Where_KeyValuePair_long__ValueTuple_int__bool___(
            v28,
            (System_Func_TSource__bool__o *)_9__109_1,
            (const MethodInfo_313EC64 *)Method_System_Linq_Enumerable_Where_KeyValuePair_long__ValueTuple_int__bool_____);
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
      _9__109_2 = (System_Func_KeyValuePair_long__ValueTuple_int__bool____long__o *)sub_1C3E7B0(System_Func_KeyValuePair_long__ValueTuple_int__bool____long__TypeInfo);
      System_Func_KeyValuePair_long__ValueTuple_int__bool____long____ctor(
        _9__109_2,
        v38,
        Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__109_2__,
        0);
      v39 = PartyListViewItem___c_TypeInfo->static_fields;
      v39->__9__109_2 = _9__109_2;
      sub_1C3E508((CGThumbnailListItem_o *)&v39->__9__109_2, (int32_t)_9__109_2, v40, v41);
    }
    v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_long__ValueTuple_int__bool____long_(
                                                                 v36,
                                                                 (System_Func_TSource__TResult__o *)_9__109_2,
                                                                 (const MethodInfo_312AE88 *)Method_System_Linq_Enumerable_Select_KeyValuePair_long__ValueTuple_int__bool____long___);
    Member = (QuestRestrictionInfo_o *)System_Linq_Enumerable__ToArray_long_(
                                         v42,
                                         (const MethodInfo_3139160 *)Method_System_Linq_Enumerable_ToArray_long___);
    if ( !this )
LABEL_47:
      sub_1C3E7C0(Member, v10);
    this->fields.duplicatedEquipmentUserSvtIdList = (struct System_Int64_array *)Member;
    p_duplicatedEquipmentUserSvtIdList = &this->fields.duplicatedEquipmentUserSvtIdList;
    sub_1C3E508((CGThumbnailListItem_o *)p_duplicatedEquipmentUserSvtIdList, (int32_t)Member, v43, v44);
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

  if ( (byte_4C52677 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Concat_long___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_long__string___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C3E564(&System_Func_long__string__TypeInfo);
    sub_1C3E564(&long___TypeInfo);
    sub_1C3E564(&Method_System_Tuple_Create_string__bool___);
    sub_1C3E564(&Method_PartyListViewItem___c__DisplayClass112_0__CheckDuplicationGrandServantEquipmentNameList_b__0__);
    sub_1C3E564(&PartyListViewItem___c__DisplayClass112_0_TypeInfo);
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    byte_4C52677 = 1;
  }
  v3 = sub_1C3E7B0(PartyListViewItem___c__DisplayClass112_0_TypeInfo);
  PartyListViewItem___c__DisplayClass112_0___ctor((PartyListViewItem___c__DisplayClass112_0_o *)v3, 0);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !QuestRestrictionInfo__IsExistGrand(questRestrictionInfo, 0) )
    return 0;
  v6 = (System_Int64_array *)sub_1C3E60C(long___TypeInfo, 0);
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
                (const MethodInfo_31164E4 *)Method_System_Linq_Enumerable_Concat_long___);
        v6 = System_Linq_Enumerable__ToArray_long_(
               v14,
               (const MethodInfo_3139160 *)Method_System_Linq_Enumerable_ToArray_long___);
      }
    }
    ++v7;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v6, 0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !v3 )
LABEL_20:
    sub_1C3E7C0(IsNullOrEmpty, v13);
  *(_QWORD *)(v3 + 16) = IsNullOrEmpty;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 16), (int32_t)IsNullOrEmpty, v16, v17);
  v18 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_long__string__TypeInfo);
  System_Func_long__object____ctor(
    v18,
    (Il2CppObject *)v3,
    Method_PartyListViewItem___c__DisplayClass112_0__CheckDuplicationGrandServantEquipmentNameList_b__0__,
    0);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v6,
                                                               (System_Func_TSource__TResult__o *)v18,
                                                               (const MethodInfo_312ECFC *)Method_System_Linq_Enumerable_Select_long__string___);
  v20 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v19,
                                 (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_string___);
  v21 = (Il2CppObject *)System_String__Join((System_String_o *)StringLiteral_43/*"\n"*/, v20, 0);
  return (System_Tuple_string__bool__o *)System_Tuple__Create_object__bool_(
                                           v21,
                                           v8 & 1,
                                           (const MethodInfo_31B14B8 *)Method_System_Tuple_Create_string__bool___);
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

  if ( (byte_4C5264F & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C5264F = 1;
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
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( IsUseOldMaster )
        {
          sortValue2B = IsUseOldMaster->fields.sortValue2B;
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
        sub_1C3E7C0(IsUseOldMaster, method);
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
    sub_1C3E7C8(IsUseOldMaster, method);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.deckName, (int32_t)DefaultDeckName, v4, v5);
}


void PartyListViewItem__ClearEquip(PartyListViewItem_o *this, const MethodInfo *method)
{
  unsigned int i; // w20
  PartyOrganizationListViewItem_o *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w22

  if ( (byte_4C52656 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C52656 = 1;
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
      sub_1C3E7C8(v4, method);
    v4 = memberList->m_Items[i];
    if ( !v4 )
LABEL_15:
      sub_1C3E7C0(v4, method);
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

  if ( (byte_4C52657 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C52657 = 1;
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
      sub_1C3E7C8(v4, method);
    v4 = memberList->m_Items[i];
    if ( !v4 )
LABEL_12:
      sub_1C3E7C0(v4, method);
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
    sub_1C3E7C0(this, *(_QWORD *)&num);
  }
  if ( LODWORD(v7->max_length) <= num )
LABEL_9:
    sub_1C3E7C8(this, *(_QWORD *)&num);
  this = (PartyListViewItem_o *)v7->m_Items[num];
  if ( !this )
    goto LABEL_8;
  PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)this, 0);
  PartyListViewItem__CheckRestriction(v5, v8);
}


void PartyListViewItem__ClearMember_34138316(PartyListViewItem_o *this, const MethodInfo *method)
{
  unsigned int v3; // w20
  PartyOrganizationListViewItem_o *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w22

  if ( (byte_4C52655 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C52655 = 1;
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
      sub_1C3E7C8(v4, method);
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
      sub_1C3E7C0(v4, method);
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

  if ( (byte_4C5264E & 1) == 0 )
  {
    sub_1C3E564(&PartyListViewItem_TypeInfo);
    byte_4C5264E = 1;
  }
  v3 = (PartyListViewItem_o *)sub_1C3E7B0(PartyListViewItem_TypeInfo);
  PartyListViewItem___ctor(v3, v4);
  if ( !v3 )
    sub_1C3E7C0(v5, v6);
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
  if ( (byte_4C52661 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C52661 = 1;
  }
  if ( !item )
LABEL_17:
    sub_1C3E7C0(this, item);
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
      sub_1C3E7C8(this, item);
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
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppObject *v14; // x1
  Il2CppClass **v15; // x0

  if ( (byte_4C52670 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C3E564(&System_Collections_Generic_List_string__TypeInfo);
    byte_4C52670 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_string___ctor__);
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
      sub_1C3E7C8(AssetName, v4);
    v8 = memberList->m_Items[i];
    if ( v8 )
    {
      AssetName = (Il2CppObject *)PartyOrganizationListViewItem__GetAssetName(v8, 0);
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
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v14;
          sub_1C3E508((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
        }
      }
    }
  }
  if ( !v3 )
LABEL_21:
    sub_1C3E7C0(AssetName, v4);
  if ( v3->fields._size < 1 )
    return 0;
  else
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_4C5266F & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    byte_4C5266F = 1;
  }
  v6 = sub_1C3E60C(int___TypeInfo, (unsigned int)typeMax);
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
      sub_1C3E7C0(p_image, v5);
    if ( i >= LODWORD(memberList->max_length) )
LABEL_21:
      sub_1C3E7C8(p_image, v5);
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
  const MethodInfo_37B5190 **v33; // x25
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
  const MethodInfo_37B5190 **v46; // x28
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

  if ( (byte_4C5265F & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C3E564(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C5265F = 1;
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(SvtId, 0) >= 1 )
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v22, 0) >= 1 )
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
        sub_1C3E7C0(DeckConditionServantNumAndPosition, method);
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
          v33 = (const MethodInfo_37B5190 **)&Method_System_Collections_Generic_List_int____get_Item__;
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
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v38, 0) )
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
            DeckConditionServantNumAndPosition = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(
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
                    (const MethodInfo_31241FC *)Method_System_Linq_Enumerable_Intersect_int___);
            v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                         v52,
                                                                         (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
            if ( System_Collections_Generic_List_Int32Enum___get_Item(
                   v68,
                   v44,
                   (const MethodInfo_379A978 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
            {
              DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                             v53,
                                                             (const MethodInfo_31050B8 *)Method_System_Linq_Enumerable_Any_int___);
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
                                                             (const MethodInfo_379A978 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
              v33 = v46;
              if ( (_DWORD)DeckConditionServantNumAndPosition != 2 )
              {
                v43 = 1;
                v31 = v45;
                goto LABEL_136;
              }
              DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                             v53,
                                                             (const MethodInfo_31050B8 *)Method_System_Linq_Enumerable_Any_int___);
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
            v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v69, 0);
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
                  if ( v60 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v70, 0) )
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
          sub_1C3E7C8(DeckConditionServantNumAndPosition, method);
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

  if ( (byte_4C5265D & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C5265D = 1;
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
    sub_1C3E7C0(questRestrictionInfo, v11);
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
      sub_1C3E7C8(questRestrictionInfo, v11);
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

  if ( (byte_4C52664 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C52664 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C3E7B0(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_379CC40 *)Method_System_Collections_Generic_List_long___ctor__);
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
      sub_1C3E7C8(EquipUserSvtId, v5);
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
          *(const MethodInfo_379D494 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
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
    sub_1C3E7C0(EquipUserSvtId, v5);
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_379EF4C *)Method_System_Collections_Generic_List_long__ToArray__);
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
  if ( (byte_4C5266E & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    this = (PartyListViewItem_o *)sub_1C3E564(&EventUpValInfo___TypeInfo);
    byte_4C5266E = 1;
  }
  setupInfo = v6->fields.setupInfo;
  if ( setupInfo )
  {
    setupInfo = (struct EventUpValSetupInfo_o *)setupInfo->fields.eventIdList;
    if ( !setupInfo )
LABEL_23:
      sub_1C3E7C0(this, eventId);
    v8 = *(_QWORD *)&setupInfo->fields.questPhase;
    if ( v8 )
    {
      if ( !(_DWORD)v8 )
LABEL_24:
        sub_1C3E7C8(this, eventId);
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
  v10 = (EventUpValInfo_array *)sub_1C3E60C(EventUpValInfo___TypeInfo, (unsigned int)v9->static_fields->DeckMemberMax);
  *eventUpValList = v10;
  sub_1C3E508((CGThumbnailListItem_o *)eventUpValList, (int32_t)v10, v11, v12);
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

  if ( (byte_4C5264C & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_FollowerInfo___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C3E564(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C3E564(&Method_PartyListViewItem___c__DisplayClass36_0__GetFollowerIndex_b__0__);
    sub_1C3E564(&PartyListViewItem___c__DisplayClass36_0_TypeInfo);
    byte_4C5264C = 1;
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
      (const MethodInfo_3798F10 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v23 = v22;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
             &v23,
             (const MethodInfo_353BE34 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
      if ( !v8 )
        break;
      deckInfo = deck->fields.deckInfo;
      if ( !deckInfo )
        sub_1C3E7C0(v8, v9);
      svts = deckInfo->fields.svts;
      if ( !svts )
        sub_1C3E7C0(v8, v9);
      current = v23.fields._current;
      if ( (unsigned int)(v23.fields._current - 1) >= LODWORD(svts->max_length) )
        sub_1C3E7C8(v8, v9);
      v13 = svts->m_Items[v23.fields._current - 1];
      if ( !v13 )
        sub_1C3E7C0(v8, v9);
      v14 = this->fields.questRestrictionInfo;
      if ( !v14 )
        sub_1C3E7C0(0, v9);
      if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_43497264(v14, v13->fields.initPos, 0) )
        goto LABEL_38;
    }
    current = 0;
LABEL_38:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v23,
      (const MethodInfo_353BE30 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    v18 = (PartyListViewItem___c__DisplayClass36_0_o *)sub_1C3E7B0(PartyListViewItem___c__DisplayClass36_0_TypeInfo);
    PartyListViewItem___c__DisplayClass36_0___ctor(v18, 0);
    if ( v18 )
    {
      v18->fields.chkIndex = current;
      v19 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v19,
        (Il2CppObject *)v18,
        Method_PartyListViewItem___c__DisplayClass36_0__GetFollowerIndex_b__0__,
        0);
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)fixNpcFollowerInfoList,
              (System_Func_T__bool__o *)v19,
              (const MethodInfo_30E2E10 *)Method_BasicHelper_Any_FollowerInfo___) )
        return current;
      goto LABEL_31;
    }
LABEL_39:
    sub_1C3E7C0(questRestrictionInfo, deck);
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

  if ( (byte_4C52675 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_long__string___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C3E564(&System_Func_long__string__TypeInfo);
    sub_1C3E564(&Method_PartyListViewItem___c__DisplayClass110_0__GetGrandQuestDuplicationEquipmentNameList_b__0__);
    sub_1C3E564(&PartyListViewItem___c__DisplayClass110_0_TypeInfo);
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C52675 = 1;
  }
  v3 = sub_1C3E7B0(PartyListViewItem___c__DisplayClass110_0_TypeInfo);
  PartyListViewItem___c__DisplayClass110_0___ctor((PartyListViewItem___c__DisplayClass110_0_o *)v3, 0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.duplicatedEquipmentUserSvtIdList, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !v3 )
    sub_1C3E7C0(Master_object, v6);
  *(_QWORD *)(v3 + 16) = Master_object;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 16), (int32_t)Master_object, v7, v8);
  duplicatedEquipmentUserSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.duplicatedEquipmentUserSvtIdList;
  v10 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_long__string__TypeInfo);
  System_Func_long__object____ctor(
    v10,
    (Il2CppObject *)v3,
    Method_PartyListViewItem___c__DisplayClass110_0__GetGrandQuestDuplicationEquipmentNameList_b__0__,
    0);
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               duplicatedEquipmentUserSvtIdList,
                                                               (System_Func_TSource__TResult__o *)v10,
                                                               (const MethodInfo_312ECFC *)Method_System_Linq_Enumerable_Select_long__string___);
  v12 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v11,
                                 (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_string___);
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
  const MethodInfo_33B5500 **v24; // x24
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
  const MethodInfo_33B5500 **v42; // x27
  PartyListViewItem___c__DisplayClass61_0_c **v43; // x24
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **v44; // x22
  System_Collections_IEnumerator_c **v45; // x26
  QuestRestrictionInfo_o *questRestrictionInfo; // x19
  int32_t v47; // w20
  int32_t v48; // w21
  int32_t v49; // w25
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  __int64 v51; // x1
  _BOOL8 IsRestriction_43476780; // x0
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
  int32_t v69; // w2
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

  if ( (byte_4C5265E & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_BasicHelper_Any_int____78187928);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntityList__);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&long___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserServantGrandEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserServantGrandEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserServantGrandEntity__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&Method_PartyListViewItem___c__DisplayClass61_0__GetGrandServantInfo_b__0__);
    sub_1C3E564(&PartyListViewItem___c__DisplayClass61_0_TypeInfo);
    byte_4C5265E = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    goto LABEL_96;
  list = (System_Collections_ICollection_o *)Master_object->fields.list;
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  v12 = (System_Int64_array *)sub_1C3E60C(long___TypeInfo, (unsigned int)v11->static_fields->GrandSvtEquipMax);
  *equipIdList = v12;
  sub_1C3E508((CGThumbnailListItem_o *)equipIdList, (int32_t)v12, v13, v14);
  *isChangeFriendShipSvtEquipSkill = 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(list, 0);
  if ( !restrictionEntity || IsNullOrEmpty )
    goto LABEL_79;
  v106 = isChangeFriendShipSvtEquipSkill;
  v107 = (CGThumbnailListItem_o *)equipIdList;
  v109 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v109,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
  v108 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v108,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !list )
    goto LABEL_96;
  v18 = Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_334C9A0 *)Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
  v112 = Enumerator;
  if ( !Enumerator )
    sub_1C3E7C0(0, v20);
  v21 = &System_Collections_IEnumerator_TypeInfo;
  v22 = &System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo;
  v23 = &PartyListViewItem___c__DisplayClass61_0_TypeInfo;
  v24 = (const MethodInfo_33B5500 **)&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__;
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
        v30 = sub_1C8ED7C(v25, v27, 0);
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
        v35 = sub_1C8ED7C(v25, v32, 0);
      }
      v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
              v25,
              *(_QWORD *)(v35 + 8));
      v37 = sub_1C3E7B0(*v23);
      PartyListViewItem___c__DisplayClass61_0___ctor((PartyListViewItem___c__DisplayClass61_0_o *)v37, 0);
      if ( !v36 )
        sub_1C3E7C0(v38, v39);
      if ( !v18 )
        sub_1C3E7C0(v38, v39);
      if ( DataMasterBase_object__object__long___TryGetEntity(v18, &entity, *(_QWORD *)(v36 + 32), *v24) )
      {
        if ( !entity )
          sub_1C3E7C0(0, v40);
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
          sub_1C3E7C0(0, v51);
        if ( !questRestrictionInfo )
          sub_1C3E7C0(OverwriteStatus, v51);
        IsRestriction_43476780 = QuestRestrictionInfo__IsRestriction_43476780(
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
        if ( !IsRestriction_43476780 )
        {
          if ( !entity )
            sub_1C3E7C0(IsRestriction_43476780, v53);
          v55 = entity[5].klass;
          monitor = entity[5].monitor;
          v56 = this->fields.questRestrictionInfo;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v118.fields.currentCryptoKey = v55;
          *(_QWORD *)&v118.fields.fakeValue = monitor;
          v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v118, 0);
          if ( !entity )
            sub_1C3E7C0(v57, v58);
          v59 = v57;
          v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(
                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
                  0);
          if ( !entity )
            sub_1C3E7C0(0, v60);
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0);
          if ( !v56 )
            sub_1C3E7C0(DispLimitCount, v63);
          ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(v56, v59, v61, DispLimitCount, 0);
          if ( !v37 )
            sub_1C3E7C0(ServantIndividuality, ServantIndividuality);
          *(_QWORD *)(v37 + 16) = ServantIndividuality;
          sub_1C3E508((CGThumbnailListItem_o *)(v37 + 16), (int32_t)ServantIndividuality, v65, v66);
          v67 = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)restrictionEntity->fields.targetVals, 0);
          if ( (v67 & 1) != 0 )
            break;
          targetVals = restrictionEntity->fields.targetVals;
          if ( !targetVals )
            sub_1C3E7C0(v67, v68);
          if ( !LODWORD(targetVals->max_length) )
            sub_1C3E7C8(v67, v68);
          if ( !targetVals->m_Items[0] )
            break;
          v72 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v72,
            (Il2CppObject *)v37,
            Method_PartyListViewItem___c__DisplayClass61_0__GetGrandServantInfo_b__0__,
            0);
          v67 = BasicHelper__Any_int__51260304(
                  targetVals,
                  (System_Func_T__bool__o *)v72,
                  (const MethodInfo_30E2B90 *)Method_BasicHelper_Any_int____78187928);
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
      v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v115, 0);
      if ( !entity )
        sub_1C3E7C0(v75, v76);
      v77 = entity[2];
      v78 = v75;
      *(Il2CppObject *)&v114.fields.currentCryptoKey = entity[1];
      *(Il2CppObject *)&v114.fields.fakeValue = v77;
      v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v114, 0);
      if ( v78 == v67 )
        break;
    }
    if ( !v109 )
      sub_1C3E7C0(v67, v68);
    items = v109->fields._items;
    v80 = Method_System_Collections_Generic_List_UserServantGrandEntity__Add__;
    ++v109->fields._version;
    if ( !items )
      sub_1C3E7C0(v67, v68);
    size = v109->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v109,
        (Il2CppObject *)v36,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
    }
    else
    {
      v82 = &items->obj.klass + size;
      v109->fields._size = size + 1;
      v82[4] = (Il2CppClass *)v36;
      sub_1C3E508((CGThumbnailListItem_o *)(v82 + 4), v36, v69, v70);
    }
    if ( !v108 )
      sub_1C3E7C0(v83, v84);
    v87 = entity;
    v88 = v108->fields._items;
    v89 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v108->fields._version;
    if ( !v88 )
      sub_1C3E7C0(v83, v87);
    v90 = v108->fields._size;
    if ( (unsigned int)v90 >= LODWORD(v88->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v108,
        v87,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
    }
    else
    {
      v91 = &v88->obj.klass + v90;
      v108->fields._size = v90 + 1;
      v91[4] = (Il2CppClass *)v87;
      sub_1C3E508((CGThumbnailListItem_o *)(v91 + 4), (int32_t)v87, v85, v86);
    }
  }
  EquipUserServantIdList = UserServantGrandEntity__GetEquipUserServantIdList((UserServantGrandEntity_o *)v36, 0);
  v107->klass = (CGThumbnailListItem_c *)EquipUserServantIdList;
  sub_1C3E508(v107, (int32_t)EquipUserServantIdList, v104, v105);
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
      v96 = sub_1C8ED7C(v25, System_IDisposable_TypeInfo, 0);
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
                   (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          *userServantEntity = (UserServantEntity_o *)Item;
          sub_1C3E508((CGThumbnailListItem_o *)userServantEntity, (int32_t)Item, v98, v99);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v109,
                                                                          0,
                                                                          (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_UserServantGrandEntity__get_Item__);
          if ( Master_object )
          {
            v100 = UserServantGrandEntity__GetEquipUserServantIdList((UserServantGrandEntity_o *)Master_object, 0);
            v107->klass = (CGThumbnailListItem_c *)v100;
            sub_1C3E508(v107, (int32_t)v100, v101, v102);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_List_object___get_Item(
                                                                            v109,
                                                                            0,
                                                                            (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_UserServantGrandEntity__get_Item__);
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
        sub_1C3E7C0(Master_object, v9);
      }
    }
LABEL_79:
    *userServantEntity = 0;
    sub_1C3E508((CGThumbnailListItem_o *)userServantEntity, 0, v16, v17);
  }
}


System_Collections_Generic_List_int__o *PartyListViewItem__GetGrandSvtIdListInParty(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v5; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x23
  int max_length; // w8
  unsigned int v8; // w24
  PartyOrganizationListViewItem_o *v9; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4C52672 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C52672 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.questRestrictionInfo )
  {
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_22;
    max_length = memberList->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length )
          sub_1C3E7C8(questRestrictionInfo, v5);
        v9 = memberList->m_Items[v8];
        if ( !v9 )
          break;
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          break;
        questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                                           questRestrictionInfo,
                                                           v9->fields._InitPos_k__BackingField,
                                                           0);
        if ( questRestrictionInfo
          && (v9->fields._IsGrandServant_k__BackingField || v9->fields._IsTempGrandServant_k__BackingField) )
        {
          SvtId = PartyOrganizationListViewItem__get_SvtId(v9, 0);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(
                                                             SvtId,
                                                             0);
          if ( !v3 )
            break;
          items = v3->fields._items;
          v12 = Method_System_Collections_Generic_List_int__Add__;
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
              *(const MethodInfo_379843C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v3->fields._size = size + 1;
            items->m_Items[size] = (int)questRestrictionInfo;
          }
        }
        max_length = memberList->max_length;
        if ( (int)++v8 >= max_length )
          return v3;
      }
LABEL_22:
      sub_1C3E7C0(questRestrictionInfo, v5);
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
  struct PartyOrganizationListViewItem_array *memberList; // x27
  il2cpp_array_size_t max_length; // x8
  UserServantGrandMaster_o *v11; // x21
  unsigned __int64 v12; // x28
  PartyOrganizationListViewItem_o *v13; // x22
  RestrictionEntity_o *GrandServantRestrictionEntity; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  UserServantGrandMaster_o *v16; // x25
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v18; // q1
  int32_t EquipFriendShipSkillChange_k__BackingField; // w24
  System_Int64_array *v20; // x23
  int32_t MasterName_k__BackingField; // w25
  int64_t v22; // x26
  GrandSvtInfo_o *v23; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  _QWORD *v31; // x19
  __int64 v32; // x8
  __int64 v33; // x0
  __int64 v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-80h]

  if ( (byte_4C52673 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Empty_GrandSvtInfo___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&GrandSvtInfo_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_GrandSvtInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GrandSvtInfo__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GrandSvtInfo___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_GrandSvtInfo__TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C52673 = 1;
  }
  if ( oldPartyItem && this->fields.questRestrictionInfo )
  {
    v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_GrandSvtInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_GrandSvtInfo___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UserServantGrandMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_42;
    max_length = memberList->max_length;
    if ( (int)max_length >= 1 )
    {
      v11 = Master_object;
      v12 = 0;
      do
      {
        if ( v12 >= (unsigned int)max_length )
          sub_1C3E7C8(Master_object, v8);
        v13 = memberList->m_Items[v12];
        if ( v13
          && v13->fields.isRestrictionGrandServant
          && (v13->fields._IsGrandServant_k__BackingField || v13->fields._IsTempGrandServant_k__BackingField) )
        {
          Master_object = (UserServantGrandMaster_o *)this->fields.questRestrictionInfo;
          if ( !Master_object )
            goto LABEL_42;
          GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                            (QuestRestrictionInfo_o *)Master_object,
                                            v13->fields._InitPos_k__BackingField,
                                            0);
          SvtId = PartyOrganizationListViewItem__get_SvtId(v13, 0);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          Master_object = (UserServantGrandMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(
                                                        SvtId,
                                                        0);
          if ( !v11 )
            goto LABEL_42;
          Master_object = (UserServantGrandMaster_o *)UserServantGrandMaster__GetEntityFromSvtId(
                                                        v11,
                                                        (int32_t)Master_object,
                                                        0);
          if ( GrandServantRestrictionEntity )
          {
            v16 = Master_object;
            if ( Master_object )
            {
              Master_object = (UserServantGrandMaster_o *)PartyOrganizationListViewItem__GetEquipList(v13, 0);
              userServantEntity = v13->fields.userServantEntity;
              if ( !userServantEntity )
                goto LABEL_42;
              v18 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
              EquipFriendShipSkillChange_k__BackingField = v13->fields._EquipFriendShipSkillChange_k__BackingField;
              v20 = (System_Int64_array *)Master_object;
              MasterName_k__BackingField = (int32_t)v16->fields._MasterName_k__BackingField;
              *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v36.fields.fakeValue = v18;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v35 = v36;
              v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v35, 0);
              v23 = (GrandSvtInfo_o *)sub_1C3E7B0(GrandSvtInfo_TypeInfo);
              GrandSvtInfo___ctor(
                v23,
                MasterName_k__BackingField,
                v22,
                v20,
                EquipFriendShipSkillChange_k__BackingField,
                0);
              if ( !v6 )
                goto LABEL_42;
              items = v6->fields._items;
              v27 = Method_System_Collections_Generic_List_GrandSvtInfo__Add__;
              ++v6->fields._version;
              if ( !items )
                goto LABEL_42;
              size = v6->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v6,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_37B5460 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
              }
              else
              {
                v29 = &items->obj.klass + size;
                v6->fields._size = size + 1;
                v29[4] = (Il2CppClass *)v23;
                sub_1C3E508((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v23, v24, v25);
              }
            }
          }
        }
        LODWORD(max_length) = memberList->max_length;
      }
      while ( (__int64)++v12 < (int)max_length );
    }
    if ( !v6 )
LABEL_42:
      sub_1C3E7C0(Master_object, v8);
    return (GrandSvtInfo_array *)System_Collections_Generic_List_object___ToArray(
                                   v6,
                                   (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_GrandSvtInfo__ToArray__);
  }
  else
  {
    v31 = Method_System_Array_Empty_GrandSvtInfo___;
    v32 = *((_QWORD *)Method_System_Array_Empty_GrandSvtInfo___ + 7);
    if ( !v32 )
    {
      sub_1C8ECD4(Method_System_Array_Empty_GrandSvtInfo___);
      v32 = v31[7];
    }
    v33 = *(_QWORD *)(v32 + 16);
    if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
      v33 = sub_1C8EC78(inited);
    if ( !*(_DWORD *)(v33 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v33);
    v34 = *(_QWORD *)(v31[7] + 16LL);
    if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
      v34 = sub_1C8EC78(inited);
    return **(GrandSvtInfo_array ***)(v34 + 184);
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

  if ( (byte_4C5266D & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&bool___TypeInfo);
    byte_4C5266D = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v5 = sub_1C3E60C(bool___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
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
        sub_1C3E7C0(v6, v4);
      if ( i >= *(unsigned int *)(v5 + 24) )
LABEL_18:
        sub_1C3E7C8(v6, v4);
      *(_BYTE *)(v5 + 32 + i) = v9->fields.isFollower;
    }
  }
  return (System_Boolean_array *)v5;
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
    sub_1C3E7C0(this, *(_QWORD *)&num);
  if ( LODWORD(memberList->max_length) <= num )
    sub_1C3E7C8(this, *(_QWORD *)&num);
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
    sub_1C3E7C0(this, npcSvtIds);
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
        sub_1C3E7C8(myServantNumMax, npcSvtIds);
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

  if ( (byte_4C52660 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C52660 = 1;
  }
  menuKind = this->fields.menuKind;
  if ( menuKind == 1 )
    goto LABEL_4;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( menuKind == 3 )
  {
    if ( !questRestrictionInfo )
LABEL_47:
      sub_1C3E7C0(questRestrictionInfo, method);
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
        questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(
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
          sub_1C3E7C8(questRestrictionInfo, method);
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
  if ( (byte_4C5264D & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_FollowerInfo___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_1C3E564(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_1C3E564(&Method_PartyListViewItem___c__DisplayClass37_0__GetSupportInitIndex_b__0__);
    this = (PartyListViewItem_o *)sub_1C3E564(&PartyListViewItem___c__DisplayClass37_0_TypeInfo);
    byte_4C5264D = 1;
  }
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_15:
    sub_1C3E7C0(this, fixNpcFollowerInfoList);
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
      v10 = (PartyListViewItem___c__DisplayClass37_0_o *)sub_1C3E7B0(PartyListViewItem___c__DisplayClass37_0_TypeInfo);
      PartyListViewItem___c__DisplayClass37_0___ctor(v10, 0);
      if ( !v10 )
        goto LABEL_15;
      v10->fields.chkIdx = ++v8;
      v11 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v11,
        (Il2CppObject *)v10,
        Method_PartyListViewItem___c__DisplayClass37_0__GetSupportInitIndex_b__0__,
        0);
      v12 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)fixNpcFollowerInfoList,
              (System_Func_TSource__bool__o *)v11,
              (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      if ( !System_Linq_Enumerable__Any_object_(
              v12,
              (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
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
  const MethodInfo *v6; // x3
  unsigned int *v7; // x20
  unsigned __int64 v8; // x24
  CGThumbnailListItem_o *i; // x21
  BalanceConfig_c *v10; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v12; // x8
  CGThumbnailListItem_c *servantEntity; // x22
  __int64 v15; // x0

  if ( (byte_4C5266B & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&ServantEntity___TypeInfo);
    byte_4C5266B = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v7 = (unsigned int *)sub_1C3E60C(ServantEntity___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
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
        sub_1C3E7C0(v10, v4);
      servantEntity = (CGThumbnailListItem_c *)v12->fields.servantEntity;
      if ( servantEntity )
      {
        v10 = (BalanceConfig_c *)sub_1C3E6A0(servantEntity, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
        if ( !v10 )
        {
          v15 = sub_1C3E7E4();
          sub_1C3E68C(v15, 0);
        }
      }
      if ( v8 >= v7[6] )
LABEL_20:
        sub_1C3E7C8(v10, v4);
      i->klass = servantEntity;
      sub_1C3E508(i, (int32_t)servantEntity, v5, v6);
    }
    ++v8;
  }
  return (ServantEntity_array *)v7;
}


System_String_array *PartyListViewItem__GetSvtNameList(PartyListViewItem_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  unsigned __int64 v6; // x23
  CGThumbnailListItem_o *i; // x21
  CGThumbnailListItem_c *SvtNameText; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C5266C & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    byte_4C5266C = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v5 = sub_1C3E60C(string___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  v6 = 0;
  for ( i = (CGThumbnailListItem_o *)(v5 + 32); ; i = (CGThumbnailListItem_o *)((char *)i + 8) )
  {
    SvtNameText = (CGThumbnailListItem_c *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      SvtNameText = (CGThumbnailListItem_c *)BalanceConfig_TypeInfo;
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
      SvtNameText = (CGThumbnailListItem_c *)PartyOrganizationListViewItem__get_SvtNameText(v10, 0);
      if ( !v5 )
LABEL_17:
        sub_1C3E7C0(SvtNameText, v4);
      if ( v6 >= *(unsigned int *)(v5 + 24) )
LABEL_18:
        sub_1C3E7C8(SvtNameText, v4);
      i->klass = SvtNameText;
      sub_1C3E508(i, (int32_t)SvtNameText, v11, v12);
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

  if ( (byte_4C52669 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C52669 = 1;
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
      sub_1C3E7C8(Entity, method);
    v7 = memberList->m_Items[v3];
    if ( !v7 )
LABEL_22:
      sub_1C3E7C0(Entity, method);
    userServantEntity = (int64_t)v7->fields.userServantEntity;
    if ( userServantEntity )
    {
      if ( !v7->fields._IsDisappearSvt_k__BackingField )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantMaster___);
        v11 = *(_OWORD *)(userServantEntity + 16);
        v10 = *(_OWORD *)(userServantEntity + 32);
        v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        *(_OWORD *)&v17.fields.currentCryptoKey = v11;
        *(_OWORD *)&v17.fields.fakeValue = v10;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v16 = v17;
        Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v16, 0);
        if ( !v12 )
          goto LABEL_22;
        Entity = (int64_t)DataMasterBase_object__object__long___GetEntity(
                            v12,
                            Entity,
                            (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
  if ( (byte_4C52666 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (PartyListViewItem_o *)sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C52666 = 1;
  }
  if ( userSvtId < 1 )
    return 0;
  memberList = v4->fields.memberList;
  if ( !memberList )
LABEL_38:
    sub_1C3E7C0(this, userSvtId);
  v6 = 0;
  while ( 1 )
  {
    max_length = memberList->max_length;
    if ( (int)v6 >= (int)max_length )
      return 0;
    if ( v6 >= max_length )
LABEL_39:
      sub_1C3E7C8(this, userSvtId);
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
                                        (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
        if ( !this )
          goto LABEL_38;
        v12 = *(_OWORD *)&this->fields.sortValue0;
        *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&this->fields.selectNum;
        *(_OWORD *)&v21.fields.fakeValue = v12;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v20 = v21;
        this = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v20, 0);
        if ( this )
        {
          this = (PartyListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                          equipUserServantEntityList,
                                          v11,
                                          (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !this )
            goto LABEL_38;
          v13 = *(_OWORD *)&this->fields.sortValue0;
          *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&this->fields.selectNum;
          *(_OWORD *)&v21.fields.fakeValue = v13;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v19 = v21;
          this = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v19, 0);
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(SvtId, 0);
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
  if ( (byte_4C52667 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C52667 = 1;
  }
  if ( svtId >= 1 )
  {
    memberList = v4->fields.memberList;
    if ( !memberList )
LABEL_14:
      sub_1C3E7C0(this, *(_QWORD *)&svtId);
    v6 = 0;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
        sub_1C3E7C8(this, *(_QWORD *)&svtId);
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
        this = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(EquipSvtId, 0);
        if ( (_DWORD)this == svtId )
        {
          v12 = PartyOrganizationListViewItem__get_SvtId(v9, 0);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v12, 0);
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
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  _DWORD *v35; // x0
  __int64 v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+40h] [xbp-80h]

  if ( (byte_4C52662 & 1) == 0 )
  {
    sub_1C3E564(&DeckServantData_TypeInfo);
    sub_1C3E564(&DeckServant_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&UserDeckEntity_TypeInfo);
    byte_4C52662 = 1;
  }
  v5 = sub_1C3E7B0(UserDeckEntity_TypeInfo);
  UserDeckEntity___ctor((UserDeckEntity_o *)v5, 0);
  if ( !v5 )
    goto LABEL_29;
  *(_QWORD *)(v5 + 16) = this->fields.id;
  *(_DWORD *)(v5 + 32) = this->fields.index + 1;
  deckName = this->fields.deckName;
  *(_QWORD *)(v5 + 40) = deckName;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 40), (int32_t)deckName, v8, v9);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_29;
  v12 = baseItem ? baseItem : this;
  max_length = memberList->max_length;
  userEquipId = v12->fields.userEquipId;
  v15 = (DeckServant_o *)sub_1C3E7B0(DeckServant_TypeInfo);
  DeckServant___ctor_41746224(v15, max_length, userEquipId, 0);
  *(_QWORD *)(v5 + 48) = v15;
  v16 = v5 + 48;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 48), (int32_t)v15, v17, v18);
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
      v24 = sub_1C3E7B0(DeckServantData_TypeInfo);
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
      *(_QWORD *)(v24 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v39, 0);
      *(_BYTE *)(v24 + 56) = v23->fields.isFollower;
      EquipList = PartyOrganizationListViewItem__GetEquipList(v23, 0);
      *(_QWORD *)(v24 + 40) = EquipList;
      sub_1C3E508((CGThumbnailListItem_o *)(v24 + 40), (int32_t)EquipList, v28, v29);
      *(_DWORD *)(v24 + 76) = v23->fields._InitPos_k__BackingField;
      if ( !*(_QWORD *)v16 )
        break;
      v30 = *(_DWORD **)(*(_QWORD *)v16 + 16LL);
      if ( !v30 )
        break;
      v31 = sub_1C3E6A0(v24, *(_QWORD *)(*(_QWORD *)v30 + 64LL));
      if ( !v31 )
      {
        v38 = sub_1C3E7E4();
        sub_1C3E68C(v38, 0);
      }
      if ( (unsigned int)(v22 - 1) < v30[6] )
      {
        v35 = &v30[2 * v21];
        *((_QWORD *)v35 + 4) = v24;
        sub_1C3E508((CGThumbnailListItem_o *)(v35 + 8), v24, v33, v34);
        if ( (_DWORD)v20 == v22 )
          return (UserDeckEntity_o *)v5;
        v21 = v22;
        if ( (unsigned int)v22++ < LODWORD(v19->max_length) )
          continue;
      }
      sub_1C3E7C8(v31, v32);
    }
LABEL_29:
    sub_1C3E7C0(v6, v7);
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
  struct PartyOrganizationListViewItem_array *v14; // x8
  unsigned __int64 v15; // x28
  unsigned __int64 max_length_low; // x9
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  PartyOrganizationListViewItem_o *v18; // x22
  struct QuestRestrictionInfo_o *v19; // x8
  _BOOL4 isNpcEditablePos; // w23
  _BOOL4 IsEditablePos; // w0
  __int64 v22; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v24; // q0
  System_Int64_array *EquipList; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t InitPos_k__BackingField; // w8
  int v29; // w8
  unsigned int *v30; // x22
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  unsigned int *v33; // x0
  __int64 v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37[2]; // [xsp+20h] [xbp-A0h] BYREF

  if ( (byte_4C52663 & 1) == 0 )
  {
    sub_1C3E564(&DeckServantData_TypeInfo);
    sub_1C3E564(&DeckServant_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&UserEventDeckEntity_TypeInfo);
    byte_4C52663 = 1;
  }
  memset(&v37[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v3 = sub_1C3E7B0(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor((UserEventDeckEntity_o *)v3, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
  v8 = (DeckServant_o *)sub_1C3E7B0(DeckServant_TypeInfo);
  max_length = memberList->max_length;
  v10 = v8;
  DeckServant___ctor_41746224(v8, max_length, userEquipId, 0);
  *(_QWORD *)(v3 + 32) = v10;
  v11 = v3 + 32;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)v10, v12, v13);
  v14 = this->fields.memberList;
  if ( !v14 )
LABEL_55:
    sub_1C3E7C0(IsUseOldMaster, v4);
  v15 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v14->max_length);
    if ( (__int64)v15 >= (int)max_length_low )
      return (UserEventDeckEntity_o *)v3;
    if ( v15 >= max_length_low )
      goto LABEL_56;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v18 = v14->m_Items[v15];
    if ( !questRestrictionInfo )
    {
      isNpcEditablePos = 0;
      goto LABEL_28;
    }
    IsUseOldMaster = (NetworkManager_c *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
    v19 = this->fields.questRestrictionInfo;
    if ( ((unsigned __int8)IsUseOldMaster & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_55;
      isNpcEditablePos = v19->fields.isNpcEditablePos;
    }
    else
    {
      if ( !v18 || !v19 )
        goto LABEL_55;
      IsEditablePos = QuestRestrictionInfo__IsEditablePos(
                        this->fields.questRestrictionInfo,
                        v18->fields._InitPos_k__BackingField,
                        0);
      v19 = this->fields.questRestrictionInfo;
      isNpcEditablePos = IsEditablePos;
      if ( !v19 )
        goto LABEL_28;
    }
    IsUseOldMaster = (NetworkManager_c *)QuestRestrictionInfo__IsNpcMulitipleOrOnly(v19, 0);
    if ( ((unsigned __int8)IsUseOldMaster & 1) != 0 )
    {
      if ( !v18 )
        goto LABEL_55;
      if ( v18->fields.isFixNpc
        && v18->fields.isFollower
        && !isNpcEditablePos
        && !v18->fields.isMyServantOrNpcRestriction )
      {
        ++v15;
        goto LABEL_51;
      }
    }
LABEL_28:
    v22 = sub_1C3E7B0(DeckServantData_TypeInfo);
    DeckServantData___ctor((DeckServantData_o *)v22, 0);
    if ( !v22 )
      goto LABEL_55;
    *(_DWORD *)(v22 + 16) = v15 + 1;
    if ( !v18 )
      goto LABEL_55;
    userServantEntity = v18->fields.userServantEntity;
    if ( userServantEntity )
    {
      v24 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v37[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v37[1].fields.fakeValue = v24;
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
    *(_QWORD *)(v22 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v36, 0);
    *(_BYTE *)(v22 + 56) = v18->fields.isFollower;
    EquipList = PartyOrganizationListViewItem__GetEquipList(v18, 0);
    *(_QWORD *)(v22 + 40) = EquipList;
    sub_1C3E508((CGThumbnailListItem_o *)(v22 + 40), (int32_t)EquipList, v26, v27);
    InitPos_k__BackingField = v18->fields._InitPos_k__BackingField;
    *(_QWORD *)(v22 + 64) = 0;
    *(_DWORD *)(v22 + 76) = InitPos_k__BackingField;
    if ( *(_QWORD *)(v22 + 24) )
    {
      v29 = 0;
LABEL_43:
      if ( (isNpcEditablePos & v29 & 1) != 0 )
      {
        *(_QWORD *)(v22 + 64) = v18->fields.npcFollowerSvtId;
        if ( v18->fields.isFixNpc )
          *(_BYTE *)(v22 + 56) = 0;
      }
      goto LABEL_46;
    }
    if ( !v18->fields.isMyServantOrNpcRestriction || !v18->fields.isFollower )
    {
      v29 = !v18->fields.isMyServantOrNpcRestriction;
      goto LABEL_43;
    }
    *(_QWORD *)(v22 + 64) = v18->fields.npcFollowerSvtId;
LABEL_46:
    *(_DWORD *)(v22 + 80) = v18->fields._EquipFriendShipSkillChange_k__BackingField;
    if ( !*(_QWORD *)v11 )
      goto LABEL_55;
    v30 = *(unsigned int **)(*(_QWORD *)v11 + 16LL);
    if ( !v30 )
      goto LABEL_55;
    IsUseOldMaster = (NetworkManager_c *)sub_1C3E6A0(v22, *(_QWORD *)(*(_QWORD *)v30 + 64LL));
    if ( !IsUseOldMaster )
    {
      v35 = sub_1C3E7E4();
      sub_1C3E68C(v35, 0);
    }
    if ( v15 >= v30[6] )
LABEL_56:
      sub_1C3E7C8(IsUseOldMaster, v4);
    v33 = &v30[2 * v15];
    *((_QWORD *)v33 + 4) = v22;
    sub_1C3E508((CGThumbnailListItem_o *)(v33 + 8), v22, v31, v32);
    ++v15;
LABEL_51:
    v14 = this->fields.memberList;
    if ( !v14 )
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

  if ( (byte_4C5264B & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C5264B = 1;
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
        sub_1C3E7C0(v6, userServantList);
      if ( i >= LODWORD(npcSvtIds->max_length) )
LABEL_17:
        sub_1C3E7C8(v6, userServantList);
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

  if ( (byte_4C52665 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int__TryAdd__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    byte_4C52665 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v9,
    (const MethodInfo_3402FC0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( userSvtId >= 1 )
  {
    memberList = this->fields.memberList;
    if ( !memberList )
LABEL_21:
      sub_1C3E7C0(EquipList, v11);
    v13 = 0;
    v14 = (unsigned int)editEquipIndex;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( v13 >= max_length )
        break;
      if ( v13 >= (unsigned int)max_length )
LABEL_23:
        sub_1C3E7C8(EquipList, v11);
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
                                                        (const MethodInfo_3405084 *)Method_System_Collections_Generic_Dictionary_int__int__TryAdd__);
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

  if ( (byte_4C5265A & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C5265A = 1;
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
      sub_1C3E7C8(v3, method);
    v8 = memberList->m_Items[v5];
    if ( !v8 )
LABEL_12:
      sub_1C3E7C0(v3, method);
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

  if ( (byte_4C52659 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C52659 = 1;
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
      sub_1C3E7C8(v3, method);
    v6 = memberList->m_Items[i];
    if ( !v6 )
LABEL_15:
      sub_1C3E7C0(v3, method);
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

  if ( (byte_4C52671 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C52671 = 1;
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
      sub_1C3E7C0(v3, method);
    if ( i >= (unsigned __int64)LODWORD(memberList->max_length) )
      sub_1C3E7C8(v3, method);
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

  if ( (byte_4C5265B & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C5265B = 1;
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
      sub_1C3E7C8(v4, method);
    v4 = memberList->m_Items[v5];
    if ( !v4 )
LABEL_12:
      sub_1C3E7C0(v4, method);
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
  if ( (byte_4C52668 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C52668 = 1;
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
          sub_1C3E7C8(this, *(_QWORD *)&svtId);
        this = (PartyListViewItem_o *)memberList->m_Items[v7];
        if ( !this )
          break;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)this, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(EquipSvtId, 0) == svtId;
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
      sub_1C3E7C0(this, *(_QWORD *)&svtId);
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
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v26; // x1
  __int64 v27; // x23
  System_Func_object__bool__o *v28; // x25

  if ( (byte_4C5264A & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_BasicHelper_Any_FollowerInfo____78187856);
    sub_1C3E564(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_1C3E564(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_1C3E564(&Method_PartyListViewItem___c__IsNeedDeckPosReset_b__33_0__);
    sub_1C3E564(&Method_PartyListViewItem___c__DisplayClass33_0__IsNeedDeckPosReset_b__1__);
    sub_1C3E564(&PartyListViewItem___c__DisplayClass33_0_TypeInfo);
    sub_1C3E564(&PartyListViewItem___c_TypeInfo);
    byte_4C5264A = 1;
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
  questRestrictionInfo = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v8 = this->fields.questRestrictionInfo;
  if ( !v8 || !questRestrictionInfo )
LABEL_43:
    sub_1C3E7C0(questRestrictionInfo, deck);
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
    _9__33_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_FollowerInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__33_0, v12, Method_PartyListViewItem___c__IsNeedDeckPosReset_b__33_0__, 0);
    static_fields = PartyListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__33_0 = (struct System_Func_FollowerInfo__bool__o *)_9__33_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__33_0, (int32_t)_9__33_0, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          QuestFollowerList,
          (System_Func_TSource__bool__o *)_9__33_0,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
  v6 = System_Linq_Enumerable__ToArray_object_(
         v16,
         (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
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
    v21 = sub_1C3E7B0(PartyListViewItem___c__DisplayClass33_0_TypeInfo);
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
      sub_1C3E7C8(questRestrictionInfo, deck);
    if ( !v21 )
      goto LABEL_43;
    v26 = svts->m_Items[i];
    *(_QWORD *)(v21 + 16) = v26;
    v27 = v21 + 16;
    sub_1C3E508((CGThumbnailListItem_o *)(v21 + 16), (int32_t)v26, v22, v23);
    if ( IsUseOldMaster )
    {
      if ( !v6
        || (v28 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_FollowerInfo__bool__TypeInfo),
            System_Func_object__bool____ctor(
              v28,
              (Il2CppObject *)v21,
              Method_PartyListViewItem___c__DisplayClass33_0__IsNeedDeckPosReset_b__1__,
              0),
            questRestrictionInfo = (QuestRestrictionInfo_o *)BasicHelper__Any_object__51261116(
                                                               v6,
                                                               (System_Func_T__bool__o *)v28,
                                                               (const MethodInfo_30E2EBC *)Method_BasicHelper_Any_FollowerInfo____78187856),
            ((unsigned __int8)questRestrictionInfo & 1) != 0) )
      {
        if ( !*(_QWORD *)v27 )
          goto LABEL_43;
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_43;
        questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_43497264(
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


bool PartyListViewItem__IsSpecificMenuKind_34082916(int32_t menuKind, bool isEventDeck, const MethodInfo *method)
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

  if ( (byte_4C52658 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C52658 = 1;
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
    sub_1C3E7C8(v4, method);
  v4 = memberList->m_Items[0];
  if ( !v4 )
LABEL_16:
    sub_1C3E7C0(v4, method);
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v4, 0);
  PartyListViewItem__CheckRestriction(this, v7);
}


void PartyListViewItem__Modify(PartyListViewItem_o *this, const MethodInfo *method)
{
  int32_t v3; // w8
  int i; // w22
  BalanceConfig_c *v5; // x0
  int32_t v6; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v8; // x8
  PartyOrganizationListViewItem_o *v9; // x20
  PartyOrganizationListViewItem_o *v10; // x0
  int32_t cost; // w23
  const MethodInfo *v12; // x1

  if ( (byte_4C52650 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C52650 = 1;
  }
  v3 = 0;
  for ( i = 1; ; ++i )
  {
    this->fields.cost = v3;
    v5 = BalanceConfig_TypeInfo;
    v6 = i - 1;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = BalanceConfig_TypeInfo;
    }
    if ( v6 >= v5->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_12;
    if ( (unsigned int)v6 >= LODWORD(memberList->max_length) )
      sub_1C3E7C8(v5, method);
    v8 = &memberList->obj.klass + v6;
    v9 = (PartyOrganizationListViewItem_o *)v8[4];
    if ( !v9 )
LABEL_12:
      sub_1C3E7C0(v5, method);
    v10 = (PartyOrganizationListViewItem_o *)v8[4];
    v9->fields._NowPos_k__BackingField = i;
    PartyOrganizationListViewItem__Modify(v10, 0);
    cost = this->fields.cost;
    v3 = PartyOrganizationListViewItem__get_MargeCost(v9, 0) + cost;
  }
  PartyListViewItem__CheckRestriction(this, method);
  PartyListViewItem__UpdateEventEffect(this, v12);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int v15; // w23
  unsigned int v16; // w24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v18; // x26
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  PartyOrganizationListViewItem_o *v21; // x21
  Il2CppClass **v22; // x0
  struct PartyOrganizationListViewItem_array *v23; // x8
  PartyOrganizationListViewItem_o *v24; // x8
  struct System_String_o *deckName; // x1
  struct System_Int32_array *waveBattleEnemyClassIds; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Int32_array *trendDispWaveBattleEnemyClassIds; // x1
  struct System_Int32_array **p_trendDispWaveBattleEnemyClassIds; // x20
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x0

  if ( (byte_4C52651 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C52651 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0);
  if ( !item )
LABEL_20:
    sub_1C3E7C0(v5, v6);
  *(_QWORD *)&this->fields.menuKind = *(_QWORD *)&item->fields.menuKind;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v7, v8);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v11, v12);
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
    v21 = v5;
    if ( v5 )
    {
      v5 = (PartyOrganizationListViewItem_o *)sub_1C3E6A0(v5, v18->obj.klass->_1.element_class);
      if ( !v5 )
      {
        v33 = sub_1C3E7E4();
        sub_1C3E68C(v33, 0);
      }
    }
    if ( v16 >= LODWORD(v18->max_length) )
      goto LABEL_21;
    v22 = &v18->obj.klass + (int)v16;
    v22[4] = (Il2CppClass *)v21;
    sub_1C3E508((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v21, v19, v20);
    v23 = this->fields.memberList;
    if ( !v23 )
      goto LABEL_20;
    if ( v16 >= LODWORD(v23->max_length) )
LABEL_21:
      sub_1C3E7C8(v5, v6);
    v24 = v23->m_Items[v16];
    if ( !v24 )
      goto LABEL_20;
    v24->fields._NowPos_k__BackingField = v15++;
  }
  this->fields.cost = item->fields.cost;
  this->fields.isDeckNameDefault = item->fields.isDeckNameDefault;
  deckName = item->fields.deckName;
  this->fields.deckName = deckName;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.deckName, (int32_t)deckName, v13, v14);
  this->fields.userEquipId = item->fields.userEquipId;
  waveBattleEnemyClassIds = item->fields.waveBattleEnemyClassIds;
  this->fields.waveBattleEnemyClassIds = waveBattleEnemyClassIds;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.waveBattleEnemyClassIds,
    (int32_t)waveBattleEnemyClassIds,
    v27,
    v28);
  trendDispWaveBattleEnemyClassIds = item->fields.trendDispWaveBattleEnemyClassIds;
  this->fields.trendDispWaveBattleEnemyClassIds = trendDispWaveBattleEnemyClassIds;
  p_trendDispWaveBattleEnemyClassIds = &this->fields.trendDispWaveBattleEnemyClassIds;
  sub_1C3E508(
    (CGThumbnailListItem_o *)p_trendDispWaveBattleEnemyClassIds,
    (int32_t)trendDispWaveBattleEnemyClassIds,
    v31,
    v32);
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
  sub_1C3E508((CGThumbnailListItem_o *)p_deckName, (int32_t)v3, v7, v8);
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

  if ( (byte_4C52652 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C52652 = 1;
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
      sub_1C3E7C8(v10, *(_QWORD *)&num);
    v12 = &memberList->obj.klass + i;
    v13 = (PartyOrganizationListViewItem_o *)v12[4];
    if ( !v13 )
LABEL_15:
      sub_1C3E7C0(v10, *(_QWORD *)&num);
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

  if ( (byte_4C52653 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    byte_4C52653 = 1;
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
      sub_1C3E7C8(v10, *(_QWORD *)&num);
    v12 = &memberList->obj.klass + i;
    v13 = (PartyOrganizationListViewItem_o *)v12[4];
    if ( !v13 )
LABEL_14:
      sub_1C3E7C0(v10, *(_QWORD *)&num);
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
    sub_1C3E7C0(this, *(_QWORD *)&num);
  }
  if ( LODWORD(v12->max_length) <= num )
LABEL_12:
    sub_1C3E7C8(this, *(_QWORD *)&num);
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
    || (PartyOrganizationListViewItem__Modify_34280808((PartyOrganizationListViewItem_o *)this, item, 0),
        (v10 = v6->fields.memberList) == 0) )
  {
LABEL_11:
    sub_1C3E7C0(this, *(_QWORD *)&num);
  }
  if ( LODWORD(v10->max_length) <= num )
LABEL_12:
    sub_1C3E7C8(this, *(_QWORD *)&num);
  this = (PartyListViewItem_o *)v10->m_Items[num];
  if ( !this )
    goto LABEL_11;
  v11 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0) + v11;
  PartyListViewItem__CheckRestriction(v6, v12);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewItem__SetMember_34147804(
        PartyListViewItem_o *this,
        int32_t idx,
        PartyOrganizationListViewItem_o *member,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v6; // x19
  int32_t cost; // w24
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct PartyOrganizationListViewItem_array *v11; // x23
  Il2CppClass **v12; // x0
  struct PartyOrganizationListViewItem_array *v13; // x8
  struct PartyOrganizationListViewItem_array *v14; // x8
  int32_t v15; // w20
  __int64 v16; // x0

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
        v11 = v6->fields.memberList,
        v6->fields.cost = cost - (_DWORD)this,
        !v11) )
  {
LABEL_17:
    sub_1C3E7C0(this, *(_QWORD *)&idx);
  }
  if ( member )
  {
    this = (PartyListViewItem_o *)sub_1C3E6A0(member, v11->obj.klass->_1.element_class);
    if ( !this )
    {
      v16 = sub_1C3E7E4();
      sub_1C3E68C(v16, 0);
    }
  }
  if ( LODWORD(v11->max_length) <= idx )
    goto LABEL_18;
  v12 = &v11->obj.klass + idx;
  v12[4] = (Il2CppClass *)member;
  sub_1C3E508((CGThumbnailListItem_o *)(v12 + 4), (int32_t)member, v9, v10);
  if ( v6->fields.menuKind == 9 )
  {
    v13 = v6->fields.memberList;
    if ( !v13 )
      goto LABEL_17;
    if ( LODWORD(v13->max_length) <= idx )
      goto LABEL_18;
    this = (PartyListViewItem_o *)v13->m_Items[idx];
    if ( !this )
      goto LABEL_17;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)this,
      v6->fields.waveBattleEnemyClassIds,
      0);
  }
  v14 = v6->fields.memberList;
  if ( !v14 )
    goto LABEL_17;
  if ( LODWORD(v14->max_length) <= idx )
LABEL_18:
    sub_1C3E7C8(this, *(_QWORD *)&idx);
  this = (PartyListViewItem_o *)v14->m_Items[idx];
  if ( !this )
    goto LABEL_17;
  v15 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0) + v15;
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
  const MethodInfo *v24; // x3
  bool isWhole; // [xsp+Ch] [xbp-64h] BYREF

  isWhole = 0;
  if ( !npcFollowerInfoList )
LABEL_19:
    sub_1C3E7C0(this, follower);
  max_length = npcFollowerInfoList->max_length;
  v9 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = this;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1C3E7C8(this, follower);
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
        this = (PartyListViewItem_o *)QuestRestrictionInfo__IsRestriction_43478292(
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
          this = (PartyListViewItem_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_43500308(
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
    sub_1C3E508((CGThumbnailListItem_o *)follower, (int32_t)v15, v23, v24);
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
  const MethodInfo *v18; // x3
  Il2CppClass **v19; // x0
  const MethodInfo *v20; // x1
  __int64 v21; // x0

  if ( (byte_4C52654 & 1) == 0 )
  {
    sub_1C3E564(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C52654 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance
    || (PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, initPos, follower, 0),
        memberList = this->fields.memberList,
        setupInfo = this->fields.setupInfo,
        questRestrictionInfo = this->fields.questRestrictionInfo,
        v16 = (PartyOrganizationListViewItem_o *)sub_1C3E7B0(PartyOrganizationListViewItem_TypeInfo),
        PartyOrganizationListViewItem___ctor_34235788(
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
    sub_1C3E7C0(Instance, v12);
  }
  if ( v16 )
  {
    Instance = (Il2CppObject *)sub_1C3E6A0(v16, memberList->obj.klass->_1.element_class);
    if ( !Instance )
    {
      v21 = sub_1C3E7E4();
      sub_1C3E68C(v21, 0);
    }
  }
  if ( LODWORD(memberList->max_length) <= num )
    sub_1C3E7C8(Instance, v12);
  v19 = &memberList->obj.klass + num;
  v19[4] = (Il2CppClass *)v16;
  sub_1C3E508((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v16, v17, v18);
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
    sub_1C3E7C8(this, *(_QWORD *)&num1);
  this = (PartyListViewItem_o *)memberList->m_Items[num1];
  if ( !this )
LABEL_7:
    sub_1C3E7C0(this, *(_QWORD *)&num1);
  PartyOrganizationListViewItem__Swap(
    (PartyOrganizationListViewItem_o *)this,
    memberList->m_Items[num2],
    notChangeInitPos,
    0);
}


void PartyListViewItem__UpdateEventEffect(PartyListViewItem_o *this, const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x19
  int max_length; // w8
  unsigned int v4; // w20

  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_9;
  max_length = memberList->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
        sub_1C3E7C8(this, method);
      this = (PartyListViewItem_o *)memberList->m_Items[v4];
      if ( !this )
        break;
      PartyOrganizationListViewItem__UpdateEventEffect((PartyOrganizationListViewItem_o *)this, 0);
      max_length = memberList->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1C3E7C0(this, method);
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
        sub_1C3E7C8(this, method);
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
    sub_1C3E7C0(this, method);
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

  if ( (byte_4C5266A & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_10261/*"PARTY_ORGANIZATION_NAME_BASE"*/);
    byte_4C5266A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_10261/*"PARTY_ORGANIZATION_NAME_BASE"*/, 0);
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

  if ( (byte_4C52679 & 1) == 0 )
  {
    sub_1C3E564(&PartyListViewItem___c_TypeInfo);
    byte_4C52679 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(PartyListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PartyListViewItem___c_TypeInfo->static_fields->__9 = (struct PartyListViewItem___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)PartyListViewItem___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C5267D & 1) == 0 )
  {
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C5267D = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49004136(v8, 0);
}


int32_t PartyListViewItem___c___CheckDuplicationGrandQuestEquipment_b__109_0(
        PartyListViewItem___c_o *this,
        System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___o pair,
        const MethodInfo *method)
{
  int32_t Item1; // w19

  Item1 = pair.fields.value.fields.Item1;
  if ( (byte_4C5267A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___get_Value__);
    byte_4C5267A = 1;
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
  if ( (byte_4C5267B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___get_Value__);
    byte_4C5267B = 1;
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
  if ( (byte_4C5267C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___get_Key__);
    byte_4C5267C = 1;
  }
  return key;
}


bool PartyListViewItem___c___IsNeedDeckPosReset_b__33_0(
        PartyListViewItem___c_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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

  if ( (byte_4C5267E & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    byte_4C5267E = 1;
  }
  userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userServantMaster;
  if ( !userServantMaster
    || (userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                            userServantMaster,
                                                                            id,
                                                                            (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0 )
  {
    sub_1C3E7C0(userServantMaster, id);
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

  if ( (byte_4C5267F & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    byte_4C5267F = 1;
  }
  userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userServantMaster;
  if ( !userServantMaster
    || (userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                            userServantMaster,
                                                                            id,
                                                                            (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0 )
  {
    sub_1C3E7C0(userServantMaster, id);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
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

  if ( (byte_4C52680 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_int____78187928);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    sub_1C3E564(&Method_PartyListViewItem___c__DisplayClass61_1__GetGrandServantInfo_b__1__);
    sub_1C3E564(&PartyListViewItem___c__DisplayClass61_1_TypeInfo);
    byte_4C52680 = 1;
  }
  v5 = sub_1C3E7B0(PartyListViewItem___c__DisplayClass61_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_DWORD *)(v5 + 16) = classIndividuality;
  individuality = this->fields.individuality;
  v9 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_PartyListViewItem___c__DisplayClass61_1__GetGrandServantInfo_b__1__,
    0);
  return BasicHelper__Any_int__51260304(
           individuality,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_30E2B90 *)Method_BasicHelper_Any_int____78187928);
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