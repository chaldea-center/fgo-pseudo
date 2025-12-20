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

  if ( (byte_4D27FFB & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&PartyOrganizationListViewItem___TypeInfo);
    byte_4D27FFB = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct PartyOrganizationListViewItem_array *)sub_1C94140(
                                                       PartyOrganizationListViewItem___TypeInfo,
                                                       (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.memberList = v4;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.memberList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void PartyListViewItem___ctor_34671736(
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
  const MethodInfo *v32; // x2
  __int64 Instance; // x0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x2
  struct DeckServant_o *deckInfo; // x8
  FollowerInfo_o *v37; // x26
  UserServantEntity_array *UserServantList; // x25
  int32_t FollowerIndex; // w0
  BalanceConfig_c *v40; // x8
  int32_t DeckMainMemberMax; // w24
  struct PartyOrganizationListViewItem_array *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  int32_t v49; // w20
  struct DeckServant_o *v50; // x8
  struct DeckServantData_array *svts; // x8
  int32_t max_length; // w9
  DeckServantData_o *v53; // x8
  int32_t initPos; // w23
  int32_t v55; // w22
  UserServantEntity_array *v56; // x21
  struct PartyOrganizationListViewItem_array *v57; // x19
  PartyOrganizationListViewItem_o *v58; // x0
  PartyOrganizationListViewItem_o *v59; // x25
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  UserServantEntity_o *v66; // x21
  UserDeckEntity_o *v67; // x28
  System_Int64_array *EquipList; // x27
  Il2CppClass **v69; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v72; // x0
  UserServantEntity_array *v73; // [xsp+28h] [xbp-B8h]
  int32_t v74; // [xsp+34h] [xbp-ACh]
  struct PartyOrganizationListViewItem_array *v78; // [xsp+58h] [xbp-88h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+60h] [xbp-80h]

  if ( (byte_4D27FFC & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C94098(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D27FFC = 1;
  }
  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v20, v21, v22, v23, v24, v25);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  Instance = PartyListViewItem__GetMaxCost(this, maxCost, v32);
  this->fields.maxCost = Instance;
  if ( !deck )
    goto LABEL_57;
  PartyListViewItem__SetDeckName(this, deck->fields.name, v35);
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_57;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  v37 = follower;
  this->fields.id = deck->fields.id;
  UserServantList = UserDeckEntity__GetUserServantList(deck, 0);
  FollowerIndex = UserDeckEntity__GetFollowerIndex(deck, 0);
  v40 = BalanceConfig_TypeInfo;
  if ( FollowerIndex <= 0 )
  {
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v40 = BalanceConfig_TypeInfo;
    }
    DeckMainMemberMax = v40->static_fields->DeckMainMemberMax;
  }
  else
  {
    DeckMainMemberMax = FollowerIndex;
  }
  if ( !v40->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v40);
    v40 = BalanceConfig_TypeInfo;
  }
  v42 = (struct PartyOrganizationListViewItem_array *)sub_1C94140(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v40->static_fields->DeckMemberMax);
  this->fields.memberList = v42;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.memberList, (int32_t)v42, v43, v44, v45, v46, v47, v48);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      v37 = *(FollowerInfo_o **)(Instance + 24);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        followerClassId = *(_DWORD *)(Instance + 32);
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          followerGrandGraphId = *(_DWORD *)(Instance + 36);
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( Instance )
          {
            followerDeckId = *(_DWORD *)(Instance + 40);
            goto LABEL_19;
          }
        }
      }
    }
LABEL_57:
    sub_1C942F0(Instance, v34);
  }
LABEL_19:
  v49 = 0;
  v74 = DeckMainMemberMax;
  v73 = UserServantList;
  while ( 1 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( v49 >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 172LL) )
      break;
    v50 = deck->fields.deckInfo;
    if ( !v50 )
      goto LABEL_57;
    svts = v50->fields.svts;
    if ( !svts )
      goto LABEL_57;
    max_length = svts->max_length;
    if ( v49 >= max_length )
    {
      v55 = v49 + 1;
      initPos = v49 + 1;
    }
    else
    {
      if ( v49 >= (unsigned int)max_length )
        goto LABEL_58;
      v53 = svts->m_Items[v49];
      if ( !v53 )
        goto LABEL_57;
      initPos = v53->fields.initPos;
      v55 = v49 + 1;
    }
    if ( v55 == DeckMainMemberMax )
    {
      v56 = UserServantList;
      v57 = *p_memberList;
      v58 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
      v59 = v58;
      if ( v37 )
      {
        PartyOrganizationListViewItem___ctor_34870876(
          v58,
          v49,
          v37,
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
        if ( !v57 )
          goto LABEL_57;
      }
      else
      {
        PartyOrganizationListViewItem___ctor_34909064(
          v58,
          v49,
          1,
          setupInfo,
          questRestrictionInfo,
          1,
          initPos,
          otherValidEventIdFilter,
          0);
        if ( !v57 )
          goto LABEL_57;
      }
      if ( v59 )
      {
        Instance = sub_1C941D4(v59, v57->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_59;
      }
      if ( (unsigned int)v49 >= LODWORD(v57->max_length) )
        goto LABEL_58;
      v69 = &v57->obj.klass + v49;
    }
    else
    {
      if ( !UserServantList )
        goto LABEL_57;
      if ( (unsigned int)v49 >= LODWORD(UserServantList->max_length) )
        goto LABEL_58;
      v66 = UserServantList->m_Items[v49];
      v78 = *p_memberList;
      if ( v66 )
      {
        v67 = deck;
        EquipList = UserDeckEntity__GetEquipList(deck, v49, 0);
        v59 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34897716(
          v59,
          v49,
          v66,
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
        if ( !v78 )
          goto LABEL_57;
        if ( v59 )
        {
          Instance = sub_1C941D4(v59, v78->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_59;
        }
        if ( (unsigned int)v49 >= LODWORD(v78->max_length) )
          goto LABEL_58;
        deck = v67;
        v69 = &v78->obj.klass + v49;
        v56 = v73;
        DeckMainMemberMax = v74;
      }
      else
      {
        v56 = UserServantList;
        v59 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34909064(
          v59,
          v49,
          0,
          setupInfo,
          questRestrictionInfo,
          1,
          initPos,
          otherValidEventIdFilter,
          0);
        if ( !v78 )
          goto LABEL_57;
        if ( v59 )
        {
          Instance = sub_1C941D4(v59, v78->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_59:
            v72 = sub_1C94314();
            sub_1C941C0(v72, 0);
          }
        }
        if ( (unsigned int)v49 >= LODWORD(v78->max_length) )
          goto LABEL_58;
        v69 = &v78->obj.klass + v49;
      }
    }
    v69[4] = (Il2CppClass *)v59;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v69 + 4), (int32_t)v59, v60, v61, v62, v63, v64, v65);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_57;
    if ( (unsigned int)v49 >= LODWORD(memberList->max_length) )
LABEL_58:
      sub_1C942F8(Instance);
    Instance = (__int64)memberList->m_Items[v49];
    if ( !Instance )
      goto LABEL_57;
    cost = this->fields.cost;
    UserServantList = v56;
    v49 = v55;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, v34);
}


void PartyListViewItem___ctor_34673308(
        PartyListViewItem_o *this,
        bool *isReadyForSortie,
        bool *isRemoveActiveGrandBoardSvt,
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
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x1
  struct System_String_o *DefaultDeckName; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  __int64 Instance; // x0
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x2
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo *v46; // x3
  int32_t FollowerIndex; // w27
  BalanceConfig_c *v48; // x0
  PartyListViewItem_o *v49; // x9
  int v50; // w25
  _BOOL4 v51; // w23
  const MethodInfo *v52; // x2
  int32_t v53; // w21
  BalanceConfig_c *v54; // x0
  struct PartyOrganizationListViewItem_array *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  const MethodInfo *v62; // x2
  int32_t v63; // w19
  struct DeckServant_o *v64; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v66; // x8
  int32_t *p_initPos; // x8
  int32_t initPos; // w27
  const MethodInfo *v69; // x6
  int v70; // w25
  struct DeckServant_o *v71; // x8
  struct DeckServantData_array *v72; // x8
  DeckServantData_o *v73; // x8
  _BOOL4 v74; // w26
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *v76; // x29
  int32_t v77; // w26
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v79; // x28
  int32_t v80; // w21
  PartyOrganizationListViewItem_o *v81; // x25
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  FollowerInfo_o *v88; // x26
  int32_t v89; // w29
  Il2CppClass **v90; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w21
  PartyOrganizationListViewItem_o *v93; // x0
  const MethodInfo *v94; // x1
  __int64 v95; // x0
  const MethodInfo *isFixNpc; // [xsp+0h] [xbp-100h]
  FollowerInfo_o *followerInfo; // [xsp+30h] [xbp-D0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+38h] [xbp-C8h]
  UserServantEntity_array *UserServantList; // [xsp+48h] [xbp-B8h]
  int v102; // [xsp+58h] [xbp-A8h]
  int v103; // [xsp+5Ch] [xbp-A4h]
  PartyListViewItem_o *v104; // [xsp+60h] [xbp-A0h]
  int32_t v105; // [xsp+68h] [xbp-98h]
  int32_t v106; // [xsp+6Ch] [xbp-94h]
  int32_t v107; // [xsp+7Ch] [xbp-84h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+80h] [xbp-80h]
  int32_t followerClassIda; // [xsp+94h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+98h] [xbp-68h] BYREF

  if ( (byte_4D27FFD & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C94098(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D27FFD = 1;
  }
  followera = 0;
  followerClassIda = 0;
  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v20, v21, v22, v23, v24, v25);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.maxCost = PartyListViewItem__GetMaxCost(this, maxCost, v33);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v34);
  this->fields.deckName = DefaultDeckName;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.deckName,
    (int32_t)DefaultDeckName,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  if ( !deck )
    goto LABEL_87;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_87;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v44) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_87;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0);
  }
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0);
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0, v46);
  if ( FollowerIndex <= 0 )
  {
    v48 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v48 = BalanceConfig_TypeInfo;
    }
    FollowerIndex = v48->static_fields->DeckMainMemberMax;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  if ( *(int *)(Instance + 80) < 1 )
  {
    v104 = 0;
    v50 = 0;
    v51 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_87;
    v49 = *(PartyListViewItem_o **)(Instance + 104);
    v50 = 0;
    v51 = v49 == 0;
    v104 = v49;
    if ( followerInfo && v49 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_87;
      v50 = *(_DWORD *)(Instance + 80);
      Instance = (__int64)PartyListViewItem__GetMember(v104, v50 - 1, v52);
      if ( !Instance )
        goto LABEL_87;
      v53 = *(_DWORD *)(Instance + 372);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_87;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v53, followerInfo, 0);
      v51 = 0;
    }
  }
  v54 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v54 = BalanceConfig_TypeInfo;
  }
  v55 = (struct PartyOrganizationListViewItem_array *)sub_1C94140(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v54->static_fields->DeckMemberMax);
  this->fields.memberList = v55;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.memberList, (int32_t)v55, v56, v57, v58, v59, v60, v61);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_87;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_87;
    followerInfo = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_87;
    v106 = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_87;
    v105 = *(_DWORD *)(Instance + 36);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_87;
    v107 = *(_DWORD *)(Instance + 40);
  }
  else
  {
    v107 = followerDeckId;
    v105 = followerGrandGraphId;
    v106 = followerClassId;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || !Instance )
LABEL_87:
    sub_1C942F0(Instance, v43);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)Instance,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0);
  v63 = 0;
  v102 = v50 - 1;
  v103 = FollowerIndex - 1;
  while ( 1 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( v63 >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 172LL) )
      break;
    if ( v51 )
    {
      v64 = deck->fields.deckInfo;
      if ( !v64 )
        goto LABEL_87;
      svts = v64->fields.svts;
      if ( !svts )
        goto LABEL_87;
      if ( (unsigned int)v63 >= LODWORD(svts->max_length) )
        goto LABEL_91;
      v66 = svts->m_Items[v63];
      if ( !v66 )
        goto LABEL_87;
      p_initPos = &v66->fields.initPos;
    }
    else
    {
      Instance = (__int64)PartyListViewItem__GetMember(v104, v63, v62);
      if ( !Instance )
        goto LABEL_87;
      p_initPos = (int32_t *)(Instance + 372);
    }
    initPos = *p_initPos;
    followera = 0;
    followerClassIda = 0;
    if ( !questRestrictionInfo )
      goto LABEL_87;
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_44229676(questRestrictionInfo, initPos, 0);
    v70 = Instance;
    if ( (Instance & 1) != 0 )
    {
      v71 = deck->fields.deckInfo;
      if ( !v71 )
        goto LABEL_87;
      v72 = v71->fields.svts;
      if ( !v72 )
        goto LABEL_87;
      if ( (unsigned int)v63 >= LODWORD(v72->max_length) )
        goto LABEL_91;
      v73 = v72->m_Items[v63];
      if ( !v73 )
        goto LABEL_87;
      v74 = 0;
      if ( v102 != v63 )
      {
        npcFollowerSvtId = v73->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v74 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v69);
      }
    }
    else
    {
      v74 = 0;
    }
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_87;
    Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, initPos, 0);
    if ( !Instance || ((v70 ^ 1) & 1) != 0 )
    {
      if ( v103 != v63 && !v74 )
      {
        if ( !UserServantList )
          goto LABEL_87;
        if ( (unsigned int)v63 >= LODWORD(UserServantList->max_length) )
          goto LABEL_91;
        PartyListViewItem__EventDeckMySvtSlotProcess(
          this,
          initPos,
          v63,
          UserServantList->m_Items[v63],
          deck,
          v70 & 1,
          isReadyForSortie,
          isRemoveActiveGrandBoardSvt,
          isFixNpc);
        goto LABEL_79;
      }
      v88 = followera;
      v79 = *p_memberList;
      if ( !followera )
      {
        v93 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
        v81 = v93;
        if ( followerInfo )
          PartyOrganizationListViewItem___ctor_34870876(
            v93,
            v63,
            followerInfo,
            v106,
            v105,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v107,
            initPos,
            0,
            0);
        else
          PartyOrganizationListViewItem___ctor_34909064(v93, v63, 1, setupInfo, questRestrictionInfo, 1, initPos, 0, 0);
        if ( !v79 )
          goto LABEL_87;
        goto LABEL_72;
      }
      v89 = followerClassIda;
      v81 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34870876(
        v81,
        v63,
        v88,
        v89,
        0,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v107,
        initPos,
        0,
        0);
    }
    else
    {
      v76 = (FollowerInfo_o *)Instance;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0) )
        v77 = 0;
      else
        v77 = v106;
      IsNpc = FollowerInfo__get_IsNpc(v76, 0);
      v79 = *p_memberList;
      if ( IsNpc )
        v80 = 0;
      else
        v80 = v107;
      v81 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34870876(
        v81,
        v63,
        v76,
        v77,
        v105,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v80,
        initPos,
        0,
        0);
    }
    if ( !v79 )
      goto LABEL_87;
LABEL_72:
    if ( v81 )
    {
      Instance = sub_1C941D4(v81, v79->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v95 = sub_1C94314();
        sub_1C941C0(v95, 0);
      }
    }
    if ( (unsigned int)v63 >= LODWORD(v79->max_length) )
      goto LABEL_91;
    v90 = &v79->obj.klass + v63;
    v90[4] = (Il2CppClass *)v81;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v90 + 4), (int32_t)v81, v82, v83, v84, v85, v86, v87);
LABEL_79:
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_87;
    if ( (unsigned int)v63 >= LODWORD(memberList->max_length) )
LABEL_91:
      sub_1C942F8(Instance);
    Instance = (__int64)memberList->m_Items[v63];
    if ( !Instance )
      goto LABEL_87;
    cost = this->fields.cost;
    ++v63;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, v43);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v94) )
    *isReadyForSortie = 1;
}


void PartyListViewItem___ctor_34678928(
        PartyListViewItem_o *this,
        bool *isReadyForSortie,
        bool *isRemoveActiveGrandBoardSvt,
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
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x1
  struct System_String_o *DefaultDeckName; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  __int64 Instance; // x0
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x2
  struct DeckServant_o *deckInfo; // x8
  PartyListViewItem_o *v47; // x28
  unsigned int v48; // w23
  const MethodInfo *v49; // x2
  int32_t v50; // w21
  BalanceConfig_c *v51; // x0
  struct PartyOrganizationListViewItem_array *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  int32_t v59; // w8
  FollowerInfo_array *QuestFollowerList; // x0
  const MethodInfo *v61; // x2
  __int64 v62; // x8
  UserEventDeckEntity_o *v63; // x23
  unsigned __int64 v64; // x20
  unsigned __int64 v65; // x29
  int32_t *p_initPos; // x8
  struct DeckServant_o *v67; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v69; // x8
  int32_t initPos; // w26
  unsigned __int64 v71; // x8
  __int64 v72; // x9
  __int64 v73; // x19
  __int64 v74; // x25
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  __int64 v81; // x19
  const MethodInfo *v82; // x6
  int v83; // w27
  struct DeckServant_o *v84; // x8
  struct DeckServantData_array *v85; // x8
  DeckServantData_o *v86; // x8
  _BOOL4 v87; // w19
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *v89; // x25
  int32_t v90; // w19
  bool IsNpc; // w0
  unsigned int *v92; // x21
  int32_t v93; // w23
  PartyOrganizationListViewItem_o *v94; // x27
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  FollowerInfo_o *v101; // x19
  int32_t v102; // w25
  unsigned int *v103; // x19
  PartyOrganizationListViewItem_o *v104; // x27
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  PartyOrganizationListViewItem_o *v113; // x0
  const MethodInfo *v114; // x1
  __int64 v115; // x0
  const MethodInfo *isFixNpc; // [xsp+0h] [xbp-130h]
  UserServantMaster_o *Master_object; // [xsp+30h] [xbp-100h]
  FollowerInfo_o *v118; // [xsp+38h] [xbp-F8h]
  int32_t *m_Items; // [xsp+40h] [xbp-F0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+48h] [xbp-E8h]
  unsigned int *v123; // [xsp+68h] [xbp-C8h]
  unsigned int *UserServantList; // [xsp+70h] [xbp-C0h]
  int32_t followerGrandGraphIda; // [xsp+80h] [xbp-B0h]
  int32_t v126; // [xsp+84h] [xbp-ACh]
  struct System_Int32_array *svtIdForceBattleList; // [xsp+88h] [xbp-A8h]
  __int64 v129; // [xsp+98h] [xbp-98h]
  int32_t v130; // [xsp+A4h] [xbp-8Ch]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+A8h] [xbp-88h]
  __int64 v132; // [xsp+B8h] [xbp-78h]
  int32_t followerClassIda; // [xsp+C4h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+C8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16

  if ( (byte_4D27FFE & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C94098(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D27FFE = 1;
  }
  followera = 0;
  followerClassIda = 0;
  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v21, v22, v23, v24, v25, v26);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.maxCost = PartyListViewItem__GetMaxCost(this, maxCost, v34);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v35);
  this->fields.deckName = DefaultDeckName;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.deckName,
    (int32_t)DefaultDeckName,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  if ( !deck )
    goto LABEL_120;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_120;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v45) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_120;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServantList = (unsigned int *)UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  if ( *(int *)(Instance + 80) < 1 )
  {
    v47 = 0;
    if ( !questRestrictionInfo )
      goto LABEL_15;
    goto LABEL_14;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  v47 = *(PartyListViewItem_o **)(Instance + 104);
  if ( questRestrictionInfo )
LABEL_14:
    QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0);
LABEL_15:
  v48 = 0;
  if ( follower && v47 )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_120;
    v48 = *(_DWORD *)(Instance + 80);
    Instance = (__int64)PartyListViewItem__GetMember(v47, v48 - 1, v49);
    if ( !Instance )
      goto LABEL_120;
    v50 = *(_DWORD *)(Instance + 372);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_120;
    PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v50, follower, 0);
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_120;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_120;
    follower = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_120;
    v126 = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_120;
    followerGrandGraphIda = *(_DWORD *)(Instance + 36);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_120;
    v130 = *(_DWORD *)(Instance + 40);
  }
  else
  {
    v130 = followerDeckId;
    followerGrandGraphIda = followerGrandGraphId;
    v126 = followerClassId;
  }
  v51 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v51 = BalanceConfig_TypeInfo;
  }
  v52 = (struct PartyOrganizationListViewItem_array *)sub_1C94140(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v51->static_fields->DeckMemberMax);
  this->fields.memberList = v52;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.memberList, (int32_t)v52, v53, v54, v55, v56, v57, v58);
  v59 = this->fields.menuKind;
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( v59 == 3 )
  {
    Instance = (__int64)*p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_120;
    Instance = (__int64)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList((QuestRestrictionInfo_o *)Instance, 0);
    if ( !*p_questRestrictionInfo )
      goto LABEL_120;
    v129 = Instance;
    svtIdForceBattleList = (*p_questRestrictionInfo)->fields.svtIdForceBattleList;
  }
  else
  {
    svtIdForceBattleList = 0;
    v129 = 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || (v118 = follower, !Instance) )
LABEL_120:
    sub_1C942F0(Instance, v44);
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Instance,
                        (*p_questRestrictionInfo)->fields.questId,
                        (*p_questRestrictionInfo)->fields.questPhase,
                        0);
  v62 = v48;
  v63 = deck;
  v132 = 8 * v62 - 8;
  m_Items = svtIdForceBattleList->m_Items;
  npcFollowerInfoList = QuestFollowerList;
  v64 = 0;
  v65 = 0;
  v123 = UserServantList + 8;
  while ( 1 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v65 >= *(int *)(*(_QWORD *)(Instance + 184) + 172LL) )
      break;
    if ( v47 )
    {
      Instance = (__int64)PartyListViewItem__GetMember(v47, v65, v61);
      if ( !Instance )
        goto LABEL_120;
      p_initPos = (int32_t *)(Instance + 372);
    }
    else
    {
      v67 = v63->fields.deckInfo;
      if ( !v67 )
        goto LABEL_120;
      svts = v67->fields.svts;
      if ( !svts )
        goto LABEL_120;
      if ( v65 >= LODWORD(svts->max_length) )
        goto LABEL_124;
      v69 = svts->m_Items[v64 / 8];
      if ( !v69 )
        goto LABEL_120;
      p_initPos = &v69->fields.initPos;
    }
    initPos = *p_initPos;
    if ( this->fields.menuKind == 3 )
    {
      if ( !v129 )
        goto LABEL_120;
      if ( (__int64)v65 >= *(int *)(v129 + 24) )
      {
        v103 = (unsigned int *)*p_memberList;
        v104 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34909064(v104, v65, 0, setupInfo, questRestrictionInfo, 1, initPos, 0, 0);
        if ( !v103 )
          goto LABEL_120;
        if ( v104 )
        {
          Instance = sub_1C941D4(v104, *(_QWORD *)(*(_QWORD *)v103 + 64LL));
          if ( !Instance )
          {
LABEL_125:
            v115 = sub_1C94314();
            sub_1C941C0(v115, 0);
          }
        }
        if ( v65 >= v103[6] )
          goto LABEL_124;
        *(_QWORD *)&v103[v64 / 4 + 8] = v104;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v103[v64 / 4 + 8],
          (int32_t)v104,
          v105,
          v106,
          v107,
          v108,
          v109,
          v110);
        goto LABEL_115;
      }
      if ( svtIdForceBattleList )
      {
        if ( v132 != v64 && isFirstEnforceChange )
        {
          v71 = *(unsigned int *)((char *)&off_18 + (_QWORD)svtIdForceBattleList);
          if ( (__int64)v65 < (int)v71 )
          {
            if ( v65 >= v71 )
              goto LABEL_124;
            v44 = (const MethodInfo *)(unsigned int)m_Items[v65];
            if ( (int)v44 >= 1 )
            {
              if ( !UserServantList )
                goto LABEL_120;
              if ( v65 >= UserServantList[6] )
                goto LABEL_124;
              v72 = *(_QWORD *)&v123[v64 / 4];
              if ( !v72 )
                goto LABEL_69;
              v74 = *(_QWORD *)(v72 + 80);
              v73 = *(_QWORD *)(v72 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v135.fields.currentCryptoKey = v74;
              *(_QWORD *)&v135.fields.fakeValue = v73;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v135, 0);
              v71 = *(unsigned int *)((char *)&off_18 + (_QWORD)svtIdForceBattleList);
              if ( v65 >= v71 )
                goto LABEL_124;
              v44 = (const MethodInfo *)(unsigned int)m_Items[v65];
              if ( (_DWORD)Instance != (_DWORD)v44 )
              {
LABEL_69:
                if ( v65 >= v71 )
                  goto LABEL_124;
                Instance = (__int64)Master_object;
                if ( !Master_object )
                  goto LABEL_120;
                Instance = (__int64)UserServantMaster__getSvtIdBattle(Master_object, (int32_t)v44, 0);
                v81 = Instance;
                if ( Instance )
                {
                  Instance = sub_1C941D4(Instance, *(_QWORD *)(*(_QWORD *)UserServantList + 64LL));
                  if ( !Instance )
                    goto LABEL_125;
                }
                if ( v65 >= UserServantList[6] )
                  goto LABEL_124;
                *(_QWORD *)&v123[v64 / 4] = v81;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)&v123[v64 / 4], v81, v75, v76, v77, v78, v79, v80);
                *isReadyForSortie = 1;
              }
            }
          }
        }
      }
    }
    followera = 0;
    followerClassIda = 0;
    if ( !questRestrictionInfo )
      goto LABEL_120;
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_44229676(questRestrictionInfo, initPos, 0);
    v83 = Instance;
    if ( (Instance & 1) != 0 )
    {
      v84 = v63->fields.deckInfo;
      if ( !v84 )
        goto LABEL_120;
      v85 = v84->fields.svts;
      if ( !v85 )
        goto LABEL_120;
      if ( v65 >= LODWORD(v85->max_length) )
        goto LABEL_124;
      v86 = v85->m_Items[v64 / 8];
      if ( !v86 )
        goto LABEL_120;
      v87 = 0;
      if ( v132 != v64 )
      {
        npcFollowerSvtId = v86->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v87 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v82);
      }
    }
    else
    {
      v87 = 0;
    }
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_120;
    Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, initPos, 0);
    if ( Instance && ((v83 ^ 1) & 1) == 0 )
    {
      v89 = (FollowerInfo_o *)Instance;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0) )
        v90 = 0;
      else
        v90 = v126;
      IsNpc = FollowerInfo__get_IsNpc(v89, 0);
      v92 = (unsigned int *)*p_memberList;
      if ( IsNpc )
        v93 = 0;
      else
        v93 = v130;
      v94 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34870876(
        v94,
        v65,
        v89,
        v90,
        followerGrandGraphIda,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v93,
        initPos,
        0,
        0);
      if ( !v92 )
        goto LABEL_120;
      v63 = deck;
      goto LABEL_99;
    }
    if ( v132 == v64 || v87 )
    {
      v101 = followera;
      v92 = (unsigned int *)*p_memberList;
      if ( followera )
      {
        v102 = followerClassIda;
        v94 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34870876(
          v94,
          v65,
          v101,
          v102,
          0,
          setupInfo,
          questRestrictionInfo,
          0,
          0,
          v130,
          initPos,
          0,
          0);
        if ( !v92 )
          goto LABEL_120;
      }
      else
      {
        v113 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
        v94 = v113;
        if ( v118 )
        {
          PartyOrganizationListViewItem___ctor_34870876(
            v113,
            v65,
            v118,
            v126,
            followerGrandGraphIda,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v130,
            initPos,
            0,
            0);
          if ( !v92 )
            goto LABEL_120;
        }
        else
        {
          PartyOrganizationListViewItem___ctor_34909064(v113, v65, 1, setupInfo, questRestrictionInfo, 1, initPos, 0, 0);
          if ( !v92 )
            goto LABEL_120;
        }
      }
LABEL_99:
      if ( v94 )
      {
        Instance = sub_1C941D4(v94, *(_QWORD *)(*(_QWORD *)v92 + 64LL));
        if ( !Instance )
          goto LABEL_125;
      }
      if ( v65 >= v92[6] )
        goto LABEL_124;
      *(_QWORD *)&v92[v64 / 4 + 8] = v94;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v92[v64 / 4 + 8], (int32_t)v94, v95, v96, v97, v98, v99, v100);
      goto LABEL_111;
    }
    if ( !UserServantList )
      goto LABEL_120;
    if ( v65 >= UserServantList[6] )
      goto LABEL_124;
    PartyListViewItem__EventDeckMySvtSlotProcess(
      this,
      initPos,
      v65,
      *(UserServantEntity_o **)&v123[v64 / 4],
      v63,
      v83 & 1,
      isReadyForSortie,
      isRemoveActiveGrandBoardSvt,
      isFixNpc);
LABEL_111:
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_120;
    if ( v65 >= LODWORD(memberList->max_length) )
LABEL_124:
      sub_1C942F8(Instance);
    Instance = (__int64)memberList->m_Items[v64 / 8];
    if ( !Instance )
      goto LABEL_120;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                      + cost;
LABEL_115:
    ++v65;
    v64 += 8LL;
  }
  PartyListViewItem__CheckRestriction(this, v44);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v114) )
    *isReadyForSortie = 1;
}


void PartyListViewItem___ctor_34681352(
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
  const MethodInfo *v32; // x2
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  BalanceConfig_c *v40; // x0
  struct PartyOrganizationListViewItem_array *v41; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x22
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  Il2CppObject *Instance; // x0
  __int64 v50; // x1
  int32_t klass; // w23
  int32_t klass_high; // w27
  struct PartyOrganizationListViewItem_array *v53; // x27
  PartyOrganizationListViewItem_o *v54; // x0
  PartyOrganizationListViewItem_o *v55; // x28
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w23
  const MethodInfo *v64; // x1
  int32_t i; // w23
  BalanceConfig_c *v66; // x0
  struct PartyOrganizationListViewItem_array *v67; // x26
  PartyOrganizationListViewItem_o *v68; // x24
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  Il2CppClass **v75; // x0
  struct PartyOrganizationListViewItem_array *v76; // x8
  int32_t v77; // w24
  __int64 v78; // x0

  if ( (byte_4D27FFF & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C94098(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D27FFF = 1;
  }
  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v20, v21, v22, v23, v24, v25);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.maxCost = PartyListViewItem__GetMaxCost(this, maxCost, v32);
  this->fields.isDeckNameDefault = 0;
  v33 = StringLiteral_1/*""*/;
  this->fields.deckName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.deckName, v33, v34, v35, v36, v37, v38, v39);
  this->fields.userEquipId = userEquipId;
  this->fields.id = 0;
  v40 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v40 = BalanceConfig_TypeInfo;
  }
  v41 = (struct PartyOrganizationListViewItem_array *)sub_1C94140(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v40->static_fields->DeckMemberMax);
  this->fields.memberList = v41;
  p_memberList = &this->fields.memberList;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.memberList, (int32_t)v41, v43, v44, v45, v46, v47, v48);
  this->fields.cost = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  if ( Instance[1].monitor )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    follower = (FollowerInfo_o *)Instance[1].monitor;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    klass = (int32_t)Instance[2].klass;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    klass_high = HIDWORD(Instance[2].klass);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    followerGrandGraphId = klass_high;
    followerClassId = klass;
    followerDeckId = (int32_t)Instance[2].monitor;
  }
  v53 = *p_memberList;
  v54 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
  v55 = v54;
  if ( follower )
  {
    PartyOrganizationListViewItem___ctor_34870876(
      v54,
      0,
      follower,
      followerClassId,
      followerGrandGraphId,
      setupInfo,
      questRestrictionInfo,
      friendPointCampaignEntityList,
      0,
      followerDeckId,
      0,
      0,
      0);
    if ( !v53 )
      goto LABEL_35;
  }
  else
  {
    PartyOrganizationListViewItem___ctor_34909064(v54, 0, 1, setupInfo, questRestrictionInfo, 1, 0, 0, 0);
    if ( !v53 )
      goto LABEL_35;
  }
  if ( v55 )
  {
    Instance = (Il2CppObject *)sub_1C941D4(v55, v53->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_37:
      v78 = sub_1C94314();
      sub_1C941C0(v78, 0);
    }
  }
  if ( !LODWORD(v53->max_length) )
    goto LABEL_36;
  v53->m_Items[0] = v55;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v53->m_Items, (int32_t)v55, v56, v57, v58, v59, v60, v61);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_35;
  if ( !LODWORD(memberList->max_length) )
LABEL_36:
    sub_1C942F8(Instance);
  Instance = (Il2CppObject *)memberList->m_Items[0];
  if ( !Instance )
LABEL_35:
    sub_1C942F0(Instance, v50);
  cost = this->fields.cost;
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                    + cost;
  for ( i = 1; ; ++i )
  {
    v66 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v66 = BalanceConfig_TypeInfo;
    }
    if ( i >= v66->static_fields->DeckMemberMax )
      break;
    v67 = *p_memberList;
    v68 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_34909064(v68, i, 0, setupInfo, questRestrictionInfo, 1, 0, 0, 0);
    if ( !v67 )
      goto LABEL_35;
    if ( v68 )
    {
      Instance = (Il2CppObject *)sub_1C941D4(v68, v67->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_37;
    }
    if ( (unsigned int)i >= LODWORD(v67->max_length) )
      goto LABEL_36;
    v75 = &v67->obj.klass + i;
    v75[4] = (Il2CppClass *)v68;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v75 + 4), (int32_t)v68, v69, v70, v71, v72, v73, v74);
    v76 = this->fields.memberList;
    if ( !v76 )
      goto LABEL_35;
    if ( (unsigned int)i >= LODWORD(v76->max_length) )
      goto LABEL_36;
    Instance = (Il2CppObject *)v76->m_Items[i];
    if ( !Instance )
      goto LABEL_35;
    v77 = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                      + v77;
  }
  PartyListViewItem__CheckRestriction(this, v64);
}


void PartyListViewItem___ctor_34682276(
        PartyListViewItem_o *this,
        bool *isReadyForSortie,
        bool *isRemoveActiveGrandBoardSvt,
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
  const MethodInfo *v33; // x2
  __int64 IsNeedDeckPosReset; // x0
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x2
  UserEventDeckEntity_o *v37; // x21
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo_3ABAA64 **v39; // x28
  int32_t servantNumMax; // w25
  const MethodInfo *v41; // x3
  PartyListViewItem_o *v42; // x26
  int v43; // w24
  const MethodInfo *v44; // x2
  int32_t v45; // w23
  int32_t FollowerIndex; // w27
  BalanceConfig_c *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  __int64 v54; // x9
  __int64 v55; // x29
  __int64 v56; // x21
  unsigned __int64 v57; // x8
  __int64 v58; // x23
  signed __int64 v59; // x27
  BalanceConfig_c *v60; // x0
  struct PartyOrganizationListViewItem_array *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  UserEventDeckEntity_o *v68; // x23
  const MethodInfo *v69; // x2
  int32_t v70; // w19
  struct DeckServant_o *v71; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v73; // x8
  int32_t *p_initPos; // x8
  int32_t initPos; // w26
  const MethodInfo *v76; // x6
  int v77; // w24
  _BOOL4 v78; // w27
  struct DeckServant_o *v79; // x8
  struct DeckServantData_array *v80; // x8
  DeckServantData_o *v81; // x8
  int64_t npcFollowerSvtId; // x4
  const MethodInfo_3ABAA64 **v83; // x25
  FollowerInfo_o *v84; // x28
  int32_t v85; // w27
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v87; // x21
  int32_t v88; // w23
  PartyOrganizationListViewItem_o *v89; // x24
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  FollowerInfo_o *v96; // x27
  int32_t v97; // w28
  Il2CppClass **v98; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w21
  PartyOrganizationListViewItem_o *v101; // x0
  const MethodInfo *v102; // x1
  __int64 v103; // x0
  const MethodInfo *isFixNpc; // [xsp+0h] [xbp-100h]
  FollowerInfo_o *followerInfo; // [xsp+30h] [xbp-D0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+38h] [xbp-C8h]
  int v108; // [xsp+48h] [xbp-B8h]
  int32_t v109; // [xsp+4Ch] [xbp-B4h]
  int v110; // [xsp+4Ch] [xbp-B4h]
  PartyListViewItem_o *v111; // [xsp+50h] [xbp-B0h]
  int32_t followerGrandGraphIda; // [xsp+58h] [xbp-A8h]
  int32_t v113; // [xsp+5Ch] [xbp-A4h]
  int32_t v116; // [xsp+7Ch] [xbp-84h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+80h] [xbp-80h]
  _BOOL4 v118; // [xsp+90h] [xbp-70h]
  int32_t followerClassIda; // [xsp+94h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+98h] [xbp-68h] BYREF

  if ( (byte_4D28000 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C94098(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D28000 = 1;
  }
  followera = 0;
  followerClassIda = 0;
  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v20, v21, v22, v23, v24, v25);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  IsNeedDeckPosReset = PartyListViewItem__GetMaxCost(this, maxCost, v33);
  v37 = deck;
  this->fields.maxCost = IsNeedDeckPosReset;
  if ( !deck )
    goto LABEL_101;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_101;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  IsNeedDeckPosReset = PartyListViewItem__IsNeedDeckPosReset(this, deck, v36);
  if ( (IsNeedDeckPosReset & 1) != 0 )
  {
    IsNeedDeckPosReset = (__int64)deck->fields.deckInfo;
    if ( !IsNeedDeckPosReset )
      goto LABEL_101;
    DeckServant__ResetInitPos((DeckServant_o *)IsNeedDeckPosReset, 0);
  }
  if ( !questRestrictionInfo )
    goto LABEL_101;
  v39 = (const MethodInfo_3ABAA64 **)&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
  servantNumMax = questRestrictionInfo->fields.servantNumMax;
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_101;
  followerInfo = follower;
  if ( *(int *)(IsNeedDeckPosReset + 80) < 1 )
  {
    v42 = 0;
    v43 = 0;
    v118 = 1;
  }
  else
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_101;
    v42 = *(PartyListViewItem_o **)(IsNeedDeckPosReset + 104);
    v43 = 0;
    v118 = v42 == 0;
    if ( follower && v42 )
    {
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_101;
      v43 = *(_DWORD *)(IsNeedDeckPosReset + 80);
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v42, v43 - 1, v44);
      if ( !IsNeedDeckPosReset )
        goto LABEL_101;
      v45 = *(_DWORD *)(IsNeedDeckPosReset + 372);
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_101;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)IsNeedDeckPosReset, v45, follower, 0);
      v37 = deck;
      v118 = 0;
    }
  }
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, v37, 0, v41);
  if ( FollowerIndex > 0 || questRestrictionInfo->fields.isNotTransitionSupportList )
  {
    if ( FollowerIndex <= servantNumMax )
      goto LABEL_29;
  }
  else if ( FollowerIndex <= servantNumMax && questRestrictionInfo->fields.isNoSupportBattle )
  {
    goto LABEL_29;
  }
  *isReadyForSortie = 1;
  v47 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v47 = BalanceConfig_TypeInfo;
  }
  FollowerIndex = servantNumMax;
  if ( servantNumMax > v47->static_fields->DeckMainMemberMax )
  {
    FollowerIndex = v47->static_fields->DeckMainMemberMax;
    if ( !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      FollowerIndex = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
    }
  }
LABEL_29:
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_101;
  v111 = v42;
  v109 = FollowerIndex;
  if ( *(_QWORD *)(IsNeedDeckPosReset + 24) )
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_101;
    followerInfo = *(FollowerInfo_o **)(IsNeedDeckPosReset + 24);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_101;
    v113 = *(_DWORD *)(IsNeedDeckPosReset + 32);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_101;
    followerGrandGraphIda = *(_DWORD *)(IsNeedDeckPosReset + 36);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_101;
    v116 = *(_DWORD *)(IsNeedDeckPosReset + 40);
  }
  else
  {
    v116 = followerDeckId;
    followerGrandGraphIda = followerGrandGraphId;
    v113 = followerClassId;
  }
  IsNeedDeckPosReset = (__int64)UserEventDeckEntity__GetUserServantList(v37, 0, 0, 0);
  if ( !IsNeedDeckPosReset )
    goto LABEL_101;
  v54 = *(_QWORD *)(IsNeedDeckPosReset + 24);
  v55 = IsNeedDeckPosReset;
  if ( (int)v54 >= 1 )
  {
    v56 = 0;
    v57 = 0;
    v58 = IsNeedDeckPosReset + 32;
    do
    {
      if ( v57 >= (unsigned int)v54 )
LABEL_105:
        sub_1C942F8(IsNeedDeckPosReset);
      v59 = v57 + 1;
      if ( servantNumMax < (int)v57 + 1 && *(_QWORD *)(v58 + 8 * v57) )
      {
        *isReadyForSortie = 1;
        if ( v57 >= *(unsigned int *)(v55 + 24) )
          goto LABEL_105;
        *(_QWORD *)(v58 + 8 * v57) = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v58 + v56), 0, v48, v49, v50, v51, v52, v53);
      }
      LODWORD(v54) = *(_DWORD *)(v55 + 24);
      v56 += 8;
      v57 = v59;
    }
    while ( v59 < (int)v54 );
  }
  v60 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v60 = BalanceConfig_TypeInfo;
  }
  v61 = (struct PartyOrganizationListViewItem_array *)sub_1C94140(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v60->static_fields->DeckMemberMax);
  this->fields.memberList = v61;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.memberList, (int32_t)v61, v62, v63, v64, v65, v66, v67);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNeedDeckPosReset = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || (v68 = deck, !IsNeedDeckPosReset) )
LABEL_101:
    sub_1C942F0(IsNeedDeckPosReset, v35);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)IsNeedDeckPosReset,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0);
  v70 = 0;
  v108 = v43 - 1;
  v110 = v109 - 1;
  while ( 1 )
  {
    IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    }
    if ( v70 >= *(_DWORD *)(*(_QWORD *)(IsNeedDeckPosReset + 184) + 172LL) )
      break;
    if ( v118 )
    {
      v71 = v68->fields.deckInfo;
      if ( !v71 )
        goto LABEL_101;
      svts = v71->fields.svts;
      if ( !svts )
        goto LABEL_101;
      if ( (unsigned int)v70 >= LODWORD(svts->max_length) )
        goto LABEL_105;
      v73 = svts->m_Items[v70];
      if ( !v73 )
        goto LABEL_101;
      p_initPos = &v73->fields.initPos;
    }
    else
    {
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v111, v70, v69);
      if ( !IsNeedDeckPosReset )
        goto LABEL_101;
      p_initPos = (int32_t *)(IsNeedDeckPosReset + 372);
    }
    initPos = *p_initPos;
    followera = 0;
    followerClassIda = 0;
    IsNeedDeckPosReset = QuestRestrictionInfo__IsMyServantOrNpcRestriction_44229676(questRestrictionInfo, initPos, 0);
    v77 = IsNeedDeckPosReset;
    v78 = 0;
    if ( (IsNeedDeckPosReset & 1) != 0 )
    {
      v79 = v68->fields.deckInfo;
      if ( !v79 )
        goto LABEL_101;
      v80 = v79->fields.svts;
      if ( !v80 )
        goto LABEL_101;
      if ( (unsigned int)v70 >= LODWORD(v80->max_length) )
        goto LABEL_105;
      v81 = v80->m_Items[v70];
      if ( !v81 )
        goto LABEL_101;
      v78 = 0;
      if ( v108 != v70 )
      {
        npcFollowerSvtId = v81->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v78 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v76);
      }
    }
    v83 = v39;
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance(*v39);
    if ( !IsNeedDeckPosReset )
      goto LABEL_101;
    IsNeedDeckPosReset = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                                    (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
                                    initPos,
                                    0);
    if ( !IsNeedDeckPosReset || ((v77 ^ 1) & 1) != 0 )
    {
      if ( v110 != v70 && !v78 )
      {
        if ( (unsigned int)v70 >= *(_DWORD *)(v55 + 24) )
          goto LABEL_105;
        PartyListViewItem__EventDeckMySvtSlotProcess(
          this,
          initPos,
          v70,
          *(UserServantEntity_o **)(v55 + 8LL * v70 + 32),
          v68,
          v77 & 1,
          isReadyForSortie,
          isRemoveActiveGrandBoardSvt,
          isFixNpc);
        goto LABEL_93;
      }
      v96 = followera;
      v87 = *p_memberList;
      if ( !followera )
      {
        v101 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
        v89 = v101;
        if ( followerInfo )
          PartyOrganizationListViewItem___ctor_34870876(
            v101,
            v70,
            followerInfo,
            v113,
            followerGrandGraphIda,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v116,
            initPos,
            0,
            0);
        else
          PartyOrganizationListViewItem___ctor_34909064(v101, v70, 1, setupInfo, questRestrictionInfo, 1, initPos, 0, 0);
        if ( !v87 )
          goto LABEL_101;
        goto LABEL_87;
      }
      v97 = followerClassIda;
      v89 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34870876(
        v89,
        v70,
        v96,
        v97,
        0,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v116,
        initPos,
        0,
        0);
      if ( !v87 )
        goto LABEL_101;
    }
    else
    {
      v84 = (FollowerInfo_o *)IsNeedDeckPosReset;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)IsNeedDeckPosReset, 0) )
        v85 = 0;
      else
        v85 = v113;
      IsNpc = FollowerInfo__get_IsNpc(v84, 0);
      v87 = *p_memberList;
      if ( IsNpc )
        v88 = 0;
      else
        v88 = v116;
      v89 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34870876(
        v89,
        v70,
        v84,
        v85,
        followerGrandGraphIda,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v88,
        initPos,
        0,
        0);
      if ( !v87 )
        goto LABEL_101;
      v68 = deck;
    }
    v39 = v83;
LABEL_87:
    if ( v89 )
    {
      IsNeedDeckPosReset = sub_1C941D4(v89, v87->obj.klass->_1.element_class);
      if ( !IsNeedDeckPosReset )
      {
        v103 = sub_1C94314();
        sub_1C941C0(v103, 0);
      }
    }
    if ( (unsigned int)v70 >= LODWORD(v87->max_length) )
      goto LABEL_105;
    v98 = &v87->obj.klass + v70;
    v98[4] = (Il2CppClass *)v89;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v98 + 4), (int32_t)v89, v90, v91, v92, v93, v94, v95);
LABEL_93:
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_101;
    if ( (unsigned int)v70 >= LODWORD(memberList->max_length) )
      goto LABEL_105;
    IsNeedDeckPosReset = (__int64)memberList->m_Items[v70];
    if ( !IsNeedDeckPosReset )
      goto LABEL_101;
    cost = this->fields.cost;
    ++v70;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)IsNeedDeckPosReset,
                          0)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, v35);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v102) )
    *isReadyForSortie = 1;
}


void PartyListViewItem___ctor_34684340(
        PartyListViewItem_o *this,
        bool *isReadyForSortie,
        bool *isRemoveActiveGrandBoardSvt,
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
  EventUpValSetupInfo_o *v16; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  const MethodInfo *v35; // x2
  __int64 Instance; // x0
  FollowerInfo_o *v37; // x1
  const MethodInfo *v38; // x2
  UserEventDeckEntity_o *v39; // x21
  struct DeckServant_o *deckInfo; // x8
  System_Int64_array *NpcServantFollowerIds; // x27
  FollowerInfo_o *v42; // x26
  PartyListViewItem_o *v43; // x23
  const MethodInfo *v44; // x2
  int32_t v45; // w21
  int32_t DeckMemberMax; // w24
  FollowerInfo_array *QuestFollowerList; // x29
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int max_length; // w8
  unsigned int v55; // w19
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  int32_t v60; // w23
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v62; // w9
  int v63; // w10
  QuestRestrictionInfo_SlotInfo_o *v64; // x11
  struct DeckServant_o *v65; // x8
  __int64 v66; // x25
  int v67; // w26
  int v68; // w29
  struct DeckServantData_array *svts; // x8
  PartyListViewItem___c__DisplayClass31_0_o *v70; // x19
  struct DeckServant_o *v71; // x8
  struct DeckServantData_array *v72; // x8
  DeckServantData_o *v73; // x8
  int64_t userSvtId; // x21
  System_Func_object__bool__o *v75; // x21
  BalanceConfig_c *v76; // x0
  _BOOL8 v77; // x0
  __int64 v78; // x1
  const MethodInfo *v79; // x2
  Il2CppClass *monitor; // x21
  int v81; // w8
  Il2CppClass **v82; // x8
  __int64 NpcDeployIdx; // x0
  __int64 v84; // x1
  BalanceConfig_c *v85; // x0
  const MethodInfo *v86; // x2
  const MethodInfo *v87; // x3
  int32_t i; // w19
  struct DeckServant_o *v89; // x8
  struct DeckServantData_array *v90; // x8
  DeckServantData_o *v91; // x8
  int32_t UserServantDeployIndex; // w0
  unsigned int v93; // w21
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  __int64 v100; // x23
  Il2CppClass **v101; // x0
  BalanceConfig_c *v102; // x0
  struct PartyOrganizationListViewItem_array *v103; // x0
  int32_t v104; // w2
  int32_t v105; // w3
  System_String_o *v106; // x4
  int32_t v107; // w5
  int64_t v108; // x6
  System_String_o *v109; // x7
  __int64 v110; // x8
  PartyListViewItem_o *v111; // x24
  unsigned __int64 v112; // x25
  __int64 j; // x29
  BalanceConfig_c *v114; // x0
  PartyListViewItem___c__DisplayClass31_1_o *v115; // x26
  const MethodInfo *v116; // x2
  struct DeckServant_o *v117; // x8
  struct DeckServantData_array *v118; // x8
  __int64 v119; // x8
  int32_t *v120; // x8
  int32_t initPos; // w19
  unsigned int *v122; // x21
  PartyOrganizationListViewItem_o *v123; // x23
  int32_t v124; // w2
  int32_t v125; // w3
  System_String_o *v126; // x4
  int32_t v127; // w5
  int64_t v128; // x6
  System_String_o *v129; // x7
  const MethodInfo *v130; // x6
  bool v131; // w23
  int64_t v132; // x4
  FollowerInfo_o *v133; // x24
  int32_t v134; // w26
  bool IsNpc; // w0
  unsigned int *v136; // x21
  int32_t v137; // w22
  PartyOrganizationListViewItem_o *v138; // x23
  int32_t v139; // w2
  int32_t v140; // w3
  System_String_o *v141; // x4
  int32_t v142; // w5
  int64_t v143; // x6
  System_String_o *v144; // x7
  FollowerInfo_o *v145; // x24
  int32_t v146; // w26
  GrandQuestFolderBoardItem_o *v147; // x0
  int32_t v148; // w1
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  PartyOrganizationListViewItem_o *v151; // x0
  PartyOrganizationListViewItem_o *v152; // x26
  System_Func_object__bool__o *v153; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v154; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v155; // x23
  FollowerInfo_o *v156; // x23
  unsigned int *v157; // x22
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v159; // x8
  int32_t classId; // w24
  PartyOrganizationListViewItem_o *v161; // x26
  int32_t v162; // w2
  int32_t v163; // w3
  System_String_o *v164; // x4
  int32_t v165; // w5
  int64_t v166; // x6
  System_String_o *v167; // x7
  GrandQuestFolderBoardItem_o *v168; // x0
  int32_t v169; // w1
  System_Collections_Generic_List_object__o *v170; // x21
  int32_t v171; // w23
  PartyOrganizationListViewItem_o *v172; // x23
  int32_t v173; // w26
  __int64 v174; // x8
  FollowerInfo_o *v175; // x24
  __int64 v176; // x8
  int32_t v177; // w26
  __int64 v178; // x22
  int v179; // w25
  unsigned __int64 v180; // x28
  UserServantEntity_o **m_Items; // x26
  PartyListViewItem___c__DisplayClass31_2_o *v182; // x19
  signed __int64 v183; // x21
  System_Func_object__bool__o *v184; // x23
  int32_t v185; // w2
  int32_t v186; // w3
  System_String_o *v187; // x4
  int32_t v188; // w5
  int64_t v189; // x6
  System_String_o *v190; // x7
  unsigned __int64 max_length_low; // x8
  signed __int64 v192; // x29
  EventUpValSetupInfo_o *v193; // x22
  PartyListViewItem_o *v194; // x24
  unsigned __int64 v195; // x21
  int v196; // w27
  __int64 v197; // x26
  unsigned __int64 k; // x23
  BalanceConfig_c *v199; // x0
  PartyListViewItem___c__DisplayClass31_3_o *v200; // x25
  const MethodInfo *v201; // x2
  struct DeckServant_o *v202; // x8
  struct DeckServantData_array *v203; // x8
  __int64 v204; // x8
  int32_t *v205; // x8
  int32_t v206; // w19
  unsigned int *v207; // x21
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
  bool v220; // w22
  int32_t chkIdx; // w8
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v223; // x24
  bool v224; // w0
  int32_t v225; // w8
  bool v226; // w0
  unsigned int *v227; // x21
  int32_t v228; // w22
  PartyOrganizationListViewItem_o *v229; // x25
  int32_t v230; // w2
  int32_t v231; // w3
  System_String_o *v232; // x4
  int32_t v233; // w5
  int64_t v234; // x6
  System_String_o *v235; // x7
  struct PartyOrganizationListViewItem_array *v236; // x8
  struct DeckServant_o *v237; // x9
  struct DeckServantData_array *v238; // x9
  __int64 v239; // x9
  __int64 v240; // x8
  FollowerInfo_o *v241; // x24
  unsigned int *v242; // x28
  PartyOrganizationListViewItem_o *v243; // x25
  int32_t v244; // w2
  int32_t v245; // w3
  System_String_o *v246; // x4
  int32_t v247; // w5
  int64_t v248; // x6
  System_String_o *v249; // x7
  unsigned int *v250; // x19
  PartyOrganizationListViewItem_o *v251; // x0
  System_Func_object__bool__o *v252; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v253; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v254; // x24
  struct PartyOrganizationListViewItem_array *v255; // x8
  struct DeckServant_o *v256; // x9
  struct DeckServantData_array *v257; // x9
  __int64 v258; // x9
  __int64 v259; // x8
  FollowerInfo_o *v260; // x24
  unsigned int *v261; // x22
  __int64 v262; // x8
  __int64 v263; // x8
  PartyOrganizationListViewItem_o *v264; // x25
  int32_t v265; // w2
  int32_t v266; // w3
  System_String_o *v267; // x4
  int32_t v268; // w5
  int64_t v269; // x6
  System_String_o *v270; // x7
  PartyOrganizationListViewItem_o *v271; // x24
  int32_t v272; // w2
  int32_t v273; // w3
  System_String_o *v274; // x4
  int32_t v275; // w5
  int64_t v276; // x6
  System_String_o *v277; // x7
  struct PartyOrganizationListViewItem_array *v278; // x8
  int32_t v279; // w19
  const MethodInfo *v280; // x1
  __int64 v281; // x0
  MethodInfo *methoda; // [xsp+0h] [xbp-190h]
  bool methodb; // [xsp+0h] [xbp-190h]
  bool methodc; // [xsp+0h] [xbp-190h]
  int32_t followerDeckIda; // [xsp+8h] [xbp-188h]
  int32_t followerDeckIdb; // [xsp+8h] [xbp-188h]
  int v287; // [xsp+30h] [xbp-160h]
  bool v288; // [xsp+34h] [xbp-15Ch]
  _BOOL4 v289; // [xsp+34h] [xbp-15Ch]
  int v291; // [xsp+40h] [xbp-150h]
  int v292; // [xsp+40h] [xbp-150h]
  int32_t v293; // [xsp+40h] [xbp-150h]
  int32_t v294[2]; // [xsp+40h] [xbp-150h]
  int v295; // [xsp+4Ch] [xbp-144h]
  int32_t followerGrandGraphIda; // [xsp+64h] [xbp-12Ch]
  int32_t v298; // [xsp+68h] [xbp-128h]
  int32_t v299; // [xsp+6Ch] [xbp-124h]
  PartyListViewItem_o *v300; // [xsp+70h] [xbp-120h]
  int32_t FollowerIndex; // [xsp+7Ch] [xbp-114h]
  FollowerInfo_o *v302; // [xsp+80h] [xbp-110h]
  int v303; // [xsp+88h] [xbp-108h]
  PartyListViewItem_o *v304; // [xsp+98h] [xbp-F8h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+A0h] [xbp-F0h]
  QuestRestrictionInfo_o *v306; // [xsp+A8h] [xbp-E8h]
  int32_t v307[2]; // [xsp+A8h] [xbp-E8h]
  bool v308; // [xsp+A8h] [xbp-E8h]
  int32_t v309; // [xsp+A8h] [xbp-E8h]
  int32_t v310; // [xsp+A8h] [xbp-E8h]
  System_Collections_Generic_List_object__o *v311; // [xsp+B0h] [xbp-E0h]
  UserServantEntity_array *userServantList; // [xsp+B8h] [xbp-D8h]
  _BOOL4 v313; // [xsp+C4h] [xbp-CCh]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+C8h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_object__o v316; // [xsp+D8h] [xbp-B8h] BYREF
  int32_t v317; // [xsp+F4h] [xbp-9Ch] BYREF
  FollowerInfo_o *v318; // [xsp+F8h] [xbp-98h] BYREF
  int32_t followerClassIda; // [xsp+104h] [xbp-8Ch] BYREF
  FollowerInfo_o *followera; // [xsp+108h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v321; // [xsp+110h] [xbp-80h] BYREF

  v16 = setupInfo;
  if ( (byte_4D28001 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_BasicHelper_Any_FollowerInfo___);
    sub_1C94098(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Any_FollowerInfo___);
    sub_1C94098(&Method_System_Linq_Enumerable_Count_FollowerInfo___);
    sub_1C94098(&Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__get_Current__);
    sub_1C94098(&FollowerInfo___TypeInfo);
    sub_1C94098(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_1C94098(&long___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_FollowerInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_FollowerInfo___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_FollowerInfo__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_FollowerInfo__TypeInfo);
    sub_1C94098(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C94098(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C94098(&Method_PartyListViewItem___c__DisplayClass31_0___ctor_b__0__);
    sub_1C94098(&PartyListViewItem___c__DisplayClass31_0_TypeInfo);
    sub_1C94098(&Method_PartyListViewItem___c__DisplayClass31_1___ctor_b__1__);
    sub_1C94098(&PartyListViewItem___c__DisplayClass31_1_TypeInfo);
    sub_1C94098(&Method_PartyListViewItem___c__DisplayClass31_2___ctor_b__2__);
    sub_1C94098(&PartyListViewItem___c__DisplayClass31_2_TypeInfo);
    sub_1C94098(&Method_PartyListViewItem___c__DisplayClass31_3___ctor_b__3__);
    sub_1C94098(&PartyListViewItem___c__DisplayClass31_3_TypeInfo);
    sub_1C94098(&UserServantEntity___TypeInfo);
    byte_4D28001 = 1;
  }
  memset(&v321, 0, sizeof(v321));
  followera = 0;
  followerClassIda = 0;
  v318 = 0;
  v317 = 0;
  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v22, v23, v24, v25, v26, v27);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  Instance = PartyListViewItem__GetMaxCost(this, maxCost, v35);
  v39 = deck;
  this->fields.maxCost = Instance;
  if ( !deck )
    goto LABEL_76;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_76;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v38) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_76;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0);
    v39 = deck;
  }
  NpcServantFollowerIds = UserEventDeckEntity__GetNpcServantFollowerIds(v39, 0);
  userServantList = UserEventDeckEntity__GetUserServantList(v39, 0, 0, 0);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  v42 = follower;
  if ( *(int *)(Instance + 80) < 1 )
  {
    v43 = 0;
    v295 = 0;
    v313 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_76;
    v43 = *(PartyListViewItem_o **)(Instance + 104);
    v313 = v43 == 0;
    if ( follower && v43 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      v295 = *(_DWORD *)(Instance + 80);
      Instance = (__int64)PartyListViewItem__GetMember(v43, v295 - 1, v44);
      if ( !Instance )
        goto LABEL_76;
      v45 = *(_DWORD *)(Instance + 372);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v45, follower, 0);
      v313 = 0;
    }
    else
    {
      v295 = 0;
    }
  }
  Instance = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  v304 = v43;
  if ( !questRestrictionInfo )
    goto LABEL_76;
  DeckMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMemberMax;
  if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0) )
    DeckMemberMax = questRestrictionInfo->fields.servantNumMax;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo
    || !Instance
    || (QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                              (NpcFollowerMaster_o *)Instance,
                              (*p_questRestrictionInfo)->fields.questId,
                              (*p_questRestrictionInfo)->fields.questPhase,
                              0),
        v311 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_FollowerInfo__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v311,
          (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_FollowerInfo___ctor__),
        !QuestFollowerList) )
  {
LABEL_76:
    sub_1C942F0(Instance, v37);
  }
  max_length = QuestFollowerList->max_length;
  if ( max_length >= 1 )
  {
    v55 = 0;
    while ( v55 < max_length )
    {
      v37 = QuestFollowerList->m_Items[v55];
      if ( !v37 )
        goto LABEL_76;
      if ( !v37->fields.isMySvtOrNpc
        && (questRestrictionInfo->fields.isNotTransitionSupportList
         || !questRestrictionInfo->fields.isNpcMultipleBattle
         || v37->fields.isFixedNpc) )
      {
        if ( !v311 )
          goto LABEL_76;
        items = v311->fields._items;
        v57 = Method_System_Collections_Generic_List_FollowerInfo__Add__;
        ++v311->fields._version;
        if ( !items )
          goto LABEL_76;
        size = v311->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v311,
            (Il2CppObject *)v37,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
        }
        else
        {
          v59 = &items->obj.klass + size;
          v311->fields._size = size + 1;
          v59[4] = (Il2CppClass *)v37;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v59 + 4), (int32_t)v37, v48, (int32_t)v49, v50, v51, v52, v53);
        }
      }
      max_length = QuestFollowerList->max_length;
      if ( (int)++v55 >= max_length )
        goto LABEL_45;
    }
LABEL_377:
    sub_1C942F8(Instance);
  }
LABEL_45:
  FollowerIndex = PartyListViewItem__GetFollowerIndex(
                    this,
                    deck,
                    (System_Collections_Generic_List_FollowerInfo__o *)v311,
                    v49);
  npcFollowerInfoList = QuestFollowerList;
  v306 = questRestrictionInfo;
  if ( isNew || !questRestrictionInfo->fields.isNpcEditablePos )
    goto LABEL_118;
  Instance = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
  if ( (Instance & 1) != 0 )
  {
    if ( !v311 )
      goto LABEL_76;
    v60 = v311->fields._size;
  }
  else
  {
    slotInfos = questRestrictionInfo->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_76;
    v62 = slotInfos->max_length;
    if ( v62 >= 1 )
    {
      v60 = 0;
      v63 = 0;
      while ( v62 != v63 )
      {
        v64 = slotInfos->m_Items[v63];
        if ( !v64 )
          goto LABEL_76;
        if ( v64->fields.slotType == 1 )
          v60 += v64->fields.isMoved;
        if ( v62 == ++v63 )
          goto LABEL_60;
      }
      goto LABEL_377;
    }
    v60 = 0;
  }
LABEL_60:
  v65 = deck->fields.deckInfo;
  if ( !v65 )
    goto LABEL_76;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  while ( 1 )
  {
    svts = v65->fields.svts;
    if ( !svts )
      goto LABEL_76;
    if ( (int)v66 >= SLODWORD(svts->max_length) )
      break;
    v70 = (PartyListViewItem___c__DisplayClass31_0_o *)sub_1C942E4(PartyListViewItem___c__DisplayClass31_0_TypeInfo);
    PartyListViewItem___c__DisplayClass31_0___ctor(v70, 0);
    v71 = deck->fields.deckInfo;
    if ( !v71 )
      goto LABEL_76;
    v72 = v71->fields.svts;
    if ( !v72 )
      goto LABEL_76;
    if ( (unsigned int)v66 >= LODWORD(v72->max_length) )
      goto LABEL_377;
    v73 = v72->m_Items[v66];
    if ( v73 && v70 )
    {
      userSvtId = v73->fields.userSvtId;
      v70->fields.npcSvtId = v73->fields.npcFollowerSvtId;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_44229676(
                   questRestrictionInfo,
                   v73->fields.initPos,
                   0);
      if ( (int)v66 >= DeckMemberMax && (userSvtId || v70->fields.npcSvtId) )
        v67 = 1;
      if ( !(Instance & 1 | (v70->fields.npcSvtId == 0)) )
      {
        v75 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v75,
          (Il2CppObject *)v70,
          Method_PartyListViewItem___c__DisplayClass31_0___ctor_b__0__,
          0);
        Instance = BasicHelper__Any_object_(
                     (System_Collections_Generic_List_T__o *)v311,
                     (System_Func_T__bool__o *)v75,
                     (const MethodInfo_3185468 *)Method_BasicHelper_Any_FollowerInfo___);
        v68 += Instance & 1;
      }
      ++v66;
      v65 = deck->fields.deckInfo;
      if ( v65 )
        continue;
    }
    goto LABEL_76;
  }
  if ( ((v68 == v60) & (v67 ^ 1)) != 0 )
  {
    v42 = follower;
    goto LABEL_118;
  }
  v76 = BalanceConfig_TypeInfo;
  v42 = follower;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v76 = BalanceConfig_TypeInfo;
  }
  NpcServantFollowerIds = (System_Int64_array *)sub_1C94140(
                                                  long___TypeInfo,
                                                  (unsigned int)v76->static_fields->DeckMemberMax);
  Instance = (__int64)v311;
  if ( !v311 )
    goto LABEL_76;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v316,
    v311,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
  v321 = v316;
  while ( 1 )
  {
    v77 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v321,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    if ( !v77 )
      break;
    if ( !v321.fields._current )
      sub_1C942F0(v77, v78);
    monitor = (Il2CppClass *)v321.fields._current[5].monitor;
    if ( monitor )
    {
      v81 = LODWORD(v321.fields._current[6].klass) - 1;
      if ( v81 >= 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_1C942F0(v77, v78);
        if ( (unsigned int)v81 >= LODWORD(NpcServantFollowerIds->max_length) )
          sub_1C942F8(v77);
        v82 = &NpcServantFollowerIds->obj.klass + (unsigned int)v81;
        goto LABEL_93;
      }
      NpcDeployIdx = PartyListViewItem__GetNpcDeployIdx(this, NpcServantFollowerIds, v79);
      if ( (NpcDeployIdx & 0x80000000) == 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_1C942F0(NpcDeployIdx, v84);
        if ( (unsigned int)NpcDeployIdx >= LODWORD(NpcServantFollowerIds->max_length) )
          sub_1C942F8(NpcDeployIdx);
        v82 = &NpcServantFollowerIds->obj.klass + (unsigned int)NpcDeployIdx;
LABEL_93:
        v82[4] = monitor;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v321,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
  v85 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v85 = BalanceConfig_TypeInfo;
  }
  userServantList = (UserServantEntity_array *)sub_1C94140(
                                                 UserServantEntity___TypeInfo,
                                                 (unsigned int)v85->static_fields->DeckMemberMax);
  for ( i = 0; ; ++i )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( i >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 172LL) )
      break;
    v89 = deck->fields.deckInfo;
    if ( !v89 )
      goto LABEL_76;
    v90 = v89->fields.svts;
    if ( !v90 )
      goto LABEL_76;
    if ( (unsigned int)i >= LODWORD(v90->max_length) )
      goto LABEL_377;
    v91 = v90->m_Items[i];
    if ( !v91 )
      goto LABEL_76;
    if ( v91->fields.userSvtId )
    {
      UserServantDeployIndex = PartyListViewItem__GetUserServantDeployIndex(
                                 (PartyListViewItem_o *)Instance,
                                 userServantList,
                                 NpcServantFollowerIds,
                                 v87);
      if ( (UserServantDeployIndex & 0x80000000) == 0 )
      {
        v93 = UserServantDeployIndex;
        if ( UserServantDeployIndex < DeckMemberMax )
        {
          Instance = (__int64)UserEventDeckEntity__GetUserServant(deck, i, 0);
          if ( !userServantList )
            goto LABEL_76;
          v100 = Instance;
          if ( Instance )
          {
            Instance = sub_1C941D4(Instance, userServantList->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_378:
              v281 = sub_1C94314();
              sub_1C941C0(v281, 0);
            }
          }
          if ( v93 >= LODWORD(userServantList->max_length) )
            goto LABEL_377;
          v101 = &userServantList->obj.klass + v93;
          v101[4] = (Il2CppClass *)v100;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v101 + 4), v100, v94, v95, v96, v97, v98, v99);
          questRestrictionInfo = v306;
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
                      (System_Collections_Generic_List_FollowerInfo__o *)v311,
                      v86);
  }
LABEL_118:
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      v42 = *(FollowerInfo_o **)(Instance + 24);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        v298 = *(_DWORD *)(Instance + 32);
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          followerGrandGraphIda = *(_DWORD *)(Instance + 36);
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( Instance )
          {
            v299 = *(_DWORD *)(Instance + 40);
            goto LABEL_126;
          }
        }
      }
    }
    goto LABEL_76;
  }
  followerGrandGraphIda = followerGrandGraphId;
  v298 = followerClassId;
  v299 = followerDeckId;
LABEL_126:
  v102 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v102 = BalanceConfig_TypeInfo;
  }
  v103 = (struct PartyOrganizationListViewItem_array *)sub_1C94140(
                                                         PartyOrganizationListViewItem___TypeInfo,
                                                         (unsigned int)v102->static_fields->DeckMemberMax);
  this->fields.memberList = v103;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.memberList,
    (int32_t)v103,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  v302 = v42;
  if ( !isNew && questRestrictionInfo->fields.isNpcEditablePos )
  {
    v110 = DeckMemberMax;
    v111 = v304;
    *(_QWORD *)v307 = v110;
    v112 = 0;
    v287 = -1;
    while ( 1 )
    {
      for ( j = 8 * v112 + 32; ; j += 8 )
      {
        v114 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v114 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v112 >= v114->static_fields->DeckMemberMax )
          goto LABEL_371;
        v115 = (PartyListViewItem___c__DisplayClass31_1_o *)sub_1C942E4(PartyListViewItem___c__DisplayClass31_1_TypeInfo);
        PartyListViewItem___c__DisplayClass31_1___ctor(v115, 0);
        if ( v313 )
        {
          v117 = deck->fields.deckInfo;
          if ( !v117 )
            goto LABEL_76;
          v118 = v117->fields.svts;
          if ( !v118 )
            goto LABEL_76;
          if ( v112 >= LODWORD(v118->max_length) )
            goto LABEL_377;
          v119 = *(__int64 *)((char *)&v118->obj.klass + j);
          if ( !v119 )
            goto LABEL_76;
          v120 = (int32_t *)(v119 + 76);
        }
        else
        {
          Instance = (__int64)PartyListViewItem__GetMember(v111, v112, v116);
          if ( !Instance )
            goto LABEL_76;
          v120 = (int32_t *)(Instance + 372);
        }
        initPos = *v120;
        if ( (__int64)v112 < *(__int64 *)v307 )
          break;
        v122 = (unsigned int *)*p_memberList;
        v123 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34909064(v123, v112, 0, v16, questRestrictionInfo, 1, initPos, 0, 0);
        if ( !v122 )
          goto LABEL_76;
        if ( v123 )
        {
          Instance = sub_1C941D4(v123, *(_QWORD *)(*(_QWORD *)v122 + 64LL));
          if ( !Instance )
            goto LABEL_378;
        }
        if ( v112 >= v122[6] )
          goto LABEL_377;
        *(_QWORD *)((char *)v122 + j) = v123;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)((char *)v122 + j),
          (int32_t)v123,
          v124,
          v125,
          v126,
          v127,
          v128,
          v129);
        ++v112;
      }
      if ( !v115 )
        goto LABEL_76;
      v115->fields.chkIdx = v112 + 1;
      followera = 0;
      followerClassIda = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_44229676(questRestrictionInfo, initPos, 0);
      v131 = 0;
      v291 = Instance;
      if ( (Instance & 1) != 0 )
      {
        if ( !NpcServantFollowerIds )
          goto LABEL_76;
        if ( v112 >= LODWORD(NpcServantFollowerIds->max_length) )
          goto LABEL_377;
        v132 = *(int64_t *)((char *)&NpcServantFollowerIds->obj.klass + j);
        v131 = v132 >= 1
            && v115->fields.chkIdx != v295
            && PartyListViewItem__SetNpcFollowerInfo(
                 this,
                 &followera,
                 &followerClassIda,
                 npcFollowerInfoList,
                 v132,
                 initPos,
                 v130);
      }
      v288 = !QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0)
          && QuestRestrictionInfo__IsPositionFixNpc(questRestrictionInfo, initPos, 0);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                            (PartyOrganizationUtility_o *)Instance,
                            initPos,
                            0);
      if ( Instance && ((v291 ^ 1) & 1) == 0 )
      {
        v133 = (FollowerInfo_o *)Instance;
        if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0) )
          v134 = 0;
        else
          v134 = v298;
        IsNpc = FollowerInfo__get_IsNpc(v133, 0);
        v136 = (unsigned int *)*p_memberList;
        if ( IsNpc )
          v137 = 0;
        else
          v137 = v299;
        followerDeckIda = v137;
        v16 = setupInfo;
        v138 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34870876(
          v138,
          v112,
          v133,
          v134,
          followerGrandGraphIda,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          followerDeckIda,
          initPos,
          0,
          0);
LABEL_174:
        if ( !v136 )
          goto LABEL_76;
        v111 = v304;
        if ( v138 )
        {
          Instance = sub_1C941D4(v138, *(_QWORD *)(*(_QWORD *)v136 + 64LL));
          if ( !Instance )
            goto LABEL_378;
        }
        if ( v112 >= v136[6] )
          goto LABEL_377;
        v147 = (GrandQuestFolderBoardItem_o *)((char *)v136 + j);
        v148 = (int)v138;
        *(_QWORD *)((char *)v136 + j) = v138;
        goto LABEL_179;
      }
      if ( v131 || v115->fields.chkIdx == FollowerIndex )
      {
        v145 = followera;
        v136 = (unsigned int *)*p_memberList;
        if ( followera )
        {
          v146 = followerClassIda;
          v138 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34870876(
            v138,
            v112,
            v145,
            v146,
            0,
            v16,
            questRestrictionInfo,
            0,
            0,
            v299,
            initPos,
            0,
            0);
          goto LABEL_174;
        }
        v151 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
        v152 = v151;
        if ( v302 )
          PartyOrganizationListViewItem___ctor_34870876(
            v151,
            v112,
            v302,
            v298,
            followerGrandGraphIda,
            v16,
            questRestrictionInfo,
            0,
            0,
            v299,
            initPos,
            0,
            0);
        else
          PartyOrganizationListViewItem___ctor_34909064(v151, v112, 1, v16, questRestrictionInfo, 1, initPos, 0, 0);
        v111 = v304;
        if ( !v136 )
          goto LABEL_76;
        if ( v152 )
        {
          Instance = sub_1C941D4(v152, *(_QWORD *)(*(_QWORD *)v136 + 64LL));
          if ( !Instance )
            goto LABEL_378;
        }
        if ( v112 >= v136[6] )
          goto LABEL_377;
        v147 = (GrandQuestFolderBoardItem_o *)((char *)v136 + j);
        v148 = (int)v152;
        *(_QWORD *)((char *)v136 + j) = v152;
LABEL_179:
        sub_1C9403C(v147, v148, v139, v140, v141, v142, v143, v144);
        goto LABEL_180;
      }
      if ( v288 )
        break;
      if ( !NpcServantFollowerIds )
        goto LABEL_76;
      v111 = v304;
      if ( v112 >= LODWORD(NpcServantFollowerIds->max_length) )
        goto LABEL_377;
      if ( *(Il2CppClass **)((char *)&NpcServantFollowerIds->obj.klass + j) )
      {
        Instance = System_Linq_Enumerable__Count_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v311,
                     (const MethodInfo_31BC830 *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
        if ( (int)Instance < 1 )
        {
LABEL_210:
          v157 = (unsigned int *)*p_memberList;
        }
        else
        {
          if ( !v311 )
            goto LABEL_76;
          v170 = v311;
          v171 = 0;
          while ( 1 )
          {
            Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                  v170,
                                  v171,
                                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
            if ( !Instance )
              goto LABEL_76;
            if ( v112 >= LODWORD(NpcServantFollowerIds->max_length) )
              goto LABEL_377;
            if ( *(Il2CppClass **)(Instance + 88) == *(Il2CppClass **)((char *)&NpcServantFollowerIds->obj.klass + j) )
              break;
            v170 = v311;
            if ( ++v171 >= System_Linq_Enumerable__Count_object_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)v311,
                             (const MethodInfo_31BC830 *)Method_System_Linq_Enumerable_Count_FollowerInfo___) )
              goto LABEL_210;
          }
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                v311,
                                v171,
                                (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
          v157 = (unsigned int *)*p_memberList;
          if ( Instance )
          {
            v174 = *(_QWORD *)(Instance + 40);
            v175 = (FollowerInfo_o *)Instance;
            if ( !v174 )
              goto LABEL_76;
            if ( !*(_DWORD *)(v174 + 24) )
              goto LABEL_377;
            v176 = *(_QWORD *)(v174 + 32);
            if ( !v176 )
              goto LABEL_76;
            v177 = *(_DWORD *)(v176 + 32);
            v172 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_34870876(
              v172,
              v112,
              v175,
              v177,
              0,
              setupInfo,
              questRestrictionInfo,
              0,
              1,
              v299,
              initPos,
              0,
              0);
            if ( !v157 )
              goto LABEL_76;
            v111 = v304;
            if ( !v172 )
            {
LABEL_234:
              if ( v112 >= v157[6] )
                goto LABEL_377;
              v168 = (GrandQuestFolderBoardItem_o *)((char *)v157 + j);
              v169 = (int)v172;
              *(_QWORD *)((char *)v157 + j) = v172;
LABEL_236:
              sub_1C9403C(v168, v169, v162, v163, v164, v165, v166, v167);
              v16 = setupInfo;
              goto LABEL_180;
            }
LABEL_233:
            Instance = sub_1C941D4(v172, *(_QWORD *)(*(_QWORD *)v157 + 64LL));
            if ( !Instance )
              goto LABEL_378;
            goto LABEL_234;
          }
          v111 = v304;
        }
        v172 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34909064(v172, v112, 0, setupInfo, questRestrictionInfo, 1, initPos, 0, 0);
LABEL_231:
        if ( !v157 )
          goto LABEL_76;
        if ( !v172 )
          goto LABEL_234;
        goto LABEL_233;
      }
      if ( !userServantList )
        goto LABEL_76;
      if ( v112 >= LODWORD(userServantList->max_length) )
        goto LABEL_377;
      PartyListViewItem__EventDeckMySvtSlotProcess(
        this,
        initPos,
        v112,
        *(UserServantEntity_o **)((char *)&userServantList->obj.klass + j),
        deck,
        v291 & 1,
        isReadyForSortie,
        isRemoveActiveGrandBoardSvt,
        methoda);
LABEL_180:
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_76;
      if ( v112 >= LODWORD(memberList->max_length) )
        goto LABEL_377;
      Instance = *(__int64 *)((char *)&memberList->obj.klass + j);
      if ( !Instance )
        goto LABEL_76;
      cost = this->fields.cost;
      ++v112;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                        + cost;
    }
    v153 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_FollowerInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v153,
      (Il2CppObject *)v115,
      Method_PartyListViewItem___c__DisplayClass31_1___ctor_b__1__,
      0);
    v154 = System_Linq_Enumerable__Where_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v311,
             (System_Func_TSource__bool__o *)v153,
             (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
    v155 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C941D4(v154, FollowerInfo___TypeInfo);
    if ( !v155 )
      v155 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                    v154,
                                                                    (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
    if ( System_Linq_Enumerable__Any_object_(
           v155,
           (const MethodInfo_31A7F44 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
    {
      Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                            v155,
                            0,
                            (const MethodInfo_31C04B4 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
      v111 = v304;
      v156 = (FollowerInfo_o *)Instance;
    }
    else
    {
      v111 = v304;
      Instance = (__int64)v311;
      if ( !v311 )
        goto LABEL_76;
      if ( v311->fields._size < 1 )
      {
LABEL_229:
        v157 = (unsigned int *)*p_memberList;
LABEL_230:
        v172 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34909064(v172, v112, 0, setupInfo, questRestrictionInfo, 0, initPos, 0, 0);
        goto LABEL_231;
      }
      v173 = 0;
      while ( 1 )
      {
        Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)Instance,
                              v173,
                              (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
        if ( !Instance || !NpcServantFollowerIds )
          goto LABEL_76;
        if ( v112 >= LODWORD(NpcServantFollowerIds->max_length) )
          goto LABEL_377;
        if ( *(Il2CppClass **)(Instance + 88) != *(Il2CppClass **)((char *)&NpcServantFollowerIds->obj.klass + j) )
        {
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                v311,
                                v173,
                                (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
          if ( !Instance )
            goto LABEL_76;
          if ( v287 < v173 && *(int *)(Instance + 96) <= 0 )
            break;
        }
        Instance = (__int64)v311;
        if ( ++v173 >= v311->fields._size )
          goto LABEL_229;
      }
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            v311,
                            v173,
                            (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
      v156 = (FollowerInfo_o *)Instance;
      v287 = v173;
    }
    v157 = (unsigned int *)*p_memberList;
    if ( v156 )
    {
      userSvtLeaderHash = v156->fields.userSvtLeaderHash;
      if ( !userSvtLeaderHash )
        goto LABEL_76;
      if ( !LODWORD(userSvtLeaderHash->max_length) )
        goto LABEL_377;
      v159 = userSvtLeaderHash->m_Items[0];
      if ( !v159 )
        goto LABEL_76;
      classId = v159->fields.classId;
      v161 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34870876(
        v161,
        v112,
        v156,
        classId,
        0,
        setupInfo,
        questRestrictionInfo,
        0,
        1,
        v299,
        initPos,
        0,
        0);
      if ( !v157 )
        goto LABEL_76;
      v111 = v304;
      if ( v161 )
      {
        Instance = sub_1C941D4(v161, *(_QWORD *)(*(_QWORD *)v157 + 64LL));
        if ( !Instance )
          goto LABEL_378;
      }
      if ( v112 >= v157[6] )
        goto LABEL_377;
      v168 = (GrandQuestFolderBoardItem_o *)((char *)v157 + j);
      *(_QWORD *)((char *)v157 + j) = v161;
      v169 = (int)v161;
      goto LABEL_236;
    }
    goto LABEL_230;
  }
  v300 = this;
  v303 = questRestrictionInfo->fields.myServantNumMax
       + (FollowerIndex > 0 && !questRestrictionInfo->fields.isNotTransitionSupportList);
  if ( !isNew )
  {
    if ( !userServantList )
      goto LABEL_76;
    if ( SLODWORD(userServantList->max_length) >= 1 )
    {
      v178 = 0;
      v179 = 0;
      v180 = 0;
      m_Items = userServantList->m_Items;
      while ( 1 )
      {
        v182 = (PartyListViewItem___c__DisplayClass31_2_o *)sub_1C942E4(PartyListViewItem___c__DisplayClass31_2_TypeInfo);
        PartyListViewItem___c__DisplayClass31_2___ctor(v182, 0);
        if ( !v182 )
          goto LABEL_76;
        v183 = v180 + 1;
        v182->fields.chkIdx = v180 + 1;
        if ( v180 >= LODWORD(userServantList->max_length) )
          goto LABEL_377;
        if ( m_Items[v180] )
          ++v179;
        v184 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v184,
          (Il2CppObject *)v182,
          Method_PartyListViewItem___c__DisplayClass31_2___ctor_b__2__,
          0);
        Instance = (__int64)System_Linq_Enumerable__Where_object_(
                              (System_Collections_Generic_IEnumerable_TSource__o *)npcFollowerInfoList,
                              (System_Func_TSource__bool__o *)v184,
                              (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
        max_length_low = LODWORD(userServantList->max_length);
        if ( v180 >= max_length_low )
          goto LABEL_377;
        questRestrictionInfo = v306;
        if ( m_Items[v180] )
        {
          if ( v182->fields.chkIdx > DeckMemberMax )
            goto LABEL_263;
          Instance = System_Linq_Enumerable__Any_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                       (const MethodInfo_31A7F44 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
          if ( v179 > v303 || (Instance & 1) != 0 )
            break;
        }
LABEL_265:
        ++v178;
        ++v180;
        if ( v183 >= SLODWORD(userServantList->max_length) )
          goto LABEL_266;
      }
      max_length_low = LODWORD(userServantList->max_length);
LABEL_263:
      if ( v180 >= max_length_low )
        goto LABEL_377;
      m_Items[v180] = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&m_Items[v178], 0, v185, v186, v187, v188, v189, v190);
      goto LABEL_265;
    }
  }
LABEL_266:
  v192 = DeckMemberMax;
  this = v300;
  v193 = setupInfo;
  v194 = v304;
  v195 = 0;
  v196 = 0;
LABEL_267:
  v197 = 8 * v195 + 32;
  for ( k = v195; ; ++k )
  {
    v199 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v199 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)k >= v199->static_fields->DeckMemberMax )
      break;
    v200 = (PartyListViewItem___c__DisplayClass31_3_o *)sub_1C942E4(PartyListViewItem___c__DisplayClass31_3_TypeInfo);
    PartyListViewItem___c__DisplayClass31_3___ctor(v200, 0);
    if ( v313 )
    {
      v202 = deck->fields.deckInfo;
      if ( !v202 )
        goto LABEL_76;
      v203 = v202->fields.svts;
      if ( !v203 )
        goto LABEL_76;
      if ( k >= LODWORD(v203->max_length) )
        goto LABEL_377;
      v204 = *(__int64 *)((char *)&v203->obj.klass + v197);
      if ( !v204 )
        goto LABEL_76;
      v205 = (int32_t *)(v204 + 76);
    }
    else
    {
      Instance = (__int64)PartyListViewItem__GetMember(v194, k, v201);
      if ( !Instance )
        goto LABEL_76;
      v205 = (int32_t *)(Instance + 372);
    }
    v206 = *v205;
    if ( (__int64)k < v192 )
    {
      if ( !v200 )
        goto LABEL_76;
      v195 = k + 1;
      v200->fields.chkIdx = k + 1;
      v318 = 0;
      v317 = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_44229676(questRestrictionInfo, v206, 0);
      v292 = Instance;
      if ( (Instance & 1) == 0 )
        goto LABEL_294;
      v216 = deck->fields.deckInfo;
      if ( !v216 )
        goto LABEL_76;
      v217 = v216->fields.svts;
      if ( !v217 )
        goto LABEL_76;
      if ( k >= LODWORD(v217->max_length) )
        goto LABEL_377;
      v218 = *(__int64 *)((char *)&v217->obj.klass + v197);
      if ( !v218 )
        goto LABEL_76;
      v219 = *(_QWORD *)(v218 + 64);
      if ( v219 >= 1 )
      {
        if ( v200->fields.chkIdx == v295 )
        {
          v289 = 0;
          v220 = 1;
          v308 = 1;
          goto LABEL_300;
        }
        v308 = PartyListViewItem__SetNpcFollowerInfo(this, &v318, &v317, npcFollowerInfoList, v219, v206, v215);
        v289 = 0;
LABEL_299:
        v220 = 1;
        goto LABEL_300;
      }
LABEL_294:
      if ( !v302 || questRestrictionInfo->fields.isNotTransitionSupportList )
      {
        v289 = 0;
        v308 = 0;
        goto LABEL_299;
      }
      chkIdx = v200->fields.chkIdx;
      v308 = 0;
      v220 = chkIdx != FollowerIndex;
      v289 = chkIdx == FollowerIndex;
LABEL_300:
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v206, 0);
      if ( NpcFollowerInfo && ((v292 ^ 1) & 1) == 0 )
      {
        v223 = NpcFollowerInfo;
        v224 = FollowerInfo__get_IsNpc(NpcFollowerInfo, 0);
        v225 = v298;
        if ( v224 )
          v225 = 0;
        v309 = v225;
        v226 = FollowerInfo__get_IsNpc(v223, 0);
        v227 = (unsigned int *)*p_memberList;
        if ( v226 )
          v228 = 0;
        else
          v228 = v299;
        followerDeckIdb = v228;
        v193 = setupInfo;
        v229 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_34870876(
          v229,
          k,
          v223,
          v309,
          followerGrandGraphIda,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          followerDeckIdb,
          v206,
          0,
          0);
        if ( !v227 )
          goto LABEL_76;
        v194 = v304;
        if ( v229 )
        {
          Instance = sub_1C941D4(v229, *(_QWORD *)(*(_QWORD *)v227 + 64LL));
          if ( !Instance )
            goto LABEL_378;
        }
        if ( k >= v227[6] )
          goto LABEL_377;
        *(_QWORD *)((char *)v227 + v197) = v229;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)((char *)v227 + v197),
          (int32_t)v229,
          v230,
          v231,
          v232,
          v233,
          v234,
          v235);
        v236 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_76;
        if ( k >= LODWORD(v236->max_length) )
          goto LABEL_377;
        v237 = deck->fields.deckInfo;
        if ( !v237 )
          goto LABEL_76;
        v195 = k + 1;
        v238 = v237->fields.svts;
        this = v300;
        if ( !v238 )
          goto LABEL_76;
        if ( k >= LODWORD(v238->max_length) )
          goto LABEL_377;
        v239 = *(__int64 *)((char *)&v238->obj.klass + v197);
        if ( !v239 )
          goto LABEL_76;
        v240 = *(__int64 *)((char *)&v236->obj.klass + v197);
        if ( !v240 )
          goto LABEL_76;
        ++v196;
        *(_DWORD *)(v240 + 372) = *(_DWORD *)(v239 + 76);
        goto LABEL_267;
      }
      if ( v308 || v200->fields.chkIdx == FollowerIndex )
      {
        v241 = v318;
        v242 = (unsigned int *)*p_memberList;
        if ( v318 )
        {
          v293 = v317;
          methodb = v220;
          v193 = setupInfo;
          v243 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34870876(
            v243,
            k,
            v241,
            v293,
            0,
            setupInfo,
            questRestrictionInfo,
            0,
            methodb,
            v299,
            v206,
            0,
            0);
          if ( !v242 )
            goto LABEL_76;
          v250 = v242;
          v194 = v304;
          this = v300;
        }
        else
        {
          *(_QWORD *)v294 = *p_memberList;
          v251 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
          v243 = v251;
          if ( v302 )
          {
            methodc = v220;
            v193 = setupInfo;
            PartyOrganizationListViewItem___ctor_34870876(
              v251,
              k,
              v302,
              v298,
              followerGrandGraphIda,
              setupInfo,
              questRestrictionInfo,
              0,
              methodc,
              v299,
              v206,
              0,
              0);
          }
          else
          {
            v193 = setupInfo;
            PartyOrganizationListViewItem___ctor_34909064(v251, k, 1, setupInfo, questRestrictionInfo, 1, v206, 0, 0);
          }
          v194 = v304;
          v250 = v242;
          this = v300;
          if ( !*(_QWORD *)v294 )
            goto LABEL_76;
        }
        if ( v243 )
        {
          Instance = sub_1C941D4(v243, *(_QWORD *)(*(_QWORD *)v250 + 64LL));
          if ( !Instance )
            goto LABEL_378;
        }
        if ( k >= v250[6] )
          goto LABEL_377;
        *(_QWORD *)((char *)v250 + v197) = v243;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)((char *)v250 + v197),
          (int32_t)v243,
          v244,
          v245,
          v246,
          v247,
          v248,
          v249);
        v255 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_76;
        if ( k >= LODWORD(v255->max_length) )
          goto LABEL_377;
        v256 = deck->fields.deckInfo;
        if ( !v256 )
          goto LABEL_76;
        v257 = v256->fields.svts;
        if ( !v257 )
          goto LABEL_76;
        if ( k >= LODWORD(v257->max_length) )
          goto LABEL_377;
        v258 = *(__int64 *)((char *)&v257->obj.klass + v197);
        if ( !v258 )
          goto LABEL_76;
        v259 = *(__int64 *)((char *)&v255->obj.klass + v197);
        if ( !v259 )
          goto LABEL_76;
        v196 += v289 || v308;
        *(_DWORD *)(v259 + 372) = *(_DWORD *)(v258 + 76);
        goto LABEL_267;
      }
      v252 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v252,
        (Il2CppObject *)v200,
        Method_PartyListViewItem___c__DisplayClass31_3___ctor_b__3__,
        0);
      v253 = System_Linq_Enumerable__Where_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v311,
               (System_Func_TSource__bool__o *)v252,
               (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v254 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C941D4(v253, FollowerInfo___TypeInfo);
      if ( !v254 )
        v254 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                      v253,
                                                                      (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
      Instance = System_Linq_Enumerable__Any_object_(
                   v254,
                   (const MethodInfo_31A7F44 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      v193 = setupInfo;
      if ( v196 < v303 && (Instance & 1) == 0 )
      {
        if ( !userServantList )
          goto LABEL_76;
        v194 = v304;
        if ( k >= LODWORD(userServantList->max_length) )
          goto LABEL_377;
        PartyListViewItem__EventDeckMySvtSlotProcess(
          this,
          v206,
          k,
          *(UserServantEntity_o **)((char *)&userServantList->obj.klass + v197),
          deck,
          v292 & 1,
          isReadyForSortie,
          isRemoveActiveGrandBoardSvt,
          methoda);
        ++v196;
LABEL_367:
        v278 = this->fields.memberList;
        if ( !v278 )
          goto LABEL_76;
        if ( k >= LODWORD(v278->max_length) )
          goto LABEL_377;
        Instance = *(__int64 *)((char *)&v278->obj.klass + v197);
        if ( !Instance )
          goto LABEL_76;
        v279 = this->fields.cost;
        this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                          + v279;
        goto LABEL_267;
      }
      if ( System_Linq_Enumerable__Any_object_(
             v254,
             (const MethodInfo_31A7F44 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
      {
        Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                              v254,
                              0,
                              (const MethodInfo_31C04B4 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
LABEL_352:
        v260 = (FollowerInfo_o *)Instance;
        v261 = (unsigned int *)*p_memberList;
        if ( Instance )
        {
          v262 = *(_QWORD *)(Instance + 40);
          if ( !v262 )
            goto LABEL_76;
          if ( !*(_DWORD *)(v262 + 24) )
            goto LABEL_377;
          v263 = *(_QWORD *)(v262 + 32);
          if ( !v263 )
            goto LABEL_76;
          v310 = *(_DWORD *)(v263 + 32);
          v264 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_34870876(
            v264,
            k,
            v260,
            v310,
            0,
            setupInfo,
            questRestrictionInfo,
            0,
            1,
            v299,
            v206,
            0,
            0);
          if ( !v261 )
            goto LABEL_76;
          v194 = v304;
          if ( v264 )
          {
            Instance = sub_1C941D4(v264, *(_QWORD *)(*(_QWORD *)v261 + 64LL));
            if ( !Instance )
              goto LABEL_378;
          }
          if ( k >= v261[6] )
            goto LABEL_377;
          *(_QWORD *)((char *)v261 + v197) = v264;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)((char *)v261 + v197),
            (int32_t)v264,
            v265,
            v266,
            v267,
            v268,
            v269,
            v270);
          v193 = setupInfo;
          goto LABEL_367;
        }
      }
      else
      {
        Instance = (__int64)v311;
        if ( !v311 )
          goto LABEL_76;
        if ( v311->fields._size > (int)k - v196 )
        {
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                v311,
                                (int)k - v196,
                                (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
          goto LABEL_352;
        }
        v261 = (unsigned int *)*p_memberList;
      }
      v271 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34909064(v271, k, 0, setupInfo, questRestrictionInfo, 0, v206, 0, 0);
      if ( !v261 )
        goto LABEL_76;
      if ( v271 )
      {
        Instance = sub_1C941D4(v271, *(_QWORD *)(*(_QWORD *)v261 + 64LL));
        if ( !Instance )
          goto LABEL_378;
      }
      if ( k >= v261[6] )
        goto LABEL_377;
      *(_QWORD *)((char *)v261 + v197) = v271;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)((char *)v261 + v197),
        (int32_t)v271,
        v272,
        v273,
        v274,
        v275,
        v276,
        v277);
      v193 = setupInfo;
      v194 = v304;
      goto LABEL_367;
    }
    v207 = (unsigned int *)*p_memberList;
    v208 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_34909064(v208, k, 0, v193, questRestrictionInfo, 1, v206, 0, 0);
    if ( !v207 )
      goto LABEL_76;
    if ( v208 )
    {
      Instance = sub_1C941D4(v208, *(_QWORD *)(*(_QWORD *)v207 + 64LL));
      if ( !Instance )
        goto LABEL_378;
    }
    if ( k >= v207[6] )
      goto LABEL_377;
    *(_QWORD *)((char *)v207 + v197) = v208;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)((char *)v207 + v197), (int32_t)v208, v209, v210, v211, v212, v213, v214);
    v197 += 8;
  }
LABEL_371:
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)v37);
  if ( (questRestrictionInfo->fields.isNpcEditablePos
     || !questRestrictionInfo->fields.isNpcOnlyBattle
     || QuestRestrictionInfo__IsExistGrand(questRestrictionInfo, 0))
    && !PartyListViewItem__GetStartDeckCondition(this, v280) )
  {
    *isReadyForSortie = 1;
  }
}


void PartyListViewItem___ctor_34692536(
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
  const MethodInfo *v28; // x2
  __int64 Master_object; // x0
  __int64 classId; // x1
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *UserServantList; // x0
  BalanceConfig_c *v33; // x8
  UserServantEntity_array *v34; // x24
  struct PartyOrganizationListViewItem_array *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  _BOOL4 v42; // w21
  System_Collections_Generic_List_int__o *v43; // x29
  System_Collections_Generic_List_int__o *v44; // x28
  ViewWaveEnemyMaster_o *v45; // x20
  ViewWaveEnemyEntity_array *EntityListFromQuestId; // x26
  int32_t ReachedWave; // w22
  int max_length; // w8
  int i; // w19
  ViewWaveEnemyEntity_o *v50; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  int32_t version; // w10
  struct System_Int32_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  struct System_Int32_array *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  struct System_Int32_array *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  Il2CppObject *v72; // x26
  int32_t v73; // w27
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v75; // w29
  struct DeckServant_o *v76; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v78; // x8
  int32_t initPos; // w26
  UserServantEntity_o *v80; // x28
  struct PartyOrganizationListViewItem_array *v81; // x21
  __int128 v82; // q0
  int64_t v83; // x0
  System_Int64_array *v84; // x20
  struct DeckServant_o *v85; // x8
  struct DeckServantData_array *v86; // x8
  DeckServantData_o *v87; // x8
  MethodInfo *svtEquipIds; // x25
  PartyOrganizationListViewItem_o *v89; // x29
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  Il2CppClass **v96; // x0
  struct PartyOrganizationListViewItem_array *v97; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w20
  __int64 v100; // x0
  MethodInfo *methoda; // [xsp+0h] [xbp-120h]
  int32_t v102; // [xsp+3Ch] [xbp-E4h]
  char v103; // [xsp+44h] [xbp-DCh]
  bool isClearedWave; // [xsp+44h] [xbp-DCh]
  int32_t v107; // [xsp+54h] [xbp-CCh]
  int v108; // [xsp+54h] [xbp-CCh]
  UserEventDeckEntity_o *v110; // [xsp+60h] [xbp-C0h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+68h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+90h] [xbp-90h]
  UserInterruptionQuestEntity_o *entity; // [xsp+B8h] [xbp-68h] BYREF

  if ( (byte_4D28002 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C94098(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C94098(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    byte_4D28002 = 1;
  }
  entity = 0;
  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v14, v15, v16, v17, v18, v19);
  v20 = questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  Master_object = PartyListViewItem__GetMaxCost(this, maxCost, v28);
  this->fields.maxCost = Master_object;
  if ( !deck )
    goto LABEL_105;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_105;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  this->fields._IsWaveBattleRestart_k__BackingField = restartWave > 0;
  v107 = index + 1;
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, index + 1, restartWave > 0, 0);
  v33 = BalanceConfig_TypeInfo;
  v34 = UserServantList;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v33 = BalanceConfig_TypeInfo;
  }
  v35 = (struct PartyOrganizationListViewItem_array *)sub_1C94140(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v33->static_fields->DeckMemberMax);
  this->fields.memberList = v35;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.memberList, (int32_t)v35, v36, v37, v38, v39, v40, v41);
  v110 = deck;
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  v102 = index;
  if ( questRestrictionInfo )
    v42 = !QuestRestrictionInfo__IsWaveSetupSwitchParty(questRestrictionInfo, 0);
  else
    LOBYTE(v42) = 1;
  v43 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v43,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  v44 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v44,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v42 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    if ( !*p_questRestrictionInfo )
      goto LABEL_105;
    v45 = (ViewWaveEnemyMaster_o *)Master_object;
    if ( !Master_object )
      goto LABEL_105;
    EntityListFromQuestId = ViewWaveEnemyMaster__GetEntityListFromQuestId(
                              (ViewWaveEnemyMaster_o *)Master_object,
                              (*p_questRestrictionInfo)->fields.questId,
                              0);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
    if ( !questRestrictionInfo )
      goto LABEL_105;
    if ( !Master_object )
      goto LABEL_105;
    ReachedWave = ReachedWaveInfoMaster__GetReachedWave(
                    (ReachedWaveInfoMaster_o *)Master_object,
                    questRestrictionInfo->fields.questId,
                    0);
    Master_object = ViewWaveEnemyMaster__IsSameUnknownNpcEncounter(v45, EntityListFromQuestId, ReachedWave, 0);
    v103 = Master_object;
    if ( !EntityListFromQuestId )
      goto LABEL_105;
    max_length = EntityListFromQuestId->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
LABEL_106:
          sub_1C942F8(Master_object);
        v50 = EntityListFromQuestId->m_Items[i];
        if ( !v50 )
          goto LABEL_105;
        if ( v50->fields.wave == v107 )
        {
          if ( !v43 )
            goto LABEL_105;
          Master_object = System_Collections_Generic_List_int___Contains(
                            v43,
                            v50->fields.classId,
                            (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Master_object & 1) == 0 )
          {
            classId = (unsigned int)v50->fields.classId;
            items = v43->fields._items;
            v52 = Method_System_Collections_Generic_List_int__Add__;
            ++v43->fields._version;
            if ( !items )
              goto LABEL_105;
            size = v43->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v43,
                classId,
                *(const MethodInfo_384DE10 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
            }
            else
            {
              v43->fields._size = size + 1;
              items->m_Items[size] = classId;
            }
          }
          if ( (v103 & 1) != 0
            || ReachedWave >= v50->fields.wave
            || (Master_object = ViewWaveEnemyEntity__IsUnknownDispInfo(v50, 0, 0, 0), (Master_object & 1) == 0) )
          {
            if ( !v44 )
              goto LABEL_105;
            Master_object = System_Collections_Generic_List_int___Contains(
                              v44,
                              v50->fields.classId,
                              (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( (Master_object & 1) == 0 )
            {
              classId = (unsigned int)v50->fields.classId;
              version = v44->fields._version;
              v55 = v44->fields._items;
LABEL_42:
              v56 = Method_System_Collections_Generic_List_int__Add__;
              v44->fields._version = version + 1;
              if ( !v55 )
                goto LABEL_105;
              v57 = v44->fields._size;
              if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v44,
                  classId,
                  *(const MethodInfo_384DE10 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
              }
              else
              {
                v44->fields._size = v57 + 1;
                v55->m_Items[v57] = classId;
              }
            }
          }
          else
          {
            Master_object = (__int64)WaveBattleWaveEnemyInfoItem_TypeInfo;
            if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
            if ( !v44 )
              goto LABEL_105;
            Master_object = System_Collections_Generic_List_int___Contains(
                              v44,
                              WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_UNKNOWN_CLASSID,
                              (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( (Master_object & 1) == 0 )
            {
              Master_object = (__int64)WaveBattleWaveEnemyInfoItem_TypeInfo;
              if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
                Master_object = (__int64)WaveBattleWaveEnemyInfoItem_TypeInfo;
              }
              version = v44->fields._version;
              v55 = v44->fields._items;
              classId = *(unsigned int *)(*(_QWORD *)(Master_object + 184) + 64LL);
              goto LABEL_42;
            }
          }
        }
        max_length = EntityListFromQuestId->max_length;
      }
    }
  }
  if ( !v43 )
    goto LABEL_105;
  v58 = System_Collections_Generic_List_int___ToArray(
          v43,
          (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.waveBattleEnemyClassIds = v58;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.waveBattleEnemyClassIds,
    (int32_t)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  if ( !v44 )
    goto LABEL_105;
  v65 = System_Collections_Generic_List_int___ToArray(
          v44,
          (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.trendDispWaveBattleEnemyClassIds = v65;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.trendDispWaveBattleEnemyClassIds,
    (int32_t)v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  isClearedWave = v107 < restartWave;
  this->fields._IsClearedWave_k__BackingField = v107 < restartWave;
  if ( !v42 )
  {
    this->fields._IsClearedWave_k__BackingField = 0;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v72 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2633A )
    {
      sub_1C94098(&NetworkManager_TypeInfo);
      byte_4D2633A = 1;
    }
    Master_object = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (__int64)NetworkManager_TypeInfo;
    }
    if ( questRestrictionInfo && v72 )
    {
      if ( !UserInterruptionQuestMaster__TryGetEntity(
              (UserInterruptionQuestMaster_o *)v72,
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
        isClearedWave = v107 <= UserInterruptionQuestEntity__GetAlreadySortiePartyNum(entity, restartWave, 0);
        this->fields._IsClearedWave_k__BackingField = isClearedWave;
        goto LABEL_64;
      }
    }
LABEL_105:
    sub_1C942F0(Master_object, classId);
  }
LABEL_64:
  Master_object = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Master_object = (__int64)BalanceConfig_TypeInfo;
  }
  v73 = 0;
  v108 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 176LL) * v102;
  while ( 1 )
  {
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (__int64)BalanceConfig_TypeInfo;
    }
    static_fields = *(struct BalanceConfig_StaticFields **)(Master_object + 184);
    if ( v73 >= static_fields->DeckMemberMax )
      break;
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v75 = v108 + v73;
    if ( v73 < static_fields->DeckMainMemberMax )
    {
      v76 = v110->fields.deckInfo;
      if ( !v76 )
        goto LABEL_105;
      svts = v76->fields.svts;
      if ( !svts )
        goto LABEL_105;
      if ( (unsigned int)v75 >= LODWORD(svts->max_length) )
        goto LABEL_106;
      v78 = svts->m_Items[v75];
      if ( !v78 )
        goto LABEL_105;
      initPos = v78->fields.initPos;
    }
    else
    {
      initPos = v73 + 1;
    }
    if ( !v34 )
      goto LABEL_105;
    if ( (unsigned int)v73 >= LODWORD(v34->max_length) )
      goto LABEL_106;
    v80 = v34->m_Items[v73];
    v81 = *p_memberList;
    if ( v80 )
    {
      v82 = *(_OWORD *)&v80->fields.id.fields.fakeValue;
      *(_OWORD *)&v113.fields.currentCryptoKey = *(_OWORD *)&v80->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v113.fields.fakeValue = v82;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v112 = v113;
      v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v112, 0);
      Master_object = (__int64)UserEventDeckEntity__GetEquipList_43813664(v110, v83, restartWave > 0, 0);
      v84 = (System_Int64_array *)Master_object;
      if ( restartWave < 1 )
      {
        svtEquipIds = 0;
      }
      else
      {
        v85 = v110->fields.deckInfo;
        if ( !v85 )
          goto LABEL_105;
        v86 = v85->fields.svts;
        if ( !v86 )
          goto LABEL_105;
        if ( (unsigned int)v75 >= LODWORD(v86->max_length) )
          goto LABEL_106;
        v87 = v86->m_Items[v75];
        if ( !v87 )
          goto LABEL_105;
        svtEquipIds = (MethodInfo *)v87->fields.svtEquipIds;
      }
      methoda = svtEquipIds;
      v20 = questRestrictionInfo;
      v89 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34897716(
        v89,
        v73,
        v80,
        v84,
        setupInfo,
        questRestrictionInfo,
        0,
        initPos,
        (System_Int32_array *)methoda,
        isClearedWave,
        0,
        0,
        0);
      if ( !v81 )
        goto LABEL_105;
    }
    else
    {
      v89 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_34909064(v89, v73, 0, setupInfo, v20, 1, initPos, 0, 0);
      if ( !v81 )
        goto LABEL_105;
    }
    if ( v89 )
    {
      Master_object = sub_1C941D4(v89, v81->obj.klass->_1.element_class);
      if ( !Master_object )
      {
        v100 = sub_1C94314();
        sub_1C941C0(v100, 0);
      }
    }
    if ( (unsigned int)v73 >= LODWORD(v81->max_length) )
      goto LABEL_106;
    v96 = &v81->obj.klass + v73;
    v96[4] = (Il2CppClass *)v89;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v96 + 4), (int32_t)v89, v90, v91, v92, v93, v94, v95);
    v97 = *p_memberList;
    if ( !*p_memberList )
      goto LABEL_105;
    if ( (unsigned int)v73 >= LODWORD(v97->max_length) )
      goto LABEL_106;
    Master_object = (__int64)v97->m_Items[v73];
    if ( !Master_object )
      goto LABEL_105;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)Master_object,
      this->fields.waveBattleEnemyClassIds,
      0);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_105;
    if ( (unsigned int)v73 >= LODWORD(memberList->max_length) )
      goto LABEL_106;
    Master_object = (__int64)memberList->m_Items[v73];
    if ( !Master_object )
      goto LABEL_105;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)Master_object,
                          0)
                      + cost;
    Master_object = (__int64)BalanceConfig_TypeInfo;
    ++v73;
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

  if ( (byte_4D28032 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TryAdd__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___set_Item__);
    sub_1C94098(&Method_System_ValueTuple_int__bool___ctor__);
    byte_4D28032 = 1;
  }
  v8 = *orderIdx;
  v9 = *userSvtId;
  p_value = (System_ValueTuple_int__bool__o)&value;
  value = 0;
  System_ValueTuple_int__bool____ctor(
    p_value,
    v8,
    0,
    (const MethodInfo_3BCB274 *)Method_System_ValueTuple_int__bool___ctor__);
  if ( !duplicationUserSvtIdDictionary )
    sub_1C942F0(v11, v12);
  v13 = value;
  if ( !System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____TryAdd(
          duplicationUserSvtIdDictionary,
          v9,
          v13,
          (const MethodInfo_34EF304 *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TryAdd__) )
  {
    v14 = (System_ValueTuple_int__bool__o)(*(_QWORD *)&System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____get_Item(
                                                         duplicationUserSvtIdDictionary,
                                                         *userSvtId,
                                                         (const MethodInfo_34EDAEC *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___get_Item__)
                                         & 0xFFFFFF00FFFFFFFFLL
                                         | 0x100000000LL);
    System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____set_Item(
      duplicationUserSvtIdDictionary,
      *userSvtId,
      v14,
      (const MethodInfo_34EDB78 *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___set_Item__);
  }
}


bool PartyListViewItem__CheckAndUpdateDuplicationGrandQuestServant(PartyListViewItem_o *this, const MethodInfo *method)
{
  ServantEntity_array *SvtEntityList; // x0
  PartyListViewItem___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x20
  System_Func_object__int__o *_9__116_0; // x21
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

  if ( (byte_4D28034 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_ServantEntity__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&System_Func_ServantEntity__int__TypeInfo);
    sub_1C94098(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C94098(&Method_System_Nullable_int___ctor__);
    sub_1C94098(&Method_System_Nullable_int__get_HasValue__);
    sub_1C94098(&Method_PartyListViewItem___c__CheckAndUpdateDuplicationGrandQuestServant_b__116_0__);
    sub_1C94098(&PartyListViewItem___c_TypeInfo);
    byte_4D28034 = 1;
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
  _9__116_0 = (System_Func_object__int__o *)v4->static_fields->__9__116_0;
  if ( !_9__116_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = PartyListViewItem___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__116_0 = (System_Func_object__int__o *)sub_1C942E4(System_Func_ServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__116_0,
      v7,
      Method_PartyListViewItem___c__CheckAndUpdateDuplicationGrandQuestServant_b__116_0__,
      0);
    static_fields = PartyListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__116_0 = (struct System_Func_ServantEntity__int__o *)_9__116_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__116_0,
      (int32_t)_9__116_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v5,
                                                               (System_Func_TSource__TResult__o *)_9__116_0,
                                                               (const MethodInfo_31D2810 *)Method_System_Linq_Enumerable_Select_ServantEntity__int___);
  v16 = System_Linq_Enumerable__ToArray_int_(
          v15,
          (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantMaster___);
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
                                         (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0)
      || (Member = (ServantEntity_o *)ServantEntity__GetNotSamePartyKey(Member, 0), !v16) )
    {
LABEL_50:
      sub_1C942F0(Member, v23);
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
        sub_1C942F8(Member);
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
                                        (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
              (const MethodInfo_39933EC *)Method_System_Nullable_int___ctor__);
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

  if ( (byte_4D28015 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D28015 = 1;
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
    sub_1C942F0(questRestrictionInfo, *(_QWORD *)&deckMemberCount);
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
  int v6; // w26
  int32_t i; // w21
  BalanceConfig_c *v8; // x0
  QuestRestrictionInfo_o *Member; // x0
  __int64 v10; // x1
  PartyOrganizationListViewItem_o *v11; // x22
  int32_t InitPos_k__BackingField; // w24
  RestrictionEntity_o *v13; // x23
  const MethodInfo *v14; // x5
  _BOOL4 IsActiveGrandBoardRestriction; // w8
  const MethodInfo *v16; // x4
  struct System_Int64_array *v17; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v19; // x24
  int64_t *m_Items; // x22
  const MethodInfo *v21; // x4
  PartyListViewItem___c_c *v22; // x0
  System_Func_KeyValuePair_long__ValueTuple_int__bool____int__o *_9__112_0; // x21
  Il2CppObject *v24; // x22
  struct PartyListViewItem___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v32; // x0
  PartyListViewItem___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__o *_9__112_1; // x21
  Il2CppObject *v36; // x22
  struct PartyListViewItem___c_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  PartyListViewItem___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x20
  System_Func_KeyValuePair_long__ValueTuple_int__bool____long__o *_9__112_2; // x21
  Il2CppObject *v48; // x22
  struct PartyListViewItem___c_StaticFields *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  struct System_Int64_array **p_duplicatedEquipmentUserSvtIdList; // x19
  PartyListViewItem_o *EquipUserSvtId; // [xsp+0h] [xbp-80h] BYREF
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+Ch] [xbp-74h] BYREF
  UserServantEntity_o *userServantEntity; // [xsp+10h] [xbp-70h] BYREF
  System_Int64_array *equipIdList; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4D28030 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_OrderBy_KeyValuePair_long__ValueTuple_int__bool____int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_KeyValuePair_long__ValueTuple_int__bool____long___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_KeyValuePair_long__ValueTuple_int__bool_____);
    sub_1C94098(&System_Func_KeyValuePair_long__ValueTuple_int__bool____int__TypeInfo);
    sub_1C94098(&System_Func_KeyValuePair_long__ValueTuple_int__bool____long__TypeInfo);
    sub_1C94098(&System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__TypeInfo);
    sub_1C94098(&Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__112_0__);
    sub_1C94098(&Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__112_1__);
    sub_1C94098(&Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__112_2__);
    sub_1C94098(&PartyListViewItem___c_TypeInfo);
    byte_4D28030 = 1;
  }
  userServantEntity = 0;
  equipIdList = 0;
  isChangeFriendShipSvtEquipSkill = 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    v4 = (System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___o *)sub_1C942E4(System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TypeInfo);
    System_Collections_Generic_Dictionary_long__ValueTuple_int__bool_____ctor(
      v4,
      (const MethodInfo_34ED1BC *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____ctor__);
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
        goto LABEL_52;
      v11 = (PartyOrganizationListViewItem_o *)Member;
      if ( Member->fields.restrictionWholeEntities )
      {
        Member = this->fields.questRestrictionInfo;
        if ( !Member )
          goto LABEL_52;
        InitPos_k__BackingField = v11->fields._InitPos_k__BackingField;
        Member = (QuestRestrictionInfo_o *)QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                             Member,
                                             InitPos_k__BackingField,
                                             0);
        if ( !v11->fields.userServantEntity )
          goto LABEL_52;
        v13 = (RestrictionEntity_o *)Member;
        if ( UserServantEntity__IsGrandServant(v11->fields.userServantEntity, 0) )
        {
          Member = this->fields.questRestrictionInfo;
          if ( !Member )
            goto LABEL_52;
          IsActiveGrandBoardRestriction = QuestRestrictionInfo__IsActiveGrandBoardRestriction(
                                            Member,
                                            InitPos_k__BackingField,
                                            0);
        }
        else
        {
          IsActiveGrandBoardRestriction = 0;
        }
        if ( (IsActiveGrandBoardRestriction || v13 != 0)
          && ((userServantEntity = 0,
               PartyListViewItem__GetGrandServantInfo(
                 this,
                 v13,
                 &userServantEntity,
                 &equipIdList,
                 &isChangeFriendShipSvtEquipSkill,
                 v14),
               userServantEntity)
           || v11->fields._IsUseGrandBoard_k__BackingField) )
        {
          v17 = v11->fields.equipIdList;
          if ( !v17 )
            goto LABEL_52;
          max_length = v17->max_length;
          if ( (int)max_length >= 1 )
          {
            v19 = 0;
            m_Items = v17->m_Items;
            do
            {
              if ( v19 >= (unsigned int)max_length )
                sub_1C942F8(Member);
              if ( *m_Items >= 1 )
              {
                isChangeFriendShipSvtEquipSkill = v6 + v19;
                PartyListViewItem__CheckAndAddDuplicationUserSvtId(
                  (PartyListViewItem_o *)Member,
                  v4,
                  &isChangeFriendShipSvtEquipSkill,
                  m_Items,
                  v16);
              }
              LODWORD(max_length) = v17->max_length;
              ++v19;
              ++m_Items;
            }
            while ( (__int64)v19 < (int)max_length );
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
            v21);
        }
      }
      v6 += 10;
    }
    v22 = PartyListViewItem___c_TypeInfo;
    if ( !PartyListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyListViewItem___c_TypeInfo);
      v22 = PartyListViewItem___c_TypeInfo;
    }
    _9__112_0 = v22->static_fields->__9__112_0;
    if ( !_9__112_0 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = PartyListViewItem___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v22->static_fields->__9;
      _9__112_0 = (System_Func_KeyValuePair_long__ValueTuple_int__bool____int__o *)sub_1C942E4(System_Func_KeyValuePair_long__ValueTuple_int__bool____int__TypeInfo);
      System_Func_KeyValuePair_long__ValueTuple_int__bool____int____ctor(
        _9__112_0,
        v24,
        Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__112_0__,
        0);
      static_fields = PartyListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__112_0 = _9__112_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__112_0,
        (int32_t)_9__112_0,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    v32 = System_Linq_Enumerable__OrderBy_KeyValuePair_long__ValueTuple_int__bool____int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v4,
            (System_Func_TSource__TKey__o *)_9__112_0,
            (const MethodInfo_31CBDA4 *)Method_System_Linq_Enumerable_OrderBy_KeyValuePair_long__ValueTuple_int__bool____int___);
    v33 = PartyListViewItem___c_TypeInfo;
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)v32;
    if ( !PartyListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyListViewItem___c_TypeInfo);
      v33 = PartyListViewItem___c_TypeInfo;
    }
    _9__112_1 = v33->static_fields->__9__112_1;
    if ( !_9__112_1 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = PartyListViewItem___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v33->static_fields->__9;
      _9__112_1 = (System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__o *)sub_1C942E4(System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__TypeInfo);
      System_Func_KeyValuePair_long__ValueTuple_int__bool____bool____ctor(
        _9__112_1,
        v36,
        Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__112_1__,
        0);
      v37 = PartyListViewItem___c_TypeInfo->static_fields;
      v37->__9__112_1 = _9__112_1;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v37->__9__112_1, (int32_t)_9__112_1, v38, v39, v40, v41, v42, v43);
    }
    v44 = System_Linq_Enumerable__Where_KeyValuePair_long__ValueTuple_int__bool___(
            v34,
            (System_Func_TSource__bool__o *)_9__112_1,
            (const MethodInfo_31E2328 *)Method_System_Linq_Enumerable_Where_KeyValuePair_long__ValueTuple_int__bool_____);
    v45 = PartyListViewItem___c_TypeInfo;
    v46 = v44;
    if ( !PartyListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyListViewItem___c_TypeInfo);
      v45 = PartyListViewItem___c_TypeInfo;
    }
    _9__112_2 = v45->static_fields->__9__112_2;
    if ( !_9__112_2 )
    {
      if ( !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        v45 = PartyListViewItem___c_TypeInfo;
      }
      v48 = (Il2CppObject *)v45->static_fields->__9;
      _9__112_2 = (System_Func_KeyValuePair_long__ValueTuple_int__bool____long__o *)sub_1C942E4(System_Func_KeyValuePair_long__ValueTuple_int__bool____long__TypeInfo);
      System_Func_KeyValuePair_long__ValueTuple_int__bool____long____ctor(
        _9__112_2,
        v48,
        Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__112_2__,
        0);
      v49 = PartyListViewItem___c_TypeInfo->static_fields;
      v49->__9__112_2 = _9__112_2;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v49->__9__112_2, (int32_t)_9__112_2, v50, v51, v52, v53, v54, v55);
    }
    v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_long__ValueTuple_int__bool____long_(
                                                                 v46,
                                                                 (System_Func_TSource__TResult__o *)_9__112_2,
                                                                 (const MethodInfo_31CDCEC *)Method_System_Linq_Enumerable_Select_KeyValuePair_long__ValueTuple_int__bool____long___);
    Member = (QuestRestrictionInfo_o *)System_Linq_Enumerable__ToArray_long_(
                                         v56,
                                         (const MethodInfo_31DC824 *)Method_System_Linq_Enumerable_ToArray_long___);
    if ( !this )
LABEL_52:
      sub_1C942F0(Member, v10);
    this->fields.duplicatedEquipmentUserSvtIdList = (struct System_Int64_array *)Member;
    p_duplicatedEquipmentUserSvtIdList = &this->fields.duplicatedEquipmentUserSvtIdList;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)p_duplicatedEquipmentUserSvtIdList,
      (int32_t)Member,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
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

  if ( (byte_4D28033 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Concat_long___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_long__string___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C94098(&System_Func_long__string__TypeInfo);
    sub_1C94098(&long___TypeInfo);
    sub_1C94098(&Method_System_Tuple_Create_string__bool___);
    sub_1C94098(&Method_PartyListViewItem___c__DisplayClass115_0__CheckDuplicationGrandServantEquipmentNameList_b__0__);
    sub_1C94098(&PartyListViewItem___c__DisplayClass115_0_TypeInfo);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    byte_4D28033 = 1;
  }
  v3 = sub_1C942E4(PartyListViewItem___c__DisplayClass115_0_TypeInfo);
  PartyListViewItem___c__DisplayClass115_0___ctor((PartyListViewItem___c__DisplayClass115_0_o *)v3, 0);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !QuestRestrictionInfo__IsExistGrand(questRestrictionInfo, 0) )
    return 0;
  v6 = (System_Int64_array *)sub_1C94140(long___TypeInfo, 0);
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
                (const MethodInfo_31B8E40 *)Method_System_Linq_Enumerable_Concat_long___);
        v6 = System_Linq_Enumerable__ToArray_long_(
               v14,
               (const MethodInfo_31DC824 *)Method_System_Linq_Enumerable_ToArray_long___);
      }
    }
    ++v7;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v6, 0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !v3 )
LABEL_20:
    sub_1C942F0(IsNullOrEmpty, v13);
  *(_QWORD *)(v3 + 16) = IsNullOrEmpty;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)IsNullOrEmpty, v16, v17, v18, v19, v20, v21);
  v22 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_long__string__TypeInfo);
  System_Func_long__object____ctor(
    v22,
    (Il2CppObject *)v3,
    Method_PartyListViewItem___c__DisplayClass115_0__CheckDuplicationGrandServantEquipmentNameList_b__0__,
    0);
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v6,
                                                               (System_Func_TSource__TResult__o *)v22,
                                                               (const MethodInfo_31D1BD0 *)Method_System_Linq_Enumerable_Select_long__string___);
  v24 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v23,
                                 (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_string___);
  v25 = (Il2CppObject *)System_String__Join((System_String_o *)StringLiteral_43/*"\n"*/, v24, 0);
  return (System_Tuple_string__bool__o *)System_Tuple__Create_object__bool_(
                                           v25,
                                           v8 & 1,
                                           (const MethodInfo_326E354 *)Method_System_Tuple_Create_string__bool___);
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
  __int64 v40; // x20
  __int64 sortValue2B_low; // x21
  __int64 v42; // x25
  __int64 v43; // x8
  __int64 v44; // x8
  struct QuestRestrictionInfo_o *v45; // x8
  unsigned int k; // w20
  struct PartyOrganizationListViewItem_array *v47; // x8
  PartyOrganizationListViewItem_o *v48; // x8
  int j; // w21
  struct PartyOrganizationListViewItem_array *v50; // x8

  if ( (byte_4D28008 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D28008 = 1;
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
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( IsUseOldMaster )
        {
          v40 = *(_QWORD *)&IsUseOldMaster->fields.basePosition.fields.y;
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( IsUseOldMaster )
          {
            if ( v40 )
            {
              sortValue2B_low = LODWORD(IsUseOldMaster->fields.sortValue2B);
              if ( (int)sortValue2B_low >= 1 )
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
                  if ( sortValue2B_low != ++v42 )
                  {
                    v43 = *(_QWORD *)(v40 + 128);
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
        sub_1C942F0(IsUseOldMaster, method);
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
    sub_1C942F8(IsUseOldMaster);
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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.deckName, (int32_t)DefaultDeckName, v4, v5, v6, v7, v8, v9);
}


void PartyListViewItem__ClearEquip(PartyListViewItem_o *this, const MethodInfo *method)
{
  unsigned int i; // w20
  PartyOrganizationListViewItem_o *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w22

  if ( (byte_4D2800F & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D2800F = 1;
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
      goto LABEL_16;
    if ( i >= LODWORD(memberList->max_length) )
      sub_1C942F8(v4);
    v4 = memberList->m_Items[i];
    if ( !v4 )
LABEL_16:
      sub_1C942F0(v4, method);
    if ( !v4->fields.isFollower && !v4->fields.isRestrictionGrandServant && !v4->fields.isRestrictionActiveGrandBoard )
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

  if ( (byte_4D28010 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D28010 = 1;
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
      sub_1C942F8(v4);
    v4 = memberList->m_Items[i];
    if ( !v4 )
LABEL_12:
      sub_1C942F0(v4, method);
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
    sub_1C942F0(this, *(_QWORD *)&num);
  }
  if ( LODWORD(v7->max_length) <= num )
LABEL_9:
    sub_1C942F8(this);
  this = (PartyListViewItem_o *)v7->m_Items[num];
  if ( !this )
    goto LABEL_8;
  PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)this, 0);
  PartyListViewItem__CheckRestriction(v5, v8);
}


void PartyListViewItem__ClearMember_34698504(PartyListViewItem_o *this, const MethodInfo *method)
{
  unsigned int v3; // w21
  PartyOrganizationListViewItem_o *IsGrandRelatedRestriction; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v6; // x8
  char v7; // w20
  struct PartyOrganizationListViewItem_array *v8; // x8
  int32_t cost; // w20

  if ( (byte_4D2800E & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D2800E = 1;
  }
  v3 = 0;
  this->fields.cost = 0;
  while ( 1 )
  {
    IsGrandRelatedRestriction = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsGrandRelatedRestriction = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v3 >= SHIDWORD(IsGrandRelatedRestriction->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_22;
    if ( v3 >= LODWORD(memberList->max_length) )
      goto LABEL_23;
    IsGrandRelatedRestriction = memberList->m_Items[v3];
    if ( !IsGrandRelatedRestriction )
      goto LABEL_22;
    IsGrandRelatedRestriction = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__get_IsGrandRelatedRestriction(
                                                                     IsGrandRelatedRestriction,
                                                                     0);
    v6 = this->fields.memberList;
    if ( !v6 )
      goto LABEL_22;
    if ( v3 >= LODWORD(v6->max_length) )
      goto LABEL_23;
    v7 = (char)IsGrandRelatedRestriction;
    IsGrandRelatedRestriction = v6->m_Items[v3];
    if ( !IsGrandRelatedRestriction )
LABEL_22:
      sub_1C942F0(IsGrandRelatedRestriction, method);
    if ( !(v7 & 1 | IsGrandRelatedRestriction->fields.isFollower) )
      PartyOrganizationListViewItem__Empty(IsGrandRelatedRestriction, 0);
    if ( (v7 & 1) != 0 )
    {
      v8 = this->fields.memberList;
      if ( !v8 )
        goto LABEL_22;
      if ( v3 >= LODWORD(v8->max_length) )
LABEL_23:
        sub_1C942F8(IsGrandRelatedRestriction);
      IsGrandRelatedRestriction = v8->m_Items[v3];
      if ( !IsGrandRelatedRestriction )
        goto LABEL_22;
      cost = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(IsGrandRelatedRestriction, 0) + cost;
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

  if ( (byte_4D28007 & 1) == 0 )
  {
    sub_1C94098(&PartyListViewItem_TypeInfo);
    byte_4D28007 = 1;
  }
  v3 = (PartyListViewItem_o *)sub_1C942E4(PartyListViewItem_TypeInfo);
  PartyListViewItem___ctor(v3, v4);
  if ( !v3 )
    sub_1C942F0(v5, v6);
  PartyListViewItem__Set(v3, this, v7);
  return v3;
}


bool PartyListViewItem__CompMember(
        PartyListViewItem_o *this,
        PartyListViewItem_o *item,
        bool isCheckSupport,
        const MethodInfo *method)
{
  PartyListViewItem_o *v6; // x20
  int v8; // w22
  bool v9; // w21
  int32_t v10; // w25
  int32_t v11; // w24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v13; // x9

  v6 = this;
  if ( (byte_4D2801B & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D2801B = 1;
  }
  if ( !item )
LABEL_17:
    sub_1C942F0(this, item);
  if ( System_String__op_Inequality(v6->fields.deckName, item->fields.deckName, 0) )
    return 0;
  v8 = -1;
  v9 = isCheckSupport;
  do
  {
    this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    }
    v10 = v8 + 1;
    v11 = this->fields.waveBattleEnemyClassIds->m_Items[35];
    if ( v8 + 1 >= v11 )
      break;
    memberList = v6->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( (unsigned int)v10 >= LODWORD(memberList->max_length) )
      goto LABEL_18;
    v13 = item->fields.memberList;
    if ( !v13 )
      goto LABEL_17;
    if ( (unsigned int)++v8 >= LODWORD(v13->max_length) )
LABEL_18:
      sub_1C942F8(this);
    this = (PartyListViewItem_o *)memberList->m_Items[v10];
    if ( !this )
      goto LABEL_17;
  }
  while ( PartyOrganizationListViewItem__CompMember((PartyOrganizationListViewItem_o *)this, v13->m_Items[v10], v9, 0) );
  return v10 >= v11;
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewItem__EventDeckMySvtSlotProcess(
        PartyListViewItem_o *this,
        int32_t initPos,
        int32_t memberIndex,
        UserServantEntity_o *userServantEntity,
        UserEventDeckEntity_o *deck,
        bool isMyServantOrNpc,
        bool *isBaseModify,
        bool *isRemoveActiveGrandBoardSvt,
        const MethodInfo *method)
{
  UserServantEntity_o *v13; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  char v18; // w23
  int v19; // w29
  System_Int64_array *EquipList; // x24
  const MethodInfo *v21; // x4
  BalanceConfig_c *v22; // x0
  __int64 SvtEquipMax; // x1
  const MethodInfo *v24; // x6
  struct PartyOrganizationListViewItem_array *memberList; // x26
  System_Int64_array *v26; // x23
  EventUpValSetupInfo_o *setupInfo; // x24
  QuestRestrictionInfo_o *v28; // x25
  int32_t v29; // w27
  PartyOrganizationListViewItem_o *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  EventUpValSetupInfo_o *v37; // x22
  QuestRestrictionInfo_o *v38; // x23
  Il2CppClass **v39; // x0
  QuestRestrictionInfo_o *v40; // x25
  __int64 v41; // x26
  __int64 v42; // x27
  int32_t v43; // w26
  int32_t v44; // w27
  __int64 v45; // x0
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+2Ch] [xbp-74h] BYREF
  System_Int64_array *equipIdList; // [xsp+30h] [xbp-70h] BYREF
  UserServantEntity_o *userServantEntitya; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  v13 = userServantEntity;
  userServantEntitya = userServantEntity;
  if ( (byte_4D2801C & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&long___TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&PartyOrganizationListViewItem_TypeInfo);
    byte_4D2801C = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_37;
  questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsGrandServantRestriction(
                                                     questRestrictionInfo,
                                                     initPos,
                                                     0);
  v18 = (char)questRestrictionInfo;
  if ( v13
    && (questRestrictionInfo = (QuestRestrictionInfo_o *)UserServantEntity__IsGrandServant(v13, 0),
        ((unsigned __int8)questRestrictionInfo & 1) != 0) )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_37;
    questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsActiveGrandBoardRestriction(
                                                       questRestrictionInfo,
                                                       initPos,
                                                       0);
    v19 = (unsigned __int8)questRestrictionInfo & 1;
  }
  else
  {
    v19 = 0;
  }
  if ( !deck )
    goto LABEL_37;
  EquipList = UserEventDeckEntity__GetEquipList(deck, memberIndex, 0);
  equipIdList = EquipList;
  isChangeFriendShipSvtEquipSkill = UserEventDeckEntity__IsEquipTarget2SkillChange(deck, memberIndex, 0);
  questRestrictionInfo = (QuestRestrictionInfo_o *)PartyListViewItem__IsRemoveActiveGrandBoardSvt(
                                                     this,
                                                     v13,
                                                     EquipList,
                                                     initPos,
                                                     v21);
  if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
  {
    v13 = 0;
    userServantEntitya = 0;
    *isBaseModify = 1;
    *isRemoveActiveGrandBoardSvt = 1;
    goto LABEL_12;
  }
  if ( (v18 & 1) != 0 )
  {
    equipIdList = UserEventDeckEntity__GetGrandEquipList(deck, memberIndex, 0);
    PartyListViewItem__SetGrandServant(
      this,
      initPos,
      isMyServantOrNpc,
      &userServantEntitya,
      &equipIdList,
      &isChangeFriendShipSvtEquipSkill,
      v24);
    v13 = userServantEntitya;
    goto LABEL_22;
  }
  if ( v13 && isMyServantOrNpc )
  {
    v40 = this->fields.questRestrictionInfo;
    v42 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
    v41 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v49.fields.currentCryptoKey = v42;
    *(_QWORD *)&v49.fields.fakeValue = v41;
    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v49, 0);
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v13->fields.limitCount, 0);
    questRestrictionInfo = (QuestRestrictionInfo_o *)UserServantEntity__getDispLimitCount(v13, 0, 0);
    if ( v40 )
    {
      questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                         v40,
                                                         v43,
                                                         v44,
                                                         (int32_t)questRestrictionInfo,
                                                         initPos,
                                                         0,
                                                         0);
      if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
      {
        v13 = 0;
        userServantEntitya = 0;
      }
      goto LABEL_12;
    }
LABEL_37:
    sub_1C942F0(questRestrictionInfo, *(_QWORD *)&initPos);
  }
LABEL_12:
  if ( !(v18 & 1 | (v19 != 0)) )
  {
    if ( !EquipList )
      goto LABEL_37;
    v22 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    SvtEquipMax = (unsigned int)v22->static_fields->SvtEquipMax;
    if ( (int)SvtEquipMax < SLODWORD(EquipList->max_length) )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        SvtEquipMax = (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax;
      }
      equipIdList = (System_Int64_array *)sub_1C94140(long___TypeInfo, SvtEquipMax);
    }
  }
LABEL_22:
  memberList = this->fields.memberList;
  if ( v13 )
  {
    v26 = equipIdList;
    setupInfo = this->fields.setupInfo;
    v28 = this->fields.questRestrictionInfo;
    v29 = isChangeFriendShipSvtEquipSkill;
    v30 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_34897716(
      v30,
      memberIndex,
      v13,
      v26,
      setupInfo,
      v28,
      0,
      initPos,
      0,
      0,
      v29,
      0,
      0);
    if ( !memberList )
      goto LABEL_37;
  }
  else
  {
    v37 = this->fields.setupInfo;
    v38 = this->fields.questRestrictionInfo;
    v30 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_34909064(v30, memberIndex, 0, v37, v38, 1, initPos, 0, 0);
    if ( !memberList )
      goto LABEL_37;
  }
  if ( v30 )
  {
    questRestrictionInfo = (QuestRestrictionInfo_o *)sub_1C941D4(v30, memberList->obj.klass->_1.element_class);
    if ( !questRestrictionInfo )
    {
      v45 = sub_1C94314();
      sub_1C941C0(v45, 0);
    }
  }
  if ( LODWORD(memberList->max_length) <= memberIndex )
    sub_1C942F8(questRestrictionInfo);
  v39 = &memberList->obj.klass + memberIndex;
  v39[4] = (Il2CppClass *)v30;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v39 + 4), (int32_t)v30, v31, v32, v33, v34, v35, v36);
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

  if ( (byte_4D2802C & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_string__TypeInfo);
    byte_4D2802C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_string___ctor__);
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
      sub_1C942F8(AssetName);
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
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v18;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
        }
      }
    }
  }
  if ( !v3 )
LABEL_21:
    sub_1C942F0(AssetName, v4);
  if ( v3->fields._size < 1 )
    return 0;
  else
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_4D2802B & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&int___TypeInfo);
    byte_4D2802B = 1;
  }
  v6 = sub_1C94140(int___TypeInfo, (unsigned int)typeMax);
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
      sub_1C942F0(p_image, v5);
    if ( i >= LODWORD(memberList->max_length) )
LABEL_21:
      sub_1C942F8(p_image);
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
  const MethodInfo_386AB64 **v33; // x25
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
  const MethodInfo_386AB64 **v46; // x28
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

  if ( (byte_4D28019 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D28019 = 1;
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(SvtId, 0) >= 1 )
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v22, 0) >= 1 )
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
        sub_1C942F0(DeckConditionServantNumAndPosition, method);
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
          v33 = (const MethodInfo_386AB64 **)&Method_System_Collections_Generic_List_int____get_Item__;
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
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v38, 0) )
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
            DeckConditionServantNumAndPosition = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
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
                    (const MethodInfo_31C6B58 *)Method_System_Linq_Enumerable_Intersect_int___);
            v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                         v52,
                                                                         (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
            if ( System_Collections_Generic_List_Int32Enum___get_Item(
                   v68,
                   v44,
                   (const MethodInfo_385034C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
            {
              DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                             v53,
                                                             (const MethodInfo_31A7A14 *)Method_System_Linq_Enumerable_Any_int___);
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
                                                             (const MethodInfo_385034C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
              v33 = v46;
              if ( (_DWORD)DeckConditionServantNumAndPosition != 2 )
              {
                v43 = 1;
                v31 = v45;
                goto LABEL_136;
              }
              DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                             v53,
                                                             (const MethodInfo_31A7A14 *)Method_System_Linq_Enumerable_Any_int___);
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
            v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v69, 0);
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
                  if ( v60 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v70, 0) )
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
          sub_1C942F8(DeckConditionServantNumAndPosition);
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

  if ( (byte_4D28016 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D28016 = 1;
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
    sub_1C942F0(questRestrictionInfo, v11);
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
      sub_1C942F8(questRestrictionInfo);
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

  if ( (byte_4D28020 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C94098(&System_Collections_Generic_List_long__TypeInfo);
    byte_4D28020 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C942E4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_3852614 *)Method_System_Collections_Generic_List_long___ctor__);
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
      sub_1C942F8(EquipUserSvtId);
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
          *(const MethodInfo_3852E68 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
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
    sub_1C942F0(EquipUserSvtId, v5);
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_3854920 *)Method_System_Collections_Generic_List_long__ToArray__);
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
  if ( (byte_4D2802A & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    this = (PartyListViewItem_o *)sub_1C94098(&EventUpValInfo___TypeInfo);
    byte_4D2802A = 1;
  }
  setupInfo = v6->fields.setupInfo;
  if ( setupInfo )
  {
    setupInfo = (struct EventUpValSetupInfo_o *)setupInfo->fields.eventIdList;
    if ( !setupInfo )
LABEL_23:
      sub_1C942F0(this, eventId);
    v8 = *(_QWORD *)&setupInfo->fields.questPhase;
    if ( v8 )
    {
      if ( !(_DWORD)v8 )
LABEL_24:
        sub_1C942F8(this);
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
  v10 = (EventUpValInfo_array *)sub_1C94140(EventUpValInfo___TypeInfo, (unsigned int)v9->static_fields->DeckMemberMax);
  *eventUpValList = v10;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)eventUpValList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_4D28005 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_FollowerInfo___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C94098(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C94098(&Method_PartyListViewItem___c__DisplayClass36_0__GetFollowerIndex_b__0__);
    sub_1C94098(&PartyListViewItem___c__DisplayClass36_0_TypeInfo);
    byte_4D28005 = 1;
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
      (const MethodInfo_384E8E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v23 = v22;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
             &v23,
             (const MethodInfo_35E83A8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
      if ( !v8 )
        break;
      deckInfo = deck->fields.deckInfo;
      if ( !deckInfo )
        sub_1C942F0(v8, v9);
      svts = deckInfo->fields.svts;
      if ( !svts )
        sub_1C942F0(v8, v9);
      current = v23.fields._current;
      if ( (unsigned int)(v23.fields._current - 1) >= LODWORD(svts->max_length) )
        sub_1C942F8(v8);
      v13 = svts->m_Items[v23.fields._current - 1];
      if ( !v13 )
        sub_1C942F0(v8, v9);
      v14 = this->fields.questRestrictionInfo;
      if ( !v14 )
        sub_1C942F0(0, v9);
      if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_44229676(v14, v13->fields.initPos, 0) )
        goto LABEL_38;
    }
    current = 0;
LABEL_38:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v23,
      (const MethodInfo_35E83A4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    v18 = (PartyListViewItem___c__DisplayClass36_0_o *)sub_1C942E4(PartyListViewItem___c__DisplayClass36_0_TypeInfo);
    PartyListViewItem___c__DisplayClass36_0___ctor(v18, 0);
    if ( v18 )
    {
      v18->fields.chkIndex = current;
      v19 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v19,
        (Il2CppObject *)v18,
        Method_PartyListViewItem___c__DisplayClass36_0__GetFollowerIndex_b__0__,
        0);
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)fixNpcFollowerInfoList,
              (System_Func_T__bool__o *)v19,
              (const MethodInfo_3185468 *)Method_BasicHelper_Any_FollowerInfo___) )
        return current;
      goto LABEL_31;
    }
LABEL_39:
    sub_1C942F0(questRestrictionInfo, deck);
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

  if ( (byte_4D28031 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_long__string___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C94098(&System_Func_long__string__TypeInfo);
    sub_1C94098(&Method_PartyListViewItem___c__DisplayClass113_0__GetGrandQuestDuplicationEquipmentNameList_b__0__);
    sub_1C94098(&PartyListViewItem___c__DisplayClass113_0_TypeInfo);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28031 = 1;
  }
  v3 = sub_1C942E4(PartyListViewItem___c__DisplayClass113_0_TypeInfo);
  PartyListViewItem___c__DisplayClass113_0___ctor((PartyListViewItem___c__DisplayClass113_0_o *)v3, 0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.duplicatedEquipmentUserSvtIdList, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !v3 )
    sub_1C942F0(Master_object, v6);
  *(_QWORD *)(v3 + 16) = Master_object;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)Master_object, v7, v8, v9, v10, v11, v12);
  duplicatedEquipmentUserSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.duplicatedEquipmentUserSvtIdList;
  v14 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_long__string__TypeInfo);
  System_Func_long__object____ctor(
    v14,
    (Il2CppObject *)v3,
    Method_PartyListViewItem___c__DisplayClass113_0__GetGrandQuestDuplicationEquipmentNameList_b__0__,
    0);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               duplicatedEquipmentUserSvtIdList,
                                                               (System_Func_TSource__TResult__o *)v14,
                                                               (const MethodInfo_31D1BD0 *)Method_System_Linq_Enumerable_Select_long__string___);
  v16 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v15,
                                 (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_string___);
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
  const MethodInfo_345DA68 **v32; // x24
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
  const MethodInfo_345DA68 **v50; // x27
  PartyListViewItem___c__DisplayClass62_0_c **v51; // x24
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **v52; // x22
  System_Collections_IEnumerator_c **v53; // x26
  QuestRestrictionInfo_o *questRestrictionInfo; // x19
  int32_t v55; // w20
  int32_t v56; // w21
  int32_t v57; // w25
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  __int64 v59; // x1
  _BOOL8 IsRestriction_44209176; // x0
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

  if ( (byte_4D28018 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_BasicHelper_Any_int____79047624);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntityList__);
    sub_1C94098(&System_Func_int__bool__TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&long___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantGrandEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantGrandEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantGrandEntity__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_PartyListViewItem___c__DisplayClass62_0__GetGrandServantInfo_b__0__);
    sub_1C94098(&PartyListViewItem___c__DisplayClass62_0_TypeInfo);
    byte_4D28018 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    goto LABEL_96;
  list = (System_Collections_ICollection_o *)Master_object->fields.list;
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  v12 = (System_Int64_array *)sub_1C94140(long___TypeInfo, (unsigned int)v11->static_fields->GrandSvtEquipMax);
  *equipIdList = v12;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)equipIdList, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  *isChangeFriendShipSvtEquipSkill = 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(list, 0);
  if ( !restrictionEntity || IsNullOrEmpty )
    goto LABEL_79;
  v138 = isChangeFriendShipSvtEquipSkill;
  v139 = (GrandQuestFolderBoardItem_o *)equipIdList;
  v141 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v141,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
  v140 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v140,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !list )
    goto LABEL_96;
  v26 = Master_object;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
  v144 = Enumerator;
  if ( !Enumerator )
    sub_1C942F0(0, v28);
  v29 = &System_Collections_IEnumerator_TypeInfo;
  v30 = &System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo;
  v31 = &PartyListViewItem___c__DisplayClass62_0_TypeInfo;
  v32 = (const MethodInfo_345DA68 **)&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__;
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
        v38 = sub_1C6A420(v33, v35, 0);
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
        v43 = sub_1C6A420(v33, v40, 0);
      }
      v44 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
              v33,
              *(_QWORD *)(v43 + 8));
      v45 = sub_1C942E4(*v31);
      PartyListViewItem___c__DisplayClass62_0___ctor((PartyListViewItem___c__DisplayClass62_0_o *)v45, 0);
      if ( !v44 )
        sub_1C942F0(v46, v47);
      if ( !v26 )
        sub_1C942F0(v46, v47);
      if ( DataMasterBase_object__object__long___TryGetEntity(v26, &entity, *(_QWORD *)(v44 + 32), *v32) )
      {
        if ( !entity )
          sub_1C942F0(0, v48);
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
          sub_1C942F0(0, v59);
        if ( !questRestrictionInfo )
          sub_1C942F0(OverwriteStatus, v59);
        IsRestriction_44209176 = QuestRestrictionInfo__IsRestriction_44209176(
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
        if ( !IsRestriction_44209176 )
        {
          if ( !entity )
            sub_1C942F0(IsRestriction_44209176, v61);
          v63 = entity[5].klass;
          monitor = entity[5].monitor;
          v64 = this->fields.questRestrictionInfo;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v150.fields.currentCryptoKey = v63;
          *(_QWORD *)&v150.fields.fakeValue = monitor;
          v65 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v150, 0);
          if ( !entity )
            sub_1C942F0(v65, v66);
          v67 = v65;
          v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
                  0);
          if ( !entity )
            sub_1C942F0(0, v68);
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0);
          if ( !v64 )
            sub_1C942F0(DispLimitCount, v71);
          ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(v64, v67, v69, DispLimitCount, 0);
          if ( !v45 )
            sub_1C942F0(ServantIndividuality, ServantIndividuality);
          *(_QWORD *)(v45 + 16) = ServantIndividuality;
          sub_1C9403C(
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
            sub_1C942F0(v79, v80);
          if ( !LODWORD(targetVals->max_length) )
            sub_1C942F8(v79);
          if ( !targetVals->m_Items[0] )
            break;
          v88 = (System_Func_int__bool__o *)sub_1C942E4(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(
            v88,
            (Il2CppObject *)v45,
            Method_PartyListViewItem___c__DisplayClass62_0__GetGrandServantInfo_b__0__,
            0);
          v79 = BasicHelper__Any_int__51925480(
                  targetVals,
                  (System_Func_T__bool__o *)v88,
                  (const MethodInfo_31851E8 *)Method_BasicHelper_Any_int____79047624);
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
      v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v147, 0);
      if ( !entity )
        sub_1C942F0(v91, v92);
      v93 = entity[2];
      v94 = v91;
      *(Il2CppObject *)&v146.fields.currentCryptoKey = entity[1];
      *(Il2CppObject *)&v146.fields.fakeValue = v93;
      v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v146, 0);
      if ( v94 == v79 )
        break;
    }
    if ( !v141 )
      sub_1C942F0(v79, v80);
    items = v141->fields._items;
    v96 = Method_System_Collections_Generic_List_UserServantGrandEntity__Add__;
    ++v141->fields._version;
    if ( !items )
      sub_1C942F0(v79, v80);
    size = v141->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v141,
        (Il2CppObject *)v44,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
    }
    else
    {
      v98 = &items->obj.klass + size;
      v141->fields._size = size + 1;
      v98[4] = (Il2CppClass *)v44;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v98 + 4), v44, v81, v82, v83, v84, v85, v86);
    }
    if ( !v140 )
      sub_1C942F0(v99, v100);
    v107 = entity;
    v108 = v140->fields._items;
    v109 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
    ++v140->fields._version;
    if ( !v108 )
      sub_1C942F0(v99, v107);
    v110 = v140->fields._size;
    if ( (unsigned int)v110 >= LODWORD(v108->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v140,
        v107,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    }
    else
    {
      v111 = &v108->obj.klass + v110;
      v140->fields._size = v110 + 1;
      v111[4] = (Il2CppClass *)v107;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v111 + 4), (int32_t)v107, v101, v102, v103, v104, v105, v106);
    }
  }
  EquipUserServantIdList = UserServantGrandEntity__GetEquipUserServantIdList((UserServantGrandEntity_o *)v44, 0);
  v139->klass = (GrandQuestFolderBoardItem_c *)EquipUserServantIdList;
  sub_1C9403C(v139, (int32_t)EquipUserServantIdList, v132, v133, v134, v135, v136, v137);
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
      v116 = sub_1C6A420(v33, System_IDisposable_TypeInfo, 0);
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
                   (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          *userServantEntity = (UserServantEntity_o *)Item;
          sub_1C9403C(
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
                                                                          (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_UserServantGrandEntity__get_Item__);
          if ( Master_object )
          {
            v124 = UserServantGrandEntity__GetEquipUserServantIdList((UserServantGrandEntity_o *)Master_object, 0);
            v139->klass = (GrandQuestFolderBoardItem_c *)v124;
            sub_1C9403C(v139, (int32_t)v124, v125, v126, v127, v128, v129, v130);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_List_object___get_Item(
                                                                            v141,
                                                                            0,
                                                                            (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_UserServantGrandEntity__get_Item__);
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
        sub_1C942F0(Master_object, v9);
      }
    }
LABEL_79:
    *userServantEntity = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)userServantEntity, 0, v20, v21, v22, v23, v24, v25);
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

  if ( (byte_4D2802E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2802E = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.questRestrictionInfo )
  {
    memberList = this->fields.memberList;
    if ( !memberList )
LABEL_26:
      sub_1C942F0(questRestrictionInfo, v7);
    max_length = memberList->max_length;
    if ( (int)max_length >= 1 )
    {
      for ( i = 0; (__int64)i < (int)max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1C942F8(questRestrictionInfo);
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
        questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsGrandServantRestriction(
                                                           questRestrictionInfo,
                                                           v11->fields._InitPos_k__BackingField,
                                                           0);
        if ( ((unsigned __int8)questRestrictionInfo & 1) != 0
          && (v11->fields._IsGrandServant_k__BackingField || v11->fields._IsTempGrandServant_k__BackingField) )
        {
          SvtId = PartyOrganizationListViewItem__get_SvtId(v11, 0);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
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
              *(const MethodInfo_384DE10 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  UserServantGrandEntity_o *v16; // x24
  int32_t EquipFriendShipSkillChange_k__BackingField; // w26
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v19; // q0
  int32_t grandGraphId; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v21; // x25
  int64_t v22; // x27
  GrandSvtInfo_o *v23; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  _QWORD *v35; // x19
  __int64 v36; // x8
  __int64 v37; // x0
  __int64 v38; // x0
  char v39; // [xsp+4h] [xbp-ACh]
  System_Int64_array *userSvtEquipIds; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+30h] [xbp-80h]

  if ( (byte_4D2802F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_GrandSvtInfo___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&GrandSvtInfo_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_GrandSvtInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GrandSvtInfo__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_GrandSvtInfo___ctor__);
    sub_1C94098(&System_Collections_Generic_List_GrandSvtInfo__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2802F = 1;
  }
  if ( oldPartyItem && this->fields.questRestrictionInfo )
  {
    v6 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_GrandSvtInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_GrandSvtInfo___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UserServantGrandMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_48;
    v9 = Master_object;
    Master_object = (UserServantGrandMaster_o *)QuestRestrictionInfo__IsIgnoreSyncEquipGrand(
                                                  this->fields.questRestrictionInfo,
                                                  0);
    memberList = this->fields.memberList;
    v39 = (char)Master_object;
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
          sub_1C942F8(Master_object);
        v14 = memberList->m_Items[v13];
        if ( v14
          && v14->fields.isRestrictionGrandServant
          && v14->fields.userServantEntity
          && (v14->fields._IsGrandServant_k__BackingField || v14->fields._IsTempGrandServant_k__BackingField) )
        {
          SvtId = PartyOrganizationListViewItem__get_SvtId(memberList->m_Items[v13], 0);
          if ( !(*v12)->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(*v12);
          Master_object = (UserServantGrandMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                        SvtId,
                                                        0);
          if ( !v9 )
            goto LABEL_48;
          Master_object = (UserServantGrandMaster_o *)UserServantGrandMaster__GetEntityFromSvtId(
                                                        v9,
                                                        (int32_t)Master_object,
                                                        0);
          if ( !this->fields.questRestrictionInfo )
            goto LABEL_48;
          v16 = (UserServantGrandEntity_o *)Master_object;
          Master_object = (UserServantGrandMaster_o *)QuestRestrictionInfo__IsGrandServantRestriction(
                                                        this->fields.questRestrictionInfo,
                                                        v14->fields._InitPos_k__BackingField,
                                                        0);
          if ( v16 && ((unsigned __int8)Master_object & 1) != 0 )
          {
            if ( (v39 & 1) != 0 )
            {
              userSvtEquipIds = UserServantGrandEntity__GetEquipUserServantIdList(v16, 0);
              Master_object = (UserServantGrandMaster_o *)UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(
                                                            v16,
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
            v19 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            grandGraphId = v16->fields.grandGraphId;
            *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v42.fields.fakeValue = v19;
            v21 = v12;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v41 = v42;
            v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v41, 0);
            v23 = (GrandSvtInfo_o *)sub_1C942E4(GrandSvtInfo_TypeInfo);
            GrandSvtInfo___ctor(v23, grandGraphId, v22, userSvtEquipIds, EquipFriendShipSkillChange_k__BackingField, 0);
            if ( !v6 )
              goto LABEL_48;
            items = v6->fields._items;
            v31 = Method_System_Collections_Generic_List_GrandSvtInfo__Add__;
            ++v6->fields._version;
            if ( !items )
              goto LABEL_48;
            size = v6->fields._size;
            v12 = v21;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                (Il2CppObject *)v23,
                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &items->obj.klass + size;
              v6->fields._size = size + 1;
              v33[4] = (Il2CppClass *)v23;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v23, v24, v25, v26, v27, v28, v29);
            }
          }
        }
        LODWORD(max_length) = memberList->max_length;
      }
      while ( (__int64)++v13 < (int)max_length );
    }
    if ( !v6 )
LABEL_48:
      sub_1C942F0(Master_object, v8);
    return (GrandSvtInfo_array *)System_Collections_Generic_List_object___ToArray(
                                   v6,
                                   (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_GrandSvtInfo__ToArray__);
  }
  else
  {
    v35 = Method_System_Array_Empty_GrandSvtInfo___;
    v36 = *((_QWORD *)Method_System_Array_Empty_GrandSvtInfo___ + 7);
    if ( !v36 )
    {
      sub_1C6A188(Method_System_Array_Empty_GrandSvtInfo___);
      v36 = v35[7];
    }
    v37 = *(_QWORD *)(v36 + 16);
    if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
      v37 = sub_1C6A12C(inited);
    if ( !*(_DWORD *)(v37 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v37);
    v38 = *(_QWORD *)(v35[7] + 16LL);
    if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
      v38 = sub_1C6A12C(inited);
    return **(GrandSvtInfo_array ***)(v38 + 184);
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

  if ( (byte_4D28029 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&bool___TypeInfo);
    byte_4D28029 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v5 = sub_1C94140(bool___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
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
        sub_1C942F0(v6, v4);
      if ( i >= *(unsigned int *)(v5 + 24) )
LABEL_18:
        sub_1C942F8(v6);
      *(_BYTE *)(v5 + 32 + i) = v9->fields.isFollower;
    }
  }
  return (System_Boolean_array *)v5;
}


int32_t PartyListViewItem__GetMaxCost(PartyListViewItem_o *this, int32_t baseMaxCost, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  BalanceConfig_c *v6; // x0

  if ( (byte_4D28036 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D28036 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo && questRestrictionInfo->fields.isInfinityCost )
  {
    v6 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v6 = BalanceConfig_TypeInfo;
    }
    return v6->static_fields->InfinityCostValue;
  }
  return baseMaxCost;
}


PartyOrganizationListViewItem_o *PartyListViewItem__GetMember(
        PartyListViewItem_o *this,
        int32_t num,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8

  memberList = this->fields.memberList;
  if ( !memberList )
    sub_1C942F0(this, num);
  if ( LODWORD(memberList->max_length) <= num )
    sub_1C942F8(this);
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
    sub_1C942F0(this, npcSvtIds);
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
        sub_1C942F8(myServantNumMax);
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

  if ( (byte_4D2801A & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2801A = 1;
  }
  menuKind = this->fields.menuKind;
  if ( menuKind == 1 )
    goto LABEL_4;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( menuKind == 3 )
  {
    if ( !questRestrictionInfo )
LABEL_47:
      sub_1C942F0(questRestrictionInfo, method);
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
        questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
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
          sub_1C942F8(questRestrictionInfo);
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
  if ( (byte_4D28006 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Any_FollowerInfo___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_1C94098(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_1C94098(&Method_PartyListViewItem___c__DisplayClass37_0__GetSupportInitIndex_b__0__);
    this = (PartyListViewItem_o *)sub_1C94098(&PartyListViewItem___c__DisplayClass37_0_TypeInfo);
    byte_4D28006 = 1;
  }
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_15:
    sub_1C942F0(this, fixNpcFollowerInfoList);
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
      v10 = (PartyListViewItem___c__DisplayClass37_0_o *)sub_1C942E4(PartyListViewItem___c__DisplayClass37_0_TypeInfo);
      PartyListViewItem___c__DisplayClass37_0___ctor(v10, 0);
      if ( !v10 )
        goto LABEL_15;
      v10->fields.chkIdx = ++v8;
      v11 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v11,
        (Il2CppObject *)v10,
        Method_PartyListViewItem___c__DisplayClass37_0__GetSupportInitIndex_b__0__,
        0);
      v12 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)fixNpcFollowerInfoList,
              (System_Func_TSource__bool__o *)v11,
              (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      if ( !System_Linq_Enumerable__Any_object_(
              v12,
              (const MethodInfo_31A7F44 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
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

  if ( (byte_4D28027 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&ServantEntity___TypeInfo);
    byte_4D28027 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v11 = (unsigned int *)sub_1C94140(ServantEntity___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
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
        sub_1C942F0(v14, v4);
      servantEntity = (GrandQuestFolderBoardItem_c *)v16->fields.servantEntity;
      if ( servantEntity )
      {
        v14 = (BalanceConfig_c *)sub_1C941D4(servantEntity, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
        if ( !v14 )
        {
          v19 = sub_1C94314();
          sub_1C941C0(v19, 0);
        }
      }
      if ( v12 >= v11[6] )
LABEL_20:
        sub_1C942F8(v14);
      i->klass = servantEntity;
      sub_1C9403C(i, (int32_t)servantEntity, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4D28028 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&string___TypeInfo);
    byte_4D28028 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v5 = sub_1C94140(string___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
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
        sub_1C942F0(SvtNameText, v4);
      if ( v6 >= *(unsigned int *)(v5 + 24) )
LABEL_18:
        sub_1C942F8(SvtNameText);
      i->klass = SvtNameText;
      sub_1C9403C(i, (int32_t)SvtNameText, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_4D28025 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D28025 = 1;
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
      sub_1C942F8(Entity);
    v7 = memberList->m_Items[v3];
    if ( !v7 )
LABEL_22:
      sub_1C942F0(Entity, method);
    userServantEntity = (int64_t)v7->fields.userServantEntity;
    if ( userServantEntity )
    {
      if ( !v7->fields._IsDisappearSvt_k__BackingField )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantMaster___);
        v11 = *(_OWORD *)(userServantEntity + 16);
        v10 = *(_OWORD *)(userServantEntity + 32);
        v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        *(_OWORD *)&v17.fields.currentCryptoKey = v11;
        *(_OWORD *)&v17.fields.fakeValue = v10;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v16 = v17;
        Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v16, 0);
        if ( !v12 )
          goto LABEL_22;
        Entity = (int64_t)DataMasterBase_object__object__long___GetEntity(
                            v12,
                            Entity,
                            (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
  if ( (byte_4D28022 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (PartyListViewItem_o *)sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D28022 = 1;
  }
  if ( userSvtId < 1 )
    return 0;
  memberList = v4->fields.memberList;
  if ( !memberList )
LABEL_38:
    sub_1C942F0(this, userSvtId);
  v6 = 0;
  while ( 1 )
  {
    max_length = memberList->max_length;
    if ( (int)v6 >= (int)max_length )
      return 0;
    if ( v6 >= max_length )
LABEL_39:
      sub_1C942F8(this);
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
                                        (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
        if ( !this )
          goto LABEL_38;
        v12 = *(_OWORD *)&this->fields.sortValue0;
        *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&this->fields.selectNum;
        *(_OWORD *)&v21.fields.fakeValue = v12;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v20 = v21;
        this = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v20, 0);
        if ( this )
        {
          this = (PartyListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                          equipUserServantEntityList,
                                          v11,
                                          (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          if ( !this )
            goto LABEL_38;
          v13 = *(_OWORD *)&this->fields.sortValue0;
          *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&this->fields.selectNum;
          *(_OWORD *)&v21.fields.fakeValue = v13;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v19 = v21;
          this = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v19, 0);
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(SvtId, 0);
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
  if ( (byte_4D28023 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D28023 = 1;
  }
  if ( svtId >= 1 )
  {
    memberList = v4->fields.memberList;
    if ( !memberList )
LABEL_14:
      sub_1C942F0(this, *(_QWORD *)&svtId);
    v6 = 0;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
        sub_1C942F8(this);
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
        this = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(EquipSvtId, 0);
        if ( (_DWORD)this == svtId )
        {
          v12 = PartyOrganizationListViewItem__get_SvtId(v9, 0);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v12, 0);
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

  if ( (byte_4D2801E & 1) == 0 )
  {
    sub_1C94098(&DeckServantData_TypeInfo);
    sub_1C94098(&DeckServant_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&UserDeckEntity_TypeInfo);
    byte_4D2801E = 1;
  }
  v5 = sub_1C942E4(UserDeckEntity_TypeInfo);
  UserDeckEntity___ctor((UserDeckEntity_o *)v5, 0);
  if ( !v5 )
    goto LABEL_29;
  *(_QWORD *)(v5 + 16) = this->fields.id;
  *(_DWORD *)(v5 + 32) = this->fields.index + 1;
  deckName = this->fields.deckName;
  *(_QWORD *)(v5 + 40) = deckName;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)deckName, v8, v9, v10, v11, v12, v13);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_29;
  v16 = baseItem ? baseItem : this;
  max_length = memberList->max_length;
  userEquipId = v16->fields.userEquipId;
  v19 = (DeckServant_o *)sub_1C942E4(DeckServant_TypeInfo);
  DeckServant___ctor_42460708(v19, max_length, userEquipId, 0);
  *(_QWORD *)(v5 + 48) = v19;
  v20 = v5 + 48;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 48), (int32_t)v19, v21, v22, v23, v24, v25, v26);
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
      v32 = sub_1C942E4(DeckServantData_TypeInfo);
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
      *(_QWORD *)(v32 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v54, 0);
      *(_BYTE *)(v32 + 56) = v31->fields.isFollower;
      EquipList = PartyOrganizationListViewItem__GetEquipList(v31, 0);
      *(_QWORD *)(v32 + 40) = EquipList;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v32 + 40), (int32_t)EquipList, v36, v37, v38, v39, v40, v41);
      *(_DWORD *)(v32 + 76) = v31->fields._InitPos_k__BackingField;
      if ( !*(_QWORD *)v20 )
        break;
      v42 = *(_DWORD **)(*(_QWORD *)v20 + 16LL);
      if ( !v42 )
        break;
      v43 = sub_1C941D4(v32, *(_QWORD *)(*(_QWORD *)v42 + 64LL));
      if ( !v43 )
      {
        v53 = sub_1C94314();
        sub_1C941C0(v53, 0);
      }
      if ( (unsigned int)(v30 - 1) < v42[6] )
      {
        v50 = &v42[2 * v29];
        *((_QWORD *)v50 + 4) = v32;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v50 + 8), v32, v44, v45, v46, v47, v48, v49);
        if ( (_DWORD)v28 == v30 )
          return (UserDeckEntity_o *)v5;
        v29 = v30;
        if ( (unsigned int)v30++ < LODWORD(v27->max_length) )
          continue;
      }
      sub_1C942F8(v43);
    }
LABEL_29:
    sub_1C942F0(v6, v7);
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

  if ( (byte_4D2801F & 1) == 0 )
  {
    sub_1C94098(&DeckServantData_TypeInfo);
    sub_1C94098(&DeckServant_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&UserEventDeckEntity_TypeInfo);
    byte_4D2801F = 1;
  }
  memset(&v49[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v3 = sub_1C942E4(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor((UserEventDeckEntity_o *)v3, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
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
  v8 = (DeckServant_o *)sub_1C942E4(DeckServant_TypeInfo);
  max_length = memberList->max_length;
  v10 = v8;
  DeckServant___ctor_42460708(v8, max_length, userEquipId, 0);
  *(_QWORD *)(v3 + 32) = v10;
  v11 = v3 + 32;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)v10, v12, v13, v14, v15, v16, v17);
  v18 = this->fields.memberList;
  if ( !v18 )
LABEL_55:
    sub_1C942F0(IsUseOldMaster, v4);
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
    v26 = sub_1C942E4(DeckServantData_TypeInfo);
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
    *(_QWORD *)(v26 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v48, 0);
    *(_BYTE *)(v26 + 56) = v22->fields.isFollower;
    EquipList = PartyOrganizationListViewItem__GetEquipList(v22, 0);
    *(_QWORD *)(v26 + 40) = EquipList;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v26 + 40), (int32_t)EquipList, v30, v31, v32, v33, v34, v35);
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
    IsUseOldMaster = (NetworkManager_c *)sub_1C941D4(v26, *(_QWORD *)(*(_QWORD *)v38 + 64LL));
    if ( !IsUseOldMaster )
    {
      v47 = sub_1C94314();
      sub_1C941C0(v47, 0);
    }
    if ( v19 >= v38[6] )
LABEL_56:
      sub_1C942F8(IsUseOldMaster);
    v45 = &v38[2 * v19];
    *((_QWORD *)v45 + 4) = v26;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v45 + 8), v26, v39, v40, v41, v42, v43, v44);
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

  if ( (byte_4D28004 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D28004 = 1;
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
        sub_1C942F0(v6, userServantList);
      if ( i >= LODWORD(npcSvtIds->max_length) )
LABEL_17:
        sub_1C942F8(v6);
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

  if ( (byte_4D28021 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__TryAdd__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    byte_4D28021 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v9,
    (const MethodInfo_34AB458 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( userSvtId >= 1 )
  {
    memberList = this->fields.memberList;
    if ( !memberList )
LABEL_21:
      sub_1C942F0(EquipList, v11);
    v13 = 0;
    v14 = (unsigned int)editEquipIndex;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( v13 >= max_length )
        break;
      if ( v13 >= (unsigned int)max_length )
LABEL_23:
        sub_1C942F8(EquipList);
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
                                                        (const MethodInfo_34AD51C *)Method_System_Collections_Generic_Dictionary_int__int__TryAdd__);
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

  if ( (byte_4D28013 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D28013 = 1;
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
      sub_1C942F8(v3);
    v8 = memberList->m_Items[v5];
    if ( !v8 )
LABEL_12:
      sub_1C942F0(v3, method);
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

  if ( (byte_4D28012 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D28012 = 1;
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
      sub_1C942F8(v3);
    v6 = memberList->m_Items[i];
    if ( !v6 )
LABEL_15:
      sub_1C942F0(v3, method);
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

  if ( (byte_4D2802D & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D2802D = 1;
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
      sub_1C942F0(v3, method);
    if ( i >= (unsigned __int64)LODWORD(memberList->max_length) )
      sub_1C942F8(v3);
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

  if ( (byte_4D28014 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D28014 = 1;
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
      sub_1C942F8(v4);
    v4 = memberList->m_Items[v5];
    if ( !v4 )
LABEL_12:
      sub_1C942F0(v4, method);
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
  if ( (byte_4D28024 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D28024 = 1;
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
          sub_1C942F8(this);
        this = (PartyListViewItem_o *)memberList->m_Items[v7];
        if ( !this )
          break;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)this, 0);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(EquipSvtId, 0) == svtId;
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
      sub_1C942F0(this, *(_QWORD *)&svtId);
    }
  }
  LOBYTE(this) = 0;
  return (char)this;
}


bool PartyListViewItem__IsNeedConfirmActiveGrandBoard(
        PartyListViewItem_o *this,
        System_Collections_Generic_List_UserServantEntity__o **confirmSvtList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_List_UserServantEntity__o *IsGrandRelatedRestriction; // x0
  Il2CppObject *userServantEntity; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x21
  int max_length; // w8
  unsigned int v16; // w23
  char v17; // w25
  char v18; // w22
  PartyOrganizationListViewItem_o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8

  if ( (byte_4D28035 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    byte_4D28035 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  *confirmSvtList = (System_Collections_Generic_List_UserServantEntity__o *)v5;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)confirmSvtList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_23;
  max_length = memberList->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1C942F8(IsGrandRelatedRestriction);
      v19 = memberList->m_Items[v16];
      if ( !v19 )
        break;
      if ( !v19->fields.isFollower )
      {
        if ( v19->fields._IsGrandServant_k__BackingField )
        {
          IsGrandRelatedRestriction = (System_Collections_Generic_List_UserServantEntity__o *)PartyOrganizationListViewItem__get_IsGrandRelatedRestriction(
                                                                                                v19,
                                                                                                0);
          if ( ((unsigned __int8)IsGrandRelatedRestriction & 1) == 0 )
          {
            IsGrandRelatedRestriction = *confirmSvtList;
            if ( !*confirmSvtList )
              break;
            userServantEntity = (Il2CppObject *)v19->fields.userServantEntity;
            items = (struct System_Object_array *)IsGrandRelatedRestriction->fields._items;
            v27 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++IsGrandRelatedRestriction->fields._version;
            if ( !items )
              break;
            size = IsGrandRelatedRestriction->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)IsGrandRelatedRestriction,
                userServantEntity,
                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = &items->obj.klass + size;
              IsGrandRelatedRestriction->fields._size = size + 1;
              v29[4] = (Il2CppClass *)userServantEntity;
              sub_1C9403C(
                (GrandQuestFolderBoardItem_o *)(v29 + 4),
                (int32_t)userServantEntity,
                v20,
                v21,
                v22,
                v23,
                v24,
                v25);
            }
            v17 = 1;
          }
        }
        if ( v19->fields.isRestrictionActiveGrandBoard )
          v18 |= !v19->fields._IsGrandServant_k__BackingField;
      }
      max_length = memberList->max_length;
      if ( (int)++v16 >= max_length )
        return v17 & v18 & 1;
    }
LABEL_23:
    sub_1C942F0(IsGrandRelatedRestriction, userServantEntity);
  }
  v18 = 0;
  v17 = 0;
  return v17 & v18 & 1;
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

  if ( (byte_4D28003 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_BasicHelper_Any_FollowerInfo____79047536);
    sub_1C94098(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_1C94098(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_1C94098(&Method_PartyListViewItem___c__IsNeedDeckPosReset_b__33_0__);
    sub_1C94098(&Method_PartyListViewItem___c__DisplayClass33_0__IsNeedDeckPosReset_b__1__);
    sub_1C94098(&PartyListViewItem___c__DisplayClass33_0_TypeInfo);
    sub_1C94098(&PartyListViewItem___c_TypeInfo);
    byte_4D28003 = 1;
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
  questRestrictionInfo = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v8 = this->fields.questRestrictionInfo;
  if ( !v8 || !questRestrictionInfo )
LABEL_46:
    sub_1C942F0(questRestrictionInfo, deck);
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
    _9__33_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_FollowerInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__33_0, v12, Method_PartyListViewItem___c__IsNeedDeckPosReset_b__33_0__, 0);
    static_fields = PartyListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__33_0 = (struct System_Func_FollowerInfo__bool__o *)_9__33_0;
    sub_1C9403C(
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
          (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
  v6 = System_Linq_Enumerable__ToArray_object_(
         v20,
         (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
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
    v25 = sub_1C942E4(PartyListViewItem___c__DisplayClass33_0_TypeInfo);
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
      sub_1C942F8(questRestrictionInfo);
    if ( !v25 )
      goto LABEL_46;
    v34 = svts->m_Items[i];
    *(_QWORD *)(v25 + 16) = v34;
    v35 = v25 + 16;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v25 + 16), (int32_t)v34, v26, v27, v28, v29, v30, v31);
    if ( IsUseOldMaster )
    {
      if ( !v6
        || (v36 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_FollowerInfo__bool__TypeInfo),
            System_Func_object__bool____ctor(
              v36,
              (Il2CppObject *)v25,
              Method_PartyListViewItem___c__DisplayClass33_0__IsNeedDeckPosReset_b__1__,
              0),
            questRestrictionInfo = (QuestRestrictionInfo_o *)BasicHelper__Any_object__51926292(
                                                               v6,
                                                               (System_Func_T__bool__o *)v36,
                                                               (const MethodInfo_3185514 *)Method_BasicHelper_Any_FollowerInfo____79047536),
            ((unsigned __int8)questRestrictionInfo & 1) != 0) )
      {
        if ( !*(_QWORD *)v35 )
          goto LABEL_46;
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_46;
        questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_44229676(
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


bool PartyListViewItem__IsRemoveActiveGrandBoardSvt(
        PartyListViewItem_o *this,
        UserServantEntity_o *userServantEntity,
        System_Int64_array *equipIdList,
        int32_t initPos,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  BalanceConfig_c *v10; // x0
  BalanceConfig_c *v11; // x0

  if ( (byte_4D2801D & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D2801D = 1;
  }
  if ( !userServantEntity )
    return 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_18;
  if ( !QuestRestrictionInfo__IsActiveGrandBoardRestriction(questRestrictionInfo, initPos, 0) )
    return 0;
  questRestrictionInfo = (QuestRestrictionInfo_o *)UserServantEntity__IsGrandServant(userServantEntity, 0);
  if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
  {
    if ( !equipIdList )
      goto LABEL_18;
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    if ( v10->static_fields->SvtEquipMax == LODWORD(equipIdList->max_length) )
      return 1;
  }
  questRestrictionInfo = (QuestRestrictionInfo_o *)UserServantEntity__IsGrandServant(userServantEntity, 0);
  if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
    return 0;
  if ( !equipIdList )
LABEL_18:
    sub_1C942F0(questRestrictionInfo, userServantEntity);
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  return v11->static_fields->GrandSvtEquipMax == LODWORD(equipIdList->max_length);
}


bool PartyListViewItem__IsSpecificMenuKind(PartyListViewItem_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    LOBYTE(questRestrictionInfo) = questRestrictionInfo->fields.eventDeckNum > 0;
  return (unsigned __int8)questRestrictionInfo | ((unsigned int)(this->fields.menuKind - 1) < 7);
}


bool PartyListViewItem__IsSpecificMenuKind_34646908(int32_t menuKind, bool isEventDeck, const MethodInfo *method)
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

  if ( (byte_4D28011 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D28011 = 1;
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
    sub_1C942F8(v4);
  v4 = memberList->m_Items[0];
  if ( !v4 )
LABEL_16:
    sub_1C942F0(v4, method);
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

  if ( (byte_4D28009 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D28009 = 1;
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
      sub_1C942F8(v7);
    v10 = &memberList->obj.klass + v8;
    v11 = (PartyOrganizationListViewItem_o *)v10[4];
    if ( !v11 )
LABEL_12:
      sub_1C942F0(v7, otherValidEventIdFilter);
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
  const MethodInfo *v21; // x2
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int v28; // w23
  unsigned int v29; // w24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v31; // x26
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  PartyOrganizationListViewItem_o *v38; // x21
  Il2CppClass **v39; // x0
  struct PartyOrganizationListViewItem_array *v40; // x8
  PartyOrganizationListViewItem_o *v41; // x8
  struct System_String_o *deckName; // x1
  struct System_Int32_array *waveBattleEnemyClassIds; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  struct System_Int32_array *trendDispWaveBattleEnemyClassIds; // x1
  struct System_Int32_array **p_trendDispWaveBattleEnemyClassIds; // x20
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  __int64 v58; // x0

  if ( (byte_4D2800A & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D2800A = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0);
  if ( !item )
LABEL_20:
    sub_1C942F0(v5, v6);
  *(_QWORD *)&this->fields.menuKind = *(_QWORD *)&item->fields.menuKind;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v7, v8, v9, v10, v11, v12);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.maxCost = PartyListViewItem__GetMaxCost(this, this->fields.maxCost, v21);
  v28 = 1;
  this->fields.id = item->fields.id;
  while ( 1 )
  {
    v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    v29 = v28 - 1;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v29 >= SHIDWORD(v5->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
      break;
    memberList = item->fields.memberList;
    if ( !memberList )
      goto LABEL_20;
    if ( v29 >= LODWORD(memberList->max_length) )
      goto LABEL_21;
    v5 = memberList->m_Items[v29];
    if ( !v5 )
      goto LABEL_20;
    v31 = this->fields.memberList;
    v5 = PartyOrganizationListViewItem__Clone(v5, -1, 0);
    if ( !v31 )
      goto LABEL_20;
    v38 = v5;
    if ( v5 )
    {
      v5 = (PartyOrganizationListViewItem_o *)sub_1C941D4(v5, v31->obj.klass->_1.element_class);
      if ( !v5 )
      {
        v58 = sub_1C94314();
        sub_1C941C0(v58, 0);
      }
    }
    if ( v29 >= LODWORD(v31->max_length) )
      goto LABEL_21;
    v39 = &v31->obj.klass + (int)v29;
    v39[4] = (Il2CppClass *)v38;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v39 + 4), (int32_t)v38, v32, v33, v34, v35, v36, v37);
    v40 = this->fields.memberList;
    if ( !v40 )
      goto LABEL_20;
    if ( v29 >= LODWORD(v40->max_length) )
LABEL_21:
      sub_1C942F8(v5);
    v41 = v40->m_Items[v29];
    if ( !v41 )
      goto LABEL_20;
    v41->fields._NowPos_k__BackingField = v28++;
  }
  this->fields.cost = item->fields.cost;
  this->fields.isDeckNameDefault = item->fields.isDeckNameDefault;
  deckName = item->fields.deckName;
  this->fields.deckName = deckName;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.deckName, (int32_t)deckName, v22, v23, v24, v25, v26, v27);
  this->fields.userEquipId = item->fields.userEquipId;
  waveBattleEnemyClassIds = item->fields.waveBattleEnemyClassIds;
  this->fields.waveBattleEnemyClassIds = waveBattleEnemyClassIds;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.waveBattleEnemyClassIds,
    (int32_t)waveBattleEnemyClassIds,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  trendDispWaveBattleEnemyClassIds = item->fields.trendDispWaveBattleEnemyClassIds;
  this->fields.trendDispWaveBattleEnemyClassIds = trendDispWaveBattleEnemyClassIds;
  p_trendDispWaveBattleEnemyClassIds = &this->fields.trendDispWaveBattleEnemyClassIds;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)p_trendDispWaveBattleEnemyClassIds,
    (int32_t)trendDispWaveBattleEnemyClassIds,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
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
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_deckName, (int32_t)v3, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4D2800B & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D2800B = 1;
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
      sub_1C942F8(v10);
    v12 = &memberList->obj.klass + i;
    v13 = (PartyOrganizationListViewItem_o *)v12[4];
    if ( !v13 )
LABEL_15:
      sub_1C942F0(v10, *(_QWORD *)&num);
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

  if ( (byte_4D2800C & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D2800C = 1;
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
      sub_1C942F8(v10);
    v12 = &memberList->obj.klass + i;
    v13 = (PartyOrganizationListViewItem_o *)v12[4];
    if ( !v13 )
LABEL_14:
      sub_1C942F0(v10, *(_QWORD *)&num);
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
    sub_1C942F0(this, *(_QWORD *)&num);
  }
  if ( LODWORD(v12->max_length) <= num )
LABEL_12:
    sub_1C942F8(this);
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

  if ( (byte_4D28017 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&long___TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D28017 = 1;
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
      Master_object = (UserServantGrandMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
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
      Master_object = (UserServantGrandMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
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
        if ( v28 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v57, 0) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = (UserServantGrandMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantMaster___);
          if ( Master_object )
          {
            Entity = DataMasterBase_object__object__long___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                       *(_QWORD *)&v27->fields.revision,
                       (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            *userServantEntity = (UserServantEntity_o *)Entity;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)userServantEntity, (int32_t)Entity, v30, v31, v32, v33, v34, v35);
            return;
          }
LABEL_33:
          sub_1C942F0(Master_object, *(_QWORD *)&initPos);
        }
      }
      else
      {
        *userServantEntity = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)userServantEntity, 0, v19, v20, v21, v22, v23, v24);
        v49 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v49 = BalanceConfig_TypeInfo;
        }
        v50 = (System_Int64_array *)sub_1C94140(long___TypeInfo, (unsigned int)v49->static_fields->GrandSvtEquipMax);
        *equipIdList = v50;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)equipIdList, (int32_t)v50, v51, v52, v53, v54, v55, v56);
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
    v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v62, 0);
    if ( v47 != CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v13->fields.svtId, 0) )
    {
LABEL_28:
      v48 = (int)equipIdLista;
      *equipIdList = equipIdLista;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)equipIdList, v48, v38, v39, v40, v41, v42, v43);
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
    || (PartyOrganizationListViewItem__Modify_34916816((PartyOrganizationListViewItem_o *)this, item, 0),
        (v10 = v6->fields.memberList) == 0) )
  {
LABEL_11:
    sub_1C942F0(this, *(_QWORD *)&num);
  }
  if ( LODWORD(v10->max_length) <= num )
LABEL_12:
    sub_1C942F8(this);
  this = (PartyListViewItem_o *)v10->m_Items[num];
  if ( !this )
    goto LABEL_11;
  v11 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0) + v11;
  PartyListViewItem__CheckRestriction(v6, v12);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewItem__SetMember_34711544(
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
    sub_1C942F0(this, *(_QWORD *)&idx);
  }
  if ( member )
  {
    this = (PartyListViewItem_o *)sub_1C941D4(member, v15->obj.klass->_1.element_class);
    if ( !this )
    {
      v20 = sub_1C94314();
      sub_1C941C0(v20, 0);
    }
  }
  if ( LODWORD(v15->max_length) <= idx )
    goto LABEL_18;
  v16 = &v15->obj.klass + idx;
  v16[4] = (Il2CppClass *)member;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v16 + 4), (int32_t)member, v9, v10, v11, v12, v13, v14);
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
    sub_1C942F8(this);
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
    sub_1C942F0(this, follower);
  max_length = npcFollowerInfoList->max_length;
  v9 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = this;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1C942F8(this);
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
        this = (PartyListViewItem_o *)QuestRestrictionInfo__IsRestriction_44210688(
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
          this = (PartyListViewItem_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_44232872(
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
    sub_1C9403C((GrandQuestFolderBoardItem_o *)follower, (int32_t)v15, v23, v24, v25, v26, v27, v28);
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

  if ( (byte_4D2800D & 1) == 0 )
  {
    sub_1C94098(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D2800D = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance
    || (PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, initPos, follower, 0),
        memberList = this->fields.memberList,
        setupInfo = this->fields.setupInfo,
        questRestrictionInfo = this->fields.questRestrictionInfo,
        v16 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo),
        PartyOrganizationListViewItem___ctor_34870876(
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
    sub_1C942F0(Instance, v12);
  }
  if ( v16 )
  {
    Instance = (Il2CppObject *)sub_1C941D4(v16, memberList->obj.klass->_1.element_class);
    if ( !Instance )
    {
      v25 = sub_1C94314();
      sub_1C941C0(v25, 0);
    }
  }
  if ( LODWORD(memberList->max_length) <= num )
    sub_1C942F8(Instance);
  v23 = &memberList->obj.klass + num;
  v23[4] = (Il2CppClass *)v16;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v16, v17, v18, v19, v20, v21, v22);
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
    sub_1C942F8(this);
  this = (PartyListViewItem_o *)memberList->m_Items[num1];
  if ( !this )
LABEL_7:
    sub_1C942F0(this, num1);
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
        sub_1C942F8(this);
      this = (PartyListViewItem_o *)memberList->m_Items[v5];
      if ( !this )
        break;
      PartyOrganizationListViewItem__UpdateEventEffect((PartyOrganizationListViewItem_o *)this, v6, 0);
      max_length = memberList->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_1C942F0(this, otherValidEventIdFilter);
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
        sub_1C942F8(this);
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
    sub_1C942F0(this, method);
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

  if ( (byte_4D28026 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_10288/*"PARTY_ORGANIZATION_NAME_BASE"*/);
    byte_4D28026 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_10288/*"PARTY_ORGANIZATION_NAME_BASE"*/, 0);
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

  if ( (byte_4D28037 & 1) == 0 )
  {
    sub_1C94098(&PartyListViewItem___c_TypeInfo);
    byte_4D28037 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(PartyListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PartyListViewItem___c_TypeInfo->static_fields->__9 = (struct PartyListViewItem___c_o *)v1;
  sub_1C9403C(
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


int32_t PartyListViewItem___c___CheckAndUpdateDuplicationGrandQuestServant_b__116_0(
        PartyListViewItem___c_o *this,
        ServantEntity_o *e,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4D2803B & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2803B = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v8, 0);
}


int32_t PartyListViewItem___c___CheckDuplicationGrandQuestEquipment_b__112_0(
        PartyListViewItem___c_o *this,
        System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___o pair,
        const MethodInfo *method)
{
  int32_t Item1; // w19

  Item1 = pair.fields.value.fields.Item1;
  if ( (byte_4D28038 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___get_Value__);
    byte_4D28038 = 1;
  }
  return Item1;
}


bool PartyListViewItem___c___CheckDuplicationGrandQuestEquipment_b__112_1(
        PartyListViewItem___c_o *this,
        System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___o pair,
        const MethodInfo *method)
{
  struct System_ValueTuple_int__bool__o value; // x19

  value = pair.fields.value;
  if ( (byte_4D28039 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___get_Value__);
    byte_4D28039 = 1;
  }
  return HIDWORD(*(unsigned __int64 *)&value) & 1;
}


int64_t PartyListViewItem___c___CheckDuplicationGrandQuestEquipment_b__112_2(
        PartyListViewItem___c_o *this,
        System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___o pair,
        const MethodInfo *method)
{
  int64_t key; // x19

  key = pair.fields.key;
  if ( (byte_4D2803A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___get_Key__);
    byte_4D2803A = 1;
  }
  return key;
}


bool PartyListViewItem___c___IsNeedDeckPosReset_b__33_0(
        PartyListViewItem___c_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.isFixedNpc;
}


void PartyListViewItem___c__DisplayClass113_0___ctor(
        PartyListViewItem___c__DisplayClass113_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *PartyListViewItem___c__DisplayClass113_0___GetGrandQuestDuplicationEquipmentNameList_b__0(
        PartyListViewItem___c__DisplayClass113_0_o *this,
        int64_t id,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *userServantMaster; // x0

  if ( (byte_4D2803C & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    byte_4D2803C = 1;
  }
  userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userServantMaster;
  if ( !userServantMaster
    || (userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                            userServantMaster,
                                                                            id,
                                                                            (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0 )
  {
    sub_1C942F0(userServantMaster, id);
  }
  return UserServantEntity__GetSvtName((UserServantEntity_o *)userServantMaster, 0);
}


void PartyListViewItem___c__DisplayClass115_0___ctor(
        PartyListViewItem___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *PartyListViewItem___c__DisplayClass115_0___CheckDuplicationGrandServantEquipmentNameList_b__0(
        PartyListViewItem___c__DisplayClass115_0_o *this,
        int64_t id,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *userServantMaster; // x0

  if ( (byte_4D2803D & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    byte_4D2803D = 1;
  }
  userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userServantMaster;
  if ( !userServantMaster
    || (userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                            userServantMaster,
                                                                            id,
                                                                            (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0 )
  {
    sub_1C942F0(userServantMaster, id);
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, x);
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
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

  if ( (byte_4D2803E & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_int____79047624);
    sub_1C94098(&System_Func_int__bool__TypeInfo);
    sub_1C94098(&Method_PartyListViewItem___c__DisplayClass62_1__GetGrandServantInfo_b__1__);
    sub_1C94098(&PartyListViewItem___c__DisplayClass62_1_TypeInfo);
    byte_4D2803E = 1;
  }
  v5 = sub_1C942E4(PartyListViewItem___c__DisplayClass62_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_DWORD *)(v5 + 16) = classIndividuality;
  individuality = this->fields.individuality;
  v9 = (System_Func_int__bool__o *)sub_1C942E4(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_PartyListViewItem___c__DisplayClass62_1__GetGrandServantInfo_b__1__,
    0);
  return BasicHelper__Any_int__51925480(
           individuality,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_31851E8 *)Method_BasicHelper_Any_int____79047624);
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