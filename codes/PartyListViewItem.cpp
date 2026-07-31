void PartyListViewItem___ctor(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  BalanceConfig_c *v5; // x0
  struct PartyOrganizationListViewItem_array *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5933DC0 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewItem___TypeInfo);
    byte_5933DC0 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  v5 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v3, v4);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct PartyOrganizationListViewItem_array *)sub_21FFD10(
                                                       PartyOrganizationListViewItem___TypeInfo,
                                                       (unsigned int)v5->static_fields->DeckMemberMax);
  this->fields.memberList = v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.memberList, (int32_t)v6, v7, v8, v9, v10, v11, v12);
}


void PartyListViewItem___ctor_40809216(
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
  QuestRestrictionInfo_o *v14; // x20
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  const MethodInfo *v32; // x2
  __int64 Instance; // x0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x2
  struct DeckServant_o *deckInfo; // x8
  int64_t id; // x9
  UserServantEntity_array *UserServantList; // x28
  __int64 v39; // x1
  __int64 v40; // x2
  int32_t FollowerIndex; // w25
  BalanceConfig_c *v42; // x0
  struct PartyOrganizationListViewItem_array *v43; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x26
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  const MethodInfo_476EDF8 *v51; // x0
  __int64 v52; // x2
  int32_t v53; // w21
  struct DeckServant_o *v54; // x8
  struct DeckServantData_array *svts; // x8
  int32_t max_length; // w9
  DeckServantData_o *v57; // x8
  int32_t initPos; // w22
  int v59; // w9
  struct PartyOrganizationListViewItem_array *v60; // x19
  struct PartyOrganizationListViewItem_array **v61; // x24
  PartyOrganizationListViewItem_o *v62; // x0
  PartyOrganizationListViewItem_o *v63; // x26
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  struct PartyOrganizationListViewItem_array *v70; // x19
  UserServantEntity_o *v71; // x20
  UserDeckEntity_o *v72; // x22
  System_Int64_array *EquipList; // x29
  PartyOrganizationListViewItem_o *v74; // x0
  UserServantEntity_o *v75; // x2
  PartyOrganizationListViewItem_o *v76; // x26
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  __int64 v83; // x1
  Il2CppClass **v84; // x0
  Il2CppClass **v85; // x0
  struct PartyOrganizationListViewItem_array **v86; // x22
  PartyOrganizationListViewItem_o *v87; // x26
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  Il2CppClass **v94; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v97; // x0
  int32_t v98; // [xsp+34h] [xbp-ACh]
  int32_t v103; // [xsp+68h] [xbp-78h]
  int32_t v104; // [xsp+7Ch] [xbp-64h]

  v14 = questRestrictionInfo;
  if ( (byte_5933DC1 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewItem___TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewItem_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5933DC1 = 1;
  }
  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
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
    goto LABEL_56;
  PartyListViewItem__SetDeckName(this, deck->fields.name, v35);
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_56;
  id = deck->fields.id;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = id;
  UserServantList = UserDeckEntity__GetUserServantList(deck, 0);
  FollowerIndex = UserDeckEntity__GetFollowerIndex(deck, 0);
  v42 = BalanceConfig_TypeInfo;
  if ( FollowerIndex <= 0 )
  {
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v39, v40);
      v42 = BalanceConfig_TypeInfo;
    }
    FollowerIndex = v42->static_fields->DeckMainMemberMax;
  }
  if ( !*(&v42->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v42, v39, v40);
    v42 = BalanceConfig_TypeInfo;
  }
  v43 = (struct PartyOrganizationListViewItem_array *)sub_21FFD10(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v42->static_fields->DeckMemberMax);
  this->fields.memberList = v43;
  p_memberList = &this->fields.memberList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.memberList, (int32_t)v43, v45, v46, v47, v48, v49, v50);
  v51 = (const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
  this->fields.cost = 0;
  Instance = (__int64)SingletonTemplate_object___get_Instance(v51);
  if ( !Instance )
    goto LABEL_56;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      follower = *(FollowerInfo_o **)(Instance + 24);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        followerClassId = *(_DWORD *)(Instance + 32);
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          followerGrandGraphId = *(_DWORD *)(Instance + 36);
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( Instance )
          {
            followerDeckId = *(_DWORD *)(Instance + 40);
            goto LABEL_18;
          }
        }
      }
    }
LABEL_56:
    sub_21FFECC(Instance, v34);
  }
LABEL_18:
  v53 = 0;
  v98 = FollowerIndex;
  while ( 1 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v34, v52);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( v53 >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 172LL) )
      break;
    v54 = deck->fields.deckInfo;
    if ( !v54 )
      goto LABEL_56;
    svts = v54->fields.svts;
    if ( !svts )
      goto LABEL_56;
    max_length = svts->max_length;
    if ( v53 >= max_length )
    {
      v59 = v53 + 1;
      initPos = v53 + 1;
    }
    else
    {
      if ( v53 >= (unsigned int)max_length )
        goto LABEL_57;
      v57 = svts->m_Items[v53];
      if ( !v57 )
        goto LABEL_56;
      initPos = v57->fields.initPos;
      v59 = v53 + 1;
    }
    v104 = v59;
    if ( v59 == FollowerIndex )
    {
      v60 = *p_memberList;
      v61 = p_memberList;
      v62 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
      v63 = v62;
      if ( follower )
      {
        PartyOrganizationListViewItem___ctor_40934420(
          v62,
          v53,
          follower,
          followerClassId,
          followerGrandGraphId,
          setupInfo,
          v14,
          friendPointCampaignEntityList,
          0,
          followerDeckId,
          initPos,
          otherValidEventIdFilter,
          0);
        if ( !v60 )
          goto LABEL_56;
      }
      else
      {
        PartyOrganizationListViewItem___ctor_40971972(
          v62,
          v53,
          1,
          setupInfo,
          v14,
          1,
          initPos,
          otherValidEventIdFilter,
          0);
        if ( !v60 )
          goto LABEL_56;
      }
      if ( v63 )
      {
        Instance = sub_21FFDA4(v63, v60->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_58;
      }
      if ( (unsigned int)v53 >= LODWORD(v60->max_length) )
        goto LABEL_57;
      v85 = &v60->obj.klass + v53;
      v85[4] = (Il2CppClass *)v63;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v85 + 4), (int32_t)v63, v64, v65, v66, v67, v68, v69);
      p_memberList = v61;
    }
    else
    {
      if ( !UserServantList )
        goto LABEL_56;
      if ( (unsigned int)v53 >= LODWORD(UserServantList->max_length) )
        goto LABEL_57;
      v70 = *p_memberList;
      v103 = initPos;
      v71 = UserServantList->m_Items[v53];
      if ( v71 )
      {
        v72 = deck;
        EquipList = UserDeckEntity__GetEquipList(deck, v53, 0);
        v74 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
        v75 = v71;
        v14 = questRestrictionInfo;
        v76 = v74;
        PartyOrganizationListViewItem___ctor_40960892(
          v74,
          v53,
          v75,
          EquipList,
          setupInfo,
          questRestrictionInfo,
          0,
          v103,
          0,
          0,
          0,
          otherValidEventIdFilter,
          0);
        if ( !v70 )
          goto LABEL_56;
        if ( v76 )
        {
          Instance = sub_21FFDA4(v76, v70->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_58;
        }
        if ( (unsigned int)v53 >= LODWORD(v70->max_length) )
          goto LABEL_57;
        v84 = &v70->obj.klass + v53;
        deck = v72;
        v84[4] = (Il2CppClass *)v76;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 4), (int32_t)v76, v77, v78, v79, v80, v81, v82);
        FollowerIndex = v98;
        p_memberList = &this->fields.memberList;
      }
      else
      {
        v86 = p_memberList;
        v14 = questRestrictionInfo;
        v87 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_40971972(
          v87,
          v53,
          0,
          setupInfo,
          questRestrictionInfo,
          1,
          v103,
          otherValidEventIdFilter,
          0);
        if ( !v70 )
          goto LABEL_56;
        if ( v87 )
        {
          Instance = sub_21FFDA4(v87, v70->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_58:
            v97 = sub_21FFEF0(Instance, v83);
            sub_21FFD90(v97, 0);
          }
        }
        if ( (unsigned int)v53 >= LODWORD(v70->max_length) )
          goto LABEL_57;
        v94 = &v70->obj.klass + v53;
        v94[4] = (Il2CppClass *)v87;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v94 + 4), (int32_t)v87, v88, v89, v90, v91, v92, v93);
        p_memberList = v86;
      }
    }
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_56;
    if ( (unsigned int)v53 >= LODWORD(memberList->max_length) )
LABEL_57:
      sub_21FFED4(Instance);
    Instance = (__int64)memberList->m_Items[v53];
    if ( !Instance )
      goto LABEL_56;
    cost = this->fields.cost;
    v53 = v104;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, v34);
}


void PartyListViewItem___ctor_40810784(
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
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x1
  struct System_String_o *DefaultDeckName; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 Instance; // x0
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x2
  struct DeckServant_o *deckInfo; // x8
  int64_t eventId; // x9
  const MethodInfo *v47; // x3
  __int64 v48; // x1
  __int64 v49; // x2
  int32_t FollowerIndex; // w27
  BalanceConfig_c *v51; // x0
  __int64 v52; // x2
  PartyListViewItem_o *v53; // x9
  int v54; // w25
  _BOOL4 v55; // w23
  const MethodInfo *v56; // x2
  int32_t v57; // w21
  BalanceConfig_c *v58; // x0
  struct PartyOrganizationListViewItem_array *v59; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  const MethodInfo_476EDF8 *v66; // x0
  __int64 v67; // x2
  const MethodInfo *v68; // x2
  int32_t v69; // w19
  struct DeckServant_o *v70; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v72; // x8
  int32_t *p_initPos; // x8
  int32_t initPos; // w27
  const MethodInfo *v75; // x6
  unsigned __int8 v76; // w25
  struct DeckServant_o *v77; // x8
  struct DeckServantData_array *v78; // x8
  DeckServantData_o *v79; // x8
  bool v80; // w26
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *v82; // x29
  int32_t v83; // w26
  bool v84; // zf
  struct PartyOrganizationListViewItem_array *v85; // x28
  int32_t v86; // w21
  PartyOrganizationListViewItem_o *v87; // x25
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  FollowerInfo_o *v94; // x26
  int32_t v95; // w29
  __int64 v96; // x1
  Il2CppClass **v97; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w21
  PartyOrganizationListViewItem_o *v100; // x0
  const MethodInfo *v101; // x1
  __int64 v102; // x0
  const MethodInfo *isFixNpc; // [xsp+0h] [xbp-100h]
  FollowerInfo_o *followerInfo; // [xsp+30h] [xbp-D0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+38h] [xbp-C8h]
  UserServantEntity_array *UserServantList; // [xsp+48h] [xbp-B8h]
  int v109; // [xsp+58h] [xbp-A8h]
  int v110; // [xsp+5Ch] [xbp-A4h]
  PartyListViewItem_o *v111; // [xsp+60h] [xbp-A0h]
  int32_t v112; // [xsp+68h] [xbp-98h]
  int32_t v113; // [xsp+6Ch] [xbp-94h]
  int32_t v114; // [xsp+7Ch] [xbp-84h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+80h] [xbp-80h]
  int32_t followerClassIda; // [xsp+94h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+98h] [xbp-68h] BYREF

  if ( (byte_5933DC2 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewItem___TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewItem_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5933DC2 = 1;
  }
  followera = 0;
  followerClassIda = 0;
  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.deckName,
    (int32_t)DefaultDeckName,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  if ( !deck )
    goto LABEL_86;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_86;
  eventId = deck->fields.eventId;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v44) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_86;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0);
  }
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0);
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0, v47);
  if ( FollowerIndex <= 0 )
  {
    v51 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v48, v49);
      v51 = BalanceConfig_TypeInfo;
    }
    FollowerIndex = v51->static_fields->DeckMainMemberMax;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  if ( *(int *)(Instance + 80) < 1 )
  {
    v111 = 0;
    v54 = 0;
    v55 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_86;
    v53 = *(PartyListViewItem_o **)(Instance + 104);
    v54 = 0;
    v111 = v53;
    v55 = v53 == 0;
    if ( followerInfo && v53 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_86;
      v54 = *(_DWORD *)(Instance + 80);
      Instance = (__int64)PartyListViewItem__GetMember(v111, v54 - 1, v56);
      if ( !Instance )
        goto LABEL_86;
      v57 = *(_DWORD *)(Instance + 364);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_86;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v57, followerInfo, 0);
      v55 = 0;
    }
  }
  v58 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v43, v52);
    v58 = BalanceConfig_TypeInfo;
  }
  v59 = (struct PartyOrganizationListViewItem_array *)sub_21FFD10(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v58->static_fields->DeckMemberMax);
  this->fields.memberList = v59;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.memberList, (int32_t)v59, v60, v61, v62, v63, v64, v65);
  v66 = (const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  Instance = (__int64)SingletonTemplate_object___get_Instance(v66);
  if ( !Instance )
    goto LABEL_86;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_86;
    followerInfo = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_86;
    v113 = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_86;
    v112 = *(_DWORD *)(Instance + 36);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_86;
    v114 = *(_DWORD *)(Instance + 40);
  }
  else
  {
    v114 = followerDeckId;
    v112 = followerGrandGraphId;
    v113 = followerClassId;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v43, v67);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || !Instance )
LABEL_86:
    sub_21FFECC(Instance, v43);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)Instance,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0);
  v69 = 0;
  v109 = v54 - 1;
  v110 = FollowerIndex - 1;
  while ( 1 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v43, v68);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( v69 >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 172LL) )
      break;
    if ( v55 )
    {
      v70 = deck->fields.deckInfo;
      if ( !v70 )
        goto LABEL_86;
      svts = v70->fields.svts;
      if ( !svts )
        goto LABEL_86;
      if ( (unsigned int)v69 >= LODWORD(svts->max_length) )
        goto LABEL_90;
      v72 = svts->m_Items[v69];
      if ( !v72 )
        goto LABEL_86;
      p_initPos = &v72->fields.initPos;
    }
    else
    {
      Instance = (__int64)PartyListViewItem__GetMember(v111, v69, v68);
      if ( !Instance )
        goto LABEL_86;
      p_initPos = (int32_t *)(Instance + 364);
    }
    initPos = *p_initPos;
    followera = 0;
    followerClassIda = 0;
    if ( !questRestrictionInfo )
      goto LABEL_86;
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_50479840(questRestrictionInfo, initPos, 0);
    v76 = Instance;
    if ( (Instance & 1) != 0 )
    {
      v77 = deck->fields.deckInfo;
      if ( !v77 )
        goto LABEL_86;
      v78 = v77->fields.svts;
      if ( !v78 )
        goto LABEL_86;
      if ( (unsigned int)v69 >= LODWORD(v78->max_length) )
        goto LABEL_90;
      v79 = v78->m_Items[v69];
      if ( !v79 )
        goto LABEL_86;
      v80 = 0;
      if ( v109 != v69 )
      {
        npcFollowerSvtId = v79->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v80 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v75);
      }
    }
    else
    {
      v80 = 0;
    }
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_86;
    Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, initPos, 0);
    if ( (v76 & (Instance != 0)) == 1 )
    {
      v82 = (FollowerInfo_o *)Instance;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0) )
        v83 = 0;
      else
        v83 = v113;
      v84 = !FollowerInfo__get_IsNpc(v82, 0);
      v85 = *p_memberList;
      if ( v84 )
        v86 = v114;
      else
        v86 = 0;
      v87 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_40934420(
        v87,
        v69,
        v82,
        v83,
        v112,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v86,
        initPos,
        0,
        0);
    }
    else
    {
      if ( !v80 && v110 != v69 )
      {
        if ( !UserServantList )
          goto LABEL_86;
        if ( (unsigned int)v69 >= LODWORD(UserServantList->max_length) )
          goto LABEL_90;
        PartyListViewItem__EventDeckMySvtSlotProcess(
          this,
          initPos,
          v69,
          UserServantList->m_Items[v69],
          deck,
          v76 & 1,
          isReadyForSortie,
          isRemoveActiveGrandBoardSvt,
          isFixNpc);
        goto LABEL_78;
      }
      v94 = followera;
      v85 = *p_memberList;
      if ( !followera )
      {
        v100 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
        v87 = v100;
        if ( followerInfo )
          PartyOrganizationListViewItem___ctor_40934420(
            v100,
            v69,
            followerInfo,
            v113,
            v112,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v114,
            initPos,
            0,
            0);
        else
          PartyOrganizationListViewItem___ctor_40971972(v100, v69, 1, setupInfo, questRestrictionInfo, 1, initPos, 0, 0);
        if ( !v85 )
          goto LABEL_86;
        goto LABEL_71;
      }
      v95 = followerClassIda;
      v87 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_40934420(
        v87,
        v69,
        v94,
        v95,
        0,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v114,
        initPos,
        0,
        0);
    }
    if ( !v85 )
      goto LABEL_86;
LABEL_71:
    if ( v87 )
    {
      Instance = sub_21FFDA4(v87, v85->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v102 = sub_21FFEF0(0, v96);
        sub_21FFD90(v102, 0);
      }
    }
    if ( (unsigned int)v69 >= LODWORD(v85->max_length) )
      goto LABEL_90;
    v97 = &v85->obj.klass + v69;
    v97[4] = (Il2CppClass *)v87;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v97 + 4), (int32_t)v87, v88, v89, v90, v91, v92, v93);
LABEL_78:
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_86;
    if ( (unsigned int)v69 >= LODWORD(memberList->max_length) )
LABEL_90:
      sub_21FFED4(Instance);
    Instance = (__int64)memberList->m_Items[v69];
    if ( !Instance )
      goto LABEL_86;
    cost = this->fields.cost;
    ++v69;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, v43);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v101) )
    *isReadyForSortie = 1;
}


void PartyListViewItem___ctor_40816332(
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
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x1
  struct System_String_o *DefaultDeckName; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 Instance; // x0
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x2
  struct DeckServant_o *deckInfo; // x8
  int64_t eventId; // x9
  __int64 v48; // x2
  PartyListViewItem_o *v49; // x28
  unsigned int v50; // w23
  const MethodInfo *v51; // x2
  int32_t v52; // w21
  __int64 v53; // x2
  BalanceConfig_c *v54; // x0
  struct PartyOrganizationListViewItem_array *v55; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  __int64 v62; // x2
  int32_t v63; // w8
  unsigned __int64 v64; // x20
  unsigned __int64 v65; // x29
  UserEventDeckEntity_o *v66; // x23
  const MethodInfo *v67; // x2
  int32_t *p_initPos; // x8
  struct DeckServant_o *v69; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v71; // x8
  int32_t initPos; // w26
  unsigned __int64 v73; // x8
  __int64 v74; // x9
  __int64 v75; // x19
  __int64 v76; // x25
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  __int64 v83; // x19
  __int64 v84; // x1
  const MethodInfo *v85; // x6
  unsigned __int8 v86; // w27
  struct DeckServant_o *v87; // x8
  struct DeckServantData_array *v88; // x8
  DeckServantData_o *v89; // x8
  _BOOL4 v90; // w25
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *v92; // x19
  int32_t v93; // w25
  bool v94; // zf
  unsigned int *v95; // x21
  int32_t v96; // w23
  PartyOrganizationListViewItem_o *v97; // x27
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  FollowerInfo_o *v104; // x19
  int32_t v105; // w25
  unsigned int *v106; // x19
  PartyOrganizationListViewItem_o *v107; // x27
  System_String_o *v108; // x2
  System_String_o *v109; // x3
  int32_t v110; // w4
  int32_t v111; // w5
  bool v112; // w6
  bool v113; // w7
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  PartyOrganizationListViewItem_o *v116; // x0
  const MethodInfo *v117; // x1
  __int64 v118; // x0
  const MethodInfo *isFixNpc; // [xsp+0h] [xbp-130h]
  UserServantMaster_o *Master_object; // [xsp+30h] [xbp-100h]
  FollowerInfo_o *v121; // [xsp+38h] [xbp-F8h]
  int32_t *m_Items; // [xsp+40h] [xbp-F0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+48h] [xbp-E8h]
  unsigned int *v126; // [xsp+68h] [xbp-C8h]
  unsigned int *UserServantList; // [xsp+70h] [xbp-C0h]
  int32_t followerGrandGraphIda; // [xsp+80h] [xbp-B0h]
  int32_t v129; // [xsp+84h] [xbp-ACh]
  struct System_Int32_array *svtIdForceBattleList; // [xsp+88h] [xbp-A8h]
  __int64 v132; // [xsp+98h] [xbp-98h]
  int32_t v133; // [xsp+A4h] [xbp-8Ch]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+A8h] [xbp-88h]
  __int64 v135; // [xsp+B8h] [xbp-78h]
  int32_t followerClassIda; // [xsp+C4h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+C8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16

  if ( (byte_5933DC3 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewItem___TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewItem_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5933DC3 = 1;
  }
  followera = 0;
  followerClassIda = 0;
  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.deckName,
    (int32_t)DefaultDeckName,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  if ( !deck )
    goto LABEL_119;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_119;
  eventId = deck->fields.eventId;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v45) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_119;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v44, v48);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServantList = (unsigned int *)UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_119;
  if ( *(int *)(Instance + 80) < 1 )
  {
    v49 = 0;
    if ( !questRestrictionInfo )
      goto LABEL_15;
    goto LABEL_14;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_119;
  v49 = *(PartyListViewItem_o **)(Instance + 104);
  if ( questRestrictionInfo )
LABEL_14:
    QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0);
LABEL_15:
  v50 = 0;
  if ( follower && v49 )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_119;
    v50 = *(_DWORD *)(Instance + 80);
    Instance = (__int64)PartyListViewItem__GetMember(v49, v50 - 1, v51);
    if ( !Instance )
      goto LABEL_119;
    v52 = *(_DWORD *)(Instance + 364);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_119;
    PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v52, follower, 0);
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_119;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_119;
    follower = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_119;
    v129 = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_119;
    followerGrandGraphIda = *(_DWORD *)(Instance + 36);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_119;
    v133 = *(_DWORD *)(Instance + 40);
  }
  else
  {
    v133 = followerDeckId;
    followerGrandGraphIda = followerGrandGraphId;
    v129 = followerClassId;
  }
  v54 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v44, v53);
    v54 = BalanceConfig_TypeInfo;
  }
  v55 = (struct PartyOrganizationListViewItem_array *)sub_21FFD10(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v54->static_fields->DeckMemberMax);
  this->fields.memberList = v55;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.memberList, (int32_t)v55, v56, v57, v58, v59, v60, v61);
  v63 = this->fields.menuKind;
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( v63 == 3 )
  {
    Instance = (__int64)*p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_119;
    Instance = (__int64)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList((QuestRestrictionInfo_o *)Instance, 0);
    if ( !*p_questRestrictionInfo )
      goto LABEL_119;
    v132 = Instance;
    svtIdForceBattleList = (*p_questRestrictionInfo)->fields.svtIdForceBattleList;
  }
  else
  {
    svtIdForceBattleList = 0;
    v132 = 0;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v44, v62);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || (v121 = follower, !Instance) )
LABEL_119:
    sub_21FFECC(Instance, v44);
  v64 = 0;
  v65 = 0;
  v135 = 8LL * v50 - 8;
  v126 = UserServantList + 8;
  v66 = deck;
  m_Items = svtIdForceBattleList->m_Items;
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)Instance,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0);
  while ( 1 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v44, v67);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v65 >= *(int *)(*(_QWORD *)(Instance + 184) + 172LL) )
      break;
    if ( v49 )
    {
      Instance = (__int64)PartyListViewItem__GetMember(v49, v65, v67);
      if ( !Instance )
        goto LABEL_119;
      p_initPos = (int32_t *)(Instance + 364);
    }
    else
    {
      v69 = v66->fields.deckInfo;
      if ( !v69 )
        goto LABEL_119;
      svts = v69->fields.svts;
      if ( !svts )
        goto LABEL_119;
      if ( v65 >= LODWORD(svts->max_length) )
        goto LABEL_123;
      v71 = svts->m_Items[v64 / 8];
      if ( !v71 )
        goto LABEL_119;
      p_initPos = &v71->fields.initPos;
    }
    initPos = *p_initPos;
    if ( this->fields.menuKind == 3 )
    {
      if ( !v132 )
        goto LABEL_119;
      if ( (__int64)v65 >= *(int *)(v132 + 24) )
      {
        v106 = (unsigned int *)*p_memberList;
        v107 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_40971972(v107, v65, 0, setupInfo, questRestrictionInfo, 1, initPos, 0, 0);
        if ( !v106 )
          goto LABEL_119;
        if ( v107 )
        {
          Instance = sub_21FFDA4(v107, *(_QWORD *)(*(_QWORD *)v106 + 64LL));
          if ( !Instance )
          {
LABEL_124:
            v118 = sub_21FFEF0(Instance, v84);
            sub_21FFD90(v118, 0);
          }
        }
        if ( v65 >= v106[6] )
          goto LABEL_123;
        *(_QWORD *)&v106[v64 / 4 + 8] = v107;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v106[v64 / 4 + 8],
          (int32_t)v107,
          v108,
          v109,
          v110,
          v111,
          v112,
          v113);
        goto LABEL_114;
      }
      if ( svtIdForceBattleList )
      {
        if ( v135 != v64 && isFirstEnforceChange )
        {
          v73 = *(unsigned int *)((char *)off_18 + (_QWORD)svtIdForceBattleList);
          if ( (__int64)v65 < (int)v73 )
          {
            if ( v65 >= v73 )
              goto LABEL_123;
            v44 = (const MethodInfo *)(unsigned int)m_Items[v65];
            if ( (int)v44 >= 1 )
            {
              if ( !UserServantList )
                goto LABEL_119;
              if ( v65 >= UserServantList[6] )
                goto LABEL_123;
              v74 = *(_QWORD *)&v126[v64 / 4];
              if ( !v74 )
                goto LABEL_69;
              v75 = *(_QWORD *)(v74 + 80);
              v76 = *(_QWORD *)(v74 + 88);
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44, v67);
              *(_QWORD *)&v138.fields.currentCryptoKey = v75;
              *(_QWORD *)&v138.fields.fakeValue = v76;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v138, 0);
              v73 = *(unsigned int *)((char *)off_18 + (_QWORD)svtIdForceBattleList);
              if ( v65 >= v73 )
                goto LABEL_123;
              v44 = (const MethodInfo *)(unsigned int)m_Items[v65];
              if ( (_DWORD)Instance != (_DWORD)v44 )
              {
LABEL_69:
                if ( v65 >= v73 )
                  goto LABEL_123;
                Instance = (__int64)Master_object;
                if ( !Master_object )
                  goto LABEL_119;
                Instance = (__int64)UserServantMaster__getSvtIdBattle(Master_object, (int32_t)v44, 0);
                v83 = Instance;
                if ( Instance )
                {
                  Instance = sub_21FFDA4(Instance, *(_QWORD *)(*(_QWORD *)UserServantList + 64LL));
                  if ( !Instance )
                    goto LABEL_124;
                }
                if ( v65 >= UserServantList[6] )
                  goto LABEL_123;
                *(_QWORD *)&v126[v64 / 4] = v83;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v126[v64 / 4], v83, v77, v78, v79, v80, v81, v82);
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
      goto LABEL_119;
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_50479840(questRestrictionInfo, initPos, 0);
    v86 = Instance;
    if ( (Instance & 1) != 0 )
    {
      v87 = v66->fields.deckInfo;
      if ( !v87 )
        goto LABEL_119;
      v88 = v87->fields.svts;
      if ( !v88 )
        goto LABEL_119;
      if ( v65 >= LODWORD(v88->max_length) )
        goto LABEL_123;
      v89 = v88->m_Items[v64 / 8];
      if ( !v89 )
        goto LABEL_119;
      v90 = 0;
      if ( v135 != v64 )
      {
        npcFollowerSvtId = v89->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v90 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v85);
      }
    }
    else
    {
      v90 = 0;
    }
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_119;
    Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, initPos, 0);
    if ( (v86 & (Instance != 0)) == 1 )
    {
      v92 = (FollowerInfo_o *)Instance;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0) )
        v93 = 0;
      else
        v93 = v129;
      v94 = !FollowerInfo__get_IsNpc(v92, 0);
      v95 = (unsigned int *)*p_memberList;
      if ( v94 )
        v96 = v133;
      else
        v96 = 0;
      v97 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_40934420(
        v97,
        v65,
        v92,
        v93,
        followerGrandGraphIda,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v96,
        initPos,
        0,
        0);
      if ( !v95 )
        goto LABEL_119;
      v66 = deck;
LABEL_98:
      if ( v97 )
      {
        Instance = sub_21FFDA4(v97, *(_QWORD *)(*(_QWORD *)v95 + 64LL));
        if ( !Instance )
          goto LABEL_124;
      }
      if ( v65 >= v95[6] )
        goto LABEL_123;
      *(_QWORD *)&v95[v64 / 4 + 8] = v97;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v95[v64 / 4 + 8], (int32_t)v97, v98, v99, v100, v101, v102, v103);
      goto LABEL_110;
    }
    if ( v135 == v64 || v90 )
    {
      v104 = followera;
      v95 = (unsigned int *)*p_memberList;
      if ( followera )
      {
        v105 = followerClassIda;
        v97 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_40934420(
          v97,
          v65,
          v104,
          v105,
          0,
          setupInfo,
          questRestrictionInfo,
          0,
          0,
          v133,
          initPos,
          0,
          0);
        if ( !v95 )
          goto LABEL_119;
      }
      else
      {
        v116 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
        v97 = v116;
        if ( v121 )
          PartyOrganizationListViewItem___ctor_40934420(
            v116,
            v65,
            v121,
            v129,
            followerGrandGraphIda,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v133,
            initPos,
            0,
            0);
        else
          PartyOrganizationListViewItem___ctor_40971972(v116, v65, 1, setupInfo, questRestrictionInfo, 1, initPos, 0, 0);
        if ( !v95 )
          goto LABEL_119;
      }
      goto LABEL_98;
    }
    if ( !UserServantList )
      goto LABEL_119;
    if ( v65 >= UserServantList[6] )
      goto LABEL_123;
    PartyListViewItem__EventDeckMySvtSlotProcess(
      this,
      initPos,
      v65,
      *(UserServantEntity_o **)&v126[v64 / 4],
      v66,
      v86 & 1,
      isReadyForSortie,
      isRemoveActiveGrandBoardSvt,
      isFixNpc);
LABEL_110:
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_119;
    if ( v65 >= LODWORD(memberList->max_length) )
LABEL_123:
      sub_21FFED4(Instance);
    Instance = (__int64)memberList->m_Items[v64 / 8];
    if ( !Instance )
      goto LABEL_119;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                      + cost;
LABEL_114:
    v64 += 8LL;
    ++v65;
  }
  PartyListViewItem__CheckRestriction(this, v44);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v117) )
    *isReadyForSortie = 1;
}


void PartyListViewItem___ctor_40818760(
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
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  const MethodInfo *v32; // x2
  int32_t v33; // w1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x1
  __int64 v41; // x2
  BalanceConfig_c *v42; // x0
  struct PartyOrganizationListViewItem_array *v43; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x22
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  const MethodInfo_476EDF8 *v51; // x0
  Il2CppObject *Instance; // x0
  __int64 v53; // x1
  int32_t klass; // w23
  int32_t klass_high; // w27
  struct PartyOrganizationListViewItem_array *v56; // x27
  PartyOrganizationListViewItem_o *v57; // x0
  PartyOrganizationListViewItem_o *v58; // x28
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  __int64 v65; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w24
  int32_t MargeCost; // w0
  const MethodInfo *v69; // x1
  __int64 v70; // x2
  int32_t i; // w23
  int32_t v72; // w8
  BalanceConfig_c *v73; // x0
  struct PartyOrganizationListViewItem_array *v74; // x26
  PartyOrganizationListViewItem_o *v75; // x24
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  Il2CppClass **v82; // x0
  struct PartyOrganizationListViewItem_array *v83; // x8
  __int64 v84; // x0

  if ( (byte_5933DC4 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewItem___TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewItem_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5933DC4 = 1;
  }
  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.maxCost = PartyListViewItem__GetMaxCost(this, maxCost, v32);
  v33 = (int)StringLiteral_1/*""*/;
  this->fields.deckName = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.isDeckNameDefault = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.deckName, v33, v34, v35, v36, v37, v38, v39);
  v42 = BalanceConfig_TypeInfo;
  this->fields.userEquipId = userEquipId;
  this->fields.id = 0;
  if ( !*(&v42->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v42, v40, v41);
    v42 = BalanceConfig_TypeInfo;
  }
  v43 = (struct PartyOrganizationListViewItem_array *)sub_21FFD10(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v42->static_fields->DeckMemberMax);
  this->fields.memberList = v43;
  p_memberList = &this->fields.memberList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.memberList, (int32_t)v43, v45, v46, v47, v48, v49, v50);
  v51 = (const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
  this->fields.cost = 0;
  Instance = SingletonTemplate_object___get_Instance(v51);
  if ( !Instance )
    goto LABEL_35;
  if ( Instance[1].monitor )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    follower = (FollowerInfo_o *)Instance[1].monitor;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    klass = (int32_t)Instance[2].klass;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    klass_high = HIDWORD(Instance[2].klass);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    followerGrandGraphId = klass_high;
    followerClassId = klass;
    followerDeckId = (int32_t)Instance[2].monitor;
  }
  v56 = *p_memberList;
  v57 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
  v58 = v57;
  if ( follower )
  {
    PartyOrganizationListViewItem___ctor_40934420(
      v57,
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
    if ( !v56 )
      goto LABEL_35;
  }
  else
  {
    PartyOrganizationListViewItem___ctor_40971972(v57, 0, 1, setupInfo, questRestrictionInfo, 1, 0, 0, 0);
    if ( !v56 )
      goto LABEL_35;
  }
  if ( v58 )
  {
    Instance = (Il2CppObject *)sub_21FFDA4(v58, v56->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_37:
      v84 = sub_21FFEF0(Instance, v65);
      sub_21FFD90(v84, 0);
    }
  }
  if ( !LODWORD(v56->max_length) )
    goto LABEL_36;
  v56->m_Items[0] = v58;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v56->m_Items, (int32_t)v58, v59, v60, v61, v62, v63, v64);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_35;
  if ( !LODWORD(memberList->max_length) )
LABEL_36:
    sub_21FFED4(Instance);
  Instance = (Il2CppObject *)memberList->m_Items[0];
  if ( !Instance )
LABEL_35:
    sub_21FFECC(Instance, v53);
  cost = this->fields.cost;
  MargeCost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0);
  for ( i = 1; ; ++i )
  {
    v72 = MargeCost + cost;
    v73 = BalanceConfig_TypeInfo;
    this->fields.cost = v72;
    if ( !*(&v73->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v73, v69, v70);
      v73 = BalanceConfig_TypeInfo;
    }
    if ( i >= v73->static_fields->DeckMemberMax )
      break;
    v74 = *p_memberList;
    v75 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_40971972(v75, i, 0, setupInfo, questRestrictionInfo, 1, 0, 0, 0);
    if ( !v74 )
      goto LABEL_35;
    if ( v75 )
    {
      Instance = (Il2CppObject *)sub_21FFDA4(v75, v74->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_37;
    }
    if ( (unsigned int)i >= LODWORD(v74->max_length) )
      goto LABEL_36;
    v82 = &v74->obj.klass + i;
    v82[4] = (Il2CppClass *)v75;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v82 + 4), (int32_t)v75, v76, v77, v78, v79, v80, v81);
    v83 = this->fields.memberList;
    if ( !v83 )
      goto LABEL_35;
    if ( (unsigned int)i >= LODWORD(v83->max_length) )
      goto LABEL_36;
    Instance = (Il2CppObject *)v83->m_Items[i];
    if ( !Instance )
      goto LABEL_35;
    cost = this->fields.cost;
    MargeCost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0);
  }
  PartyListViewItem__CheckRestriction(this, v69);
}


void PartyListViewItem___ctor_40819676(
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
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  const MethodInfo *v33; // x2
  __int64 IsNeedDeckPosReset; // x0
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x2
  UserEventDeckEntity_o *v37; // x21
  struct DeckServant_o *deckInfo; // x8
  int64_t eventId; // x9
  const MethodInfo_476EDF8 **v40; // x28
  int32_t servantNumMax; // w25
  const MethodInfo *v42; // x3
  PartyListViewItem_o *v43; // x26
  int v44; // w24
  const MethodInfo *v45; // x2
  int32_t v46; // w22
  __int64 v47; // x1
  __int64 v48; // x2
  int32_t FollowerIndex; // w22
  BalanceConfig_c *v50; // x0
  int32_t v51; // w24
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  __int64 v58; // x8
  __int64 v59; // x29
  unsigned __int64 v60; // x21
  MissionNaviTransitionBoardItem_o *v61; // x22
  BalanceConfig_c *v62; // x0
  struct PartyOrganizationListViewItem_array *v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  __int64 v70; // x1
  __int64 v71; // x2
  DataManager_c *v72; // x0
  UserEventDeckEntity_o *v73; // x22
  const MethodInfo *v74; // x2
  int32_t v75; // w19
  struct DeckServant_o *v76; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v78; // x8
  int32_t *p_initPos; // x8
  int32_t initPos; // w26
  const MethodInfo *v81; // x6
  unsigned __int8 v82; // w24
  bool v83; // w27
  struct DeckServant_o *v84; // x8
  struct DeckServantData_array *v85; // x8
  DeckServantData_o *v86; // x8
  int64_t npcFollowerSvtId; // x4
  const MethodInfo_476EDF8 **v88; // x25
  FollowerInfo_o *v89; // x28
  int32_t v90; // w27
  bool v91; // zf
  struct PartyOrganizationListViewItem_array *v92; // x21
  int32_t v93; // w22
  PartyOrganizationListViewItem_o *v94; // x24
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  FollowerInfo_o *v101; // x27
  int32_t v102; // w28
  __int64 v103; // x1
  Il2CppClass **v104; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w21
  PartyOrganizationListViewItem_o *v107; // x0
  const MethodInfo *v108; // x1
  __int64 v109; // x0
  const MethodInfo *isFixNpc; // [xsp+0h] [xbp-100h]
  FollowerInfo_o *followerInfo; // [xsp+30h] [xbp-D0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+38h] [xbp-C8h]
  int v114; // [xsp+48h] [xbp-B8h]
  int v115; // [xsp+4Ch] [xbp-B4h]
  int v116; // [xsp+4Ch] [xbp-B4h]
  PartyListViewItem_o *v117; // [xsp+50h] [xbp-B0h]
  int32_t followerGrandGraphIda; // [xsp+58h] [xbp-A8h]
  int32_t v119; // [xsp+5Ch] [xbp-A4h]
  int32_t v122; // [xsp+7Ch] [xbp-84h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+80h] [xbp-80h]
  _BOOL4 v124; // [xsp+90h] [xbp-70h]
  int32_t followerClassIda; // [xsp+94h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+98h] [xbp-68h] BYREF

  if ( (byte_5933DC5 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewItem___TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewItem_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5933DC5 = 1;
  }
  followera = 0;
  followerClassIda = 0;
  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
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
    goto LABEL_100;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_100;
  eventId = deck->fields.eventId;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = eventId;
  IsNeedDeckPosReset = PartyListViewItem__IsNeedDeckPosReset(this, deck, v36);
  if ( (IsNeedDeckPosReset & 1) != 0 )
  {
    IsNeedDeckPosReset = (__int64)deck->fields.deckInfo;
    if ( !IsNeedDeckPosReset )
      goto LABEL_100;
    DeckServant__ResetInitPos((DeckServant_o *)IsNeedDeckPosReset, 0);
  }
  if ( !questRestrictionInfo )
    goto LABEL_100;
  v40 = (const MethodInfo_476EDF8 **)&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
  servantNumMax = questRestrictionInfo->fields.servantNumMax;
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_100;
  followerInfo = follower;
  if ( *(int *)(IsNeedDeckPosReset + 80) < 1 )
  {
    v43 = 0;
    v44 = 0;
    v124 = 1;
  }
  else
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_100;
    v43 = *(PartyListViewItem_o **)(IsNeedDeckPosReset + 104);
    v44 = 0;
    v124 = v43 == 0;
    if ( follower && v43 )
    {
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_100;
      v44 = *(_DWORD *)(IsNeedDeckPosReset + 80);
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v43, v44 - 1, v45);
      if ( !IsNeedDeckPosReset )
        goto LABEL_100;
      v46 = *(_DWORD *)(IsNeedDeckPosReset + 364);
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_100;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)IsNeedDeckPosReset, v46, follower, 0);
      v37 = deck;
      v124 = 0;
    }
  }
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, v37, 0, v42);
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
  v50 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v47, v48);
    v50 = BalanceConfig_TypeInfo;
  }
  FollowerIndex = servantNumMax;
  if ( servantNumMax > v50->static_fields->DeckMainMemberMax )
  {
    FollowerIndex = v50->static_fields->DeckMainMemberMax;
    if ( !*(&v50->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v50, v47, v48);
      FollowerIndex = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
    }
  }
LABEL_29:
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_100;
  v117 = v43;
  v115 = v44;
  if ( *(_QWORD *)(IsNeedDeckPosReset + 24) )
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_100;
    followerInfo = *(FollowerInfo_o **)(IsNeedDeckPosReset + 24);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_100;
    v119 = *(_DWORD *)(IsNeedDeckPosReset + 32);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_100;
    followerGrandGraphIda = *(_DWORD *)(IsNeedDeckPosReset + 36);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_100;
    v122 = *(_DWORD *)(IsNeedDeckPosReset + 40);
  }
  else
  {
    v122 = followerDeckId;
    followerGrandGraphIda = followerGrandGraphId;
    v119 = followerClassId;
  }
  v51 = FollowerIndex;
  IsNeedDeckPosReset = (__int64)UserEventDeckEntity__GetUserServantList(v37, 0, 0, 0);
  if ( !IsNeedDeckPosReset )
    goto LABEL_100;
  v58 = *(_QWORD *)(IsNeedDeckPosReset + 24);
  v59 = IsNeedDeckPosReset;
  if ( (int)v58 >= 1 )
  {
    v60 = 0;
    v61 = (MissionNaviTransitionBoardItem_o *)(IsNeedDeckPosReset + 32);
    do
    {
      if ( v60 >= (unsigned int)v58 )
LABEL_104:
        sub_21FFED4(IsNeedDeckPosReset);
      if ( v61->klass && (__int64)v60 >= servantNumMax )
      {
        *isReadyForSortie = 1;
        if ( v60 >= *(unsigned int *)(v59 + 24) )
          goto LABEL_104;
        v61->klass = 0;
        sub_21FFBF4(v61, 0, v52, v53, v54, v55, v56, v57);
      }
      LODWORD(v58) = *(_DWORD *)(v59 + 24);
      ++v60;
      v61 = (MissionNaviTransitionBoardItem_o *)((char *)v61 + 8);
    }
    while ( (__int64)v60 < (int)v58 );
  }
  v62 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v35, v52);
    v62 = BalanceConfig_TypeInfo;
  }
  v63 = (struct PartyOrganizationListViewItem_array *)sub_21FFD10(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v62->static_fields->DeckMemberMax);
  this->fields.memberList = v63;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.memberList, (int32_t)v63, v64, v65, v66, v67, v68, v69);
  v72 = DataManager_TypeInfo;
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( !*(&v72->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v72, v70, v71);
  IsNeedDeckPosReset = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || (v73 = deck, !IsNeedDeckPosReset) )
LABEL_100:
    sub_21FFECC(IsNeedDeckPosReset, v35);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)IsNeedDeckPosReset,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0);
  v75 = 0;
  v114 = v115 - 1;
  v116 = v51 - 1;
  while ( 1 )
  {
    IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v35, v74);
      IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    }
    if ( v75 >= *(_DWORD *)(*(_QWORD *)(IsNeedDeckPosReset + 184) + 172LL) )
      break;
    if ( v124 )
    {
      v76 = v73->fields.deckInfo;
      if ( !v76 )
        goto LABEL_100;
      svts = v76->fields.svts;
      if ( !svts )
        goto LABEL_100;
      if ( (unsigned int)v75 >= LODWORD(svts->max_length) )
        goto LABEL_104;
      v78 = svts->m_Items[v75];
      if ( !v78 )
        goto LABEL_100;
      p_initPos = &v78->fields.initPos;
    }
    else
    {
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v117, v75, v74);
      if ( !IsNeedDeckPosReset )
        goto LABEL_100;
      p_initPos = (int32_t *)(IsNeedDeckPosReset + 364);
    }
    initPos = *p_initPos;
    followera = 0;
    followerClassIda = 0;
    IsNeedDeckPosReset = QuestRestrictionInfo__IsMyServantOrNpcRestriction_50479840(questRestrictionInfo, initPos, 0);
    v82 = IsNeedDeckPosReset;
    v83 = 0;
    if ( (IsNeedDeckPosReset & 1) != 0 )
    {
      v84 = v73->fields.deckInfo;
      if ( !v84 )
        goto LABEL_100;
      v85 = v84->fields.svts;
      if ( !v85 )
        goto LABEL_100;
      if ( (unsigned int)v75 >= LODWORD(v85->max_length) )
        goto LABEL_104;
      v86 = v85->m_Items[v75];
      if ( !v86 )
        goto LABEL_100;
      v83 = 0;
      if ( v114 != v75 )
      {
        npcFollowerSvtId = v86->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v83 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v81);
      }
    }
    v88 = v40;
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance(*v40);
    if ( !IsNeedDeckPosReset )
      goto LABEL_100;
    IsNeedDeckPosReset = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                                    (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
                                    initPos,
                                    0);
    if ( (v82 & (IsNeedDeckPosReset != 0)) == 1 )
    {
      v89 = (FollowerInfo_o *)IsNeedDeckPosReset;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)IsNeedDeckPosReset, 0) )
        v90 = 0;
      else
        v90 = v119;
      v91 = !FollowerInfo__get_IsNpc(v89, 0);
      v92 = *p_memberList;
      if ( v91 )
        v93 = v122;
      else
        v93 = 0;
      v94 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_40934420(
        v94,
        v75,
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
        goto LABEL_100;
      v73 = deck;
    }
    else
    {
      if ( !v83 && v116 != v75 )
      {
        if ( (unsigned int)v75 >= *(_DWORD *)(v59 + 24) )
          goto LABEL_104;
        PartyListViewItem__EventDeckMySvtSlotProcess(
          this,
          initPos,
          v75,
          *(UserServantEntity_o **)(v59 + 8LL * v75 + 32),
          v73,
          v82 & 1,
          isReadyForSortie,
          isRemoveActiveGrandBoardSvt,
          isFixNpc);
        goto LABEL_92;
      }
      v101 = followera;
      v92 = *p_memberList;
      if ( !followera )
      {
        v107 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
        v94 = v107;
        if ( followerInfo )
          PartyOrganizationListViewItem___ctor_40934420(
            v107,
            v75,
            followerInfo,
            v119,
            followerGrandGraphIda,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v122,
            initPos,
            0,
            0);
        else
          PartyOrganizationListViewItem___ctor_40971972(v107, v75, 1, setupInfo, questRestrictionInfo, 1, initPos, 0, 0);
        if ( !v92 )
          goto LABEL_100;
        goto LABEL_86;
      }
      v102 = followerClassIda;
      v94 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_40934420(
        v94,
        v75,
        v101,
        v102,
        0,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v122,
        initPos,
        0,
        0);
      if ( !v92 )
        goto LABEL_100;
    }
    v40 = v88;
LABEL_86:
    if ( v94 )
    {
      IsNeedDeckPosReset = sub_21FFDA4(v94, v92->obj.klass->_1.element_class);
      if ( !IsNeedDeckPosReset )
      {
        v109 = sub_21FFEF0(0, v103);
        sub_21FFD90(v109, 0);
      }
    }
    if ( (unsigned int)v75 >= LODWORD(v92->max_length) )
      goto LABEL_104;
    v104 = &v92->obj.klass + v75;
    v104[4] = (Il2CppClass *)v94;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v104 + 4), (int32_t)v94, v95, v96, v97, v98, v99, v100);
LABEL_92:
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_100;
    if ( (unsigned int)v75 >= LODWORD(memberList->max_length) )
      goto LABEL_104;
    IsNeedDeckPosReset = (__int64)memberList->m_Items[v75];
    if ( !IsNeedDeckPosReset )
      goto LABEL_100;
    cost = this->fields.cost;
    ++v75;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)IsNeedDeckPosReset,
                          0)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, v35);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v108) )
    *isReadyForSortie = 1;
}


void PartyListViewItem___ctor_40821732(
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
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  const MethodInfo *v37; // x2
  __int64 Instance; // x0
  FollowerInfo_o *v39; // x1
  const MethodInfo *v40; // x2
  struct DeckServant_o *deckInfo; // x8
  System_Int64_array *NpcServantFollowerIds; // x24
  __int64 v43; // x2
  FollowerInfo_o *v44; // x29
  PartyListViewItem_o *v45; // x23
  const MethodInfo *v46; // x2
  int32_t v47; // w21
  __int64 v48; // x1
  __int64 v49; // x2
  FollowerInfo_array *QuestFollowerList; // x19
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  int max_length; // w8
  FollowerInfo_array *v58; // x9
  unsigned int v59; // w21
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  __int64 v64; // x2
  int32_t v65; // w23
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v67; // w9
  int v68; // w11
  QuestRestrictionInfo_SlotInfo_o *v69; // x12
  struct DeckServant_o *v70; // x8
  char v71; // w26
  int v72; // w29
  int32_t v73; // w22
  struct DeckServantData_array *svts; // x8
  PartyListViewItem___c__DisplayClass31_0_o *v75; // x19
  struct DeckServant_o *v76; // x8
  struct DeckServantData_array *v77; // x8
  DeckServantData_o *v78; // x8
  int64_t userSvtId; // x21
  System_Func_object__bool__o *v80; // x21
  BalanceConfig_c *v81; // x0
  _BOOL8 v82; // x0
  __int64 v83; // x1
  const MethodInfo *v84; // x2
  void *monitor; // x21
  int klass; // w8
  __int64 NpcDeployIdx; // x0
  __int64 v88; // x1
  __int64 v89; // x1
  __int64 v90; // x2
  BalanceConfig_c *v91; // x0
  const MethodInfo *v92; // x2
  const MethodInfo *v93; // x3
  int32_t i; // w19
  struct DeckServant_o *v95; // x8
  struct DeckServantData_array *v96; // x8
  DeckServantData_o *v97; // x8
  int32_t UserServantDeployIndex; // w0
  unsigned int v99; // w21
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  UserServantEntity_array *v106; // x9
  __int64 v107; // x23
  __int64 v108; // x1
  __int64 v109; // x2
  BalanceConfig_c *v110; // x0
  struct PartyOrganizationListViewItem_array *v111; // x0
  System_String_o *v112; // x2
  System_String_o *v113; // x3
  int32_t v114; // w4
  int32_t v115; // w5
  bool v116; // w6
  bool v117; // w7
  System_String_o *v118; // x2
  unsigned __int64 v119; // x25
  PartyListViewItem_o *v120; // x24
  __int64 j; // x29
  BalanceConfig_c *v122; // x0
  PartyListViewItem___c__DisplayClass31_1_o *v123; // x26
  const MethodInfo *v124; // x2
  struct DeckServant_o *v125; // x8
  struct DeckServantData_array *v126; // x8
  __int64 v127; // x8
  int32_t *v128; // x8
  int32_t initPos; // w19
  unsigned int *v130; // x21
  PartyOrganizationListViewItem_o *v131; // x23
  System_String_o *v132; // x2
  System_String_o *v133; // x3
  int32_t v134; // w4
  int32_t v135; // w5
  bool v136; // w6
  bool v137; // w7
  const MethodInfo *v138; // x6
  bool v139; // w23
  unsigned __int8 v140; // w21
  int64_t v141; // x4
  unsigned __int64 v142; // x26
  FollowerInfo_o *v143; // x24
  bool IsNpc; // w0
  int32_t v145; // w8
  bool v146; // zf
  unsigned int *v147; // x21
  int32_t v148; // w22
  PartyOrganizationListViewItem_o *v149; // x23
  System_String_o *v150; // x2
  System_String_o *v151; // x3
  int32_t v152; // w4
  int32_t v153; // w5
  bool v154; // w6
  bool v155; // w7
  unsigned __int64 v156; // x21
  FollowerInfo_o *v157; // x24
  unsigned int *v158; // x26
  int32_t v159; // w21
  PartyOrganizationListViewItem_o *v160; // x23
  System_String_o *v161; // x2
  System_String_o *v162; // x3
  int32_t v163; // w4
  int32_t v164; // w5
  bool v165; // w6
  bool v166; // w7
  PartyOrganizationListViewItem_o *v167; // x0
  System_Func_object__bool__o *v168; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v169; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v170; // x23
  FollowerInfo_o *v171; // x23
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v173; // x8
  int32_t classId; // w24
  unsigned int *v175; // x21
  PartyOrganizationListViewItem_o *v176; // x26
  System_String_o *v177; // x2
  System_String_o *v178; // x3
  int32_t v179; // w4
  int32_t v180; // w5
  bool v181; // w6
  bool v182; // w7
  System_Collections_Generic_List_object__o *v183; // x21
  int32_t v184; // w23
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  System_Collections_Generic_List_object__o *v187; // x10
  int32_t v188; // w26
  __int64 v189; // x8
  FollowerInfo_o *v190; // x24
  __int64 v191; // x8
  UserServantEntity_array *v192; // x10
  int32_t myServantNumMax; // w8
  __int64 v195; // x22
  int32_t v196; // w25
  unsigned __int64 v197; // x28
  UserServantEntity_o **m_Items; // x29
  PartyListViewItem___c__DisplayClass31_2_o *v199; // x19
  signed __int64 v200; // x21
  System_Func_object__bool__o *v201; // x23
  System_String_o *v202; // x3
  int32_t v203; // w4
  int32_t v204; // w5
  bool v205; // w6
  bool v206; // w7
  unsigned __int64 max_length_low; // x8
  PartyListViewItem_o *v208; // x24
  unsigned __int64 v209; // x21
  signed __int64 v210; // x29
  EventUpValSetupInfo_o *v211; // x22
  unsigned __int64 v212; // x23
  __int64 k; // x26
  BalanceConfig_c *v214; // x0
  PartyListViewItem___c__DisplayClass31_3_o *v215; // x25
  const MethodInfo *v216; // x2
  struct DeckServant_o *v217; // x8
  struct DeckServantData_array *v218; // x8
  DeckServantData_o *v219; // x8
  int32_t *p_initPos; // x8
  int32_t v221; // w19
  unsigned int *v222; // x21
  PartyOrganizationListViewItem_o *v223; // x25
  System_String_o *v224; // x2
  System_String_o *v225; // x3
  int32_t v226; // w4
  int32_t v227; // w5
  bool v228; // w6
  bool v229; // w7
  const MethodInfo *v230; // x6
  struct DeckServant_o *v231; // x8
  struct DeckServantData_array *v232; // x8
  DeckServantData_o *v233; // x8
  int64_t npcFollowerSvtId; // x4
  bool v235; // w22
  int32_t chkIdx; // w8
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v238; // x24
  bool v239; // w0
  int32_t v240; // w8
  unsigned int *v241; // x21
  int32_t v242; // w22
  PartyOrganizationListViewItem_o *v243; // x25
  System_String_o *v244; // x2
  System_String_o *v245; // x3
  int32_t v246; // w4
  int32_t v247; // w5
  bool v248; // w6
  bool v249; // w7
  struct PartyOrganizationListViewItem_array *v250; // x8
  struct DeckServant_o *v251; // x9
  struct DeckServantData_array *v252; // x9
  DeckServantData_o *v253; // x9
  PartyOrganizationListViewItem_o *v254; // x8
  FollowerInfo_o *v255; // x24
  unsigned int *v256; // x22
  PartyOrganizationListViewItem_o *v257; // x25
  System_String_o *v258; // x2
  System_String_o *v259; // x3
  int32_t v260; // w4
  int32_t v261; // w5
  bool v262; // w6
  bool v263; // w7
  unsigned int *v264; // x19
  PartyOrganizationListViewItem_o *v265; // x0
  unsigned __int64 v266; // x8
  struct PartyOrganizationListViewItem_array *v267; // x8
  struct DeckServant_o *v268; // x9
  struct DeckServantData_array *v269; // x9
  DeckServantData_o *v270; // x9
  PartyOrganizationListViewItem_o *v271; // x8
  System_Func_object__bool__o *v272; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v273; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v274; // x24
  FollowerInfo_o *v275; // x24
  __int64 v276; // x8
  __int64 v277; // x8
  unsigned __int64 v278; // x27
  unsigned int *v279; // x21
  PartyOrganizationListViewItem_o *v280; // x25
  System_String_o *v281; // x2
  System_String_o *v282; // x3
  int32_t v283; // w4
  int32_t v284; // w5
  bool v285; // w6
  bool v286; // w7
  unsigned int *v287; // x21
  PartyOrganizationListViewItem_o *v288; // x24
  System_String_o *v289; // x2
  System_String_o *v290; // x3
  int32_t v291; // w4
  int32_t v292; // w5
  bool v293; // w6
  bool v294; // w7
  struct PartyOrganizationListViewItem_array *v295; // x8
  int32_t v296; // w19
  const MethodInfo *v297; // x1
  __int64 v298; // x0
  MethodInfo *methoda; // [xsp+0h] [xbp-1A0h]
  int32_t followerDeckIda; // [xsp+8h] [xbp-198h]
  int32_t followerDeckIdb; // [xsp+8h] [xbp-198h]
  int32_t v302; // [xsp+30h] [xbp-170h]
  unsigned int *v303; // [xsp+30h] [xbp-170h]
  UserServantEntity_o **v304; // [xsp+38h] [xbp-168h]
  _BOOL4 v305; // [xsp+44h] [xbp-15Ch]
  bool v307; // [xsp+50h] [xbp-150h]
  int32_t v308; // [xsp+50h] [xbp-150h]
  int32_t v309; // [xsp+50h] [xbp-150h]
  bool v310; // [xsp+50h] [xbp-150h]
  int v311; // [xsp+54h] [xbp-14Ch]
  int v312; // [xsp+58h] [xbp-148h]
  UserEventDeckEntity_o *v313; // [xsp+58h] [xbp-148h]
  bool *isBaseModify; // [xsp+60h] [xbp-140h]
  int32_t followerGrandGraphIda; // [xsp+74h] [xbp-12Ch]
  int32_t v316; // [xsp+78h] [xbp-128h]
  int32_t v317; // [xsp+7Ch] [xbp-124h]
  int32_t v318; // [xsp+80h] [xbp-120h]
  int32_t FollowerIndex; // [xsp+8Ch] [xbp-114h]
  FollowerInfo_o *v320; // [xsp+90h] [xbp-110h]
  System_Int64_array *v321; // [xsp+98h] [xbp-108h]
  int32_t v322; // [xsp+98h] [xbp-108h]
  PartyListViewItem_o *v323; // [xsp+A0h] [xbp-100h]
  PartyListViewItem_o *v324; // [xsp+A8h] [xbp-F8h]
  System_Collections_Generic_List_object__o *v325; // [xsp+B8h] [xbp-E8h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+C0h] [xbp-E0h]
  int32_t DeckMemberMax; // [xsp+C8h] [xbp-D8h]
  unsigned __int8 v328; // [xsp+C8h] [xbp-D8h]
  int32_t v329; // [xsp+C8h] [xbp-D8h]
  bool v330; // [xsp+C8h] [xbp-D8h]
  int32_t v331; // [xsp+C8h] [xbp-D8h]
  UserServantEntity_array *userServantList; // [xsp+D0h] [xbp-D0h]
  _BOOL4 v333; // [xsp+DCh] [xbp-C4h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+E0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v335; // [xsp+E8h] [xbp-B8h] BYREF
  int32_t v336; // [xsp+104h] [xbp-9Ch] BYREF
  FollowerInfo_o *v337; // [xsp+108h] [xbp-98h] BYREF
  int32_t followerClassIda; // [xsp+114h] [xbp-8Ch] BYREF
  FollowerInfo_o *followera; // [xsp+118h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v340; // [xsp+120h] [xbp-80h] BYREF

  v16 = setupInfo;
  if ( (byte_5933DC6 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_BasicHelper_Any_FollowerInfo___);
    sub_21FFC50(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_FollowerInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_FollowerInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__get_Current__);
    sub_21FFC50(&FollowerInfo___TypeInfo);
    sub_21FFC50(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_21FFC50(&long___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_FollowerInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FollowerInfo___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FollowerInfo__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_FollowerInfo__TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewItem___TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewItem_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&Method_PartyListViewItem___c__DisplayClass31_0___ctor_b__0__);
    sub_21FFC50(&PartyListViewItem___c__DisplayClass31_0_TypeInfo);
    sub_21FFC50(&Method_PartyListViewItem___c__DisplayClass31_1___ctor_b__1__);
    sub_21FFC50(&PartyListViewItem___c__DisplayClass31_1_TypeInfo);
    sub_21FFC50(&Method_PartyListViewItem___c__DisplayClass31_2___ctor_b__2__);
    sub_21FFC50(&PartyListViewItem___c__DisplayClass31_2_TypeInfo);
    sub_21FFC50(&Method_PartyListViewItem___c__DisplayClass31_3___ctor_b__3__);
    sub_21FFC50(&PartyListViewItem___c__DisplayClass31_3_TypeInfo);
    sub_21FFC50(&UserServantEntity___TypeInfo);
    byte_5933DC6 = 1;
  }
  memset(&v340, 0, sizeof(v340));
  followera = 0;
  followerClassIda = 0;
  v337 = 0;
  v336 = 0;
  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  Instance = PartyListViewItem__GetMaxCost(this, maxCost, v37);
  this->fields.maxCost = Instance;
  if ( !deck )
    goto LABEL_77;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_77;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v40) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_77;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0);
  }
  NpcServantFollowerIds = UserEventDeckEntity__GetNpcServantFollowerIds(deck, 0);
  userServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  v44 = follower;
  if ( *(int *)(Instance + 80) < 1 )
  {
    v45 = 0;
    v311 = 0;
    v333 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    v45 = *(PartyListViewItem_o **)(Instance + 104);
    v333 = v45 == 0;
    if ( follower && v45 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_77;
      v311 = *(_DWORD *)(Instance + 80);
      Instance = (__int64)PartyListViewItem__GetMember(v45, v311 - 1, v46);
      if ( !Instance )
        goto LABEL_77;
      v47 = *(_DWORD *)(Instance + 364);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_77;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v47, follower, 0);
      v333 = 0;
    }
    else
    {
      v311 = 0;
    }
  }
  Instance = (__int64)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v39, v43);
  v324 = v45;
  if ( !questRestrictionInfo )
    goto LABEL_77;
  DeckMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMemberMax;
  if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0) )
    DeckMemberMax = questRestrictionInfo->fields.servantNumMax;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v48, v49);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo
    || !Instance
    || (QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                              (NpcFollowerMaster_o *)Instance,
                              (*p_questRestrictionInfo)->fields.questId,
                              (*p_questRestrictionInfo)->fields.questPhase,
                              0),
        v325 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_FollowerInfo__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v325,
          (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_FollowerInfo___ctor__),
        !QuestFollowerList) )
  {
LABEL_77:
    sub_21FFECC(Instance, v39);
  }
  max_length = QuestFollowerList->max_length;
  v58 = QuestFollowerList;
  npcFollowerInfoList = QuestFollowerList;
  if ( max_length >= 1 )
  {
    v59 = 0;
    while ( v59 < max_length )
    {
      v39 = v58->m_Items[v59];
      if ( !v39 )
        goto LABEL_77;
      if ( !v39->fields.isMySvtOrNpc
        && (questRestrictionInfo->fields.isNotTransitionSupportList
         || !questRestrictionInfo->fields.isNpcMultipleBattle
         || v39->fields.isFixedNpc) )
      {
        if ( !v325 )
          goto LABEL_77;
        items = v325->fields._items;
        v61 = Method_System_Collections_Generic_List_FollowerInfo__Add__;
        ++v325->fields._version;
        if ( !items )
          goto LABEL_77;
        size = v325->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v325,
            (Il2CppObject *)v39,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
        }
        else
        {
          v63 = &items->obj.klass + size;
          v325->fields._size = size + 1;
          v63[4] = (Il2CppClass *)v39;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v63 + 4), (int32_t)v39, v51, v52, v53, v54, v55, v56);
        }
        v58 = QuestFollowerList;
      }
      max_length = v58->max_length;
      if ( (int)++v59 >= max_length )
        goto LABEL_46;
    }
LABEL_377:
    sub_21FFED4(Instance);
  }
LABEL_46:
  FollowerIndex = PartyListViewItem__GetFollowerIndex(
                    this,
                    deck,
                    (System_Collections_Generic_List_FollowerInfo__o *)v325,
                    (const MethodInfo *)v52);
  isBaseModify = isReadyForSortie;
  v323 = this;
  if ( isNew || !questRestrictionInfo->fields.isNpcEditablePos )
    goto LABEL_119;
  Instance = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
  if ( (Instance & 1) != 0 )
  {
    if ( !v325 )
      goto LABEL_77;
    v65 = v325->fields._size;
  }
  else
  {
    slotInfos = questRestrictionInfo->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_77;
    v67 = slotInfos->max_length;
    if ( v67 >= 1 )
    {
      v65 = 0;
      v68 = 0;
      while ( v67 != v68 )
      {
        v69 = slotInfos->m_Items[v68];
        if ( !v69 )
          goto LABEL_77;
        if ( v69->fields.slotType == 1 )
          v65 += v69->fields.isMoved;
        if ( (v67 & ~(v67 >> 31)) == ++v68 )
          goto LABEL_61;
      }
      goto LABEL_377;
    }
    v65 = 0;
  }
LABEL_61:
  v70 = deck->fields.deckInfo;
  if ( !v70 )
    goto LABEL_77;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  while ( 1 )
  {
    svts = v70->fields.svts;
    if ( !svts )
      goto LABEL_77;
    if ( v73 >= SLODWORD(svts->max_length) )
      break;
    v75 = (PartyListViewItem___c__DisplayClass31_0_o *)sub_21FFEBC(PartyListViewItem___c__DisplayClass31_0_TypeInfo);
    PartyListViewItem___c__DisplayClass31_0___ctor(v75, 0);
    v76 = deck->fields.deckInfo;
    if ( !v76 )
      goto LABEL_77;
    v77 = v76->fields.svts;
    if ( !v77 )
      goto LABEL_77;
    if ( (unsigned int)v73 >= LODWORD(v77->max_length) )
      goto LABEL_377;
    v78 = v77->m_Items[v73];
    if ( v78 && v75 )
    {
      userSvtId = v78->fields.userSvtId;
      v75->fields.npcSvtId = v78->fields.npcFollowerSvtId;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_50479840(
                   questRestrictionInfo,
                   v78->fields.initPos,
                   0);
      if ( v73 >= DeckMemberMax && (userSvtId || v75->fields.npcSvtId) )
        v71 = 1;
      if ( !(Instance & 1 | (v75->fields.npcSvtId == 0)) )
      {
        v80 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v80,
          (Il2CppObject *)v75,
          Method_PartyListViewItem___c__DisplayClass31_0___ctor_b__0__,
          0);
        Instance = BasicHelper__Any_object_(
                     (System_Collections_Generic_List_T__o *)v325,
                     (System_Func_T__bool__o *)v80,
                     (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_FollowerInfo___);
        v72 += Instance & 1;
      }
      v70 = deck->fields.deckInfo;
      ++v73;
      if ( v70 )
        continue;
    }
    goto LABEL_77;
  }
  if ( !((v72 != v65) | v71 & 1) )
  {
    v16 = setupInfo;
    v44 = follower;
    goto LABEL_119;
  }
  v81 = BalanceConfig_TypeInfo;
  v44 = follower;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v39, v64);
    v81 = BalanceConfig_TypeInfo;
  }
  NpcServantFollowerIds = (System_Int64_array *)sub_21FFD10(
                                                  long___TypeInfo,
                                                  (unsigned int)v81->static_fields->DeckMemberMax);
  Instance = (__int64)v325;
  if ( !v325 )
    goto LABEL_77;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v335,
    v325,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
  v340 = v335;
  v335.fields._list = 0;
  *(_QWORD *)&v335.fields._index = &v340;
  while ( 1 )
  {
    v82 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v340,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    if ( !v82 )
      break;
    if ( !v340.fields._current )
      sub_21FFECC(v82, v83);
    monitor = v340.fields._current[5].monitor;
    if ( monitor )
    {
      klass = (int)v340.fields._current[6].klass;
      NpcDeployIdx = (unsigned int)(klass - 1);
      if ( klass - 1 >= 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_21FFECC(NpcDeployIdx, v83);
        if ( (unsigned int)NpcDeployIdx >= LODWORD(NpcServantFollowerIds->max_length) )
          sub_21FFED4(NpcDeployIdx);
        goto LABEL_93;
      }
      NpcDeployIdx = PartyListViewItem__GetNpcDeployIdx(this, NpcServantFollowerIds, v84);
      if ( (NpcDeployIdx & 0x80000000) == 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_21FFECC(NpcDeployIdx, v88);
        if ( (unsigned int)NpcDeployIdx >= LODWORD(NpcServantFollowerIds->max_length) )
          sub_21FFED4(NpcDeployIdx);
LABEL_93:
        NpcServantFollowerIds->m_Items[(unsigned int)NpcDeployIdx] = (int64_t)monitor;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v340,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
  v91 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v89, v90);
    v91 = BalanceConfig_TypeInfo;
  }
  userServantList = (UserServantEntity_array *)sub_21FFD10(
                                                 UserServantEntity___TypeInfo,
                                                 (unsigned int)v91->static_fields->DeckMemberMax);
  for ( i = 0; ; ++i )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v39, v92);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( i >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 172LL) )
      break;
    v95 = deck->fields.deckInfo;
    if ( !v95 )
      goto LABEL_77;
    v96 = v95->fields.svts;
    if ( !v96 )
      goto LABEL_77;
    if ( (unsigned int)i >= LODWORD(v96->max_length) )
      goto LABEL_377;
    v97 = v96->m_Items[i];
    if ( !v97 )
      goto LABEL_77;
    if ( v97->fields.userSvtId )
    {
      UserServantDeployIndex = PartyListViewItem__GetUserServantDeployIndex(
                                 (PartyListViewItem_o *)Instance,
                                 userServantList,
                                 NpcServantFollowerIds,
                                 v93);
      if ( (UserServantDeployIndex & 0x80000000) == 0 )
      {
        v99 = UserServantDeployIndex;
        if ( UserServantDeployIndex < DeckMemberMax )
        {
          Instance = (__int64)UserEventDeckEntity__GetUserServant(deck, i, 0);
          v106 = userServantList;
          if ( !userServantList )
            goto LABEL_77;
          v107 = Instance;
          if ( Instance )
          {
            Instance = sub_21FFDA4(Instance, userServantList->obj.klass->_1.element_class);
            v106 = userServantList;
            if ( !Instance )
            {
LABEL_378:
              v298 = sub_21FFEF0(Instance, v108);
              sub_21FFD90(v298, 0);
            }
          }
          if ( v99 >= LODWORD(v106->max_length) )
            goto LABEL_377;
          v106->m_Items[v99] = (UserServantEntity_o *)v107;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&userServantList->m_Items[v99],
            v107,
            v100,
            v101,
            v102,
            v103,
            v104,
            v105);
        }
      }
    }
  }
  if ( FollowerIndex < 1 )
  {
    v16 = setupInfo;
  }
  else
  {
    v16 = setupInfo;
    if ( !questRestrictionInfo->fields.isNotTransitionSupportList && !questRestrictionInfo->fields.isNpcOnlyBattle )
      FollowerIndex = PartyListViewItem__GetSupportInitIndex(
                        this,
                        (System_Collections_Generic_List_FollowerInfo__o *)v325,
                        v92);
  }
LABEL_119:
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_77;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      v44 = *(FollowerInfo_o **)(Instance + 24);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        v316 = *(_DWORD *)(Instance + 32);
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          followerGrandGraphIda = *(_DWORD *)(Instance + 36);
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( Instance )
          {
            v317 = *(_DWORD *)(Instance + 40);
            goto LABEL_127;
          }
        }
      }
    }
    goto LABEL_77;
  }
  followerGrandGraphIda = followerGrandGraphId;
  v316 = followerClassId;
  v317 = followerDeckId;
LABEL_127:
  v110 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v39, v109);
    v110 = BalanceConfig_TypeInfo;
  }
  v111 = (struct PartyOrganizationListViewItem_array *)sub_21FFD10(
                                                         PartyOrganizationListViewItem___TypeInfo,
                                                         (unsigned int)v110->static_fields->DeckMemberMax);
  this->fields.memberList = v111;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.memberList,
    (int32_t)v111,
    v112,
    v113,
    v114,
    v115,
    v116,
    v117);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  v320 = v44;
  if ( !isNew && questRestrictionInfo->fields.isNpcEditablePos )
  {
    v321 = NpcServantFollowerIds;
    v119 = 0;
    v120 = v324;
    v312 = -1;
    while ( 1 )
    {
      for ( j = 8 * v119 + 32; ; j += 8 )
      {
        v122 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v39, v118);
          v122 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v119 >= v122->static_fields->DeckMemberMax )
          goto LABEL_371;
        v123 = (PartyListViewItem___c__DisplayClass31_1_o *)sub_21FFEBC(PartyListViewItem___c__DisplayClass31_1_TypeInfo);
        PartyListViewItem___c__DisplayClass31_1___ctor(v123, 0);
        if ( v333 )
        {
          v125 = deck->fields.deckInfo;
          if ( !v125 )
            goto LABEL_77;
          v126 = v125->fields.svts;
          if ( !v126 )
            goto LABEL_77;
          if ( v119 >= LODWORD(v126->max_length) )
            goto LABEL_377;
          v127 = *(__int64 *)((char *)&v126->obj.klass + j);
          if ( !v127 )
            goto LABEL_77;
          v128 = (int32_t *)(v127 + 76);
        }
        else
        {
          Instance = (__int64)PartyListViewItem__GetMember(v120, v119, v124);
          if ( !Instance )
            goto LABEL_77;
          v128 = (int32_t *)(Instance + 364);
        }
        initPos = *v128;
        if ( (__int64)v119 < DeckMemberMax )
          break;
        v130 = (unsigned int *)*p_memberList;
        v131 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_40971972(v131, v119, 0, v16, questRestrictionInfo, 1, initPos, 0, 0);
        if ( !v130 )
          goto LABEL_77;
        if ( v131 )
        {
          Instance = sub_21FFDA4(v131, *(_QWORD *)(*(_QWORD *)v130 + 64LL));
          if ( !Instance )
            goto LABEL_378;
        }
        if ( v119 >= v130[6] )
          goto LABEL_377;
        *(_QWORD *)((char *)v130 + j) = v131;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)((char *)v130 + j),
          (int32_t)v131,
          v132,
          v133,
          v134,
          v135,
          v136,
          v137);
        ++v119;
      }
      if ( !v123 )
        goto LABEL_77;
      followera = 0;
      v123->fields.chkIdx = v119 + 1;
      followerClassIda = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_50479840(questRestrictionInfo, initPos, 0);
      v139 = 0;
      v140 = Instance;
      if ( (Instance & 1) != 0 )
      {
        if ( !v321 )
          goto LABEL_77;
        if ( v119 >= LODWORD(v321->max_length) )
          goto LABEL_377;
        v141 = *(int64_t *)((char *)&v321->obj.klass + j);
        v139 = v141 >= 1
            && v123->fields.chkIdx != v311
            && PartyListViewItem__SetNpcFollowerInfo(
                 this,
                 &followera,
                 &followerClassIda,
                 npcFollowerInfoList,
                 v141,
                 initPos,
                 v138);
      }
      v307 = !QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0)
          && QuestRestrictionInfo__IsPositionFixNpc(questRestrictionInfo, initPos, 0);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_77;
      Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                            (PartyOrganizationUtility_o *)Instance,
                            initPos,
                            0);
      if ( (v140 & (Instance != 0)) == 1 )
        break;
      if ( !v139 && v123->fields.chkIdx != FollowerIndex )
      {
        if ( v307 )
        {
          v168 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_FollowerInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v168,
            (Il2CppObject *)v123,
            Method_PartyListViewItem___c__DisplayClass31_1___ctor_b__1__,
            0);
          v169 = System_Linq_Enumerable__Where_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v325,
                   (System_Func_TSource__bool__o *)v168,
                   (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
          v170 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_21FFDA4(v169, FollowerInfo___TypeInfo);
          if ( !v170 )
            v170 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                          v169,
                                                                          (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
          Instance = System_Linq_Enumerable__Any_object_(
                       v170,
                       (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
          if ( (Instance & 1) != 0 )
          {
            Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                                  v170,
                                  0,
                                  (const MethodInfo_3849EF8 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
            v120 = v324;
            v171 = (FollowerInfo_o *)Instance;
            if ( Instance )
              goto LABEL_187;
          }
          else
          {
            v120 = v324;
            v187 = v325;
            if ( !v325 )
              goto LABEL_77;
            if ( v325->fields._size >= 1 )
            {
              v188 = 0;
              while ( 1 )
              {
                Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                      v187,
                                      v188,
                                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
                if ( !Instance || !v321 )
                  goto LABEL_77;
                v187 = v325;
                if ( v119 >= LODWORD(v321->max_length) )
                  goto LABEL_377;
                if ( *(Il2CppClass **)(Instance + 88) != *(Il2CppClass **)((char *)&v321->obj.klass + j) )
                {
                  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                        v325,
                                        v188,
                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
                  if ( !Instance )
                    goto LABEL_77;
                  v187 = v325;
                  if ( *(int *)(Instance + 96) <= 0 && v312 < v188 )
                    break;
                }
                if ( ++v188 >= v187->fields._size )
                  goto LABEL_227;
              }
              Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                    v325,
                                    v188,
                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
              v171 = (FollowerInfo_o *)Instance;
              v312 = v188;
              if ( Instance )
              {
LABEL_187:
                userSvtLeaderHash = v171->fields.userSvtLeaderHash;
                if ( !userSvtLeaderHash )
                  goto LABEL_77;
                if ( !LODWORD(userSvtLeaderHash->max_length) )
                  goto LABEL_377;
                v173 = userSvtLeaderHash->m_Items[0];
                if ( !v173 )
                  goto LABEL_77;
                classId = v173->fields.classId;
                v175 = (unsigned int *)*p_memberList;
                v176 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
                PartyOrganizationListViewItem___ctor_40934420(
                  v176,
                  v119,
                  v171,
                  classId,
                  0,
                  v16,
                  questRestrictionInfo,
                  0,
                  1,
                  v317,
                  initPos,
                  0,
                  0);
                if ( !v175 )
                  goto LABEL_77;
                v120 = v324;
                if ( v176 )
                {
                  Instance = sub_21FFDA4(v176, *(_QWORD *)(*(_QWORD *)v175 + 64LL));
                  if ( !Instance )
                    goto LABEL_378;
                }
                if ( v119 >= v175[6] )
                  goto LABEL_377;
                *(_QWORD *)((char *)v175 + j) = v176;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)((char *)v175 + j),
                  (int32_t)v176,
                  v177,
                  v178,
                  v179,
                  v180,
                  v181,
                  v182);
LABEL_232:
                v156 = v119 + 1;
                goto LABEL_212;
              }
            }
          }
LABEL_227:
          v142 = v119 + 1;
          v147 = (unsigned int *)*p_memberList;
          v149 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_40971972(v149, v119, 0, v16, questRestrictionInfo, 0, initPos, 0, 0);
          if ( !v147 )
            goto LABEL_77;
          goto LABEL_171;
        }
        if ( !v321 )
          goto LABEL_77;
        v120 = v324;
        Instance = (__int64)v325;
        if ( v119 >= LODWORD(v321->max_length) )
          goto LABEL_377;
        if ( !*(Il2CppClass **)((char *)&v321->obj.klass + j) )
        {
          if ( !userServantList )
            goto LABEL_77;
          if ( v119 >= LODWORD(userServantList->max_length) )
            goto LABEL_377;
          PartyListViewItem__EventDeckMySvtSlotProcess(
            this,
            initPos,
            v119,
            *(UserServantEntity_o **)((char *)&userServantList->obj.klass + j),
            deck,
            v140 & 1,
            isBaseModify,
            isRemoveActiveGrandBoardSvt,
            methoda);
          goto LABEL_232;
        }
        v142 = v119 + 1;
        Instance = System_Linq_Enumerable__Count_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v325,
                     (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
        if ( (int)Instance < 1 )
          goto LABEL_238;
        if ( !v325 )
          goto LABEL_77;
        v183 = v325;
        v184 = 0;
        while ( 1 )
        {
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                v183,
                                v184,
                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
          if ( !Instance )
            goto LABEL_77;
          if ( v119 >= LODWORD(v321->max_length) )
            goto LABEL_377;
          if ( *(Il2CppClass **)(Instance + 88) == *(Il2CppClass **)((char *)&v321->obj.klass + j) )
            break;
          ++v184;
          v183 = v325;
          if ( v184 >= System_Linq_Enumerable__Count_object_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v325,
                         (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_FollowerInfo___) )
            goto LABEL_238;
        }
        Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                              v325,
                              v184,
                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
        if ( Instance )
        {
          v189 = *(_QWORD *)(Instance + 40);
          v190 = (FollowerInfo_o *)Instance;
          if ( !v189 )
            goto LABEL_77;
          if ( !*(_DWORD *)(v189 + 24) )
            goto LABEL_377;
          v191 = *(_QWORD *)(v189 + 32);
          if ( !v191 )
            goto LABEL_77;
          v309 = *(_DWORD *)(v191 + 32);
          v147 = (unsigned int *)*p_memberList;
          v149 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_40934420(
            v149,
            v119,
            v190,
            v309,
            0,
            v16,
            questRestrictionInfo,
            0,
            1,
            v317,
            initPos,
            0,
            0);
LABEL_169:
          if ( !v147 )
            goto LABEL_77;
        }
        else
        {
LABEL_238:
          v147 = (unsigned int *)*p_memberList;
          v149 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_40971972(v149, v119, 0, v16, questRestrictionInfo, 1, initPos, 0, 0);
          if ( !v147 )
            goto LABEL_77;
        }
        v120 = v324;
LABEL_171:
        if ( v149 )
        {
          Instance = sub_21FFDA4(v149, *(_QWORD *)(*(_QWORD *)v147 + 64LL));
          if ( !Instance )
            goto LABEL_378;
        }
        if ( v119 >= v147[6] )
          goto LABEL_377;
        *(_QWORD *)((char *)v147 + j) = v149;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)((char *)v147 + j),
          (int32_t)v149,
          v150,
          v151,
          v152,
          v153,
          v154,
          v155);
        v156 = v142;
        goto LABEL_212;
      }
      v157 = followera;
      v158 = (unsigned int *)*p_memberList;
      if ( followera )
      {
        v159 = followerClassIda;
        v160 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_40934420(
          v160,
          v119,
          v157,
          v159,
          0,
          v16,
          questRestrictionInfo,
          0,
          0,
          v317,
          initPos,
          0,
          0);
        v156 = v119 + 1;
        if ( !v158 )
          goto LABEL_77;
        v120 = v324;
      }
      else
      {
        v167 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
        v156 = v119 + 1;
        v160 = v167;
        if ( v320 )
          PartyOrganizationListViewItem___ctor_40934420(
            v167,
            v119,
            v320,
            v316,
            followerGrandGraphIda,
            v16,
            questRestrictionInfo,
            0,
            0,
            v317,
            initPos,
            0,
            0);
        else
          PartyOrganizationListViewItem___ctor_40971972(v167, v119, 1, v16, questRestrictionInfo, 1, initPos, 0, 0);
        v120 = v324;
        if ( !v158 )
          goto LABEL_77;
      }
      if ( v160 )
      {
        Instance = sub_21FFDA4(v160, *(_QWORD *)(*(_QWORD *)v158 + 64LL));
        if ( !Instance )
          goto LABEL_378;
      }
      if ( v119 >= v158[6] )
        goto LABEL_377;
      *(_QWORD *)((char *)v158 + j) = v160;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)((char *)v158 + j),
        (int32_t)v160,
        v161,
        v162,
        v163,
        v164,
        v165,
        v166);
LABEL_212:
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_77;
      if ( v119 >= LODWORD(memberList->max_length) )
        goto LABEL_377;
      Instance = *(__int64 *)((char *)&memberList->obj.klass + j);
      if ( !Instance )
        goto LABEL_77;
      cost = this->fields.cost;
      v119 = v156;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                        + cost;
    }
    v142 = v119 + 1;
    v143 = (FollowerInfo_o *)Instance;
    IsNpc = FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0);
    v145 = v316;
    if ( IsNpc )
      v145 = 0;
    v308 = v145;
    v146 = !FollowerInfo__get_IsNpc(v143, 0);
    v147 = (unsigned int *)*p_memberList;
    if ( v146 )
      v148 = v317;
    else
      v148 = 0;
    followerDeckIda = v148;
    v16 = setupInfo;
    v149 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_40934420(
      v149,
      v119,
      v143,
      v308,
      followerGrandGraphIda,
      setupInfo,
      questRestrictionInfo,
      friendPointCampaignEntityList,
      0,
      followerDeckIda,
      initPos,
      0,
      0);
    goto LABEL_169;
  }
  v192 = userServantList;
  v313 = deck;
  if ( questRestrictionInfo->fields.isNotTransitionSupportList || FollowerIndex <= 0 )
    myServantNumMax = questRestrictionInfo->fields.myServantNumMax;
  else
    myServantNumMax = questRestrictionInfo->fields.myServantNumMax + 1;
  v322 = myServantNumMax;
  if ( !isNew )
  {
    if ( !userServantList )
      goto LABEL_77;
    if ( SLODWORD(userServantList->max_length) >= 1 )
    {
      v195 = 0;
      v196 = 0;
      v197 = 0;
      m_Items = userServantList->m_Items;
      while ( 1 )
      {
        v199 = (PartyListViewItem___c__DisplayClass31_2_o *)sub_21FFEBC(PartyListViewItem___c__DisplayClass31_2_TypeInfo);
        PartyListViewItem___c__DisplayClass31_2___ctor(v199, 0);
        if ( !v199 )
          goto LABEL_77;
        v200 = v197 + 1;
        v199->fields.chkIdx = v197 + 1;
        if ( v197 >= LODWORD(userServantList->max_length) )
          goto LABEL_377;
        if ( m_Items[v197] )
          ++v196;
        v201 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v201,
          (Il2CppObject *)v199,
          Method_PartyListViewItem___c__DisplayClass31_2___ctor_b__2__,
          0);
        Instance = (__int64)System_Linq_Enumerable__Where_object_(
                              (System_Collections_Generic_IEnumerable_TSource__o *)npcFollowerInfoList,
                              (System_Func_TSource__bool__o *)v201,
                              (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
        max_length_low = LODWORD(userServantList->max_length);
        if ( v197 >= max_length_low )
          goto LABEL_377;
        v192 = userServantList;
        if ( m_Items[v197] )
        {
          if ( v199->fields.chkIdx > DeckMemberMax )
            goto LABEL_262;
          Instance = System_Linq_Enumerable__Any_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                       (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
          v192 = userServantList;
          if ( (Instance & 1) != 0 || v196 > v322 )
            break;
        }
LABEL_264:
        ++v195;
        ++v197;
        if ( v200 >= SLODWORD(v192->max_length) )
          goto LABEL_265;
      }
      max_length_low = LODWORD(userServantList->max_length);
LABEL_262:
      if ( v197 >= max_length_low )
        goto LABEL_377;
      m_Items[v197] = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&m_Items[v195], 0, v118, v202, v203, v204, v205, v206);
      v192 = userServantList;
      goto LABEL_264;
    }
  }
LABEL_265:
  v318 = 0;
  v208 = v324;
  v209 = 0;
  v210 = DeckMemberMax;
  v304 = v192->m_Items;
  v211 = setupInfo;
LABEL_266:
  v212 = v209;
  for ( k = 8 * v209 + 32; ; k += 8 )
  {
    v214 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v39, v118);
      v214 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v212 >= v214->static_fields->DeckMemberMax )
      break;
    v215 = (PartyListViewItem___c__DisplayClass31_3_o *)sub_21FFEBC(PartyListViewItem___c__DisplayClass31_3_TypeInfo);
    PartyListViewItem___c__DisplayClass31_3___ctor(v215, 0);
    if ( v333 )
    {
      v217 = v313->fields.deckInfo;
      if ( !v217 )
        goto LABEL_77;
      v218 = v217->fields.svts;
      if ( !v218 )
        goto LABEL_77;
      if ( v212 >= LODWORD(v218->max_length) )
        goto LABEL_377;
      v219 = v218->m_Items[v212];
      if ( !v219 )
        goto LABEL_77;
      p_initPos = &v219->fields.initPos;
    }
    else
    {
      Instance = (__int64)PartyListViewItem__GetMember(v208, v212, v216);
      if ( !Instance )
        goto LABEL_77;
      p_initPos = (int32_t *)(Instance + 364);
    }
    v221 = *p_initPos;
    if ( (__int64)v212 < v210 )
    {
      if ( !v215 )
        goto LABEL_77;
      v209 = v212 + 1;
      v337 = 0;
      v215->fields.chkIdx = v212 + 1;
      v336 = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_50479840(questRestrictionInfo, v221, 0);
      v328 = Instance;
      if ( (Instance & 1) == 0 )
        goto LABEL_293;
      v231 = v313->fields.deckInfo;
      if ( !v231 )
        goto LABEL_77;
      v232 = v231->fields.svts;
      if ( !v232 )
        goto LABEL_77;
      if ( v212 >= LODWORD(v232->max_length) )
        goto LABEL_377;
      v233 = v232->m_Items[v212];
      if ( !v233 )
        goto LABEL_77;
      npcFollowerSvtId = v233->fields.npcFollowerSvtId;
      if ( npcFollowerSvtId >= 1 )
      {
        if ( v215->fields.chkIdx == v311 )
        {
          v305 = 0;
          v235 = 1;
          v310 = 1;
        }
        else
        {
          v310 = PartyListViewItem__SetNpcFollowerInfo(
                   this,
                   &v337,
                   &v336,
                   npcFollowerInfoList,
                   npcFollowerSvtId,
                   v221,
                   v230);
          v235 = 1;
          v305 = 0;
        }
        goto LABEL_298;
      }
LABEL_293:
      if ( v320 && !questRestrictionInfo->fields.isNotTransitionSupportList )
      {
        chkIdx = v215->fields.chkIdx;
        v310 = 0;
        v235 = chkIdx != FollowerIndex;
        v305 = chkIdx == FollowerIndex;
      }
      else
      {
        v305 = 0;
        v235 = 1;
        v310 = 0;
      }
LABEL_298:
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_77;
      NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v221, 0);
      if ( (v328 & (NpcFollowerInfo != 0)) == 1 )
      {
        v238 = NpcFollowerInfo;
        v239 = FollowerInfo__get_IsNpc(NpcFollowerInfo, 0);
        v240 = v316;
        if ( v239 )
          v240 = 0;
        v329 = v240;
        v146 = !FollowerInfo__get_IsNpc(v238, 0);
        v241 = (unsigned int *)*p_memberList;
        if ( v146 )
          v242 = v317;
        else
          v242 = 0;
        followerDeckIdb = v242;
        v211 = setupInfo;
        v243 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_40934420(
          v243,
          v212,
          v238,
          v329,
          followerGrandGraphIda,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          followerDeckIdb,
          v221,
          0,
          0);
        if ( !v241 )
          goto LABEL_77;
        v208 = v324;
        if ( v243 )
        {
          Instance = sub_21FFDA4(v243, *(_QWORD *)(*(_QWORD *)v241 + 64LL));
          if ( !Instance )
            goto LABEL_378;
        }
        if ( v212 >= v241[6] )
          goto LABEL_377;
        *(_QWORD *)&v241[2 * v212 + 8] = v243;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)((char *)v241 + k),
          (int32_t)v243,
          v244,
          v245,
          v246,
          v247,
          v248,
          v249);
        v250 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_77;
        if ( v212 >= LODWORD(v250->max_length) )
          goto LABEL_377;
        v209 = v212 + 1;
        v251 = v313->fields.deckInfo;
        this = v323;
        if ( !v251 )
          goto LABEL_77;
        v252 = v251->fields.svts;
        if ( !v252 )
          goto LABEL_77;
        if ( v212 >= LODWORD(v252->max_length) )
          goto LABEL_377;
        v253 = v252->m_Items[v212];
        if ( !v253 )
          goto LABEL_77;
        v254 = v250->m_Items[v212];
        if ( !v254 )
          goto LABEL_77;
        v254->fields._InitPos_k__BackingField = v253->fields.initPos;
        ++v318;
        goto LABEL_266;
      }
      if ( v310 || v215->fields.chkIdx == FollowerIndex )
      {
        v330 = v235;
        v255 = v337;
        v256 = (unsigned int *)*p_memberList;
        if ( v337 )
        {
          v302 = v336;
          v257 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_40934420(
            v257,
            v212,
            v255,
            v302,
            0,
            setupInfo,
            questRestrictionInfo,
            0,
            v330,
            v317,
            v221,
            0,
            0);
          if ( !v256 )
            goto LABEL_77;
          v208 = v324;
          v264 = v256;
          goto LABEL_324;
        }
        v303 = (unsigned int *)*p_memberList;
        v265 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
        v257 = v265;
        if ( v320 )
        {
          PartyOrganizationListViewItem___ctor_40934420(
            v265,
            v212,
            v320,
            v316,
            followerGrandGraphIda,
            setupInfo,
            questRestrictionInfo,
            0,
            v330,
            v317,
            v221,
            0,
            0);
          v208 = v324;
          v264 = v256;
          if ( !v256 )
            goto LABEL_77;
LABEL_324:
          if ( v257 )
          {
            Instance = sub_21FFDA4(v257, *(_QWORD *)(*(_QWORD *)v264 + 64LL));
            if ( !Instance )
              goto LABEL_378;
          }
          v266 = v264[6];
          v211 = setupInfo;
        }
        else
        {
          v211 = setupInfo;
          PartyOrganizationListViewItem___ctor_40971972(v265, v212, 1, setupInfo, questRestrictionInfo, 1, v221, 0, 0);
          v208 = v324;
          v264 = v303;
          if ( !v303 )
            goto LABEL_77;
          if ( v257 )
          {
            Instance = sub_21FFDA4(v257, *(_QWORD *)(*(_QWORD *)v303 + 64LL));
            if ( !Instance )
              goto LABEL_378;
          }
          v266 = v303[6];
        }
        if ( v212 >= v266 )
          goto LABEL_377;
        *(_QWORD *)&v264[2 * v212 + 8] = v257;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)((char *)v264 + k),
          (int32_t)v257,
          v258,
          v259,
          v260,
          v261,
          v262,
          v263);
        v267 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_77;
        if ( v212 >= LODWORD(v267->max_length) )
          goto LABEL_377;
        v268 = v313->fields.deckInfo;
        if ( !v268 )
          goto LABEL_77;
        v269 = v268->fields.svts;
        if ( !v269 )
          goto LABEL_77;
        if ( v212 >= LODWORD(v269->max_length) )
          goto LABEL_377;
        v270 = v269->m_Items[v212];
        if ( !v270 )
          goto LABEL_77;
        v271 = v267->m_Items[v212];
        if ( !v271 )
          goto LABEL_77;
        v271->fields._InitPos_k__BackingField = v270->fields.initPos;
        v318 += v305 || v310;
        goto LABEL_266;
      }
      v272 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v272,
        (Il2CppObject *)v215,
        Method_PartyListViewItem___c__DisplayClass31_3___ctor_b__3__,
        0);
      v273 = System_Linq_Enumerable__Where_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v325,
               (System_Func_TSource__bool__o *)v272,
               (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v274 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_21FFDA4(v273, FollowerInfo___TypeInfo);
      if ( !v274 )
        v274 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                      v273,
                                                                      (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
      Instance = System_Linq_Enumerable__Any_object_(
                   v274,
                   (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      v211 = setupInfo;
      if ( (Instance & 1) == 0 && v318 < v322 )
      {
        if ( !userServantList )
          goto LABEL_77;
        v208 = v324;
        if ( v212 >= LODWORD(userServantList->max_length) )
          goto LABEL_377;
        PartyListViewItem__EventDeckMySvtSlotProcess(
          this,
          v221,
          v212,
          v304[v212],
          v313,
          v328 & 1,
          isBaseModify,
          isRemoveActiveGrandBoardSvt,
          methoda);
        ++v318;
        goto LABEL_367;
      }
      if ( System_Linq_Enumerable__Any_object_(
             v274,
             (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
      {
        Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                              v274,
                              0,
                              (const MethodInfo_3849EF8 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
        goto LABEL_352;
      }
      Instance = (__int64)v325;
      if ( !v325 )
        goto LABEL_77;
      if ( v325->fields._size <= (int)v212 - v318 )
        goto LABEL_361;
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            v325,
                            (int)v212 - v318,
                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
LABEL_352:
      v275 = (FollowerInfo_o *)Instance;
      if ( Instance )
      {
        v276 = *(_QWORD *)(Instance + 40);
        if ( !v276 )
          goto LABEL_77;
        if ( !*(_DWORD *)(v276 + 24) )
          goto LABEL_377;
        v277 = *(_QWORD *)(v276 + 32);
        if ( !v277 )
          goto LABEL_77;
        v278 = v212 + 1;
        v331 = *(_DWORD *)(v277 + 32);
        v279 = (unsigned int *)*p_memberList;
        v280 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_40934420(
          v280,
          v212,
          v275,
          v331,
          0,
          setupInfo,
          questRestrictionInfo,
          0,
          1,
          v317,
          v221,
          0,
          0);
        if ( !v279 )
          goto LABEL_77;
        v208 = v324;
        if ( v280 )
        {
          Instance = sub_21FFDA4(v280, *(_QWORD *)(*(_QWORD *)v279 + 64LL));
          if ( !Instance )
            goto LABEL_378;
        }
        if ( v212 >= v279[6] )
          goto LABEL_377;
        *(_QWORD *)&v279[2 * v212 + 8] = v280;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)((char *)v279 + k),
          (int32_t)v280,
          v281,
          v282,
          v283,
          v284,
          v285,
          v286);
      }
      else
      {
LABEL_361:
        v278 = v212 + 1;
        v287 = (unsigned int *)*p_memberList;
        v288 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_40971972(v288, v212, 0, setupInfo, questRestrictionInfo, 0, v221, 0, 0);
        if ( !v287 )
          goto LABEL_77;
        if ( v288 )
        {
          Instance = sub_21FFDA4(v288, *(_QWORD *)(*(_QWORD *)v287 + 64LL));
          if ( !Instance )
            goto LABEL_378;
        }
        if ( v212 >= v287[6] )
          goto LABEL_377;
        *(_QWORD *)&v287[2 * v212 + 8] = v288;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)((char *)v287 + k),
          (int32_t)v288,
          v289,
          v290,
          v291,
          v292,
          v293,
          v294);
        v208 = v324;
      }
      v209 = v278;
      this = v323;
LABEL_367:
      v295 = this->fields.memberList;
      if ( !v295 )
        goto LABEL_77;
      if ( v212 >= LODWORD(v295->max_length) )
        goto LABEL_377;
      Instance = (__int64)v295->m_Items[v212];
      if ( !Instance )
        goto LABEL_77;
      v296 = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0)
                        + v296;
      goto LABEL_266;
    }
    v222 = (unsigned int *)*p_memberList;
    v223 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_40971972(v223, v212, 0, v211, questRestrictionInfo, 1, v221, 0, 0);
    if ( !v222 )
      goto LABEL_77;
    if ( v223 )
    {
      Instance = sub_21FFDA4(v223, *(_QWORD *)(*(_QWORD *)v222 + 64LL));
      if ( !Instance )
        goto LABEL_378;
    }
    if ( v212 >= v222[6] )
      goto LABEL_377;
    *(_QWORD *)&v222[2 * v212 + 8] = v223;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)((char *)v222 + k),
      (int32_t)v223,
      v224,
      v225,
      v226,
      v227,
      v228,
      v229);
    ++v212;
  }
LABEL_371:
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)v39);
  if ( (questRestrictionInfo->fields.isNpcEditablePos
     || !questRestrictionInfo->fields.isNpcOnlyBattle
     || QuestRestrictionInfo__IsExistGrand(questRestrictionInfo, 0))
    && !PartyListViewItem__GetStartDeckCondition(this, v297) )
  {
    *isBaseModify = 1;
  }
}


void PartyListViewItem___ctor_40830124(
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
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x26
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  const MethodInfo *v28; // x2
  __int64 Master_object; // x0
  __int64 classId; // x1
  struct DeckServant_o *deckInfo; // x8
  BalanceConfig_c **v32; // x25
  int64_t eventId; // x9
  UserServantEntity_array *UserServantList; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  BalanceConfig_c *v37; // x8
  UserServantEntity_array *v38; // x24
  struct PartyOrganizationListViewItem_array *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  _BOOL4 IsWaveSetupSwitchParty; // w21
  int32_t v47; // w22
  System_Collections_Generic_List_int__o *v48; // x29
  System_Collections_Generic_List_int__o *v49; // x28
  __int64 v50; // x2
  ViewWaveEnemyMaster_o *v51; // x20
  ViewWaveEnemyEntity_array *EntityListFromQuestId; // x26
  int32_t ReachedWave; // w2
  ViewWaveEnemyMaster_o *v54; // x0
  int32_t v55; // w20
  int max_length; // w8
  unsigned int v57; // w21
  ViewWaveEnemyEntity_o *v58; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  __int64 v62; // x2
  __int64 v63; // x2
  int32_t version; // w10
  struct System_Int32_array *v65; // x8
  __int64 v66; // x10
  struct System_Int32_array *v67; // x0
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  struct System_Int32_array *v74; // x0
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  __int64 v81; // x2
  DataManager_c *v82; // x0
  int v83; // w8
  __int64 v84; // x2
  Il2CppObject *v85; // x26
  struct PartyOrganizationListViewItem_array **v86; // x19
  int32_t v87; // w20
  int32_t v88; // w26
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v90; // w29
  struct DeckServant_o *v91; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v93; // x8
  int32_t initPos; // w27
  struct PartyOrganizationListViewItem_array *v95; // x21
  UserServantEntity_o *v96; // x28
  UserServantEntity_array *v97; // x23
  BalanceConfig_c **v98; // x24
  __int128 v99; // q1
  int64_t v100; // x0
  System_Int64_array *v101; // x20
  struct DeckServant_o *v102; // x8
  struct DeckServantData_array *v103; // x8
  DeckServantData_o *v104; // x8
  System_Int32_array *svtEquipIds; // x25
  PartyOrganizationListViewItem_o *v106; // x29
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7
  __int64 v113; // x1
  unsigned int v114; // w8
  Il2CppClass **v115; // x0
  struct PartyOrganizationListViewItem_array *v116; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w20
  int32_t MargeCost; // w8
  __int64 v120; // x0
  int32_t v121; // [xsp+34h] [xbp-ECh]
  PartyListViewItem_o *v122; // [xsp+38h] [xbp-E8h]
  bool v123[4]; // [xsp+44h] [xbp-DCh]
  bool isClearedWave; // [xsp+44h] [xbp-DCh]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+48h] [xbp-D8h]
  char v127; // [xsp+54h] [xbp-CCh]
  int v128; // [xsp+54h] [xbp-CCh]
  QuestRestrictionInfo_o *v130; // [xsp+60h] [xbp-C0h]
  UserEventDeckEntity_o *v131; // [xsp+68h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v132; // [xsp+70h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+90h] [xbp-90h]
  UserInterruptionQuestEntity_o *entity; // [xsp+B8h] [xbp-68h] BYREF

  if ( (byte_5933DC7 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewItem___TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewItem_TypeInfo);
    sub_21FFC50(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    byte_5933DC7 = 1;
  }
  entity = 0;
  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
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
    goto LABEL_109;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_109;
  v32 = &BalanceConfig_TypeInfo;
  eventId = deck->fields.eventId;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = eventId;
  this->fields._IsWaveBattleRestart_k__BackingField = restartWave > 0;
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, index + 1, restartWave > 0, 0);
  v37 = BalanceConfig_TypeInfo;
  v38 = UserServantList;
  v121 = index;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v35, v36);
    v37 = BalanceConfig_TypeInfo;
  }
  v39 = (struct PartyOrganizationListViewItem_array *)sub_21FFD10(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v37->static_fields->DeckMemberMax);
  this->fields.memberList = v39;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.memberList, (int32_t)v39, v40, v41, v42, v43, v44, v45);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  v130 = questRestrictionInfo;
  v131 = deck;
  if ( questRestrictionInfo )
    IsWaveSetupSwitchParty = QuestRestrictionInfo__IsWaveSetupSwitchParty(questRestrictionInfo, 0);
  else
    IsWaveSetupSwitchParty = 0;
  v47 = index + 1;
  v48 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v48,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  v49 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v49,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  *(_DWORD *)v123 = IsWaveSetupSwitchParty;
  if ( !IsWaveSetupSwitchParty )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, classId, v50);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    if ( !*p_questRestrictionInfo )
      goto LABEL_109;
    v51 = (ViewWaveEnemyMaster_o *)Master_object;
    if ( !Master_object )
      goto LABEL_109;
    EntityListFromQuestId = ViewWaveEnemyMaster__GetEntityListFromQuestId(
                              (ViewWaveEnemyMaster_o *)Master_object,
                              (*p_questRestrictionInfo)->fields.questId,
                              0);
    Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
    if ( !v130 )
      goto LABEL_109;
    if ( !Master_object )
      goto LABEL_109;
    ReachedWave = ReachedWaveInfoMaster__GetReachedWave(
                    (ReachedWaveInfoMaster_o *)Master_object,
                    v130->fields.questId,
                    0);
    v54 = v51;
    v55 = ReachedWave;
    Master_object = ViewWaveEnemyMaster__IsSameUnknownNpcEncounter(v54, EntityListFromQuestId, ReachedWave, 0);
    v127 = Master_object;
    if ( !EntityListFromQuestId )
      goto LABEL_109;
    max_length = EntityListFromQuestId->max_length;
    if ( max_length >= 1 )
    {
      v57 = 0;
      do
      {
        if ( v57 >= max_length )
LABEL_110:
          sub_21FFED4(Master_object);
        v58 = EntityListFromQuestId->m_Items[v57];
        if ( !v58 )
          goto LABEL_109;
        if ( v58->fields.wave == v47 )
        {
          if ( !v48 )
            goto LABEL_109;
          Master_object = System_Collections_Generic_List_int___Contains(
                            v48,
                            v58->fields.classId,
                            (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (Master_object & 1) == 0 )
          {
            items = v48->fields._items;
            classId = (unsigned int)v58->fields.classId;
            v60 = Method_System_Collections_Generic_List_int__Add__;
            ++v48->fields._version;
            if ( !items )
              goto LABEL_109;
            size = v48->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v48,
                classId,
                *(const MethodInfo_4433138 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
            }
            else
            {
              v48->fields._size = size + 1;
              items->m_Items[size] = classId;
            }
          }
          if ( (v127 & 1) != 0
            || v55 >= v58->fields.wave
            || (Master_object = ViewWaveEnemyEntity__IsUnknownDispInfo(v58, 0, 0, 0), (Master_object & 1) == 0) )
          {
            if ( !v49 )
              goto LABEL_109;
            Master_object = System_Collections_Generic_List_int___Contains(
                              v49,
                              v58->fields.classId,
                              (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( (Master_object & 1) == 0 )
            {
              version = v49->fields._version;
              v65 = v49->fields._items;
              classId = (unsigned int)v58->fields.classId;
LABEL_42:
              v49->fields._version = version + 1;
              if ( !v65 )
                goto LABEL_109;
              v66 = v49->fields._size;
              if ( (unsigned int)v66 >= LODWORD(v65->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v49,
                  classId,
                  *(const MethodInfo_4433138 **)(*(_QWORD *)(*((_QWORD *)Method_System_Collections_Generic_List_int__Add__
                                                             + 4)
                                                           + 192LL)
                                               + 112LL));
              }
              else
              {
                v49->fields._size = v66 + 1;
                v65->m_Items[v66] = classId;
              }
            }
          }
          else
          {
            Master_object = (__int64)WaveBattleWaveEnemyInfoItem_TypeInfo;
            if ( !*(&WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo, classId, v62);
            if ( !v49 )
              goto LABEL_109;
            Master_object = System_Collections_Generic_List_int___Contains(
                              v49,
                              WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_UNKNOWN_CLASSID,
                              (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
            if ( (Master_object & 1) == 0 )
            {
              Master_object = (__int64)WaveBattleWaveEnemyInfoItem_TypeInfo;
              if ( !*(&WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo, classId, v63);
                Master_object = (__int64)WaveBattleWaveEnemyInfoItem_TypeInfo;
              }
              version = v49->fields._version;
              v65 = v49->fields._items;
              classId = *(unsigned int *)(*(_QWORD *)(Master_object + 184) + 64LL);
              goto LABEL_42;
            }
          }
        }
        max_length = EntityListFromQuestId->max_length;
      }
      while ( (int)++v57 < max_length );
    }
  }
  if ( !v48 )
    goto LABEL_109;
  v67 = System_Collections_Generic_List_int___ToArray(
          v48,
          (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.waveBattleEnemyClassIds = v67;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.waveBattleEnemyClassIds,
    (int32_t)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  if ( !v49 )
    goto LABEL_109;
  v74 = System_Collections_Generic_List_int___ToArray(
          v49,
          (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.trendDispWaveBattleEnemyClassIds = v74;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.trendDispWaveBattleEnemyClassIds,
    (int32_t)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  this->fields._IsClearedWave_k__BackingField = v47 < restartWave;
  if ( !*(_DWORD *)v123 )
  {
    v86 = &this->fields.memberList;
    v87 = v121;
    isClearedWave = v47 < restartWave;
    goto LABEL_65;
  }
  v82 = DataManager_TypeInfo;
  v83 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  this->fields._IsClearedWave_k__BackingField = 0;
  if ( !v83 )
    j_il2cpp_runtime_class_init_0(v82, classId, v81);
  v85 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, classId, v84);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Master_object = (__int64)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, classId, v84);
    Master_object = (__int64)NetworkManager_TypeInfo;
  }
  v86 = &this->fields.memberList;
  v87 = v121;
  if ( !v130 || !v85 )
    goto LABEL_109;
  if ( !UserInterruptionQuestMaster__TryGetEntity(
          (UserInterruptionQuestMaster_o *)v85,
          &entity,
          *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
          v130->fields.questId,
          v130->fields.questPhase,
          0) )
  {
    isClearedWave = 0;
    goto LABEL_65;
  }
  Master_object = (__int64)entity;
  if ( !entity )
LABEL_109:
    sub_21FFECC(Master_object, classId);
  isClearedWave = v47 <= UserInterruptionQuestEntity__GetAlreadySortiePartyNum(entity, restartWave, 0);
  this->fields._IsClearedWave_k__BackingField = isClearedWave;
LABEL_65:
  Master_object = (__int64)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, classId, v81);
    Master_object = (__int64)BalanceConfig_TypeInfo;
  }
  v88 = 0;
  v122 = this;
  v128 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 176LL) * v87;
  while ( 1 )
  {
    if ( !*(_DWORD *)(Master_object + 228) )
    {
      j_il2cpp_runtime_class_init_0(Master_object, classId, v81);
      Master_object = (__int64)*v32;
    }
    static_fields = *(struct BalanceConfig_StaticFields **)(Master_object + 184);
    if ( v88 >= static_fields->DeckMemberMax )
      break;
    if ( !*(_DWORD *)(Master_object + 228) )
    {
      j_il2cpp_runtime_class_init_0(Master_object, classId, v81);
      static_fields = (*v32)->static_fields;
    }
    v90 = v128 + v88;
    if ( v88 < static_fields->DeckMainMemberMax )
    {
      v91 = v131->fields.deckInfo;
      if ( !v91 )
        goto LABEL_109;
      svts = v91->fields.svts;
      if ( !svts )
        goto LABEL_109;
      if ( (unsigned int)v90 >= LODWORD(svts->max_length) )
        goto LABEL_110;
      v93 = svts->m_Items[v90];
      if ( !v93 )
        goto LABEL_109;
      initPos = v93->fields.initPos;
    }
    else
    {
      initPos = v88 + 1;
    }
    if ( !v38 )
      goto LABEL_109;
    if ( (unsigned int)v88 >= LODWORD(v38->max_length) )
      goto LABEL_110;
    v95 = *v86;
    v96 = v38->m_Items[v88];
    if ( v96 )
    {
      v97 = v38;
      v98 = v32;
      v99 = *(_OWORD *)&v96->fields.id.fields.fakeValue;
      *(_OWORD *)&v133.fields.currentCryptoKey = *(_OWORD *)&v96->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v133.fields.fakeValue = v99;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, classId, v81);
      v132 = v133;
      v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v132, 0);
      Master_object = (__int64)UserEventDeckEntity__GetEquipList_49985096(v131, v100, restartWave > 0, 0);
      v101 = (System_Int64_array *)Master_object;
      if ( restartWave < 1 )
      {
        v86 = p_memberList;
        svtEquipIds = 0;
      }
      else
      {
        v102 = v131->fields.deckInfo;
        if ( !v102 )
          goto LABEL_109;
        v103 = v102->fields.svts;
        v86 = p_memberList;
        if ( !v103 )
          goto LABEL_109;
        if ( (unsigned int)v90 >= LODWORD(v103->max_length) )
          goto LABEL_110;
        v104 = v103->m_Items[v90];
        if ( !v104 )
          goto LABEL_109;
        svtEquipIds = v104->fields.svtEquipIds;
      }
      v106 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_40960892(
        v106,
        v88,
        v96,
        v101,
        setupInfo,
        v130,
        0,
        initPos,
        svtEquipIds,
        isClearedWave,
        0,
        0,
        0);
      if ( !v95 )
        goto LABEL_109;
      v32 = v98;
      if ( v106 )
      {
        Master_object = sub_21FFDA4(v106, v95->obj.klass->_1.element_class);
        if ( !Master_object )
        {
LABEL_111:
          v120 = sub_21FFEF0(Master_object, v113);
          sub_21FFD90(v120, 0);
        }
      }
      v114 = v95->max_length;
      v38 = v97;
      this = v122;
    }
    else
    {
      v106 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_40971972(v106, v88, 0, setupInfo, v130, 1, initPos, 0, 0);
      if ( !v95 )
        goto LABEL_109;
      if ( v106 )
      {
        Master_object = sub_21FFDA4(v106, v95->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_111;
      }
      v114 = v95->max_length;
    }
    if ( v88 >= v114 )
      goto LABEL_110;
    v115 = &v95->obj.klass + v88;
    v115[4] = (Il2CppClass *)v106;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v115 + 4), (int32_t)v106, v107, v108, v109, v110, v111, v112);
    v116 = *v86;
    if ( !*v86 )
      goto LABEL_109;
    if ( (unsigned int)v88 >= LODWORD(v116->max_length) )
      goto LABEL_110;
    Master_object = (__int64)v116->m_Items[v88];
    if ( !Master_object )
      goto LABEL_109;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)Master_object,
      this->fields.waveBattleEnemyClassIds,
      0);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_109;
    if ( (unsigned int)v88 >= LODWORD(memberList->max_length) )
      goto LABEL_110;
    Master_object = (__int64)memberList->m_Items[v88];
    if ( !Master_object )
      goto LABEL_109;
    cost = this->fields.cost;
    MargeCost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Master_object, 0);
    Master_object = (__int64)*v32;
    ++v88;
    this->fields.cost = MargeCost + cost;
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
  System_ValueTuple_int__bool__o p_value; // x0
  int64_t v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_ValueTuple_int__bool__o v13; // x2
  System_ValueTuple_int__bool__o v14; // x2
  System_ValueTuple_int__bool__o value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5933DF4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TryAdd__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___set_Item__);
    sub_21FFC50(&Method_System_ValueTuple_int__bool___ctor__);
    byte_5933DF4 = 1;
  }
  v8 = *orderIdx;
  p_value = (System_ValueTuple_int__bool__o)&value;
  v10 = *userSvtId;
  value = 0;
  System_ValueTuple_int__bool____ctor(
    p_value,
    v8,
    0,
    (const MethodInfo_3CB95D4 *)Method_System_ValueTuple_int__bool___ctor__);
  if ( !duplicationUserSvtIdDictionary )
    sub_21FFECC(v11, v12);
  v13 = value;
  if ( !System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____TryAdd(
          duplicationUserSvtIdDictionary,
          v10,
          v13,
          (const MethodInfo_3F8D9E8 *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TryAdd__) )
  {
    v14 = (System_ValueTuple_int__bool__o)(*(_QWORD *)&System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____get_Item(
                                                         duplicationUserSvtIdDictionary,
                                                         *userSvtId,
                                                         (const MethodInfo_3F8BEA0 *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___get_Item__)
                                         & 0xFFFFFF00FFFFFFFFLL
                                         | 0x100000000LL);
    System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____set_Item(
      duplicationUserSvtIdDictionary,
      *userSvtId,
      v14,
      (const MethodInfo_3F8BF2C *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___set_Item__);
  }
}


bool PartyListViewItem__CheckAndUpdateDuplicationGrandQuestServant(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  System_Int32_array *BaseSvtIdList; // x20
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  Il2CppObject *Master_object; // x21
  __int64 v9; // x22
  BalanceConfig_c *v10; // x0
  ServantEntity_o *Member; // x0
  RestrictionEntity_o *GrandServantRestrictionEntity; // x0
  const MethodInfo *v13; // x5
  int v14; // w23
  Il2CppObject *NotSamePartyKey; // x0
  int32_t v16; // w8
  il2cpp_array_size_t max_length; // x9
  int32_t v18; // w25
  unsigned __int64 v19; // x24
  struct PartyOrganizationListViewItem_array *memberList; // x10
  PartyOrganizationListViewItem_o *v21; // x10
  int32_t v22; // w1
  System_Nullable_int__o v23; // x0
  bool v25; // [xsp+Ch] [xbp-84h]
  __int64 v26; // [xsp+10h] [xbp-80h] BYREF
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+1Ch] [xbp-74h] BYREF
  System_Int64_array *equipIdList; // [xsp+20h] [xbp-70h] BYREF
  UserServantEntity_o *userServantEntity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_5933DF6 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_int___ctor__);
    sub_21FFC50(&Method_System_Nullable_int__get_HasValue__);
    byte_5933DF6 = 1;
  }
  userServantEntity = 0;
  equipIdList = 0;
  isChangeFriendShipSvtEquipSkill = 0;
  BaseSvtIdList = PartyListViewItem__GetBaseSvtIdList(this, method);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  v9 = 0;
  v25 = 0;
  while ( 1 )
  {
    v10 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v7);
      v10 = BalanceConfig_TypeInfo;
    }
    if ( v9 >= v10->static_fields->DeckMemberMax )
      return v25;
    Member = (ServantEntity_o *)PartyListViewItem__GetMember(this, v9, v7);
    if ( !Member )
      goto LABEL_40;
    if ( *(_QWORD *)&Member->fields.sellQp )
    {
      if ( !this->fields.questRestrictionInfo )
        goto LABEL_40;
      GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                        this->fields.questRestrictionInfo,
                                        Member[1].fields.sellMana,
                                        0);
      if ( GrandServantRestrictionEntity )
      {
        userServantEntity = 0;
        PartyListViewItem__GetGrandServantInfo(
          this,
          GrandServantRestrictionEntity,
          &userServantEntity,
          &equipIdList,
          &isChangeFriendShipSvtEquipSkill,
          v13);
        if ( userServantEntity )
        {
          Member = (ServantEntity_o *)UserServantEntity__getSvtId(userServantEntity, 0);
          if ( !Master_object
            || (v14 = (int)Member,
                (Member = (ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                               (int32_t)Member,
                                               (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0) )
          {
LABEL_40:
            sub_21FFECC(Member, v6);
          }
          NotSamePartyKey = (Il2CppObject *)ServantEntity__GetNotSamePartyKey(Member, 0);
          v16 = isChangeFriendShipSvtEquipSkill;
          if ( !BaseSvtIdList )
          {
LABEL_38:
            isChangeFriendShipSvtEquipSkill = v16;
            sub_21FFECC(NotSamePartyKey, v6);
          }
          max_length = BaseSvtIdList->max_length;
          if ( (int)max_length < 1 )
          {
LABEL_35:
            isChangeFriendShipSvtEquipSkill = v16;
          }
          else
          {
            v18 = (int)NotSamePartyKey;
            v19 = 0;
            while ( 1 )
            {
              if ( v9 != v19 )
              {
                memberList = this->fields.memberList;
                if ( !memberList )
                  goto LABEL_38;
                if ( v19 >= LODWORD(memberList->max_length) )
                {
LABEL_39:
                  isChangeFriendShipSvtEquipSkill = v16;
                  sub_21FFED4(NotSamePartyKey);
                }
                v21 = memberList->m_Items[v19];
                if ( !v21 )
                  goto LABEL_38;
                if ( !v21->fields.isFollower )
                {
                  if ( v19 >= (unsigned int)max_length )
                    goto LABEL_39;
                  v6 = (unsigned int)BaseSvtIdList->m_Items[v19];
                  if ( (_DWORD)v6 == v14 )
                    goto LABEL_34;
                  if ( v18 )
                  {
                    v16 = v18;
                    if ( (int)v6 >= 1 )
                    {
                      NotSamePartyKey = DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                          v6,
                                          (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                      v16 = v18;
                      if ( NotSamePartyKey )
                      {
                        v22 = ServantEntity__GetNotSamePartyKey((ServantEntity_o *)NotSamePartyKey, 0);
                        v23 = (System_Nullable_int__o)&v26;
                        v26 = 0;
                        System_Nullable_int____ctor(
                          v23,
                          v22,
                          (const MethodInfo_45B01D4 *)Method_System_Nullable_int___ctor__);
                        v16 = v18;
                        if ( (_BYTE)v26 )
                        {
                          v16 = v18;
                          if ( v18 == HIDWORD(v26) )
                            break;
                        }
                      }
                    }
                  }
                }
              }
              LODWORD(max_length) = BaseSvtIdList->max_length;
              if ( (__int64)++v19 >= (int)max_length )
                goto LABEL_35;
            }
            v16 = v18;
LABEL_34:
            isChangeFriendShipSvtEquipSkill = v16;
            PartyListViewItem__ClearMember(this, v19, v7);
            v25 = 1;
          }
        }
      }
    }
    ++v9;
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
  __int64 v16; // x2
  BalanceConfig_c *v18; // x0
  bool v19; // cc
  int32_t targetVals2; // w8
  struct QuestRestrictionInfo_o *v21; // x9
  int32_t servantNumMin; // w20
  int32_t v23; // w8

  if ( (byte_5933DD8 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5933DD8 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_33;
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
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&deckMemberCount, v16);
      questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    }
    targetVals2 = (int32_t)questRestrictionInfo->fields.uniqueSvtRestrictionEntity[2].fields.targetVals2;
    if ( deckMemberCount - v13 >= 1 && v13 < targetVals2 )
      return 0;
    v21 = this->fields.questRestrictionInfo;
    if ( v21 )
    {
      servantNumMin = v21->fields.servantNumMin;
      if ( !HIDWORD(questRestrictionInfo->fields.myServantNumRestrictionEntity) )
      {
        j_il2cpp_runtime_class_init_0(questRestrictionInfo, *(_QWORD *)&deckMemberCount, v16);
        targetVals2 = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
      }
      if ( servantNumMin <= targetVals2 )
        v23 = v13;
      else
        v23 = deckMemberCount;
      v19 = servantNumMin > v23 || servantNumMax < deckMemberCount;
      return !v19;
    }
LABEL_33:
    sub_21FFECC(questRestrictionInfo, *(_QWORD *)&deckMemberCount);
  }
  if ( ServantNumRangeType != 4 )
  {
    if ( ServantNumRangeType == 1 )
      return servantNumMax == deckMemberCount;
    return 0;
  }
  if ( servantNumMax < deckMemberCount )
    return 0;
  v18 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&deckMemberCount, v16);
    v18 = BalanceConfig_TypeInfo;
  }
  v19 = v13 < v18->static_fields->DeckMainMemberMax;
  return !v19;
}


bool PartyListViewItem__CheckDuplicationGrandQuestEquipment(PartyListViewItem_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___o *v4; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  int v7; // w26
  int32_t i; // w21
  BalanceConfig_c *v9; // x0
  QuestRestrictionInfo_o *Member; // x0
  PartyOrganizationListViewItem_o *v11; // x22
  int32_t InitPos_k__BackingField; // w24
  RestrictionEntity_o *v13; // x23
  const MethodInfo *v14; // x5
  bool IsActiveGrandBoardRestriction; // w0
  const MethodInfo *v16; // x4
  const MethodInfo *v17; // x4
  struct System_Int64_array *v18; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v20; // x24
  int64_t *m_Items; // x22
  PartyListViewItem___c_c *v22; // x0
  struct PartyListViewItem___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_long__ValueTuple_int__bool____int__o *_9__109_0; // x21
  Il2CppObject *v25; // x22
  struct PartyListViewItem___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  PartyListViewItem___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x20
  struct PartyListViewItem___c_StaticFields *v38; // x9
  System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__o *_9__109_1; // x21
  Il2CppObject *v40; // x22
  struct PartyListViewItem___c_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  PartyListViewItem___c_c *v51; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x20
  struct PartyListViewItem___c_StaticFields *v53; // x9
  System_Func_KeyValuePair_long__ValueTuple_int__bool____long__o *_9__109_2; // x21
  Il2CppObject *v55; // x22
  struct PartyListViewItem___c_StaticFields *v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  struct System_Int64_array **p_duplicatedEquipmentUserSvtIdList; // x19
  PartyListViewItem_o *EquipUserSvtId; // [xsp+0h] [xbp-80h] BYREF
  int32_t orderIdx; // [xsp+Ch] [xbp-74h] BYREF
  UserServantEntity_o *userServantEntity; // [xsp+10h] [xbp-70h] BYREF
  System_Int64_array *equipIdList; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5933DF2 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_KeyValuePair_long__ValueTuple_int__bool____int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_KeyValuePair_long__ValueTuple_int__bool____long___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_KeyValuePair_long__ValueTuple_int__bool_____);
    sub_21FFC50(&System_Func_KeyValuePair_long__ValueTuple_int__bool____int__TypeInfo);
    sub_21FFC50(&System_Func_KeyValuePair_long__ValueTuple_int__bool____long__TypeInfo);
    sub_21FFC50(&System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__TypeInfo);
    sub_21FFC50(&Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__109_0__);
    sub_21FFC50(&Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__109_1__);
    sub_21FFC50(&Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__109_2__);
    sub_21FFC50(&PartyListViewItem___c_TypeInfo);
    byte_5933DF2 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  userServantEntity = 0;
  equipIdList = 0;
  orderIdx = 0;
  EquipUserSvtId = 0;
  if ( !questRestrictionInfo )
    return (unsigned __int8)questRestrictionInfo & 1;
  v4 = (System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___o *)sub_21FFEBC(System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TypeInfo);
  System_Collections_Generic_Dictionary_long__ValueTuple_int__bool_____ctor(
    v4,
    (const MethodInfo_3F8B590 *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____ctor__);
  v7 = 0;
  for ( i = 0; ; ++i )
  {
    v9 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5, v6);
      v9 = BalanceConfig_TypeInfo;
    }
    if ( i >= v9->static_fields->DeckMemberMax )
      break;
    Member = (QuestRestrictionInfo_o *)PartyListViewItem__GetMember(this, i, v6);
    if ( !Member )
      goto LABEL_52;
    v11 = (PartyOrganizationListViewItem_o *)Member;
    if ( !Member->fields.restrictionWholeEntities )
      goto LABEL_29;
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
      if ( !v13 )
      {
LABEL_17:
        if ( !IsActiveGrandBoardRestriction )
          goto LABEL_18;
      }
    }
    else
    {
      IsActiveGrandBoardRestriction = 0;
      if ( !v13 )
        goto LABEL_17;
    }
    userServantEntity = 0;
    PartyListViewItem__GetGrandServantInfo(this, v13, &userServantEntity, &equipIdList, &orderIdx, v14);
    if ( !userServantEntity && !v11->fields._IsUseGrandBoard_k__BackingField )
    {
LABEL_18:
      if ( PartyOrganizationListViewItem__get_EquipUserSvtId(v11, 0) >= 1 )
      {
        orderIdx = 10 * i;
        EquipUserSvtId = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_EquipUserSvtId(v11, 0);
        PartyListViewItem__CheckAndAddDuplicationUserSvtId(
          EquipUserSvtId,
          v4,
          &orderIdx,
          (int64_t *)&EquipUserSvtId,
          v16);
      }
      goto LABEL_29;
    }
    v18 = v11->fields.equipIdList;
    if ( !v18 )
      goto LABEL_52;
    max_length = v18->max_length;
    if ( (int)max_length >= 1 )
    {
      v20 = 0;
      m_Items = v18->m_Items;
      do
      {
        if ( v20 >= (unsigned int)max_length )
          sub_21FFED4(Member);
        if ( *m_Items >= 1 )
        {
          orderIdx = v7 + v20;
          PartyListViewItem__CheckAndAddDuplicationUserSvtId((PartyListViewItem_o *)Member, v4, &orderIdx, m_Items, v17);
        }
        LODWORD(max_length) = v18->max_length;
        ++v20;
        ++m_Items;
      }
      while ( (__int64)v20 < (int)max_length );
    }
LABEL_29:
    v7 += 10;
  }
  v22 = PartyListViewItem___c_TypeInfo;
  if ( !*(&PartyListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyListViewItem___c_TypeInfo, v5, v6);
    v22 = PartyListViewItem___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__109_0 = static_fields->__9__109_0;
  if ( !_9__109_0 )
  {
    if ( !*(&v22->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v22, v5, v6);
      static_fields = PartyListViewItem___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__109_0 = (System_Func_KeyValuePair_long__ValueTuple_int__bool____int__o *)sub_21FFEBC(System_Func_KeyValuePair_long__ValueTuple_int__bool____int__TypeInfo);
    System_Func_KeyValuePair_long__ValueTuple_int__bool____int____ctor(
      _9__109_0,
      v25,
      Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__109_0__,
      0);
    v26 = PartyListViewItem___c_TypeInfo->static_fields;
    v26->__9__109_0 = _9__109_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v26->__9__109_0, (int32_t)_9__109_0, v27, v28, v29, v30, v31, v32);
  }
  v33 = System_Linq_Enumerable__OrderBy_KeyValuePair_long__ValueTuple_int__bool____int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v4,
          (System_Func_TSource__TKey__o *)_9__109_0,
          (const MethodInfo_3855278 *)Method_System_Linq_Enumerable_OrderBy_KeyValuePair_long__ValueTuple_int__bool____int___);
  v36 = PartyListViewItem___c_TypeInfo;
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)v33;
  if ( !*(&PartyListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyListViewItem___c_TypeInfo, v34, v35);
    v36 = PartyListViewItem___c_TypeInfo;
  }
  v38 = v36->static_fields;
  _9__109_1 = v38->__9__109_1;
  if ( !_9__109_1 )
  {
    if ( !*(&v36->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v36, v34, v35);
      v38 = PartyListViewItem___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)v38->__9;
    _9__109_1 = (System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__o *)sub_21FFEBC(System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__TypeInfo);
    System_Func_KeyValuePair_long__ValueTuple_int__bool____bool____ctor(
      _9__109_1,
      v40,
      Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__109_1__,
      0);
    v41 = PartyListViewItem___c_TypeInfo->static_fields;
    v41->__9__109_1 = _9__109_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v41->__9__109_1, (int32_t)_9__109_1, v42, v43, v44, v45, v46, v47);
  }
  v48 = System_Linq_Enumerable__Where_KeyValuePair_long__ValueTuple_int__bool___(
          v37,
          (System_Func_TSource__bool__o *)_9__109_1,
          (const MethodInfo_386E790 *)Method_System_Linq_Enumerable_Where_KeyValuePair_long__ValueTuple_int__bool_____);
  v51 = PartyListViewItem___c_TypeInfo;
  v52 = v48;
  if ( !*(&PartyListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyListViewItem___c_TypeInfo, v49, v50);
    v51 = PartyListViewItem___c_TypeInfo;
  }
  v53 = v51->static_fields;
  _9__109_2 = v53->__9__109_2;
  if ( !_9__109_2 )
  {
    if ( !*(&v51->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v51, v49, v50);
      v53 = PartyListViewItem___c_TypeInfo->static_fields;
    }
    v55 = (Il2CppObject *)v53->__9;
    _9__109_2 = (System_Func_KeyValuePair_long__ValueTuple_int__bool____long__o *)sub_21FFEBC(System_Func_KeyValuePair_long__ValueTuple_int__bool____long__TypeInfo);
    System_Func_KeyValuePair_long__ValueTuple_int__bool____long____ctor(
      _9__109_2,
      v55,
      Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__109_2__,
      0);
    v56 = PartyListViewItem___c_TypeInfo->static_fields;
    v56->__9__109_2 = _9__109_2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v56->__9__109_2, (int32_t)_9__109_2, v57, v58, v59, v60, v61, v62);
  }
  v63 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_long__ValueTuple_int__bool____long_(
                                                               v52,
                                                               (System_Func_TSource__TResult__o *)_9__109_2,
                                                               (const MethodInfo_3857AB4 *)Method_System_Linq_Enumerable_Select_KeyValuePair_long__ValueTuple_int__bool____long___);
  Member = (QuestRestrictionInfo_o *)System_Linq_Enumerable__ToArray_long_(
                                       v63,
                                       (const MethodInfo_38685DC *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( !this )
LABEL_52:
    sub_21FFECC(Member, v5);
  this->fields.duplicatedEquipmentUserSvtIdList = (struct System_Int64_array *)Member;
  p_duplicatedEquipmentUserSvtIdList = &this->fields.duplicatedEquipmentUserSvtIdList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)p_duplicatedEquipmentUserSvtIdList,
    (int32_t)Member,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  LOBYTE(questRestrictionInfo) = !BasicHelper__IsNullOrEmpty(
                                    (System_Collections_ICollection_o *)*p_duplicatedEquipmentUserSvtIdList,
                                    0);
  return (unsigned __int8)questRestrictionInfo & 1;
}


System_Tuple_string__bool__o *PartyListViewItem__CheckDuplicationGrandServantEquipmentNameList(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  System_Int64_array *v7; // x21
  int32_t v8; // w22
  char v9; // w24
  BalanceConfig_c *v10; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  System_Collections_ICollection_o *v12; // x23
  Il2CppObject *IsNullOrEmpty; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Func_T__TResult__o *v24; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_String_array *v26; // x0
  Il2CppObject *v27; // x0

  if ( (byte_5933DF5 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Concat_long___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_long__string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_21FFC50(&System_Func_long__string__TypeInfo);
    sub_21FFC50(&long___TypeInfo);
    sub_21FFC50(&Method_System_Tuple_Create_string__bool___);
    sub_21FFC50(&Method_PartyListViewItem___c__DisplayClass112_0__CheckDuplicationGrandServantEquipmentNameList_b__0__);
    sub_21FFC50(&PartyListViewItem___c__DisplayClass112_0_TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    byte_5933DF5 = 1;
  }
  v3 = sub_21FFEBC(PartyListViewItem___c__DisplayClass112_0_TypeInfo);
  PartyListViewItem___c__DisplayClass112_0___ctor((PartyListViewItem___c__DisplayClass112_0_o *)v3, 0);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !QuestRestrictionInfo__IsExistGrand(questRestrictionInfo, 0) )
    return 0;
  v7 = (System_Int64_array *)sub_21FFD10(long___TypeInfo, 0);
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    v10 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5, v6);
      v10 = BalanceConfig_TypeInfo;
    }
    if ( v8 >= v10->static_fields->DeckMemberMax )
      break;
    Member = PartyListViewItem__GetMember(this, v8, v6);
    if ( Member )
    {
      v12 = (System_Collections_ICollection_o *)PartyOrganizationListViewItem__CheckDuplicationGrandServantEquipment(
                                                  Member,
                                                  0);
      IsNullOrEmpty = (Il2CppObject *)BasicHelper__IsNullOrEmpty(v12, 0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( !v7 )
          goto LABEL_20;
        v9 |= SLODWORD(v7->max_length) > 0;
        v14 = System_Linq_Enumerable__Concat_long_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                (System_Collections_Generic_IEnumerable_TSource__o *)v12,
                (const MethodInfo_3842B44 *)Method_System_Linq_Enumerable_Concat_long___);
        v7 = System_Linq_Enumerable__ToArray_long_(
               v14,
               (const MethodInfo_38685DC *)Method_System_Linq_Enumerable_ToArray_long___);
      }
    }
    ++v8;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v7, 0) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15, v16);
  IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !v3 )
LABEL_20:
    sub_21FFECC(IsNullOrEmpty, v5);
  *(_QWORD *)(v3 + 16) = IsNullOrEmpty;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)IsNullOrEmpty, v18, v19, v20, v21, v22, v23);
  v24 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_long__string__TypeInfo);
  System_Func_long__object____ctor(
    v24,
    (Il2CppObject *)v3,
    Method_PartyListViewItem___c__DisplayClass112_0__CheckDuplicationGrandServantEquipmentNameList_b__0__,
    0);
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                                                               (System_Func_TSource__TResult__o *)v24,
                                                               (const MethodInfo_385C370 *)Method_System_Linq_Enumerable_Select_long__string___);
  v26 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v25,
                                 (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_string___);
  v27 = (Il2CppObject *)System_String__Join((System_String_o *)StringLiteral_43/*"\n"*/, v26, 0);
  return (System_Tuple_string__bool__o *)System_Tuple__Create_object__bool_(
                                           v27,
                                           v9 & 1,
                                           (const MethodInfo_3980E38 *)Method_System_Tuple_Create_string__bool___);
}


void PartyListViewItem__CheckRestriction(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w23
  int v5; // w24
  __int64 v6; // x21
  PartyOrganizationListViewItem_o *Instance; // x0
  unsigned int v8; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v10; // x8
  __int64 v11; // x8
  __int64 v12; // x9
  int v13; // w10
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  bool IsUseOldMaster; // w8
  __int64 v16; // x2
  int32_t FixedServantPositionCount; // w20
  __int64 v18; // x21
  char i; // w25
  struct PartyOrganizationListViewItem_array *v20; // x8
  PartyOrganizationListViewItem_o *v21; // x8
  int v22; // w21
  __int64 v23; // x2
  int32_t FixedPositionCount; // w20
  int v25; // w27
  char v26; // w25
  int v27; // w26
  struct PartyOrganizationListViewItem_array *v28; // x8
  PartyOrganizationListViewItem_o *v29; // x9
  bool isFixedSupportPositionRestriction; // w8
  _BOOL4 isRestrictionNeedStarting; // w10
  int isRestrictionMyServantPos; // w11
  int isRestrictionServantPos; // w9
  bool v34; // zf
  struct PartyOrganizationListViewItem_array *v35; // x20
  int max_length; // w8
  __int64 v37; // x21
  struct PartyOrganizationListViewItem_array *v38; // x21
  int v39; // w8
  __int64 v40; // x27
  struct PartyOrganizationListViewItem_array *v41; // x20
  int v42; // w8
  __int64 v43; // x21
  struct QuestRestrictionInfo_o *v44; // x8
  __int64 v45; // x20
  __int64 v46; // x2
  __int64 sortValue2B_low; // x21
  __int64 v48; // x25
  __int64 v49; // x8
  __int64 v50; // x8
  struct QuestRestrictionInfo_o *v51; // x8
  __int64 j; // x20
  struct PartyOrganizationListViewItem_array *v53; // x8
  PartyOrganizationListViewItem_o *v54; // x8
  int k; // w21
  struct PartyOrganizationListViewItem_array *v56; // x8

  if ( (byte_5933DCD & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5933DCD = 1;
  }
  if ( this->fields.questRestrictionInfo )
    PartyListViewItem__CheckDuplicationGrandQuestEquipment(this, method);
  v4 = 0;
  v5 = 0;
  v6 = 4;
  while ( 1 )
  {
    Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
      Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= SHIDWORD(Instance->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_108;
    if ( v8 >= LODWORD(memberList->max_length) )
      goto LABEL_109;
    Instance = (PartyOrganizationListViewItem_o *)*((_QWORD *)&memberList->obj.klass + v6);
    if ( !Instance )
      goto LABEL_108;
    PartyOrganizationListViewItem__CheckRestriction(Instance, this, v8, 0);
    v10 = this->fields.memberList;
    if ( !v10 )
      goto LABEL_108;
    if ( v8 >= LODWORD(v10->max_length) )
      goto LABEL_109;
    v11 = *((_QWORD *)&v10->obj.klass + v6);
    if ( !v11 )
      goto LABEL_108;
    v12 = *(_QWORD *)(v11 + 120);
    v13 = *(unsigned __int8 *)(v11 + 136);
    ++v6;
    *(_BYTE *)(v11 + 360) = 0;
    v4 += v13;
    if ( v12 )
      ++v5;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
    Instance = (PartyOrganizationListViewItem_o *)this->fields.questRestrictionInfo;
    if ( IsUseOldMaster )
    {
      if ( !Instance )
        goto LABEL_108;
      FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(
                                    (QuestRestrictionInfo_o *)Instance,
                                    0);
      Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      v18 = 0;
      for ( i = 0; ; i |= v21->fields.isFixedSupportPositionRestriction )
      {
        if ( !HIDWORD(Instance->fields.commandCodeIdList) )
        {
          j_il2cpp_runtime_class_init_0(Instance, method, v16);
          Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
        }
        if ( (int)v18 >= SHIDWORD(Instance->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
          break;
        v20 = this->fields.memberList;
        if ( !v20 )
          goto LABEL_108;
        if ( (unsigned int)v18 >= LODWORD(v20->max_length) )
          goto LABEL_109;
        v21 = v20->m_Items[v18];
        if ( !v21 )
          goto LABEL_108;
        ++v18;
        FixedServantPositionCount -= v21->fields.isFixedServantPositionAgreement;
      }
      if ( !(i & 1 | (FixedServantPositionCount > 0)) )
      {
        v35 = this->fields.memberList;
        if ( !v35 )
          goto LABEL_108;
        max_length = v35->max_length;
        if ( max_length >= 1 )
        {
          v37 = 0;
          while ( (unsigned int)v37 < max_length )
          {
            Instance = v35->m_Items[v37];
            if ( !Instance )
              goto LABEL_108;
            PartyOrganizationListViewItem__ResetPositionRestriction(Instance, 0);
            max_length = v35->max_length;
            if ( (int)++v37 >= max_length )
              goto LABEL_69;
          }
          goto LABEL_109;
        }
      }
LABEL_69:
      v44 = this->fields.questRestrictionInfo;
      if ( !v44 || v44->fields.servantNumMin != 1 )
        return;
      Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        v45 = *(_QWORD *)&Instance->fields.basePosition.fields.y;
        Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          if ( v45 )
          {
            sortValue2B_low = LODWORD(Instance->fields.sortValue2B);
            if ( (int)sortValue2B_low >= 1 )
            {
              Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
              v48 = 0;
              v5 = 0;
              while ( 1 )
              {
                if ( !HIDWORD(Instance->fields.commandCodeIdList) )
                {
                  j_il2cpp_runtime_class_init_0(Instance, method, v46);
                  Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                }
                if ( v48 >= SHIDWORD(Instance->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
                  break;
                if ( sortValue2B_low != ++v48 )
                {
                  v49 = *(_QWORD *)(v45 + 128);
                  if ( !v49 )
                    goto LABEL_108;
                  if ( v48 - 1 >= (unsigned __int64)*(unsigned int *)(v49 + 24) )
                    goto LABEL_109;
                  v50 = *(_QWORD *)(v49 + 8 * v48 + 24);
                  if ( !v50 )
                    goto LABEL_108;
                  if ( *(_QWORD *)(v50 + 120) )
                    ++v5;
                }
              }
            }
          }
          v51 = this->fields.questRestrictionInfo;
          if ( v51 )
          {
            if ( v51->fields.isNotSingleSupportOnly && v4 == 1 && !v5 )
            {
              Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
              for ( j = 0; ; ++j )
              {
                if ( !HIDWORD(Instance->fields.commandCodeIdList) )
                {
                  j_il2cpp_runtime_class_init_0(Instance, method, v46);
                  Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                }
                if ( (int)j >= SHIDWORD(Instance->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
                  break;
                v53 = this->fields.memberList;
                if ( !v53 )
                  goto LABEL_108;
                if ( (unsigned int)j >= LODWORD(v53->max_length) )
                  goto LABEL_109;
                v54 = v53->m_Items[j];
                if ( !v54 )
                  goto LABEL_108;
                if ( v54->fields.isFollower )
                {
                  v54->fields._IsNotSupportSingle_k__BackingField = 1;
                  return;
                }
              }
            }
            return;
          }
        }
      }
LABEL_108:
      sub_21FFECC(Instance, method);
    }
    if ( !Instance )
      goto LABEL_108;
    Instance = (PartyOrganizationListViewItem_o *)QuestRestrictionInfo__GetFixedMyServantPositionCount(
                                                    (QuestRestrictionInfo_o *)Instance,
                                                    0);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_108;
    v22 = (int)Instance;
    FixedPositionCount = QuestRestrictionInfo__GetFixedPositionCount(this->fields.questRestrictionInfo, 0);
    Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    v25 = 0;
    v26 = 0;
    v27 = -1;
    while ( 1 )
    {
      if ( !HIDWORD(Instance->fields.commandCodeIdList) )
      {
        j_il2cpp_runtime_class_init_0(Instance, method, v23);
        Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( v25 >= SHIDWORD(Instance->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
        break;
      v28 = this->fields.memberList;
      if ( !v28 )
        goto LABEL_108;
      if ( (unsigned int)v25 >= LODWORD(v28->max_length) )
        goto LABEL_109;
      v29 = v28->m_Items[v25];
      if ( !v29 )
        goto LABEL_108;
      isFixedSupportPositionRestriction = v29->fields.isFixedSupportPositionRestriction;
      if ( v29->fields.isFixedServantPositionAgreement )
      {
        isRestrictionNeedStarting = v29->fields.isRestrictionNeedStarting;
        isRestrictionMyServantPos = v29->fields.isRestrictionMyServantPos;
        isRestrictionServantPos = v29->fields.isRestrictionServantPos;
        v34 = v27 != -1 || !isRestrictionNeedStarting;
        v22 -= isRestrictionMyServantPos;
        if ( !v34 )
          v27 = v25;
        FixedPositionCount -= isRestrictionServantPos;
      }
      v26 |= isFixedSupportPositionRestriction;
      ++v25;
    }
    if ( v22 > 0 )
      goto LABEL_61;
    v38 = this->fields.memberList;
    if ( !v38 )
      goto LABEL_108;
    v39 = v38->max_length;
    if ( v39 < 1 )
    {
LABEL_61:
      if ( !(v26 & 1 | (v27 < 0)) )
      {
        for ( k = v27 + 1; ; ++k )
        {
          Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v23);
            Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
          }
          if ( k >= SHIDWORD(Instance->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
            break;
          v56 = this->fields.memberList;
          if ( !v56 )
            goto LABEL_108;
          if ( (unsigned int)k >= LODWORD(v56->max_length) )
            goto LABEL_109;
          Instance = v56->m_Items[k];
          if ( !Instance )
            goto LABEL_108;
          PartyOrganizationListViewItem__ResetPositionRestrictionNeedStarting(Instance, 0);
        }
      }
      if ( v26 & 1 | (FixedPositionCount > 0) )
        goto LABEL_69;
      v41 = this->fields.memberList;
      if ( !v41 )
        goto LABEL_108;
      v42 = v41->max_length;
      if ( v42 < 1 )
        goto LABEL_69;
      v43 = 0;
      while ( (unsigned int)v43 < v42 )
      {
        Instance = v41->m_Items[v43];
        if ( !Instance )
          goto LABEL_108;
        PartyOrganizationListViewItem__ResetPositionRestrictionServant(Instance, 0);
        v42 = v41->max_length;
        if ( (int)++v43 >= v42 )
          goto LABEL_69;
      }
    }
    else
    {
      v40 = 0;
      while ( (unsigned int)v40 < v39 )
      {
        Instance = v38->m_Items[v40];
        if ( !Instance )
          goto LABEL_108;
        PartyOrganizationListViewItem__ResetPositionRestrictionMyServant(Instance, 0);
        v39 = v38->max_length;
        if ( (int)++v40 >= v39 )
          goto LABEL_61;
      }
    }
LABEL_109:
    sub_21FFED4(Instance);
  }
}


void PartyListViewItem__ClearDeckName(PartyListViewItem_o *this, const MethodInfo *method)
{
  struct System_String_o *DefaultDeckName; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, method);
  this->fields.deckName = DefaultDeckName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.deckName,
    (int32_t)DefaultDeckName,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void PartyListViewItem__ClearEquip(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  int32_t i; // w21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v7; // x8
  int32_t cost; // w22
  int32_t v9; // w8

  if ( (byte_5933DD4 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5933DD4 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( i >= v4->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_16;
    if ( (unsigned int)i >= LODWORD(memberList->max_length) )
      sub_21FFED4(v4);
    v7 = memberList->m_Items[i];
    if ( !v7 )
LABEL_16:
      sub_21FFECC(v4, method);
    if ( !v7->fields.isFollower && !v7->fields.isRestrictionGrandServant && !v7->fields.isRestrictionActiveGrandBoard )
    {
      cost = this->fields.cost;
      v9 = PartyOrganizationListViewItem__ClearEquip(v7, 0);
      v4 = BalanceConfig_TypeInfo;
      this->fields.cost = cost - v9;
    }
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
    sub_21FFECC(this, *(_QWORD *)&num);
  }
  if ( LODWORD(v7->max_length) <= num )
LABEL_9:
    sub_21FFED4(this);
  this = (PartyListViewItem_o *)v7->m_Items[num];
  if ( !this )
    goto LABEL_8;
  PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)this, 0);
  PartyListViewItem__CheckRestriction(v5, v8);
}


void PartyListViewItem__ClearMember_40836144(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  unsigned int v4; // w21
  PartyOrganizationListViewItem_o *IsGrandRelatedRestriction; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v7; // x8
  char v8; // w20
  struct PartyOrganizationListViewItem_array *v9; // x8
  int32_t cost; // w20

  if ( (byte_5933DD3 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5933DD3 = 1;
  }
  v4 = 0;
  this->fields.cost = 0;
  while ( 1 )
  {
    IsGrandRelatedRestriction = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
      IsGrandRelatedRestriction = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v4 >= SHIDWORD(IsGrandRelatedRestriction->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_22;
    if ( v4 >= LODWORD(memberList->max_length) )
      goto LABEL_23;
    IsGrandRelatedRestriction = memberList->m_Items[v4];
    if ( !IsGrandRelatedRestriction )
      goto LABEL_22;
    IsGrandRelatedRestriction = (PartyOrganizationListViewItem_o *)PartyOrganizationListViewItem__get_IsGrandRelatedRestriction(
                                                                     IsGrandRelatedRestriction,
                                                                     0);
    v7 = this->fields.memberList;
    if ( !v7 )
      goto LABEL_22;
    if ( v4 >= LODWORD(v7->max_length) )
      goto LABEL_23;
    v8 = (char)IsGrandRelatedRestriction;
    IsGrandRelatedRestriction = v7->m_Items[v4];
    if ( !IsGrandRelatedRestriction )
LABEL_22:
      sub_21FFECC(IsGrandRelatedRestriction, method);
    if ( !(IsGrandRelatedRestriction->fields.isFollower | v8 & 1) )
      PartyOrganizationListViewItem__Empty(IsGrandRelatedRestriction, 0);
    if ( (v8 & 1) != 0 )
    {
      v9 = this->fields.memberList;
      if ( !v9 )
        goto LABEL_22;
      if ( v4 >= LODWORD(v9->max_length) )
LABEL_23:
        sub_21FFED4(IsGrandRelatedRestriction);
      IsGrandRelatedRestriction = v9->m_Items[v4];
      if ( !IsGrandRelatedRestriction )
        goto LABEL_22;
      cost = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(IsGrandRelatedRestriction, 0) + cost;
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

  if ( (byte_5933DCC & 1) == 0 )
  {
    sub_21FFC50(&PartyListViewItem_TypeInfo);
    byte_5933DCC = 1;
  }
  v3 = (PartyListViewItem_o *)sub_21FFEBC(PartyListViewItem_TypeInfo);
  PartyListViewItem___ctor(v3, v4);
  if ( !v3 )
    sub_21FFECC(v5, v6);
  PartyListViewItem__Set(v3, this, v7);
  return v3;
}


bool PartyListViewItem__CompMember(
        PartyListViewItem_o *this,
        PartyListViewItem_o *item,
        bool isCheckSupport,
        const MethodInfo *method)
{
  PartyListViewItem_o *v6; // x21
  __int64 v7; // x2
  bool v8; // w22
  __int64 v9; // x24
  int v10; // w9
  unsigned int v11; // w8
  struct PartyOrganizationListViewItem_array *memberList; // x9
  struct PartyOrganizationListViewItem_array *v13; // x10

  v6 = this;
  if ( (byte_5933DDE & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5933DDE = 1;
  }
  if ( !item )
LABEL_17:
    sub_21FFECC(this, item);
  if ( System_String__op_Inequality(v6->fields.deckName, item->fields.deckName, 0) )
    return 0;
  v9 = 4;
  do
  {
    this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item, v7);
      this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    }
    v10 = this->fields.waveBattleEnemyClassIds->m_Items[35];
    v11 = v9 - 4;
    v8 = (int)v9 - 4 >= v10;
    if ( (int)v9 - 4 >= v10 )
      break;
    memberList = v6->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( v11 >= LODWORD(memberList->max_length) )
      goto LABEL_18;
    v13 = item->fields.memberList;
    if ( !v13 )
      goto LABEL_17;
    if ( v11 >= LODWORD(v13->max_length) )
LABEL_18:
      sub_21FFED4(this);
    this = (PartyListViewItem_o *)*((_QWORD *)&memberList->obj.klass + v9);
    if ( !this )
      goto LABEL_17;
  }
  while ( PartyOrganizationListViewItem__CompMember(
            (PartyOrganizationListViewItem_o *)this,
            *((PartyOrganizationListViewItem_o **)&v13->obj.klass + v9++),
            isCheckSupport,
            0) );
  return v8;
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
  UserServantEntity_o *v12; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int v18; // w23
  int v19; // w26
  System_Int64_array *EquipList; // x24
  const MethodInfo *v21; // x4
  __int64 v22; // x2
  BalanceConfig_c *v23; // x0
  __int64 SvtEquipMax; // x1
  const MethodInfo *v25; // x6
  struct PartyOrganizationListViewItem_array *memberList; // x26
  EventUpValSetupInfo_o *setupInfo; // x24
  QuestRestrictionInfo_o *v28; // x25
  System_Int64_array *v29; // x23
  int32_t v30; // w27
  PartyOrganizationListViewItem_o *v31; // x21
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  EventUpValSetupInfo_o *v38; // x22
  QuestRestrictionInfo_o *v39; // x23
  __int64 v40; // x1
  Il2CppClass **v41; // x0
  QuestRestrictionInfo_o *v42; // x25
  __int64 v43; // x1
  __int64 v44; // x2
  int32_t ServantId; // w27
  __int64 v46; // x28
  __int64 v47; // x29
  int32_t v48; // w28
  __int64 v49; // x0
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+2Ch] [xbp-74h] BYREF
  System_Int64_array *equipIdList; // [xsp+30h] [xbp-70h] BYREF
  UserServantEntity_o *userServantEntitya; // [xsp+38h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  v12 = userServantEntity;
  userServantEntitya = userServantEntity;
  if ( (byte_5933DDF & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&long___TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&PartyOrganizationListViewItem_TypeInfo);
    byte_5933DDF = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  equipIdList = 0;
  isChangeFriendShipSvtEquipSkill = 0;
  if ( !questRestrictionInfo )
    goto LABEL_37;
  questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsGrandServantRestriction(
                                                     questRestrictionInfo,
                                                     initPos,
                                                     0);
  v18 = (int)questRestrictionInfo;
  if ( v12
    && (questRestrictionInfo = (QuestRestrictionInfo_o *)UserServantEntity__IsGrandServant(v12, 0),
        ((unsigned __int8)questRestrictionInfo & 1) != 0) )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_37;
    questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsActiveGrandBoardRestriction(
                                                       questRestrictionInfo,
                                                       initPos,
                                                       0);
    v19 = (int)questRestrictionInfo;
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
                                                     v12,
                                                     EquipList,
                                                     initPos,
                                                     v21);
  if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
  {
    v12 = 0;
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
      v25);
    v12 = userServantEntitya;
    goto LABEL_22;
  }
  if ( v12 && isMyServantOrNpc )
  {
    v42 = this->fields.questRestrictionInfo;
    ServantId = UserServantEntity__GetServantId(v12, -1, 0);
    v46 = *(_QWORD *)&v12->fields.limitCount.fields.currentCryptoKey;
    v47 = *(_QWORD *)&v12->fields.limitCount.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43, v44);
    *(_QWORD *)&v53.fields.currentCryptoKey = v46;
    *(_QWORD *)&v53.fields.fakeValue = v47;
    v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v53, 0);
    questRestrictionInfo = (QuestRestrictionInfo_o *)UserServantEntity__GetDispLimitCountStageSealAfterIndexZero(
                                                       v12,
                                                       -1,
                                                       this->fields.questRestrictionInfo,
                                                       0);
    if ( v42 )
    {
      questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                         v42,
                                                         ServantId,
                                                         v48,
                                                         (int32_t)questRestrictionInfo,
                                                         initPos,
                                                         0,
                                                         0);
      if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
      {
        v12 = 0;
        userServantEntitya = 0;
      }
      goto LABEL_12;
    }
LABEL_37:
    sub_21FFECC(questRestrictionInfo, *(_QWORD *)&initPos);
  }
LABEL_12:
  if ( ((v18 | v19) & 1) == 0 )
  {
    if ( !EquipList )
      goto LABEL_37;
    v23 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&initPos, v22);
      v23 = BalanceConfig_TypeInfo;
    }
    SvtEquipMax = (unsigned int)v23->static_fields->SvtEquipMax;
    if ( (int)SvtEquipMax < SLODWORD(EquipList->max_length) )
    {
      if ( !*(&v23->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v23, SvtEquipMax, v22);
        SvtEquipMax = (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax;
      }
      equipIdList = (System_Int64_array *)sub_21FFD10(long___TypeInfo, SvtEquipMax);
    }
  }
LABEL_22:
  memberList = this->fields.memberList;
  if ( v12 )
  {
    setupInfo = this->fields.setupInfo;
    v28 = this->fields.questRestrictionInfo;
    v29 = equipIdList;
    v30 = isChangeFriendShipSvtEquipSkill;
    v31 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_40960892(
      v31,
      memberIndex,
      v12,
      v29,
      setupInfo,
      v28,
      0,
      initPos,
      0,
      0,
      v30,
      0,
      0);
    if ( !memberList )
      goto LABEL_37;
  }
  else
  {
    v38 = this->fields.setupInfo;
    v39 = this->fields.questRestrictionInfo;
    v31 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_40971972(v31, memberIndex, 0, v38, v39, 1, initPos, 0, 0);
    if ( !memberList )
      goto LABEL_37;
  }
  if ( v31 )
  {
    questRestrictionInfo = (QuestRestrictionInfo_o *)sub_21FFDA4(v31, memberList->obj.klass->_1.element_class);
    if ( !questRestrictionInfo )
    {
      v49 = sub_21FFEF0(0, v40);
      sub_21FFD90(v49, 0);
    }
  }
  if ( LODWORD(memberList->max_length) <= memberIndex )
    sub_21FFED4(questRestrictionInfo);
  v41 = &memberList->obj.klass + memberIndex;
  v41[4] = (Il2CppClass *)v31;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v41 + 4), (int32_t)v31, v32, v33, v34, v35, v36, v37);
}


void PartyListViewItem__Finalize(PartyListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


System_Int32_array *PartyListViewItem__GetBaseSvtIdList(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x20
  BalanceConfig_c *v8; // x0
  unsigned __int64 i; // x25
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v11; // x8
  struct ServantEntity_o *BaseServantEntity_k__BackingField; // x8
  __int64 v13; // x21
  __int64 v14; // x22
  int v15; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // kr00_16
  unsigned __int64 v17; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_5933DEA & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5933DEA = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v7 = sub_21FFD10(int___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
  v8 = BalanceConfig_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v5, v6);
      v8 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= v8->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_27;
    if ( i >= LODWORD(memberList->max_length) )
      goto LABEL_28;
    v11 = memberList->m_Items[i];
    if ( v11 )
    {
      BaseServantEntity_k__BackingField = v11->fields._BaseServantEntity_k__BackingField;
      if ( BaseServantEntity_k__BackingField )
      {
        v13 = *(_QWORD *)&BaseServantEntity_k__BackingField->fields.baseSvtId.fields.currentCryptoKey;
        v14 = *(_QWORD *)&BaseServantEntity_k__BackingField->fields.baseSvtId.fields.fakeValue;
      }
      else
      {
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
        v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(-1, 0);
        v5 = *(_QWORD *)&v16.fields.fakeValue;
        v13 = *(_QWORD *)&v16.fields.currentCryptoKey;
        v14 = *(_QWORD *)&v16.fields.fakeValue;
      }
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
      *(_QWORD *)&v19.fields.currentCryptoKey = v13;
      *(_QWORD *)&v19.fields.fakeValue = v14;
      v8 = (BalanceConfig_c *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v19, 0);
      if ( !v7 )
LABEL_27:
        sub_21FFECC(v8, v5);
      if ( i >= *(unsigned int *)(v7 + 24) )
LABEL_28:
        sub_21FFED4(v8);
      v15 = (int)v8;
      v8 = BalanceConfig_TypeInfo;
    }
    else
    {
      if ( !v7 )
        goto LABEL_27;
      if ( i >= *(unsigned int *)(v7 + 24) )
        goto LABEL_28;
      v15 = -1;
    }
    v17 = v7 + 4 * i;
    *(_DWORD *)(v17 + 32) = v15;
  }
  return (System_Int32_array *)v7;
}


int32_t PartyListViewItem__GetDeckCondition(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x5
  void *questRestrictionInfo; // x0
  int32_t v6; // w23
  unsigned __int8 v7; // w24
  char v8; // w25
  int v9; // w26
  int32_t v10; // w21
  int32_t v11; // w20
  int32_t DeckMainMemberMax; // w28
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v14; // x8
  PartyOrganizationListViewItem_o *v15; // x22
  _BOOL4 isFollower; // w8
  int32_t v17; // w22
  struct BalanceConfig_StaticFields *static_fields; // x8
  struct PartyOrganizationListViewItem_array *v19; // x8
  Il2CppClass **v20; // x8
  PartyOrganizationListViewItem_o *v21; // x23
  int32_t menuKind; // w9
  const MethodInfo *v23; // x5
  const MethodInfo *v24; // x5
  struct PartyOrganizationListViewItem_array *v25; // x9
  PartyOrganizationListViewItem_o *v26; // x9
  struct QuestRestrictionInfo_o *v27; // x8
  struct PartyOrganizationListViewItem_array *v28; // x29
  int max_length; // w8
  unsigned int v30; // w28
  const MethodInfo_444F85C **v31; // x26
  Il2CppClass **v32; // x8
  PartyOrganizationListViewItem_o *v33; // x20
  PartyOrganizationListViewItem_o *v34; // x0
  System_Collections_Generic_List_object__o *v35; // x21
  int size; // w8
  char v37; // w24
  int32_t v38; // w23
  const MethodInfo_444F85C **v39; // x22
  Il2CppObject *Item; // x0
  ServantEntity_o *ServantEntity_k__BackingField; // x25
  int32_t svtLimitCount; // w26
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x24
  System_Collections_Generic_IEnumerable_TSource__o *Individuality; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x24
  __int64 i; // x24
  struct PartyOrganizationListViewItem_array *v48; // x8
  PartyOrganizationListViewItem_o *v49; // x25
  struct ServantEntity_o *BaseServantEntity_k__BackingField; // x8
  __int64 v51; // x20
  __int64 v52; // x21
  int32_t v53; // w20
  unsigned __int64 j; // x26
  struct PartyOrganizationListViewItem_array *v55; // x8
  PartyOrganizationListViewItem_o *v56; // x28
  struct ServantEntity_o *v57; // x8
  __int64 v58; // x21
  __int64 v59; // x22
  System_Collections_Generic_List_T__o *v61; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_5933DDC & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5933DDC = 1;
  }
  if ( this->fields.cost > this->fields.maxCost )
  {
    LODWORD(questRestrictionInfo) = 7;
    return (int)questRestrictionInfo;
  }
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  while ( 1 )
  {
    questRestrictionInfo = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
      questRestrictionInfo = BalanceConfig_TypeInfo;
    }
    DeckMainMemberMax = *(_DWORD *)(*((_QWORD *)questRestrictionInfo + 23) + 176LL);
    if ( v6 >= DeckMainMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_172;
    if ( (unsigned int)v6 >= LODWORD(memberList->max_length) )
      goto LABEL_173;
    v14 = &memberList->obj.klass + v6;
    v15 = (PartyOrganizationListViewItem_o *)v14[4];
    if ( !v15 )
      goto LABEL_172;
    if ( PartyOrganizationListViewItem__get_IsLeave((PartyOrganizationListViewItem_o *)v14[4], 0) )
    {
LABEL_50:
      LODWORD(questRestrictionInfo) = 5;
      return (int)questRestrictionInfo;
    }
    if ( (v15->fields.fatigureTime & 0x8000000000000000LL) == 0 )
    {
LABEL_51:
      LODWORD(questRestrictionInfo) = 6;
      return (int)questRestrictionInfo;
    }
    if ( v15->fields._IsAllOutBattle_k__BackingField )
    {
LABEL_52:
      LODWORD(questRestrictionInfo) = 19;
      return (int)questRestrictionInfo;
    }
    if ( v15->fields._IsDataLost_k__BackingField )
    {
LABEL_53:
      LODWORD(questRestrictionInfo) = 20;
      return (int)questRestrictionInfo;
    }
    if ( v15->fields._TimesToRestart_k__BackingField > 0 )
    {
LABEL_54:
      LODWORD(questRestrictionInfo) = 21;
      return (int)questRestrictionInfo;
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
      if ( v15->fields.isMyServantOrNpcRestriction && PartyOrganizationListViewItem__get_ServantId(v15, 0) >= 1 )
      {
        isFollower = v15->fields.isFollower;
LABEL_21:
        ++v11;
        v7 |= isFollower;
      }
    }
    ++v6;
  }
  if ( !*((_DWORD *)questRestrictionInfo + 57) )
  {
    j_il2cpp_runtime_class_init_0(questRestrictionInfo, method, v2);
    questRestrictionInfo = BalanceConfig_TypeInfo;
    DeckMainMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
  }
  v17 = v11;
  while ( 1 )
  {
    if ( !*((_DWORD *)questRestrictionInfo + 57) )
    {
      j_il2cpp_runtime_class_init_0(questRestrictionInfo, method, v2);
      questRestrictionInfo = BalanceConfig_TypeInfo;
    }
    static_fields = (struct BalanceConfig_StaticFields *)*((_QWORD *)questRestrictionInfo + 23);
    if ( DeckMainMemberMax >= static_fields->DeckMemberMax )
      break;
    v19 = this->fields.memberList;
    if ( !v19 )
      goto LABEL_172;
    if ( (unsigned int)DeckMainMemberMax >= LODWORD(v19->max_length) )
      goto LABEL_173;
    v20 = &v19->obj.klass + DeckMainMemberMax;
    v21 = (PartyOrganizationListViewItem_o *)v20[4];
    if ( !v21 )
      goto LABEL_172;
    if ( PartyOrganizationListViewItem__get_IsLeave((PartyOrganizationListViewItem_o *)v20[4], 0) )
      goto LABEL_50;
    if ( (v21->fields.fatigureTime & 0x8000000000000000LL) == 0 )
      goto LABEL_51;
    if ( v21->fields._IsAllOutBattle_k__BackingField )
      goto LABEL_52;
    if ( v21->fields._IsDataLost_k__BackingField )
      goto LABEL_53;
    if ( v21->fields._TimesToRestart_k__BackingField > 0 )
      goto LABEL_54;
    if ( v21->fields.isFollower && !v21->fields.isMyServantOrNpcRestriction )
    {
      ++v9;
    }
    else if ( v21->fields.userServantEntity
           || v21->fields.isMyServantOrNpcRestriction && PartyOrganizationListViewItem__get_ServantId(v21, 0) >= 1 )
    {
      ++v17;
    }
    questRestrictionInfo = BalanceConfig_TypeInfo;
    ++DeckMainMemberMax;
  }
  menuKind = this->fields.menuKind;
  if ( menuKind > 5 )
  {
    if ( menuKind == 6 )
    {
      LODWORD(questRestrictionInfo) = 0;
      return (int)questRestrictionInfo;
    }
    if ( menuKind != 7 )
      goto LABEL_72;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_172;
    if ( !QuestRestrictionInfo__IsServantNum((QuestRestrictionInfo_o *)questRestrictionInfo, 0) )
      goto LABEL_66;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_172;
    if ( !QuestRestrictionInfo__IsFixedServantPosition((QuestRestrictionInfo_o *)questRestrictionInfo, 0) )
    {
      if ( !PartyListViewItem__CheckDeckConditionServantNum(this, v9 + v17, v11, v8 & 1, v10, v23) )
        goto LABEL_80;
    }
    else
    {
LABEL_66:
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_172;
      if ( QuestRestrictionInfo__IsServantNum((QuestRestrictionInfo_o *)questRestrictionInfo, 0) )
      {
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_172;
        if ( QuestRestrictionInfo__IsFixedServantPosition((QuestRestrictionInfo_o *)questRestrictionInfo, 0) )
        {
          LODWORD(questRestrictionInfo) = PartyListViewItem__GetDeckConditionServantNumAndPosition(
                                            this,
                                            v9 + v17,
                                            v11,
                                            v8 & 1,
                                            v10,
                                            v24);
          if ( (_DWORD)questRestrictionInfo )
            return (int)questRestrictionInfo;
        }
      }
    }
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_172;
    if ( QuestRestrictionInfo__IsMyServantNum((QuestRestrictionInfo_o *)questRestrictionInfo, 0) )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_172;
      if ( !QuestRestrictionInfo__CheckMyServantNumRestriction((QuestRestrictionInfo_o *)questRestrictionInfo, v17, 0) )
      {
        LODWORD(questRestrictionInfo) = 16;
        return (int)questRestrictionInfo;
      }
    }
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
LABEL_172:
      sub_21FFECC(questRestrictionInfo, method);
    questRestrictionInfo = (void *)QuestRestrictionInfo__IsServantNum((QuestRestrictionInfo_o *)questRestrictionInfo, 0);
    if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
      goto LABEL_97;
    questRestrictionInfo = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
      questRestrictionInfo = BalanceConfig_TypeInfo;
    }
    static_fields = (struct BalanceConfig_StaticFields *)*((_QWORD *)questRestrictionInfo + 23);
    goto LABEL_95;
  }
  if ( menuKind == 4 )
  {
    questRestrictionInfo = (void *)PartyListViewItem__CheckDeckConditionServantNum(this, v9 + v17, v11, v8 & 1, 1, v3);
    if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
      goto LABEL_97;
LABEL_80:
    LODWORD(questRestrictionInfo) = 14;
    return (int)questRestrictionInfo;
  }
  if ( menuKind == 5 )
  {
    questRestrictionInfo = (void *)PartyListViewItem__GetDeckConditionServantNumAndPosition(
                                     this,
                                     v9 + v17,
                                     v11,
                                     v8 & 1,
                                     1,
                                     v3);
    if ( (_DWORD)questRestrictionInfo )
      return (int)questRestrictionInfo;
    goto LABEL_97;
  }
LABEL_72:
  if ( !v17 )
  {
    LODWORD(questRestrictionInfo) = 1;
    return (int)questRestrictionInfo;
  }
  if ( v11 == 1 )
  {
    v25 = this->fields.memberList;
    if ( !v25 )
      goto LABEL_172;
    if ( LODWORD(v25->max_length) )
    {
      v26 = v25->m_Items[0];
      if ( !v26 )
        goto LABEL_172;
      if ( v26->fields.userServantEntity )
      {
        LODWORD(questRestrictionInfo) = 2;
        return (int)questRestrictionInfo;
      }
      goto LABEL_82;
    }
LABEL_173:
    sub_21FFED4(questRestrictionInfo);
  }
LABEL_82:
  v10 = v8 & 1;
  if ( !*((_DWORD *)questRestrictionInfo + 57) )
  {
    j_il2cpp_runtime_class_init_0(questRestrictionInfo, method, v2);
    static_fields = BalanceConfig_TypeInfo->static_fields;
  }
LABEL_95:
  if ( v11 + v10 < static_fields->DeckMainMemberMax )
  {
    LODWORD(questRestrictionInfo) = 3;
    return (int)questRestrictionInfo;
  }
LABEL_97:
  v27 = this->fields.questRestrictionInfo;
  if ( v27 )
  {
    if ( (v27->fields.isNotSingleSupportOnly & v7) == 1 && v11 == 1 )
    {
      LODWORD(questRestrictionInfo) = 22;
      return (int)questRestrictionInfo;
    }
    v28 = this->fields.memberList;
    if ( !v28 )
      goto LABEL_172;
    max_length = v28->max_length;
    if ( max_length >= 1 )
    {
      v30 = 0;
      v31 = (const MethodInfo_444F85C **)&Method_System_Collections_Generic_List_int____get_Item__;
      while ( v30 < max_length )
      {
        v32 = &v28->obj.klass + (int)v30;
        v33 = (PartyOrganizationListViewItem_o *)v32[4];
        if ( !v33 )
          goto LABEL_172;
        v34 = (PartyOrganizationListViewItem_o *)v32[4];
        v33->fields._IsErrorNeedIndividuality_k__BackingField = 0;
        if ( !PartyOrganizationListViewItem__get_ServantId(v34, 0) )
        {
          questRestrictionInfo = this->fields.questRestrictionInfo;
          if ( !questRestrictionInfo )
            goto LABEL_172;
          if ( QuestRestrictionInfo__IsSetRequired(
                 (QuestRestrictionInfo_o *)questRestrictionInfo,
                 v33->fields.index + 1,
                 v33->fields._InitPos_k__BackingField,
                 0) )
          {
            LODWORD(questRestrictionInfo) = 18;
            return (int)questRestrictionInfo;
          }
        }
        questRestrictionInfo = (void *)PartyOrganizationListViewItem__get_ServantId(v33, 0);
        if ( !(_DWORD)questRestrictionInfo )
        {
          questRestrictionInfo = this->fields.questRestrictionInfo;
          if ( !questRestrictionInfo )
            goto LABEL_172;
          questRestrictionInfo = (void *)QuestRestrictionInfo__IsGrandServantRestriction(
                                           (QuestRestrictionInfo_o *)questRestrictionInfo,
                                           v33->fields._InitPos_k__BackingField,
                                           0);
          if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
          {
            LODWORD(questRestrictionInfo) = 25;
            return (int)questRestrictionInfo;
          }
        }
        if ( v33->fields.userServantEntity )
        {
          questRestrictionInfo = this->fields.questRestrictionInfo;
          if ( !questRestrictionInfo )
            goto LABEL_172;
          questRestrictionInfo = QuestRestrictionInfo__GetNeedIndividualityList(
                                   (QuestRestrictionInfo_o *)questRestrictionInfo,
                                   v33->fields._InitPos_k__BackingField,
                                   0);
          if ( !this->fields.questRestrictionInfo )
            goto LABEL_172;
          v35 = (System_Collections_Generic_List_object__o *)questRestrictionInfo;
          questRestrictionInfo = QuestRestrictionInfo__GetRangeTypeList(
                                   this->fields.questRestrictionInfo,
                                   v33->fields._InitPos_k__BackingField,
                                   0);
          v61 = (System_Collections_Generic_List_T__o *)questRestrictionInfo;
          if ( v35 )
          {
            size = v35->fields._size;
            if ( size >= 1 && questRestrictionInfo && size == *((_DWORD *)questRestrictionInfo + 6) )
            {
              v37 = 0;
              v38 = 0;
              do
              {
                questRestrictionInfo = System_Collections_Generic_List_object___get_Item(v35, v38, *v31);
                if ( questRestrictionInfo )
                {
                  questRestrictionInfo = System_Collections_Generic_List_object___get_Item(v35, v38, *v31);
                  if ( !questRestrictionInfo )
                    goto LABEL_172;
                  if ( *((_QWORD *)questRestrictionInfo + 3) )
                  {
                    v39 = v31;
                    Item = System_Collections_Generic_List_object___get_Item(v35, v38, *v31);
                    ServantEntity_k__BackingField = v33->fields._ServantEntity_k__BackingField;
                    svtLimitCount = v33->fields.svtLimitCount;
                    v43 = (System_Collections_Generic_IEnumerable_TSource__o *)Item;
                    questRestrictionInfo = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(v33, 0);
                    if ( !ServantEntity_k__BackingField )
                      goto LABEL_172;
                    Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                           ServantEntity_k__BackingField,
                                                                                           svtLimitCount,
                                                                                           (int32_t)questRestrictionInfo,
                                                                                           0);
                    v45 = System_Linq_Enumerable__Intersect_int_(
                            v43,
                            Individuality,
                            (const MethodInfo_384FFFC *)Method_System_Linq_Enumerable_Intersect_int___);
                    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                                 v45,
                                                                                 (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
                    if ( System_Collections_Generic_List_Int32Enum___get_Item(
                           v61,
                           v38,
                           (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
                    {
                      questRestrictionInfo = (void *)System_Linq_Enumerable__Any_int_(
                                                       v46,
                                                       (const MethodInfo_38327B4 *)Method_System_Linq_Enumerable_Any_int___);
                      v31 = v39;
                      if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
                        goto LABEL_132;
                    }
                    else
                    {
                      questRestrictionInfo = (void *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                       v61,
                                                       v38,
                                                       (const MethodInfo_4435658 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
                      v31 = v39;
                      if ( (_DWORD)questRestrictionInfo == 2 )
                      {
                        questRestrictionInfo = (void *)System_Linq_Enumerable__Any_int_(
                                                         v46,
                                                         (const MethodInfo_38327B4 *)Method_System_Linq_Enumerable_Any_int___);
                        if ( ((unsigned __int8)questRestrictionInfo & 1) == 0 )
                          goto LABEL_132;
                      }
                    }
                    v37 = 1;
                  }
                }
                ++v38;
              }
              while ( v38 < v35->fields._size );
              if ( (v37 & 1) != 0 )
              {
                LODWORD(questRestrictionInfo) = 23;
                v33->fields._IsErrorNeedIndividuality_k__BackingField = 1;
                return (int)questRestrictionInfo;
              }
            }
          }
        }
LABEL_132:
        max_length = v28->max_length;
        if ( (int)++v30 >= max_length )
          goto LABEL_133;
      }
      goto LABEL_173;
    }
  }
LABEL_133:
  questRestrictionInfo = BalanceConfig_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !*((_DWORD *)questRestrictionInfo + 57) )
    {
      j_il2cpp_runtime_class_init_0(questRestrictionInfo, method, v2);
      questRestrictionInfo = BalanceConfig_TypeInfo;
    }
    if ( (int)i >= *(_DWORD *)(*((_QWORD *)questRestrictionInfo + 23) + 172LL) )
      break;
    v48 = this->fields.memberList;
    if ( !v48 )
      goto LABEL_172;
    if ( (unsigned int)i >= LODWORD(v48->max_length) )
      goto LABEL_173;
    v49 = v48->m_Items[(int)i];
    if ( !v49 )
      goto LABEL_172;
    if ( v49->fields.userServantEntity )
    {
      BaseServantEntity_k__BackingField = v49->fields._BaseServantEntity_k__BackingField;
      if ( BaseServantEntity_k__BackingField )
      {
        v51 = *(_QWORD *)&BaseServantEntity_k__BackingField->fields.baseSvtId.fields.currentCryptoKey;
        v52 = *(_QWORD *)&BaseServantEntity_k__BackingField->fields.baseSvtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
        *(_QWORD *)&v62.fields.currentCryptoKey = v51;
        *(_QWORD *)&v62.fields.fakeValue = v52;
        v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v62, 0);
        for ( j = 0; ; ++j )
        {
          questRestrictionInfo = BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
            questRestrictionInfo = BalanceConfig_TypeInfo;
          }
          if ( (__int64)j >= *(int *)(*((_QWORD *)questRestrictionInfo + 23) + 172LL) )
            goto LABEL_163;
          if ( i != j )
          {
            v55 = this->fields.memberList;
            if ( !v55 )
              goto LABEL_172;
            if ( j >= LODWORD(v55->max_length) )
              goto LABEL_173;
            v56 = v55->m_Items[j];
            if ( !v56 )
              goto LABEL_172;
            if ( v56->fields.userServantEntity )
            {
              v57 = v56->fields._BaseServantEntity_k__BackingField;
              if ( !v57 )
                goto LABEL_172;
              v58 = *(_QWORD *)&v57->fields.baseSvtId.fields.currentCryptoKey;
              v59 = *(_QWORD *)&v57->fields.baseSvtId.fields.fakeValue;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
              *(_QWORD *)&v63.fields.currentCryptoKey = v58;
              *(_QWORD *)&v63.fields.fakeValue = v59;
              if ( v53 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v63, 0) )
              {
LABEL_164:
                LODWORD(questRestrictionInfo) = 4;
                return (int)questRestrictionInfo;
              }
              questRestrictionInfo = v49->fields._BaseServantEntity_k__BackingField;
              if ( !questRestrictionInfo )
                goto LABEL_172;
              if ( ServantEntity__IsNotSameParty((ServantEntity_o *)questRestrictionInfo, 0) )
              {
                questRestrictionInfo = v49->fields._BaseServantEntity_k__BackingField;
                if ( !questRestrictionInfo )
                  goto LABEL_172;
                questRestrictionInfo = (void *)ServantEntity__GetNotSamePartyKey(
                                                 (ServantEntity_o *)questRestrictionInfo,
                                                 0);
                if ( !v56->fields._BaseServantEntity_k__BackingField )
                  goto LABEL_172;
                if ( (_DWORD)questRestrictionInfo == ServantEntity__GetNotSamePartyKey(
                                                       v56->fields._BaseServantEntity_k__BackingField,
                                                       0) )
                  goto LABEL_164;
              }
            }
          }
        }
      }
      goto LABEL_172;
    }
LABEL_163:
    ;
  }
  if ( PartyListViewItem__CheckDuplicationGrandQuestEquipment(this, method) )
    LODWORD(questRestrictionInfo) = 24;
  else
    LODWORD(questRestrictionInfo) = 0;
  return (int)questRestrictionInfo;
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
  __int64 v16; // x22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v18; // x8

  if ( (byte_5933DD9 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5933DD9 = 1;
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
    sub_21FFECC(questRestrictionInfo, v11);
  FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(questRestrictionInfo, 0);
  v16 = 0;
  questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( !HIDWORD(questRestrictionInfo->fields.myServantNumRestrictionEntity) )
    {
      j_il2cpp_runtime_class_init_0(questRestrictionInfo, v11, v14);
      questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    }
    if ( (int)v16 >= SHIDWORD(questRestrictionInfo->fields.uniqueSvtRestrictionEntity[2].fields.targetVals) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( (unsigned int)v16 >= LODWORD(memberList->max_length) )
      sub_21FFED4(questRestrictionInfo);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x2
  unsigned __int64 v18; // x21
  __int64 i; // x23
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v21; // x8
  EventUpValInfo_array *v22; // x9

  v6 = this;
  if ( (byte_5933DED & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    this = (PartyListViewItem_o *)sub_21FFC50(&EventUpValInfo___TypeInfo);
    byte_5933DED = 1;
  }
  setupInfo = v6->fields.setupInfo;
  if ( setupInfo )
  {
    setupInfo = (struct EventUpValSetupInfo_o *)setupInfo->fields.eventIdList;
    if ( !setupInfo )
LABEL_23:
      sub_21FFECC(this, eventId);
    v8 = *(_QWORD *)&setupInfo->fields.questPhase;
    if ( v8 )
    {
      if ( !(_DWORD)v8 )
LABEL_24:
        sub_21FFED4(this);
      LODWORD(setupInfo) = setupInfo->fields.eventIdList;
    }
    else
    {
      LODWORD(setupInfo) = 0;
    }
  }
  *eventId = (int)setupInfo;
  v9 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, eventId, eventUpValList);
    v9 = BalanceConfig_TypeInfo;
  }
  v10 = (EventUpValInfo_array *)sub_21FFD10(EventUpValInfo___TypeInfo, (unsigned int)v9->static_fields->DeckMemberMax);
  *eventUpValList = v10;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)eventUpValList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
  v18 = 0;
  for ( i = 32; ; i += 8 )
  {
    if ( !HIDWORD(this[1].monitor) )
    {
      j_il2cpp_runtime_class_init_0(this, eventId, v17);
      this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v18 >= this->fields.waveBattleEnemyClassIds->m_Items[35] )
      break;
    memberList = v6->fields.memberList;
    if ( !memberList )
      goto LABEL_23;
    if ( v18 >= LODWORD(memberList->max_length) )
      goto LABEL_24;
    v21 = memberList->m_Items[v18];
    if ( v21 )
    {
      v22 = *eventUpValList;
      if ( !*eventUpValList )
        goto LABEL_23;
      if ( v18 >= LODWORD(v22->max_length) )
        goto LABEL_24;
      PartyOrganizationListViewItem__GetEventUpVal(v21, (EventUpValInfo_o **)((char *)v22 + i), 0);
      this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    }
    ++v18;
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

  if ( (byte_5933DCA & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_FollowerInfo___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_21FFC50(&Method_PartyListViewItem___c__DisplayClass36_0__GetFollowerIndex_b__0__);
    sub_21FFC50(&PartyListViewItem___c__DisplayClass36_0_TypeInfo);
    byte_5933DCA = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  memset(&v23, 0, sizeof(v23));
  if ( !questRestrictionInfo )
    goto LABEL_26;
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
      goto LABEL_44;
    questRestrictionInfo = (QuestRestrictionInfo_o *)UserEventDeckEntity__GetFollowerIndexList(deck, 0);
    if ( !questRestrictionInfo )
      goto LABEL_44;
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_int__o *)questRestrictionInfo,
      (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v23 = v22;
    v22.fields._list = 0;
    *(_QWORD *)&v22.fields._index = &v23;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
             &v23,
             (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
      if ( !v8 )
        break;
      deckInfo = deck->fields.deckInfo;
      if ( !deckInfo )
        sub_21FFECC(v8, v9);
      svts = deckInfo->fields.svts;
      if ( !svts )
        sub_21FFECC(v8, v9);
      current = v23.fields._current;
      if ( (unsigned int)(v23.fields._current - 1) >= LODWORD(svts->max_length) )
        sub_21FFED4(v8);
      v13 = svts->m_Items[v23.fields._current - 1];
      if ( !v13 )
        sub_21FFECC(v8, v9);
      v14 = this->fields.questRestrictionInfo;
      if ( !v14 )
        sub_21FFECC(0, v9);
      if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_50479840(v14, v13->fields.initPos, 0) )
        goto LABEL_20;
    }
    current = 0;
LABEL_20:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v23,
      (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  }
  else
  {
LABEL_26:
    if ( !deck )
      goto LABEL_44;
    current = UserEventDeckEntity__GetFollowerIndex(deck, 0);
  }
  if ( current < 1 )
  {
    if ( current )
      return current;
    goto LABEL_38;
  }
  v16 = this->fields.questRestrictionInfo;
  if ( !v16 )
    return current;
  servantNumMax = v16->fields.servantNumMax;
  if ( servantNumMax >= 1 && servantNumMax < current )
  {
LABEL_38:
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
    v18 = (PartyListViewItem___c__DisplayClass36_0_o *)sub_21FFEBC(PartyListViewItem___c__DisplayClass36_0_TypeInfo);
    PartyListViewItem___c__DisplayClass36_0___ctor(v18, 0);
    if ( v18 )
    {
      v18->fields.chkIndex = current;
      v19 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v19,
        (Il2CppObject *)v18,
        Method_PartyListViewItem___c__DisplayClass36_0__GetFollowerIndex_b__0__,
        0);
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)fixNpcFollowerInfoList,
              (System_Func_T__bool__o *)v19,
              (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_FollowerInfo___) )
        return current;
      goto LABEL_38;
    }
LABEL_44:
    sub_21FFECC(questRestrictionInfo, deck);
  }
  return current;
}


System_String_o *PartyListViewItem__GetGrandQuestDuplicationEquipmentNameList(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_TSource__o *duplicatedEquipmentUserSvtIdList; // x19
  System_Func_T__TResult__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_String_array *v18; // x0

  if ( (byte_5933DF3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_long__string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_21FFC50(&System_Func_long__string__TypeInfo);
    sub_21FFC50(&Method_PartyListViewItem___c__DisplayClass110_0__GetGrandQuestDuplicationEquipmentNameList_b__0__);
    sub_21FFC50(&PartyListViewItem___c__DisplayClass110_0_TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5933DF3 = 1;
  }
  v3 = sub_21FFEBC(PartyListViewItem___c__DisplayClass110_0_TypeInfo);
  PartyListViewItem___c__DisplayClass110_0___ctor((PartyListViewItem___c__DisplayClass110_0_o *)v3, 0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.duplicatedEquipmentUserSvtIdList, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !v3 )
    sub_21FFECC(Master_object, v8);
  *(_QWORD *)(v3 + 16) = Master_object;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)Master_object, v9, v10, v11, v12, v13, v14);
  duplicatedEquipmentUserSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.duplicatedEquipmentUserSvtIdList;
  v16 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_long__string__TypeInfo);
  System_Func_long__object____ctor(
    v16,
    (Il2CppObject *)v3,
    Method_PartyListViewItem___c__DisplayClass110_0__GetGrandQuestDuplicationEquipmentNameList_b__0__,
    0);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               duplicatedEquipmentUserSvtIdList,
                                                               (System_Func_TSource__TResult__o *)v16,
                                                               (const MethodInfo_385C370 *)Method_System_Linq_Enumerable_Select_long__string___);
  v18 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v17,
                                 (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_string___);
  return System_String__Join((System_String_o *)StringLiteral_43/*"\n"*/, v18, 0);
}


void PartyListViewItem__GetGrandServantInfo(
        PartyListViewItem_o *this,
        RestrictionEntity_o *restrictionEntity,
        UserServantEntity_o **userServantEntity,
        System_Int64_array **equipIdList,
        int32_t *isChangeFriendShipSvtEquipSkill,
        const MethodInfo *method)
{
  int v9; // w8
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *v13; // x8
  BalanceConfig_c *v14; // x0
  System_Collections_ICollection_o *monitor; // x19
  System_Int64_array *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  bool IsNullOrEmpty; // w0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Collections_Generic_List_object__o *v30; // x23
  __int64 v31; // x1
  __int64 v32; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x26
  int64_t Enumerator; // x0
  __int64 v35; // x1
  int64_t v36; // x19
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  int64_t v43; // x19
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x27
  __int64 v49; // x28
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x1
  int32_t ServantId; // w29
  int32_t DispLimitCountStageSealAfter; // w20
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  Il2CppObject *v58; // x21
  int32_t v59; // w19
  void *v60; // x22
  Il2CppClass *klass; // x24
  int32_t v62; // w0
  int32_t v63; // w1
  ServantOverwriteStatus_o *OverwriteStatus_50140328; // x0
  __int64 v65; // x1
  ServantOverwriteStatus_o *v66; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  __int64 v68; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  Il2CppClass *v71; // x21
  void *v72; // x22
  QuestRestrictionInfo_o *v73; // x20
  __int64 v74; // x0
  __int64 v75; // x1
  System_Int32_array *ServantIndividuality; // x0
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  struct System_Int32_array *targetVals; // x19
  System_Func_int__bool__o *v90; // x20
  UserServantEntity_o *v91; // x8
  __int128 v92; // q1
  int64_t v93; // x0
  __int64 v94; // x1
  Il2CppObject v95; // q1
  int64_t v96; // x19
  struct System_Object_array *items; // x8
  _QWORD *v98; // x9
  __int64 size; // x10
  Il2CppClass **v100; // x0
  __int64 v101; // x0
  Il2CppObject *v102; // x1
  System_String_o *v103; // x2
  System_String_o *v104; // x3
  int32_t v105; // w4
  int32_t v106; // w5
  bool v107; // w6
  bool v108; // w7
  struct System_Object_array *v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  Il2CppClass **v112; // x0
  MissionNaviTransitionBoardItem_o *v113; // x21
  int v114; // w20
  int64_t v115; // x24
  __int64 v116; // x8
  __int64 v117; // x9
  int *v118; // x10
  __int64 v119; // x0
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  Il2CppObject *Item; // x0
  System_String_o *v127; // x2
  System_String_o *v128; // x3
  int32_t v129; // w4
  int32_t v130; // w5
  bool v131; // w6
  bool v132; // w7
  System_Int64_array *v133; // x0
  System_String_o *v134; // x2
  System_String_o *v135; // x3
  int32_t v136; // w4
  int32_t v137; // w5
  bool v138; // w6
  bool v139; // w7
  System_Int64_array *EquipUserServantIdList; // x0
  System_String_o *v141; // x2
  System_String_o *v142; // x3
  int32_t v143; // w4
  int32_t v144; // w5
  bool v145; // w6
  bool v146; // w7
  int32_t *v147; // [xsp+8h] [xbp-108h]
  MissionNaviTransitionBoardItem_o *v148; // [xsp+10h] [xbp-100h]
  System_Collections_Generic_List_object__o *v149; // [xsp+18h] [xbp-F8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v152; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v153; // [xsp+50h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v154; // [xsp+70h] [xbp-A0h]
  __int64 v155; // [xsp+90h] [xbp-80h]
  int64_t *v156; // [xsp+98h] [xbp-78h]
  Il2CppObject *entity; // [xsp+A0h] [xbp-70h] BYREF
  int64_t v158; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16

  if ( (byte_5933DDB & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_BasicHelper_Any_int____91485032);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntityList__);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&long___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantGrandEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantGrandEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantGrandEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_PartyListViewItem___c__DisplayClass60_0__GetGrandServantInfo_b__0__);
    sub_21FFC50(&PartyListViewItem___c__DisplayClass60_0_TypeInfo);
    byte_5933DDB = 1;
  }
  v9 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  v158 = 0;
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, restrictionEntity, userServantEntity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    goto LABEL_105;
  v13 = Master_object;
  v14 = BalanceConfig_TypeInfo;
  monitor = (System_Collections_ICollection_o *)v13[2].monitor;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11, v12);
    v14 = BalanceConfig_TypeInfo;
  }
  v16 = (System_Int64_array *)sub_21FFD10(long___TypeInfo, (unsigned int)v14->static_fields->GrandSvtEquipMax);
  *equipIdList = v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)equipIdList, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  *isChangeFriendShipSvtEquipSkill = 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(monitor, 0);
  if ( !restrictionEntity || IsNullOrEmpty )
  {
    *userServantEntity = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)userServantEntity, 0, v24, v25, v26, v27, v28, v29);
    return;
  }
  v147 = isChangeFriendShipSvtEquipSkill;
  v148 = (MissionNaviTransitionBoardItem_o *)equipIdList;
  v149 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v149,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
  v30 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v31, v32);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !monitor )
    goto LABEL_105;
  v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Enumerator = (int64_t)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                          (System_Collections_ObjectModel_Collection_T__o *)monitor,
                          (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
  v158 = Enumerator;
  v155 = 0;
  v156 = &v158;
  if ( !Enumerator )
LABEL_68:
    sub_21FFECC(Enumerator, v35);
  v36 = Enumerator;
  while ( 1 )
  {
    v37 = *(_QWORD *)v36;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_19;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_19:
      v40 = sub_2237E2C(v36, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v41 = (*(__int64 (__fastcall **)(int64_t, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8));
    if ( (v41 & 1) == 0 )
    {
      v113 = v148;
      v114 = 9;
      goto LABEL_71;
    }
    v43 = v158;
    if ( !v158 )
      sub_21FFECC(v41, v42);
    v44 = *(_QWORD *)v158;
    v45 = *(unsigned __int16 *)(*(_QWORD *)v158 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v158 + 302LL) )
    {
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **)v46 - 1) != System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_27;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_27:
      v47 = sub_2237E2C(v158, System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo, 0);
    }
    v48 = (*(__int64 (__fastcall **)(int64_t, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8));
    v49 = sub_21FFEBC(PartyListViewItem___c__DisplayClass60_0_TypeInfo);
    PartyListViewItem___c__DisplayClass60_0___ctor((PartyListViewItem___c__DisplayClass60_0_o *)v49, 0);
    if ( !v48 )
      sub_21FFECC(v50, v51);
    if ( !v33 )
      sub_21FFECC(v50, v51);
    Enumerator = DataMasterBase_object__object__long___TryGetEntity(
                   v33,
                   &entity,
                   *(_QWORD *)(v48 + 32),
                   (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( (Enumerator & 1) != 0 )
    {
      if ( !entity )
        sub_21FFECC(0, v35);
      ServantId = UserServantEntity__GetServantId((UserServantEntity_o *)entity, -1, 0);
      if ( !entity )
        sub_21FFECC(0, v52);
      DispLimitCountStageSealAfter = UserServantEntity__GetDispLimitCountStageSealAfter(
                                       (UserServantEntity_o *)entity,
                                       -1,
                                       0,
                                       this->fields.questRestrictionInfo,
                                       0);
      v55 = LimitCountUtility__ConvertLimitCountStageIndexOneToZero(DispLimitCountStageSealAfter, 0);
      v58 = entity;
      if ( !entity )
        sub_21FFECC(v55, v56);
      v59 = v55;
      klass = entity[6].klass;
      v60 = entity[6].monitor;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v56, v57);
      *(_QWORD *)&v159.fields.currentCryptoKey = klass;
      *(_QWORD *)&v159.fields.fakeValue = v60;
      v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v159, 0);
      v63 = LimitCountUtility__ConvertStageToLimitCount(v62, DispLimitCountStageSealAfter, 0, 0);
      OverwriteStatus_50140328 = UserServantEntity__GetOverwriteStatus_50140328((UserServantEntity_o *)v58, v63, 0);
      if ( !entity )
        sub_21FFECC(OverwriteStatus_50140328, v65);
      v66 = OverwriteStatus_50140328;
      questRestrictionInfo = this->fields.questRestrictionInfo;
      v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
              (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
              0);
      if ( !v66 )
        sub_21FFECC(v68, v69);
      if ( !entity )
        sub_21FFECC(v68, v69);
      if ( !questRestrictionInfo )
        sub_21FFECC(v68, v69);
      Enumerator = QuestRestrictionInfo__IsRestriction_50460032(
                     questRestrictionInfo,
                     ServantId,
                     v68,
                     v59,
                     v66->fields._Rarity_k__BackingField,
                     (int32_t)entity[25].klass,
                     1,
                     0);
      if ( (Enumerator & 1) == 0 )
      {
        if ( !entity )
          sub_21FFECC(Enumerator, v35);
        v71 = entity[6].klass;
        v72 = entity[6].monitor;
        v73 = this->fields.questRestrictionInfo;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v70);
        *(_QWORD *)&v160.fields.currentCryptoKey = v71;
        *(_QWORD *)&v160.fields.fakeValue = v72;
        v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v160, 0);
        if ( !v73 )
          sub_21FFECC(v74, v75);
        ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(v73, ServantId, v74, v59, 0);
        if ( !v49 )
          sub_21FFECC(ServantIndividuality, ServantIndividuality);
        *(_QWORD *)(v49 + 16) = ServantIndividuality;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(v49 + 16),
          (int32_t)ServantIndividuality,
          v77,
          v78,
          v79,
          v80,
          v81,
          v82);
        Enumerator = BasicHelper__IsNullOrEmpty(
                       (System_Collections_ICollection_o *)restrictionEntity->fields.targetVals,
                       0);
        if ( (Enumerator & 1) != 0 )
          break;
        targetVals = restrictionEntity->fields.targetVals;
        if ( !targetVals )
          sub_21FFECC(Enumerator, v35);
        if ( !LODWORD(targetVals->max_length) )
          sub_21FFED4(Enumerator);
        if ( !targetVals->m_Items[0] )
          break;
        v90 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v90,
          (Il2CppObject *)v49,
          Method_PartyListViewItem___c__DisplayClass60_0__GetGrandServantInfo_b__0__,
          0);
        Enumerator = BasicHelper__Any_int__58574768(
                       targetVals,
                       (System_Func_T__bool__o *)v90,
                       (const MethodInfo_37DC7B0 *)Method_BasicHelper_Any_int____91485032);
        if ( (Enumerator & 1) != 0 )
          break;
      }
    }
LABEL_67:
    v36 = v158;
    if ( !v158 )
      goto LABEL_68;
  }
  v91 = *userServantEntity;
  if ( !*userServantEntity )
    goto LABEL_111;
  v92 = *(_OWORD *)&v91->fields.id.fields.fakeValue;
  *(_OWORD *)&v154.fields.currentCryptoKey = *(_OWORD *)&v91->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v154.fields.fakeValue = v92;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35, v83);
  v153 = v154;
  v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v153, 0);
  if ( !entity )
    sub_21FFECC(v93, v94);
  v95 = entity[2];
  v96 = v93;
  *(Il2CppObject *)&v152.fields.currentCryptoKey = entity[1];
  *(Il2CppObject *)&v152.fields.fakeValue = v95;
  Enumerator = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v152, 0);
  if ( v96 != Enumerator )
  {
LABEL_111:
    if ( !v149
      || (items = v149->fields._items,
          v98 = Method_System_Collections_Generic_List_UserServantGrandEntity__Add__,
          ++v149->fields._version,
          !items) )
    {
      sub_21FFECC(Enumerator, v35);
    }
    size = v149->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v149,
        (Il2CppObject *)v48,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
    }
    else
    {
      v100 = &items->obj.klass + size;
      v149->fields._size = size + 1;
      v100[4] = (Il2CppClass *)v48;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v100 + 4), v48, v83, v84, v85, v86, v87, v88);
    }
    if ( !v30
      || (v109 = v30->fields._items,
          v102 = entity,
          v110 = Method_System_Collections_Generic_List_UserServantEntity__Add__,
          ++v30->fields._version,
          !v109) )
    {
      sub_21FFECC(v101, v102);
    }
    v111 = v30->fields._size;
    if ( (unsigned int)v111 >= LODWORD(v109->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v30,
        v102,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
    }
    else
    {
      v112 = &v109->obj.klass + v111;
      v30->fields._size = v111 + 1;
      v112[4] = (Il2CppClass *)v102;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v112 + 4), (int32_t)v102, v103, v104, v105, v106, v107, v108);
    }
    goto LABEL_67;
  }
  v113 = v148;
  EquipUserServantIdList = UserServantGrandEntity__GetEquipUserServantIdList((UserServantGrandEntity_o *)v48, 0);
  v148->klass = (MissionNaviTransitionBoardItem_c *)EquipUserServantIdList;
  sub_21FFBF4(v148, (int32_t)EquipUserServantIdList, v141, v142, v143, v144, v145, v146);
  v114 = 8;
  *v147 = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill((UserServantGrandEntity_o *)v48, 0);
LABEL_71:
  v115 = v158;
  if ( v158 )
  {
    v116 = *(_QWORD *)v158;
    v117 = *(unsigned __int16 *)(*(_QWORD *)v158 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v158 + 302LL) )
    {
      v118 = (int *)(*(_QWORD *)(v116 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v118 - 1) != System_IDisposable_TypeInfo )
      {
        --v117;
        v118 += 4;
        if ( !v117 )
          goto LABEL_76;
      }
      v119 = v116 + 16LL * *v118 + 312;
    }
    else
    {
LABEL_76:
      v119 = sub_2237E2C(v158, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(int64_t, _QWORD))v119)(v115, *(_QWORD *)(v119 + 8));
  }
  if ( v114 == 9 )
  {
    Master_object = (Il2CppObject *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v149, 0);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      if ( !v149 )
        goto LABEL_105;
      if ( v149->fields._size < 2 )
      {
        if ( v30 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v30,
                   0,
                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          *userServantEntity = (UserServantEntity_o *)Item;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)userServantEntity,
            (int32_t)Item,
            v127,
            v128,
            v129,
            v130,
            v131,
            v132);
          Master_object = System_Collections_Generic_List_object___get_Item(
                            v149,
                            0,
                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantGrandEntity__get_Item__);
          if ( Master_object )
          {
            v133 = UserServantGrandEntity__GetEquipUserServantIdList((UserServantGrandEntity_o *)Master_object, 0);
            v113->klass = (MissionNaviTransitionBoardItem_c *)v133;
            sub_21FFBF4(v113, (int32_t)v133, v134, v135, v136, v137, v138, v139);
            Master_object = System_Collections_Generic_List_object___get_Item(
                              v149,
                              0,
                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantGrandEntity__get_Item__);
            if ( Master_object )
            {
              *v147 = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(
                        (UserServantGrandEntity_o *)Master_object,
                        0);
              return;
            }
          }
        }
LABEL_105:
        sub_21FFECC(Master_object, v11);
      }
    }
    *userServantEntity = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)userServantEntity, 0, v120, v121, v122, v123, v124, v125);
  }
}


System_Collections_Generic_List_int__o *PartyListViewItem__GetGrandSvtIdListInParty(
        PartyListViewItem_o *this,
        bool getFollower,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  QuestRestrictionInfo_o *IsEmpty; // x0
  __int64 v7; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x25
  PartyOrganizationListViewItem_o *v11; // x22
  __int64 v12; // x2
  struct ServantEntity_o *BaseServantEntity_k__BackingField; // x8
  __int64 v14; // x22
  __int64 v15; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_5933DF0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5933DF0 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.questRestrictionInfo )
  {
    memberList = this->fields.memberList;
    if ( !memberList )
LABEL_28:
      sub_21FFECC(IsEmpty, v7);
    max_length = memberList->max_length;
    if ( (int)max_length >= 1 )
    {
      for ( i = 0; (__int64)i < (int)max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_21FFED4(IsEmpty);
        v11 = memberList->m_Items[i];
        if ( getFollower )
        {
          if ( !v11 )
            goto LABEL_28;
        }
        else
        {
          if ( !v11 )
            goto LABEL_28;
          if ( v11->fields.isFollower )
            goto LABEL_26;
        }
        IsEmpty = (QuestRestrictionInfo_o *)PartyOrganizationListViewItem__get_IsEmpty(memberList->m_Items[i], 0);
        if ( ((unsigned __int8)IsEmpty & 1) == 0 )
        {
          IsEmpty = this->fields.questRestrictionInfo;
          if ( !IsEmpty )
            goto LABEL_28;
          IsEmpty = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsGrandServantRestriction(
                                                IsEmpty,
                                                v11->fields._InitPos_k__BackingField,
                                                0);
          if ( ((unsigned __int8)IsEmpty & 1) != 0
            && (v11->fields._IsGrandServant_k__BackingField || v11->fields._IsTempGrandServant_k__BackingField) )
          {
            BaseServantEntity_k__BackingField = v11->fields._BaseServantEntity_k__BackingField;
            if ( !BaseServantEntity_k__BackingField )
              goto LABEL_28;
            v14 = *(_QWORD *)&BaseServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
            v15 = *(_QWORD *)&BaseServantEntity_k__BackingField->fields.id.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v12);
            *(_QWORD *)&v20.fields.currentCryptoKey = v14;
            *(_QWORD *)&v20.fields.fakeValue = v15;
            IsEmpty = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                  v20,
                                                  0);
            if ( !v5 )
              goto LABEL_28;
            items = v5->fields._items;
            v17 = Method_System_Collections_Generic_List_int__Add__;
            ++v5->fields._version;
            if ( !items )
              goto LABEL_28;
            size = v5->fields._size;
            v7 = (unsigned int)IsEmpty;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v5,
                (int32_t)IsEmpty,
                *(const MethodInfo_4433138 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v5->fields._size = size + 1;
              items->m_Items[size] = (int)IsEmpty;
            }
          }
        }
LABEL_26:
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
  long double v3; // q0
  System_Collections_Generic_List_object__o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  UserServantGrandMaster_o *Master_object; // x0
  __int64 v10; // x1
  UserServantGrandMaster_o *v11; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x28
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v14; // x29
  PartyOrganizationListViewItem_o *v15; // x23
  UserServantGrandEntity_o *v16; // x24
  System_Int64_array *EquipUserServantIdList; // x25
  __int64 v18; // x2
  int32_t EquipFriendShipSkillChange_k__BackingField; // w26
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v21; // q1
  int32_t grandGraphId; // w24
  int64_t v23; // x27
  GrandSvtInfo_o *v24; // x23
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  _QWORD *v36; // x19
  __int64 v37; // x8
  __int64 v38; // x0
  __int64 v39; // x0
  char v40; // [xsp+Ch] [xbp-A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+30h] [xbp-80h]

  if ( (byte_5933DF1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_GrandSvtInfo___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&GrandSvtInfo_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GrandSvtInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GrandSvtInfo__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GrandSvtInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GrandSvtInfo__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5933DF1 = 1;
  }
  if ( oldPartyItem && this->fields.questRestrictionInfo )
  {
    v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GrandSvtInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GrandSvtInfo___ctor__);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
    Master_object = (UserServantGrandMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_46;
    v11 = Master_object;
    Master_object = (UserServantGrandMaster_o *)QuestRestrictionInfo__IsIgnoreSyncEquipGrand(
                                                  this->fields.questRestrictionInfo,
                                                  0);
    memberList = this->fields.memberList;
    v40 = (char)Master_object;
    if ( !memberList )
      goto LABEL_46;
    max_length = memberList->max_length;
    if ( (int)max_length >= 1 )
    {
      v14 = 0;
      do
      {
        if ( v14 >= (unsigned int)max_length )
          sub_21FFED4(Master_object);
        v15 = memberList->m_Items[v14];
        if ( v15
          && v15->fields.isRestrictionGrandServant
          && v15->fields.userServantEntity
          && (v15->fields._IsGrandServant_k__BackingField || v15->fields._IsTempGrandServant_k__BackingField) )
        {
          Master_object = (UserServantGrandMaster_o *)PartyOrganizationListViewItem__get_BaseServantId(
                                                        memberList->m_Items[v14],
                                                        0);
          if ( !v11 )
            goto LABEL_46;
          Master_object = (UserServantGrandMaster_o *)UserServantGrandMaster__GetEntityFromSvtId(
                                                        v11,
                                                        (int32_t)Master_object,
                                                        0);
          if ( !this->fields.questRestrictionInfo )
            goto LABEL_46;
          v16 = (UserServantGrandEntity_o *)Master_object;
          Master_object = (UserServantGrandMaster_o *)QuestRestrictionInfo__IsGrandServantRestriction(
                                                        this->fields.questRestrictionInfo,
                                                        v15->fields._InitPos_k__BackingField,
                                                        0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            if ( v16 )
            {
              if ( (v40 & 1) != 0 )
              {
                EquipUserServantIdList = UserServantGrandEntity__GetEquipUserServantIdList(v16, 0);
                Master_object = (UserServantGrandMaster_o *)UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(
                                                              v16,
                                                              0);
                EquipFriendShipSkillChange_k__BackingField = (int)Master_object;
              }
              else
              {
                Master_object = (UserServantGrandMaster_o *)PartyOrganizationListViewItem__GetEquipList(v15, 0);
                EquipFriendShipSkillChange_k__BackingField = v15->fields._EquipFriendShipSkillChange_k__BackingField;
                EquipUserServantIdList = (System_Int64_array *)Master_object;
              }
              userServantEntity = v15->fields.userServantEntity;
              if ( !userServantEntity )
                goto LABEL_46;
              v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
              grandGraphId = v16->fields.grandGraphId;
              *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v42.fields.fakeValue = v21;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v18);
              v41 = v42;
              v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v41, 0);
              v24 = (GrandSvtInfo_o *)sub_21FFEBC(GrandSvtInfo_TypeInfo);
              GrandSvtInfo___ctor(
                v24,
                grandGraphId,
                v23,
                EquipUserServantIdList,
                EquipFriendShipSkillChange_k__BackingField,
                0);
              if ( !v6 )
                goto LABEL_46;
              items = v6->fields._items;
              v32 = Method_System_Collections_Generic_List_GrandSvtInfo__Add__;
              ++v6->fields._version;
              if ( !items )
                goto LABEL_46;
              size = v6->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v6,
                  (Il2CppObject *)v24,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
              }
              else
              {
                v34 = &items->obj.klass + size;
                v6->fields._size = size + 1;
                v34[4] = (Il2CppClass *)v24;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v24, v25, v26, v27, v28, v29, v30);
              }
            }
          }
        }
        LODWORD(max_length) = memberList->max_length;
      }
      while ( (__int64)++v14 < (int)max_length );
    }
    if ( !v6 )
LABEL_46:
      sub_21FFECC(Master_object, v10);
    return (GrandSvtInfo_array *)System_Collections_Generic_List_object___ToArray(
                                   v6,
                                   (const MethodInfo_445164C *)Method_System_Collections_Generic_List_GrandSvtInfo__ToArray__);
  }
  else
  {
    v36 = Method_System_Array_Empty_GrandSvtInfo___;
    v37 = *((_QWORD *)Method_System_Array_Empty_GrandSvtInfo___ + 7);
    if ( !v37 )
    {
      sub_2237B54(Method_System_Array_Empty_GrandSvtInfo___);
      v37 = v36[7];
    }
    v38 = *(_QWORD *)(v37 + 16);
    if ( (*(_WORD *)(v38 + 309) & 1) == 0 )
      v38 = sub_2237AF8(v3);
    if ( !*(_DWORD *)(v38 + 228) )
      *(__n128 *)&v3 = j_il2cpp_runtime_class_init_0(v38, oldPartyItem, method);
    v39 = *(_QWORD *)(v36[7] + 16LL);
    if ( (*(_WORD *)(v39 + 309) & 1) == 0 )
      v39 = sub_2237AF8(v3);
    return **(GrandSvtInfo_array ***)(v39 + 184);
  }
}


System_Boolean_array *PartyListViewItem__GetIsFollowerList(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x20
  BalanceConfig_c *v8; // x0
  unsigned __int64 i; // x22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v11; // x8

  if ( (byte_5933DEC & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&bool___TypeInfo);
    byte_5933DEC = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v7 = sub_21FFD10(bool___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
  v8 = BalanceConfig_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v5, v6);
      v8 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= v8->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( i >= LODWORD(memberList->max_length) )
      goto LABEL_18;
    v11 = memberList->m_Items[i];
    if ( v11 )
    {
      if ( !v7 )
LABEL_17:
        sub_21FFECC(v8, v5);
      if ( i >= *(unsigned int *)(v7 + 24) )
LABEL_18:
        sub_21FFED4(v8);
      *(_BYTE *)(v7 + i + 32) = v11->fields.isFollower;
    }
  }
  return (System_Boolean_array *)v7;
}


// local variable allocation has failed, the output may be wrong!
int32_t PartyListViewItem__GetMaxCost(PartyListViewItem_o *this, int32_t baseMaxCost, const MethodInfo *method)
{
  int32_t v3; // w19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  BalanceConfig_c *v6; // x0

  v3 = baseMaxCost;
  if ( (byte_5933DF8 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5933DF8 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo && questRestrictionInfo->fields.isInfinityCost )
  {
    v6 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&baseMaxCost, method);
      v6 = BalanceConfig_TypeInfo;
    }
    return v6->static_fields->InfinityCostValue;
  }
  return v3;
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
    sub_21FFECC(this, *(_QWORD *)&num);
  if ( LODWORD(memberList->max_length) <= num )
    sub_21FFED4(this);
  return memberList->m_Items[num];
}


int32_t PartyListViewItem__GetMenuKind(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.menuKind;
}


System_String_array *PartyListViewItem__GetNarrowFigureAssetNameList(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  PartyListViewItem___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  struct PartyListViewItem___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__99_0; // x20
  Il2CppObject *v10; // x21
  struct PartyListViewItem___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  System_Collections_Generic_IEnumerable_T__o *v19; // x0

  if ( (byte_5933DEE & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_ExcludeNull_PartyOrganizationListViewItem___);
    sub_21FFC50(&Method_BasicHelper_ExcludeNull_string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_PartyOrganizationListViewItem__string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_21FFC50(&System_Func_PartyOrganizationListViewItem__string__TypeInfo);
    sub_21FFC50(&Method_PartyListViewItem___c__GetNarrowFigureAssetNameList_b__99_0__);
    sub_21FFC50(&PartyListViewItem___c_TypeInfo);
    byte_5933DEE = 1;
  }
  v3 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.memberList,
         (const MethodInfo_37DD3BC *)Method_BasicHelper_ExcludeNull_PartyOrganizationListViewItem___);
  v6 = PartyListViewItem___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  if ( !*(&PartyListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PartyListViewItem___c_TypeInfo, v4, v5);
    v6 = PartyListViewItem___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__99_0 = (System_Func_object__object__o *)static_fields->__9__99_0;
  if ( !_9__99_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v4, v5);
      static_fields = PartyListViewItem___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__99_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_PartyOrganizationListViewItem__string__TypeInfo);
    System_Func_object__object____ctor(
      _9__99_0,
      v10,
      Method_PartyListViewItem___c__GetNarrowFigureAssetNameList_b__99_0__,
      0);
    v11 = PartyListViewItem___c_TypeInfo->static_fields;
    v11->__9__99_0 = (struct System_Func_PartyOrganizationListViewItem__string__o *)_9__99_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__99_0, (int32_t)_9__99_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v7,
                                                         (System_Func_TSource__TResult__o *)_9__99_0,
                                                         (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_PartyOrganizationListViewItem__string___);
  v19 = BasicHelper__ExcludeNull_object_(v18, (const MethodInfo_37DD3BC *)Method_BasicHelper_ExcludeNull_string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                                  (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_string___);
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
    sub_21FFECC(this, npcSvtIds);
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
        sub_21FFED4(myServantNumMax);
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
  struct System_Collections_Generic_Dictionary_int__QuestRestrictionInfo_DialogMessageInfo__o *dialogMessageInfoDictionary; // x21
  QuestRestrictionInfo_o *v6; // x20
  __int64 v7; // x22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  QuestRestrictionInfo_o *v9; // x0
  int TotalCostRestriction; // w0
  QuestRestrictionInfo_o *v11; // x0
  __int64 v12; // x2
  int32_t FixedServantPositionCount; // w20
  __int64 v14; // x24
  char v15; // w23
  unsigned __int8 v16; // w22
  unsigned __int8 v17; // w25
  struct PartyOrganizationListViewItem_array *v18; // x8
  Il2CppClass **v19; // x8
  Il2CppClass *v20; // x21
  int v21; // w8

  if ( (byte_5933DDD & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5933DDD = 1;
  }
  menuKind = this->fields.menuKind;
  if ( menuKind == 1 )
    goto LABEL_42;
  if ( menuKind == 3 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
LABEL_44:
      sub_21FFECC(questRestrictionInfo, method);
    questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(
                                                       questRestrictionInfo,
                                                       0);
    if ( questRestrictionInfo )
    {
      dialogMessageInfoDictionary = questRestrictionInfo->fields.dialogMessageInfoDictionary;
      v6 = questRestrictionInfo;
      if ( (int)dialogMessageInfoDictionary >= 1 )
      {
        v7 = 0;
        while ( 1 )
        {
          memberList = this->fields.memberList;
          if ( !memberList )
            goto LABEL_44;
          if ( (unsigned int)v7 >= LODWORD(memberList->max_length) )
            goto LABEL_45;
          questRestrictionInfo = (QuestRestrictionInfo_o *)memberList->m_Items[v7];
          if ( !questRestrictionInfo )
            goto LABEL_44;
          questRestrictionInfo = (QuestRestrictionInfo_o *)PartyOrganizationListViewItem__get_BaseServantId(
                                                             (PartyOrganizationListViewItem_o *)questRestrictionInfo,
                                                             0);
          if ( (unsigned int)v7 >= LODWORD(v6->fields.dialogMessageInfoDictionary) )
            goto LABEL_45;
          if ( (_DWORD)questRestrictionInfo != *(&v6->fields.eventId + v7) )
            break;
          if ( (_DWORD)dialogMessageInfoDictionary == (_DWORD)++v7 )
            goto LABEL_42;
        }
        LODWORD(questRestrictionInfo) = 11;
        return (int)questRestrictionInfo;
      }
LABEL_42:
      LODWORD(questRestrictionInfo) = 0;
    }
  }
  else
  {
    v9 = this->fields.questRestrictionInfo;
    if ( v9 )
    {
      TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(v9, 0);
      if ( TotalCostRestriction >= 1 && this->fields.cost > TotalCostRestriction )
      {
        LODWORD(questRestrictionInfo) = 8;
        return (int)questRestrictionInfo;
      }
    }
    LODWORD(questRestrictionInfo) = PartyListViewItem__GetDeckCondition(this, method);
    if ( !(_DWORD)questRestrictionInfo )
    {
      v11 = this->fields.questRestrictionInfo;
      if ( !v11 )
        goto LABEL_42;
      FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(v11, 0);
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      while ( 1 )
      {
        questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v12);
          questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( (int)v14 >= SHIDWORD(questRestrictionInfo->fields.uniqueSvtRestrictionEntity[2].fields.targetVals) )
          break;
        v18 = this->fields.memberList;
        if ( !v18 )
          goto LABEL_44;
        if ( (unsigned int)v14 >= LODWORD(v18->max_length) )
LABEL_45:
          sub_21FFED4(questRestrictionInfo);
        v19 = &v18->obj.klass + v14;
        v20 = v19[4];
        if ( !v20 )
          goto LABEL_44;
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction((PartyOrganizationListViewItem_o *)v19[4], 0) )
        {
          LODWORD(questRestrictionInfo) = 18;
          return (int)questRestrictionInfo;
        }
        ++v14;
        v16 |= BYTE3(v20->_2.cctor_thread) != 0;
        v17 |= BYTE2(v20->_2.cctor_thread) != 0;
        v15 |= BYTE4(v20->_2.cctor_thread) != 0;
        FixedServantPositionCount -= SBYTE6(v20->_2.cctor_thread);
      }
      if ( (v15 & 1) != 0 )
      {
        LODWORD(questRestrictionInfo) = 9;
        return (int)questRestrictionInfo;
      }
      v21 = (v17 & 1) != 0 ? 12 : 13;
      LODWORD(questRestrictionInfo) = FixedServantPositionCount <= 0 ? v21 : 10;
      if ( !((FixedServantPositionCount > 0) | (v17 | v16) & 1) )
        goto LABEL_42;
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
  int32_t v8; // w28
  BalanceConfig_c *v9; // x0
  PartyListViewItem___c__DisplayClass37_0_o *v10; // x21
  System_Func_FollowerInfo__bool__c *v11; // x0
  System_Func_object__bool__o *v12; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  int myServantNumMax; // [xsp+Ch] [xbp-64h]

  v4 = this;
  if ( (byte_5933DCB & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_FollowerInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_21FFC50(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_21FFC50(&Method_PartyListViewItem___c__DisplayClass37_0__GetSupportInitIndex_b__0__);
    this = (PartyListViewItem_o *)sub_21FFC50(&PartyListViewItem___c__DisplayClass37_0_TypeInfo);
    byte_5933DCB = 1;
  }
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_15:
    sub_21FFECC(this, fixNpcFollowerInfoList);
  supportInitIndex = questRestrictionInfo->fields.supportInitIndex;
  if ( supportInitIndex <= 0 )
  {
    v8 = 0;
    myServantNumMax = questRestrictionInfo->fields.myServantNumMax;
    while ( 1 )
    {
      v9 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, fixNpcFollowerInfoList, method);
        v9 = BalanceConfig_TypeInfo;
      }
      if ( v8 >= v9->static_fields->DeckMemberMax )
        break;
      v10 = (PartyListViewItem___c__DisplayClass37_0_o *)sub_21FFEBC(PartyListViewItem___c__DisplayClass37_0_TypeInfo);
      PartyListViewItem___c__DisplayClass37_0___ctor(v10, 0);
      if ( !v10 )
        goto LABEL_15;
      v11 = System_Func_FollowerInfo__bool__TypeInfo;
      v10->fields.chkIdx = ++v8;
      v12 = (System_Func_object__bool__o *)sub_21FFEBC(v11);
      System_Func_object__bool____ctor(
        v12,
        (Il2CppObject *)v10,
        Method_PartyListViewItem___c__DisplayClass37_0__GetSupportInitIndex_b__0__,
        0);
      v13 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)fixNpcFollowerInfoList,
              (System_Func_TSource__bool__o *)v12,
              (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      if ( !System_Linq_Enumerable__Any_object_(
              v13,
              (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
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
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  unsigned int *v12; // x20
  BalanceConfig_c *v13; // x0
  __int64 v14; // x23
  __int64 i; // x24
  unsigned __int64 v16; // x25
  struct PartyOrganizationListViewItem_array *memberList; // x8
  __int64 v18; // x8
  __int64 v19; // x21
  __int64 v20; // x1
  __int64 v22; // x0

  if ( (byte_5933DE9 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&ServantEntity___TypeInfo);
    byte_5933DE9 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v12 = (unsigned int *)sub_21FFD10(ServantEntity___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
  v13 = BalanceConfig_TypeInfo;
  v14 = 4;
  for ( i = 8; ; i += 2 )
  {
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, v5, v6);
      v13 = BalanceConfig_TypeInfo;
    }
    v16 = v14 - 4;
    if ( v14 - 4 >= v13->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_19;
    if ( v16 >= LODWORD(memberList->max_length) )
      goto LABEL_20;
    v18 = *((_QWORD *)&memberList->obj.klass + v14);
    if ( v18 )
    {
      if ( !v12 )
LABEL_19:
        sub_21FFECC(v13, v5);
      v19 = *(_QWORD *)(v18 + 424);
      if ( v19 )
      {
        v13 = (BalanceConfig_c *)sub_21FFDA4(v19, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
        if ( !v13 )
        {
          v22 = sub_21FFEF0(0, v20);
          sub_21FFD90(v22, 0);
        }
      }
      if ( v16 >= v12[6] )
LABEL_20:
        sub_21FFED4(v13);
      *(_QWORD *)&v12[2 * v14] = v19;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12[i], v19, v6, v7, v8, v9, v10, v11);
      v13 = BalanceConfig_TypeInfo;
    }
    ++v14;
  }
  return (ServantEntity_array *)v12;
}


System_String_array *PartyListViewItem__GetSvtNameList(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x20
  _DWORD *SvtNameText; // x0
  __int64 v9; // x22
  __int64 i; // x23
  unsigned __int64 v11; // x24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v13; // x8
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_5933DEB & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    byte_5933DEB = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v7 = sub_21FFD10(string___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
  SvtNameText = BalanceConfig_TypeInfo;
  v9 = 4;
  for ( i = 32; ; i += 8 )
  {
    if ( !SvtNameText[57] )
    {
      j_il2cpp_runtime_class_init_0(SvtNameText, v5, v6);
      SvtNameText = BalanceConfig_TypeInfo;
    }
    v11 = v9 - 4;
    if ( v9 - 4 >= *(int *)(*((_QWORD *)SvtNameText + 23) + 172LL) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( v11 >= LODWORD(memberList->max_length) )
      goto LABEL_18;
    v13 = (PartyOrganizationListViewItem_o *)*((_QWORD *)&memberList->obj.klass + v9);
    if ( v13 )
    {
      SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(v13, 0);
      if ( !v7 )
LABEL_17:
        sub_21FFECC(SvtNameText, v5);
      if ( v11 >= *(unsigned int *)(v7 + 24) )
LABEL_18:
        sub_21FFED4(SvtNameText);
      *(_QWORD *)(v7 + 8 * v9) = SvtNameText;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + i), (int32_t)SvtNameText, v14, v15, v16, v17, v18, v19);
      SvtNameText = BalanceConfig_TypeInfo;
    }
    ++v9;
  }
  return (System_String_array *)v7;
}


int32_t PartyListViewItem__GetTotalCost(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t Entity; // x0
  unsigned int v5; // w25
  int32_t v6; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v8; // x21
  int64_t userServantEntity; // x22
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Master_object; // x23
  __int128 v13; // q1
  int v14; // w8
  int v15; // w22
  int32_t EquipCost; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-80h]

  if ( (byte_5933DE7 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5933DE7 = 1;
  }
  Entity = (int64_t)BalanceConfig_TypeInfo;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    if ( !*(_DWORD *)(Entity + 228) )
    {
      j_il2cpp_runtime_class_init_0(Entity, method, v2);
      Entity = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v5 >= *(_DWORD *)(*(_QWORD *)(Entity + 184) + 172LL) )
      return v6;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_22;
    if ( v5 >= LODWORD(memberList->max_length) )
      sub_21FFED4(Entity);
    v8 = memberList->m_Items[v5];
    if ( !v8 )
LABEL_22:
      sub_21FFECC(Entity, method);
    userServantEntity = (int64_t)v8->fields.userServantEntity;
    if ( userServantEntity )
    {
      if ( !v8->fields._IsDisappearSvt_k__BackingField )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
        v13 = *(_OWORD *)(userServantEntity + 32);
        v14 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)(userServantEntity + 16);
        *(_OWORD *)&v19.fields.fakeValue = v13;
        if ( !v14 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10, v11);
        v18 = v19;
        Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v18, 0);
        if ( !Master_object )
          goto LABEL_22;
        Entity = (int64_t)DataMasterBase_object__object__long___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            Entity,
                            (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
      v15 = *(_DWORD *)(Entity + 28);
      EquipCost = PartyOrganizationListViewItem__get_EquipCost(v8, 0);
      Entity = (int64_t)BalanceConfig_TypeInfo;
      v6 += v15 + (EquipCost & ~(EquipCost >> 31));
    }
    ++v5;
  }
}


PartyOrganizationListViewItem_o *PartyListViewItem__GetUseEquipServant(
        PartyListViewItem_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  PartyListViewItem_o *v4; // x20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  unsigned int v6; // w26
  unsigned int max_length; // w9
  Il2CppClass **v8; // x8
  PartyOrganizationListViewItem_o *v9; // x21
  System_Collections_Generic_List_object__o *equipUserServantEntityList; // x22
  int32_t v11; // w23
  __int64 v12; // x2
  __int128 v13; // q1
  int v14; // w8
  __int64 v15; // x2
  __int128 v16; // q1
  int v17; // w8
  int32_t sortIndex; // w8
  int v19; // w10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+40h] [xbp-70h]

  v4 = this;
  if ( (byte_5933DE4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    this = (PartyListViewItem_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5933DE4 = 1;
  }
  if ( userSvtId >= 1 )
  {
    memberList = v4->fields.memberList;
    if ( !memberList )
      goto LABEL_35;
    v6 = 0;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( (int)v6 >= (int)max_length )
        return 0;
      if ( v6 >= max_length )
        goto LABEL_36;
      v8 = &memberList->obj.klass + (int)v6;
      v9 = (PartyOrganizationListViewItem_o *)v8[4];
      if ( !v9 )
        goto LABEL_35;
      this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                      (PartyOrganizationListViewItem_o *)v8[4],
                                      0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( v9->fields._IsGrandServant_k__BackingField || v9->fields._IsTempGrandServant_k__BackingField )
        {
          equipUserServantEntityList = (System_Collections_Generic_List_object__o *)v9->fields.equipUserServantEntityList;
          if ( !equipUserServantEntityList )
            goto LABEL_35;
          if ( equipUserServantEntityList->fields._size >= 1 )
          {
            v11 = 0;
            while ( 1 )
            {
              this = (PartyListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              equipUserServantEntityList,
                                              v11,
                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
              if ( !this )
                break;
              v13 = *(_OWORD *)&this->fields.sortValue0;
              v14 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
              *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&this->fields.selectNum;
              *(_OWORD *)&v23.fields.fakeValue = v13;
              if ( !v14 )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtId, v12);
              v22 = v23;
              this = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                              &v22,
                                              0);
              if ( this )
              {
                this = (PartyListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                equipUserServantEntityList,
                                                v11,
                                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
                if ( !this )
                  break;
                v16 = *(_OWORD *)&this->fields.sortValue0;
                v17 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
                *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&this->fields.selectNum;
                *(_OWORD *)&v23.fields.fakeValue = v16;
                if ( !v17 )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userSvtId, v15);
                v21 = v23;
                this = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                &v21,
                                                0);
                if ( this == (PartyListViewItem_o *)userSvtId )
                  return v9;
              }
              if ( ++v11 >= equipUserServantEntityList->fields._size )
                goto LABEL_24;
            }
LABEL_35:
            sub_21FFECC(this, userSvtId);
          }
        }
        else
        {
          this = (PartyListViewItem_o *)PartyOrganizationListViewItem__GetEquipList(v9, 0);
          if ( !this )
            goto LABEL_35;
          sortIndex = this->fields.sortIndex;
          if ( sortIndex >= 1 )
          {
            v19 = 0;
            while ( sortIndex != v19 )
            {
              if ( *(&this->fields.sortValue0 + v19) == userSvtId )
                return v9;
              if ( (sortIndex & ~(sortIndex >> 31)) == ++v19 )
                goto LABEL_24;
            }
LABEL_36:
            sub_21FFED4(this);
          }
        }
      }
LABEL_24:
      memberList = v4->fields.memberList;
      ++v6;
      if ( !memberList )
        goto LABEL_35;
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
PartyOrganizationListViewItem_o *PartyListViewItem__GetUseIdenticalEquipServant(
        PartyListViewItem_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  PartyListViewItem_o *v4; // x20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  unsigned int v6; // w25
  unsigned int max_length; // w9
  Il2CppClass **v8; // x8
  PartyOrganizationListViewItem_o *v9; // x21
  __int64 v10; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16

  v4 = this;
  if ( (byte_5933DE5 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5933DE5 = 1;
  }
  if ( svtId >= 1 )
  {
    memberList = v4->fields.memberList;
    if ( !memberList )
LABEL_14:
      sub_21FFECC(this, *(_QWORD *)&svtId);
    v6 = 0;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( (int)v6 >= (int)max_length )
        break;
      if ( v6 >= max_length )
        sub_21FFED4(this);
      v8 = &memberList->obj.klass + (int)v6;
      v9 = (PartyOrganizationListViewItem_o *)v8[4];
      if ( !v9 )
        goto LABEL_14;
      this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_IsEmpty(
                                      (PartyOrganizationListViewItem_o *)v8[4],
                                      0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v9, 0);
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            *(_QWORD *)&EquipSvtId.fields.fakeValue,
            v10);
        this = (PartyListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(EquipSvtId, 0);
        if ( (_DWORD)this == svtId )
          return v9;
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_String_o *deckName; // x1
  int64_t id; // x8
  int32_t index; // w9
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v18; // x23
  int32_t max_length; // w21
  int64_t userEquipId; // x20
  DeckServant_o *v21; // x22
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct PartyOrganizationListViewItem_array *v28; // x24
  int v29; // w25
  unsigned int v30; // w23
  __int64 i; // x28
  PartyOrganizationListViewItem_o *v32; // x22
  __int64 v33; // x21
  __int64 v34; // x2
  unsigned int v35; // w29
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v37; // q1
  int64_t v38; // x0
  bool isFollower; // w8
  System_Int64_array *EquipList; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  __int64 v47; // x8
  _DWORD *v48; // x22
  __int64 v49; // x1
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  __int64 v57; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5933DE1 & 1) == 0 )
  {
    sub_21FFC50(&DeckServantData_TypeInfo);
    sub_21FFC50(&DeckServant_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&UserDeckEntity_TypeInfo);
    byte_5933DE1 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  v5 = sub_21FFEBC(UserDeckEntity_TypeInfo);
  UserDeckEntity___ctor((UserDeckEntity_o *)v5, 0);
  if ( !v5 )
    goto LABEL_27;
  deckName = this->fields.deckName;
  id = this->fields.id;
  index = this->fields.index;
  *(_QWORD *)(v5 + 40) = deckName;
  *(_QWORD *)(v5 + 16) = id;
  *(_DWORD *)(v5 + 32) = index + 1;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)deckName, v8, v9, v10, v11, v12, v13);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_27;
  v18 = baseItem ? baseItem : this;
  max_length = memberList->max_length;
  userEquipId = v18->fields.userEquipId;
  v21 = (DeckServant_o *)sub_21FFEBC(DeckServant_TypeInfo);
  DeckServant___ctor_48649036(v21, max_length, userEquipId, 0);
  *(_QWORD *)(v5 + 48) = v21;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 48), (int32_t)v21, v22, v23, v24, v25, v26, v27);
  v28 = v18->fields.memberList;
  if ( !v28 )
    goto LABEL_27;
  v29 = v28->max_length;
  if ( v29 >= 1 )
  {
    v30 = 0;
    for ( i = 8; ; i += 2 )
    {
      if ( v30 >= LODWORD(v28->max_length) )
LABEL_28:
        sub_21FFED4(v6);
      v32 = *(PartyOrganizationListViewItem_o **)((char *)&v28->obj.klass + i * 4);
      v33 = sub_21FFEBC(DeckServantData_TypeInfo);
      DeckServantData___ctor((DeckServantData_o *)v33, 0);
      if ( !v33 )
        break;
      v35 = v30 + 1;
      *(_DWORD *)(v33 + 16) = v30 + 1;
      if ( !v32 )
        break;
      userServantEntity = v32->fields.userServantEntity;
      if ( userServantEntity )
      {
        v37 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v59.fields.fakeValue = v37;
      }
      else
      {
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v34);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v59, 0, 0);
      }
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v34);
      v58 = v59;
      v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v58, 0);
      isFollower = v32->fields.isFollower;
      *(_QWORD *)(v33 + 24) = v38;
      *(_BYTE *)(v33 + 56) = isFollower;
      EquipList = PartyOrganizationListViewItem__GetEquipList(v32, 0);
      *(_QWORD *)(v33 + 40) = EquipList;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v33 + 40), (int32_t)EquipList, v41, v42, v43, v44, v45, v46);
      v47 = *(_QWORD *)(v5 + 48);
      *(_DWORD *)(v33 + 76) = v32->fields._InitPos_k__BackingField;
      if ( !v47 )
        break;
      v48 = *(_DWORD **)(v47 + 16);
      if ( !v48 )
        break;
      v6 = sub_21FFDA4(v33, *(_QWORD *)(*(_QWORD *)v48 + 64LL));
      if ( !v6 )
      {
        v57 = sub_21FFEF0(0, v49);
        sub_21FFD90(v57, 0);
      }
      if ( v30 >= v48[6] )
        goto LABEL_28;
      *(_QWORD *)&v48[i] = v33;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v48[i], v33, v50, v51, v52, v53, v54, v55);
      ++v30;
      if ( v35 == v29 )
        return (UserDeckEntity_o *)v5;
    }
LABEL_27:
    sub_21FFECC(v6, v7);
  }
  return (UserDeckEntity_o *)v5;
}


UserEventDeckEntity_o *PartyListViewItem__GetUserEventDeck(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  NetworkManager_c *IsUseOldMaster; // x0
  int32_t index; // w9
  int64_t id; // x10
  struct PartyOrganizationListViewItem_array *memberList; // x22
  int64_t userEquipId; // x21
  DeckServant_o *v11; // x0
  int32_t max_length; // w1
  DeckServant_o *v13; // x22
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct PartyOrganizationListViewItem_array *v20; // x8
  unsigned __int64 v21; // x28
  unsigned __int64 max_length_low; // x9
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  PartyOrganizationListViewItem_o *v24; // x22
  struct QuestRestrictionInfo_o *v25; // x8
  bool isNpcEditablePos; // w24
  bool IsEditablePos; // w0
  __int64 v28; // x23
  __int64 v29; // x2
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v31; // q1
  int64_t v32; // x0
  bool isFollower; // w8
  System_Int64_array *EquipList; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int32_t InitPos_k__BackingField; // w8
  __int64 v42; // x9
  __int64 v43; // x8
  unsigned int *v44; // x22
  __int64 v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  unsigned int *v52; // x0
  _BOOL4 isFixNpc; // w9
  __int64 v55; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5933DE2 & 1) == 0 )
  {
    sub_21FFC50(&DeckServantData_TypeInfo);
    sub_21FFC50(&DeckServant_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&UserEventDeckEntity_TypeInfo);
    byte_5933DE2 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  v3 = sub_21FFEBC(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor((UserEventDeckEntity_o *)v3, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  IsUseOldMaster = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
    IsUseOldMaster = NetworkManager_TypeInfo;
  }
  if ( !v3 )
    goto LABEL_53;
  index = this->fields.index;
  memberList = this->fields.memberList;
  id = this->fields.id;
  *(_QWORD *)(v3 + 16) = IsUseOldMaster->static_fields->userIdNumber;
  *(_DWORD *)(v3 + 24) = id;
  *(_DWORD *)(v3 + 28) = index + 1;
  if ( !memberList )
    goto LABEL_53;
  userEquipId = this->fields.userEquipId;
  v11 = (DeckServant_o *)sub_21FFEBC(DeckServant_TypeInfo);
  max_length = memberList->max_length;
  v13 = v11;
  DeckServant___ctor_48649036(v11, max_length, userEquipId, 0);
  *(_QWORD *)(v3 + 32) = v13;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)v13, v14, v15, v16, v17, v18, v19);
  v20 = this->fields.memberList;
  if ( !v20 )
LABEL_53:
    sub_21FFECC(IsUseOldMaster, v4);
  v21 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(v20->max_length);
    if ( (__int64)v21 >= (int)max_length_low )
      return (UserEventDeckEntity_o *)v3;
    if ( v21 >= max_length_low )
      goto LABEL_54;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v24 = v20->m_Items[v21];
    if ( questRestrictionInfo )
    {
      IsUseOldMaster = (NetworkManager_c *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0);
      v25 = this->fields.questRestrictionInfo;
      if ( ((unsigned __int8)IsUseOldMaster & 1) != 0 )
      {
        if ( !v25 )
          goto LABEL_53;
        isNpcEditablePos = v25->fields.isNpcEditablePos;
      }
      else
      {
        if ( !v24 || !v25 )
          goto LABEL_53;
        IsEditablePos = QuestRestrictionInfo__IsEditablePos(
                          this->fields.questRestrictionInfo,
                          v24->fields._InitPos_k__BackingField,
                          0);
        v25 = this->fields.questRestrictionInfo;
        isNpcEditablePos = IsEditablePos;
        if ( !v25 )
          goto LABEL_28;
      }
      IsUseOldMaster = (NetworkManager_c *)QuestRestrictionInfo__IsNpcMulitipleOrOnly(v25, 0);
      if ( ((unsigned __int8)IsUseOldMaster & 1) != 0 )
      {
        if ( !v24 )
          goto LABEL_53;
        if ( v24->fields.isFixNpc
          && v24->fields.isFollower
          && !v24->fields.isMyServantOrNpcRestriction
          && !isNpcEditablePos )
        {
          ++v21;
          goto LABEL_43;
        }
      }
    }
    else
    {
      isNpcEditablePos = 0;
    }
LABEL_28:
    v28 = sub_21FFEBC(DeckServantData_TypeInfo);
    DeckServantData___ctor((DeckServantData_o *)v28, 0);
    if ( !v28 )
      goto LABEL_53;
    *(_DWORD *)(v28 + 16) = v21 + 1;
    if ( !v24 )
      goto LABEL_53;
    userServantEntity = v24->fields.userServantEntity;
    if ( userServantEntity )
    {
      v31 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v57.fields.fakeValue = v31;
    }
    else
    {
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v29);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v57, 0, 0);
    }
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v29);
    v56 = v57;
    v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v56, 0);
    isFollower = v24->fields.isFollower;
    *(_QWORD *)(v28 + 24) = v32;
    *(_BYTE *)(v28 + 56) = isFollower;
    EquipList = PartyOrganizationListViewItem__GetEquipList(v24, 0);
    *(_QWORD *)(v28 + 40) = EquipList;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 40), (int32_t)EquipList, v35, v36, v37, v38, v39, v40);
    InitPos_k__BackingField = v24->fields._InitPos_k__BackingField;
    v42 = *(_QWORD *)(v28 + 24);
    *(_QWORD *)(v28 + 64) = 0;
    *(_DWORD *)(v28 + 76) = InitPos_k__BackingField;
    if ( !v42 )
    {
      if ( v24->fields.isMyServantOrNpcRestriction )
      {
        if ( v24->fields.isFollower )
          *(_QWORD *)(v28 + 64) = v24->fields.npcFollowerSvtId;
      }
      else if ( !v24->fields.isMyServantOrNpcRestriction && isNpcEditablePos )
      {
        isFixNpc = v24->fields.isFixNpc;
        *(_QWORD *)(v28 + 64) = v24->fields.npcFollowerSvtId;
        if ( isFixNpc )
          *(_BYTE *)(v28 + 56) = 0;
      }
    }
    v43 = *(_QWORD *)(v3 + 32);
    *(_DWORD *)(v28 + 80) = v24->fields._EquipFriendShipSkillChange_k__BackingField;
    if ( !v43 )
      goto LABEL_53;
    v44 = *(unsigned int **)(v43 + 16);
    if ( !v44 )
      goto LABEL_53;
    IsUseOldMaster = (NetworkManager_c *)sub_21FFDA4(v28, *(_QWORD *)(*(_QWORD *)v44 + 64LL));
    if ( !IsUseOldMaster )
    {
      v55 = sub_21FFEF0(0, v45);
      sub_21FFD90(v55, 0);
    }
    if ( v21 >= v44[6] )
LABEL_54:
      sub_21FFED4(IsUseOldMaster);
    v52 = &v44[2 * v21];
    *((_QWORD *)v52 + 4) = v28;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v52 + 8), v28, v46, v47, v48, v49, v50, v51);
    ++v21;
LABEL_43:
    v20 = this->fields.memberList;
    if ( !v20 )
      goto LABEL_53;
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

  if ( (byte_5933DC9 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5933DC9 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, userServantList, npcSvtIds);
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
        sub_21FFECC(v6, userServantList);
      if ( i >= LODWORD(npcSvtIds->max_length) )
LABEL_17:
        sub_21FFED4(v6);
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
  unsigned int v13; // w23
  __int64 v14; // x27
  unsigned int max_length; // w9
  il2cpp_array_size_t v16; // x8
  System_Int64_array *v17; // x24
  unsigned __int64 v18; // x25

  if ( (byte_5933DE3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__TryAdd__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    byte_5933DE3 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_int__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v9,
    (const MethodInfo_3F5EAD4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( userSvtId >= 1 )
  {
    memberList = this->fields.memberList;
    if ( !memberList )
LABEL_20:
      sub_21FFECC(EquipList, v11);
    v13 = 0;
    v14 = (unsigned int)editEquipIndex;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( (int)v13 >= (int)max_length )
        break;
      if ( v13 >= max_length )
LABEL_22:
        sub_21FFED4(EquipList);
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
                  goto LABEL_22;
                if ( v17->m_Items[v18] == userSvtId )
                {
                  if ( !v9 )
                    goto LABEL_20;
                  EquipList = (System_Int64_array *)System_Collections_Generic_Dictionary_int__int___TryAdd(
                                                      v9,
                                                      v13,
                                                      v18,
                                                      (const MethodInfo_3F60E4C *)Method_System_Collections_Generic_Dictionary_int__int__TryAdd__);
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
      goto LABEL_20;
    }
  }
  return v9;
}


bool PartyListViewItem__IsDeckEmpty(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  __int64 v5; // x21
  int v6; // w9
  int DeckMemberMax; // w8
  struct PartyOrganizationListViewItem_array *memberList; // x10
  PartyOrganizationListViewItem_o *v9; // x10

  if ( (byte_5933DD6 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5933DD6 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  v5 = 0;
  do
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      v4 = BalanceConfig_TypeInfo;
    }
    v6 = v5;
    DeckMemberMax = v4->static_fields->DeckMemberMax;
    if ( (int)v5 >= DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_12;
    if ( (unsigned int)v5 >= LODWORD(memberList->max_length) )
      sub_21FFED4(v4);
    v9 = memberList->m_Items[v5];
    if ( !v9 )
LABEL_12:
      sub_21FFECC(v4, method);
    ++v5;
  }
  while ( !v9->fields.userServantEntity );
  return v6 >= DeckMemberMax;
}


bool PartyListViewItem__IsDeckInit(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  __int64 i; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v7; // x8
  System_String_o *deckName; // x20
  System_String_o *DefaultDeckName; // x1

  if ( (byte_5933DD5 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5933DD5 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( (int)i >= v4->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_15;
    if ( (unsigned int)i >= LODWORD(memberList->max_length) )
      sub_21FFED4(v4);
    v7 = memberList->m_Items[i];
    if ( !v7 )
LABEL_15:
      sub_21FFECC(v4, method);
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

  if ( (byte_5933DEF & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5933DEF = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      v4 = BalanceConfig_TypeInfo;
    }
    DeckMemberMax = v4->static_fields->DeckMemberMax;
    if ( i >= DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      sub_21FFECC(v4, method);
    if ( i >= (unsigned __int64)LODWORD(memberList->max_length) )
      sub_21FFED4(v4);
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
  __int64 v4; // x21
  PartyOrganizationListViewItem_o *v5; // x0
  int v6; // w23
  int totalCostRestrictionEntity_high; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8

  if ( (byte_5933DD7 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5933DD7 = 1;
  }
  v4 = 0;
  do
  {
    v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
      v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    v6 = v4;
    totalCostRestrictionEntity_high = HIDWORD(v5->fields.questRestrictionInfo->fields.totalCostRestrictionEntity);
    if ( (int)v4 >= totalCostRestrictionEntity_high )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_12;
    if ( (unsigned int)v4 >= LODWORD(memberList->max_length) )
      sub_21FFED4(v5);
    v5 = memberList->m_Items[v4];
    if ( !v5 )
LABEL_12:
      sub_21FFECC(v5, method);
    ++v4;
  }
  while ( PartyOrganizationListViewItem__get_EquipUserSvtId(v5, 0) <= 0 );
  return v6 >= totalCostRestrictionEntity_high;
}


// local variable allocation has failed, the output may be wrong!
bool PartyListViewItem__IsIdenticalEquipMember(PartyListViewItem_o *this, int32_t svtId, const MethodInfo *method)
{
  PartyListViewItem_o *v4; // x20
  struct PartyOrganizationListViewItem_array *memberList; // x22
  int max_length; // w8
  unsigned int v7; // w24
  __int64 v8; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  bool v10; // zf

  v4 = this;
  if ( (byte_5933DE6 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5933DE6 = 1;
  }
  if ( svtId >= 1 )
  {
    memberList = v4->fields.memberList;
    if ( !memberList )
      goto LABEL_16;
    max_length = memberList->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( v7 >= max_length )
          sub_21FFED4(this);
        this = (PartyListViewItem_o *)memberList->m_Items[v7];
        if ( !this )
          break;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)this, 0);
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            *(_QWORD *)&EquipSvtId.fields.fakeValue,
            v8);
        v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(EquipSvtId, 0) == svtId;
        this = (PartyListViewItem_o *)v10;
        if ( !v10 )
        {
          max_length = memberList->max_length;
          if ( (int)++v7 < max_length )
            continue;
        }
        return (char)this;
      }
LABEL_16:
      sub_21FFECC(this, *(_QWORD *)&svtId);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_UserServantEntity__o *IsGrandRelatedRestriction; // x0
  Il2CppObject *userServantEntity; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x21
  int max_length; // w8
  int v16; // w22
  char v17; // w25
  char v18; // w24
  PartyOrganizationListViewItem_o *v19; // x20
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  char v30; // w8

  if ( (byte_5933DF7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    byte_5933DF7 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  *confirmSvtList = (System_Collections_Generic_List_UserServantEntity__o *)v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)confirmSvtList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  memberList = this->fields.memberList;
  if ( !memberList )
LABEL_23:
    sub_21FFECC(IsGrandRelatedRestriction, userServantEntity);
  max_length = memberList->max_length;
  if ( max_length < 1 )
  {
    v30 = 0;
  }
  else
  {
    v16 = 0;
    v17 = 0;
    v18 = 0;
    do
    {
      if ( v16 >= (unsigned int)max_length )
        sub_21FFED4(IsGrandRelatedRestriction);
      v19 = memberList->m_Items[v16];
      if ( !v19 )
        goto LABEL_23;
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
              goto LABEL_23;
            items = (struct System_Object_array *)IsGrandRelatedRestriction->fields._items;
            userServantEntity = (Il2CppObject *)v19->fields.userServantEntity;
            v27 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++IsGrandRelatedRestriction->fields._version;
            if ( !items )
              goto LABEL_23;
            size = IsGrandRelatedRestriction->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)IsGrandRelatedRestriction,
                userServantEntity,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = &items->obj.klass + size;
              IsGrandRelatedRestriction->fields._size = size + 1;
              v29[4] = (Il2CppClass *)userServantEntity;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)(v29 + 4),
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
      ++v16;
    }
    while ( v16 < max_length );
    v30 = v17 & v18;
  }
  return v30 & 1;
}


bool PartyListViewItem__IsNeedDeckPosReset(
        PartyListViewItem_o *this,
        UserEventDeckEntity_o *deck,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v6; // x2
  struct QuestRestrictionInfo_o *v7; // x8
  System_Object_array *v8; // x21
  struct QuestRestrictionInfo_o *v9; // x8
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_TSource__o *QuestFollowerList; // x21
  PartyListViewItem___c_c *v13; // x8
  struct PartyListViewItem___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__33_0; // x22
  Il2CppObject *v16; // x23
  struct PartyListViewItem___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  __int64 v25; // x2
  bool IsUseOldMaster; // w22
  signed __int64 i; // x29
  BalanceConfig_c *v28; // x0
  signed __int64 DeckMemberMax; // x26
  __int64 v30; // x24
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v39; // x1
  __int64 v40; // x23
  System_Func_object__bool__o *v41; // x25

  if ( (byte_5933DC8 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_BasicHelper_Any_FollowerInfo____91484944);
    sub_21FFC50(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_21FFC50(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_21FFC50(&Method_PartyListViewItem___c__IsNeedDeckPosReset_b__33_0__);
    sub_21FFC50(&Method_PartyListViewItem___c__DisplayClass33_0__IsNeedDeckPosReset_b__1__);
    sub_21FFC50(&PartyListViewItem___c__DisplayClass33_0_TypeInfo);
    sub_21FFC50(&PartyListViewItem___c_TypeInfo);
    byte_5933DC8 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_47;
  questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsNpcMulitipleOrOnly(questRestrictionInfo, 0);
  v7 = this->fields.questRestrictionInfo;
  if ( ((unsigned __int8)questRestrictionInfo & 1) == 0 )
  {
    v8 = 0;
    if ( v7 )
      goto LABEL_21;
LABEL_47:
    sub_21FFECC(questRestrictionInfo, deck);
  }
  if ( !v7 )
    goto LABEL_47;
  if ( !v7->fields.isNpcEditablePos )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, deck, v6);
    questRestrictionInfo = (QuestRestrictionInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
    v9 = this->fields.questRestrictionInfo;
    if ( v9 && questRestrictionInfo )
    {
      QuestFollowerList = (System_Collections_Generic_IEnumerable_TSource__o *)NpcFollowerMaster__GetQuestFollowerList(
                                                                                 (NpcFollowerMaster_o *)questRestrictionInfo,
                                                                                 v9->fields.questId,
                                                                                 v9->fields.questPhase,
                                                                                 0);
      v13 = PartyListViewItem___c_TypeInfo;
      if ( !*(&PartyListViewItem___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(PartyListViewItem___c_TypeInfo, v10, v11);
        v13 = PartyListViewItem___c_TypeInfo;
      }
      static_fields = v13->static_fields;
      _9__33_0 = (System_Func_object__bool__o *)static_fields->__9__33_0;
      if ( !_9__33_0 )
      {
        if ( !*(&v13->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v13, v10, v11);
          static_fields = PartyListViewItem___c_TypeInfo->static_fields;
        }
        v16 = (Il2CppObject *)static_fields->__9;
        _9__33_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__33_0, v16, Method_PartyListViewItem___c__IsNeedDeckPosReset_b__33_0__, 0);
        v17 = PartyListViewItem___c_TypeInfo->static_fields;
        v17->__9__33_0 = (struct System_Func_FollowerInfo__bool__o *)_9__33_0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v17->__9__33_0,
          (int32_t)_9__33_0,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
      }
      v24 = System_Linq_Enumerable__Where_object_(
              QuestFollowerList,
              (System_Func_TSource__bool__o *)_9__33_0,
              (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      questRestrictionInfo = (QuestRestrictionInfo_o *)System_Linq_Enumerable__ToArray_object_(
                                                         v24,
                                                         (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
      v7 = this->fields.questRestrictionInfo;
      v8 = (System_Object_array *)questRestrictionInfo;
      if ( v7 )
        goto LABEL_21;
    }
    goto LABEL_47;
  }
  v8 = 0;
LABEL_21:
  IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(v7, 0);
  for ( i = 0; ; ++i )
  {
    v28 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, deck, v25);
      v28 = BalanceConfig_TypeInfo;
    }
    DeckMemberMax = v28->static_fields->DeckMemberMax;
    if ( i >= DeckMemberMax )
      break;
    v30 = sub_21FFEBC(PartyListViewItem___c__DisplayClass33_0_TypeInfo);
    PartyListViewItem___c__DisplayClass33_0___ctor((PartyListViewItem___c__DisplayClass33_0_o *)v30, 0);
    if ( !deck )
      goto LABEL_47;
    deckInfo = deck->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_47;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_47;
    if ( i >= (unsigned __int64)LODWORD(svts->max_length) )
      sub_21FFED4(questRestrictionInfo);
    if ( !v30 )
      goto LABEL_47;
    v39 = svts->m_Items[i];
    *(_QWORD *)(v30 + 16) = v39;
    v40 = v30 + 16;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 16), (int32_t)v39, v31, v32, v33, v34, v35, v36);
    if ( IsUseOldMaster )
    {
      if ( !v8
        || (v41 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_FollowerInfo__bool__TypeInfo),
            System_Func_object__bool____ctor(
              v41,
              (Il2CppObject *)v30,
              Method_PartyListViewItem___c__DisplayClass33_0__IsNeedDeckPosReset_b__1__,
              0),
            questRestrictionInfo = (QuestRestrictionInfo_o *)BasicHelper__Any_object__58575580(
                                                               v8,
                                                               (System_Func_T__bool__o *)v41,
                                                               (const MethodInfo_37DCADC *)Method_BasicHelper_Any_FollowerInfo____91484944),
            ((unsigned __int8)questRestrictionInfo & 1) != 0) )
      {
        if ( !*(_QWORD *)v40 )
          goto LABEL_47;
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_47;
        questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsMyServantOrNpcRestriction_50479840(
                                                           questRestrictionInfo,
                                                           *(_DWORD *)(*(_QWORD *)v40 + 76LL),
                                                           0);
        if ( ((unsigned __int8)questRestrictionInfo & 1) == 0 )
          continue;
        if ( !*(_QWORD *)v40 )
          goto LABEL_47;
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_47;
        questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsGrandServantRestriction(
                                                           questRestrictionInfo,
                                                           *(_DWORD *)(*(_QWORD *)v40 + 76LL),
                                                           0);
        if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
          continue;
      }
    }
    else
    {
      if ( !*(_QWORD *)v40 )
        goto LABEL_47;
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_47;
      questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsEditablePos(
                                                         questRestrictionInfo,
                                                         *(_DWORD *)(*(_QWORD *)v40 + 76LL),
                                                         0);
      if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
        continue;
    }
    if ( !*(_QWORD *)v40 )
      goto LABEL_47;
    if ( *(_DWORD *)(*(_QWORD *)v40 + 76LL) != *(_DWORD *)(*(_QWORD *)v40 + 16LL) )
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
  __int64 v10; // x2
  BalanceConfig_c *v11; // x0
  __int64 v12; // x2
  BalanceConfig_c *v13; // x0

  if ( (byte_5933DE0 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5933DE0 = 1;
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
    v11 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, userServantEntity, v10);
      v11 = BalanceConfig_TypeInfo;
    }
    if ( v11->static_fields->SvtEquipMax == LODWORD(equipIdList->max_length) )
      return 1;
  }
  questRestrictionInfo = (QuestRestrictionInfo_o *)UserServantEntity__IsGrandServant(userServantEntity, 0);
  if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
    return 0;
  if ( !equipIdList )
LABEL_18:
    sub_21FFECC(questRestrictionInfo, userServantEntity);
  v13 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, userServantEntity, v12);
    v13 = BalanceConfig_TypeInfo;
  }
  return v13->static_fields->GrandSvtEquipMax == LODWORD(equipIdList->max_length);
}


bool PartyListViewItem__IsSpecificMenuKind(PartyListViewItem_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    LOBYTE(questRestrictionInfo) = questRestrictionInfo->fields.eventDeckNum > 0;
  if ( (unsigned int)(this->fields.menuKind - 1) < 7 )
    return 1;
  else
    return (char)questRestrictionInfo;
}


bool PartyListViewItem__IsSpecificMenuKind_40784260(int32_t menuKind, bool isEventDeck, const MethodInfo *method)
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


// local variable allocation has failed, the output may be wrong!
void PartyListViewItem__Modify(PartyListViewItem_o *this, bool otherValidEventIdFilter, const MethodInfo *method)
{
  __int64 v5; // x22
  int32_t i; // w8
  BalanceConfig_c *v7; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v9; // x8
  PartyOrganizationListViewItem_o *v10; // x21
  PartyOrganizationListViewItem_o *v11; // x0
  int32_t cost; // w24
  const MethodInfo *v13; // x2

  if ( (byte_5933DCE & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5933DCE = 1;
  }
  v5 = 0;
  for ( i = 0; ; i = PartyOrganizationListViewItem__get_MargeCost(v10, 0) + cost )
  {
    v7 = BalanceConfig_TypeInfo;
    this->fields.cost = i;
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, otherValidEventIdFilter, method);
      v7 = BalanceConfig_TypeInfo;
    }
    if ( (int)v5 >= v7->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_12;
    if ( (unsigned int)v5 >= LODWORD(memberList->max_length) )
      sub_21FFED4(v7);
    v9 = &memberList->obj.klass + v5;
    v10 = (PartyOrganizationListViewItem_o *)v9[4];
    if ( !v10 )
LABEL_12:
      sub_21FFECC(v7, otherValidEventIdFilter);
    ++v5;
    v11 = (PartyOrganizationListViewItem_o *)v9[4];
    v10->fields._NowPos_k__BackingField = v5;
    PartyOrganizationListViewItem__Modify(v11, 0);
    cost = this->fields.cost;
  }
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)otherValidEventIdFilter);
  PartyListViewItem__UpdateEventEffect(this, otherValidEventIdFilter, v13);
}


void PartyListViewItem__Set(PartyListViewItem_o *this, PartyListViewItem_o *item, const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct EventUpValSetupInfo_o *setupInfo; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x2
  int32_t MaxCost; // w0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int64_t id; // x8
  int v30; // w23
  unsigned int v31; // w24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v33; // x26
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  PartyOrganizationListViewItem_o *v40; // x21
  __int64 v41; // x1
  Il2CppClass **v42; // x0
  struct PartyOrganizationListViewItem_array *v43; // x8
  PartyOrganizationListViewItem_o *v44; // x8
  bool isDeckNameDefault; // w9
  struct System_String_o *deckName; // x1
  struct System_Int32_array *waveBattleEnemyClassIds; // x1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct System_Int32_array *trendDispWaveBattleEnemyClassIds; // x1
  struct System_Int32_array **p_trendDispWaveBattleEnemyClassIds; // x20
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  __int64 v62; // x0

  if ( (byte_5933DCF & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5933DCF = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0);
  if ( !item )
LABEL_20:
    sub_21FFECC(v5, v6);
  setupInfo = item->fields.setupInfo;
  *(_QWORD *)&this->fields.menuKind = *(_QWORD *)&item->fields.menuKind;
  this->fields.setupInfo = setupInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
    (int32_t)setupInfo,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  MaxCost = PartyListViewItem__GetMaxCost(this, this->fields.maxCost, v21);
  id = item->fields.id;
  this->fields.maxCost = MaxCost;
  v30 = 1;
  this->fields.id = id;
  while ( 1 )
  {
    v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v23);
      v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    v31 = v30 - 1;
    if ( v30 - 1 >= SHIDWORD(v5->fields.questRestrictionInfo->fields.totalCostRestrictionEntity) )
      break;
    memberList = item->fields.memberList;
    if ( !memberList )
      goto LABEL_20;
    if ( v31 >= LODWORD(memberList->max_length) )
      goto LABEL_21;
    v5 = memberList->m_Items[v31];
    if ( !v5 )
      goto LABEL_20;
    v33 = this->fields.memberList;
    v5 = PartyOrganizationListViewItem__Clone(v5, -1, 0);
    if ( !v33 )
      goto LABEL_20;
    v40 = v5;
    if ( v5 )
    {
      v5 = (PartyOrganizationListViewItem_o *)sub_21FFDA4(v5, v33->obj.klass->_1.element_class);
      if ( !v5 )
      {
        v62 = sub_21FFEF0(0, v41);
        sub_21FFD90(v62, 0);
      }
    }
    if ( v31 >= LODWORD(v33->max_length) )
      goto LABEL_21;
    v42 = &v33->obj.klass + (int)v31;
    v42[4] = (Il2CppClass *)v40;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v42 + 4), (int32_t)v40, v34, v35, v36, v37, v38, v39);
    v43 = this->fields.memberList;
    if ( !v43 )
      goto LABEL_20;
    if ( v31 >= LODWORD(v43->max_length) )
LABEL_21:
      sub_21FFED4(v5);
    v44 = v43->m_Items[v31];
    if ( !v44 )
      goto LABEL_20;
    v44->fields._NowPos_k__BackingField = v30++;
  }
  isDeckNameDefault = item->fields.isDeckNameDefault;
  deckName = item->fields.deckName;
  this->fields.cost = item->fields.cost;
  this->fields.isDeckNameDefault = isDeckNameDefault;
  this->fields.deckName = deckName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.deckName,
    (int32_t)deckName,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  waveBattleEnemyClassIds = item->fields.waveBattleEnemyClassIds;
  this->fields.userEquipId = item->fields.userEquipId;
  this->fields.waveBattleEnemyClassIds = waveBattleEnemyClassIds;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.waveBattleEnemyClassIds,
    (int32_t)waveBattleEnemyClassIds,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  trendDispWaveBattleEnemyClassIds = item->fields.trendDispWaveBattleEnemyClassIds;
  this->fields.trendDispWaveBattleEnemyClassIds = trendDispWaveBattleEnemyClassIds;
  p_trendDispWaveBattleEnemyClassIds = &this->fields.trendDispWaveBattleEnemyClassIds;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)p_trendDispWaveBattleEnemyClassIds,
    (int32_t)trendDispWaveBattleEnemyClassIds,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  *((_WORD *)p_trendDispWaveBattleEnemyClassIds + 4) = *(_WORD *)&item->fields._IsWaveBattleRestart_k__BackingField;
}


void PartyListViewItem__SetDeckName(PartyListViewItem_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_String_o *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_String_o *DefaultDeckName; // x0
  int32_t v14; // w1
  struct System_String_o **p_deckName; // x0

  if ( System_String__IsNullOrEmpty(name, 0)
    || (v6 = PartyListViewItem__get_DefaultDeckName(this, v5), System_String__op_Equality(name, v6, 0)) )
  {
    this->fields.isDeckNameDefault = 1;
    DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v5);
    v14 = (int)DefaultDeckName;
    this->fields.deckName = DefaultDeckName;
    p_deckName = &this->fields.deckName;
  }
  else
  {
    this->fields.deckName = name;
    p_deckName = &this->fields.deckName;
    v14 = (int)name;
    this->fields.isDeckNameDefault = 0;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_deckName, v14, v7, v8, v9, v10, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewItem__SetEquip(
        PartyListViewItem_o *this,
        int32_t num,
        int64_t userSvtId,
        int32_t equipFrameIndex,
        const MethodInfo *method)
{
  unsigned __int64 v9; // x23
  __int64 v10; // x25
  BalanceConfig_c *v11; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v13; // x8
  PartyOrganizationListViewItem_o *v14; // x22
  int32_t cost; // w26
  int32_t v16; // w26
  int32_t v17; // w8
  int32_t v18; // w26

  if ( (byte_5933DD0 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5933DD0 = 1;
  }
  v9 = 0;
  v10 = (unsigned int)num;
  while ( 1 )
  {
    v11 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&num, userSvtId);
      v11 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v9 >= v11->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_16;
    if ( v9 >= LODWORD(memberList->max_length) )
      sub_21FFED4(v11);
    v13 = &memberList->obj.klass + v9;
    v14 = (PartyOrganizationListViewItem_o *)v13[4];
    if ( v10 == v9 )
    {
      if ( !v14 )
        goto LABEL_16;
      cost = this->fields.cost;
      this->fields.cost = cost
                        - PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)v13[4], 0);
      PartyOrganizationListViewItem__SetEquipUserServantId(v14, userSvtId, equipFrameIndex, 0);
      v16 = this->fields.cost;
      v17 = PartyOrganizationListViewItem__get_MargeCost(v14, 0) + v16;
    }
    else
    {
      if ( !v14 )
LABEL_16:
        sub_21FFECC(v11, *(_QWORD *)&num);
      v18 = this->fields.cost;
      v17 = v18
          - PartyOrganizationListViewItem__RemoveEquipUserServantId(
              (PartyOrganizationListViewItem_o *)v13[4],
              userSvtId,
              0);
    }
    ++v9;
    this->fields.cost = v17;
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
  int32_t i; // w25
  BalanceConfig_c *v10; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v12; // x8
  PartyOrganizationListViewItem_o *v13; // x23
  int32_t cost; // w26
  int32_t v15; // w26
  int32_t v16; // w26

  if ( (byte_5933DD1 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5933DD1 = 1;
  }
  for ( i = 0; ; ++i )
  {
    v10 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&num, userSvtId);
      v10 = BalanceConfig_TypeInfo;
    }
    if ( i >= v10->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_14;
    if ( (unsigned int)i >= LODWORD(memberList->max_length) )
      sub_21FFED4(v10);
    v12 = &memberList->obj.klass + i;
    v13 = (PartyOrganizationListViewItem_o *)v12[4];
    if ( !v13 )
LABEL_14:
      sub_21FFECC(v10, *(_QWORD *)&num);
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
  int32_t v13; // w21

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
    sub_21FFECC(this, *(_QWORD *)&num);
  }
  if ( LODWORD(v12->max_length) <= num )
LABEL_12:
    sub_21FFED4(this);
  this = (PartyListViewItem_o *)v12->m_Items[num];
  if ( !this )
    goto LABEL_11;
  v13 = v7->fields.cost;
  LODWORD(this->fields.userEquipId) = isChangeFriendShipSkill;
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
  __int64 v15; // x2
  UserServantEntity_o *v16; // x8
  UserServantGrandMaster_o *v17; // x22
  __int64 v18; // x23
  __int64 v19; // x24
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UserServantEntity_o *v26; // x8
  UserServantGrandMaster_o *v27; // x22
  __int128 v28; // q1
  __int64 v29; // x19
  __int64 v30; // x1
  __int64 v31; // x2
  Il2CppObject *Entity; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  RestrictionEntity_o *GrandServantRestrictionEntity; // x0
  const MethodInfo *v40; // x5
  __int64 v41; // x1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  UserServantEntity_o *v48; // x8
  __int64 v49; // x21
  __int64 v50; // x22
  int32_t v51; // w21
  int32_t v52; // w1
  __int64 v53; // x1
  __int64 v54; // x2
  BalanceConfig_c *v55; // x0
  System_Int64_array *v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+20h] [xbp-70h]
  int32_t isChangeFriendShipSvtEquipSkilla; // [xsp+44h] [xbp-4Ch] BYREF
  System_Int64_array *equipIdLista; // [xsp+48h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_5933DDA & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&long___TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5933DDA = 1;
  }
  v13 = *userServantEntity;
  equipIdLista = 0;
  isChangeFriendShipSvtEquipSkilla = 0;
  if ( isMyServantOrSupport )
  {
    if ( v13 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&initPos, isMyServantOrSupport);
      Master_object = (UserServantGrandMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
      v16 = *userServantEntity;
      if ( !*userServantEntity )
        goto LABEL_33;
      v17 = Master_object;
      v18 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&initPos, v15);
      *(_QWORD *)&v67.fields.currentCryptoKey = v18;
      *(_QWORD *)&v67.fields.fakeValue = v19;
      Master_object = (UserServantGrandMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                    v67,
                                                    0);
      if ( !v17 )
        goto LABEL_33;
      Master_object = (UserServantGrandMaster_o *)UserServantGrandMaster__GetEntityFromSvtId(
                                                    v17,
                                                    (int32_t)Master_object,
                                                    0);
      if ( Master_object )
      {
        v26 = *userServantEntity;
        if ( !*userServantEntity )
          goto LABEL_33;
        v27 = Master_object;
        v28 = *(_OWORD *)&v26->fields.id.fields.fakeValue;
        v29 = *(_QWORD *)&Master_object->fields.revision;
        *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&v26->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v64.fields.fakeValue = v28;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
            *(_QWORD *)&initPos,
            v20);
        v63 = v64;
        if ( v29 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v63, 0) )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30, v31);
          Master_object = (UserServantGrandMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
          if ( Master_object )
          {
            Entity = DataMasterBase_object__object__long___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                       *(_QWORD *)&v27->fields.revision,
                       (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            *userServantEntity = (UserServantEntity_o *)Entity;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)userServantEntity,
              (int32_t)Entity,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38);
            return;
          }
LABEL_33:
          sub_21FFECC(Master_object, *(_QWORD *)&initPos);
        }
      }
      else
      {
        *userServantEntity = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)userServantEntity, 0, v20, v21, v22, v23, v24, v25);
        v55 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v53, v54);
          v55 = BalanceConfig_TypeInfo;
        }
        v56 = (System_Int64_array *)sub_21FFD10(long___TypeInfo, (unsigned int)v55->static_fields->GrandSvtEquipMax);
        *equipIdList = v56;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)equipIdList, (int32_t)v56, v57, v58, v59, v60, v61, v62);
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
      v40);
    Master_object = (UserServantGrandMaster_o *)this->fields.questRestrictionInfo;
    if ( !Master_object )
      goto LABEL_33;
    if ( !QuestRestrictionInfo__IsIgnoreSyncEquipGrand((QuestRestrictionInfo_o *)Master_object, 0) )
      goto LABEL_28;
    v48 = *userServantEntity;
    if ( !*userServantEntity || !v13 )
      goto LABEL_28;
    v49 = *(_QWORD *)&v48->fields.svtId.fields.currentCryptoKey;
    v50 = *(_QWORD *)&v48->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41, v42);
    *(_QWORD *)&v68.fields.currentCryptoKey = v49;
    *(_QWORD *)&v68.fields.fakeValue = v50;
    v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v68, 0);
    if ( v51 != CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v13->fields.svtId, 0) )
    {
LABEL_28:
      v52 = (int)equipIdLista;
      *equipIdList = equipIdLista;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)equipIdList, v52, v42, v43, v44, v45, v46, v47);
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
    || (PartyOrganizationListViewItem__Modify_40979068((PartyOrganizationListViewItem_o *)this, item, 0),
        (v10 = v6->fields.memberList) == 0) )
  {
LABEL_11:
    sub_21FFECC(this, *(_QWORD *)&num);
  }
  if ( LODWORD(v10->max_length) <= num )
LABEL_12:
    sub_21FFED4(this);
  this = (PartyListViewItem_o *)v10->m_Items[num];
  if ( !this )
    goto LABEL_11;
  v11 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0) + v11;
  PartyListViewItem__CheckRestriction(v6, v12);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewItem__SetMember_40848116(
        PartyListViewItem_o *this,
        int32_t idx,
        PartyOrganizationListViewItem_o *member,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v6; // x19
  int32_t cost; // w24
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct PartyOrganizationListViewItem_array *v15; // x23
  __int64 v16; // x1
  Il2CppClass **v17; // x0
  struct PartyOrganizationListViewItem_array *v18; // x8
  struct PartyOrganizationListViewItem_array *v19; // x8
  int32_t v20; // w20
  __int64 v21; // x0

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
    sub_21FFECC(this, *(_QWORD *)&idx);
  }
  if ( member )
  {
    this = (PartyListViewItem_o *)sub_21FFDA4(member, v15->obj.klass->_1.element_class);
    if ( !this )
    {
      v21 = sub_21FFEF0(0, v16);
      sub_21FFD90(v21, 0);
    }
  }
  if ( LODWORD(v15->max_length) <= idx )
    goto LABEL_18;
  v17 = &v15->obj.klass + idx;
  v17[4] = (Il2CppClass *)member;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 4), (int32_t)member, v9, v10, v11, v12, v13, v14);
  if ( v6->fields.menuKind == 9 )
  {
    v18 = v6->fields.memberList;
    if ( !v18 )
      goto LABEL_17;
    if ( LODWORD(v18->max_length) <= idx )
      goto LABEL_18;
    this = (PartyListViewItem_o *)v18->m_Items[idx];
    if ( !this )
      goto LABEL_17;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)this,
      v6->fields.waveBattleEnemyClassIds,
      0);
  }
  v19 = v6->fields.memberList;
  if ( !v19 )
    goto LABEL_17;
  if ( LODWORD(v19->max_length) <= idx )
LABEL_18:
    sub_21FFED4(this);
  this = (PartyListViewItem_o *)v19->m_Items[idx];
  if ( !this )
    goto LABEL_17;
  v20 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0) + v20;
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
  PartyListViewItem_o *v21; // x27
  QuestRestrictionInfo_o *v22; // x28
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  bool isWhole; // [xsp+Ch] [xbp-64h] BYREF

  isWhole = 0;
  if ( !npcFollowerInfoList )
LABEL_19:
    sub_21FFECC(this, follower);
  max_length = npcFollowerInfoList->max_length;
  v9 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = this;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_21FFED4(this);
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
        v21 = this;
        v22 = v13->fields.questRestrictionInfo;
        this = (PartyListViewItem_o *)ServantLeaderInfo__GetOverwriteStatus(v19, 0);
        if ( !this || !v22 )
          goto LABEL_19;
        this = (PartyListViewItem_o *)QuestRestrictionInfo__IsRestriction_50461556(
                                        v22,
                                        &isWhole,
                                        (System_Int32_array *)v21,
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
          this = (PartyListViewItem_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_50482996(
                                          (QuestRestrictionInfo_o *)this,
                                          (System_Int32_array *)v21,
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
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)follower, (int32_t)v15, v23, v24, v25, v26, v27, v28);
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
  EventUpValSetupInfo_o *setupInfo; // x25
  QuestRestrictionInfo_o *questRestrictionInfo; // x26
  struct PartyOrganizationListViewItem_array *memberList; // x27
  PartyOrganizationListViewItem_o *v16; // x24
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  Il2CppClass **v24; // x0
  const MethodInfo *v25; // x1
  __int64 v26; // x0

  if ( (byte_5933DD2 & 1) == 0 )
  {
    sub_21FFC50(&PartyOrganizationListViewItem_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5933DD2 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance
    || (PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, initPos, follower, 0),
        setupInfo = this->fields.setupInfo,
        questRestrictionInfo = this->fields.questRestrictionInfo,
        memberList = this->fields.memberList,
        v16 = (PartyOrganizationListViewItem_o *)sub_21FFEBC(PartyOrganizationListViewItem_TypeInfo),
        PartyOrganizationListViewItem___ctor_40934420(
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
    sub_21FFECC(Instance, v12);
  }
  if ( v16 )
  {
    Instance = (Il2CppObject *)sub_21FFDA4(v16, memberList->obj.klass->_1.element_class);
    if ( !Instance )
    {
      v26 = sub_21FFEF0(0, v23);
      sub_21FFD90(v26, 0);
    }
  }
  if ( LODWORD(memberList->max_length) <= num )
    sub_21FFED4(Instance);
  v24 = &memberList->obj.klass + num;
  v24[4] = (Il2CppClass *)v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v16, v17, v18, v19, v20, v21, v22);
  PartyListViewItem__CheckRestriction(this, v25);
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
    sub_21FFED4(this);
  this = (PartyListViewItem_o *)memberList->m_Items[num1];
  if ( !this )
LABEL_7:
    sub_21FFECC(this, *(_QWORD *)&num1);
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
  __int64 v6; // x21

  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_8;
  max_length = memberList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v6 >= max_length )
        sub_21FFED4(this);
      this = (PartyListViewItem_o *)memberList->m_Items[v6];
      if ( !this )
        break;
      PartyOrganizationListViewItem__UpdateEventEffect(
        (PartyOrganizationListViewItem_o *)this,
        otherValidEventIdFilter,
        0);
      max_length = memberList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_8:
    sub_21FFECC(this, otherValidEventIdFilter);
  }
}


void PartyListViewItem__UpdateServantInfo(PartyListViewItem_o *this, const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x21
  int max_length; // w8
  PartyListViewItem_o *v4; // x19
  __int64 v5; // x22
  PartyOrganizationListViewItem_o *v6; // x20
  int32_t cost; // w24

  memberList = this->fields.memberList;
  this->fields.cost = 0;
  if ( !memberList )
    goto LABEL_8;
  max_length = memberList->max_length;
  if ( max_length >= 1 )
  {
    v4 = this;
    v5 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v5 >= max_length )
        sub_21FFED4(this);
      v6 = memberList->m_Items[v5];
      if ( !v6 )
        break;
      PartyOrganizationListViewItem__UpdateServantInfo(memberList->m_Items[v5], 0);
      cost = v4->fields.cost;
      this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(v6, 0);
      max_length = memberList->max_length;
      ++v5;
      v4->fields.cost = (_DWORD)this + cost;
      if ( (int)v5 >= max_length )
        return;
    }
LABEL_8:
    sub_21FFECC(this, method);
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
  __int64 v2; // x2
  int v4; // w8
  System_String_o *v5; // x20
  Il2CppObject *v6; // x0
  int v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5933DE8 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10656/*"PARTY_ORGANIZATION_NAME_BASE"*/);
    byte_5933DE8 = 1;
  }
  v4 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  v8 = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_10656/*"PARTY_ORGANIZATION_NAME_BASE"*/, 0);
  v8 = this->fields.index + 1;
  v6 = (Il2CppObject *)System_Int32__ToString((int32_t)&v8, 0);
  return System_String__Format(v5, v6, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5933DF9 & 1) == 0 )
  {
    sub_21FFC50(&PartyListViewItem___c_TypeInfo);
    byte_5933DF9 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(PartyListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0);
  PartyListViewItem___c_TypeInfo->static_fields->__9 = (struct PartyListViewItem___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)PartyListViewItem___c_TypeInfo->static_fields,
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


int32_t PartyListViewItem___c___CheckDuplicationGrandQuestEquipment_b__109_0(
        PartyListViewItem___c_o *this,
        System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___o pair,
        const MethodInfo *method)
{
  int32_t Item1; // w19

  Item1 = pair.fields.value.fields.Item1;
  if ( (byte_5933DFB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___get_Value__);
    byte_5933DFB = 1;
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
  if ( (byte_5933DFC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___get_Value__);
    byte_5933DFC = 1;
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
  if ( (byte_5933DFD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___get_Key__);
    byte_5933DFD = 1;
  }
  return key;
}


System_String_o *PartyListViewItem___c___GetNarrowFigureAssetNameList_b__99_0(
        PartyListViewItem___c_o *this,
        PartyOrganizationListViewItem_o *e,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  bool NarrowFigureAssetData; // w8
  System_String_o *result; // x0
  int32_t v8; // w19
  int32_t v9; // w20
  int32_t limitCountStage[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5933DFA & 1) == 0 )
  {
    this = (PartyListViewItem___c_o *)sub_21FFC50(&UINarrowFigureRender_TypeInfo);
    byte_5933DFA = 1;
  }
  *(_QWORD *)limitCountStage = 0;
  if ( !e )
    sub_21FFECC(this, e);
  NarrowFigureAssetData = PartyOrganizationListViewItem__TryGetNarrowFigureAssetData(
                            e,
                            &limitCountStage[1],
                            limitCountStage,
                            0);
  result = 0;
  if ( NarrowFigureAssetData )
  {
    v9 = limitCountStage[0];
    v8 = limitCountStage[1];
    if ( !*(&UINarrowFigureRender_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UINarrowFigureRender_TypeInfo, v4, v5);
    return UINarrowFigureRender__GetAssetName(v8, v9, 0);
  }
  return result;
}


bool PartyListViewItem___c___IsNeedDeckPosReset_b__33_0(
        PartyListViewItem___c_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
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

  if ( (byte_5933DFE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    byte_5933DFE = 1;
  }
  userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userServantMaster;
  if ( !userServantMaster
    || (userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                            userServantMaster,
                                                                            id,
                                                                            (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0 )
  {
    sub_21FFECC(userServantMaster, id);
  }
  return UserServantEntity__GetSvtName((UserServantEntity_o *)userServantMaster, 0, 0);
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

  if ( (byte_5933DFF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    byte_5933DFF = 1;
  }
  userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userServantMaster;
  if ( !userServantMaster
    || (userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                            userServantMaster,
                                                                            id,
                                                                            (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0 )
  {
    sub_21FFECC(userServantMaster, id);
  }
  return UserServantEntity__GetSvtName((UserServantEntity_o *)userServantMaster, 0, 0);
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, x);
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}


void PartyListViewItem___c__DisplayClass60_0___ctor(
        PartyListViewItem___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyListViewItem___c__DisplayClass60_0___GetGrandServantInfo_b__0(
        PartyListViewItem___c__DisplayClass60_0_o *this,
        int32_t classIndividuality,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *individuality; // x20
  System_Func_int__bool__o *v9; // x19

  if ( (byte_5933E00 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int____91485032);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_PartyListViewItem___c__DisplayClass60_1__GetGrandServantInfo_b__1__);
    sub_21FFC50(&PartyListViewItem___c__DisplayClass60_1_TypeInfo);
    byte_5933E00 = 1;
  }
  v5 = sub_21FFEBC(PartyListViewItem___c__DisplayClass60_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  individuality = this->fields.individuality;
  *(_DWORD *)(v5 + 16) = classIndividuality;
  v9 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_PartyListViewItem___c__DisplayClass60_1__GetGrandServantInfo_b__1__,
    0);
  return BasicHelper__Any_int__58574768(
           individuality,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_37DC7B0 *)Method_BasicHelper_Any_int____91485032);
}


void PartyListViewItem___c__DisplayClass60_1___ctor(
        PartyListViewItem___c__DisplayClass60_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool PartyListViewItem___c__DisplayClass60_1___GetGrandServantInfo_b__1(
        PartyListViewItem___c__DisplayClass60_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.classIndividuality == x;
}