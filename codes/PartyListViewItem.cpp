void __fastcall PartyListViewItem___ctor(PartyListViewItem_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct PartyOrganizationListViewItem_array *v4; // x0

  if ( (byte_4BD80CC & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewItem___TypeInfo);
    byte_4BD80CC = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct PartyOrganizationListViewItem_array *)sub_1C21EE0(
                                                       PartyOrganizationListViewItem___TypeInfo,
                                                       (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.memberList = v4;
  sub_1C21DDC(&this->fields.memberList, v4);
}


void __fastcall PartyListViewItem___ctor_32868680(
        PartyListViewItem_o *this,
        int32_t menuKind,
        int32_t index,
        int32_t maxCost,
        UserDeckEntity_o *deck,
        FollowerInfo_o *follower,
        int32_t followerClassId,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        int32_t followerDeckId,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *v12; // x28
  PartyOrganizationListViewItem_o *Instance; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  struct DeckServant_o *deckInfo; // x8
  int32_t FollowerIndex; // w0
  BalanceConfig_c *v24; // x8
  int32_t DeckMainMemberMax; // w23
  struct PartyOrganizationListViewItem_array *v26; // x0
  UserServantEntity_array *v27; // x20
  int32_t v28; // w29
  struct DeckServant_o *v29; // x8
  struct DeckServantData_array *svts; // x8
  int32_t max_length; // w9
  DeckServantData_o *v32; // x8
  int32_t initPos; // w25
  int v34; // w9
  struct PartyOrganizationListViewItem_array *v35; // x19
  PartyOrganizationListViewItem_o *v36; // x0
  PartyOrganizationListViewItem_o *v37; // x22
  PartyListViewItem_o *v38; // x26
  QuestRestrictionInfo_o *v39; // x21
  UserServantEntity_o *v40; // x28
  struct PartyOrganizationListViewItem_array *v41; // x20
  System_Int64_array *EquipList; // x19
  PartyOrganizationListViewItem_o *v43; // x0
  UserServantEntity_o *v44; // x2
  Il2CppClass **v45; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v48; // x0
  int32_t v51; // [xsp+2Ch] [xbp-84h]
  UserServantEntity_array *UserServantList; // [xsp+38h] [xbp-78h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+40h] [xbp-70h]
  int32_t v55; // [xsp+4Ch] [xbp-64h]

  v12 = questRestrictionInfo;
  if ( (byte_4BD80CD & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BD80CD = 1;
  }
  ListViewItem___ctor_41996612((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C21DDC(&this->fields.setupInfo, setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  Instance = (PartyOrganizationListViewItem_o *)sub_1C21DDC(&this->fields.questRestrictionInfo, questRestrictionInfo);
  if ( !deck )
    goto LABEL_53;
  PartyListViewItem__SetDeckName(this, deck->fields.name, v21);
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_53;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.id;
  UserServantList = UserDeckEntity__GetUserServantList(deck, 0LL);
  FollowerIndex = UserDeckEntity__GetFollowerIndex(deck, 0LL);
  v24 = BalanceConfig_TypeInfo;
  if ( FollowerIndex <= 0 )
  {
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    DeckMainMemberMax = v24->static_fields->DeckMainMemberMax;
  }
  else
  {
    DeckMainMemberMax = FollowerIndex;
  }
  if ( !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = BalanceConfig_TypeInfo;
  }
  v26 = (struct PartyOrganizationListViewItem_array *)sub_1C21EE0(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v24->static_fields->DeckMemberMax);
  this->fields.memberList = v26;
  sub_1C21DDC(&this->fields.memberList, v26);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  v27 = UserServantList;
  if ( *(_QWORD *)&Instance->fields.sortIndex )
  {
    Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      follower = *(FollowerInfo_o **)&Instance->fields.sortIndex;
      Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        followerClassId = Instance->fields.sortValue0;
        Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          followerDeckId = HIDWORD(Instance->fields.sortValue0);
          goto LABEL_18;
        }
      }
    }
LABEL_53:
    sub_1C22094(Instance, v20);
  }
LABEL_18:
  v28 = 0;
  v51 = DeckMainMemberMax;
  while ( 1 )
  {
    Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( v28 >= *(_DWORD *)(*(_QWORD *)&Instance->fields.classId + 156LL) )
      break;
    v29 = deck->fields.deckInfo;
    if ( !v29 )
      goto LABEL_53;
    svts = v29->fields.svts;
    if ( !svts )
      goto LABEL_53;
    max_length = svts->max_length;
    if ( v28 >= max_length )
    {
      v34 = v28 + 1;
      initPos = v28 + 1;
    }
    else
    {
      if ( v28 >= (unsigned int)max_length )
        goto LABEL_54;
      v32 = svts->m_Items[v28];
      if ( !v32 )
        goto LABEL_53;
      initPos = v32->fields.initPos;
      v34 = v28 + 1;
    }
    v55 = v34;
    if ( v34 == DeckMainMemberMax )
    {
      v35 = *p_memberList;
      v36 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
      v37 = v36;
      if ( follower )
      {
        PartyOrganizationListViewItem___ctor_32985232(
          v36,
          v28,
          follower,
          followerClassId,
          setupInfo,
          v12,
          friendPointCampaignEntityList,
          0,
          followerDeckId,
          initPos,
          0LL);
        if ( !v35 )
          goto LABEL_53;
      }
      else
      {
        PartyOrganizationListViewItem___ctor_33022220(v36, v28, 1, setupInfo, v12, 1, initPos, 0LL);
        if ( !v35 )
          goto LABEL_53;
      }
      if ( v37 )
      {
        Instance = (PartyOrganizationListViewItem_o *)sub_1C21F74(v37, v35->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_55;
      }
      if ( v28 >= v35->max_length )
        goto LABEL_54;
      v45 = &v35->obj.klass + v28;
    }
    else
    {
      if ( !v27 )
        goto LABEL_53;
      if ( v28 >= v27->max_length )
        goto LABEL_54;
      v38 = this;
      v39 = v12;
      v40 = v27->m_Items[v28];
      v41 = *p_memberList;
      if ( v40 )
      {
        EquipList = UserDeckEntity__GetEquipList(deck, v28, 0LL);
        v43 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
        v44 = v40;
        v37 = v43;
        v12 = v39;
        PartyOrganizationListViewItem___ctor_33012864(
          v43,
          v28,
          v44,
          EquipList,
          setupInfo,
          v39,
          0LL,
          initPos,
          0LL,
          0,
          0LL);
        if ( !v41 )
          goto LABEL_53;
      }
      else
      {
        v37 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
        v12 = v39;
        PartyOrganizationListViewItem___ctor_33022220(v37, v28, 0, setupInfo, v39, 1, initPos, 0LL);
        if ( !v41 )
          goto LABEL_53;
      }
      this = v38;
      if ( v37 )
      {
        Instance = (PartyOrganizationListViewItem_o *)sub_1C21F74(v37, v41->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_55:
          v48 = sub_1C220B8();
          sub_1C21F60(v48, 0LL);
        }
      }
      if ( v28 >= v41->max_length )
        goto LABEL_54;
      v45 = &v41->obj.klass + v28;
      v27 = UserServantList;
      DeckMainMemberMax = v51;
    }
    v45[4] = (Il2CppClass *)v37;
    Instance = (PartyOrganizationListViewItem_o *)sub_1C21DDC(v45 + 4, v37);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_53;
    if ( v28 >= memberList->max_length )
LABEL_54:
      sub_1C2209C(Instance, v20);
    Instance = memberList->m_Items[v28];
    if ( !Instance )
      goto LABEL_53;
    cost = this->fields.cost;
    v28 = v55;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(Instance, 0LL) + cost;
  }
  PartyListViewItem__CheckRestriction(this, v20);
}


void __fastcall PartyListViewItem___ctor_32871252(
        PartyListViewItem_o *this,
        bool *isBaseModify,
        int32_t menuKind,
        int32_t index,
        int32_t maxCost,
        UserEventDeckEntity_o *deck,
        FollowerInfo_o *follower,
        int32_t followerClassId,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        int32_t followerDeckId,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  const MethodInfo *v20; // x1
  struct System_String_o *DefaultDeckName; // x0
  __int64 Instance; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo *v26; // x3
  int32_t FollowerIndex; // w25
  BalanceConfig_c *v28; // x0
  PartyListViewItem_o *v29; // x24
  int v30; // w27
  const MethodInfo *v31; // x2
  int32_t v32; // w23
  BalanceConfig_c *v33; // x0
  struct PartyOrganizationListViewItem_array *v34; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x28
  int32_t v36; // w8
  const MethodInfo *v37; // x2
  unsigned int v38; // w24
  struct DeckServant_o *v39; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v41; // x8
  int32_t *p_initPos; // x8
  int32_t initPos; // w19
  const MethodInfo *v44; // x6
  int v45; // w25
  struct DeckServant_o *v46; // x8
  struct DeckServantData_array *v47; // x8
  DeckServantData_o *v48; // x8
  _BOOL4 v49; // w27
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *v51; // x23
  int32_t v52; // w27
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v54; // x26
  int32_t v55; // w29
  PartyOrganizationListViewItem_o *v56; // x25
  PartyOrganizationListViewItem_o **v57; // x0
  FollowerInfo_o *v58; // x23
  struct PartyOrganizationListViewItem_array *v59; // x29
  int32_t v60; // w27
  UserServantEntity_array *v61; // x26
  Il2CppClass **v62; // x25
  Il2CppClass *v63; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v64; // x25
  Il2CppClass *v65; // t1
  Il2CppClass *parent; // x23
  Il2CppClass *declaringType; // x27
  int32_t v68; // w23
  int32_t v69; // w27
  int32_t DispLimitCount; // w0
  UserServantEntity_o *v71; // x23
  struct PartyOrganizationListViewItem_array *v72; // x26
  System_Int64_array *EquipList; // x27
  PartyOrganizationListViewItem_o *v74; // x0
  Il2CppClass **v75; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v78; // x1
  __int64 v79; // x0
  bool *v80; // [xsp+20h] [xbp-C0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+30h] [xbp-B0h]
  UserServantEntity_array *UserServantList; // [xsp+38h] [xbp-A8h]
  int v84; // [xsp+40h] [xbp-A0h]
  int v85; // [xsp+44h] [xbp-9Ch]
  PartyListViewItem_o *v86; // [xsp+48h] [xbp-98h]
  int32_t v88; // [xsp+60h] [xbp-80h]
  _BOOL4 v89; // [xsp+64h] [xbp-7Ch]
  int32_t followerClassIda; // [xsp+74h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16

  if ( (byte_4BD80CE & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BD80CE = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_41996612((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C21DDC(&this->fields.setupInfo, setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C21DDC(&this->fields.questRestrictionInfo, questRestrictionInfo);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v20);
  this->fields.deckName = DefaultDeckName;
  Instance = sub_1C21DDC(&this->fields.deckName, DefaultDeckName);
  if ( !deck )
    goto LABEL_110;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_110;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v24) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_110;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0LL);
  }
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0LL, v26);
  if ( FollowerIndex <= 0 )
  {
    v28 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v28 = BalanceConfig_TypeInfo;
    }
    FollowerIndex = v28->static_fields->DeckMainMemberMax;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  if ( *(int *)(Instance + 48) < 1 )
  {
    v29 = 0LL;
    v30 = 0;
    v89 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    v29 = *(PartyListViewItem_o **)(Instance + 72);
    v30 = 0;
    v89 = v29 == 0LL;
    if ( follower && v29 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_110;
      v30 = *(_DWORD *)(Instance + 48);
      Instance = (__int64)PartyListViewItem__GetMember(v29, v30 - 1, v31);
      if ( !Instance )
        goto LABEL_110;
      v32 = *(_DWORD *)(Instance + 348);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_110;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v32, follower, 0LL);
      v89 = 0;
    }
  }
  v33 = BalanceConfig_TypeInfo;
  v80 = isBaseModify;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v33 = BalanceConfig_TypeInfo;
  }
  v34 = (struct PartyOrganizationListViewItem_array *)sub_1C21EE0(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v33->static_fields->DeckMemberMax);
  this->fields.memberList = v34;
  p_memberList = &this->fields.memberList;
  sub_1C21DDC(&this->fields.memberList, v34);
  this->fields.cost = 0;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    follower = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    followerClassId = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    v36 = *(_DWORD *)(Instance + 36);
  }
  else
  {
    v36 = followerDeckId;
  }
  v88 = v36;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || (v86 = v29, !Instance) )
LABEL_110:
    sub_1C22094(Instance, v23);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)Instance,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0LL);
  v38 = 0;
  v84 = v30 - 1;
  v85 = FollowerIndex - 1;
  while ( 1 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v38 >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 156LL) )
      break;
    if ( v89 )
    {
      v39 = deck->fields.deckInfo;
      if ( !v39 )
        goto LABEL_110;
      svts = v39->fields.svts;
      if ( !svts )
        goto LABEL_110;
      if ( v38 >= svts->max_length )
        goto LABEL_114;
      v41 = svts->m_Items[v38];
      if ( !v41 )
        goto LABEL_110;
      p_initPos = &v41->fields.initPos;
    }
    else
    {
      Instance = (__int64)PartyListViewItem__GetMember(v86, v38, v37);
      if ( !Instance )
        goto LABEL_110;
      p_initPos = (int32_t *)(Instance + 348);
    }
    initPos = *p_initPos;
    followera = 0LL;
    followerClassIda = 0;
    if ( !questRestrictionInfo )
      goto LABEL_110;
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(questRestrictionInfo, initPos, 0LL);
    v45 = Instance;
    if ( (Instance & 1) != 0 )
    {
      v46 = deck->fields.deckInfo;
      if ( !v46 )
        goto LABEL_110;
      v47 = v46->fields.svts;
      if ( !v47 )
        goto LABEL_110;
      if ( v38 >= v47->max_length )
        goto LABEL_114;
      v48 = v47->m_Items[v38];
      if ( !v48 )
        goto LABEL_110;
      v49 = 0;
      if ( v84 != v38 )
      {
        npcFollowerSvtId = v48->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v49 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v44);
      }
    }
    else
    {
      v49 = 0;
    }
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                          (PartyOrganizationUtility_o *)Instance,
                          initPos,
                          0LL);
    if ( !Instance || ((v45 ^ 1) & 1) != 0 )
    {
      if ( v85 != v38 && !v49 )
      {
        if ( (v45 & 1) != 0 )
        {
          v61 = UserServantList;
          if ( !UserServantList )
            goto LABEL_110;
          if ( v38 >= UserServantList->max_length )
            goto LABEL_114;
          v62 = &UserServantList->obj.klass + (int)v38;
          v65 = v62[4];
          v64 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v62 + 4);
          v63 = v65;
          if ( v65 )
          {
            declaringType = v63->_1.declaringType;
            parent = v63->_1.parent;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v92.fields.currentCryptoKey = declaringType;
            *(_QWORD *)&v92.fields.fakeValue = parent;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v92, 0LL);
            if ( v38 >= UserServantList->max_length )
              goto LABEL_114;
            if ( !*v64 )
              goto LABEL_110;
            v68 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364((*v64)[6], 0LL);
            if ( v38 >= UserServantList->max_length )
              goto LABEL_114;
            v69 = Instance;
            Instance = (__int64)*v64;
            if ( !*v64 )
              goto LABEL_110;
            DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
            Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                         questRestrictionInfo,
                         v68,
                         v69,
                         DispLimitCount,
                         initPos,
                         0,
                         0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( v38 >= UserServantList->max_length )
                goto LABEL_114;
              *v64 = 0LL;
              Instance = sub_1C21DDC(v64, 0LL);
            }
          }
        }
        else
        {
          v61 = UserServantList;
          if ( !UserServantList )
            goto LABEL_110;
        }
        if ( v38 >= v61->max_length )
          goto LABEL_114;
        v71 = v61->m_Items[v38];
        v72 = *p_memberList;
        if ( v71 )
        {
          EquipList = UserEventDeckEntity__GetEquipList(deck, v38, 0LL);
          v56 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_33012864(
            v56,
            v38,
            v71,
            EquipList,
            setupInfo,
            questRestrictionInfo,
            0LL,
            initPos,
            0LL,
            0,
            0LL);
          if ( !v72 )
            goto LABEL_110;
        }
        else
        {
          v56 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_33022220(v56, v38, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
          if ( !v72 )
            goto LABEL_110;
        }
        if ( v56 )
        {
          Instance = sub_1C21F74(v56, v72->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_115:
            v79 = sub_1C220B8();
            sub_1C21F60(v79, 0LL);
          }
        }
        if ( v38 >= v72->max_length )
          goto LABEL_114;
        v75 = &v72->obj.klass + (int)v38;
      }
      else
      {
        v58 = followera;
        v59 = *p_memberList;
        if ( followera )
        {
          v60 = followerClassIda;
          v56 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32985232(
            v56,
            v38,
            v58,
            v60,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v88,
            initPos,
            0LL);
LABEL_94:
          if ( !v59 )
            goto LABEL_110;
        }
        else
        {
          v74 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
          v56 = v74;
          if ( follower )
          {
            PartyOrganizationListViewItem___ctor_32985232(
              v74,
              v38,
              follower,
              followerClassId,
              setupInfo,
              questRestrictionInfo,
              friendPointCampaignEntityList,
              0,
              v88,
              initPos,
              0LL);
            goto LABEL_94;
          }
          PartyOrganizationListViewItem___ctor_33022220(v74, v38, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
          if ( !v59 )
            goto LABEL_110;
        }
        if ( v56 )
        {
          Instance = sub_1C21F74(v56, v59->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_115;
        }
        if ( v38 >= v59->max_length )
          goto LABEL_114;
        v75 = &v59->obj.klass + (int)v38;
      }
      v57 = (PartyOrganizationListViewItem_o **)(v75 + 4);
      goto LABEL_105;
    }
    v51 = (FollowerInfo_o *)Instance;
    if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0LL) )
      v52 = 0;
    else
      v52 = followerClassId;
    IsNpc = FollowerInfo__get_IsNpc(v51, 0LL);
    v54 = *p_memberList;
    if ( IsNpc )
      v55 = 0;
    else
      v55 = v88;
    v56 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_32985232(
      v56,
      v38,
      v51,
      v52,
      setupInfo,
      questRestrictionInfo,
      friendPointCampaignEntityList,
      0,
      v55,
      initPos,
      0LL);
    if ( !v54 )
      goto LABEL_110;
    if ( v56 )
    {
      Instance = sub_1C21F74(v56, v54->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_115;
    }
    if ( v38 >= v54->max_length )
      goto LABEL_114;
    v57 = &v54->m_Items[v38];
LABEL_105:
    *v57 = v56;
    Instance = sub_1C21DDC(v57, v56);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_110;
    if ( v38 >= memberList->max_length )
LABEL_114:
      sub_1C2209C(Instance, v23);
    Instance = (__int64)memberList->m_Items[v38];
    if ( !Instance )
      goto LABEL_110;
    cost = this->fields.cost;
    ++v38;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, v23);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v78) )
    *v80 = 1;
}


void __fastcall PartyListViewItem___ctor_32875844(
        PartyListViewItem_o *this,
        bool *isBaseModify,
        int32_t menuKind,
        int32_t index,
        int32_t maxCost,
        UserEventDeckEntity_o *deck,
        FollowerInfo_o *follower,
        int32_t followerClassId,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        bool isFirstEnforceChange,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        int32_t followerDeckId,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x24
  const MethodInfo *v21; // x1
  struct System_String_o *DefaultDeckName; // x0
  __int64 Instance; // x0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo_388D478 **v27; // x28
  PartyListViewItem_o *v28; // x27
  unsigned int v29; // w25
  const MethodInfo *v30; // x2
  int32_t v31; // w19
  int32_t v32; // w8
  BalanceConfig_c *v33; // x0
  struct PartyOrganizationListViewItem_array *v34; // x0
  int32_t v35; // w8
  FollowerInfo_array *QuestFollowerList; // x0
  const MethodInfo *v37; // x2
  unsigned int *v38; // x23
  __int64 v39; // x8
  unsigned __int64 v40; // x24
  __int64 v41; // x25
  int32_t *p_initPos; // x8
  struct DeckServant_o *v43; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v45; // x8
  int32_t initPos; // w25
  unsigned __int64 max_length; // x8
  UserServantEntity_o *v48; // x9
  __int64 v49; // x20
  __int64 v50; // x26
  __int64 v51; // x20
  const MethodInfo *v52; // x6
  int v53; // w26
  struct DeckServant_o *v54; // x8
  struct DeckServantData_array *v55; // x8
  DeckServantData_o *v56; // x8
  _BOOL4 v57; // w27
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *v59; // x20
  PartyListViewItem_o *v60; // x23
  const MethodInfo_388D478 **v61; // x21
  UserEventDeckEntity_o *v62; // x28
  int32_t v63; // w27
  bool IsNpc; // w0
  unsigned int *v65; // x19
  int32_t v66; // w29
  PartyOrganizationListViewItem_o *v67; // x26
  __int64 v68; // x25
  unsigned __int64 v69; // x8
  FollowerInfo_o *v70; // x20
  int32_t v71; // w27
  unsigned int *v72; // x19
  PartyOrganizationListViewItem_o *v73; // x26
  UserServantEntity_o *v74; // x8
  __int64 v75; // x20
  __int64 v76; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v77; // x8
  int32_t v78; // w20
  int32_t v79; // w26
  int32_t DispLimitCount; // w0
  UserServantEntity_o *v81; // x20
  System_Int64_array *EquipList; // x27
  PartyOrganizationListViewItem_o *v83; // x0
  int32_t v84; // w1
  bool v85; // w2
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v88; // x1
  __int64 v89; // x0
  UserServantMaster_o *Master_object; // [xsp+20h] [xbp-100h]
  FollowerInfo_o *v92; // [xsp+30h] [xbp-F0h]
  int32_t *v93; // [xsp+38h] [xbp-E8h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+40h] [xbp-E0h]
  UserServantEntity_array *UserServantList; // [xsp+50h] [xbp-D0h]
  struct System_Int32_array *svtIdForceBattleList; // [xsp+60h] [xbp-C0h]
  UserServantEntity_o **m_Items; // [xsp+70h] [xbp-B0h]
  __int64 v99; // [xsp+78h] [xbp-A8h]
  int32_t v100; // [xsp+84h] [xbp-9Ch]
  PartyListViewItem_o *v101; // [xsp+88h] [xbp-98h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+90h] [xbp-90h]
  __int64 v103; // [xsp+98h] [xbp-88h]
  __int64 v104; // [xsp+A8h] [xbp-78h]
  int32_t followerClassIda; // [xsp+B4h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16

  if ( (byte_4BD80CF & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BD80CF = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_41996612((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C21DDC(&this->fields.setupInfo, setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C21DDC(&this->fields.questRestrictionInfo, questRestrictionInfo);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v21);
  this->fields.deckName = DefaultDeckName;
  Instance = sub_1C21DDC(&this->fields.deckName, DefaultDeckName);
  if ( !deck )
    goto LABEL_142;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_142;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v25) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_142;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0LL);
  }
  v27 = (const MethodInfo_388D478 **)&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  if ( *(int *)(Instance + 48) < 1 )
  {
    v28 = 0LL;
    if ( !questRestrictionInfo )
      goto LABEL_15;
    goto LABEL_14;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  v28 = *(PartyListViewItem_o **)(Instance + 72);
  if ( questRestrictionInfo )
LABEL_14:
    QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL);
LABEL_15:
  v29 = 0;
  if ( follower && v28 )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    v29 = *(_DWORD *)(Instance + 48);
    Instance = (__int64)PartyListViewItem__GetMember(v28, v29 - 1, v30);
    if ( !Instance )
      goto LABEL_142;
    v31 = *(_DWORD *)(Instance + 348);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v31, follower, 0LL);
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    follower = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    followerClassId = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    v32 = *(_DWORD *)(Instance + 36);
  }
  else
  {
    v32 = followerDeckId;
  }
  v100 = v32;
  v33 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v33 = BalanceConfig_TypeInfo;
  }
  v34 = (struct PartyOrganizationListViewItem_array *)sub_1C21EE0(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v33->static_fields->DeckMemberMax);
  this->fields.memberList = v34;
  sub_1C21DDC(&this->fields.memberList, v34);
  v35 = this->fields.menuKind;
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( v35 == 3 )
  {
    Instance = (__int64)*p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_142;
    Instance = (__int64)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList((QuestRestrictionInfo_o *)Instance, 0LL);
    if ( !*p_questRestrictionInfo )
      goto LABEL_142;
    v99 = Instance;
    svtIdForceBattleList = (*p_questRestrictionInfo)->fields.svtIdForceBattleList;
  }
  else
  {
    svtIdForceBattleList = 0LL;
    v99 = 0LL;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || (v92 = follower, !Instance) )
LABEL_142:
    sub_1C22094(Instance, v24);
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Instance,
                        (*p_questRestrictionInfo)->fields.questId,
                        (*p_questRestrictionInfo)->fields.questPhase,
                        0LL);
  v38 = (unsigned int *)UserServantList;
  v39 = v29;
  v40 = 0LL;
  v41 = 0LL;
  v93 = &svtIdForceBattleList->m_Items[1];
  npcFollowerInfoList = QuestFollowerList;
  m_Items = UserServantList->m_Items;
  v103 = v39 - 1;
  v101 = v28;
  while ( 1 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v40 >= *(int *)(*(_QWORD *)(Instance + 184) + 156LL) )
      break;
    v104 = v41;
    if ( v28 )
    {
      Instance = (__int64)PartyListViewItem__GetMember(v28, v40, v37);
      if ( !Instance )
        goto LABEL_142;
      p_initPos = (int32_t *)(Instance + 348);
    }
    else
    {
      v43 = deck->fields.deckInfo;
      if ( !v43 )
        goto LABEL_142;
      svts = v43->fields.svts;
      if ( !svts )
        goto LABEL_142;
      if ( v40 >= svts->max_length )
        goto LABEL_143;
      v45 = svts->m_Items[v40];
      if ( !v45 )
        goto LABEL_142;
      p_initPos = &v45->fields.initPos;
    }
    initPos = *p_initPos;
    if ( this->fields.menuKind == 3 )
    {
      if ( !v99 )
        goto LABEL_142;
      if ( (__int64)v40 >= *(int *)(v99 + 24) )
      {
        v72 = (unsigned int *)*p_memberList;
        v73 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_33022220(v73, v40, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v72 )
          goto LABEL_142;
        v68 = v104;
        if ( v73 )
        {
          Instance = sub_1C21F74(v73, *(_QWORD *)(*(_QWORD *)v72 + 64LL));
          if ( !Instance )
          {
LABEL_144:
            v89 = sub_1C220B8();
            sub_1C21F60(v89, 0LL);
          }
        }
        if ( v40 >= v72[6] )
          goto LABEL_143;
        *(_QWORD *)&v72[2 * v40 + 8] = v73;
        sub_1C21DDC((char *)v72 + v104 + 32, v73);
        goto LABEL_138;
      }
      if ( svtIdForceBattleList )
      {
        if ( v103 != v40 && isFirstEnforceChange )
        {
          max_length = svtIdForceBattleList->max_length;
          if ( (__int64)v40 < (int)max_length )
          {
            if ( v40 >= max_length )
              goto LABEL_143;
            v24 = (const MethodInfo *)(unsigned int)v93[v40];
            if ( (int)v24 >= 1 )
            {
              if ( !v38 )
                goto LABEL_142;
              if ( v40 >= v38[6] )
                goto LABEL_143;
              v48 = m_Items[v40];
              if ( !v48 )
                goto LABEL_68;
              v50 = *(_QWORD *)&v48->fields.svtId.fields.currentCryptoKey;
              v49 = *(_QWORD *)&v48->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v107.fields.currentCryptoKey = v50;
              *(_QWORD *)&v107.fields.fakeValue = v49;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v107, 0LL);
              max_length = svtIdForceBattleList->max_length;
              if ( v40 >= max_length )
                goto LABEL_143;
              v24 = (const MethodInfo *)(unsigned int)v93[v40];
              if ( (_DWORD)Instance != (_DWORD)v24 )
              {
LABEL_68:
                if ( v40 >= max_length )
                  goto LABEL_143;
                Instance = (__int64)Master_object;
                if ( !Master_object )
                  goto LABEL_142;
                Instance = (__int64)UserServantMaster__getSvtIdBattle(Master_object, (int32_t)v24, 0LL);
                v51 = Instance;
                if ( Instance )
                {
                  Instance = sub_1C21F74(Instance, *(_QWORD *)(*(_QWORD *)v38 + 64LL));
                  if ( !Instance )
                    goto LABEL_144;
                }
                if ( v40 >= v38[6] )
                  goto LABEL_143;
                m_Items[v40] = (UserServantEntity_o *)v51;
                Instance = sub_1C21DDC((char *)m_Items + v104, v51);
                *isBaseModify = 1;
              }
            }
          }
        }
      }
    }
    followera = 0LL;
    followerClassIda = 0;
    if ( !questRestrictionInfo )
      goto LABEL_142;
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(questRestrictionInfo, initPos, 0LL);
    v53 = Instance;
    if ( (Instance & 1) != 0 )
    {
      v54 = deck->fields.deckInfo;
      if ( !v54 )
        goto LABEL_142;
      v55 = v54->fields.svts;
      if ( !v55 )
        goto LABEL_142;
      if ( v40 >= v55->max_length )
        goto LABEL_143;
      v56 = v55->m_Items[v40];
      if ( !v56 )
        goto LABEL_142;
      v57 = 0;
      if ( v103 != v40 )
      {
        npcFollowerSvtId = v56->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v57 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v52);
      }
    }
    else
    {
      v57 = 0;
    }
    Instance = (__int64)SingletonTemplate_object___get_Instance(*v27);
    if ( !Instance )
      goto LABEL_142;
    Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                          (PartyOrganizationUtility_o *)Instance,
                          initPos,
                          0LL);
    if ( Instance && ((v53 ^ 1) & 1) == 0 )
    {
      v59 = (FollowerInfo_o *)Instance;
      v60 = this;
      v61 = v27;
      v62 = deck;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0LL) )
        v63 = 0;
      else
        v63 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v59, 0LL);
      v65 = (unsigned int *)*p_memberList;
      if ( IsNpc )
        v66 = 0;
      else
        v66 = v100;
      v67 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32985232(
        v67,
        v40,
        v59,
        v63,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v66,
        initPos,
        0LL);
      if ( !v65 )
        goto LABEL_142;
      v28 = v101;
      v68 = v104;
      deck = v62;
      if ( v67 )
      {
        Instance = sub_1C21F74(v67, *(_QWORD *)(*(_QWORD *)v65 + 64LL));
        if ( !Instance )
          goto LABEL_144;
      }
      v69 = v65[6];
      v27 = v61;
      this = v60;
      v38 = (unsigned int *)UserServantList;
      goto LABEL_133;
    }
    if ( v103 != v40 && !v57 )
    {
      if ( (v53 & 1) != 0 )
      {
        if ( !v38 )
          goto LABEL_142;
        if ( v40 >= v38[6] )
          goto LABEL_143;
        v74 = m_Items[v40];
        if ( v74 )
        {
          v76 = *(_QWORD *)&v74->fields.svtId.fields.currentCryptoKey;
          v75 = *(_QWORD *)&v74->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v108.fields.currentCryptoKey = v76;
          *(_QWORD *)&v108.fields.fakeValue = v75;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v108, 0LL);
          if ( v40 >= v38[6] )
            goto LABEL_143;
          v77 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)m_Items[v40];
          if ( !v77 )
            goto LABEL_142;
          v78 = Instance;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v77[6], 0LL);
          if ( v40 >= v38[6] )
LABEL_143:
            sub_1C2209C(Instance, v24);
          v79 = Instance;
          Instance = (__int64)m_Items[v40];
          if ( !Instance )
            goto LABEL_142;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
          Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                       questRestrictionInfo,
                       v78,
                       v79,
                       DispLimitCount,
                       initPos,
                       0,
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v40 >= v38[6] )
              goto LABEL_143;
            m_Items[v40] = 0LL;
            Instance = sub_1C21DDC((char *)m_Items + v104, 0LL);
          }
        }
      }
      else if ( !v38 )
      {
        goto LABEL_142;
      }
      if ( v40 >= v38[6] )
        goto LABEL_143;
      v81 = m_Items[v40];
      v65 = (unsigned int *)*p_memberList;
      if ( !v81 )
      {
        v83 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
        v67 = v83;
        v84 = v40;
        v85 = 0;
        goto LABEL_128;
      }
      EquipList = UserEventDeckEntity__GetEquipList(deck, v40, 0LL);
      v67 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_33012864(
        v67,
        v40,
        v81,
        EquipList,
        setupInfo,
        questRestrictionInfo,
        0LL,
        initPos,
        0LL,
        0,
        0LL);
      if ( !v65 )
        goto LABEL_142;
    }
    else
    {
      v70 = followera;
      v65 = (unsigned int *)*p_memberList;
      if ( !followera )
      {
        v83 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
        v67 = v83;
        if ( v92 )
        {
          PartyOrganizationListViewItem___ctor_32985232(
            v83,
            v40,
            v92,
            followerClassId,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v100,
            initPos,
            0LL);
        }
        else
        {
          v85 = 1;
          v84 = v40;
LABEL_128:
          PartyOrganizationListViewItem___ctor_33022220(v83, v84, v85, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        }
        v28 = v101;
        if ( !v65 )
          goto LABEL_142;
        goto LABEL_130;
      }
      v71 = followerClassIda;
      v67 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32985232(
        v67,
        v40,
        v70,
        v71,
        setupInfo,
        questRestrictionInfo,
        0LL,
        0,
        v100,
        initPos,
        0LL);
      if ( !v65 )
        goto LABEL_142;
    }
    v28 = v101;
LABEL_130:
    v68 = v104;
    if ( v67 )
    {
      Instance = sub_1C21F74(v67, *(_QWORD *)(*(_QWORD *)v65 + 64LL));
      if ( !Instance )
        goto LABEL_144;
    }
    v69 = v65[6];
LABEL_133:
    if ( v40 >= v69 )
      goto LABEL_143;
    *(_QWORD *)&v65[2 * v40 + 8] = v67;
    Instance = sub_1C21DDC((char *)v65 + v68 + 32, v67);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_142;
    if ( v40 >= memberList->max_length )
      goto LABEL_143;
    Instance = (__int64)memberList->m_Items[v40];
    if ( !Instance )
      goto LABEL_142;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                      + cost;
LABEL_138:
    ++v40;
    v41 = v68 + 8;
  }
  PartyListViewItem__CheckRestriction(this, v24);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v88) )
    *isBaseModify = 1;
}


void __fastcall PartyListViewItem___ctor_32878592(
        PartyListViewItem_o *this,
        int32_t menuKind,
        int32_t index,
        int32_t maxCost,
        int64_t userEquipId,
        FollowerInfo_o *follower,
        int32_t followerClassId,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        int32_t followerDeckId,
        const MethodInfo *method)
{
  void *v19; // x1
  BalanceConfig_c *v20; // x0
  struct PartyOrganizationListViewItem_array *v21; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x22
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  int32_t klass; // w23
  int32_t klass_high; // w25
  struct PartyOrganizationListViewItem_array *v27; // x26
  PartyOrganizationListViewItem_o *v28; // x0
  PartyOrganizationListViewItem_o *v29; // x27
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w23
  const MethodInfo *v32; // x1
  int32_t i; // w23
  BalanceConfig_c *v34; // x0
  struct PartyOrganizationListViewItem_array *v35; // x25
  PartyOrganizationListViewItem_o *v36; // x24
  Il2CppClass **v37; // x0
  struct PartyOrganizationListViewItem_array *v38; // x8
  int32_t v39; // w24
  __int64 v40; // x0

  if ( (byte_4BD80D0 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD80D0 = 1;
  }
  ListViewItem___ctor_41996612((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C21DDC(&this->fields.setupInfo, setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C21DDC(&this->fields.questRestrictionInfo, questRestrictionInfo);
  this->fields.isDeckNameDefault = 0;
  v19 = StringLiteral_1/*""*/;
  this->fields.deckName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(&this->fields.deckName, v19);
  this->fields.userEquipId = userEquipId;
  this->fields.id = 0LL;
  v20 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  v21 = (struct PartyOrganizationListViewItem_array *)sub_1C21EE0(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v20->static_fields->DeckMemberMax);
  this->fields.memberList = v21;
  p_memberList = &this->fields.memberList;
  sub_1C21DDC(&this->fields.memberList, v21);
  this->fields.cost = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  klass = followerClassId;
  if ( Instance[1].monitor )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    follower = (FollowerInfo_o *)Instance[1].monitor;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    klass = (int32_t)Instance[2].klass;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    klass_high = HIDWORD(Instance[2].klass);
  }
  else
  {
    klass_high = followerDeckId;
  }
  v27 = *p_memberList;
  v28 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
  v29 = v28;
  if ( follower )
  {
    PartyOrganizationListViewItem___ctor_32985232(
      v28,
      0,
      follower,
      klass,
      setupInfo,
      questRestrictionInfo,
      friendPointCampaignEntityList,
      0,
      klass_high,
      0,
      0LL);
    if ( !v27 )
      goto LABEL_35;
  }
  else
  {
    PartyOrganizationListViewItem___ctor_33022220(v28, 0, 1, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v27 )
      goto LABEL_35;
  }
  if ( v29 )
  {
    Instance = (Il2CppObject *)sub_1C21F74(v29, v27->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_37:
      v40 = sub_1C220B8();
      sub_1C21F60(v40, 0LL);
    }
  }
  if ( !v27->max_length )
    goto LABEL_36;
  v27->m_Items[0] = v29;
  Instance = (Il2CppObject *)sub_1C21DDC(v27->m_Items, v29);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_35;
  if ( !memberList->max_length )
LABEL_36:
    sub_1C2209C(Instance, v24);
  Instance = (Il2CppObject *)memberList->m_Items[0];
  if ( !Instance )
LABEL_35:
    sub_1C22094(Instance, v24);
  cost = this->fields.cost;
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                    + cost;
  for ( i = 1; ; ++i )
  {
    v34 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v34 = BalanceConfig_TypeInfo;
    }
    if ( i >= v34->static_fields->DeckMemberMax )
      break;
    v35 = *p_memberList;
    v36 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_33022220(v36, i, 0, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v35 )
      goto LABEL_35;
    if ( v36 )
    {
      Instance = (Il2CppObject *)sub_1C21F74(v36, v35->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_37;
    }
    if ( i >= v35->max_length )
      goto LABEL_36;
    v37 = &v35->obj.klass + i;
    v37[4] = (Il2CppClass *)v36;
    Instance = (Il2CppObject *)sub_1C21DDC(v37 + 4, v36);
    v38 = this->fields.memberList;
    if ( !v38 )
      goto LABEL_35;
    if ( i >= v38->max_length )
      goto LABEL_36;
    Instance = (Il2CppObject *)v38->m_Items[i];
    if ( !Instance )
      goto LABEL_35;
    v39 = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                      + v39;
  }
  PartyListViewItem__CheckRestriction(this, v32);
}


void __fastcall PartyListViewItem___ctor_32879484(
        PartyListViewItem_o *this,
        bool *isBaseModify,
        int32_t menuKind,
        int32_t index,
        int32_t maxCost,
        UserEventDeckEntity_o *deck,
        QuestRestrictionInfo_o *questRestrictionInfo,
        FollowerInfo_o *follower,
        int32_t followerClassId,
        EventUpValSetupInfo_o *setupInfo,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        int32_t followerDeckId,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  __int64 IsNeedDeckPosReset; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  struct DeckServant_o *deckInfo; // x8
  int32_t servantNumMax; // w26
  const MethodInfo *v25; // x3
  PartyListViewItem_o *v26; // x28
  int v27; // w25
  const MethodInfo *v28; // x2
  int32_t v29; // w23
  int32_t FollowerIndex; // w24
  BalanceConfig_c *v31; // x0
  __int64 v32; // x9
  __int64 v33; // x27
  __int64 v34; // x21
  unsigned __int64 v35; // x8
  __int64 v36; // x23
  signed __int64 v37; // x29
  BalanceConfig_c *v38; // x0
  struct PartyOrganizationListViewItem_array *v39; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x28
  const MethodInfo *v41; // x2
  __int64 v42; // x19
  struct DeckServant_o *v43; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v45; // x8
  int32_t *p_initPos; // x8
  int32_t initPos; // w24
  const MethodInfo *v48; // x6
  int v49; // w25
  _BOOL4 v50; // w26
  struct DeckServant_o *v51; // x8
  struct DeckServantData_array *v52; // x8
  DeckServantData_o *v53; // x8
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *v55; // x23
  int32_t v56; // w26
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v58; // x21
  int32_t v59; // w29
  PartyOrganizationListViewItem_o *v60; // x25
  Il2CppClass **v61; // x8
  FollowerInfo_o *v62; // x23
  struct PartyOrganizationListViewItem_array *v63; // x29
  int32_t v64; // w26
  __int64 v65; // x29
  __int64 v66; // x25
  __int64 v67; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v68; // x25
  __int64 v69; // t1
  __int64 v70; // x23
  __int64 v71; // x26
  int32_t v72; // w23
  int32_t v73; // w26
  int32_t DispLimitCount; // w0
  UserServantEntity_o *v75; // x23
  struct PartyOrganizationListViewItem_array *v76; // x21
  System_Int64_array *EquipList; // x26
  PartyOrganizationListViewItem_o *v78; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w21
  const MethodInfo *v81; // x1
  __int64 v82; // x0
  FollowerInfo_o *followerInfo; // [xsp+18h] [xbp-C8h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+20h] [xbp-C0h]
  int v86; // [xsp+30h] [xbp-B0h]
  int v87; // [xsp+38h] [xbp-A8h]
  PartyListViewItem_o *v88; // [xsp+40h] [xbp-A0h]
  int32_t v89; // [xsp+4Ch] [xbp-94h]
  int32_t v90; // [xsp+58h] [xbp-88h]
  _BOOL4 v91; // [xsp+5Ch] [xbp-84h]
  UserEventDeckEntity_o *v92; // [xsp+68h] [xbp-78h]
  int32_t followerClassIda; // [xsp+74h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16

  if ( (byte_4BD80D1 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BD80D1 = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_41996612((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C21DDC(&this->fields.setupInfo, setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  IsNeedDeckPosReset = sub_1C21DDC(&this->fields.questRestrictionInfo, questRestrictionInfo);
  if ( !deck )
    goto LABEL_121;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_121;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  IsNeedDeckPosReset = PartyListViewItem__IsNeedDeckPosReset(this, deck, v22);
  if ( (IsNeedDeckPosReset & 1) != 0 )
  {
    IsNeedDeckPosReset = (__int64)deck->fields.deckInfo;
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    DeckServant__ResetInitPos((DeckServant_o *)IsNeedDeckPosReset, 0LL);
  }
  if ( !questRestrictionInfo )
    goto LABEL_121;
  servantNumMax = questRestrictionInfo->fields.servantNumMax;
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_121;
  if ( *(int *)(IsNeedDeckPosReset + 48) < 1 )
  {
    v26 = 0LL;
    v27 = 0;
    v91 = 1;
  }
  else
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    v26 = *(PartyListViewItem_o **)(IsNeedDeckPosReset + 72);
    v27 = 0;
    v91 = v26 == 0LL;
    if ( followerInfo && v26 )
    {
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      v27 = *(_DWORD *)(IsNeedDeckPosReset + 48);
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v26, v27 - 1, v28);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      v29 = *(_DWORD *)(IsNeedDeckPosReset + 348);
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      PartyOrganizationUtility__SetNpcFollowerInfo(
        (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
        v29,
        followerInfo,
        0LL);
      v91 = 0;
    }
  }
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0LL, v25);
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
  v31 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v31 = BalanceConfig_TypeInfo;
  }
  FollowerIndex = servantNumMax;
  if ( servantNumMax > v31->static_fields->DeckMainMemberMax )
  {
    FollowerIndex = v31->static_fields->DeckMainMemberMax;
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      FollowerIndex = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
    }
  }
LABEL_29:
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_121;
  if ( *(_QWORD *)(IsNeedDeckPosReset + 24) )
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    followerInfo = *(FollowerInfo_o **)(IsNeedDeckPosReset + 24);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    v89 = *(_DWORD *)(IsNeedDeckPosReset + 32);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    v90 = *(_DWORD *)(IsNeedDeckPosReset + 36);
  }
  else
  {
    v90 = followerDeckId;
    v89 = followerClassId;
  }
  v88 = v26;
  v92 = deck;
  IsNeedDeckPosReset = (__int64)UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  if ( !IsNeedDeckPosReset )
    goto LABEL_121;
  v32 = *(_QWORD *)(IsNeedDeckPosReset + 24);
  v33 = IsNeedDeckPosReset;
  if ( (int)v32 >= 1 )
  {
    v34 = 0LL;
    v35 = 0LL;
    v36 = IsNeedDeckPosReset + 32;
    do
    {
      if ( v35 >= (unsigned int)v32 )
LABEL_125:
        sub_1C2209C(IsNeedDeckPosReset, v21);
      v37 = v35 + 1;
      if ( servantNumMax < (int)v35 + 1 && *(_QWORD *)(v36 + 8 * v35) )
      {
        *isBaseModify = 1;
        if ( v35 >= *(unsigned int *)(v33 + 24) )
          goto LABEL_125;
        *(_QWORD *)(v36 + 8 * v35) = 0LL;
        IsNeedDeckPosReset = sub_1C21DDC(v36 + v34, 0LL);
      }
      LODWORD(v32) = *(_DWORD *)(v33 + 24);
      v34 += 8LL;
      v35 = v37;
    }
    while ( v37 < (int)v32 );
  }
  v38 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v38 = BalanceConfig_TypeInfo;
  }
  v39 = (struct PartyOrganizationListViewItem_array *)sub_1C21EE0(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v38->static_fields->DeckMemberMax);
  this->fields.memberList = v39;
  p_memberList = &this->fields.memberList;
  sub_1C21DDC(&this->fields.memberList, v39);
  this->fields.cost = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNeedDeckPosReset = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || !IsNeedDeckPosReset )
LABEL_121:
    sub_1C22094(IsNeedDeckPosReset, v21);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)IsNeedDeckPosReset,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0LL);
  v42 = 0LL;
  v86 = v27 - 1;
  v87 = FollowerIndex - 1;
  while ( 1 )
  {
    IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (int)v42 >= *(_DWORD *)(*(_QWORD *)(IsNeedDeckPosReset + 184) + 156LL) )
      break;
    if ( v91 )
    {
      v43 = v92->fields.deckInfo;
      if ( !v43 )
        goto LABEL_121;
      svts = v43->fields.svts;
      if ( !svts )
        goto LABEL_121;
      if ( (unsigned int)v42 >= svts->max_length )
        goto LABEL_125;
      v45 = svts->m_Items[(int)v42];
      if ( !v45 )
        goto LABEL_121;
      p_initPos = &v45->fields.initPos;
    }
    else
    {
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v88, v42, v41);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      p_initPos = (int32_t *)(IsNeedDeckPosReset + 348);
    }
    initPos = *p_initPos;
    followera = 0LL;
    followerClassIda = 0;
    IsNeedDeckPosReset = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(questRestrictionInfo, initPos, 0LL);
    v49 = IsNeedDeckPosReset;
    v50 = 0;
    if ( (IsNeedDeckPosReset & 1) != 0 )
    {
      v51 = v92->fields.deckInfo;
      if ( !v51 )
        goto LABEL_121;
      v52 = v51->fields.svts;
      if ( !v52 )
        goto LABEL_121;
      if ( (unsigned int)v42 >= v52->max_length )
        goto LABEL_125;
      v53 = v52->m_Items[(int)v42];
      if ( !v53 )
        goto LABEL_121;
      v50 = 0;
      if ( v86 != (_DWORD)v42 )
      {
        npcFollowerSvtId = v53->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v50 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v48);
      }
    }
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    IsNeedDeckPosReset = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                                    (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
                                    initPos,
                                    0LL);
    if ( !IsNeedDeckPosReset || ((v49 ^ 1) & 1) != 0 )
    {
      if ( v87 == (_DWORD)v42 || v50 )
      {
        v62 = followera;
        v63 = *p_memberList;
        if ( followera )
        {
          v64 = followerClassIda;
          v60 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32985232(
            v60,
            v42,
            v62,
            v64,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v90,
            initPos,
            0LL);
LABEL_106:
          if ( !v63 )
            goto LABEL_121;
        }
        else
        {
          v78 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
          v60 = v78;
          if ( followerInfo )
          {
            PartyOrganizationListViewItem___ctor_32985232(
              v78,
              v42,
              followerInfo,
              v89,
              setupInfo,
              questRestrictionInfo,
              friendPointCampaignEntityList,
              0,
              v90,
              initPos,
              0LL);
            goto LABEL_106;
          }
          PartyOrganizationListViewItem___ctor_33022220(v78, v42, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
          if ( !v63 )
            goto LABEL_121;
        }
        if ( v60 )
        {
          IsNeedDeckPosReset = sub_1C21F74(v60, v63->obj.klass->_1.element_class);
          if ( !IsNeedDeckPosReset )
            goto LABEL_126;
        }
        if ( (unsigned int)v42 >= v63->max_length )
          goto LABEL_125;
        v61 = &v63->obj.klass + (int)v42;
        goto LABEL_116;
      }
      v65 = v42;
      if ( (v49 & 1) != 0 )
      {
        if ( (unsigned int)v42 >= *(_DWORD *)(v33 + 24) )
          goto LABEL_125;
        v66 = v33 + 8LL * (int)v42;
        v69 = *(_QWORD *)(v66 + 32);
        v68 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v66 + 32);
        v67 = v69;
        v65 = (int)v42;
        if ( v69 )
        {
          v71 = *(_QWORD *)(v67 + 80);
          v70 = *(_QWORD *)(v67 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v95.fields.currentCryptoKey = v71;
          *(_QWORD *)&v95.fields.fakeValue = v70;
          IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v95, 0LL);
          if ( (unsigned int)v42 >= *(_DWORD *)(v33 + 24) )
            goto LABEL_125;
          if ( !*v68 )
            goto LABEL_121;
          v72 = IsNeedDeckPosReset;
          IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364((*v68)[6], 0LL);
          if ( (unsigned int)v42 >= *(_DWORD *)(v33 + 24) )
            goto LABEL_125;
          v73 = IsNeedDeckPosReset;
          IsNeedDeckPosReset = (__int64)*v68;
          if ( !*v68 )
            goto LABEL_121;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)IsNeedDeckPosReset, 0, 0LL);
          IsNeedDeckPosReset = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                 questRestrictionInfo,
                                 v72,
                                 v73,
                                 DispLimitCount,
                                 initPos,
                                 0,
                                 0LL);
          if ( (IsNeedDeckPosReset & 1) != 0 )
          {
            if ( (unsigned int)v42 >= *(_DWORD *)(v33 + 24) )
              goto LABEL_125;
            *v68 = 0LL;
            IsNeedDeckPosReset = sub_1C21DDC(v68, 0LL);
          }
        }
      }
      if ( (unsigned int)v42 >= *(_DWORD *)(v33 + 24) )
        goto LABEL_125;
      v75 = *(UserServantEntity_o **)(v33 + 8 * v65 + 32);
      v76 = *p_memberList;
      if ( v75 )
      {
        EquipList = UserEventDeckEntity__GetEquipList(v92, v42, 0LL);
        v60 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_33012864(
          v60,
          v42,
          v75,
          EquipList,
          setupInfo,
          questRestrictionInfo,
          0LL,
          initPos,
          0LL,
          0,
          0LL);
        if ( !v76 )
          goto LABEL_121;
      }
      else
      {
        v60 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_33022220(v60, v42, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v76 )
          goto LABEL_121;
      }
      if ( v60 )
      {
        IsNeedDeckPosReset = sub_1C21F74(v60, v76->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
        {
LABEL_126:
          v82 = sub_1C220B8();
          sub_1C21F60(v82, 0LL);
        }
      }
      if ( (unsigned int)v42 >= v76->max_length )
        goto LABEL_125;
      v61 = &v76->obj.klass + v65;
    }
    else
    {
      v55 = (FollowerInfo_o *)IsNeedDeckPosReset;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)IsNeedDeckPosReset, 0LL) )
        v56 = 0;
      else
        v56 = v89;
      IsNpc = FollowerInfo__get_IsNpc(v55, 0LL);
      v58 = *p_memberList;
      if ( IsNpc )
        v59 = 0;
      else
        v59 = v90;
      v60 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32985232(
        v60,
        v42,
        v55,
        v56,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v59,
        initPos,
        0LL);
      if ( !v58 )
        goto LABEL_121;
      if ( v60 )
      {
        IsNeedDeckPosReset = sub_1C21F74(v60, v58->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
          goto LABEL_126;
      }
      if ( (unsigned int)v42 >= v58->max_length )
        goto LABEL_125;
      v61 = &v58->obj.klass + (int)v42;
    }
LABEL_116:
    v61[4] = (Il2CppClass *)v60;
    IsNeedDeckPosReset = sub_1C21DDC(v61 + 4, v60);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_121;
    if ( (unsigned int)v42 >= memberList->max_length )
      goto LABEL_125;
    IsNeedDeckPosReset = (__int64)memberList->m_Items[(int)v42];
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    cost = this->fields.cost;
    ++v42;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)IsNeedDeckPosReset,
                          0LL)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, v21);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v81) )
    *isBaseModify = 1;
}


void __fastcall PartyListViewItem___ctor_32881860(
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
        int32_t followerDeckId,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  __int64 Instance; // x0
  FollowerInfo_o *v22; // x1
  const MethodInfo *v23; // x2
  UserEventDeckEntity_o *v24; // x21
  struct DeckServant_o *deckInfo; // x8
  System_Int64_array *NpcServantFollowerIds; // x29
  FollowerInfo_o *v27; // x24
  PartyListViewItem_o *v28; // x22
  int v29; // w25
  const MethodInfo *v30; // x2
  int32_t v31; // w21
  int32_t DeckMemberMax; // w25
  FollowerInfo_array *QuestFollowerList; // x28
  const MethodInfo *v34; // x3
  int max_length; // w8
  unsigned int v36; // w19
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  int32_t v41; // w22
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v43; // w9
  int v44; // w10
  QuestRestrictionInfo_SlotInfo_o *v45; // x11
  struct DeckServant_o *v46; // x8
  __int64 v47; // x29
  int v48; // w24
  int v49; // w28
  struct DeckServantData_array *svts; // x8
  Il2CppObject *v51; // x19
  struct DeckServant_o *v52; // x8
  struct DeckServantData_array *v53; // x8
  DeckServantData_o *v54; // x8
  int64_t userSvtId; // x21
  System_Func_object__bool__o *v56; // x21
  BalanceConfig_c *v57; // x0
  _BOOL8 v58; // x0
  __int64 v59; // x1
  const MethodInfo *v60; // x2
  Il2CppClass *klass; // x21
  int v62; // w8
  Il2CppClass **v63; // x8
  __int64 NpcDeployIdx; // x0
  __int64 v65; // x1
  BalanceConfig_c *v66; // x0
  const MethodInfo *v67; // x2
  const MethodInfo *v68; // x3
  int32_t i; // w19
  struct DeckServant_o *v70; // x8
  struct DeckServantData_array *v71; // x8
  DeckServantData_o *v72; // x8
  int32_t UserServantDeployIndex; // w0
  il2cpp_array_size_t v74; // w21
  __int64 v75; // x22
  Il2CppClass **v76; // x0
  BalanceConfig_c *v77; // x0
  struct PartyOrganizationListViewItem_array *v78; // x0
  unsigned __int64 v79; // x24
  EventUpValSetupInfo_o *v80; // x23
  __int64 j; // x28
  BalanceConfig_c *v82; // x0
  __int64 v83; // x25
  const MethodInfo *v84; // x2
  struct DeckServant_o *v85; // x8
  struct DeckServantData_array *v86; // x8
  DeckServantData_o *v87; // x8
  int32_t *p_initPos; // x8
  int32_t v89; // w19
  unsigned int *v90; // x21
  PartyOrganizationListViewItem_o *v91; // x25
  const MethodInfo *v92; // x6
  bool v93; // w21
  int64_t v94; // x4
  bool v95; // w22
  FollowerInfo_o *v96; // x29
  int32_t v97; // w22
  bool IsNpc; // w0
  unsigned int *v99; // x23
  int32_t v100; // w21
  PartyOrganizationListViewItem_o *v101; // x25
  unsigned int *v102; // x19
  unsigned __int64 v103; // x8
  FollowerInfo_o *v104; // x22
  unsigned int *v105; // x21
  EventUpValSetupInfo_o *v106; // x23
  int32_t v107; // w26
  PartyOrganizationListViewItem_o *v108; // x0
  int32_t v109; // w3
  PartyOrganizationListViewItem_o *v110; // x0
  System_Func_object__bool__o *v111; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v112; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v113; // x22
  FollowerInfo_o *v114; // x29
  unsigned int *v115; // x25
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v117; // x8
  int32_t classId; // w22
  PartyOrganizationListViewItem_o *v119; // x21
  System_Collections_Generic_List_object__o *v120; // x21
  int32_t v121; // w25
  PartyOrganizationListViewItem_o *v122; // x21
  int32_t v123; // w25
  UserServantEntity_o *v124; // x8
  __int64 v125; // x22
  __int64 v126; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v127; // x8
  int32_t v128; // w22
  int32_t v129; // w25
  int32_t DispLimitCount; // w0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  unsigned int *v133; // x21
  __int64 v134; // x8
  FollowerInfo_o *v135; // x22
  __int64 v136; // x8
  PartyListViewItem_o *v137; // x21
  UserServantEntity_o *v138; // x22
  unsigned int *v139; // x27
  __int64 v140; // x23
  int v141; // w24
  unsigned __int64 v142; // x29
  UserServantEntity_o **v143; // x26
  __int64 v144; // x19
  signed __int64 v145; // x21
  System_Func_object__bool__o *v146; // x22
  unsigned __int64 v147; // x8
  EventUpValSetupInfo_o *v148; // x26
  unsigned __int64 v149; // x21
  signed __int64 v150; // x28
  __int64 v151; // x23
  unsigned __int64 k; // x24
  BalanceConfig_c *v153; // x0
  __int64 v154; // x29
  const MethodInfo *v155; // x2
  struct DeckServant_o *v156; // x8
  struct DeckServantData_array *v157; // x8
  __int64 v158; // x8
  int32_t *v159; // x8
  int32_t v160; // w19
  unsigned int *v161; // x21
  PartyOrganizationListViewItem_o *v162; // x25
  const MethodInfo *v163; // x6
  int v164; // w25
  struct DeckServant_o *v165; // x8
  struct DeckServantData_array *v166; // x8
  __int64 v167; // x8
  int64_t v168; // x4
  int v169; // w8
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v171; // x22
  int32_t v172; // w29
  bool v173; // w0
  unsigned int *v174; // x21
  int32_t v175; // w26
  PartyOrganizationListViewItem_o *v176; // x25
  struct PartyOrganizationListViewItem_array *v177; // x8
  struct DeckServant_o *v178; // x9
  struct DeckServantData_array *v179; // x9
  __int64 v180; // x9
  __int64 v181; // x8
  FollowerInfo_o *v182; // x22
  unsigned int *v183; // x29
  int32_t v184; // w29
  PartyOrganizationListViewItem_o *v185; // x0
  int32_t v186; // w3
  PartyOrganizationListViewItem_o *v187; // x25
  PartyOrganizationListViewItem_o *v188; // x0
  System_Func_object__bool__o *v189; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v190; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v191; // x22
  UserServantEntity_array *v192; // x21
  __int64 v193; // x8
  __int64 v194; // x22
  __int64 v195; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v196; // x8
  int32_t v197; // w22
  int32_t v198; // w25
  int32_t v199; // w0
  struct PartyOrganizationListViewItem_array *v200; // x8
  struct DeckServant_o *v201; // x9
  struct DeckServantData_array *v202; // x9
  __int64 v203; // x9
  __int64 v204; // x8
  FollowerInfo_o *v205; // x25
  unsigned int *v206; // x26
  __int64 v207; // x8
  __int64 v208; // x8
  int32_t v209; // w22
  PartyOrganizationListViewItem_o *v210; // x29
  UserServantEntity_o *v211; // x22
  unsigned int *v212; // x26
  System_Int64_array *v213; // x29
  PartyOrganizationListViewItem_o *v214; // x25
  PartyOrganizationListViewItem_o *v215; // x22
  struct PartyOrganizationListViewItem_array *v216; // x8
  int32_t v217; // w19
  const MethodInfo *v218; // x1
  __int64 v219; // x0
  int32_t followerDeckIda; // [xsp+0h] [xbp-190h]
  int32_t initPos; // [xsp+8h] [xbp-188h]
  unsigned int *v222; // [xsp+28h] [xbp-168h]
  UserServantEntity_o **isFixNpc; // [xsp+30h] [xbp-160h]
  char isFixNpca; // [xsp+30h] [xbp-160h]
  int v225; // [xsp+3Ch] [xbp-154h]
  _BOOL4 v226; // [xsp+3Ch] [xbp-154h]
  int32_t v227; // [xsp+40h] [xbp-150h]
  int32_t v228; // [xsp+40h] [xbp-150h]
  System_Int64_array *EquipList; // [xsp+40h] [xbp-150h]
  bool v230; // [xsp+40h] [xbp-150h]
  int v232; // [xsp+54h] [xbp-13Ch]
  int32_t v233; // [xsp+60h] [xbp-130h]
  int32_t v234; // [xsp+64h] [xbp-12Ch]
  int v235; // [xsp+68h] [xbp-128h]
  int32_t FollowerIndex; // [xsp+74h] [xbp-11Ch]
  FollowerInfo_o *v237; // [xsp+78h] [xbp-118h]
  EventUpValSetupInfo_o *setupInfoa; // [xsp+80h] [xbp-110h]
  EventUpValSetupInfo_o *setupInfob; // [xsp+80h] [xbp-110h]
  PartyListViewItem_o *v240; // [xsp+88h] [xbp-108h]
  System_Int64_array *v241; // [xsp+90h] [xbp-100h]
  System_Int64_array *v242; // [xsp+90h] [xbp-100h]
  int v243; // [xsp+90h] [xbp-100h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+98h] [xbp-F8h]
  QuestRestrictionInfo_o *v245; // [xsp+A0h] [xbp-F0h]
  QuestRestrictionInfo_o *m_Items; // [xsp+A0h] [xbp-F0h]
  PartyListViewItem_o *v247; // [xsp+A8h] [xbp-E8h]
  System_Collections_Generic_List_object__o *v248; // [xsp+B0h] [xbp-E0h]
  UserServantEntity_array *userServantList; // [xsp+B8h] [xbp-D8h]
  _BOOL4 v250; // [xsp+C4h] [xbp-CCh]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+C8h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_object__o v253; // [xsp+D8h] [xbp-B8h] BYREF
  int32_t v254; // [xsp+F4h] [xbp-9Ch] BYREF
  FollowerInfo_o *v255; // [xsp+F8h] [xbp-98h] BYREF
  int32_t followerClassIda; // [xsp+104h] [xbp-8Ch] BYREF
  FollowerInfo_o *followera; // [xsp+108h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v258; // [xsp+110h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v259; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v260; // 0:x0.16

  if ( (byte_4BD80D2 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_BasicHelper_Any_FollowerInfo___);
    sub_1C21E38(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_FollowerInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Count_FollowerInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__get_Current__);
    sub_1C21E38(&FollowerInfo___TypeInfo);
    sub_1C21E38(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_1C21E38(&long___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_FollowerInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FollowerInfo___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FollowerInfo__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_FollowerInfo__TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&Method_PartyListViewItem___c__DisplayClass27_0___ctor_b__0__);
    sub_1C21E38(&PartyListViewItem___c__DisplayClass27_0_TypeInfo);
    sub_1C21E38(&Method_PartyListViewItem___c__DisplayClass27_1___ctor_b__1__);
    sub_1C21E38(&PartyListViewItem___c__DisplayClass27_1_TypeInfo);
    sub_1C21E38(&Method_PartyListViewItem___c__DisplayClass27_2___ctor_b__2__);
    sub_1C21E38(&PartyListViewItem___c__DisplayClass27_2_TypeInfo);
    sub_1C21E38(&Method_PartyListViewItem___c__DisplayClass27_3___ctor_b__3__);
    sub_1C21E38(&PartyListViewItem___c__DisplayClass27_3_TypeInfo);
    sub_1C21E38(&UserServantEntity___TypeInfo);
    byte_4BD80D2 = 1;
  }
  memset(&v258, 0, sizeof(v258));
  followera = 0LL;
  followerClassIda = 0;
  v255 = 0LL;
  v254 = 0;
  ListViewItem___ctor_41996612((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C21DDC(&this->fields.setupInfo, setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  Instance = sub_1C21DDC(&this->fields.questRestrictionInfo, questRestrictionInfo);
  v24 = deck;
  if ( !deck )
    goto LABEL_75;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_75;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v23) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_75;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0LL);
    v24 = deck;
  }
  NpcServantFollowerIds = UserEventDeckEntity__GetNpcServantFollowerIds(v24, 0LL);
  userServantList = UserEventDeckEntity__GetUserServantList(v24, 0, 0, 0LL);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  v27 = follower;
  if ( *(int *)(Instance + 48) < 1 )
  {
    v28 = 0LL;
    v29 = 0;
    v250 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v28 = *(PartyListViewItem_o **)(Instance + 72);
    v29 = 0;
    v250 = v28 == 0LL;
    if ( follower && v28 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      v29 = *(_DWORD *)(Instance + 48);
      Instance = (__int64)PartyListViewItem__GetMember(v28, v29 - 1, v30);
      if ( !Instance )
        goto LABEL_75;
      v31 = *(_DWORD *)(Instance + 348);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v31, follower, 0LL);
      v250 = 0;
    }
  }
  Instance = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  v232 = v29;
  if ( !questRestrictionInfo )
    goto LABEL_75;
  DeckMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMemberMax;
  if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0LL) )
    DeckMemberMax = questRestrictionInfo->fields.servantNumMax;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo
    || !Instance
    || (QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                              (NpcFollowerMaster_o *)Instance,
                              (*p_questRestrictionInfo)->fields.questId,
                              (*p_questRestrictionInfo)->fields.questPhase,
                              0LL),
        v248 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_FollowerInfo__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v248,
          (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_FollowerInfo___ctor__),
        !QuestFollowerList) )
  {
LABEL_75:
    sub_1C22094(Instance, v22);
  }
  max_length = QuestFollowerList->max_length;
  if ( max_length >= 1 )
  {
    v36 = 0;
    while ( v36 < max_length )
    {
      v22 = QuestFollowerList->m_Items[v36];
      if ( !v22 )
        goto LABEL_75;
      if ( !v22->fields.isMySvtOrNpc
        && (questRestrictionInfo->fields.isNotTransitionSupportList
         || !questRestrictionInfo->fields.isNpcMultipleBattle
         || v22->fields.isFixedNpc) )
      {
        if ( !v248 )
          goto LABEL_75;
        items = v248->fields._items;
        v38 = Method_System_Collections_Generic_List_FollowerInfo__Add__;
        ++v248->fields._version;
        if ( !items )
          goto LABEL_75;
        size = v248->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v248,
            (Il2CppObject *)v22,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + size;
          v248->fields._size = size + 1;
          v40[4] = (Il2CppClass *)v22;
          Instance = sub_1C21DDC(v40 + 4, v22);
        }
      }
      max_length = QuestFollowerList->max_length;
      if ( (int)++v36 >= max_length )
        goto LABEL_44;
    }
LABEL_411:
    sub_1C2209C(Instance, v22);
  }
LABEL_44:
  FollowerIndex = PartyListViewItem__GetFollowerIndex(
                    this,
                    deck,
                    (System_Collections_Generic_List_FollowerInfo__o *)v248,
                    v34);
  setupInfoa = setupInfo;
  v240 = this;
  v245 = questRestrictionInfo;
  v247 = v28;
  npcFollowerInfoList = QuestFollowerList;
  if ( isNew || !questRestrictionInfo->fields.isNpcEditablePos )
    goto LABEL_117;
  Instance = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !v248 )
      goto LABEL_75;
    v41 = v248->fields._size;
  }
  else
  {
    slotInfos = questRestrictionInfo->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_75;
    v43 = slotInfos->max_length;
    if ( v43 >= 1 )
    {
      v41 = 0;
      v44 = 0;
      while ( v43 != v44 )
      {
        v45 = slotInfos->m_Items[v44];
        if ( !v45 )
          goto LABEL_75;
        if ( v45->fields.slotType == 1 )
          v41 += v45->fields.isMoved;
        if ( v43 == ++v44 )
          goto LABEL_59;
      }
      goto LABEL_411;
    }
    v41 = 0;
  }
LABEL_59:
  v241 = NpcServantFollowerIds;
  v46 = deck->fields.deckInfo;
  if ( !v46 )
    goto LABEL_75;
  v47 = 0LL;
  v48 = 0;
  v49 = 0;
  while ( 1 )
  {
    svts = v46->fields.svts;
    if ( !svts )
      goto LABEL_75;
    if ( (int)v47 >= (signed int)svts->max_length )
      break;
    v51 = (Il2CppObject *)sub_1C22084(PartyListViewItem___c__DisplayClass27_0_TypeInfo);
    System_Object___ctor(v51, 0LL);
    v52 = deck->fields.deckInfo;
    if ( !v52 )
      goto LABEL_75;
    v53 = v52->fields.svts;
    if ( !v53 )
      goto LABEL_75;
    if ( (unsigned int)v47 >= v53->max_length )
      goto LABEL_411;
    v54 = v53->m_Items[v47];
    if ( v54 && v51 )
    {
      userSvtId = v54->fields.userSvtId;
      v51[1].klass = (Il2CppClass *)v54->fields.npcFollowerSvtId;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(
                   questRestrictionInfo,
                   v54->fields.initPos,
                   0LL);
      if ( (int)v47 >= DeckMemberMax && (userSvtId || v51[1].klass) )
        v48 = 1;
      if ( !(Instance & 1 | (v51[1].klass == 0LL)) )
      {
        v56 = (System_Func_object__bool__o *)sub_1C22084(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(v56, v51, Method_PartyListViewItem___c__DisplayClass27_0___ctor_b__0__, 0LL);
        Instance = BasicHelper__Any_object_(
                     (System_Collections_Generic_List_T__o *)v248,
                     (System_Func_T__bool__o *)v56,
                     (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_FollowerInfo___);
        v49 += Instance & 1;
      }
      ++v47;
      v46 = deck->fields.deckInfo;
      if ( v46 )
        continue;
    }
    goto LABEL_75;
  }
  if ( ((v49 == v41) & (v48 ^ 1)) != 0 )
  {
    v27 = follower;
    v28 = v247;
    NpcServantFollowerIds = v241;
    goto LABEL_117;
  }
  v57 = BalanceConfig_TypeInfo;
  v27 = follower;
  v28 = v247;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v57 = BalanceConfig_TypeInfo;
  }
  NpcServantFollowerIds = (System_Int64_array *)sub_1C21EE0(
                                                  long___TypeInfo,
                                                  (unsigned int)v57->static_fields->DeckMemberMax);
  Instance = (__int64)v248;
  if ( !v248 )
    goto LABEL_75;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v253,
    v248,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
  v258 = v253;
  while ( 1 )
  {
    v58 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v258,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    if ( !v58 )
      break;
    if ( !v258.fields._current )
      sub_1C22094(v58, v59);
    klass = v258.fields._current[5].klass;
    if ( klass )
    {
      v62 = LODWORD(v258.fields._current[5].monitor) - 1;
      if ( v62 >= 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_1C22094(v58, v59);
        if ( v62 >= NpcServantFollowerIds->max_length )
          sub_1C2209C(v58, v59);
        v63 = &NpcServantFollowerIds->obj.klass + (unsigned int)v62;
        goto LABEL_92;
      }
      NpcDeployIdx = PartyListViewItem__GetNpcDeployIdx(this, NpcServantFollowerIds, v60);
      if ( (NpcDeployIdx & 0x80000000) == 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_1C22094(NpcDeployIdx, v65);
        if ( (unsigned int)NpcDeployIdx >= NpcServantFollowerIds->max_length )
          sub_1C2209C(NpcDeployIdx, v65);
        v63 = &NpcServantFollowerIds->obj.klass + (unsigned int)NpcDeployIdx;
LABEL_92:
        v63[4] = klass;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v258,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
  v66 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v66 = BalanceConfig_TypeInfo;
  }
  userServantList = (UserServantEntity_array *)sub_1C21EE0(
                                                 UserServantEntity___TypeInfo,
                                                 (unsigned int)v66->static_fields->DeckMemberMax);
  for ( i = 0; ; ++i )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( i >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 156LL) )
      break;
    v70 = deck->fields.deckInfo;
    if ( !v70 )
      goto LABEL_75;
    v71 = v70->fields.svts;
    if ( !v71 )
      goto LABEL_75;
    if ( i >= v71->max_length )
      goto LABEL_411;
    v72 = v71->m_Items[i];
    if ( !v72 )
      goto LABEL_75;
    if ( v72->fields.userSvtId )
    {
      UserServantDeployIndex = PartyListViewItem__GetUserServantDeployIndex(
                                 (PartyListViewItem_o *)Instance,
                                 userServantList,
                                 NpcServantFollowerIds,
                                 v68);
      if ( (UserServantDeployIndex & 0x80000000) == 0 )
      {
        v74 = UserServantDeployIndex;
        if ( UserServantDeployIndex < DeckMemberMax )
        {
          Instance = (__int64)UserEventDeckEntity__GetUserServant(deck, i, 0LL);
          if ( !userServantList )
            goto LABEL_75;
          v75 = Instance;
          if ( Instance )
          {
            Instance = sub_1C21F74(Instance, userServantList->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_412:
              v219 = sub_1C220B8();
              sub_1C21F60(v219, 0LL);
            }
          }
          if ( v74 >= userServantList->max_length )
            goto LABEL_411;
          v76 = &userServantList->obj.klass + v74;
          v76[4] = (Il2CppClass *)v75;
          sub_1C21DDC(v76 + 4, v75);
          questRestrictionInfo = v245;
          v28 = v247;
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
                      (System_Collections_Generic_List_FollowerInfo__o *)v248,
                      v67);
  }
LABEL_117:
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      v27 = *(FollowerInfo_o **)(Instance + 24);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        v233 = *(_DWORD *)(Instance + 32);
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          v234 = *(_DWORD *)(Instance + 36);
          goto LABEL_124;
        }
      }
    }
    goto LABEL_75;
  }
  v233 = followerClassId;
  v234 = followerDeckId;
LABEL_124:
  v77 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v77 = BalanceConfig_TypeInfo;
  }
  v78 = (struct PartyOrganizationListViewItem_array *)sub_1C21EE0(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v77->static_fields->DeckMemberMax);
  this->fields.memberList = v78;
  Instance = sub_1C21DDC(&this->fields.memberList, v78);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  v237 = v27;
  if ( !isNew && questRestrictionInfo->fields.isNpcEditablePos )
  {
    m_Items = (QuestRestrictionInfo_o *)NpcServantFollowerIds->m_Items;
    v79 = 0LL;
    v80 = (EventUpValSetupInfo_o *)DeckMemberMax;
    isFixNpc = userServantList->m_Items;
    v225 = -1;
    while ( 1 )
    {
      for ( j = 8 * v79; ; j += 8LL )
      {
        v82 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v82 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v79 >= v82->static_fields->DeckMemberMax )
          goto LABEL_406;
        v83 = sub_1C22084(PartyListViewItem___c__DisplayClass27_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v83, 0LL);
        if ( v250 )
        {
          v85 = deck->fields.deckInfo;
          if ( !v85 )
            goto LABEL_75;
          v86 = v85->fields.svts;
          if ( !v86 )
            goto LABEL_75;
          if ( v79 >= v86->max_length )
            goto LABEL_411;
          v87 = v86->m_Items[v79];
          if ( !v87 )
            goto LABEL_75;
          p_initPos = &v87->fields.initPos;
        }
        else
        {
          Instance = (__int64)PartyListViewItem__GetMember(v28, v79, v84);
          if ( !Instance )
            goto LABEL_75;
          p_initPos = (int32_t *)(Instance + 348);
        }
        v89 = *p_initPos;
        if ( (__int64)v79 < (__int64)v80 )
          break;
        v90 = (unsigned int *)*p_memberList;
        v91 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_33022220(v91, v79, 0, setupInfo, questRestrictionInfo, 1, v89, 0LL);
        if ( !v90 )
          goto LABEL_75;
        if ( v91 )
        {
          Instance = sub_1C21F74(v91, *(_QWORD *)(*(_QWORD *)v90 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        if ( v79 >= v90[6] )
          goto LABEL_411;
        *(_QWORD *)&v90[2 * v79 + 8] = v91;
        sub_1C21DDC(&v90[(unsigned __int64)j / 4 + 8], v91);
        ++v79;
      }
      if ( !v83 )
        goto LABEL_75;
      *(_DWORD *)(v83 + 16) = v79 + 1;
      followera = 0LL;
      followerClassIda = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(questRestrictionInfo, v89, 0LL);
      v93 = 0;
      v227 = Instance;
      if ( (Instance & 1) != 0 )
      {
        if ( !NpcServantFollowerIds )
          goto LABEL_75;
        if ( v79 >= NpcServantFollowerIds->max_length )
          goto LABEL_411;
        v94 = *((_QWORD *)&m_Items->klass + v79);
        v93 = v94 >= 1
           && *(_DWORD *)(v83 + 16) != v232
           && PartyListViewItem__SetNpcFollowerInfo(
                this,
                &followera,
                &followerClassIda,
                npcFollowerInfoList,
                v94,
                v89,
                v92);
      }
      setupInfob = v80;
      v95 = !QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL)
         && QuestRestrictionInfo__IsPositionFixNpc(questRestrictionInfo, v89, 0LL);
      v242 = NpcServantFollowerIds;
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v89, 0LL);
      if ( !Instance || ((v227 ^ 1) & 1) != 0 )
      {
        if ( v93 || *(_DWORD *)(v83 + 16) == FollowerIndex )
        {
          v104 = followera;
          v105 = (unsigned int *)*p_memberList;
          if ( !followera )
          {
            v110 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
            v101 = v110;
            if ( v237 )
              PartyOrganizationListViewItem___ctor_32985232(
                v110,
                v79,
                v237,
                v233,
                setupInfo,
                questRestrictionInfo,
                0LL,
                0,
                v234,
                v89,
                0LL);
            else
              PartyOrganizationListViewItem___ctor_33022220(v110, v79, 1, setupInfo, questRestrictionInfo, 1, v89, 0LL);
            v28 = v247;
            v102 = v105;
            if ( !v105 )
              goto LABEL_75;
            goto LABEL_208;
          }
          v106 = setupInfo;
          v107 = followerClassIda;
          v108 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
          v109 = v107;
          v101 = v108;
          setupInfo = v106;
          PartyOrganizationListViewItem___ctor_32985232(
            v108,
            v79,
            v104,
            v109,
            v106,
            questRestrictionInfo,
            0LL,
            0,
            v234,
            v89,
            0LL);
          v80 = setupInfob;
          if ( !v105 )
            goto LABEL_75;
          v28 = v247;
          v102 = v105;
          if ( v101 )
          {
            Instance = sub_1C21F74(v101, *(_QWORD *)(*(_QWORD *)v105 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          v103 = v105[6];
          this = v240;
        }
        else if ( v95 )
        {
          v111 = (System_Func_object__bool__o *)sub_1C22084(System_Func_FollowerInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v111,
            (Il2CppObject *)v83,
            Method_PartyListViewItem___c__DisplayClass27_1___ctor_b__1__,
            0LL);
          v112 = System_Linq_Enumerable__Where_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v248,
                   (System_Func_TSource__bool__o *)v111,
                   (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
          v113 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C21F74(v112, FollowerInfo___TypeInfo);
          if ( !v113 )
            v113 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                          v112,
                                                                          (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
          if ( System_Linq_Enumerable__Any_object_(
                 v113,
                 (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
          {
            Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                                  v113,
                                  0,
                                  (const MethodInfo_2FCE414 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
            v28 = v247;
            v114 = (FollowerInfo_o *)Instance;
          }
          else
          {
            v28 = v247;
            Instance = (__int64)v248;
            if ( !v248 )
              goto LABEL_75;
            if ( v248->fields._size < 1 )
            {
LABEL_221:
              v115 = (unsigned int *)*p_memberList;
              goto LABEL_236;
            }
            v123 = 0;
            while ( 1 )
            {
              Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v123,
                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
              if ( !Instance || !NpcServantFollowerIds )
                goto LABEL_75;
              if ( v79 >= NpcServantFollowerIds->max_length )
                goto LABEL_411;
              if ( *(_QWORD *)(Instance + 80) != *((_QWORD *)&m_Items->klass + v79) )
              {
                Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                      v248,
                                      v123,
                                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
                if ( !Instance )
                  goto LABEL_75;
                if ( v225 < v123 && *(int *)(Instance + 88) <= 0 )
                  break;
              }
              Instance = (__int64)v248;
              if ( ++v123 >= v248->fields._size )
                goto LABEL_221;
            }
            Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                  v248,
                                  v123,
                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
            v114 = (FollowerInfo_o *)Instance;
            v225 = v123;
          }
          v115 = (unsigned int *)*p_memberList;
          if ( !v114 )
          {
            NpcServantFollowerIds = v242;
LABEL_236:
            v122 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_33022220(v122, v79, 0, setupInfo, questRestrictionInfo, 0, v89, 0LL);
            if ( !v115 )
              goto LABEL_75;
            goto LABEL_237;
          }
          userSvtLeaderHash = v114->fields.userSvtLeaderHash;
          if ( !userSvtLeaderHash )
            goto LABEL_75;
          if ( !userSvtLeaderHash->max_length )
            goto LABEL_411;
          v117 = userSvtLeaderHash->m_Items[0];
          if ( !v117 )
            goto LABEL_75;
          classId = v117->fields.classId;
          v119 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32985232(
            v119,
            v79,
            v114,
            classId,
            setupInfo,
            questRestrictionInfo,
            0LL,
            1,
            v234,
            v89,
            0LL);
          if ( !v115 )
            goto LABEL_75;
          v28 = v247;
          NpcServantFollowerIds = v242;
          v102 = v115;
          v101 = v119;
          if ( v119 )
          {
            Instance = sub_1C21F74(v119, *(_QWORD *)(*(_QWORD *)v102 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          v103 = v102[6];
        }
        else
        {
          if ( !NpcServantFollowerIds )
            goto LABEL_75;
          v28 = v247;
          if ( v79 >= NpcServantFollowerIds->max_length )
            goto LABEL_411;
          if ( *((_QWORD *)&m_Items->klass + v79) )
          {
            Instance = System_Linq_Enumerable__Count_object_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v248,
                         (const MethodInfo_2FCAE0C *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
            if ( (int)Instance < 1 )
            {
LABEL_203:
              v115 = (unsigned int *)*p_memberList;
            }
            else
            {
              if ( !v248 )
                goto LABEL_75;
              v120 = v248;
              v121 = 0;
              while ( 1 )
              {
                Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                      v120,
                                      v121,
                                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
                if ( !Instance )
                  goto LABEL_75;
                if ( v79 >= NpcServantFollowerIds->max_length )
                  goto LABEL_411;
                if ( *(_QWORD *)(Instance + 80) == *((_QWORD *)&m_Items->klass + v79) )
                  break;
                v120 = v248;
                if ( ++v121 >= System_Linq_Enumerable__Count_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)v248,
                                 (const MethodInfo_2FCAE0C *)Method_System_Linq_Enumerable_Count_FollowerInfo___) )
                  goto LABEL_203;
              }
              Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                    v248,
                                    v121,
                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
              v133 = (unsigned int *)*p_memberList;
              if ( Instance )
              {
                v134 = *(_QWORD *)(Instance + 40);
                v135 = (FollowerInfo_o *)Instance;
                if ( !v134 )
                  goto LABEL_75;
                if ( !*(_DWORD *)(v134 + 24) )
                  goto LABEL_411;
                v136 = *(_QWORD *)(v134 + 32);
                if ( !v136 )
                  goto LABEL_75;
                v228 = *(_DWORD *)(v136 + 32);
                v101 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
                PartyOrganizationListViewItem___ctor_32985232(
                  v101,
                  v79,
                  v135,
                  v228,
                  setupInfo,
                  questRestrictionInfo,
                  0LL,
                  1,
                  v234,
                  v89,
                  0LL);
                if ( !v133 )
                  goto LABEL_75;
                v28 = v247;
                v102 = v133;
LABEL_208:
                if ( !v101 )
                {
LABEL_239:
                  v103 = v102[6];
                  goto LABEL_240;
                }
LABEL_238:
                Instance = sub_1C21F74(v101, *(_QWORD *)(*(_QWORD *)v102 + 64LL));
                if ( !Instance )
                  goto LABEL_412;
                goto LABEL_239;
              }
              v28 = v247;
              v115 = (unsigned int *)*p_memberList;
            }
            v122 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_33022220(v122, v79, 0, setupInfo, questRestrictionInfo, 1, v89, 0LL);
            if ( !v115 )
              goto LABEL_75;
LABEL_237:
            v102 = v115;
            v101 = v122;
            if ( !v122 )
              goto LABEL_239;
            goto LABEL_238;
          }
          if ( (v227 & 1) != 0 )
          {
            if ( !userServantList )
              goto LABEL_75;
            if ( v79 >= userServantList->max_length )
              goto LABEL_411;
            v124 = isFixNpc[v79];
            if ( v124 )
            {
              v126 = *(_QWORD *)&v124->fields.svtId.fields.currentCryptoKey;
              v125 = *(_QWORD *)&v124->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v259.fields.currentCryptoKey = v126;
              *(_QWORD *)&v259.fields.fakeValue = v125;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v259, 0LL);
              if ( v79 >= userServantList->max_length )
                goto LABEL_411;
              v127 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)isFixNpc[v79];
              if ( !v127 )
                goto LABEL_75;
              v128 = Instance;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v127[6], 0LL);
              if ( v79 >= userServantList->max_length )
                goto LABEL_411;
              v129 = Instance;
              Instance = (__int64)isFixNpc[v79];
              if ( !Instance )
                goto LABEL_75;
              DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
              Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                           questRestrictionInfo,
                           v128,
                           v129,
                           DispLimitCount,
                           v89,
                           0,
                           0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( v79 >= userServantList->max_length )
                  goto LABEL_411;
                isFixNpc[v79] = 0LL;
                Instance = sub_1C21DDC(&isFixNpc[(unsigned __int64)j / 8], 0LL);
              }
            }
          }
          else if ( !userServantList )
          {
            goto LABEL_75;
          }
          if ( v79 >= userServantList->max_length )
            goto LABEL_411;
          v137 = this;
          v138 = isFixNpc[v79];
          v139 = (unsigned int *)*p_memberList;
          if ( !v138 )
          {
            v101 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_33022220(v101, v79, 0, setupInfo, questRestrictionInfo, 1, v89, 0LL);
            v28 = v247;
            if ( !v139 )
              goto LABEL_75;
            v102 = v139;
            this = v137;
            goto LABEL_208;
          }
          EquipList = UserEventDeckEntity__GetEquipList(deck, v79, 0LL);
          v101 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_33012864(
            v101,
            v79,
            v138,
            EquipList,
            setupInfo,
            questRestrictionInfo,
            0LL,
            v89,
            0LL,
            0,
            0LL);
          if ( !v139 )
            goto LABEL_75;
          v28 = v247;
          v102 = v139;
          if ( v101 )
          {
            Instance = sub_1C21F74(v101, *(_QWORD *)(*(_QWORD *)v139 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          v103 = v139[6];
          this = v137;
        }
      }
      else
      {
        v96 = (FollowerInfo_o *)Instance;
        if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0LL) )
          v97 = 0;
        else
          v97 = v233;
        IsNpc = FollowerInfo__get_IsNpc(v96, 0LL);
        v99 = (unsigned int *)*p_memberList;
        if ( IsNpc )
          v100 = 0;
        else
          v100 = v234;
        v101 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
        initPos = v89;
        v102 = v99;
        PartyOrganizationListViewItem___ctor_32985232(
          v101,
          v79,
          v96,
          v97,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v100,
          initPos,
          0LL);
        if ( !v99 )
          goto LABEL_75;
        v28 = v247;
        if ( v101 )
        {
          Instance = sub_1C21F74(v101, *(_QWORD *)(*(_QWORD *)v99 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        v103 = v99[6];
        this = v240;
        NpcServantFollowerIds = v242;
        v80 = setupInfob;
      }
LABEL_240:
      if ( v79 >= v103 )
        goto LABEL_411;
      *(_QWORD *)&v102[2 * v79 + 8] = v101;
      Instance = sub_1C21DDC(&v102[(unsigned __int64)j / 4 + 8], v101);
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_75;
      if ( v79 >= memberList->max_length )
        goto LABEL_411;
      Instance = (__int64)memberList->m_Items[v79];
      if ( !Instance )
        goto LABEL_75;
      cost = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                        + cost;
      ++v79;
    }
  }
  v243 = questRestrictionInfo->fields.myServantNumMax
       + (FollowerIndex > 0 && !questRestrictionInfo->fields.isNotTransitionSupportList);
  if ( !isNew )
  {
    if ( !userServantList )
      goto LABEL_75;
    if ( (int)userServantList->max_length >= 1 )
    {
      v140 = 0LL;
      v141 = 0;
      v142 = 0LL;
      v143 = userServantList->m_Items;
      while ( 1 )
      {
        v144 = sub_1C22084(PartyListViewItem___c__DisplayClass27_2_TypeInfo);
        System_Object___ctor((Il2CppObject *)v144, 0LL);
        if ( !v144 )
          goto LABEL_75;
        v145 = v142 + 1;
        *(_DWORD *)(v144 + 16) = v142 + 1;
        if ( v142 >= userServantList->max_length )
          goto LABEL_411;
        if ( v143[v142] )
          ++v141;
        v146 = (System_Func_object__bool__o *)sub_1C22084(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v146,
          (Il2CppObject *)v144,
          Method_PartyListViewItem___c__DisplayClass27_2___ctor_b__2__,
          0LL);
        Instance = (__int64)System_Linq_Enumerable__Where_object_(
                              (System_Collections_Generic_IEnumerable_TSource__o *)npcFollowerInfoList,
                              (System_Func_TSource__bool__o *)v146,
                              (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
        v147 = userServantList->max_length;
        if ( v142 >= v147 )
          goto LABEL_411;
        questRestrictionInfo = v245;
        v28 = v247;
        if ( v143[v142] )
        {
          if ( *(_DWORD *)(v144 + 16) > DeckMemberMax )
            goto LABEL_276;
          Instance = System_Linq_Enumerable__Any_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                       (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
          if ( v141 > v243 || (Instance & 1) != 0 )
            break;
        }
LABEL_278:
        ++v140;
        ++v142;
        if ( v145 >= (int)userServantList->max_length )
          goto LABEL_279;
      }
      v147 = userServantList->max_length;
LABEL_276:
      if ( v142 >= v147 )
        goto LABEL_411;
      v143[v142] = 0LL;
      sub_1C21DDC(&v143[v140], 0LL);
      goto LABEL_278;
    }
  }
LABEL_279:
  v148 = setupInfoa;
  v149 = 0LL;
  v150 = DeckMemberMax;
  v235 = 0;
LABEL_280:
  v151 = 8 * v149 + 32;
  for ( k = v149; ; ++k )
  {
    v153 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v153 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)k >= v153->static_fields->DeckMemberMax )
      break;
    v154 = sub_1C22084(PartyListViewItem___c__DisplayClass27_3_TypeInfo);
    System_Object___ctor((Il2CppObject *)v154, 0LL);
    if ( v250 )
    {
      v156 = deck->fields.deckInfo;
      if ( !v156 )
        goto LABEL_75;
      v157 = v156->fields.svts;
      if ( !v157 )
        goto LABEL_75;
      if ( k >= v157->max_length )
        goto LABEL_411;
      v158 = *(__int64 *)((char *)&v157->obj.klass + v151);
      if ( !v158 )
        goto LABEL_75;
      v159 = (int32_t *)(v158 + 76);
    }
    else
    {
      Instance = (__int64)PartyListViewItem__GetMember(v28, k, v155);
      if ( !Instance )
        goto LABEL_75;
      v159 = (int32_t *)(Instance + 348);
    }
    v160 = *v159;
    if ( (__int64)k < v150 )
    {
      if ( !v154 )
        goto LABEL_75;
      v149 = k + 1;
      *(_DWORD *)(v154 + 16) = k + 1;
      v255 = 0LL;
      v254 = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(questRestrictionInfo, v160, 0LL);
      v164 = Instance;
      if ( (Instance & 1) == 0 )
        goto LABEL_307;
      v165 = deck->fields.deckInfo;
      if ( !v165 )
        goto LABEL_75;
      v166 = v165->fields.svts;
      if ( !v166 )
        goto LABEL_75;
      if ( k >= v166->max_length )
        goto LABEL_411;
      v167 = *(__int64 *)((char *)&v166->obj.klass + v151);
      if ( !v167 )
        goto LABEL_75;
      v168 = *(_QWORD *)(v167 + 64);
      if ( v168 >= 1 )
      {
        if ( *(_DWORD *)(v154 + 16) == v232 )
        {
          isFixNpca = 1;
          v226 = 0;
          v230 = 1;
          goto LABEL_313;
        }
        v226 = 0;
        v230 = PartyListViewItem__SetNpcFollowerInfo(this, &v255, &v254, npcFollowerInfoList, v168, v160, v163);
LABEL_312:
        isFixNpca = 1;
        goto LABEL_313;
      }
LABEL_307:
      if ( !v237 || questRestrictionInfo->fields.isNotTransitionSupportList )
      {
        v226 = 0;
        v230 = 0;
        goto LABEL_312;
      }
      v169 = *(_DWORD *)(v154 + 16);
      isFixNpca = v169 != FollowerIndex;
      v226 = v169 == FollowerIndex;
      v230 = 0;
LABEL_313:
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v160, 0LL);
      if ( NpcFollowerInfo && ((v164 ^ 1) & 1) == 0 )
      {
        v171 = NpcFollowerInfo;
        if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0LL) )
          v172 = 0;
        else
          v172 = v233;
        v173 = FollowerInfo__get_IsNpc(v171, 0LL);
        v174 = (unsigned int *)*p_memberList;
        if ( v173 )
          v175 = 0;
        else
          v175 = v234;
        followerDeckIda = v175;
        v148 = setupInfoa;
        v176 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32985232(
          v176,
          k,
          v171,
          v172,
          setupInfoa,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          followerDeckIda,
          v160,
          0LL);
        if ( !v174 )
          goto LABEL_75;
        v28 = v247;
        if ( v176 )
        {
          Instance = sub_1C21F74(v176, *(_QWORD *)(*(_QWORD *)v174 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        if ( k >= v174[6] )
          goto LABEL_411;
        *(_QWORD *)((char *)v174 + v151) = v176;
        Instance = sub_1C21DDC((char *)v174 + v151, v176);
        v177 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_75;
        if ( k >= v177->max_length )
          goto LABEL_411;
        v149 = k + 1;
        this = v240;
        v178 = deck->fields.deckInfo;
        if ( !v178 )
          goto LABEL_75;
        v179 = v178->fields.svts;
        if ( !v179 )
          goto LABEL_75;
        if ( k >= v179->max_length )
          goto LABEL_411;
        v180 = *(__int64 *)((char *)&v179->obj.klass + v151);
        if ( !v180 )
          goto LABEL_75;
        v181 = *(__int64 *)((char *)&v177->obj.klass + v151);
        if ( !v181 )
          goto LABEL_75;
        *(_DWORD *)(v181 + 348) = *(_DWORD *)(v180 + 76);
        ++v235;
        goto LABEL_280;
      }
      if ( v230 || *(_DWORD *)(v154 + 16) == FollowerIndex )
      {
        v182 = v255;
        v183 = (unsigned int *)*p_memberList;
        if ( v255 )
        {
          v222 = (unsigned int *)*p_memberList;
          v184 = v254;
          v185 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
          v186 = v184;
          v183 = v222;
          v187 = v185;
          PartyOrganizationListViewItem___ctor_32985232(
            v185,
            k,
            v182,
            v186,
            v148,
            questRestrictionInfo,
            0LL,
            isFixNpca,
            v234,
            v160,
            0LL);
          if ( !v222 )
            goto LABEL_75;
          v28 = v247;
          if ( !v187 )
          {
LABEL_365:
            if ( k >= v183[6] )
              goto LABEL_411;
            *(_QWORD *)((char *)v183 + v151) = v187;
            Instance = sub_1C21DDC((char *)v183 + v151, v187);
            v200 = *p_memberList;
            if ( !*p_memberList )
              goto LABEL_75;
            if ( k >= v200->max_length )
              goto LABEL_411;
            v201 = deck->fields.deckInfo;
            if ( !v201 )
              goto LABEL_75;
            v202 = v201->fields.svts;
            if ( !v202 )
              goto LABEL_75;
            if ( k >= v202->max_length )
              goto LABEL_411;
            v203 = *(__int64 *)((char *)&v202->obj.klass + v151);
            if ( !v203 )
              goto LABEL_75;
            v204 = *(__int64 *)((char *)&v200->obj.klass + v151);
            if ( !v204 )
              goto LABEL_75;
            *(_DWORD *)(v204 + 348) = *(_DWORD *)(v203 + 76);
            v235 += v226 || v230;
            goto LABEL_280;
          }
        }
        else
        {
          v188 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
          v187 = v188;
          if ( v237 )
            PartyOrganizationListViewItem___ctor_32985232(
              v188,
              k,
              v237,
              v233,
              v148,
              questRestrictionInfo,
              0LL,
              isFixNpca,
              v234,
              v160,
              0LL);
          else
            PartyOrganizationListViewItem___ctor_33022220(v188, k, 1, v148, questRestrictionInfo, 1, v160, 0LL);
          v28 = v247;
          if ( !v183 )
            goto LABEL_75;
          if ( !v187 )
            goto LABEL_365;
        }
        Instance = sub_1C21F74(v187, *(_QWORD *)(*(_QWORD *)v183 + 64LL));
        if ( !Instance )
          goto LABEL_412;
        goto LABEL_365;
      }
      v189 = (System_Func_object__bool__o *)sub_1C22084(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v189,
        (Il2CppObject *)v154,
        Method_PartyListViewItem___c__DisplayClass27_3___ctor_b__3__,
        0LL);
      v190 = System_Linq_Enumerable__Where_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v248,
               (System_Func_TSource__bool__o *)v189,
               (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v191 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C21F74(v190, FollowerInfo___TypeInfo);
      if ( !v191 )
        v191 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                      v190,
                                                                      (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
      Instance = System_Linq_Enumerable__Any_object_(
                   v191,
                   (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( v235 < v243 && (Instance & 1) == 0 )
      {
        if ( (v164 & 1) != 0 )
        {
          v192 = userServantList;
          if ( !userServantList )
            goto LABEL_75;
          if ( k >= userServantList->max_length )
            goto LABEL_411;
          v193 = *(__int64 *)((char *)&userServantList->obj.klass + v151);
          if ( v193 )
          {
            v195 = *(_QWORD *)(v193 + 80);
            v194 = *(_QWORD *)(v193 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v260.fields.currentCryptoKey = v195;
            *(_QWORD *)&v260.fields.fakeValue = v194;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v260, 0LL);
            if ( k >= userServantList->max_length )
              goto LABEL_411;
            v196 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&userServantList->obj.klass + v151);
            if ( !v196 )
              goto LABEL_75;
            v197 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v196[6], 0LL);
            if ( k >= userServantList->max_length )
              goto LABEL_411;
            v198 = Instance;
            Instance = *(__int64 *)((char *)&userServantList->obj.klass + v151);
            if ( !Instance )
              goto LABEL_75;
            v199 = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
            questRestrictionInfo = v245;
            Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(v245, v197, v198, v199, v160, 0, 0LL);
            v192 = userServantList;
            if ( (Instance & 1) != 0 )
            {
              if ( k >= userServantList->max_length )
                goto LABEL_411;
              *(Il2CppClass **)((char *)&userServantList->obj.klass + v151) = 0LL;
              Instance = sub_1C21DDC((char *)userServantList + v151, 0LL);
            }
          }
        }
        else
        {
          v192 = userServantList;
          if ( !userServantList )
            goto LABEL_75;
        }
        if ( k >= v192->max_length )
          goto LABEL_411;
        v211 = *(UserServantEntity_o **)((char *)&v192->obj.klass + v151);
        v212 = (unsigned int *)*p_memberList;
        if ( v211 )
        {
          v213 = UserEventDeckEntity__GetEquipList(deck, k, 0LL);
          v214 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_33012864(
            v214,
            k,
            v211,
            v213,
            setupInfoa,
            questRestrictionInfo,
            0LL,
            v160,
            0LL,
            0,
            0LL);
          v149 = k + 1;
          if ( !v212 )
            goto LABEL_75;
          v28 = v247;
        }
        else
        {
          v214 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_33022220(v214, k, 0, setupInfoa, questRestrictionInfo, 1, v160, 0LL);
          v28 = v247;
          v149 = k + 1;
          if ( !v212 )
            goto LABEL_75;
        }
        if ( v214 )
        {
          Instance = sub_1C21F74(v214, *(_QWORD *)(*(_QWORD *)v212 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        if ( k >= v212[6] )
          goto LABEL_411;
        *(_QWORD *)((char *)v212 + v151) = v214;
        Instance = sub_1C21DDC((char *)v212 + v151, v214);
        ++v235;
        goto LABEL_402;
      }
      if ( System_Linq_Enumerable__Any_object_(
             v191,
             (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
      {
        Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                              v191,
                              0,
                              (const MethodInfo_2FCE414 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
        goto LABEL_377;
      }
      Instance = (__int64)v248;
      if ( !v248 )
        goto LABEL_75;
      if ( v248->fields._size <= (int)k - v235 )
      {
        v206 = (unsigned int *)*p_memberList;
      }
      else
      {
        Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                              v248,
                              (int)k - v235,
                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
LABEL_377:
        v205 = (FollowerInfo_o *)Instance;
        v206 = (unsigned int *)*p_memberList;
        if ( Instance )
        {
          v207 = *(_QWORD *)(Instance + 40);
          if ( !v207 )
            goto LABEL_75;
          if ( !*(_DWORD *)(v207 + 24) )
            goto LABEL_411;
          v208 = *(_QWORD *)(v207 + 32);
          if ( !v208 )
            goto LABEL_75;
          v209 = *(_DWORD *)(v208 + 32);
          v210 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32985232(
            v210,
            k,
            v205,
            v209,
            setupInfoa,
            questRestrictionInfo,
            0LL,
            1,
            v234,
            v160,
            0LL);
          if ( !v206 )
            goto LABEL_75;
          v28 = v247;
          if ( v210 )
          {
            Instance = sub_1C21F74(v210, *(_QWORD *)(*(_QWORD *)v206 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          if ( k >= v206[6] )
            goto LABEL_411;
          *(_QWORD *)((char *)v206 + v151) = v210;
          Instance = sub_1C21DDC((char *)v206 + v151, v210);
LABEL_402:
          v216 = this->fields.memberList;
          v148 = setupInfoa;
          if ( !v216 )
            goto LABEL_75;
          if ( k >= v216->max_length )
            goto LABEL_411;
          Instance = *(__int64 *)((char *)&v216->obj.klass + v151);
          if ( !Instance )
            goto LABEL_75;
          v217 = this->fields.cost;
          this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                                (PartyOrganizationListViewItem_o *)Instance,
                                0LL)
                            + v217;
          goto LABEL_280;
        }
      }
      v215 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_33022220(v215, k, 0, setupInfoa, questRestrictionInfo, 0, v160, 0LL);
      if ( !v206 )
        goto LABEL_75;
      if ( v215 )
      {
        Instance = sub_1C21F74(v215, *(_QWORD *)(*(_QWORD *)v206 + 64LL));
        if ( !Instance )
          goto LABEL_412;
      }
      if ( k >= v206[6] )
        goto LABEL_411;
      *(_QWORD *)((char *)v206 + v151) = v215;
      Instance = sub_1C21DDC((char *)v206 + v151, v215);
      v28 = v247;
      goto LABEL_402;
    }
    v161 = (unsigned int *)*p_memberList;
    v162 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_33022220(v162, k, 0, v148, questRestrictionInfo, 1, v160, 0LL);
    if ( !v161 )
      goto LABEL_75;
    if ( v162 )
    {
      Instance = sub_1C21F74(v162, *(_QWORD *)(*(_QWORD *)v161 + 64LL));
      if ( !Instance )
        goto LABEL_412;
    }
    if ( k >= v161[6] )
      goto LABEL_411;
    *(_QWORD *)((char *)v161 + v151) = v162;
    sub_1C21DDC((char *)v161 + v151, v162);
    v151 += 8LL;
  }
LABEL_406:
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)v22);
  if ( (questRestrictionInfo->fields.isNpcEditablePos || !questRestrictionInfo->fields.isNpcOnlyBattle)
    && !PartyListViewItem__GetStartDeckCondition(this, v218) )
  {
    *isBaseModify = 1;
  }
}


void __fastcall PartyListViewItem___ctor_32890876(
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
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x29
  __int64 Master_object; // x0
  __int64 v17; // x1
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *UserServantList; // x0
  BalanceConfig_c *v20; // x8
  struct PartyOrganizationListViewItem_array *v21; // x0
  System_Collections_Generic_List_int__o *v22; // x28
  int v23; // w8
  __int64 v24; // x29
  unsigned int v25; // w19
  __int64 v26; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  struct System_Int32_array *v30; // x0
  int32_t v31; // w28
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v33; // w24
  struct DeckServant_o *v34; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v36; // x8
  UserServantEntity_array *v37; // x9
  int32_t initPos; // w27
  UserServantEntity_o *v39; // x29
  struct PartyOrganizationListViewItem_array *v40; // x19
  __int128 v41; // q0
  int64_t v42; // x0
  System_Int64_array *v43; // x21
  struct DeckServant_o *v44; // x8
  struct DeckServantData_array *v45; // x8
  DeckServantData_o *v46; // x8
  System_Int32_array *equipSvtIdList; // x24
  PartyOrganizationListViewItem_o *v48; // x20
  unsigned int max_length; // w8
  Il2CppClass **v50; // x0
  struct PartyOrganizationListViewItem_array *v51; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v54; // x0
  UserEventDeckEntity_o *v55; // [xsp+18h] [xbp-D8h]
  int v56; // [xsp+24h] [xbp-CCh]
  UserServantEntity_array *v57; // [xsp+28h] [xbp-C8h]
  int32_t v60; // [xsp+44h] [xbp-ACh]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+48h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+70h] [xbp-80h]

  if ( (byte_4BD80D3 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewItem___TypeInfo);
    sub_1C21E38(&PartyOrganizationListViewItem_TypeInfo);
    byte_4BD80D3 = 1;
  }
  ListViewItem___ctor_41996612((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C21DDC(&this->fields.setupInfo, setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  Master_object = sub_1C21DDC(&this->fields.questRestrictionInfo, questRestrictionInfo);
  if ( !deck )
    goto LABEL_69;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_69;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  this->fields._IsWaveBattleRestart_k__BackingField = restartWave > 0;
  v60 = index + 1;
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, index + 1, restartWave > 0, 0LL);
  v20 = BalanceConfig_TypeInfo;
  v57 = UserServantList;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  v21 = (struct PartyOrganizationListViewItem_array *)sub_1C21EE0(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v20->static_fields->DeckMemberMax);
  this->fields.memberList = v21;
  sub_1C21DDC(&this->fields.memberList, v21);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  v22 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
  if ( !*p_questRestrictionInfo )
    goto LABEL_69;
  if ( !Master_object )
    goto LABEL_69;
  Master_object = (__int64)ViewWaveEnemyMaster__GetEntityListFromQuestId(
                             (ViewWaveEnemyMaster_o *)Master_object,
                             (*p_questRestrictionInfo)->fields.questId,
                             0LL);
  if ( !Master_object )
    goto LABEL_69;
  v23 = *(_DWORD *)(Master_object + 24);
  v24 = Master_object;
  if ( v23 >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= v23 )
LABEL_70:
        sub_1C2209C(Master_object, v17);
      v26 = *(_QWORD *)(v24 + 8LL * (int)v25 + 32);
      if ( !v26 )
        break;
      if ( *(_DWORD *)(v26 + 56) == v60 )
      {
        if ( !v22 )
          break;
        Master_object = System_Collections_Generic_List_int___Contains(
                          v22,
                          *(_DWORD *)(v26 + 32),
                          (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Master_object & 1) == 0 )
        {
          v17 = *(unsigned int *)(v26 + 32);
          items = v22->fields._items;
          v28 = Method_System_Collections_Generic_List_int__Add__;
          ++v22->fields._version;
          if ( !items )
            break;
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v22,
              v17,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v22->fields._size = size + 1;
            items->m_Items[size + 1] = v17;
          }
        }
      }
      v23 = *(_DWORD *)(v24 + 24);
      if ( (int)++v25 >= v23 )
        goto LABEL_24;
    }
LABEL_69:
    sub_1C22094(Master_object, v17);
  }
LABEL_24:
  if ( !v22 )
    goto LABEL_69;
  v30 = System_Collections_Generic_List_int___ToArray(
          v22,
          (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.waveBattleEnemyClassIds = v30;
  sub_1C21DDC(&this->fields.waveBattleEnemyClassIds, v30);
  this->fields._IsClearedWave_k__BackingField = v60 < restartWave;
  Master_object = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Master_object = (__int64)BalanceConfig_TypeInfo;
  }
  v31 = 0;
  v55 = deck;
  v56 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 160LL) * index;
  while ( 1 )
  {
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (__int64)BalanceConfig_TypeInfo;
    }
    static_fields = *(struct BalanceConfig_StaticFields **)(Master_object + 184);
    if ( v31 >= static_fields->DeckMemberMax )
      break;
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v33 = v56 + v31;
    if ( v31 < static_fields->DeckMainMemberMax )
    {
      v34 = deck->fields.deckInfo;
      if ( !v34 )
        goto LABEL_69;
      svts = v34->fields.svts;
      if ( !svts )
        goto LABEL_69;
      if ( v33 >= svts->max_length )
        goto LABEL_70;
      v36 = svts->m_Items[v33];
      v37 = v57;
      if ( !v36 )
        goto LABEL_69;
      initPos = v36->fields.initPos;
    }
    else
    {
      v37 = v57;
      initPos = v31 + 1;
    }
    if ( !v37 )
      goto LABEL_69;
    if ( v31 >= v37->max_length )
      goto LABEL_70;
    v39 = v37->m_Items[v31];
    v40 = *p_memberList;
    if ( v39 )
    {
      v41 = *(_OWORD *)&v39->fields.id.fields.fakeValue;
      *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&v39->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v63.fields.fakeValue = v41;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v62 = v63;
      v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v62, 0LL);
      Master_object = (__int64)UserEventDeckEntity__GetEquipList_41343960(deck, v42, restartWave > 0, 0LL);
      v43 = (System_Int64_array *)Master_object;
      if ( restartWave < 1 )
      {
        equipSvtIdList = 0LL;
      }
      else
      {
        v44 = deck->fields.deckInfo;
        if ( !v44 )
          goto LABEL_69;
        v45 = v44->fields.svts;
        if ( !v45 )
          goto LABEL_69;
        if ( v33 >= v45->max_length )
          goto LABEL_70;
        v46 = v45->m_Items[v33];
        if ( !v46 )
          goto LABEL_69;
        equipSvtIdList = v46->fields.svtEquipIds;
      }
      v48 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_33012864(
        v48,
        v31,
        v39,
        v43,
        setupInfo,
        questRestrictionInfo,
        0LL,
        initPos,
        equipSvtIdList,
        v60 < restartWave,
        0LL);
      if ( !v40 )
        goto LABEL_69;
      if ( v48 )
      {
        Master_object = sub_1C21F74(v48, v40->obj.klass->_1.element_class);
        if ( !Master_object )
        {
LABEL_71:
          v54 = sub_1C220B8();
          sub_1C21F60(v54, 0LL);
        }
      }
      max_length = v40->max_length;
      deck = v55;
    }
    else
    {
      v48 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_33022220(v48, v31, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
      if ( !v40 )
        goto LABEL_69;
      if ( v48 )
      {
        Master_object = sub_1C21F74(v48, v40->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_71;
      }
      max_length = v40->max_length;
    }
    if ( v31 >= max_length )
      goto LABEL_70;
    v50 = &v40->obj.klass + v31;
    v50[4] = (Il2CppClass *)v48;
    Master_object = sub_1C21DDC(v50 + 4, v48);
    v51 = *p_memberList;
    if ( !*p_memberList )
      goto LABEL_69;
    if ( v31 >= v51->max_length )
      goto LABEL_70;
    Master_object = (__int64)v51->m_Items[v31];
    if ( !Master_object )
      goto LABEL_69;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)Master_object,
      this->fields.waveBattleEnemyClassIds,
      0LL);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_69;
    if ( v31 >= memberList->max_length )
      goto LABEL_70;
    Master_object = (__int64)memberList->m_Items[v31];
    if ( !Master_object )
      goto LABEL_69;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)Master_object,
                          0LL)
                      + cost;
    Master_object = (__int64)BalanceConfig_TypeInfo;
    ++v31;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyListViewItem__CheckDeckConditionServantNum(
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
  int32_t type; // w8
  struct QuestRestrictionInfo_o *v18; // x9
  int32_t servantNumMin; // w20
  int32_t v20; // w8
  BalanceConfig_c *v21; // x0

  if ( (byte_4BD80E5 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD80E5 = 1;
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
  ServantNumRangeType = QuestRestrictionInfo__GetServantNumRangeType(questRestrictionInfo, 0LL);
  if ( ServantNumRangeType == 5 )
  {
    questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    }
    type = questRestrictionInfo->fields.uniqueSvtRestrictionEntity[2].fields.type;
    if ( deckMemberCount - v13 >= 1 && v13 < type )
      return 0;
    v18 = this->fields.questRestrictionInfo;
    if ( v18 )
    {
      servantNumMin = v18->fields.servantNumMin;
      if ( !LODWORD(questRestrictionInfo->fields.myServantNumRestrictionEntity) )
      {
        j_il2cpp_runtime_class_init_0(questRestrictionInfo);
        type = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
      }
      if ( servantNumMin <= type )
        v20 = v13;
      else
        v20 = deckMemberCount;
      return servantNumMax >= deckMemberCount && servantNumMin <= v20;
    }
LABEL_28:
    sub_1C22094(questRestrictionInfo, *(_QWORD *)&deckMemberCount);
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


void __fastcall PartyListViewItem__CheckRestriction(PartyListViewItem_o *this, const MethodInfo *method)
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
  il2cpp_array_size_t v14; // w21
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
  int64_t sortValue2; // x20
  __int64 sortValue1_low; // x21
  __int64 v42; // x25
  __int64 v43; // x8
  __int64 v44; // x8
  struct QuestRestrictionInfo_o *v45; // x8
  il2cpp_array_size_t k; // w20
  struct PartyOrganizationListViewItem_array *v47; // x8
  PartyOrganizationListViewItem_o *v48; // x8
  il2cpp_array_size_t j; // w21
  struct PartyOrganizationListViewItem_array *v50; // x8

  if ( (byte_4BD80D9 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BD80D9 = 1;
  }
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
    if ( v3 >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_105;
    if ( v3 >= memberList->max_length )
      goto LABEL_106;
    IsUseOldMaster = memberList->m_Items[v3];
    if ( !IsUseOldMaster )
      goto LABEL_105;
    PartyOrganizationListViewItem__CheckRestriction(IsUseOldMaster, this, v3, 0LL);
    v8 = this->fields.memberList;
    if ( !v8 )
      goto LABEL_105;
    if ( v3 >= v8->max_length )
      goto LABEL_106;
    v9 = v8->m_Items[v3];
    if ( !v9 )
      goto LABEL_105;
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
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_105;
    if ( ((unsigned __int8)IsUseOldMaster & 1) != 0 )
    {
      FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(
                                    this->fields.questRestrictionInfo,
                                    0LL);
      IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      v14 = 0;
      for ( i = 0; ; i |= v17->fields.isFixedSupportPositionRestriction )
      {
        if ( !LODWORD(IsUseOldMaster->fields.npcFollowerSvtId) )
        {
          j_il2cpp_runtime_class_init_0(IsUseOldMaster);
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
        }
        if ( (signed int)v14 >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
          break;
        v16 = this->fields.memberList;
        if ( !v16 )
          goto LABEL_105;
        if ( v14 >= v16->max_length )
          goto LABEL_106;
        v17 = v16->m_Items[v14];
        if ( !v17 )
          goto LABEL_105;
        ++v14;
        FixedServantPositionCount -= v17->fields.isFixedServantPositionAgreement;
      }
      if ( !(i & 1 | (FixedServantPositionCount > 0)) )
      {
        v30 = this->fields.memberList;
        if ( !v30 )
          goto LABEL_105;
        max_length = v30->max_length;
        if ( max_length >= 1 )
        {
          v32 = 0;
          while ( v32 < max_length )
          {
            IsUseOldMaster = v30->m_Items[v32];
            if ( !IsUseOldMaster )
              goto LABEL_105;
            PartyOrganizationListViewItem__ResetPositionRestriction(IsUseOldMaster, 0LL);
            max_length = v30->max_length;
            if ( (int)++v32 >= max_length )
              goto LABEL_66;
          }
          goto LABEL_106;
        }
      }
      goto LABEL_66;
    }
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)QuestRestrictionInfo__GetFixedMyServantPositionCount(
                                                          this->fields.questRestrictionInfo,
                                                          0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_105;
    v18 = (int)IsUseOldMaster;
    FixedPositionCount = QuestRestrictionInfo__GetFixedPositionCount(this->fields.questRestrictionInfo, 0LL);
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    v20 = 0;
    v21 = 0;
    v22 = -1;
    while ( 1 )
    {
      if ( !LODWORD(IsUseOldMaster->fields.npcFollowerSvtId) )
      {
        j_il2cpp_runtime_class_init_0(IsUseOldMaster);
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( v20 >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
        break;
      v23 = this->fields.memberList;
      if ( !v23 )
        goto LABEL_105;
      if ( v20 >= v23->max_length )
        goto LABEL_106;
      v24 = v23->m_Items[v20];
      if ( !v24 )
        goto LABEL_105;
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
      goto LABEL_58;
    v33 = this->fields.memberList;
    if ( !v33 )
      goto LABEL_105;
    v34 = v33->max_length;
    if ( v34 < 1 )
    {
LABEL_58:
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
          if ( (signed int)j >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
            break;
          v50 = this->fields.memberList;
          if ( !v50 )
            goto LABEL_105;
          if ( j >= v50->max_length )
            goto LABEL_106;
          IsUseOldMaster = v50->m_Items[j];
          if ( !IsUseOldMaster )
            goto LABEL_105;
          PartyOrganizationListViewItem__ResetPositionRestrictionNeedStarting(IsUseOldMaster, 0LL);
        }
      }
      if ( (FixedPositionCount > 0) | v21 & 1 )
        goto LABEL_66;
      v36 = this->fields.memberList;
      if ( !v36 )
        goto LABEL_105;
      v37 = v36->max_length;
      if ( v37 < 1 )
      {
LABEL_66:
        v39 = this->fields.questRestrictionInfo;
        if ( !v39 || v39->fields.servantNumMin != 1 )
          return;
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( IsUseOldMaster )
        {
          sortValue2 = IsUseOldMaster->fields.sortValue2;
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( IsUseOldMaster )
          {
            if ( sortValue2 )
            {
              sortValue1_low = LODWORD(IsUseOldMaster->fields.sortValue1);
              if ( (int)sortValue1_low >= 1 )
              {
                IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                v42 = 0LL;
                v5 = 0;
                while ( 1 )
                {
                  if ( !LODWORD(IsUseOldMaster->fields.npcFollowerSvtId) )
                  {
                    j_il2cpp_runtime_class_init_0(IsUseOldMaster);
                    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                  }
                  if ( v42 >= *(int *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
                    break;
                  if ( sortValue1_low != ++v42 )
                  {
                    v43 = *(_QWORD *)(sortValue2 + 120);
                    if ( !v43 )
                      goto LABEL_105;
                    if ( v42 - 1 >= (unsigned __int64)*(unsigned int *)(v43 + 24) )
                      goto LABEL_106;
                    v44 = *(_QWORD *)(v43 + 8 * v42 + 24);
                    if ( !v44 )
                      goto LABEL_105;
                    if ( *(_QWORD *)(v44 + 112) )
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
                  if ( !LODWORD(IsUseOldMaster->fields.npcFollowerSvtId) )
                  {
                    j_il2cpp_runtime_class_init_0(IsUseOldMaster);
                    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                  }
                  if ( (signed int)k >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
                    break;
                  v47 = this->fields.memberList;
                  if ( !v47 )
                    goto LABEL_105;
                  if ( k >= v47->max_length )
                    goto LABEL_106;
                  v48 = v47->m_Items[k];
                  if ( !v48 )
                    goto LABEL_105;
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
LABEL_105:
        sub_1C22094(IsUseOldMaster, method);
      }
      v38 = 0;
      while ( v38 < v37 )
      {
        IsUseOldMaster = v36->m_Items[v38];
        if ( !IsUseOldMaster )
          goto LABEL_105;
        PartyOrganizationListViewItem__ResetPositionRestrictionServant(IsUseOldMaster, 0LL);
        v37 = v36->max_length;
        if ( (int)++v38 >= v37 )
          goto LABEL_66;
      }
    }
    else
    {
      v35 = 0;
      while ( v35 < v34 )
      {
        IsUseOldMaster = v33->m_Items[v35];
        if ( !IsUseOldMaster )
          goto LABEL_105;
        PartyOrganizationListViewItem__ResetPositionRestrictionMyServant(IsUseOldMaster, 0LL);
        v34 = v33->max_length;
        if ( (int)++v35 >= v34 )
          goto LABEL_58;
      }
    }
LABEL_106:
    sub_1C2209C(IsUseOldMaster, method);
  }
}


void __fastcall PartyListViewItem__ClearDeckName(PartyListViewItem_o *this, const MethodInfo *method)
{
  struct System_String_o *DefaultDeckName; // x0

  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, method);
  this->fields.deckName = DefaultDeckName;
  sub_1C21DDC(&this->fields.deckName, DefaultDeckName);
}


void __fastcall PartyListViewItem__ClearEquip(PartyListViewItem_o *this, const MethodInfo *method)
{
  il2cpp_array_size_t i; // w20
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w22

  if ( (byte_4BD80DF & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD80DF = 1;
  }
  for ( i = 0; ; ++i )
  {
    v4 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v4->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_14;
    if ( i >= memberList->max_length )
      sub_1C2209C(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v4 )
LABEL_14:
      sub_1C22094(v4, method);
    if ( !LOBYTE(v4->_1.fields) )
    {
      cost = this->fields.cost;
      this->fields.cost = cost - PartyOrganizationListViewItem__ClearEquip((PartyOrganizationListViewItem_o *)v4, 0LL);
    }
  }
  PartyListViewItem__CheckRestriction(this, method);
}


void __fastcall PartyListViewItem__ClearFollower(PartyListViewItem_o *this, const MethodInfo *method)
{
  il2cpp_array_size_t i; // w20
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8

  if ( (byte_4BD80E0 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD80E0 = 1;
  }
  for ( i = 0; ; ++i )
  {
    v4 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v4->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_12;
    if ( i >= memberList->max_length )
      sub_1C2209C(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v4 )
LABEL_12:
      sub_1C22094(v4, method);
    PartyOrganizationListViewItem__ClearFollower((PartyOrganizationListViewItem_o *)v4, 0LL);
  }
  PartyListViewItem__CheckRestriction(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__ClearMember(PartyListViewItem_o *this, int32_t num, const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v5; // x19
  int32_t cost; // w22
  struct PartyOrganizationListViewItem_array *v7; // x8
  const MethodInfo *v8; // x1

  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_8;
  if ( memberList->max_length <= num )
    goto LABEL_9;
  v5 = this;
  this = (PartyListViewItem_o *)memberList->m_Items[num];
  if ( !this
    || (cost = v5->fields.cost,
        this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(
                                        (PartyOrganizationListViewItem_o *)this,
                                        0LL),
        v7 = v5->fields.memberList,
        v5->fields.cost = cost - (_DWORD)this,
        !v7) )
  {
LABEL_8:
    sub_1C22094(this, *(_QWORD *)&num);
  }
  if ( v7->max_length <= num )
LABEL_9:
    sub_1C2209C(this, *(_QWORD *)&num);
  this = (PartyListViewItem_o *)v7->m_Items[num];
  if ( !this )
    goto LABEL_8;
  PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)this, 0LL);
  PartyListViewItem__CheckRestriction(v5, v8);
}


void __fastcall PartyListViewItem__ClearMember_32894284(PartyListViewItem_o *this, const MethodInfo *method)
{
  il2cpp_array_size_t i; // w20
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8

  if ( (byte_4BD80DE & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD80DE = 1;
  }
  for ( i = 0; ; ++i )
  {
    v4 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v4->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_14;
    if ( i >= memberList->max_length )
      sub_1C2209C(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v4 )
LABEL_14:
      sub_1C22094(v4, method);
    if ( !LOBYTE(v4->_1.fields) )
      PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)v4, 0LL);
  }
  this->fields.cost = 0;
  PartyListViewItem__CheckRestriction(this, method);
}


PartyListViewItem_o *__fastcall PartyListViewItem__Clone(PartyListViewItem_o *this, const MethodInfo *method)
{
  PartyListViewItem_o *v3; // x20
  const MethodInfo *v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4BD80D8 & 1) == 0 )
  {
    sub_1C21E38(&PartyListViewItem_TypeInfo);
    byte_4BD80D8 = 1;
  }
  v3 = (PartyListViewItem_o *)sub_1C22084(PartyListViewItem_TypeInfo);
  PartyListViewItem___ctor(v3, v4);
  if ( !v3 )
    sub_1C22094(v5, v6);
  PartyListViewItem__Set(v3, this, v7);
  return v3;
}


bool __fastcall PartyListViewItem__CompMember(
        PartyListViewItem_o *this,
        PartyListViewItem_o *item,
        const MethodInfo *method)
{
  PartyListViewItem_o *v4; // x20
  int v6; // w21
  int v7; // w24
  int v8; // w23
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v10; // x9

  v4 = this;
  if ( (byte_4BD80E9 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD80E9 = 1;
  }
  if ( !item )
LABEL_17:
    sub_1C22094(this, item);
  if ( System_String__op_Inequality(v4->fields.deckName, item->fields.deckName, 0LL) )
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
    v8 = *(_DWORD *)(*(_QWORD *)&this->fields._IsWaveBattleRestart_k__BackingField + 156LL);
    if ( v6 + 1 >= v8 )
      break;
    memberList = v4->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( v7 >= memberList->max_length )
      goto LABEL_18;
    v10 = item->fields.memberList;
    if ( !v10 )
      goto LABEL_17;
    if ( ++v6 >= v10->max_length )
LABEL_18:
      sub_1C2209C(this, item);
    this = (PartyListViewItem_o *)memberList->m_Items[v7];
    if ( !this )
      goto LABEL_17;
  }
  while ( PartyOrganizationListViewItem__CompMember((PartyOrganizationListViewItem_o *)this, v10->m_Items[v7], 0LL) );
  return v7 >= v8;
}


void __fastcall PartyListViewItem__Finalize(PartyListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


System_String_array *__fastcall PartyListViewItem__GetAssetNameList(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  unsigned __int64 i; // x24
  Il2CppObject *AssetName; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v8; // x0
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  Il2CppObject *v12; // x1
  Il2CppClass **v13; // x0

  if ( (byte_4BD80F5 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    byte_4BD80F5 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  for ( i = 0LL; ; ++i )
  {
    AssetName = (Il2CppObject *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      AssetName = (Il2CppObject *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= *((int *)AssetName[11].monitor + 39) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_21;
    if ( i >= memberList->max_length )
      sub_1C2209C(AssetName, v4);
    v8 = memberList->m_Items[i];
    if ( v8 )
    {
      AssetName = (Il2CppObject *)PartyOrganizationListViewItem__GetAssetName(v8, 0LL);
      if ( AssetName )
      {
        if ( !v3 )
          goto LABEL_21;
        items = v3->fields._items;
        v10 = Method_System_Collections_Generic_List_string__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v3->fields._size;
        v12 = AssetName;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            AssetName,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
        }
        else
        {
          v13 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v13[4] = (Il2CppClass *)v12;
          sub_1C21DDC(v13 + 4, v12);
        }
      }
    }
  }
  if ( !v3 )
LABEL_21:
    sub_1C22094(AssetName, v4);
  if ( v3->fields._size < 1 )
    return 0LL;
  else
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_Int32_array *__fastcall PartyListViewItem__GetCommandCardList(
        PartyListViewItem_o *this,
        int32_t typeMax,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Int32_array *v6; // x21
  unsigned __int64 i; // x23
  _QWORD *p_image; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v10; // x0
  unsigned __int64 v11; // x9
  unsigned __int64 j; // x8

  if ( (byte_4BD80F4 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    byte_4BD80F4 = 1;
  }
  v6 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, (unsigned int)typeMax);
  for ( i = 0LL; ; ++i )
  {
    p_image = &BalanceConfig_TypeInfo->_1.image;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      p_image = &BalanceConfig_TypeInfo->_1.image;
    }
    if ( (__int64)i >= *(int *)(p_image[23] + 160LL) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
LABEL_22:
      sub_1C22094(p_image, v5);
    if ( i >= memberList->max_length )
LABEL_21:
      sub_1C2209C(p_image, v5);
    v10 = memberList->m_Items[i];
    if ( v10 )
    {
      p_image = PartyOrganizationListViewItem__GetCommandCardList(v10, 0LL);
      if ( p_image )
      {
        if ( typeMax >= 1 )
        {
          v11 = *((unsigned int *)p_image + 6);
          for ( j = 0LL; typeMax != j; ++j )
          {
            if ( (__int64)j < (int)v11 )
            {
              if ( !v6 )
                goto LABEL_22;
              if ( j >= v6->max_length || j >= v11 )
                goto LABEL_21;
              v6->m_Items[j + 1] += *((_DWORD *)p_image + j + 8);
            }
          }
        }
      }
    }
  }
  return v6;
}


int32_t __fastcall PartyListViewItem__GetDeckCondition(PartyListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  void *DeckConditionServantNumAndPosition; // x0
  il2cpp_array_size_t v5; // w28
  int v6; // w25
  char v7; // w26
  int v8; // w29
  int v9; // w21
  int32_t v10; // w20
  int32_t DeckMainMemberMax; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v13; // x8
  PartyOrganizationListViewItem_o *v14; // x22
  _BOOL4 isFollower; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v17; // w28
  __int64 v18; // x8
  struct PartyOrganizationListViewItem_array *v19; // x8
  Il2CppClass **v20; // x8
  PartyOrganizationListViewItem_o *v21; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // kr10_16
  int32_t v23; // w23
  struct PartyOrganizationListViewItem_array *v24; // x9
  PartyOrganizationListViewItem_o *v25; // x9
  const MethodInfo *v26; // x5
  const MethodInfo *v27; // x5
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  _BOOL4 isNotSingleSupportOnly; // w8
  struct PartyOrganizationListViewItem_array *v30; // x26
  int max_length; // w8
  const MethodInfo_364EDE4 **v32; // x25
  int v33; // w29
  Il2CppClass **v34; // x8
  PartyOrganizationListViewItem_o *v35; // x20
  PartyOrganizationListViewItem_o *v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // kr20_16
  System_Collections_Generic_List_object__o *v38; // x21
  int size; // w8
  int v40; // w9
  char v41; // w24
  int32_t v42; // w23
  struct PartyOrganizationListViewItem_array *v43; // x22
  const MethodInfo_364EDE4 **v44; // x28
  Il2CppObject *Item; // x0
  ServantEntity_o *servantEntity; // x25
  int32_t svtLimitCount; // w26
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x24
  System_Collections_Generic_IEnumerable_TSource__o *Individuality; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x24
  __int64 i; // x23
  struct PartyOrganizationListViewItem_array *v53; // x8
  PartyOrganizationListViewItem_o *v54; // x8
  struct ServantEntity_o *v55; // x8
  __int64 v56; // x20
  __int64 v57; // x21
  int32_t v58; // w20
  unsigned __int64 j; // x24
  struct PartyOrganizationListViewItem_array *v60; // x8
  PartyOrganizationListViewItem_o *v61; // x8
  struct ServantEntity_o *v62; // x8
  __int64 v63; // x21
  __int64 v64; // x22
  System_Collections_Generic_List_T__o *v66; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_4BD80E7 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BD80E7 = 1;
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
    DeckMainMemberMax = *(_DWORD *)(*((_QWORD *)DeckConditionServantNumAndPosition + 23) + 160LL);
    if ( (int)v5 >= DeckMainMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_164;
    if ( v5 >= memberList->max_length )
LABEL_165:
      sub_1C2209C(DeckConditionServantNumAndPosition, method);
    v13 = &memberList->obj.klass + (int)v5;
    v14 = (PartyOrganizationListViewItem_o *)v13[4];
    if ( !v14 )
      goto LABEL_164;
    if ( PartyOrganizationListViewItem__get_IsLeave((PartyOrganizationListViewItem_o *)v13[4], 0LL) )
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
        SvtId = PartyOrganizationListViewItem__get_SvtId(v14, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(SvtId, 0LL) >= 1 )
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
    v18 = *((_QWORD *)DeckConditionServantNumAndPosition + 23);
    if ( DeckMainMemberMax >= *(_DWORD *)(v18 + 156) )
      break;
    v19 = this->fields.memberList;
    if ( !v19 )
      goto LABEL_164;
    if ( DeckMainMemberMax >= v19->max_length )
      goto LABEL_165;
    v20 = &v19->obj.klass + DeckMainMemberMax;
    v21 = (PartyOrganizationListViewItem_o *)v20[4];
    if ( !v21 )
      goto LABEL_164;
    if ( PartyOrganizationListViewItem__get_IsLeave((PartyOrganizationListViewItem_o *)v20[4], 0LL) )
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
        v22 = PartyOrganizationListViewItem__get_SvtId(v21, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v22, 0LL) >= 1 )
LABEL_46:
          ++v17;
      }
    }
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    ++DeckMainMemberMax;
  }
  DeckConditionServantNumAndPosition = 0LL;
  v23 = v8 + v17;
  switch ( this->fields.menuKind )
  {
    case 4:
      DeckConditionServantNumAndPosition = (void *)PartyListViewItem__CheckDeckConditionServantNum(
                                                     this,
                                                     v23,
                                                     v10,
                                                     v7 & 1,
                                                     1,
                                                     v2);
      if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
        goto LABEL_99;
      goto LABEL_95;
    case 5:
      DeckConditionServantNumAndPosition = (void *)PartyListViewItem__GetDeckConditionServantNumAndPosition(
                                                     this,
                                                     v23,
                                                     v10,
                                                     v7 & 1,
                                                     1,
                                                     v2);
      if ( !(_DWORD)DeckConditionServantNumAndPosition )
        goto LABEL_95;
      return (int)DeckConditionServantNumAndPosition;
    case 6:
      return (int)DeckConditionServantNumAndPosition;
    case 7:
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
        goto LABEL_164;
      if ( !QuestRestrictionInfo__IsServantNum((QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition, 0LL) )
        goto LABEL_75;
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
        goto LABEL_164;
      if ( QuestRestrictionInfo__IsFixedServantPosition(
             (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
             0LL) )
      {
LABEL_75:
        DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
        if ( !DeckConditionServantNumAndPosition )
          goto LABEL_164;
        if ( QuestRestrictionInfo__IsServantNum((QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition, 0LL) )
        {
          DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
          if ( !DeckConditionServantNumAndPosition )
            goto LABEL_164;
          if ( QuestRestrictionInfo__IsFixedServantPosition(
                 (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                 0LL) )
          {
            LODWORD(DeckConditionServantNumAndPosition) = PartyListViewItem__GetDeckConditionServantNumAndPosition(
                                                            this,
                                                            v23,
                                                            v10,
                                                            v7 & 1,
                                                            v9,
                                                            v27);
            if ( (_DWORD)DeckConditionServantNumAndPosition )
              return (int)DeckConditionServantNumAndPosition;
          }
        }
      }
      else if ( !PartyListViewItem__CheckDeckConditionServantNum(this, v23, v10, v7 & 1, v9, v26) )
      {
LABEL_99:
        LODWORD(DeckConditionServantNumAndPosition) = 14;
        return (int)DeckConditionServantNumAndPosition;
      }
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
        goto LABEL_164;
      if ( !QuestRestrictionInfo__IsMyServantNum((QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition, 0LL) )
        goto LABEL_88;
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
        goto LABEL_164;
      if ( !QuestRestrictionInfo__CheckMyServantNumRestriction(
              (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
              v17,
              0LL) )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 16;
        return (int)DeckConditionServantNumAndPosition;
      }
LABEL_88:
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
        goto LABEL_164;
      DeckConditionServantNumAndPosition = (void *)QuestRestrictionInfo__IsServantNum(
                                                     (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                                                     0LL);
      if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
      {
        DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
        }
        v18 = *((_QWORD *)DeckConditionServantNumAndPosition + 23);
LABEL_93:
        if ( v10 + v9 < *(_DWORD *)(v18 + 160) )
        {
          LODWORD(DeckConditionServantNumAndPosition) = 3;
          return (int)DeckConditionServantNumAndPosition;
        }
      }
LABEL_95:
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( !questRestrictionInfo )
        goto LABEL_133;
      isNotSingleSupportOnly = questRestrictionInfo->fields.isNotSingleSupportOnly;
      if ( v10 == 1 && (v6 & isNotSingleSupportOnly & 1) != 0 )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 22;
        return (int)DeckConditionServantNumAndPosition;
      }
      v30 = this->fields.memberList;
      if ( !v30 )
        goto LABEL_164;
      max_length = v30->max_length;
      if ( max_length < 1 )
        goto LABEL_133;
      v32 = (const MethodInfo_364EDE4 **)&Method_System_Collections_Generic_List_int____get_Item__;
      v33 = 0;
      break;
    default:
      if ( !v17 )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 1;
        return (int)DeckConditionServantNumAndPosition;
      }
      if ( v10 != 1 )
        goto LABEL_81;
      v24 = this->fields.memberList;
      if ( !v24 )
        goto LABEL_164;
      if ( !v24->max_length )
        goto LABEL_165;
      v25 = v24->m_Items[0];
      if ( !v25 )
        goto LABEL_164;
      if ( v25->fields.userServantEntity )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 2;
        return (int)DeckConditionServantNumAndPosition;
      }
LABEL_81:
      v9 = v7 & 1;
      goto LABEL_93;
  }
  do
  {
    if ( v33 >= (unsigned int)max_length )
      goto LABEL_165;
    v34 = &v30->obj.klass + v33;
    v35 = (PartyOrganizationListViewItem_o *)v34[4];
    if ( !v35 )
      goto LABEL_164;
    v36 = (PartyOrganizationListViewItem_o *)v34[4];
    v35->fields._IsErrorNeedIndividuality_k__BackingField = 0;
    v37 = PartyOrganizationListViewItem__get_SvtId(v36, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    DeckConditionServantNumAndPosition = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                   v37,
                                                   0LL);
    if ( !(_DWORD)DeckConditionServantNumAndPosition )
    {
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
        goto LABEL_164;
      DeckConditionServantNumAndPosition = (void *)QuestRestrictionInfo__IsSetRequired(
                                                     (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                                                     v35->fields.index + 1,
                                                     v35->fields._InitPos_k__BackingField,
                                                     0LL);
      if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) != 0 )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 18;
        return (int)DeckConditionServantNumAndPosition;
      }
    }
    if ( !v35->fields.userServantEntity )
      goto LABEL_132;
    DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
    if ( !DeckConditionServantNumAndPosition )
      goto LABEL_164;
    DeckConditionServantNumAndPosition = QuestRestrictionInfo__GetNeedIndividualityList(
                                           (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                                           v35->fields._InitPos_k__BackingField,
                                           0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_164;
    v38 = (System_Collections_Generic_List_object__o *)DeckConditionServantNumAndPosition;
    DeckConditionServantNumAndPosition = QuestRestrictionInfo__GetRangeTypeList(
                                           this->fields.questRestrictionInfo,
                                           v35->fields._InitPos_k__BackingField,
                                           0LL);
    v66 = (System_Collections_Generic_List_T__o *)DeckConditionServantNumAndPosition;
    if ( !v38 )
      goto LABEL_132;
    if ( !DeckConditionServantNumAndPosition )
      goto LABEL_132;
    size = v38->fields._size;
    if ( size < 1 )
      goto LABEL_132;
    v40 = *((_DWORD *)DeckConditionServantNumAndPosition + 6);
    if ( v40 < 1 || size != v40 )
      goto LABEL_132;
    v41 = 0;
    v42 = 0;
    do
    {
      DeckConditionServantNumAndPosition = System_Collections_Generic_List_object___get_Item(v38, v42, *v32);
      if ( DeckConditionServantNumAndPosition )
      {
        DeckConditionServantNumAndPosition = System_Collections_Generic_List_object___get_Item(v38, v42, *v32);
        if ( !DeckConditionServantNumAndPosition )
          goto LABEL_164;
        if ( *((_QWORD *)DeckConditionServantNumAndPosition + 3) )
        {
          v43 = v30;
          v44 = v32;
          Item = System_Collections_Generic_List_object___get_Item(v38, v42, *v32);
          servantEntity = v35->fields.servantEntity;
          svtLimitCount = v35->fields.svtLimitCount;
          v48 = (System_Collections_Generic_IEnumerable_TSource__o *)Item;
          DeckConditionServantNumAndPosition = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(v35, 0LL);
          if ( !servantEntity )
            goto LABEL_164;
          Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                 servantEntity,
                                                                                 svtLimitCount,
                                                                                 (int32_t)DeckConditionServantNumAndPosition,
                                                                                 0LL);
          v50 = System_Linq_Enumerable__Intersect_int_(
                  v48,
                  Individuality,
                  (const MethodInfo_2FD4278 *)Method_System_Linq_Enumerable_Intersect_int___);
          v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       v50,
                                                                       (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( System_Collections_Generic_List_Int32Enum___get_Item(
                 v66,
                 v42,
                 (const MethodInfo_36345CC *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
          {
            DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                           v51,
                                                           (const MethodInfo_2FBAD74 *)Method_System_Linq_Enumerable_Any_int___);
            v32 = v44;
            v30 = v43;
            if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) != 0 )
              goto LABEL_132;
LABEL_128:
            v41 = 1;
            goto LABEL_130;
          }
          DeckConditionServantNumAndPosition = (void *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                         v66,
                                                         v42,
                                                         (const MethodInfo_36345CC *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          v32 = v44;
          if ( (_DWORD)DeckConditionServantNumAndPosition == 2 )
          {
            DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                           v51,
                                                           (const MethodInfo_2FBAD74 *)Method_System_Linq_Enumerable_Any_int___);
            v30 = v43;
            if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
              goto LABEL_132;
            goto LABEL_128;
          }
          v41 = 1;
          v30 = v43;
        }
      }
LABEL_130:
      ++v42;
    }
    while ( v42 < v38->fields._size );
    if ( (v41 & 1) != 0 )
    {
      v35->fields._IsErrorNeedIndividuality_k__BackingField = 1;
      LODWORD(DeckConditionServantNumAndPosition) = 23;
      return (int)DeckConditionServantNumAndPosition;
    }
LABEL_132:
    max_length = v30->max_length;
    ++v33;
  }
  while ( v33 < max_length );
LABEL_133:
  DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
  for ( i = 0LL; ; ++i )
  {
    if ( !*((_DWORD *)DeckConditionServantNumAndPosition + 56) )
    {
      j_il2cpp_runtime_class_init_0(DeckConditionServantNumAndPosition);
      DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    }
    if ( (int)i >= *(_DWORD *)(*((_QWORD *)DeckConditionServantNumAndPosition + 23) + 156LL) )
    {
      LODWORD(DeckConditionServantNumAndPosition) = 0;
      return (int)DeckConditionServantNumAndPosition;
    }
    v53 = this->fields.memberList;
    if ( !v53 )
      goto LABEL_164;
    if ( (unsigned int)i >= v53->max_length )
      goto LABEL_165;
    v54 = v53->m_Items[(int)i];
    if ( !v54 )
      goto LABEL_164;
    if ( v54->fields.userServantEntity )
      break;
LABEL_158:
    ;
  }
  v55 = v54->fields.servantEntity;
  if ( !v55 )
LABEL_164:
    sub_1C22094(DeckConditionServantNumAndPosition, method);
  v57 = *(_QWORD *)&v55->fields.baseSvtId.fields.currentCryptoKey;
  v56 = *(_QWORD *)&v55->fields.baseSvtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v67.fields.currentCryptoKey = v57;
  *(_QWORD *)&v67.fields.fakeValue = v56;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v67, 0LL);
  for ( j = 0LL; ; ++j )
  {
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    }
    if ( (__int64)j >= *(int *)(*((_QWORD *)DeckConditionServantNumAndPosition + 23) + 156LL) )
      goto LABEL_158;
    if ( i != j )
    {
      v60 = this->fields.memberList;
      if ( !v60 )
        goto LABEL_164;
      if ( j >= v60->max_length )
        goto LABEL_165;
      v61 = v60->m_Items[j];
      if ( !v61 )
        goto LABEL_164;
      if ( v61->fields.userServantEntity )
      {
        v62 = v61->fields.servantEntity;
        if ( !v62 )
          goto LABEL_164;
        v64 = *(_QWORD *)&v62->fields.baseSvtId.fields.currentCryptoKey;
        v63 = *(_QWORD *)&v62->fields.baseSvtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v68.fields.currentCryptoKey = v64;
        *(_QWORD *)&v68.fields.fakeValue = v63;
        if ( v58 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v68, 0LL) )
          break;
      }
    }
  }
  LODWORD(DeckConditionServantNumAndPosition) = 4;
  return (int)DeckConditionServantNumAndPosition;
}


int32_t __fastcall PartyListViewItem__GetDeckConditionServantNum(
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


int32_t __fastcall PartyListViewItem__GetDeckConditionServantNumAndPosition(
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
  il2cpp_array_size_t v15; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v17; // x8

  if ( (byte_4BD80E6 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD80E6 = 1;
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
    sub_1C22094(questRestrictionInfo, v11);
  FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(questRestrictionInfo, 0LL);
  v15 = 0;
  questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( !LODWORD(questRestrictionInfo->fields.myServantNumRestrictionEntity) )
    {
      j_il2cpp_runtime_class_init_0(questRestrictionInfo);
      questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v15 >= SHIDWORD(questRestrictionInfo->fields.uniqueSvtRestrictionEntity[2].fields.name) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( v15 >= memberList->max_length )
      sub_1C2209C(questRestrictionInfo, v11);
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


System_Int64_array *__fastcall PartyListViewItem__GetEquipList(PartyListViewItem_o *this, const MethodInfo *method)
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

  if ( (byte_4BD80EC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_long__TypeInfo);
    byte_4BD80EC = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C22084(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_3636894 *)Method_System_Collections_Generic_List_long___ctor__);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_15;
  v7 = 0LL;
  while ( 1 )
  {
    max_length = memberList->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1C2209C(EquipUserSvtId, v5);
    v9 = &memberList->obj.klass + v7;
    v10 = (PartyOrganizationListViewItem_o *)v9[4];
    if ( !v10 )
      goto LABEL_15;
    EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)v9[4], 0LL);
    if ( EquipUserSvtId >= 1 )
    {
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v10, 0LL);
      if ( !v3 )
        goto LABEL_15;
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_long__Add__;
      ++v3->fields._version;
      if ( !items )
        goto LABEL_15;
      size = v3->fields._size;
      v5 = EquipUserSvtId;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v3,
          EquipUserSvtId,
          *(const MethodInfo_36370E8 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
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
    sub_1C22094(EquipUserSvtId, v5);
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_3638BA0 *)Method_System_Collections_Generic_List_long__ToArray__);
}


bool __fastcall PartyListViewItem__GetEventUpVal(
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
  unsigned __int64 i; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  EventUpValInfo_array *v13; // x8

  v6 = this;
  if ( (byte_4BD80F3 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    this = (PartyListViewItem_o *)sub_1C21E38(&EventUpValInfo___TypeInfo);
    byte_4BD80F3 = 1;
  }
  setupInfo = v6->fields.setupInfo;
  if ( setupInfo )
  {
    setupInfo = (struct EventUpValSetupInfo_o *)setupInfo->fields.eventIdList;
    if ( !setupInfo )
LABEL_23:
      sub_1C22094(this, eventId);
    v8 = *(_QWORD *)&setupInfo->fields.questPhase;
    if ( v8 )
    {
      if ( !(_DWORD)v8 )
LABEL_24:
        sub_1C2209C(this, eventId);
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
  v10 = (EventUpValInfo_array *)sub_1C21EE0(EventUpValInfo___TypeInfo, (unsigned int)v9->static_fields->DeckMemberMax);
  *eventUpValList = v10;
  sub_1C21DDC(eventUpValList, v10);
  for ( i = 0LL; ; ++i )
  {
    this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= *(int *)(*(_QWORD *)&this->fields._IsWaveBattleRestart_k__BackingField + 156LL) )
      break;
    memberList = v6->fields.memberList;
    if ( !memberList )
      goto LABEL_23;
    if ( i >= memberList->max_length )
      goto LABEL_24;
    this = (PartyListViewItem_o *)memberList->m_Items[i];
    if ( this )
    {
      v13 = *eventUpValList;
      if ( !*eventUpValList )
        goto LABEL_23;
      if ( i >= v13->max_length )
        goto LABEL_24;
      PartyOrganizationListViewItem__GetEventUpVal((PartyOrganizationListViewItem_o *)this, &v13->m_Items[i], 0LL);
    }
  }
  return 1;
}


int32_t __fastcall PartyListViewItem__GetFollowerIndex(
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
  __int64 v18; // x21
  System_Func_object__bool__o *v19; // x23
  struct QuestRestrictionInfo_o *v20; // x8
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BD80D6 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_FollowerInfo___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&Method_PartyListViewItem___c__DisplayClass32_0__GetFollowerIndex_b__0__);
    sub_1C21E38(&PartyListViewItem___c__DisplayClass32_0_TypeInfo);
    byte_4BD80D6 = 1;
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
                                                     0LL);
  if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
  {
    if ( !deck )
      goto LABEL_39;
    questRestrictionInfo = (QuestRestrictionInfo_o *)UserEventDeckEntity__GetFollowerIndexList(deck, 0LL);
    if ( !questRestrictionInfo )
      goto LABEL_39;
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_int__o *)questRestrictionInfo,
      (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v23 = v22;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
             &v23,
             (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
      if ( !v8 )
        break;
      deckInfo = deck->fields.deckInfo;
      if ( !deckInfo )
        sub_1C22094(v8, v9);
      svts = deckInfo->fields.svts;
      if ( !svts )
        sub_1C22094(v8, v9);
      current = v23.fields._current;
      if ( v23.fields._current - 1 >= svts->max_length )
        sub_1C2209C(v8, v9);
      v13 = svts->m_Items[v23.fields._current - 1];
      if ( !v13 )
        sub_1C22094(v8, v9);
      v14 = this->fields.questRestrictionInfo;
      if ( !v14 )
        sub_1C22094(0LL, v9);
      if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(v14, v13->fields.initPos, 0LL) )
        goto LABEL_38;
    }
    current = 0;
LABEL_38:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v23,
      (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  }
  else
  {
LABEL_19:
    if ( !deck )
      goto LABEL_39;
    current = UserEventDeckEntity__GetFollowerIndex(deck, 0LL);
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
    v18 = sub_1C22084(PartyListViewItem___c__DisplayClass32_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v18, 0LL);
    if ( v18 )
    {
      *(_DWORD *)(v18 + 16) = current;
      v19 = (System_Func_object__bool__o *)sub_1C22084(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v19,
        (Il2CppObject *)v18,
        Method_PartyListViewItem___c__DisplayClass32_0__GetFollowerIndex_b__0__,
        0LL);
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)fixNpcFollowerInfoList,
              (System_Func_T__bool__o *)v19,
              (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_FollowerInfo___) )
        return current;
      goto LABEL_31;
    }
LABEL_39:
    sub_1C22094(questRestrictionInfo, deck);
  }
  return current;
}


int32_t __fastcall PartyListViewItem__GetFriendPointUpVal(PartyListViewItem_o *this, const MethodInfo *method)
{
  unsigned __int64 v3; // x21
  int32_t v4; // w20
  BalanceConfig_c *v5; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v7; // x0
  int32_t FriendPointUpVal; // w0

  if ( (byte_4BD80F2 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD80F2 = 1;
  }
  v3 = 0LL;
  v4 = 0;
  while ( 1 )
  {
    v5 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v3 >= v5->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      sub_1C22094(v5, method);
    if ( v3 >= memberList->max_length )
      sub_1C2209C(v5, method);
    v7 = memberList->m_Items[v3];
    if ( v7 )
    {
      FriendPointUpVal = PartyOrganizationListViewItem__GetFriendPointUpVal(v7, 0LL);
      if ( FriendPointUpVal > v4 )
        v4 = FriendPointUpVal;
    }
    ++v3;
  }
  return v4;
}


System_Boolean_array *__fastcall PartyListViewItem__GetIsFollowerList(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  __int64 v4; // x1
  System_Boolean_array *v5; // x20
  BalanceConfig_c *v6; // x0
  unsigned __int64 i; // x22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v9; // x8

  if ( (byte_4BD80F1 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&bool___TypeInfo);
    byte_4BD80F1 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v5 = (System_Boolean_array *)sub_1C21EE0(bool___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  v6 = BalanceConfig_TypeInfo;
  for ( i = 0LL; ; ++i )
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
    if ( i >= memberList->max_length )
      goto LABEL_18;
    v9 = memberList->m_Items[i];
    if ( v9 )
    {
      if ( !v5 )
LABEL_17:
        sub_1C22094(v6, v4);
      if ( i >= v5->max_length )
LABEL_18:
        sub_1C2209C(v6, v4);
      v5->m_Items[i + 4] = v9->fields.isFollower;
    }
  }
  return v5;
}


PartyOrganizationListViewItem_o *__fastcall PartyListViewItem__GetMember(
        PartyListViewItem_o *this,
        int32_t num,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8

  memberList = this->fields.memberList;
  if ( !memberList )
    sub_1C22094(this, num);
  if ( memberList->max_length <= num )
    sub_1C2209C(this, num);
  return memberList->m_Items[num];
}


int32_t __fastcall PartyListViewItem__GetMenuKind(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.menuKind;
}


int32_t __fastcall PartyListViewItem__GetNpcDeployIdx(
        PartyListViewItem_o *this,
        System_Int64_array *npcSvtIds,
        const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 myServantNumMax; // x0
  signed int max_length; // w9
  bool v6; // cc
  il2cpp_array_size_t v7; // w8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !npcSvtIds )
    sub_1C22094(this, npcSvtIds);
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
        sub_1C2209C(myServantNumMax, npcSvtIds);
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


QuestRestrictionInfo_o *__fastcall PartyListViewItem__GetQuestRestriction(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.questRestrictionInfo;
}


int32_t __fastcall PartyListViewItem__GetStartDeckCondition(PartyListViewItem_o *this, const MethodInfo *method)
{
  int32_t menuKind; // w8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int dialogMessageInfoDictionary; // w23
  PartyOrganizationListViewItem_o *v6; // x20
  il2cpp_array_size_t v7; // w24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int TotalCostRestriction; // w0
  QuestRestrictionInfo_o *v11; // x0
  int32_t FixedServantPositionCount; // w20
  il2cpp_array_size_t v13; // w25
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

  if ( (byte_4BD80E8 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BD80E8 = 1;
  }
  menuKind = this->fields.menuKind;
  if ( menuKind == 1 )
    goto LABEL_4;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( menuKind == 3 )
  {
    if ( !questRestrictionInfo )
LABEL_47:
      sub_1C22094(questRestrictionInfo, method);
    questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(
                                                       questRestrictionInfo,
                                                       0LL);
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
        if ( v7 >= memberList->max_length )
          goto LABEL_48;
        questRestrictionInfo = (QuestRestrictionInfo_o *)memberList->m_Items[v7];
        if ( !questRestrictionInfo )
          goto LABEL_47;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)questRestrictionInfo, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                           SvtId,
                                                           0LL);
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
         && (TotalCostRestriction = QuestRestrictionInfo__GetTotalCostRestriction(questRestrictionInfo, 0LL),
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
      FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(v11, 0LL);
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
        if ( (signed int)v13 >= SHIDWORD(questRestrictionInfo->fields.uniqueSvtRestrictionEntity[2].fields.name) )
          break;
        v17 = this->fields.memberList;
        if ( !v17 )
          goto LABEL_47;
        if ( v13 >= v17->max_length )
LABEL_48:
          sub_1C2209C(questRestrictionInfo, method);
        v18 = &v17->obj.klass + (int)v13;
        v19 = v18[4];
        if ( !v19 )
          goto LABEL_47;
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction((PartyOrganizationListViewItem_o *)v18[4], 0LL) )
        {
          LODWORD(questRestrictionInfo) = 18;
          return (int)questRestrictionInfo;
        }
        ++v13;
        v16 |= BYTE2(v19->_2.unity_user_data) != 0;
        v15 |= BYTE3(v19->_2.unity_user_data) != 0;
        FixedServantPositionCount -= BYTE6(v19->_2.unity_user_data) & 1;
        v14 |= BYTE4(v19->_2.unity_user_data) != 0;
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


int32_t __fastcall PartyListViewItem__GetSupportInitIndex(
        PartyListViewItem_o *this,
        System_Collections_Generic_List_FollowerInfo__o *fixNpcFollowerInfoList,
        const MethodInfo *method)
{
  PartyListViewItem_o *v4; // x20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t supportInitIndex; // w20
  int32_t v8; // w23
  BalanceConfig_c *v9; // x0
  __int64 v10; // x21
  System_Func_object__bool__o *v11; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  int myServantNumMax; // [xsp+Ch] [xbp-64h]

  v4 = this;
  if ( (byte_4BD80D7 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_FollowerInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_1C21E38(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_1C21E38(&Method_PartyListViewItem___c__DisplayClass33_0__GetSupportInitIndex_b__0__);
    this = (PartyListViewItem_o *)sub_1C21E38(&PartyListViewItem___c__DisplayClass33_0_TypeInfo);
    byte_4BD80D7 = 1;
  }
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_15:
    sub_1C22094(this, fixNpcFollowerInfoList);
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
      v10 = sub_1C22084(PartyListViewItem___c__DisplayClass33_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v10, 0LL);
      if ( !v10 )
        goto LABEL_15;
      *(_DWORD *)(v10 + 16) = ++v8;
      v11 = (System_Func_object__bool__o *)sub_1C22084(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v11,
        (Il2CppObject *)v10,
        Method_PartyListViewItem___c__DisplayClass33_0__GetSupportInitIndex_b__0__,
        0LL);
      v12 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)fixNpcFollowerInfoList,
              (System_Func_TSource__bool__o *)v11,
              (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      if ( !System_Linq_Enumerable__Any_object_(
              v12,
              (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
      {
        if ( myServantNumMax < 1 )
          return *(_DWORD *)(v10 + 16);
        --myServantNumMax;
      }
    }
  }
  return supportInitIndex;
}


ServantEntity_array *__fastcall PartyListViewItem__GetSvtEntityList(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  __int64 v4; // x1
  ServantEntity_array *v5; // x20
  unsigned __int64 v6; // x24
  ServantEntity_o **i; // x21
  BalanceConfig_c *v8; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v10; // x8
  ServantEntity_o *servantEntity; // x22
  __int64 v13; // x0

  if ( (byte_4BD80EF & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&ServantEntity___TypeInfo);
    byte_4BD80EF = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v5 = (ServantEntity_array *)sub_1C21EE0(ServantEntity___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  v6 = 0LL;
  for ( i = v5->m_Items; ; ++i )
  {
    v8 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v6 >= v8->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_19;
    if ( v6 >= memberList->max_length )
      goto LABEL_20;
    v10 = memberList->m_Items[v6];
    if ( v10 )
    {
      if ( !v5 )
LABEL_19:
        sub_1C22094(v8, v4);
      servantEntity = v10->fields.servantEntity;
      if ( servantEntity )
      {
        v8 = (BalanceConfig_c *)sub_1C21F74(servantEntity, v5->obj.klass->_1.element_class);
        if ( !v8 )
        {
          v13 = sub_1C220B8();
          sub_1C21F60(v13, 0LL);
        }
      }
      if ( v6 >= v5->max_length )
LABEL_20:
        sub_1C2209C(v8, v4);
      *i = servantEntity;
      sub_1C21DDC(i, servantEntity);
    }
    ++v6;
  }
  return v5;
}


System_String_array *__fastcall PartyListViewItem__GetSvtNameList(PartyListViewItem_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  __int64 v4; // x1
  System_String_array *v5; // x20
  unsigned __int64 v6; // x23
  System_String_o **i; // x21
  System_String_o *SvtNameText; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v10; // x0

  if ( (byte_4BD80F0 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    byte_4BD80F0 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v5 = (System_String_array *)sub_1C21EE0(string___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  v6 = 0LL;
  for ( i = v5->m_Items; ; ++i )
  {
    SvtNameText = (System_String_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      SvtNameText = (System_String_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v6 >= *(int *)(*(_QWORD *)&SvtNameText[7].fields + 156LL) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( v6 >= memberList->max_length )
      goto LABEL_18;
    v10 = memberList->m_Items[v6];
    if ( v10 )
    {
      SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(v10, 0LL);
      if ( !v5 )
LABEL_17:
        sub_1C22094(SvtNameText, v4);
      if ( v6 >= v5->max_length )
LABEL_18:
        sub_1C2209C(SvtNameText, v4);
      *i = SvtNameText;
      sub_1C21DDC(i, SvtNameText);
    }
    ++v6;
  }
  return v5;
}


UserDeckEntity_o *__fastcall PartyListViewItem__GetUserDeck(
        PartyListViewItem_o *this,
        PartyListViewItem_o *baseItem,
        const MethodInfo *method)
{
  UserDeckEntity_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_String_o *deckName; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v10; // x23
  int32_t max_length; // w22
  int64_t userEquipId; // x20
  DeckServant_o *v13; // x21
  struct DeckServant_o **p_deckInfo; // x20
  struct PartyOrganizationListViewItem_array *v15; // x24
  __int64 v16; // x25
  __int64 v17; // x29
  int v18; // w28
  PartyOrganizationListViewItem_o *v19; // x22
  DeckServantData_o *v20; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v22; // q0
  System_Int64_array *EquipList; // x0
  struct DeckServantData_array *svts; // x22
  __int64 v25; // x0
  __int64 v26; // x1
  Il2CppClass **v27; // x0
  __int64 v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-80h]

  if ( (byte_4BD80EA & 1) == 0 )
  {
    sub_1C21E38(&DeckServantData_TypeInfo);
    sub_1C21E38(&DeckServant_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&UserDeckEntity_TypeInfo);
    byte_4BD80EA = 1;
  }
  v5 = (UserDeckEntity_o *)sub_1C22084(UserDeckEntity_TypeInfo);
  UserDeckEntity___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_29;
  v5->fields.id = this->fields.id;
  v5->fields.deckNo = this->fields.index + 1;
  deckName = this->fields.deckName;
  v5->fields.name = deckName;
  v6 = sub_1C21DDC(&v5->fields.name, deckName);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_29;
  v10 = baseItem ? baseItem : this;
  max_length = memberList->max_length;
  userEquipId = v10->fields.userEquipId;
  v13 = (DeckServant_o *)sub_1C22084(DeckServant_TypeInfo);
  DeckServant___ctor_40129440(v13, max_length, userEquipId, 0LL);
  v5->fields.deckInfo = v13;
  p_deckInfo = &v5->fields.deckInfo;
  v6 = sub_1C21DDC(&v5->fields.deckInfo, v13);
  v15 = v10->fields.memberList;
  if ( !v15 )
    goto LABEL_29;
  v16 = *(_QWORD *)&v15->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    v18 = 1;
    while ( 1 )
    {
      v19 = v15->m_Items[v17];
      v20 = (DeckServantData_o *)sub_1C22084(DeckServantData_TypeInfo);
      DeckServantData___ctor(v20, 0LL);
      if ( !v20 )
        break;
      v20->fields.id = v18;
      if ( !v19 )
        break;
      userServantEntity = v19->fields.userServantEntity;
      if ( userServantEntity )
      {
        v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v33.fields.fakeValue = v22;
      }
      else
      {
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v32, 0LL, 0LL);
        v33 = v32;
      }
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v31 = v33;
      v20->fields.userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v31, 0LL);
      v20->fields.isFollowerSvt = v19->fields.isFollower;
      EquipList = PartyOrganizationListViewItem__GetEquipList(v19, 0LL);
      v20->fields.userSvtEquipIds = EquipList;
      v6 = sub_1C21DDC(&v20->fields.userSvtEquipIds, EquipList);
      v20->fields.initPos = v19->fields._InitPos_k__BackingField;
      if ( !*p_deckInfo )
        break;
      svts = (*p_deckInfo)->fields.svts;
      if ( !svts )
        break;
      v25 = sub_1C21F74(v20, svts->obj.klass->_1.element_class);
      if ( !v25 )
      {
        v30 = sub_1C220B8();
        sub_1C21F60(v30, 0LL);
      }
      if ( v18 - 1 < svts->max_length )
      {
        v27 = &svts->obj.klass + v17;
        v27[4] = (Il2CppClass *)v20;
        v25 = sub_1C21DDC(v27 + 4, v20);
        if ( (_DWORD)v16 == v18 )
          return v5;
        v17 = v18;
        if ( v18++ < v15->max_length )
          continue;
      }
      sub_1C2209C(v25, v26);
    }
LABEL_29:
    sub_1C22094(v6, v7);
  }
  return v5;
}


UserEventDeckEntity_o *__fastcall PartyListViewItem__GetUserEventDeck(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  UserEventDeckEntity_o *v3; // x20
  __int64 v4; // x1
  __int64 IsUseOldMaster; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x22
  int64_t userEquipId; // x21
  DeckServant_o *v8; // x0
  int32_t max_length; // w1
  struct DeckServant_o *v10; // x22
  struct DeckServant_o **p_deckInfo; // x21
  struct PartyOrganizationListViewItem_array *v12; // x8
  unsigned __int64 v13; // x28
  unsigned __int64 v14; // x9
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  PartyOrganizationListViewItem_o *v16; // x22
  struct QuestRestrictionInfo_o *v17; // x8
  _BOOL4 isNpcEditablePos; // w23
  _BOOL4 IsEditablePos; // w0
  DeckServantData_o *v20; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v22; // q0
  System_Int64_array *EquipList; // x0
  int32_t InitPos_k__BackingField; // w8
  int v25; // w8
  unsigned int *svts; // x22
  unsigned int *v27; // x0
  __int64 v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31[2]; // [xsp+20h] [xbp-A0h] BYREF

  if ( (byte_4BD80EB & 1) == 0 )
  {
    sub_1C21E38(&DeckServantData_TypeInfo);
    sub_1C21E38(&DeckServant_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&UserEventDeckEntity_TypeInfo);
    byte_4BD80EB = 1;
  }
  memset(&v31[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v3 = (UserEventDeckEntity_o *)sub_1C22084(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor(v3, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  IsUseOldMaster = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    IsUseOldMaster = (__int64)NetworkManager_TypeInfo;
  }
  if ( !v3 )
    goto LABEL_55;
  v3->fields.userId = *(_QWORD *)(*(_QWORD *)(IsUseOldMaster + 184) + 64LL);
  v3->fields.eventId = this->fields.id;
  v3->fields.deckNo = this->fields.index + 1;
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_55;
  userEquipId = this->fields.userEquipId;
  v8 = (DeckServant_o *)sub_1C22084(DeckServant_TypeInfo);
  max_length = memberList->max_length;
  v10 = v8;
  DeckServant___ctor_40129440(v8, max_length, userEquipId, 0LL);
  v3->fields.deckInfo = v10;
  p_deckInfo = &v3->fields.deckInfo;
  IsUseOldMaster = sub_1C21DDC(&v3->fields.deckInfo, v10);
  v12 = this->fields.memberList;
  if ( !v12 )
LABEL_55:
    sub_1C22094(IsUseOldMaster, v4);
  v13 = 0LL;
  while ( 1 )
  {
    v14 = v12->max_length;
    if ( (__int64)v13 >= (int)v14 )
      return v3;
    if ( v13 >= v14 )
      goto LABEL_56;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v16 = v12->m_Items[v13];
    if ( !questRestrictionInfo )
    {
      isNpcEditablePos = 0;
      goto LABEL_28;
    }
    IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
    v17 = this->fields.questRestrictionInfo;
    if ( (IsUseOldMaster & 1) != 0 )
    {
      if ( !v17 )
        goto LABEL_55;
      isNpcEditablePos = v17->fields.isNpcEditablePos;
    }
    else
    {
      if ( !v16 || !v17 )
        goto LABEL_55;
      IsEditablePos = QuestRestrictionInfo__IsEditablePos(
                        this->fields.questRestrictionInfo,
                        v16->fields._InitPos_k__BackingField,
                        0LL);
      v17 = this->fields.questRestrictionInfo;
      isNpcEditablePos = IsEditablePos;
      if ( !v17 )
        goto LABEL_28;
    }
    IsUseOldMaster = QuestRestrictionInfo__IsNpcMulitipleOrOnly(v17, 0LL);
    if ( (IsUseOldMaster & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_55;
      if ( v16->fields.isFixNpc
        && v16->fields.isFollower
        && !isNpcEditablePos
        && !v16->fields.isMyServantOrNpcRestriction )
      {
        ++v13;
        goto LABEL_51;
      }
    }
LABEL_28:
    v20 = (DeckServantData_o *)sub_1C22084(DeckServantData_TypeInfo);
    DeckServantData___ctor(v20, 0LL);
    if ( !v20 )
      goto LABEL_55;
    v20->fields.id = v13 + 1;
    if ( !v16 )
      goto LABEL_55;
    userServantEntity = v16->fields.userServantEntity;
    if ( userServantEntity )
    {
      v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v31[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v31[1].fields.fakeValue = v22;
    }
    else
    {
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v31, 0LL, 0LL);
      v31[1] = v31[0];
    }
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v30 = v31[1];
    v20->fields.userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v30, 0LL);
    v20->fields.isFollowerSvt = v16->fields.isFollower;
    EquipList = PartyOrganizationListViewItem__GetEquipList(v16, 0LL);
    v20->fields.userSvtEquipIds = EquipList;
    IsUseOldMaster = sub_1C21DDC(&v20->fields.userSvtEquipIds, EquipList);
    InitPos_k__BackingField = v16->fields._InitPos_k__BackingField;
    v20->fields.npcFollowerSvtId = 0LL;
    v20->fields.initPos = InitPos_k__BackingField;
    if ( v20->fields.userSvtId )
    {
      v25 = 0;
LABEL_43:
      if ( (isNpcEditablePos & v25 & 1) != 0 )
      {
        v20->fields.npcFollowerSvtId = v16->fields.npcFollowerSvtId;
        if ( v16->fields.isFixNpc )
          v20->fields.isFollowerSvt = 0;
      }
      goto LABEL_46;
    }
    if ( !v16->fields.isMyServantOrNpcRestriction || !v16->fields.isFollower )
    {
      v25 = !v16->fields.isMyServantOrNpcRestriction;
      goto LABEL_43;
    }
    v20->fields.npcFollowerSvtId = v16->fields.npcFollowerSvtId;
LABEL_46:
    if ( !*p_deckInfo )
      goto LABEL_55;
    svts = (unsigned int *)(*p_deckInfo)->fields.svts;
    if ( !svts )
      goto LABEL_55;
    IsUseOldMaster = sub_1C21F74(v20, *(_QWORD *)(*(_QWORD *)svts + 64LL));
    if ( !IsUseOldMaster )
    {
      v29 = sub_1C220B8();
      sub_1C21F60(v29, 0LL);
    }
    if ( v13 >= svts[6] )
LABEL_56:
      sub_1C2209C(IsUseOldMaster, v4);
    v27 = &svts[2 * v13];
    *((_QWORD *)v27 + 4) = v20;
    IsUseOldMaster = sub_1C21DDC(v27 + 8, v20);
    ++v13;
LABEL_51:
    v12 = this->fields.memberList;
    if ( !v12 )
      goto LABEL_55;
  }
}


int32_t __fastcall PartyListViewItem__GetUserServantDeployIndex(
        PartyListViewItem_o *this,
        UserServantEntity_array *userServantList,
        System_Int64_array *npcSvtIds,
        const MethodInfo *method)
{
  BalanceConfig_c *v6; // x0
  unsigned __int64 i; // x21

  if ( (byte_4BD80D5 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD80D5 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  for ( i = 0LL; ; ++i )
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
    if ( i >= userServantList->max_length )
      goto LABEL_17;
    if ( !userServantList->m_Items[i] )
    {
      if ( !npcSvtIds )
LABEL_16:
        sub_1C22094(v6, userServantList);
      if ( i >= npcSvtIds->max_length )
LABEL_17:
        sub_1C2209C(v6, userServantList);
      if ( !npcSvtIds->m_Items[i] )
        return i;
    }
  }
  LODWORD(i) = -1;
  return i;
}


System_Int32_array *__fastcall PartyListViewItem__GetWaveBattleEnemyClassIds(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.waveBattleEnemyClassIds;
}


int32_t __fastcall PartyListViewItem__GetWeareMember(
        PartyListViewItem_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v4; // x21
  __int64 v6; // x19
  int max_length; // w9

  if ( userSvtId >= 1 )
  {
    memberList = this->fields.memberList;
    v4 = this;
    if ( !memberList )
LABEL_9:
      sub_1C22094(this, userSvtId);
    v6 = 0LL;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
        sub_1C2209C(this, userSvtId);
      this = (PartyListViewItem_o *)memberList->m_Items[v6];
      if ( this )
      {
        this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_EquipUserSvtId(
                                        (PartyOrganizationListViewItem_o *)this,
                                        0LL);
        if ( this == (PartyListViewItem_o *)userSvtId )
          return v6;
        memberList = v4->fields.memberList;
        ++v6;
        if ( memberList )
          continue;
      }
      goto LABEL_9;
    }
  }
  LODWORD(v6) = -1;
  return v6;
}


bool __fastcall PartyListViewItem__IsDeckEmpty(PartyListViewItem_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  signed int v4; // w9
  signed int v5; // w21
  int32_t DeckMemberMax; // w8
  struct PartyOrganizationListViewItem_array *memberList; // x9
  PartyOrganizationListViewItem_o *v8; // x9
  struct UserServantEntity_o *userServantEntity; // x10

  if ( (byte_4BD80E3 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD80E3 = 1;
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
    if ( v5 >= memberList->max_length )
      sub_1C2209C(v3, method);
    v8 = memberList->m_Items[v5];
    if ( !v8 )
LABEL_12:
      sub_1C22094(v3, method);
    userServantEntity = v8->fields.userServantEntity;
    v4 = v5 + 1;
  }
  while ( !userServantEntity );
  return v5 >= DeckMemberMax;
}


bool __fastcall PartyListViewItem__IsDeckInit(PartyListViewItem_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  il2cpp_array_size_t i; // w21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v6; // x8
  System_String_o *deckName; // x20
  System_String_o *DefaultDeckName; // x1

  if ( (byte_4BD80E2 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD80E2 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v3->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_15;
    if ( i >= memberList->max_length )
      sub_1C2209C(v3, method);
    v6 = memberList->m_Items[i];
    if ( !v6 )
LABEL_15:
      sub_1C22094(v3, method);
    if ( v6->fields.userServantEntity )
      return 0;
  }
  if ( this->fields.isDeckNameDefault )
    return 1;
  deckName = this->fields.deckName;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, method);
  return System_String__op_Equality(deckName, DefaultDeckName, 0LL);
}


bool __fastcall PartyListViewItem__IsEquipEmpty(PartyListViewItem_o *this, const MethodInfo *method)
{
  signed int v3; // w8
  BalanceConfig_c *v4; // x0
  signed int v5; // w21
  int32_t DeckMemberMax; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int64_t EquipUserSvtId; // x0

  if ( (byte_4BD80E4 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD80E4 = 1;
  }
  v3 = 0;
  do
  {
    v4 = BalanceConfig_TypeInfo;
    v5 = v3;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v4 = BalanceConfig_TypeInfo;
    }
    DeckMemberMax = v4->static_fields->DeckMemberMax;
    if ( v5 >= DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_12;
    if ( v5 >= memberList->max_length )
      sub_1C2209C(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[v5];
    if ( !v4 )
LABEL_12:
      sub_1C22094(v4, method);
    EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)v4, 0LL);
    v3 = v5 + 1;
  }
  while ( EquipUserSvtId <= 0 );
  return v5 >= DeckMemberMax;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyListViewItem__IsIdenticalEquipMember(
        PartyListViewItem_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  PartyListViewItem_o *v4; // x20
  struct PartyOrganizationListViewItem_array *memberList; // x22
  int max_length; // w8
  unsigned int v7; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  bool v9; // zf

  v4 = this;
  if ( (byte_4BD80ED & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BD80ED = 1;
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
          sub_1C2209C(this, *(_QWORD *)&svtId);
        this = (PartyListViewItem_o *)memberList->m_Items[v7];
        if ( !this )
          break;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)this, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(EquipSvtId, 0LL) == svtId;
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
      sub_1C22094(this, *(_QWORD *)&svtId);
    }
  }
  LOBYTE(this) = 0;
  return (char)this;
}


bool __fastcall PartyListViewItem__IsNeedDeckPosReset(
        PartyListViewItem_o *this,
        UserEventDeckEntity_o *deck,
        const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  bool IsUseOldMaster; // w21
  signed __int64 i; // x23
  signed __int64 name_high; // x24
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v11; // x25
  struct QuestRestrictionInfo_o *v12; // x8

  if ( (byte_4BD80D4 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD80D4 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_29:
    sub_1C22094(questRestrictionInfo, deck);
  IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  for ( i = 0LL; ; ++i )
  {
    questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    }
    name_high = SHIDWORD(questRestrictionInfo->fields.uniqueSvtRestrictionEntity[2].fields.name);
    if ( i >= name_high )
      break;
    if ( !deck )
      goto LABEL_29;
    deckInfo = deck->fields.deckInfo;
    if ( !deckInfo )
      goto LABEL_29;
    svts = deckInfo->fields.svts;
    if ( !svts )
      goto LABEL_29;
    if ( i >= (unsigned __int64)svts->max_length )
      sub_1C2209C(questRestrictionInfo, deck);
    v11 = svts->m_Items[i];
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( IsUseOldMaster )
    {
      if ( !questRestrictionInfo )
        goto LABEL_29;
      questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsNpcMulitipleOrOnly(
                                                         questRestrictionInfo,
                                                         0LL);
      v12 = this->fields.questRestrictionInfo;
      if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
      {
        if ( !v12 )
          goto LABEL_29;
        if ( !v12->fields.isNpcEditablePos )
        {
          if ( !v11 )
            goto LABEL_29;
LABEL_26:
          if ( v11->fields.initPos != v11->fields.id )
            return i < name_high;
          continue;
        }
      }
      if ( !v11 || !v12 )
        goto LABEL_29;
      if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_41736952(
             this->fields.questRestrictionInfo,
             v11->fields.initPos,
             0LL) )
      {
        goto LABEL_26;
      }
    }
    else
    {
      if ( !v11 || !questRestrictionInfo )
        goto LABEL_29;
      if ( !QuestRestrictionInfo__IsEditablePos(questRestrictionInfo, v11->fields.initPos, 0LL) )
        goto LABEL_26;
    }
  }
  return i < name_high;
}


bool __fastcall PartyListViewItem__IsSpecificMenuKind(PartyListViewItem_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    LOBYTE(questRestrictionInfo) = questRestrictionInfo->fields.eventDeckNum > 0;
  return (unsigned __int8)questRestrictionInfo | ((unsigned int)(this->fields.menuKind - 1) < 7);
}


bool __fastcall PartyListViewItem__IsSpecificMenuKind_32903332(
        int32_t menuKind,
        bool isEventDeck,
        const MethodInfo *method)
{
  return (unsigned int)(menuKind - 1) < 7 || isEventDeck;
}


bool __fastcall PartyListViewItem__IsSupportOnly(PartyListViewItem_o *this, const MethodInfo *method)
{
  QuestRestrictionInfo_o *questRestrictionInfo; // x0

  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    LOBYTE(questRestrictionInfo) = QuestRestrictionInfo__IsSupportOnly(questRestrictionInfo, 0LL);
  return (char)questRestrictionInfo;
}


void __fastcall PartyListViewItem__LeaderOnly(PartyListViewItem_o *this, const MethodInfo *method)
{
  int32_t i; // w21
  PartyOrganizationListViewItem_o *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  __int64 v6; // x9
  const MethodInfo *v7; // x1

  if ( (byte_4BD80E1 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD80E1 = 1;
  }
  for ( i = 1; ; ++i )
  {
    v4 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_16;
    v6 = *(_QWORD *)&memberList->max_length;
    if ( i >= BalanceConfig_TypeInfo->static_fields->DeckMemberMax )
      break;
    if ( i >= (unsigned int)v6 )
      goto LABEL_17;
    v4 = memberList->m_Items[i];
    if ( !v4 )
      goto LABEL_16;
    if ( !v4->fields.isFollower )
      PartyOrganizationListViewItem__Empty(v4, 0LL);
  }
  if ( !(_DWORD)v6 )
LABEL_17:
    sub_1C2209C(v4, method);
  v4 = memberList->m_Items[0];
  if ( !v4 )
LABEL_16:
    sub_1C22094(v4, method);
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v4, 0LL);
  PartyListViewItem__CheckRestriction(this, v7);
}


void __fastcall PartyListViewItem__Modify(PartyListViewItem_o *this, const MethodInfo *method)
{
  int i; // w21
  BalanceConfig_c *v4; // x0
  int v5; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  const MethodInfo *v7; // x1

  if ( (byte_4BD80DA & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD80DA = 1;
  }
  for ( i = 1; ; ++i )
  {
    v4 = BalanceConfig_TypeInfo;
    v5 = i - 1;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( v5 >= v4->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_12;
    if ( v5 >= memberList->max_length )
      sub_1C2209C(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[v5];
    if ( !v4 )
LABEL_12:
      sub_1C22094(v4, method);
    LODWORD(v4->vtable._3_ToString.methodPtr) = i;
    PartyOrganizationListViewItem__Modify((PartyOrganizationListViewItem_o *)v4, 0LL);
  }
  PartyListViewItem__CheckRestriction(this, method);
  PartyListViewItem__UpdateEventEffect(this, v7);
}


void __fastcall PartyListViewItem__Set(PartyListViewItem_o *this, PartyListViewItem_o *item, const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v5; // x0
  __int64 v6; // x1
  struct EventUpValSetupInfo_o *setupInfo; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  int v9; // w23
  il2cpp_array_size_t v10; // w24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v12; // x26
  PartyOrganizationListViewItem_o *v13; // x21
  Il2CppClass **v14; // x0
  struct PartyOrganizationListViewItem_array *v15; // x8
  PartyOrganizationListViewItem_o *v16; // x8
  struct System_String_o *deckName; // x1
  struct System_Int32_array *waveBattleEnemyClassIds; // x1
  struct System_Int32_array **p_waveBattleEnemyClassIds; // x20
  __int64 v20; // x0

  if ( (byte_4BD80DB & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD80DB = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
LABEL_20:
    sub_1C22094(v5, v6);
  *(_QWORD *)&this->fields.menuKind = *(_QWORD *)&item->fields.menuKind;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1C21DDC(&this->fields.setupInfo, setupInfo);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C21DDC(&this->fields.questRestrictionInfo, questRestrictionInfo);
  v9 = 1;
  this->fields.id = item->fields.id;
  while ( 1 )
  {
    v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    v10 = v9 - 1;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v10 >= *(_DWORD *)(*(_QWORD *)&v5->fields.classId + 156LL) )
      break;
    memberList = item->fields.memberList;
    if ( !memberList )
      goto LABEL_20;
    if ( v10 >= memberList->max_length )
      goto LABEL_21;
    v5 = memberList->m_Items[v10];
    if ( !v5 )
      goto LABEL_20;
    v12 = this->fields.memberList;
    v5 = PartyOrganizationListViewItem__Clone(v5, -1, 0LL);
    if ( !v12 )
      goto LABEL_20;
    v13 = v5;
    if ( v5 )
    {
      v5 = (PartyOrganizationListViewItem_o *)sub_1C21F74(v5, v12->obj.klass->_1.element_class);
      if ( !v5 )
      {
        v20 = sub_1C220B8();
        sub_1C21F60(v20, 0LL);
      }
    }
    if ( v10 >= v12->max_length )
      goto LABEL_21;
    v14 = &v12->obj.klass + (int)v10;
    v14[4] = (Il2CppClass *)v13;
    v5 = (PartyOrganizationListViewItem_o *)sub_1C21DDC(v14 + 4, v13);
    v15 = this->fields.memberList;
    if ( !v15 )
      goto LABEL_20;
    if ( v10 >= v15->max_length )
LABEL_21:
      sub_1C2209C(v5, v6);
    v16 = v15->m_Items[v10];
    if ( !v16 )
      goto LABEL_20;
    v16->fields._NowPos_k__BackingField = v9++;
  }
  this->fields.cost = item->fields.cost;
  this->fields.isDeckNameDefault = item->fields.isDeckNameDefault;
  deckName = item->fields.deckName;
  this->fields.deckName = deckName;
  sub_1C21DDC(&this->fields.deckName, deckName);
  this->fields.userEquipId = item->fields.userEquipId;
  waveBattleEnemyClassIds = item->fields.waveBattleEnemyClassIds;
  this->fields.waveBattleEnemyClassIds = waveBattleEnemyClassIds;
  p_waveBattleEnemyClassIds = &this->fields.waveBattleEnemyClassIds;
  sub_1C21DDC(p_waveBattleEnemyClassIds, waveBattleEnemyClassIds);
  *((_BYTE *)p_waveBattleEnemyClassIds + 8) = item->fields._IsWaveBattleRestart_k__BackingField;
  *((_BYTE *)p_waveBattleEnemyClassIds + 9) = item->fields._IsClearedWave_k__BackingField;
}


void __fastcall PartyListViewItem__SetDeckName(
        PartyListViewItem_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_String_o *DefaultDeckName; // x20
  const MethodInfo *v5; // x1
  System_String_o *v6; // x0
  struct System_String_o **p_deckName; // x19

  DefaultDeckName = name;
  if ( System_String__IsNullOrEmpty(name, 0LL)
    || (v6 = PartyListViewItem__get_DefaultDeckName(this, v5), System_String__op_Equality(DefaultDeckName, v6, 0LL)) )
  {
    this->fields.isDeckNameDefault = 1;
    DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v5);
    this->fields.deckName = DefaultDeckName;
    p_deckName = &this->fields.deckName;
  }
  else
  {
    this->fields.deckName = DefaultDeckName;
    p_deckName = &this->fields.deckName;
    *((_BYTE *)p_deckName - 4) = 0;
  }
  sub_1C21DDC(p_deckName, DefaultDeckName);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__SetEquip(
        PartyListViewItem_o *this,
        int32_t num,
        int64_t userSvtId,
        const MethodInfo *method)
{
  il2cpp_array_size_t i; // w23
  BalanceConfig_c *v8; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v10; // x8
  PartyOrganizationListViewItem_o *v11; // x22
  int32_t cost; // w25
  int32_t v13; // w25
  int32_t v14; // w8

  if ( (byte_4BD80DC & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD80DC = 1;
  }
  for ( i = 0; ; ++i )
  {
    v8 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v8->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_15;
    if ( i >= memberList->max_length )
      sub_1C2209C(v8, *(_QWORD *)&num);
    v10 = &memberList->obj.klass + (int)i;
    v11 = (PartyOrganizationListViewItem_o *)v10[4];
    if ( !v11 )
LABEL_15:
      sub_1C22094(v8, *(_QWORD *)&num);
    cost = this->fields.cost;
    if ( num == i )
    {
      this->fields.cost = cost
                        - PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)v10[4], 0LL);
      PartyOrganizationListViewItem__SetEquipUserServantId(v11, userSvtId, 0LL);
      v13 = this->fields.cost;
      v14 = PartyOrganizationListViewItem__get_MargeCost(v11, 0LL) + v13;
    }
    else
    {
      v14 = cost
          - PartyOrganizationListViewItem__RemoveEquipUserServantId(
              (PartyOrganizationListViewItem_o *)v10[4],
              userSvtId,
              0LL);
    }
    this->fields.cost = v14;
  }
  PartyListViewItem__CheckRestriction(this, *(const MethodInfo **)&num);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__SetMember(
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
  if ( memberList->max_length <= num )
    goto LABEL_12;
  v6 = this;
  this = (PartyListViewItem_o *)memberList->m_Items[num];
  if ( !this )
    goto LABEL_11;
  cost = v6->fields.cost;
  this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(
                                  (PartyOrganizationListViewItem_o *)this,
                                  0LL);
  v9 = v6->fields.memberList;
  v6->fields.cost = cost - (_DWORD)this;
  if ( !v9 )
    goto LABEL_11;
  if ( v9->max_length <= num )
    goto LABEL_12;
  this = (PartyListViewItem_o *)v9->m_Items[num];
  if ( !this
    || (PartyOrganizationListViewItem__Modify_33025068((PartyOrganizationListViewItem_o *)this, item, 0LL),
        (v10 = v6->fields.memberList) == 0LL) )
  {
LABEL_11:
    sub_1C22094(this, *(_QWORD *)&num);
  }
  if ( v10->max_length <= num )
LABEL_12:
    sub_1C2209C(this, *(_QWORD *)&num);
  this = (PartyListViewItem_o *)v10->m_Items[num];
  if ( !this )
    goto LABEL_11;
  v11 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0LL) + v11;
  PartyListViewItem__CheckRestriction(v6, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__SetMember_32903356(
        PartyListViewItem_o *this,
        int32_t idx,
        PartyOrganizationListViewItem_o *member,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v6; // x19
  int32_t cost; // w24
  struct PartyOrganizationListViewItem_array *v9; // x23
  Il2CppClass **v10; // x0
  struct PartyOrganizationListViewItem_array *v11; // x8
  struct PartyOrganizationListViewItem_array *v12; // x8
  int32_t v13; // w20
  __int64 v14; // x0

  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_17;
  if ( memberList->max_length <= idx )
    goto LABEL_18;
  v6 = this;
  this = (PartyListViewItem_o *)memberList->m_Items[idx];
  if ( !this
    || (cost = v6->fields.cost,
        this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(
                                        (PartyOrganizationListViewItem_o *)this,
                                        0LL),
        v9 = v6->fields.memberList,
        v6->fields.cost = cost - (_DWORD)this,
        !v9) )
  {
LABEL_17:
    sub_1C22094(this, *(_QWORD *)&idx);
  }
  if ( member )
  {
    this = (PartyListViewItem_o *)sub_1C21F74(member, v9->obj.klass->_1.element_class);
    if ( !this )
    {
      v14 = sub_1C220B8();
      sub_1C21F60(v14, 0LL);
    }
  }
  if ( v9->max_length <= idx )
    goto LABEL_18;
  v10 = &v9->obj.klass + idx;
  v10[4] = (Il2CppClass *)member;
  this = (PartyListViewItem_o *)sub_1C21DDC(v10 + 4, member);
  if ( v6->fields.menuKind == 9 )
  {
    v11 = v6->fields.memberList;
    if ( !v11 )
      goto LABEL_17;
    if ( v11->max_length <= idx )
      goto LABEL_18;
    this = (PartyListViewItem_o *)v11->m_Items[idx];
    if ( !this )
      goto LABEL_17;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)this,
      v6->fields.waveBattleEnemyClassIds,
      0LL);
  }
  v12 = v6->fields.memberList;
  if ( !v12 )
    goto LABEL_17;
  if ( v12->max_length <= idx )
LABEL_18:
    sub_1C2209C(this, *(_QWORD *)&idx);
  this = (PartyListViewItem_o *)v12->m_Items[idx];
  if ( !this )
    goto LABEL_17;
  v13 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0LL) + v13;
}


bool __fastcall PartyListViewItem__SetNpcFollowerInfo(
        PartyListViewItem_o *this,
        FollowerInfo_o **follower,
        int32_t *followerClassId,
        FollowerInfo_array *npcFollowerInfoList,
        int64_t npcFollowerSvtId,
        int32_t pos,
        const MethodInfo *method)
{
  signed int max_length; // w8
  bool v9; // w29
  PartyListViewItem_o *v13; // x24
  signed int v14; // w19
  FollowerInfo_o *v15; // x25
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w0
  struct QuestRestrictionInfo_o *v18; // x8
  ServantLeaderInfo_o *v19; // x26
  int32_t v20; // w0
  QuestRestrictionInfo_o *v21; // x28
  PartyListViewItem_o *v22; // x27
  bool isWhole; // [xsp+Ch] [xbp-64h] BYREF

  isWhole = 0;
  if ( !npcFollowerInfoList )
LABEL_18:
    sub_1C22094(this, follower);
  max_length = npcFollowerInfoList->max_length;
  v9 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = this;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1C2209C(this, follower);
      v15 = npcFollowerInfoList->m_Items[v14];
      if ( !v15 )
        goto LABEL_18;
      if ( v15->fields.npcFollowerSvtId == npcFollowerSvtId )
      {
        questRestrictionInfo = v13->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_18;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
        this = (PartyListViewItem_o *)FollowerInfo__getServantLeaderInfo(v15, 0, ReturnTypeByQuestId, 0LL);
        v18 = v13->fields.questRestrictionInfo;
        if ( !v18 )
          goto LABEL_18;
        v19 = (ServantLeaderInfo_o *)this;
        v20 = FollowerInfo__GetReturnTypeByQuestId(v18->fields.questId, 0LL);
        this = (PartyListViewItem_o *)FollowerInfo__GetNpcServantIndividualityFull(v15, 0, v20, 0LL);
        if ( !v19 )
          goto LABEL_18;
        v21 = v13->fields.questRestrictionInfo;
        v22 = this;
        this = (PartyListViewItem_o *)ServantLeaderInfo__getRarity(v19, 0LL);
        if ( !v21 )
          goto LABEL_18;
        this = (PartyListViewItem_o *)QuestRestrictionInfo__IsRestriction_41718544(
                                        v21,
                                        &isWhole,
                                        (System_Int32_array *)v22,
                                        (int32_t)this,
                                        v19->fields.lv,
                                        pos,
                                        3,
                                        0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = (PartyListViewItem_o *)v13->fields.questRestrictionInfo;
          if ( !this )
            goto LABEL_18;
          this = (PartyListViewItem_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_41739952(
                                          (QuestRestrictionInfo_o *)this,
                                          (System_Int32_array *)v22,
                                          pos,
                                          0LL);
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
    sub_1C21DDC(follower, v15);
    *followerClassId = v19->fields.classId;
  }
  return v9;
}


void __fastcall PartyListViewItem__SetNpcMember(
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
  Il2CppClass **v17; // x0
  const MethodInfo *v18; // x1
  __int64 v19; // x0

  if ( (byte_4BD80DD & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BD80DD = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance
    || (PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, initPos, follower, 0LL),
        memberList = this->fields.memberList,
        setupInfo = this->fields.setupInfo,
        questRestrictionInfo = this->fields.questRestrictionInfo,
        v16 = (PartyOrganizationListViewItem_o *)sub_1C22084(PartyOrganizationListViewItem_TypeInfo),
        PartyOrganizationListViewItem___ctor_32985232(
          v16,
          num,
          follower,
          0,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          0,
          initPos,
          0LL),
        !memberList) )
  {
    sub_1C22094(Instance, v12);
  }
  if ( v16 )
  {
    Instance = (Il2CppObject *)sub_1C21F74(v16, memberList->obj.klass->_1.element_class);
    if ( !Instance )
    {
      v19 = sub_1C220B8();
      sub_1C21F60(v19, 0LL);
    }
  }
  if ( memberList->max_length <= num )
    sub_1C2209C(Instance, v12);
  v17 = &memberList->obj.klass + num;
  v17[4] = (Il2CppClass *)v16;
  sub_1C21DDC(v17 + 4, v16);
  PartyListViewItem__CheckRestriction(this, v18);
}


void __fastcall PartyListViewItem__SetUserEquip(
        PartyListViewItem_o *this,
        int64_t userEquipId,
        const MethodInfo *method)
{
  this->fields.userEquipId = userEquipId;
}


void __fastcall PartyListViewItem__SwapMember(
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
    sub_1C2209C(this, num1);
  this = (PartyListViewItem_o *)memberList->m_Items[num1];
  if ( !this )
LABEL_7:
    sub_1C22094(this, num1);
  PartyOrganizationListViewItem__Swap(
    (PartyOrganizationListViewItem_o *)this,
    memberList->m_Items[num2],
    notChangeInitPos,
    0LL);
}


void __fastcall PartyListViewItem__UpdateEventEffect(PartyListViewItem_o *this, const MethodInfo *method)
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
        sub_1C2209C(this, method);
      this = (PartyListViewItem_o *)memberList->m_Items[v4];
      if ( !this )
        break;
      PartyOrganizationListViewItem__UpdateEventEffect((PartyOrganizationListViewItem_o *)this, 0LL);
      max_length = memberList->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1C22094(this, method);
  }
}


void __fastcall PartyListViewItem__UpdateServantInfo(PartyListViewItem_o *this, const MethodInfo *method)
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
        sub_1C2209C(this, method);
      this = (PartyListViewItem_o *)memberList->m_Items[v4];
      if ( !this )
        break;
      PartyOrganizationListViewItem__UpdateServantInfo((PartyOrganizationListViewItem_o *)this, 0LL);
      max_length = memberList->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1C22094(this, method);
  }
}


int32_t __fastcall PartyListViewItem__get_Cost(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.cost;
}


int64_t __fastcall PartyListViewItem__get_DeckId(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall PartyListViewItem__get_DeckName(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.deckName;
}


int32_t __fastcall PartyListViewItem__get_DeckNum(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.index + 1;
}


System_String_o *__fastcall PartyListViewItem__get_DefaultDeckName(PartyListViewItem_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x20
  Il2CppObject *v4; // x0
  int v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BD80EE & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_10479/*"PARTY_ORGANIZATION_NAME_BASE"*/);
    byte_4BD80EE = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_10479/*"PARTY_ORGANIZATION_NAME_BASE"*/, 0LL);
  v6 = this->fields.index + 1;
  v4 = (Il2CppObject *)System_Int32__ToString((int32_t)&v6, 0LL);
  return System_String__Format(v3, v4, 0LL);
}


bool __fastcall PartyListViewItem__get_IsClearedWave(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsClearedWave_k__BackingField;
}


bool __fastcall PartyListViewItem__get_IsWaveBattleRestart(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsWaveBattleRestart_k__BackingField;
}


int32_t __fastcall PartyListViewItem__get_MaxCost(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.maxCost;
}


int64_t __fastcall PartyListViewItem__get_UserEquipId(PartyListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.userEquipId;
}


void __fastcall PartyListViewItem__set_IsClearedWave(PartyListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsClearedWave_k__BackingField = value;
}


void __fastcall PartyListViewItem__set_IsWaveBattleRestart(
        PartyListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsWaveBattleRestart_k__BackingField = value;
}


void __fastcall PartyListViewItem___c__DisplayClass27_0___ctor(
        PartyListViewItem___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass27_0____ctor_b__0(
        PartyListViewItem___c__DisplayClass27_0_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.npcFollowerSvtId == this->fields.npcSvtId;
}


void __fastcall PartyListViewItem___c__DisplayClass27_1___ctor(
        PartyListViewItem___c__DisplayClass27_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass27_1____ctor_b__1(
        PartyListViewItem___c__DisplayClass27_1_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}


void __fastcall PartyListViewItem___c__DisplayClass27_2___ctor(
        PartyListViewItem___c__DisplayClass27_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass27_2____ctor_b__2(
        PartyListViewItem___c__DisplayClass27_2_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}


void __fastcall PartyListViewItem___c__DisplayClass27_3___ctor(
        PartyListViewItem___c__DisplayClass27_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass27_3____ctor_b__3(
        PartyListViewItem___c__DisplayClass27_3_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}


void __fastcall PartyListViewItem___c__DisplayClass32_0___ctor(
        PartyListViewItem___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass32_0___GetFollowerIndex_b__0(
        PartyListViewItem___c__DisplayClass32_0_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIndex;
}


void __fastcall PartyListViewItem___c__DisplayClass33_0___ctor(
        PartyListViewItem___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass33_0___GetSupportInitIndex_b__0(
        PartyListViewItem___c__DisplayClass33_0_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}