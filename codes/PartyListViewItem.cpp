void __fastcall PartyListViewItem___ctor(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  struct PartyOrganizationListViewItem_array *v8; // x0

  if ( (byte_4B11E47 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&PartyOrganizationListViewItem___TypeInfo, v4, v5);
    byte_4B11E47 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct PartyOrganizationListViewItem_array *)sub_1BCA888(
                                                       PartyOrganizationListViewItem___TypeInfo,
                                                       (unsigned int)v7->static_fields->DeckMemberMax);
  this->fields.memberList = v8;
  sub_1BCA784(&this->fields.memberList, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_32460040(
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  PartyOrganizationListViewItem_o *Instance; // x0
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2
  struct DeckServant_o *deckInfo; // x8
  int32_t FollowerIndex; // w0
  __int64 v30; // x1
  BalanceConfig_c *v31; // x8
  int32_t DeckMainMemberMax; // w23
  struct PartyOrganizationListViewItem_array *v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  UserServantEntity_array *v36; // x20
  int32_t v37; // w29
  struct DeckServant_o *v38; // x8
  struct DeckServantData_array *svts; // x8
  int32_t max_length; // w9
  DeckServantData_o *v41; // x8
  int32_t initPos; // w25
  int v43; // w9
  struct PartyOrganizationListViewItem_array *v44; // x19
  PartyOrganizationListViewItem_o *v45; // x0
  PartyOrganizationListViewItem_o *v46; // x22
  PartyListViewItem_o *v47; // x26
  QuestRestrictionInfo_o *v48; // x21
  UserServantEntity_o *v49; // x28
  struct PartyOrganizationListViewItem_array *v50; // x20
  System_Int64_array *EquipList; // x19
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  PartyOrganizationListViewItem_o *v55; // x0
  UserServantEntity_o *v56; // x2
  Il2CppClass **v57; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v60; // x0
  int32_t v63; // [xsp+2Ch] [xbp-84h]
  UserServantEntity_array *UserServantList; // [xsp+38h] [xbp-78h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+40h] [xbp-70h]
  int32_t v67; // [xsp+4Ch] [xbp-64h]

  v12 = questRestrictionInfo;
  if ( (byte_4B11E48 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind, *(_QWORD *)&index);
    sub_1BCA7E0(&PartyOrganizationListViewItem___TypeInfo, v19, v20);
    sub_1BCA7E0(&PartyOrganizationListViewItem_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v23, v24);
    byte_4B11E48 = 1;
  }
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1BCA784(&this->fields.setupInfo, setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  Instance = (PartyOrganizationListViewItem_o *)sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
  if ( !deck )
    goto LABEL_53;
  PartyListViewItem__SetDeckName(this, deck->fields.name, v27);
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_53;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.id;
  UserServantList = UserDeckEntity__GetUserServantList(deck, 0LL);
  FollowerIndex = UserDeckEntity__GetFollowerIndex(deck, 0LL);
  v31 = BalanceConfig_TypeInfo;
  if ( FollowerIndex <= 0 )
  {
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v30);
      v31 = BalanceConfig_TypeInfo;
    }
    DeckMainMemberMax = v31->static_fields->DeckMainMemberMax;
  }
  else
  {
    DeckMainMemberMax = FollowerIndex;
  }
  if ( !v31->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v31, v30);
    v31 = BalanceConfig_TypeInfo;
  }
  v33 = (struct PartyOrganizationListViewItem_array *)sub_1BCA888(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v31->static_fields->DeckMemberMax);
  this->fields.memberList = v33;
  sub_1BCA784(&this->fields.memberList, v33);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  v36 = UserServantList;
  if ( *(_QWORD *)&Instance->fields.sortIndex )
  {
    Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      follower = *(FollowerInfo_o **)&Instance->fields.sortIndex;
      Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        followerClassId = Instance->fields.sortValue0;
        Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          followerDeckId = HIDWORD(Instance->fields.sortValue0);
          goto LABEL_18;
        }
      }
    }
LABEL_53:
    sub_1BCAA3C(Instance, v26);
  }
LABEL_18:
  v37 = 0;
  v63 = DeckMainMemberMax;
  while ( 1 )
  {
    Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v26);
      Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( v37 >= *(_DWORD *)(*(_QWORD *)&Instance->fields.classId + 156LL) )
      break;
    v38 = deck->fields.deckInfo;
    if ( !v38 )
      goto LABEL_53;
    svts = v38->fields.svts;
    if ( !svts )
      goto LABEL_53;
    max_length = svts->max_length;
    if ( v37 >= max_length )
    {
      v43 = v37 + 1;
      initPos = v37 + 1;
    }
    else
    {
      if ( v37 >= (unsigned int)max_length )
        goto LABEL_54;
      v41 = svts->m_Items[v37];
      if ( !v41 )
        goto LABEL_53;
      initPos = v41->fields.initPos;
      v43 = v37 + 1;
    }
    v67 = v43;
    if ( v43 == DeckMainMemberMax )
    {
      v44 = *p_memberList;
      v45 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v26, v34, v35);
      v46 = v45;
      if ( follower )
      {
        PartyOrganizationListViewItem___ctor_32576596(
          v45,
          v37,
          follower,
          followerClassId,
          setupInfo,
          v12,
          friendPointCampaignEntityList,
          0,
          followerDeckId,
          initPos,
          0LL);
        if ( !v44 )
          goto LABEL_53;
      }
      else
      {
        PartyOrganizationListViewItem___ctor_32613444(v45, v37, 1, setupInfo, v12, 1, initPos, 0LL);
        if ( !v44 )
          goto LABEL_53;
      }
      if ( v46 )
      {
        Instance = (PartyOrganizationListViewItem_o *)sub_1BCA91C(v46, v44->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_55;
      }
      if ( v37 >= v44->max_length )
        goto LABEL_54;
      v57 = &v44->obj.klass + v37;
    }
    else
    {
      if ( !v36 )
        goto LABEL_53;
      if ( v37 >= v36->max_length )
        goto LABEL_54;
      v47 = this;
      v48 = v12;
      v49 = v36->m_Items[v37];
      v50 = *p_memberList;
      if ( v49 )
      {
        EquipList = UserDeckEntity__GetEquipList(deck, v37, 0LL);
        v55 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v52, v53, v54);
        v56 = v49;
        v46 = v55;
        v12 = v48;
        PartyOrganizationListViewItem___ctor_32604236(
          v55,
          v37,
          v56,
          EquipList,
          setupInfo,
          v48,
          0LL,
          initPos,
          0LL,
          0,
          0LL);
        if ( !v50 )
          goto LABEL_53;
      }
      else
      {
        v46 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v26, v34, v35);
        v12 = v48;
        PartyOrganizationListViewItem___ctor_32613444(v46, v37, 0, setupInfo, v48, 1, initPos, 0LL);
        if ( !v50 )
          goto LABEL_53;
      }
      this = v47;
      if ( v46 )
      {
        Instance = (PartyOrganizationListViewItem_o *)sub_1BCA91C(v46, v50->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_55:
          v60 = sub_1BCAA60();
          sub_1BCA908(v60, 0LL);
        }
      }
      if ( v37 >= v50->max_length )
        goto LABEL_54;
      v57 = &v50->obj.klass + v37;
      v36 = UserServantList;
      DeckMainMemberMax = v63;
    }
    v57[4] = (Il2CppClass *)v46;
    Instance = (PartyOrganizationListViewItem_o *)sub_1BCA784(v57 + 4, v46);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_53;
    if ( v37 >= memberList->max_length )
LABEL_54:
      sub_1BCAA44(Instance, v26);
    Instance = memberList->m_Items[v37];
    if ( !Instance )
      goto LABEL_53;
    cost = this->fields.cost;
    v37 = v67;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(Instance, 0LL) + cost;
  }
  PartyListViewItem__CheckRestriction(this, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_32462612(
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  const MethodInfo *v32; // x1
  struct System_String_o *DefaultDeckName; // x0
  __int64 Instance; // x0
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x2
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo *v38; // x3
  __int64 v39; // x1
  int32_t FollowerIndex; // w25
  BalanceConfig_c *v41; // x0
  PartyListViewItem_o *v42; // x24
  int v43; // w27
  const MethodInfo *v44; // x2
  int32_t v45; // w23
  BalanceConfig_c *v46; // x0
  struct PartyOrganizationListViewItem_array *v47; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x28
  int32_t v49; // w8
  const MethodInfo *v50; // x2
  unsigned int v51; // w24
  struct DeckServant_o *v52; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v54; // x8
  int32_t *p_initPos; // x8
  int32_t initPos; // w19
  const MethodInfo *v57; // x6
  int v58; // w25
  struct DeckServant_o *v59; // x8
  struct DeckServantData_array *v60; // x8
  DeckServantData_o *v61; // x8
  _BOOL4 v62; // w27
  int64_t npcFollowerSvtId; // x4
  __int64 v64; // x2
  __int64 v65; // x3
  FollowerInfo_o *v66; // x23
  int32_t v67; // w27
  bool IsNpc; // w0
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  struct PartyOrganizationListViewItem_array *v72; // x26
  int32_t v73; // w29
  PartyOrganizationListViewItem_o *v74; // x25
  PartyOrganizationListViewItem_o **v75; // x0
  FollowerInfo_o *v76; // x23
  struct PartyOrganizationListViewItem_array *v77; // x29
  int32_t v78; // w27
  UserServantEntity_array *v79; // x26
  Il2CppClass **v80; // x25
  Il2CppClass *v81; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v82; // x25
  Il2CppClass *v83; // t1
  Il2CppClass *parent; // x23
  Il2CppClass *declaringType; // x27
  int32_t v86; // w23
  int32_t v87; // w27
  int32_t DispLimitCount; // w0
  UserServantEntity_o *v89; // x23
  struct PartyOrganizationListViewItem_array *v90; // x26
  System_Int64_array *EquipList; // x27
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  PartyOrganizationListViewItem_o *v95; // x0
  Il2CppClass **v96; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v99; // x1
  __int64 v100; // x0
  bool *v101; // [xsp+20h] [xbp-C0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+30h] [xbp-B0h]
  UserServantEntity_array *UserServantList; // [xsp+38h] [xbp-A8h]
  int v105; // [xsp+40h] [xbp-A0h]
  int v106; // [xsp+44h] [xbp-9Ch]
  PartyListViewItem_o *v107; // [xsp+48h] [xbp-98h]
  int32_t v109; // [xsp+60h] [xbp-80h]
  _BOOL4 v110; // [xsp+64h] [xbp-7Ch]
  int32_t followerClassIda; // [xsp+74h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16

  if ( (byte_4B11E49 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, isBaseModify, *(_QWORD *)&menuKind);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcFollowerMaster___, v19, v20);
    sub_1BCA7E0(&DataManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24);
    sub_1BCA7E0(&PartyOrganizationListViewItem___TypeInfo, v25, v26);
    sub_1BCA7E0(&PartyOrganizationListViewItem_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v29, v30);
    byte_4B11E49 = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1BCA784(&this->fields.setupInfo, setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v32);
  this->fields.deckName = DefaultDeckName;
  Instance = sub_1BCA784(&this->fields.deckName, DefaultDeckName);
  if ( !deck )
    goto LABEL_110;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_110;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v36) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_110;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0LL);
  }
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0LL, v38);
  if ( FollowerIndex <= 0 )
  {
    v41 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v39);
      v41 = BalanceConfig_TypeInfo;
    }
    FollowerIndex = v41->static_fields->DeckMainMemberMax;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  if ( *(int *)(Instance + 48) < 1 )
  {
    v42 = 0LL;
    v43 = 0;
    v110 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    v42 = *(PartyListViewItem_o **)(Instance + 72);
    v43 = 0;
    v110 = v42 == 0LL;
    if ( follower && v42 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_110;
      v43 = *(_DWORD *)(Instance + 48);
      Instance = (__int64)PartyListViewItem__GetMember(v42, v43 - 1, v44);
      if ( !Instance )
        goto LABEL_110;
      v45 = *(_DWORD *)(Instance + 348);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_110;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v45, follower, 0LL);
      v110 = 0;
    }
  }
  v46 = BalanceConfig_TypeInfo;
  v101 = isBaseModify;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v35);
    v46 = BalanceConfig_TypeInfo;
  }
  v47 = (struct PartyOrganizationListViewItem_array *)sub_1BCA888(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v46->static_fields->DeckMemberMax);
  this->fields.memberList = v47;
  p_memberList = &this->fields.memberList;
  sub_1BCA784(&this->fields.memberList, v47);
  this->fields.cost = 0;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    follower = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    followerClassId = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    v49 = *(_DWORD *)(Instance + 36);
  }
  else
  {
    v49 = followerDeckId;
  }
  v109 = v49;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v35);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || (v107 = v42, !Instance) )
LABEL_110:
    sub_1BCAA3C(Instance, v35);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)Instance,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0LL);
  v51 = 0;
  v105 = v43 - 1;
  v106 = FollowerIndex - 1;
  while ( 1 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v35);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v51 >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 156LL) )
      break;
    if ( v110 )
    {
      v52 = deck->fields.deckInfo;
      if ( !v52 )
        goto LABEL_110;
      svts = v52->fields.svts;
      if ( !svts )
        goto LABEL_110;
      if ( v51 >= svts->max_length )
        goto LABEL_114;
      v54 = svts->m_Items[v51];
      if ( !v54 )
        goto LABEL_110;
      p_initPos = &v54->fields.initPos;
    }
    else
    {
      Instance = (__int64)PartyListViewItem__GetMember(v107, v51, v50);
      if ( !Instance )
        goto LABEL_110;
      p_initPos = (int32_t *)(Instance + 348);
    }
    initPos = *p_initPos;
    followera = 0LL;
    followerClassIda = 0;
    if ( !questRestrictionInfo )
      goto LABEL_110;
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(questRestrictionInfo, initPos, 0LL);
    v58 = Instance;
    if ( (Instance & 1) != 0 )
    {
      v59 = deck->fields.deckInfo;
      if ( !v59 )
        goto LABEL_110;
      v60 = v59->fields.svts;
      if ( !v60 )
        goto LABEL_110;
      if ( v51 >= v60->max_length )
        goto LABEL_114;
      v61 = v60->m_Items[v51];
      if ( !v61 )
        goto LABEL_110;
      v62 = 0;
      if ( v105 != v51 )
      {
        npcFollowerSvtId = v61->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v62 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v57);
      }
    }
    else
    {
      v62 = 0;
    }
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                          (PartyOrganizationUtility_o *)Instance,
                          initPos,
                          0LL);
    if ( !Instance || ((v58 ^ 1) & 1) != 0 )
    {
      if ( v106 != v51 && !v62 )
      {
        if ( (v58 & 1) != 0 )
        {
          v79 = UserServantList;
          if ( !UserServantList )
            goto LABEL_110;
          if ( v51 >= UserServantList->max_length )
            goto LABEL_114;
          v80 = &UserServantList->obj.klass + (int)v51;
          v83 = v80[4];
          v82 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v80 + 4);
          v81 = v83;
          if ( v83 )
          {
            declaringType = v81->_1.declaringType;
            parent = v81->_1.parent;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
            *(_QWORD *)&v113.fields.currentCryptoKey = declaringType;
            *(_QWORD *)&v113.fields.fakeValue = parent;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v113, 0LL);
            if ( v51 >= UserServantList->max_length )
              goto LABEL_114;
            if ( !*v82 )
              goto LABEL_110;
            v86 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*v82)[6], 0LL);
            if ( v51 >= UserServantList->max_length )
              goto LABEL_114;
            v87 = Instance;
            Instance = (__int64)*v82;
            if ( !*v82 )
              goto LABEL_110;
            DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
            Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                         questRestrictionInfo,
                         v86,
                         v87,
                         DispLimitCount,
                         initPos,
                         0,
                         0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( v51 >= UserServantList->max_length )
                goto LABEL_114;
              *v82 = 0LL;
              Instance = sub_1BCA784(v82, 0LL);
            }
          }
        }
        else
        {
          v79 = UserServantList;
          if ( !UserServantList )
            goto LABEL_110;
        }
        if ( v51 >= v79->max_length )
          goto LABEL_114;
        v89 = v79->m_Items[v51];
        v90 = *p_memberList;
        if ( v89 )
        {
          EquipList = UserEventDeckEntity__GetEquipList(deck, v51, 0LL);
          v74 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v92, v93, v94);
          PartyOrganizationListViewItem___ctor_32604236(
            v74,
            v51,
            v89,
            EquipList,
            setupInfo,
            questRestrictionInfo,
            0LL,
            initPos,
            0LL,
            0,
            0LL);
          if ( !v90 )
            goto LABEL_110;
        }
        else
        {
          v74 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v35, v64, v65);
          PartyOrganizationListViewItem___ctor_32613444(v74, v51, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
          if ( !v90 )
            goto LABEL_110;
        }
        if ( v74 )
        {
          Instance = sub_1BCA91C(v74, v90->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_115:
            v100 = sub_1BCAA60();
            sub_1BCA908(v100, 0LL);
          }
        }
        if ( v51 >= v90->max_length )
          goto LABEL_114;
        v96 = &v90->obj.klass + (int)v51;
      }
      else
      {
        v76 = followera;
        v77 = *p_memberList;
        if ( followera )
        {
          v78 = followerClassIda;
          v74 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v35, v64, v65);
          PartyOrganizationListViewItem___ctor_32576596(
            v74,
            v51,
            v76,
            v78,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v109,
            initPos,
            0LL);
LABEL_94:
          if ( !v77 )
            goto LABEL_110;
        }
        else
        {
          v95 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v35, v64, v65);
          v74 = v95;
          if ( follower )
          {
            PartyOrganizationListViewItem___ctor_32576596(
              v95,
              v51,
              follower,
              followerClassId,
              setupInfo,
              questRestrictionInfo,
              friendPointCampaignEntityList,
              0,
              v109,
              initPos,
              0LL);
            goto LABEL_94;
          }
          PartyOrganizationListViewItem___ctor_32613444(v95, v51, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
          if ( !v77 )
            goto LABEL_110;
        }
        if ( v74 )
        {
          Instance = sub_1BCA91C(v74, v77->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_115;
        }
        if ( v51 >= v77->max_length )
          goto LABEL_114;
        v96 = &v77->obj.klass + (int)v51;
      }
      v75 = (PartyOrganizationListViewItem_o **)(v96 + 4);
      goto LABEL_105;
    }
    v66 = (FollowerInfo_o *)Instance;
    if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0LL) )
      v67 = 0;
    else
      v67 = followerClassId;
    IsNpc = FollowerInfo__get_IsNpc(v66, 0LL);
    v72 = *p_memberList;
    if ( IsNpc )
      v73 = 0;
    else
      v73 = v109;
    v74 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v69, v70, v71);
    PartyOrganizationListViewItem___ctor_32576596(
      v74,
      v51,
      v66,
      v67,
      setupInfo,
      questRestrictionInfo,
      friendPointCampaignEntityList,
      0,
      v73,
      initPos,
      0LL);
    if ( !v72 )
      goto LABEL_110;
    if ( v74 )
    {
      Instance = sub_1BCA91C(v74, v72->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_115;
    }
    if ( v51 >= v72->max_length )
      goto LABEL_114;
    v75 = &v72->m_Items[v51];
LABEL_105:
    *v75 = v74;
    Instance = sub_1BCA784(v75, v74);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_110;
    if ( v51 >= memberList->max_length )
LABEL_114:
      sub_1BCAA44(Instance, v35);
    Instance = (__int64)memberList->m_Items[v51];
    if ( !Instance )
      goto LABEL_110;
    cost = this->fields.cost;
    ++v51;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, v35);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v99) )
    *v101 = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_32467588(
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
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x24
  const MethodInfo *v35; // x1
  struct System_String_o *DefaultDeckName; // x0
  __int64 Instance; // x0
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x2
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo_37DEF34 **v41; // x28
  PartyListViewItem_o *v42; // x27
  unsigned int v43; // w25
  const MethodInfo *v44; // x2
  int32_t v45; // w19
  int32_t v46; // w8
  BalanceConfig_c *v47; // x0
  struct PartyOrganizationListViewItem_array *v48; // x0
  int32_t v49; // w8
  FollowerInfo_array *QuestFollowerList; // x0
  const MethodInfo *v51; // x2
  __int64 v52; // x3
  unsigned int *v53; // x23
  __int64 v54; // x8
  unsigned __int64 v55; // x24
  __int64 v56; // x25
  int32_t *p_initPos; // x8
  struct DeckServant_o *v58; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v60; // x8
  int32_t initPos; // w25
  unsigned __int64 max_length; // x8
  UserServantEntity_o *v63; // x9
  __int64 v64; // x20
  __int64 v65; // x26
  __int64 v66; // x20
  const MethodInfo *v67; // x6
  int v68; // w26
  struct DeckServant_o *v69; // x8
  struct DeckServantData_array *v70; // x8
  DeckServantData_o *v71; // x8
  _BOOL4 v72; // w27
  int64_t npcFollowerSvtId; // x4
  __int64 v74; // x2
  __int64 v75; // x3
  FollowerInfo_o *v76; // x20
  PartyListViewItem_o *v77; // x23
  const MethodInfo_37DEF34 **v78; // x21
  UserEventDeckEntity_o *v79; // x28
  int32_t v80; // w27
  bool IsNpc; // w0
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  unsigned int *v85; // x19
  int32_t v86; // w29
  PartyOrganizationListViewItem_o *v87; // x26
  __int64 v88; // x25
  unsigned __int64 v89; // x8
  FollowerInfo_o *v90; // x20
  int32_t v91; // w27
  unsigned int *v92; // x19
  PartyOrganizationListViewItem_o *v93; // x26
  UserServantEntity_o *v94; // x8
  __int64 v95; // x20
  __int64 v96; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v97; // x8
  int32_t v98; // w20
  int32_t v99; // w26
  int32_t DispLimitCount; // w0
  UserServantEntity_o *v101; // x20
  System_Int64_array *EquipList; // x27
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  PartyOrganizationListViewItem_o *v106; // x0
  int32_t v107; // w1
  bool v108; // w2
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v111; // x1
  __int64 v112; // x0
  UserServantMaster_o *Master_object; // [xsp+20h] [xbp-100h]
  FollowerInfo_o *v115; // [xsp+30h] [xbp-F0h]
  int32_t *v116; // [xsp+38h] [xbp-E8h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+40h] [xbp-E0h]
  UserServantEntity_array *UserServantList; // [xsp+50h] [xbp-D0h]
  struct System_Int32_array *svtIdForceBattleList; // [xsp+60h] [xbp-C0h]
  UserServantEntity_o **m_Items; // [xsp+70h] [xbp-B0h]
  __int64 v122; // [xsp+78h] [xbp-A8h]
  int32_t v123; // [xsp+84h] [xbp-9Ch]
  PartyListViewItem_o *v124; // [xsp+88h] [xbp-98h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+90h] [xbp-90h]
  __int64 v126; // [xsp+98h] [xbp-88h]
  __int64 v127; // [xsp+A8h] [xbp-78h]
  int32_t followerClassIda; // [xsp+B4h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16

  if ( (byte_4B11E4A & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, isBaseModify, *(_QWORD *)&menuKind);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcFollowerMaster___, v20, v21);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v22, v23);
    sub_1BCA7E0(&DataManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26, v27);
    sub_1BCA7E0(&PartyOrganizationListViewItem___TypeInfo, v28, v29);
    sub_1BCA7E0(&PartyOrganizationListViewItem_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v32, v33);
    byte_4B11E4A = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1BCA784(&this->fields.setupInfo, setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v35);
  this->fields.deckName = DefaultDeckName;
  Instance = sub_1BCA784(&this->fields.deckName, DefaultDeckName);
  if ( !deck )
    goto LABEL_142;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_142;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v39) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_142;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0LL);
  }
  v41 = (const MethodInfo_37DEF34 **)&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v38);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  if ( *(int *)(Instance + 48) < 1 )
  {
    v42 = 0LL;
    if ( !questRestrictionInfo )
      goto LABEL_15;
    goto LABEL_14;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  v42 = *(PartyListViewItem_o **)(Instance + 72);
  if ( questRestrictionInfo )
LABEL_14:
    QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL);
LABEL_15:
  v43 = 0;
  if ( follower && v42 )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    v43 = *(_DWORD *)(Instance + 48);
    Instance = (__int64)PartyListViewItem__GetMember(v42, v43 - 1, v44);
    if ( !Instance )
      goto LABEL_142;
    v45 = *(_DWORD *)(Instance + 348);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v45, follower, 0LL);
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    follower = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    followerClassId = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    v46 = *(_DWORD *)(Instance + 36);
  }
  else
  {
    v46 = followerDeckId;
  }
  v123 = v46;
  v47 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v38);
    v47 = BalanceConfig_TypeInfo;
  }
  v48 = (struct PartyOrganizationListViewItem_array *)sub_1BCA888(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v47->static_fields->DeckMemberMax);
  this->fields.memberList = v48;
  sub_1BCA784(&this->fields.memberList, v48);
  v49 = this->fields.menuKind;
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( v49 == 3 )
  {
    Instance = (__int64)*p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_142;
    Instance = (__int64)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList((QuestRestrictionInfo_o *)Instance, 0LL);
    if ( !*p_questRestrictionInfo )
      goto LABEL_142;
    v122 = Instance;
    svtIdForceBattleList = (*p_questRestrictionInfo)->fields.svtIdForceBattleList;
  }
  else
  {
    svtIdForceBattleList = 0LL;
    v122 = 0LL;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v38);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || (v115 = follower, !Instance) )
LABEL_142:
    sub_1BCAA3C(Instance, v38);
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Instance,
                        (*p_questRestrictionInfo)->fields.questId,
                        (*p_questRestrictionInfo)->fields.questPhase,
                        0LL);
  v53 = (unsigned int *)UserServantList;
  v54 = v43;
  v55 = 0LL;
  v56 = 0LL;
  v116 = &svtIdForceBattleList->m_Items[1];
  npcFollowerInfoList = QuestFollowerList;
  m_Items = UserServantList->m_Items;
  v126 = v54 - 1;
  v124 = v42;
  while ( 1 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v38);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v55 >= *(int *)(*(_QWORD *)(Instance + 184) + 156LL) )
      break;
    v127 = v56;
    if ( v42 )
    {
      Instance = (__int64)PartyListViewItem__GetMember(v42, v55, v51);
      if ( !Instance )
        goto LABEL_142;
      p_initPos = (int32_t *)(Instance + 348);
    }
    else
    {
      v58 = deck->fields.deckInfo;
      if ( !v58 )
        goto LABEL_142;
      svts = v58->fields.svts;
      if ( !svts )
        goto LABEL_142;
      if ( v55 >= svts->max_length )
        goto LABEL_143;
      v60 = svts->m_Items[v55];
      if ( !v60 )
        goto LABEL_142;
      p_initPos = &v60->fields.initPos;
    }
    initPos = *p_initPos;
    if ( this->fields.menuKind == 3 )
    {
      if ( !v122 )
        goto LABEL_142;
      if ( (__int64)v55 >= *(int *)(v122 + 24) )
      {
        v92 = (unsigned int *)*p_memberList;
        v93 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v38, v51, v52);
        PartyOrganizationListViewItem___ctor_32613444(v93, v55, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v92 )
          goto LABEL_142;
        v88 = v127;
        if ( v93 )
        {
          Instance = sub_1BCA91C(v93, *(_QWORD *)(*(_QWORD *)v92 + 64LL));
          if ( !Instance )
          {
LABEL_144:
            v112 = sub_1BCAA60();
            sub_1BCA908(v112, 0LL);
          }
        }
        if ( v55 >= v92[6] )
          goto LABEL_143;
        *(_QWORD *)&v92[2 * v55 + 8] = v93;
        sub_1BCA784((char *)v92 + v127 + 32, v93);
        goto LABEL_138;
      }
      if ( svtIdForceBattleList )
      {
        if ( v126 != v55 && isFirstEnforceChange )
        {
          max_length = svtIdForceBattleList->max_length;
          if ( (__int64)v55 < (int)max_length )
          {
            if ( v55 >= max_length )
              goto LABEL_143;
            v38 = (const MethodInfo *)(unsigned int)v116[v55];
            if ( (int)v38 >= 1 )
            {
              if ( !v53 )
                goto LABEL_142;
              if ( v55 >= v53[6] )
                goto LABEL_143;
              v63 = m_Items[v55];
              if ( !v63 )
                goto LABEL_68;
              v65 = *(_QWORD *)&v63->fields.svtId.fields.currentCryptoKey;
              v64 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v38);
              *(_QWORD *)&v130.fields.currentCryptoKey = v65;
              *(_QWORD *)&v130.fields.fakeValue = v64;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v130, 0LL);
              max_length = svtIdForceBattleList->max_length;
              if ( v55 >= max_length )
                goto LABEL_143;
              v38 = (const MethodInfo *)(unsigned int)v116[v55];
              if ( (_DWORD)Instance != (_DWORD)v38 )
              {
LABEL_68:
                if ( v55 >= max_length )
                  goto LABEL_143;
                Instance = (__int64)Master_object;
                if ( !Master_object )
                  goto LABEL_142;
                Instance = (__int64)UserServantMaster__getSvtIdBattle(Master_object, (int32_t)v38, 0LL);
                v66 = Instance;
                if ( Instance )
                {
                  Instance = sub_1BCA91C(Instance, *(_QWORD *)(*(_QWORD *)v53 + 64LL));
                  if ( !Instance )
                    goto LABEL_144;
                }
                if ( v55 >= v53[6] )
                  goto LABEL_143;
                m_Items[v55] = (UserServantEntity_o *)v66;
                Instance = sub_1BCA784((char *)m_Items + v127, v66);
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
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(questRestrictionInfo, initPos, 0LL);
    v68 = Instance;
    if ( (Instance & 1) != 0 )
    {
      v69 = deck->fields.deckInfo;
      if ( !v69 )
        goto LABEL_142;
      v70 = v69->fields.svts;
      if ( !v70 )
        goto LABEL_142;
      if ( v55 >= v70->max_length )
        goto LABEL_143;
      v71 = v70->m_Items[v55];
      if ( !v71 )
        goto LABEL_142;
      v72 = 0;
      if ( v126 != v55 )
      {
        npcFollowerSvtId = v71->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v72 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v67);
      }
    }
    else
    {
      v72 = 0;
    }
    Instance = (__int64)SingletonTemplate_object___get_Instance(*v41);
    if ( !Instance )
      goto LABEL_142;
    Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                          (PartyOrganizationUtility_o *)Instance,
                          initPos,
                          0LL);
    if ( Instance && ((v68 ^ 1) & 1) == 0 )
    {
      v76 = (FollowerInfo_o *)Instance;
      v77 = this;
      v78 = v41;
      v79 = deck;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0LL) )
        v80 = 0;
      else
        v80 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v76, 0LL);
      v85 = (unsigned int *)*p_memberList;
      if ( IsNpc )
        v86 = 0;
      else
        v86 = v123;
      v87 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v82, v83, v84);
      PartyOrganizationListViewItem___ctor_32576596(
        v87,
        v55,
        v76,
        v80,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v86,
        initPos,
        0LL);
      if ( !v85 )
        goto LABEL_142;
      v42 = v124;
      v88 = v127;
      deck = v79;
      if ( v87 )
      {
        Instance = sub_1BCA91C(v87, *(_QWORD *)(*(_QWORD *)v85 + 64LL));
        if ( !Instance )
          goto LABEL_144;
      }
      v89 = v85[6];
      v41 = v78;
      this = v77;
      v53 = (unsigned int *)UserServantList;
      goto LABEL_133;
    }
    if ( v126 != v55 && !v72 )
    {
      if ( (v68 & 1) != 0 )
      {
        if ( !v53 )
          goto LABEL_142;
        if ( v55 >= v53[6] )
          goto LABEL_143;
        v94 = m_Items[v55];
        if ( v94 )
        {
          v96 = *(_QWORD *)&v94->fields.svtId.fields.currentCryptoKey;
          v95 = *(_QWORD *)&v94->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v38);
          *(_QWORD *)&v131.fields.currentCryptoKey = v96;
          *(_QWORD *)&v131.fields.fakeValue = v95;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v131, 0LL);
          if ( v55 >= v53[6] )
            goto LABEL_143;
          v97 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)m_Items[v55];
          if ( !v97 )
            goto LABEL_142;
          v98 = Instance;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v97[6], 0LL);
          if ( v55 >= v53[6] )
LABEL_143:
            sub_1BCAA44(Instance, v38);
          v99 = Instance;
          Instance = (__int64)m_Items[v55];
          if ( !Instance )
            goto LABEL_142;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
          Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                       questRestrictionInfo,
                       v98,
                       v99,
                       DispLimitCount,
                       initPos,
                       0,
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v55 >= v53[6] )
              goto LABEL_143;
            m_Items[v55] = 0LL;
            Instance = sub_1BCA784((char *)m_Items + v127, 0LL);
          }
        }
      }
      else if ( !v53 )
      {
        goto LABEL_142;
      }
      if ( v55 >= v53[6] )
        goto LABEL_143;
      v101 = m_Items[v55];
      v85 = (unsigned int *)*p_memberList;
      if ( !v101 )
      {
        v106 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v38, v74, v75);
        v87 = v106;
        v107 = v55;
        v108 = 0;
        goto LABEL_128;
      }
      EquipList = UserEventDeckEntity__GetEquipList(deck, v55, 0LL);
      v87 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v103, v104, v105);
      PartyOrganizationListViewItem___ctor_32604236(
        v87,
        v55,
        v101,
        EquipList,
        setupInfo,
        questRestrictionInfo,
        0LL,
        initPos,
        0LL,
        0,
        0LL);
      if ( !v85 )
        goto LABEL_142;
    }
    else
    {
      v90 = followera;
      v85 = (unsigned int *)*p_memberList;
      if ( !followera )
      {
        v106 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v38, v74, v75);
        v87 = v106;
        if ( v115 )
        {
          PartyOrganizationListViewItem___ctor_32576596(
            v106,
            v55,
            v115,
            followerClassId,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v123,
            initPos,
            0LL);
        }
        else
        {
          v108 = 1;
          v107 = v55;
LABEL_128:
          PartyOrganizationListViewItem___ctor_32613444(
            v106,
            v107,
            v108,
            setupInfo,
            questRestrictionInfo,
            1,
            initPos,
            0LL);
        }
        v42 = v124;
        if ( !v85 )
          goto LABEL_142;
        goto LABEL_130;
      }
      v91 = followerClassIda;
      v87 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v38, v74, v75);
      PartyOrganizationListViewItem___ctor_32576596(
        v87,
        v55,
        v90,
        v91,
        setupInfo,
        questRestrictionInfo,
        0LL,
        0,
        v123,
        initPos,
        0LL);
      if ( !v85 )
        goto LABEL_142;
    }
    v42 = v124;
LABEL_130:
    v88 = v127;
    if ( v87 )
    {
      Instance = sub_1BCA91C(v87, *(_QWORD *)(*(_QWORD *)v85 + 64LL));
      if ( !Instance )
        goto LABEL_144;
    }
    v89 = v85[6];
LABEL_133:
    if ( v55 >= v89 )
      goto LABEL_143;
    *(_QWORD *)&v85[2 * v55 + 8] = v87;
    Instance = sub_1BCA784((char *)v85 + v88 + 32, v87);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_142;
    if ( v55 >= memberList->max_length )
      goto LABEL_143;
    Instance = (__int64)memberList->m_Items[v55];
    if ( !Instance )
      goto LABEL_142;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                      + cost;
LABEL_138:
    ++v55;
    v56 = v88 + 8;
  }
  PartyListViewItem__CheckRestriction(this, v38);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v111) )
    *isBaseModify = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_32470336(
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  void *v27; // x1
  __int64 v28; // x1
  BalanceConfig_c *v29; // x0
  struct PartyOrganizationListViewItem_array *v30; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x22
  Il2CppObject *Instance; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  int32_t klass; // w23
  int32_t klass_high; // w25
  struct PartyOrganizationListViewItem_array *v38; // x26
  PartyOrganizationListViewItem_o *v39; // x0
  PartyOrganizationListViewItem_o *v40; // x27
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w23
  const MethodInfo *v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  int32_t i; // w23
  BalanceConfig_c *v47; // x0
  struct PartyOrganizationListViewItem_array *v48; // x25
  PartyOrganizationListViewItem_o *v49; // x24
  Il2CppClass **v50; // x0
  struct PartyOrganizationListViewItem_array *v51; // x8
  int32_t v52; // w24
  __int64 v53; // x0

  if ( (byte_4B11E4B & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind, *(_QWORD *)&index);
    sub_1BCA7E0(&PartyOrganizationListViewItem___TypeInfo, v19, v20);
    sub_1BCA7E0(&PartyOrganizationListViewItem_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v23, v24);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v25, v26);
    byte_4B11E4B = 1;
  }
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1BCA784(&this->fields.setupInfo, setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
  this->fields.isDeckNameDefault = 0;
  v27 = StringLiteral_1/*""*/;
  this->fields.deckName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(&this->fields.deckName, v27);
  this->fields.userEquipId = userEquipId;
  this->fields.id = 0LL;
  v29 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v28);
    v29 = BalanceConfig_TypeInfo;
  }
  v30 = (struct PartyOrganizationListViewItem_array *)sub_1BCA888(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v29->static_fields->DeckMemberMax);
  this->fields.memberList = v30;
  p_memberList = &this->fields.memberList;
  sub_1BCA784(&this->fields.memberList, v30);
  this->fields.cost = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  klass = followerClassId;
  if ( Instance[1].monitor )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    follower = (FollowerInfo_o *)Instance[1].monitor;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    klass = (int32_t)Instance[2].klass;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    klass_high = HIDWORD(Instance[2].klass);
  }
  else
  {
    klass_high = followerDeckId;
  }
  v38 = *p_memberList;
  v39 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v33, v34, v35);
  v40 = v39;
  if ( follower )
  {
    PartyOrganizationListViewItem___ctor_32576596(
      v39,
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
    if ( !v38 )
      goto LABEL_35;
  }
  else
  {
    PartyOrganizationListViewItem___ctor_32613444(v39, 0, 1, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v38 )
      goto LABEL_35;
  }
  if ( v40 )
  {
    Instance = (Il2CppObject *)sub_1BCA91C(v40, v38->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_37:
      v53 = sub_1BCAA60();
      sub_1BCA908(v53, 0LL);
    }
  }
  if ( !v38->max_length )
    goto LABEL_36;
  v38->m_Items[0] = v40;
  Instance = (Il2CppObject *)sub_1BCA784(v38->m_Items, v40);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_35;
  if ( !memberList->max_length )
LABEL_36:
    sub_1BCAA44(Instance, v33);
  Instance = (Il2CppObject *)memberList->m_Items[0];
  if ( !Instance )
LABEL_35:
    sub_1BCAA3C(Instance, v33);
  cost = this->fields.cost;
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                    + cost;
  for ( i = 1; ; ++i )
  {
    v47 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v43);
      v47 = BalanceConfig_TypeInfo;
    }
    if ( i >= v47->static_fields->DeckMemberMax )
      break;
    v48 = *p_memberList;
    v49 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v43, v44, v45);
    PartyOrganizationListViewItem___ctor_32613444(v49, i, 0, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v48 )
      goto LABEL_35;
    if ( v49 )
    {
      Instance = (Il2CppObject *)sub_1BCA91C(v49, v48->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_37;
    }
    if ( i >= v48->max_length )
      goto LABEL_36;
    v50 = &v48->obj.klass + i;
    v50[4] = (Il2CppClass *)v49;
    Instance = (Il2CppObject *)sub_1BCA784(v50 + 4, v49);
    v51 = this->fields.memberList;
    if ( !v51 )
      goto LABEL_35;
    if ( i >= v51->max_length )
      goto LABEL_36;
    Instance = (Il2CppObject *)v51->m_Items[i];
    if ( !Instance )
      goto LABEL_35;
    v52 = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                      + v52;
  }
  PartyListViewItem__CheckRestriction(this, v43);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_32471228(
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  __int64 IsNeedDeckPosReset; // x0
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2
  struct DeckServant_o *deckInfo; // x8
  int32_t servantNumMax; // w26
  const MethodInfo *v37; // x3
  PartyListViewItem_o *v38; // x28
  int v39; // w25
  const MethodInfo *v40; // x2
  int32_t v41; // w23
  __int64 v42; // x1
  int32_t FollowerIndex; // w24
  BalanceConfig_c *v44; // x0
  __int64 v45; // x9
  __int64 v46; // x27
  __int64 v47; // x21
  unsigned __int64 v48; // x8
  __int64 v49; // x23
  signed __int64 v50; // x29
  BalanceConfig_c *v51; // x0
  struct PartyOrganizationListViewItem_array *v52; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x28
  __int64 v54; // x1
  const MethodInfo *v55; // x2
  __int64 v56; // x19
  struct DeckServant_o *v57; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v59; // x8
  int32_t *p_initPos; // x8
  int32_t initPos; // w24
  const MethodInfo *v62; // x6
  int v63; // w25
  _BOOL4 v64; // w26
  struct DeckServant_o *v65; // x8
  struct DeckServantData_array *v66; // x8
  DeckServantData_o *v67; // x8
  int64_t npcFollowerSvtId; // x4
  __int64 v69; // x2
  __int64 v70; // x3
  FollowerInfo_o *v71; // x23
  int32_t v72; // w26
  bool IsNpc; // w0
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  struct PartyOrganizationListViewItem_array *v77; // x21
  int32_t v78; // w29
  PartyOrganizationListViewItem_o *v79; // x25
  Il2CppClass **v80; // x8
  FollowerInfo_o *v81; // x23
  struct PartyOrganizationListViewItem_array *v82; // x29
  int32_t v83; // w26
  __int64 v84; // x29
  __int64 v85; // x25
  __int64 v86; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v87; // x25
  __int64 v88; // t1
  __int64 v89; // x23
  __int64 v90; // x26
  int32_t v91; // w23
  int32_t v92; // w26
  int32_t DispLimitCount; // w0
  UserServantEntity_o *v94; // x23
  struct PartyOrganizationListViewItem_array *v95; // x21
  System_Int64_array *EquipList; // x26
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  PartyOrganizationListViewItem_o *v100; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w21
  const MethodInfo *v103; // x1
  __int64 v104; // x0
  FollowerInfo_o *followerInfo; // [xsp+18h] [xbp-C8h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+20h] [xbp-C0h]
  int v108; // [xsp+30h] [xbp-B0h]
  int v109; // [xsp+38h] [xbp-A8h]
  PartyListViewItem_o *v110; // [xsp+40h] [xbp-A0h]
  int32_t v111; // [xsp+4Ch] [xbp-94h]
  int32_t v112; // [xsp+58h] [xbp-88h]
  _BOOL4 v113; // [xsp+5Ch] [xbp-84h]
  UserEventDeckEntity_o *v114; // [xsp+68h] [xbp-78h]
  int32_t followerClassIda; // [xsp+74h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16

  if ( (byte_4B11E4C & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, isBaseModify, *(_QWORD *)&menuKind);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcFollowerMaster___, v19, v20);
    sub_1BCA7E0(&DataManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24);
    sub_1BCA7E0(&PartyOrganizationListViewItem___TypeInfo, v25, v26);
    sub_1BCA7E0(&PartyOrganizationListViewItem_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v29, v30);
    byte_4B11E4C = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1BCA784(&this->fields.setupInfo, setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  IsNeedDeckPosReset = sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
  if ( !deck )
    goto LABEL_121;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_121;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  IsNeedDeckPosReset = PartyListViewItem__IsNeedDeckPosReset(this, deck, v34);
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
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_121;
  if ( *(int *)(IsNeedDeckPosReset + 48) < 1 )
  {
    v38 = 0LL;
    v39 = 0;
    v113 = 1;
  }
  else
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    v38 = *(PartyListViewItem_o **)(IsNeedDeckPosReset + 72);
    v39 = 0;
    v113 = v38 == 0LL;
    if ( followerInfo && v38 )
    {
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      v39 = *(_DWORD *)(IsNeedDeckPosReset + 48);
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v38, v39 - 1, v40);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      v41 = *(_DWORD *)(IsNeedDeckPosReset + 348);
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      PartyOrganizationUtility__SetNpcFollowerInfo(
        (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
        v41,
        followerInfo,
        0LL);
      v113 = 0;
    }
  }
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0LL, v37);
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
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v42);
    v44 = BalanceConfig_TypeInfo;
  }
  FollowerIndex = servantNumMax;
  if ( servantNumMax > v44->static_fields->DeckMainMemberMax )
  {
    FollowerIndex = v44->static_fields->DeckMainMemberMax;
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44, v42);
      FollowerIndex = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
    }
  }
LABEL_29:
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_121;
  if ( *(_QWORD *)(IsNeedDeckPosReset + 24) )
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    followerInfo = *(FollowerInfo_o **)(IsNeedDeckPosReset + 24);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    v111 = *(_DWORD *)(IsNeedDeckPosReset + 32);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    v112 = *(_DWORD *)(IsNeedDeckPosReset + 36);
  }
  else
  {
    v112 = followerDeckId;
    v111 = followerClassId;
  }
  v110 = v38;
  v114 = deck;
  IsNeedDeckPosReset = (__int64)UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  if ( !IsNeedDeckPosReset )
    goto LABEL_121;
  v45 = *(_QWORD *)(IsNeedDeckPosReset + 24);
  v46 = IsNeedDeckPosReset;
  if ( (int)v45 >= 1 )
  {
    v47 = 0LL;
    v48 = 0LL;
    v49 = IsNeedDeckPosReset + 32;
    do
    {
      if ( v48 >= (unsigned int)v45 )
LABEL_125:
        sub_1BCAA44(IsNeedDeckPosReset, v33);
      v50 = v48 + 1;
      if ( servantNumMax < (int)v48 + 1 && *(_QWORD *)(v49 + 8 * v48) )
      {
        *isBaseModify = 1;
        if ( v48 >= *(unsigned int *)(v46 + 24) )
          goto LABEL_125;
        *(_QWORD *)(v49 + 8 * v48) = 0LL;
        IsNeedDeckPosReset = sub_1BCA784(v49 + v47, 0LL);
      }
      LODWORD(v45) = *(_DWORD *)(v46 + 24);
      v47 += 8LL;
      v48 = v50;
    }
    while ( v50 < (int)v45 );
  }
  v51 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v33);
    v51 = BalanceConfig_TypeInfo;
  }
  v52 = (struct PartyOrganizationListViewItem_array *)sub_1BCA888(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v51->static_fields->DeckMemberMax);
  this->fields.memberList = v52;
  p_memberList = &this->fields.memberList;
  sub_1BCA784(&this->fields.memberList, v52);
  this->fields.cost = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v54);
  IsNeedDeckPosReset = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || !IsNeedDeckPosReset )
LABEL_121:
    sub_1BCAA3C(IsNeedDeckPosReset, v33);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)IsNeedDeckPosReset,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0LL);
  v56 = 0LL;
  v108 = v39 - 1;
  v109 = FollowerIndex - 1;
  while ( 1 )
  {
    IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v33);
      IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (int)v56 >= *(_DWORD *)(*(_QWORD *)(IsNeedDeckPosReset + 184) + 156LL) )
      break;
    if ( v113 )
    {
      v57 = v114->fields.deckInfo;
      if ( !v57 )
        goto LABEL_121;
      svts = v57->fields.svts;
      if ( !svts )
        goto LABEL_121;
      if ( (unsigned int)v56 >= svts->max_length )
        goto LABEL_125;
      v59 = svts->m_Items[(int)v56];
      if ( !v59 )
        goto LABEL_121;
      p_initPos = &v59->fields.initPos;
    }
    else
    {
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v110, v56, v55);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      p_initPos = (int32_t *)(IsNeedDeckPosReset + 348);
    }
    initPos = *p_initPos;
    followera = 0LL;
    followerClassIda = 0;
    IsNeedDeckPosReset = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(questRestrictionInfo, initPos, 0LL);
    v63 = IsNeedDeckPosReset;
    v64 = 0;
    if ( (IsNeedDeckPosReset & 1) != 0 )
    {
      v65 = v114->fields.deckInfo;
      if ( !v65 )
        goto LABEL_121;
      v66 = v65->fields.svts;
      if ( !v66 )
        goto LABEL_121;
      if ( (unsigned int)v56 >= v66->max_length )
        goto LABEL_125;
      v67 = v66->m_Items[(int)v56];
      if ( !v67 )
        goto LABEL_121;
      v64 = 0;
      if ( v108 != (_DWORD)v56 )
      {
        npcFollowerSvtId = v67->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v64 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v62);
      }
    }
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    IsNeedDeckPosReset = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                                    (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
                                    initPos,
                                    0LL);
    if ( !IsNeedDeckPosReset || ((v63 ^ 1) & 1) != 0 )
    {
      if ( v109 == (_DWORD)v56 || v64 )
      {
        v81 = followera;
        v82 = *p_memberList;
        if ( followera )
        {
          v83 = followerClassIda;
          v79 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v33, v69, v70);
          PartyOrganizationListViewItem___ctor_32576596(
            v79,
            v56,
            v81,
            v83,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v112,
            initPos,
            0LL);
LABEL_106:
          if ( !v82 )
            goto LABEL_121;
        }
        else
        {
          v100 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v33, v69, v70);
          v79 = v100;
          if ( followerInfo )
          {
            PartyOrganizationListViewItem___ctor_32576596(
              v100,
              v56,
              followerInfo,
              v111,
              setupInfo,
              questRestrictionInfo,
              friendPointCampaignEntityList,
              0,
              v112,
              initPos,
              0LL);
            goto LABEL_106;
          }
          PartyOrganizationListViewItem___ctor_32613444(v100, v56, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
          if ( !v82 )
            goto LABEL_121;
        }
        if ( v79 )
        {
          IsNeedDeckPosReset = sub_1BCA91C(v79, v82->obj.klass->_1.element_class);
          if ( !IsNeedDeckPosReset )
            goto LABEL_126;
        }
        if ( (unsigned int)v56 >= v82->max_length )
          goto LABEL_125;
        v80 = &v82->obj.klass + (int)v56;
        goto LABEL_116;
      }
      v84 = v56;
      if ( (v63 & 1) != 0 )
      {
        if ( (unsigned int)v56 >= *(_DWORD *)(v46 + 24) )
          goto LABEL_125;
        v85 = v46 + 8LL * (int)v56;
        v88 = *(_QWORD *)(v85 + 32);
        v87 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v85 + 32);
        v86 = v88;
        v84 = (int)v56;
        if ( v88 )
        {
          v90 = *(_QWORD *)(v86 + 80);
          v89 = *(_QWORD *)(v86 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v33);
          *(_QWORD *)&v117.fields.currentCryptoKey = v90;
          *(_QWORD *)&v117.fields.fakeValue = v89;
          IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v117, 0LL);
          if ( (unsigned int)v56 >= *(_DWORD *)(v46 + 24) )
            goto LABEL_125;
          if ( !*v87 )
            goto LABEL_121;
          v91 = IsNeedDeckPosReset;
          IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428((*v87)[6], 0LL);
          if ( (unsigned int)v56 >= *(_DWORD *)(v46 + 24) )
            goto LABEL_125;
          v92 = IsNeedDeckPosReset;
          IsNeedDeckPosReset = (__int64)*v87;
          if ( !*v87 )
            goto LABEL_121;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)IsNeedDeckPosReset, 0, 0LL);
          IsNeedDeckPosReset = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                 questRestrictionInfo,
                                 v91,
                                 v92,
                                 DispLimitCount,
                                 initPos,
                                 0,
                                 0LL);
          if ( (IsNeedDeckPosReset & 1) != 0 )
          {
            if ( (unsigned int)v56 >= *(_DWORD *)(v46 + 24) )
              goto LABEL_125;
            *v87 = 0LL;
            IsNeedDeckPosReset = sub_1BCA784(v87, 0LL);
          }
        }
      }
      if ( (unsigned int)v56 >= *(_DWORD *)(v46 + 24) )
        goto LABEL_125;
      v94 = *(UserServantEntity_o **)(v46 + 8 * v84 + 32);
      v95 = *p_memberList;
      if ( v94 )
      {
        EquipList = UserEventDeckEntity__GetEquipList(v114, v56, 0LL);
        v79 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v97, v98, v99);
        PartyOrganizationListViewItem___ctor_32604236(
          v79,
          v56,
          v94,
          EquipList,
          setupInfo,
          questRestrictionInfo,
          0LL,
          initPos,
          0LL,
          0,
          0LL);
        if ( !v95 )
          goto LABEL_121;
      }
      else
      {
        v79 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v33, v69, v70);
        PartyOrganizationListViewItem___ctor_32613444(v79, v56, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v95 )
          goto LABEL_121;
      }
      if ( v79 )
      {
        IsNeedDeckPosReset = sub_1BCA91C(v79, v95->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
        {
LABEL_126:
          v104 = sub_1BCAA60();
          sub_1BCA908(v104, 0LL);
        }
      }
      if ( (unsigned int)v56 >= v95->max_length )
        goto LABEL_125;
      v80 = &v95->obj.klass + v84;
    }
    else
    {
      v71 = (FollowerInfo_o *)IsNeedDeckPosReset;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)IsNeedDeckPosReset, 0LL) )
        v72 = 0;
      else
        v72 = v111;
      IsNpc = FollowerInfo__get_IsNpc(v71, 0LL);
      v77 = *p_memberList;
      if ( IsNpc )
        v78 = 0;
      else
        v78 = v112;
      v79 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v74, v75, v76);
      PartyOrganizationListViewItem___ctor_32576596(
        v79,
        v56,
        v71,
        v72,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v78,
        initPos,
        0LL);
      if ( !v77 )
        goto LABEL_121;
      if ( v79 )
      {
        IsNeedDeckPosReset = sub_1BCA91C(v79, v77->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
          goto LABEL_126;
      }
      if ( (unsigned int)v56 >= v77->max_length )
        goto LABEL_125;
      v80 = &v77->obj.klass + (int)v56;
    }
LABEL_116:
    v80[4] = (Il2CppClass *)v79;
    IsNeedDeckPosReset = sub_1BCA784(v80 + 4, v79);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_121;
    if ( (unsigned int)v56 >= memberList->max_length )
      goto LABEL_125;
    IsNeedDeckPosReset = (__int64)memberList->m_Items[(int)v56];
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    cost = this->fields.cost;
    ++v56;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)IsNeedDeckPosReset,
                          0LL)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, v33);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v103) )
    *isBaseModify = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_32473604(
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
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x1
  __int64 v85; // x2
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  __int64 Instance; // x0
  FollowerInfo_o *v88; // x1
  const MethodInfo *v89; // x2
  UserEventDeckEntity_o *v90; // x21
  struct DeckServant_o *deckInfo; // x8
  System_Int64_array *NpcServantFollowerIds; // x29
  FollowerInfo_o *v93; // x24
  PartyListViewItem_o *v94; // x22
  int v95; // w25
  const MethodInfo *v96; // x2
  int32_t v97; // w21
  int32_t DeckMemberMax; // w25
  __int64 v99; // x1
  FollowerInfo_array *QuestFollowerList; // x28
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  const MethodInfo *v104; // x3
  int max_length; // w8
  unsigned int v106; // w19
  struct System_Object_array *items; // x8
  _QWORD *v108; // x9
  __int64 size; // x10
  Il2CppClass **v110; // x0
  __int64 v111; // x2
  __int64 v112; // x3
  int32_t v113; // w22
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v115; // w9
  int v116; // w10
  QuestRestrictionInfo_SlotInfo_o *v117; // x11
  struct DeckServant_o *v118; // x8
  __int64 v119; // x29
  int v120; // w24
  int v121; // w28
  struct DeckServantData_array *svts; // x8
  Il2CppObject *v123; // x19
  struct DeckServant_o *v124; // x8
  struct DeckServantData_array *v125; // x8
  DeckServantData_o *v126; // x8
  int64_t userSvtId; // x21
  System_Func_object__bool__o *v128; // x21
  BalanceConfig_c *v129; // x0
  _BOOL8 v130; // x0
  __int64 v131; // x1
  const MethodInfo *v132; // x2
  Il2CppClass *klass; // x21
  int v134; // w8
  Il2CppClass **v135; // x8
  __int64 NpcDeployIdx; // x0
  __int64 v137; // x1
  __int64 v138; // x1
  BalanceConfig_c *v139; // x0
  const MethodInfo *v140; // x2
  const MethodInfo *v141; // x3
  int32_t i; // w19
  struct DeckServant_o *v143; // x8
  struct DeckServantData_array *v144; // x8
  DeckServantData_o *v145; // x8
  int32_t UserServantDeployIndex; // w0
  il2cpp_array_size_t v147; // w21
  __int64 v148; // x22
  Il2CppClass **v149; // x0
  BalanceConfig_c *v150; // x0
  struct PartyOrganizationListViewItem_array *v151; // x0
  __int64 v152; // x2
  __int64 v153; // x3
  unsigned __int64 v154; // x24
  EventUpValSetupInfo_o *v155; // x23
  __int64 j; // x28
  BalanceConfig_c *v157; // x0
  __int64 v158; // x25
  const MethodInfo *v159; // x2
  __int64 v160; // x3
  struct DeckServant_o *v161; // x8
  struct DeckServantData_array *v162; // x8
  DeckServantData_o *v163; // x8
  int32_t *p_initPos; // x8
  int32_t v165; // w19
  unsigned int *v166; // x21
  PartyOrganizationListViewItem_o *v167; // x25
  const MethodInfo *v168; // x6
  bool v169; // w21
  int64_t v170; // x4
  bool v171; // w22
  __int64 v172; // x2
  __int64 v173; // x3
  FollowerInfo_o *v174; // x29
  int32_t v175; // w22
  bool IsNpc; // w0
  __int64 v177; // x1
  __int64 v178; // x2
  __int64 v179; // x3
  unsigned int *v180; // x23
  int32_t v181; // w21
  PartyOrganizationListViewItem_o *v182; // x25
  unsigned int *v183; // x19
  unsigned __int64 v184; // x8
  FollowerInfo_o *v185; // x22
  unsigned int *v186; // x21
  EventUpValSetupInfo_o *v187; // x23
  int32_t v188; // w26
  PartyOrganizationListViewItem_o *v189; // x0
  int32_t v190; // w3
  PartyOrganizationListViewItem_o *v191; // x0
  System_Func_object__bool__o *v192; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v193; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v194; // x22
  __int64 v195; // x2
  __int64 v196; // x3
  FollowerInfo_o *v197; // x29
  unsigned int *v198; // x25
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v200; // x8
  int32_t classId; // w22
  PartyOrganizationListViewItem_o *v202; // x21
  __int64 v203; // x2
  __int64 v204; // x3
  System_Collections_Generic_List_object__o *v205; // x21
  int32_t v206; // w25
  PartyOrganizationListViewItem_o *v207; // x21
  int32_t v208; // w25
  UserServantEntity_o *v209; // x8
  __int64 v210; // x22
  __int64 v211; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v212; // x8
  int32_t v213; // w22
  int32_t v214; // w25
  int32_t DispLimitCount; // w0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  unsigned int *v218; // x21
  __int64 v219; // x8
  FollowerInfo_o *v220; // x22
  __int64 v221; // x8
  PartyListViewItem_o *v222; // x21
  UserServantEntity_o *v223; // x22
  unsigned int *v224; // x27
  __int64 v225; // x1
  __int64 v226; // x2
  __int64 v227; // x3
  __int64 v228; // x23
  int v229; // w24
  unsigned __int64 v230; // x29
  UserServantEntity_o **v231; // x26
  __int64 v232; // x19
  __int64 v233; // x2
  __int64 v234; // x3
  signed __int64 v235; // x21
  System_Func_object__bool__o *v236; // x22
  unsigned __int64 v237; // x8
  EventUpValSetupInfo_o *v238; // x26
  unsigned __int64 v239; // x21
  signed __int64 v240; // x28
  __int64 v241; // x23
  unsigned __int64 k; // x24
  BalanceConfig_c *v243; // x0
  __int64 v244; // x29
  const MethodInfo *v245; // x2
  __int64 v246; // x3
  struct DeckServant_o *v247; // x8
  struct DeckServantData_array *v248; // x8
  __int64 v249; // x8
  int32_t *v250; // x8
  int32_t v251; // w19
  unsigned int *v252; // x21
  PartyOrganizationListViewItem_o *v253; // x25
  const MethodInfo *v254; // x6
  int v255; // w25
  struct DeckServant_o *v256; // x8
  struct DeckServantData_array *v257; // x8
  __int64 v258; // x8
  int64_t v259; // x4
  int v260; // w8
  FollowerInfo_o *NpcFollowerInfo; // x0
  __int64 v262; // x1
  __int64 v263; // x2
  __int64 v264; // x3
  FollowerInfo_o *v265; // x22
  int32_t v266; // w29
  bool v267; // w0
  __int64 v268; // x1
  __int64 v269; // x2
  __int64 v270; // x3
  unsigned int *v271; // x21
  int32_t v272; // w26
  PartyOrganizationListViewItem_o *v273; // x25
  struct PartyOrganizationListViewItem_array *v274; // x8
  struct DeckServant_o *v275; // x9
  struct DeckServantData_array *v276; // x9
  __int64 v277; // x9
  __int64 v278; // x8
  FollowerInfo_o *v279; // x22
  unsigned int *v280; // x29
  int32_t v281; // w29
  PartyOrganizationListViewItem_o *v282; // x0
  int32_t v283; // w3
  PartyOrganizationListViewItem_o *v284; // x25
  PartyOrganizationListViewItem_o *v285; // x0
  System_Func_object__bool__o *v286; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v287; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v288; // x22
  __int64 v289; // x2
  __int64 v290; // x3
  UserServantEntity_array *v291; // x21
  __int64 v292; // x8
  __int64 v293; // x22
  __int64 v294; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v295; // x8
  int32_t v296; // w22
  int32_t v297; // w25
  int32_t v298; // w0
  __int64 v299; // x2
  __int64 v300; // x3
  struct PartyOrganizationListViewItem_array *v301; // x8
  struct DeckServant_o *v302; // x9
  struct DeckServantData_array *v303; // x9
  __int64 v304; // x9
  __int64 v305; // x8
  FollowerInfo_o *v306; // x25
  unsigned int *v307; // x26
  __int64 v308; // x8
  __int64 v309; // x8
  int32_t v310; // w22
  PartyOrganizationListViewItem_o *v311; // x29
  UserServantEntity_o *v312; // x22
  unsigned int *v313; // x26
  System_Int64_array *v314; // x29
  __int64 v315; // x1
  __int64 v316; // x2
  __int64 v317; // x3
  PartyOrganizationListViewItem_o *v318; // x25
  PartyOrganizationListViewItem_o *v319; // x22
  struct PartyOrganizationListViewItem_array *v320; // x8
  int32_t v321; // w19
  const MethodInfo *v322; // x1
  __int64 v323; // x0
  int32_t followerDeckIda; // [xsp+0h] [xbp-190h]
  int32_t initPos; // [xsp+8h] [xbp-188h]
  unsigned int *v326; // [xsp+28h] [xbp-168h]
  UserServantEntity_o **isFixNpc; // [xsp+30h] [xbp-160h]
  char isFixNpca; // [xsp+30h] [xbp-160h]
  int v329; // [xsp+3Ch] [xbp-154h]
  _BOOL4 v330; // [xsp+3Ch] [xbp-154h]
  int32_t v331; // [xsp+40h] [xbp-150h]
  int32_t v332; // [xsp+40h] [xbp-150h]
  System_Int64_array *EquipList; // [xsp+40h] [xbp-150h]
  bool v334; // [xsp+40h] [xbp-150h]
  int v336; // [xsp+54h] [xbp-13Ch]
  int32_t v337; // [xsp+60h] [xbp-130h]
  int32_t v338; // [xsp+64h] [xbp-12Ch]
  int v339; // [xsp+68h] [xbp-128h]
  int32_t FollowerIndex; // [xsp+74h] [xbp-11Ch]
  FollowerInfo_o *v341; // [xsp+78h] [xbp-118h]
  EventUpValSetupInfo_o *setupInfoa; // [xsp+80h] [xbp-110h]
  EventUpValSetupInfo_o *setupInfob; // [xsp+80h] [xbp-110h]
  PartyListViewItem_o *v344; // [xsp+88h] [xbp-108h]
  System_Int64_array *v345; // [xsp+90h] [xbp-100h]
  System_Int64_array *v346; // [xsp+90h] [xbp-100h]
  int v347; // [xsp+90h] [xbp-100h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+98h] [xbp-F8h]
  QuestRestrictionInfo_o *v349; // [xsp+A0h] [xbp-F0h]
  QuestRestrictionInfo_o *m_Items; // [xsp+A0h] [xbp-F0h]
  PartyListViewItem_o *v351; // [xsp+A8h] [xbp-E8h]
  System_Collections_Generic_List_object__o *v352; // [xsp+B0h] [xbp-E0h]
  UserServantEntity_array *userServantList; // [xsp+B8h] [xbp-D8h]
  _BOOL4 v354; // [xsp+C4h] [xbp-CCh]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+C8h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_object__o v357; // [xsp+D8h] [xbp-B8h] BYREF
  int32_t v358; // [xsp+F4h] [xbp-9Ch] BYREF
  FollowerInfo_o *v359; // [xsp+F8h] [xbp-98h] BYREF
  int32_t followerClassIda; // [xsp+104h] [xbp-8Ch] BYREF
  FollowerInfo_o *followera; // [xsp+108h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v362; // [xsp+110h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v363; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v364; // 0:x0.16

  if ( (byte_4B11E4D & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, isBaseModify, *(_QWORD *)&menuKind);
    sub_1BCA7E0(&Method_BasicHelper_Any_FollowerInfo___, v20, v21);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcFollowerMaster___, v22, v23);
    sub_1BCA7E0(&DataManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_FollowerInfo___, v26, v27);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_FollowerInfo___, v28, v29);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ElementAt_FollowerInfo___, v30, v31);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___, v32, v33);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_FollowerInfo___, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__get_Current__, v40, v41);
    sub_1BCA7E0(&FollowerInfo___TypeInfo, v42, v43);
    sub_1BCA7E0(&System_Func_FollowerInfo__bool__TypeInfo, v44, v45);
    sub_1BCA7E0(&long___TypeInfo, v46, v47);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FollowerInfo__Add__, v48, v49);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__, v50, v51);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FollowerInfo___ctor__, v52, v53);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FollowerInfo__get_Count__, v54, v55);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FollowerInfo__get_Item__, v56, v57);
    sub_1BCA7E0(&System_Collections_Generic_List_FollowerInfo__TypeInfo, v58, v59);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v60, v61);
    sub_1BCA7E0(&PartyOrganizationListViewItem___TypeInfo, v62, v63);
    sub_1BCA7E0(&PartyOrganizationListViewItem_TypeInfo, v64, v65);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v66, v67);
    sub_1BCA7E0(&Method_PartyListViewItem___c__DisplayClass27_0___ctor_b__0__, v68, v69);
    sub_1BCA7E0(&PartyListViewItem___c__DisplayClass27_0_TypeInfo, v70, v71);
    sub_1BCA7E0(&Method_PartyListViewItem___c__DisplayClass27_1___ctor_b__1__, v72, v73);
    sub_1BCA7E0(&PartyListViewItem___c__DisplayClass27_1_TypeInfo, v74, v75);
    sub_1BCA7E0(&Method_PartyListViewItem___c__DisplayClass27_2___ctor_b__2__, v76, v77);
    sub_1BCA7E0(&PartyListViewItem___c__DisplayClass27_2_TypeInfo, v78, v79);
    sub_1BCA7E0(&Method_PartyListViewItem___c__DisplayClass27_3___ctor_b__3__, v80, v81);
    sub_1BCA7E0(&PartyListViewItem___c__DisplayClass27_3_TypeInfo, v82, v83);
    sub_1BCA7E0(&UserServantEntity___TypeInfo, v84, v85);
    byte_4B11E4D = 1;
  }
  memset(&v362, 0, sizeof(v362));
  followera = 0LL;
  followerClassIda = 0;
  v359 = 0LL;
  v358 = 0;
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1BCA784(&this->fields.setupInfo, setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  Instance = sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
  v90 = deck;
  if ( !deck )
    goto LABEL_75;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_75;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v89) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_75;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0LL);
    v90 = deck;
  }
  NpcServantFollowerIds = UserEventDeckEntity__GetNpcServantFollowerIds(v90, 0LL);
  userServantList = UserEventDeckEntity__GetUserServantList(v90, 0, 0, 0LL);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  v93 = follower;
  if ( *(int *)(Instance + 48) < 1 )
  {
    v94 = 0LL;
    v95 = 0;
    v354 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v94 = *(PartyListViewItem_o **)(Instance + 72);
    v95 = 0;
    v354 = v94 == 0LL;
    if ( follower && v94 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      v95 = *(_DWORD *)(Instance + 48);
      Instance = (__int64)PartyListViewItem__GetMember(v94, v95 - 1, v96);
      if ( !Instance )
        goto LABEL_75;
      v97 = *(_DWORD *)(Instance + 348);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v97, follower, 0LL);
      v354 = 0;
    }
  }
  Instance = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v88);
  v336 = v95;
  if ( !questRestrictionInfo )
    goto LABEL_75;
  DeckMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMemberMax;
  if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0LL) )
    DeckMemberMax = questRestrictionInfo->fields.servantNumMax;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v99);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo
    || !Instance
    || (QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                              (NpcFollowerMaster_o *)Instance,
                              (*p_questRestrictionInfo)->fields.questId,
                              (*p_questRestrictionInfo)->fields.questPhase,
                              0LL),
        v352 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                              System_Collections_Generic_List_FollowerInfo__TypeInfo,
                                                              v101,
                                                              v102,
                                                              v103),
        System_Collections_Generic_List_object____ctor(
          v352,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_FollowerInfo___ctor__),
        !QuestFollowerList) )
  {
LABEL_75:
    sub_1BCAA3C(Instance, v88);
  }
  max_length = QuestFollowerList->max_length;
  if ( max_length >= 1 )
  {
    v106 = 0;
    while ( v106 < max_length )
    {
      v88 = QuestFollowerList->m_Items[v106];
      if ( !v88 )
        goto LABEL_75;
      if ( !v88->fields.isMySvtOrNpc
        && (questRestrictionInfo->fields.isNotTransitionSupportList
         || !questRestrictionInfo->fields.isNpcMultipleBattle
         || v88->fields.isFixedNpc) )
      {
        if ( !v352 )
          goto LABEL_75;
        items = v352->fields._items;
        v108 = Method_System_Collections_Generic_List_FollowerInfo__Add__;
        ++v352->fields._version;
        if ( !items )
          goto LABEL_75;
        size = v352->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v352,
            (Il2CppObject *)v88,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
        }
        else
        {
          v110 = &items->obj.klass + size;
          v352->fields._size = size + 1;
          v110[4] = (Il2CppClass *)v88;
          Instance = sub_1BCA784(v110 + 4, v88);
        }
      }
      max_length = QuestFollowerList->max_length;
      if ( (int)++v106 >= max_length )
        goto LABEL_44;
    }
LABEL_411:
    sub_1BCAA44(Instance, v88);
  }
LABEL_44:
  FollowerIndex = PartyListViewItem__GetFollowerIndex(
                    this,
                    deck,
                    (System_Collections_Generic_List_FollowerInfo__o *)v352,
                    v104);
  setupInfoa = setupInfo;
  v344 = this;
  v349 = questRestrictionInfo;
  v351 = v94;
  npcFollowerInfoList = QuestFollowerList;
  if ( isNew || !questRestrictionInfo->fields.isNpcEditablePos )
    goto LABEL_117;
  Instance = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !v352 )
      goto LABEL_75;
    v113 = v352->fields._size;
  }
  else
  {
    slotInfos = questRestrictionInfo->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_75;
    v115 = slotInfos->max_length;
    if ( v115 >= 1 )
    {
      v113 = 0;
      v116 = 0;
      while ( v115 != v116 )
      {
        v117 = slotInfos->m_Items[v116];
        if ( !v117 )
          goto LABEL_75;
        if ( v117->fields.slotType == 1 )
          v113 += v117->fields.isMoved;
        if ( v115 == ++v116 )
          goto LABEL_59;
      }
      goto LABEL_411;
    }
    v113 = 0;
  }
LABEL_59:
  v345 = NpcServantFollowerIds;
  v118 = deck->fields.deckInfo;
  if ( !v118 )
    goto LABEL_75;
  v119 = 0LL;
  v120 = 0;
  v121 = 0;
  while ( 1 )
  {
    svts = v118->fields.svts;
    if ( !svts )
      goto LABEL_75;
    if ( (int)v119 >= (signed int)svts->max_length )
      break;
    v123 = (Il2CppObject *)sub_1BCAA2C(PartyListViewItem___c__DisplayClass27_0_TypeInfo, v88, v111, v112);
    System_Object___ctor(v123, 0LL);
    v124 = deck->fields.deckInfo;
    if ( !v124 )
      goto LABEL_75;
    v125 = v124->fields.svts;
    if ( !v125 )
      goto LABEL_75;
    if ( (unsigned int)v119 >= v125->max_length )
      goto LABEL_411;
    v126 = v125->m_Items[v119];
    if ( v126 && v123 )
    {
      userSvtId = v126->fields.userSvtId;
      v123[1].klass = (Il2CppClass *)v126->fields.npcFollowerSvtId;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(
                   questRestrictionInfo,
                   v126->fields.initPos,
                   0LL);
      if ( (int)v119 >= DeckMemberMax && (userSvtId || v123[1].klass) )
        v120 = 1;
      if ( !(Instance & 1 | (v123[1].klass == 0LL)) )
      {
        v128 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_FollowerInfo__bool__TypeInfo, v88, v111, v112);
        System_Func_object__bool____ctor(v128, v123, Method_PartyListViewItem___c__DisplayClass27_0___ctor_b__0__, 0LL);
        Instance = BasicHelper__Any_object_(
                     (System_Collections_Generic_List_T__o *)v352,
                     (System_Func_T__bool__o *)v128,
                     (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_FollowerInfo___);
        v121 += Instance & 1;
      }
      ++v119;
      v118 = deck->fields.deckInfo;
      if ( v118 )
        continue;
    }
    goto LABEL_75;
  }
  if ( ((v121 == v113) & (v120 ^ 1)) != 0 )
  {
    v93 = follower;
    v94 = v351;
    NpcServantFollowerIds = v345;
    goto LABEL_117;
  }
  v129 = BalanceConfig_TypeInfo;
  v93 = follower;
  v94 = v351;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v88);
    v129 = BalanceConfig_TypeInfo;
  }
  NpcServantFollowerIds = (System_Int64_array *)sub_1BCA888(
                                                  long___TypeInfo,
                                                  (unsigned int)v129->static_fields->DeckMemberMax);
  Instance = (__int64)v352;
  if ( !v352 )
    goto LABEL_75;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v357,
    v352,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
  v362 = v357;
  while ( 1 )
  {
    v130 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v362,
             (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    if ( !v130 )
      break;
    if ( !v362.fields._current )
      sub_1BCAA3C(v130, v131);
    klass = v362.fields._current[5].klass;
    if ( klass )
    {
      v134 = LODWORD(v362.fields._current[5].monitor) - 1;
      if ( v134 >= 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_1BCAA3C(v130, v131);
        if ( v134 >= NpcServantFollowerIds->max_length )
          sub_1BCAA44(v130, v131);
        v135 = &NpcServantFollowerIds->obj.klass + (unsigned int)v134;
        goto LABEL_92;
      }
      NpcDeployIdx = PartyListViewItem__GetNpcDeployIdx(this, NpcServantFollowerIds, v132);
      if ( (NpcDeployIdx & 0x80000000) == 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_1BCAA3C(NpcDeployIdx, v137);
        if ( (unsigned int)NpcDeployIdx >= NpcServantFollowerIds->max_length )
          sub_1BCAA44(NpcDeployIdx, v137);
        v135 = &NpcServantFollowerIds->obj.klass + (unsigned int)NpcDeployIdx;
LABEL_92:
        v135[4] = klass;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v362,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
  v139 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v138);
    v139 = BalanceConfig_TypeInfo;
  }
  userServantList = (UserServantEntity_array *)sub_1BCA888(
                                                 UserServantEntity___TypeInfo,
                                                 (unsigned int)v139->static_fields->DeckMemberMax);
  for ( i = 0; ; ++i )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v88);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( i >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 156LL) )
      break;
    v143 = deck->fields.deckInfo;
    if ( !v143 )
      goto LABEL_75;
    v144 = v143->fields.svts;
    if ( !v144 )
      goto LABEL_75;
    if ( i >= v144->max_length )
      goto LABEL_411;
    v145 = v144->m_Items[i];
    if ( !v145 )
      goto LABEL_75;
    if ( v145->fields.userSvtId )
    {
      UserServantDeployIndex = PartyListViewItem__GetUserServantDeployIndex(
                                 (PartyListViewItem_o *)Instance,
                                 userServantList,
                                 NpcServantFollowerIds,
                                 v141);
      if ( (UserServantDeployIndex & 0x80000000) == 0 )
      {
        v147 = UserServantDeployIndex;
        if ( UserServantDeployIndex < DeckMemberMax )
        {
          Instance = (__int64)UserEventDeckEntity__GetUserServant(deck, i, 0LL);
          if ( !userServantList )
            goto LABEL_75;
          v148 = Instance;
          if ( Instance )
          {
            Instance = sub_1BCA91C(Instance, userServantList->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_412:
              v323 = sub_1BCAA60();
              sub_1BCA908(v323, 0LL);
            }
          }
          if ( v147 >= userServantList->max_length )
            goto LABEL_411;
          v149 = &userServantList->obj.klass + v147;
          v149[4] = (Il2CppClass *)v148;
          sub_1BCA784(v149 + 4, v148);
          questRestrictionInfo = v349;
          v94 = v351;
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
                      (System_Collections_Generic_List_FollowerInfo__o *)v352,
                      v140);
  }
LABEL_117:
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      v93 = *(FollowerInfo_o **)(Instance + 24);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        v337 = *(_DWORD *)(Instance + 32);
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          v338 = *(_DWORD *)(Instance + 36);
          goto LABEL_124;
        }
      }
    }
    goto LABEL_75;
  }
  v337 = followerClassId;
  v338 = followerDeckId;
LABEL_124:
  v150 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v88);
    v150 = BalanceConfig_TypeInfo;
  }
  v151 = (struct PartyOrganizationListViewItem_array *)sub_1BCA888(
                                                         PartyOrganizationListViewItem___TypeInfo,
                                                         (unsigned int)v150->static_fields->DeckMemberMax);
  this->fields.memberList = v151;
  Instance = sub_1BCA784(&this->fields.memberList, v151);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  v341 = v93;
  if ( !isNew && questRestrictionInfo->fields.isNpcEditablePos )
  {
    m_Items = (QuestRestrictionInfo_o *)NpcServantFollowerIds->m_Items;
    v154 = 0LL;
    v155 = (EventUpValSetupInfo_o *)DeckMemberMax;
    isFixNpc = userServantList->m_Items;
    v329 = -1;
    while ( 1 )
    {
      for ( j = 8 * v154; ; j += 8LL )
      {
        v157 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v88);
          v157 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v154 >= v157->static_fields->DeckMemberMax )
          goto LABEL_406;
        v158 = sub_1BCAA2C(PartyListViewItem___c__DisplayClass27_1_TypeInfo, v88, v152, v153);
        System_Object___ctor((Il2CppObject *)v158, 0LL);
        if ( v354 )
        {
          v161 = deck->fields.deckInfo;
          if ( !v161 )
            goto LABEL_75;
          v162 = v161->fields.svts;
          if ( !v162 )
            goto LABEL_75;
          if ( v154 >= v162->max_length )
            goto LABEL_411;
          v163 = v162->m_Items[v154];
          if ( !v163 )
            goto LABEL_75;
          p_initPos = &v163->fields.initPos;
        }
        else
        {
          Instance = (__int64)PartyListViewItem__GetMember(v94, v154, v159);
          if ( !Instance )
            goto LABEL_75;
          p_initPos = (int32_t *)(Instance + 348);
        }
        v165 = *p_initPos;
        if ( (__int64)v154 < (__int64)v155 )
          break;
        v166 = (unsigned int *)*p_memberList;
        v167 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v88, v159, v160);
        PartyOrganizationListViewItem___ctor_32613444(v167, v154, 0, setupInfo, questRestrictionInfo, 1, v165, 0LL);
        if ( !v166 )
          goto LABEL_75;
        if ( v167 )
        {
          Instance = sub_1BCA91C(v167, *(_QWORD *)(*(_QWORD *)v166 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        if ( v154 >= v166[6] )
          goto LABEL_411;
        *(_QWORD *)&v166[2 * v154 + 8] = v167;
        sub_1BCA784(&v166[(unsigned __int64)j / 4 + 8], v167);
        ++v154;
      }
      if ( !v158 )
        goto LABEL_75;
      *(_DWORD *)(v158 + 16) = v154 + 1;
      followera = 0LL;
      followerClassIda = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(questRestrictionInfo, v165, 0LL);
      v169 = 0;
      v331 = Instance;
      if ( (Instance & 1) != 0 )
      {
        if ( !NpcServantFollowerIds )
          goto LABEL_75;
        if ( v154 >= NpcServantFollowerIds->max_length )
          goto LABEL_411;
        v170 = *((_QWORD *)&m_Items->klass + v154);
        v169 = v170 >= 1
            && *(_DWORD *)(v158 + 16) != v336
            && PartyListViewItem__SetNpcFollowerInfo(
                 this,
                 &followera,
                 &followerClassIda,
                 npcFollowerInfoList,
                 v170,
                 v165,
                 v168);
      }
      setupInfob = v155;
      v171 = !QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL)
          && QuestRestrictionInfo__IsPositionFixNpc(questRestrictionInfo, v165, 0LL);
      v346 = NpcServantFollowerIds;
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                            (PartyOrganizationUtility_o *)Instance,
                            v165,
                            0LL);
      if ( !Instance || ((v331 ^ 1) & 1) != 0 )
      {
        if ( v169 || *(_DWORD *)(v158 + 16) == FollowerIndex )
        {
          v185 = followera;
          v186 = (unsigned int *)*p_memberList;
          if ( !followera )
          {
            v191 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(
                                                        PartyOrganizationListViewItem_TypeInfo,
                                                        v88,
                                                        v172,
                                                        v173);
            v182 = v191;
            if ( v341 )
              PartyOrganizationListViewItem___ctor_32576596(
                v191,
                v154,
                v341,
                v337,
                setupInfo,
                questRestrictionInfo,
                0LL,
                0,
                v338,
                v165,
                0LL);
            else
              PartyOrganizationListViewItem___ctor_32613444(
                v191,
                v154,
                1,
                setupInfo,
                questRestrictionInfo,
                1,
                v165,
                0LL);
            v94 = v351;
            v183 = v186;
            if ( !v186 )
              goto LABEL_75;
            goto LABEL_208;
          }
          v187 = setupInfo;
          v188 = followerClassIda;
          v189 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v88, v172, v173);
          v190 = v188;
          v182 = v189;
          setupInfo = v187;
          PartyOrganizationListViewItem___ctor_32576596(
            v189,
            v154,
            v185,
            v190,
            v187,
            questRestrictionInfo,
            0LL,
            0,
            v338,
            v165,
            0LL);
          v155 = setupInfob;
          if ( !v186 )
            goto LABEL_75;
          v94 = v351;
          v183 = v186;
          if ( v182 )
          {
            Instance = sub_1BCA91C(v182, *(_QWORD *)(*(_QWORD *)v186 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          v184 = v186[6];
          this = v344;
        }
        else if ( v171 )
        {
          v192 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_FollowerInfo__bool__TypeInfo, v88, v172, v173);
          System_Func_object__bool____ctor(
            v192,
            (Il2CppObject *)v158,
            Method_PartyListViewItem___c__DisplayClass27_1___ctor_b__1__,
            0LL);
          v193 = System_Linq_Enumerable__Where_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v352,
                   (System_Func_TSource__bool__o *)v192,
                   (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
          v194 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1BCA91C(v193, FollowerInfo___TypeInfo);
          if ( !v194 )
            v194 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                          v193,
                                                                          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
          if ( System_Linq_Enumerable__Any_object_(
                 v194,
                 (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
          {
            Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                                  v194,
                                  0,
                                  (const MethodInfo_2F31284 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
            v94 = v351;
            v197 = (FollowerInfo_o *)Instance;
          }
          else
          {
            v94 = v351;
            Instance = (__int64)v352;
            if ( !v352 )
              goto LABEL_75;
            if ( v352->fields._size < 1 )
            {
LABEL_221:
              v198 = (unsigned int *)*p_memberList;
              goto LABEL_236;
            }
            v208 = 0;
            while ( 1 )
            {
              Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v208,
                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
              if ( !Instance || !NpcServantFollowerIds )
                goto LABEL_75;
              if ( v154 >= NpcServantFollowerIds->max_length )
                goto LABEL_411;
              if ( *(_QWORD *)(Instance + 80) != *((_QWORD *)&m_Items->klass + v154) )
              {
                Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                      v352,
                                      v208,
                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
                if ( !Instance )
                  goto LABEL_75;
                if ( v329 < v208 && *(int *)(Instance + 88) <= 0 )
                  break;
              }
              Instance = (__int64)v352;
              if ( ++v208 >= v352->fields._size )
                goto LABEL_221;
            }
            Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                  v352,
                                  v208,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
            v197 = (FollowerInfo_o *)Instance;
            v329 = v208;
          }
          v198 = (unsigned int *)*p_memberList;
          if ( !v197 )
          {
            NpcServantFollowerIds = v346;
LABEL_236:
            v207 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(
                                                        PartyOrganizationListViewItem_TypeInfo,
                                                        v88,
                                                        v195,
                                                        v196);
            PartyOrganizationListViewItem___ctor_32613444(v207, v154, 0, setupInfo, questRestrictionInfo, 0, v165, 0LL);
            if ( !v198 )
              goto LABEL_75;
            goto LABEL_237;
          }
          userSvtLeaderHash = v197->fields.userSvtLeaderHash;
          if ( !userSvtLeaderHash )
            goto LABEL_75;
          if ( !userSvtLeaderHash->max_length )
            goto LABEL_411;
          v200 = userSvtLeaderHash->m_Items[0];
          if ( !v200 )
            goto LABEL_75;
          classId = v200->fields.classId;
          v202 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v88, v195, v196);
          PartyOrganizationListViewItem___ctor_32576596(
            v202,
            v154,
            v197,
            classId,
            setupInfo,
            questRestrictionInfo,
            0LL,
            1,
            v338,
            v165,
            0LL);
          if ( !v198 )
            goto LABEL_75;
          v94 = v351;
          NpcServantFollowerIds = v346;
          v183 = v198;
          v182 = v202;
          if ( v202 )
          {
            Instance = sub_1BCA91C(v202, *(_QWORD *)(*(_QWORD *)v183 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          v184 = v183[6];
        }
        else
        {
          if ( !NpcServantFollowerIds )
            goto LABEL_75;
          v94 = v351;
          if ( v154 >= NpcServantFollowerIds->max_length )
            goto LABEL_411;
          if ( *((_QWORD *)&m_Items->klass + v154) )
          {
            Instance = System_Linq_Enumerable__Count_object_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v352,
                         (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
            if ( (int)Instance < 1 )
            {
LABEL_203:
              v198 = (unsigned int *)*p_memberList;
            }
            else
            {
              if ( !v352 )
                goto LABEL_75;
              v205 = v352;
              v206 = 0;
              while ( 1 )
              {
                Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                      v205,
                                      v206,
                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
                if ( !Instance )
                  goto LABEL_75;
                if ( v154 >= NpcServantFollowerIds->max_length )
                  goto LABEL_411;
                if ( *(_QWORD *)(Instance + 80) == *((_QWORD *)&m_Items->klass + v154) )
                  break;
                v205 = v352;
                if ( ++v206 >= System_Linq_Enumerable__Count_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)v352,
                                 (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_FollowerInfo___) )
                  goto LABEL_203;
              }
              Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                    v352,
                                    v206,
                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
              v218 = (unsigned int *)*p_memberList;
              if ( Instance )
              {
                v219 = *(_QWORD *)(Instance + 40);
                v220 = (FollowerInfo_o *)Instance;
                if ( !v219 )
                  goto LABEL_75;
                if ( !*(_DWORD *)(v219 + 24) )
                  goto LABEL_411;
                v221 = *(_QWORD *)(v219 + 32);
                if ( !v221 )
                  goto LABEL_75;
                v332 = *(_DWORD *)(v221 + 32);
                v182 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(
                                                            PartyOrganizationListViewItem_TypeInfo,
                                                            v88,
                                                            v203,
                                                            v204);
                PartyOrganizationListViewItem___ctor_32576596(
                  v182,
                  v154,
                  v220,
                  v332,
                  setupInfo,
                  questRestrictionInfo,
                  0LL,
                  1,
                  v338,
                  v165,
                  0LL);
                if ( !v218 )
                  goto LABEL_75;
                v94 = v351;
                v183 = v218;
LABEL_208:
                if ( !v182 )
                {
LABEL_239:
                  v184 = v183[6];
                  goto LABEL_240;
                }
LABEL_238:
                Instance = sub_1BCA91C(v182, *(_QWORD *)(*(_QWORD *)v183 + 64LL));
                if ( !Instance )
                  goto LABEL_412;
                goto LABEL_239;
              }
              v94 = v351;
              v198 = (unsigned int *)*p_memberList;
            }
            v207 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(
                                                        PartyOrganizationListViewItem_TypeInfo,
                                                        v88,
                                                        v203,
                                                        v204);
            PartyOrganizationListViewItem___ctor_32613444(v207, v154, 0, setupInfo, questRestrictionInfo, 1, v165, 0LL);
            if ( !v198 )
              goto LABEL_75;
LABEL_237:
            v183 = v198;
            v182 = v207;
            if ( !v207 )
              goto LABEL_239;
            goto LABEL_238;
          }
          if ( (v331 & 1) != 0 )
          {
            if ( !userServantList )
              goto LABEL_75;
            if ( v154 >= userServantList->max_length )
              goto LABEL_411;
            v209 = isFixNpc[v154];
            if ( v209 )
            {
              v211 = *(_QWORD *)&v209->fields.svtId.fields.currentCryptoKey;
              v210 = *(_QWORD *)&v209->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v88);
              *(_QWORD *)&v363.fields.currentCryptoKey = v211;
              *(_QWORD *)&v363.fields.fakeValue = v210;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v363, 0LL);
              if ( v154 >= userServantList->max_length )
                goto LABEL_411;
              v212 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)isFixNpc[v154];
              if ( !v212 )
                goto LABEL_75;
              v213 = Instance;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v212[6], 0LL);
              if ( v154 >= userServantList->max_length )
                goto LABEL_411;
              v214 = Instance;
              Instance = (__int64)isFixNpc[v154];
              if ( !Instance )
                goto LABEL_75;
              DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
              Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                           questRestrictionInfo,
                           v213,
                           v214,
                           DispLimitCount,
                           v165,
                           0,
                           0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( v154 >= userServantList->max_length )
                  goto LABEL_411;
                isFixNpc[v154] = 0LL;
                Instance = sub_1BCA784(&isFixNpc[(unsigned __int64)j / 8], 0LL);
              }
            }
          }
          else if ( !userServantList )
          {
            goto LABEL_75;
          }
          if ( v154 >= userServantList->max_length )
            goto LABEL_411;
          v222 = this;
          v223 = isFixNpc[v154];
          v224 = (unsigned int *)*p_memberList;
          if ( !v223 )
          {
            v182 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(
                                                        PartyOrganizationListViewItem_TypeInfo,
                                                        v88,
                                                        v172,
                                                        v173);
            PartyOrganizationListViewItem___ctor_32613444(v182, v154, 0, setupInfo, questRestrictionInfo, 1, v165, 0LL);
            v94 = v351;
            if ( !v224 )
              goto LABEL_75;
            v183 = v224;
            this = v222;
            goto LABEL_208;
          }
          EquipList = UserEventDeckEntity__GetEquipList(deck, v154, 0LL);
          v182 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(
                                                      PartyOrganizationListViewItem_TypeInfo,
                                                      v225,
                                                      v226,
                                                      v227);
          PartyOrganizationListViewItem___ctor_32604236(
            v182,
            v154,
            v223,
            EquipList,
            setupInfo,
            questRestrictionInfo,
            0LL,
            v165,
            0LL,
            0,
            0LL);
          if ( !v224 )
            goto LABEL_75;
          v94 = v351;
          v183 = v224;
          if ( v182 )
          {
            Instance = sub_1BCA91C(v182, *(_QWORD *)(*(_QWORD *)v224 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          v184 = v224[6];
          this = v222;
        }
      }
      else
      {
        v174 = (FollowerInfo_o *)Instance;
        if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0LL) )
          v175 = 0;
        else
          v175 = v337;
        IsNpc = FollowerInfo__get_IsNpc(v174, 0LL);
        v180 = (unsigned int *)*p_memberList;
        if ( IsNpc )
          v181 = 0;
        else
          v181 = v338;
        v182 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v177, v178, v179);
        initPos = v165;
        v183 = v180;
        PartyOrganizationListViewItem___ctor_32576596(
          v182,
          v154,
          v174,
          v175,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v181,
          initPos,
          0LL);
        if ( !v180 )
          goto LABEL_75;
        v94 = v351;
        if ( v182 )
        {
          Instance = sub_1BCA91C(v182, *(_QWORD *)(*(_QWORD *)v180 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        v184 = v180[6];
        this = v344;
        NpcServantFollowerIds = v346;
        v155 = setupInfob;
      }
LABEL_240:
      if ( v154 >= v184 )
        goto LABEL_411;
      *(_QWORD *)&v183[2 * v154 + 8] = v182;
      Instance = sub_1BCA784(&v183[(unsigned __int64)j / 4 + 8], v182);
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_75;
      if ( v154 >= memberList->max_length )
        goto LABEL_411;
      Instance = (__int64)memberList->m_Items[v154];
      if ( !Instance )
        goto LABEL_75;
      cost = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                        + cost;
      ++v154;
    }
  }
  v347 = questRestrictionInfo->fields.myServantNumMax
       + (FollowerIndex > 0 && !questRestrictionInfo->fields.isNotTransitionSupportList);
  if ( !isNew )
  {
    if ( !userServantList )
      goto LABEL_75;
    if ( (int)userServantList->max_length >= 1 )
    {
      v228 = 0LL;
      v229 = 0;
      v230 = 0LL;
      v231 = userServantList->m_Items;
      while ( 1 )
      {
        v232 = sub_1BCAA2C(PartyListViewItem___c__DisplayClass27_2_TypeInfo, v88, v152, v153);
        System_Object___ctor((Il2CppObject *)v232, 0LL);
        if ( !v232 )
          goto LABEL_75;
        v235 = v230 + 1;
        *(_DWORD *)(v232 + 16) = v230 + 1;
        if ( v230 >= userServantList->max_length )
          goto LABEL_411;
        if ( v231[v230] )
          ++v229;
        v236 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_FollowerInfo__bool__TypeInfo, v88, v233, v234);
        System_Func_object__bool____ctor(
          v236,
          (Il2CppObject *)v232,
          Method_PartyListViewItem___c__DisplayClass27_2___ctor_b__2__,
          0LL);
        Instance = (__int64)System_Linq_Enumerable__Where_object_(
                              (System_Collections_Generic_IEnumerable_TSource__o *)npcFollowerInfoList,
                              (System_Func_TSource__bool__o *)v236,
                              (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
        v237 = userServantList->max_length;
        if ( v230 >= v237 )
          goto LABEL_411;
        questRestrictionInfo = v349;
        v94 = v351;
        if ( v231[v230] )
        {
          if ( *(_DWORD *)(v232 + 16) > DeckMemberMax )
            goto LABEL_276;
          Instance = System_Linq_Enumerable__Any_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                       (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
          if ( v229 > v347 || (Instance & 1) != 0 )
            break;
        }
LABEL_278:
        ++v228;
        ++v230;
        if ( v235 >= (int)userServantList->max_length )
          goto LABEL_279;
      }
      v237 = userServantList->max_length;
LABEL_276:
      if ( v230 >= v237 )
        goto LABEL_411;
      v231[v230] = 0LL;
      sub_1BCA784(&v231[v228], 0LL);
      goto LABEL_278;
    }
  }
LABEL_279:
  v238 = setupInfoa;
  v239 = 0LL;
  v240 = DeckMemberMax;
  v339 = 0;
LABEL_280:
  v241 = 8 * v239 + 32;
  for ( k = v239; ; ++k )
  {
    v243 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v88);
      v243 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)k >= v243->static_fields->DeckMemberMax )
      break;
    v244 = sub_1BCAA2C(PartyListViewItem___c__DisplayClass27_3_TypeInfo, v88, v152, v153);
    System_Object___ctor((Il2CppObject *)v244, 0LL);
    if ( v354 )
    {
      v247 = deck->fields.deckInfo;
      if ( !v247 )
        goto LABEL_75;
      v248 = v247->fields.svts;
      if ( !v248 )
        goto LABEL_75;
      if ( k >= v248->max_length )
        goto LABEL_411;
      v249 = *(__int64 *)((char *)&v248->obj.klass + v241);
      if ( !v249 )
        goto LABEL_75;
      v250 = (int32_t *)(v249 + 76);
    }
    else
    {
      Instance = (__int64)PartyListViewItem__GetMember(v94, k, v245);
      if ( !Instance )
        goto LABEL_75;
      v250 = (int32_t *)(Instance + 348);
    }
    v251 = *v250;
    if ( (__int64)k < v240 )
    {
      if ( !v244 )
        goto LABEL_75;
      v239 = k + 1;
      *(_DWORD *)(v244 + 16) = k + 1;
      v359 = 0LL;
      v358 = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(questRestrictionInfo, v251, 0LL);
      v255 = Instance;
      if ( (Instance & 1) == 0 )
        goto LABEL_307;
      v256 = deck->fields.deckInfo;
      if ( !v256 )
        goto LABEL_75;
      v257 = v256->fields.svts;
      if ( !v257 )
        goto LABEL_75;
      if ( k >= v257->max_length )
        goto LABEL_411;
      v258 = *(__int64 *)((char *)&v257->obj.klass + v241);
      if ( !v258 )
        goto LABEL_75;
      v259 = *(_QWORD *)(v258 + 64);
      if ( v259 >= 1 )
      {
        if ( *(_DWORD *)(v244 + 16) == v336 )
        {
          isFixNpca = 1;
          v330 = 0;
          v334 = 1;
          goto LABEL_313;
        }
        v330 = 0;
        v334 = PartyListViewItem__SetNpcFollowerInfo(this, &v359, &v358, npcFollowerInfoList, v259, v251, v254);
LABEL_312:
        isFixNpca = 1;
        goto LABEL_313;
      }
LABEL_307:
      if ( !v341 || questRestrictionInfo->fields.isNotTransitionSupportList )
      {
        v330 = 0;
        v334 = 0;
        goto LABEL_312;
      }
      v260 = *(_DWORD *)(v244 + 16);
      isFixNpca = v260 != FollowerIndex;
      v330 = v260 == FollowerIndex;
      v334 = 0;
LABEL_313:
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v251, 0LL);
      if ( NpcFollowerInfo && ((v255 ^ 1) & 1) == 0 )
      {
        v265 = NpcFollowerInfo;
        if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0LL) )
          v266 = 0;
        else
          v266 = v337;
        v267 = FollowerInfo__get_IsNpc(v265, 0LL);
        v271 = (unsigned int *)*p_memberList;
        if ( v267 )
          v272 = 0;
        else
          v272 = v338;
        followerDeckIda = v272;
        v238 = setupInfoa;
        v273 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v268, v269, v270);
        PartyOrganizationListViewItem___ctor_32576596(
          v273,
          k,
          v265,
          v266,
          setupInfoa,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          followerDeckIda,
          v251,
          0LL);
        if ( !v271 )
          goto LABEL_75;
        v94 = v351;
        if ( v273 )
        {
          Instance = sub_1BCA91C(v273, *(_QWORD *)(*(_QWORD *)v271 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        if ( k >= v271[6] )
          goto LABEL_411;
        *(_QWORD *)((char *)v271 + v241) = v273;
        Instance = sub_1BCA784((char *)v271 + v241, v273);
        v274 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_75;
        if ( k >= v274->max_length )
          goto LABEL_411;
        v239 = k + 1;
        this = v344;
        v275 = deck->fields.deckInfo;
        if ( !v275 )
          goto LABEL_75;
        v276 = v275->fields.svts;
        if ( !v276 )
          goto LABEL_75;
        if ( k >= v276->max_length )
          goto LABEL_411;
        v277 = *(__int64 *)((char *)&v276->obj.klass + v241);
        if ( !v277 )
          goto LABEL_75;
        v278 = *(__int64 *)((char *)&v274->obj.klass + v241);
        if ( !v278 )
          goto LABEL_75;
        *(_DWORD *)(v278 + 348) = *(_DWORD *)(v277 + 76);
        ++v339;
        goto LABEL_280;
      }
      if ( v334 || *(_DWORD *)(v244 + 16) == FollowerIndex )
      {
        v279 = v359;
        v280 = (unsigned int *)*p_memberList;
        if ( v359 )
        {
          v326 = (unsigned int *)*p_memberList;
          v281 = v358;
          v282 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(
                                                      PartyOrganizationListViewItem_TypeInfo,
                                                      v262,
                                                      v263,
                                                      v264);
          v283 = v281;
          v280 = v326;
          v284 = v282;
          PartyOrganizationListViewItem___ctor_32576596(
            v282,
            k,
            v279,
            v283,
            v238,
            questRestrictionInfo,
            0LL,
            isFixNpca,
            v338,
            v251,
            0LL);
          if ( !v326 )
            goto LABEL_75;
          v94 = v351;
          if ( !v284 )
          {
LABEL_365:
            if ( k >= v280[6] )
              goto LABEL_411;
            *(_QWORD *)((char *)v280 + v241) = v284;
            Instance = sub_1BCA784((char *)v280 + v241, v284);
            v301 = *p_memberList;
            if ( !*p_memberList )
              goto LABEL_75;
            if ( k >= v301->max_length )
              goto LABEL_411;
            v302 = deck->fields.deckInfo;
            if ( !v302 )
              goto LABEL_75;
            v303 = v302->fields.svts;
            if ( !v303 )
              goto LABEL_75;
            if ( k >= v303->max_length )
              goto LABEL_411;
            v304 = *(__int64 *)((char *)&v303->obj.klass + v241);
            if ( !v304 )
              goto LABEL_75;
            v305 = *(__int64 *)((char *)&v301->obj.klass + v241);
            if ( !v305 )
              goto LABEL_75;
            *(_DWORD *)(v305 + 348) = *(_DWORD *)(v304 + 76);
            v339 += v330 || v334;
            goto LABEL_280;
          }
        }
        else
        {
          v285 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(
                                                      PartyOrganizationListViewItem_TypeInfo,
                                                      v262,
                                                      v263,
                                                      v264);
          v284 = v285;
          if ( v341 )
            PartyOrganizationListViewItem___ctor_32576596(
              v285,
              k,
              v341,
              v337,
              v238,
              questRestrictionInfo,
              0LL,
              isFixNpca,
              v338,
              v251,
              0LL);
          else
            PartyOrganizationListViewItem___ctor_32613444(v285, k, 1, v238, questRestrictionInfo, 1, v251, 0LL);
          v94 = v351;
          if ( !v280 )
            goto LABEL_75;
          if ( !v284 )
            goto LABEL_365;
        }
        Instance = sub_1BCA91C(v284, *(_QWORD *)(*(_QWORD *)v280 + 64LL));
        if ( !Instance )
          goto LABEL_412;
        goto LABEL_365;
      }
      v286 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_FollowerInfo__bool__TypeInfo, v262, v263, v264);
      System_Func_object__bool____ctor(
        v286,
        (Il2CppObject *)v244,
        Method_PartyListViewItem___c__DisplayClass27_3___ctor_b__3__,
        0LL);
      v287 = System_Linq_Enumerable__Where_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v352,
               (System_Func_TSource__bool__o *)v286,
               (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v288 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1BCA91C(v287, FollowerInfo___TypeInfo);
      if ( !v288 )
        v288 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                      v287,
                                                                      (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
      Instance = System_Linq_Enumerable__Any_object_(
                   v288,
                   (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( v339 < v347 && (Instance & 1) == 0 )
      {
        if ( (v255 & 1) != 0 )
        {
          v291 = userServantList;
          if ( !userServantList )
            goto LABEL_75;
          if ( k >= userServantList->max_length )
            goto LABEL_411;
          v292 = *(__int64 *)((char *)&userServantList->obj.klass + v241);
          if ( v292 )
          {
            v294 = *(_QWORD *)(v292 + 80);
            v293 = *(_QWORD *)(v292 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v88);
            *(_QWORD *)&v364.fields.currentCryptoKey = v294;
            *(_QWORD *)&v364.fields.fakeValue = v293;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v364, 0LL);
            if ( k >= userServantList->max_length )
              goto LABEL_411;
            v295 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&userServantList->obj.klass + v241);
            if ( !v295 )
              goto LABEL_75;
            v296 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v295[6], 0LL);
            if ( k >= userServantList->max_length )
              goto LABEL_411;
            v297 = Instance;
            Instance = *(__int64 *)((char *)&userServantList->obj.klass + v241);
            if ( !Instance )
              goto LABEL_75;
            v298 = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
            questRestrictionInfo = v349;
            Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(v349, v296, v297, v298, v251, 0, 0LL);
            v291 = userServantList;
            if ( (Instance & 1) != 0 )
            {
              if ( k >= userServantList->max_length )
                goto LABEL_411;
              *(Il2CppClass **)((char *)&userServantList->obj.klass + v241) = 0LL;
              Instance = sub_1BCA784((char *)userServantList + v241, 0LL);
            }
          }
        }
        else
        {
          v291 = userServantList;
          if ( !userServantList )
            goto LABEL_75;
        }
        if ( k >= v291->max_length )
          goto LABEL_411;
        v312 = *(UserServantEntity_o **)((char *)&v291->obj.klass + v241);
        v313 = (unsigned int *)*p_memberList;
        if ( v312 )
        {
          v314 = UserEventDeckEntity__GetEquipList(deck, k, 0LL);
          v318 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(
                                                      PartyOrganizationListViewItem_TypeInfo,
                                                      v315,
                                                      v316,
                                                      v317);
          PartyOrganizationListViewItem___ctor_32604236(
            v318,
            k,
            v312,
            v314,
            setupInfoa,
            questRestrictionInfo,
            0LL,
            v251,
            0LL,
            0,
            0LL);
          v239 = k + 1;
          if ( !v313 )
            goto LABEL_75;
          v94 = v351;
        }
        else
        {
          v318 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v88, v289, v290);
          PartyOrganizationListViewItem___ctor_32613444(v318, k, 0, setupInfoa, questRestrictionInfo, 1, v251, 0LL);
          v94 = v351;
          v239 = k + 1;
          if ( !v313 )
            goto LABEL_75;
        }
        if ( v318 )
        {
          Instance = sub_1BCA91C(v318, *(_QWORD *)(*(_QWORD *)v313 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        if ( k >= v313[6] )
          goto LABEL_411;
        *(_QWORD *)((char *)v313 + v241) = v318;
        Instance = sub_1BCA784((char *)v313 + v241, v318);
        ++v339;
        goto LABEL_402;
      }
      if ( System_Linq_Enumerable__Any_object_(
             v288,
             (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
      {
        Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                              v288,
                              0,
                              (const MethodInfo_2F31284 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
        goto LABEL_377;
      }
      Instance = (__int64)v352;
      if ( !v352 )
        goto LABEL_75;
      v88 = (FollowerInfo_o *)((unsigned int)-v339 + k);
      if ( v352->fields._size <= (int)k - v339 )
      {
        v307 = (unsigned int *)*p_memberList;
      }
      else
      {
        Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                              v352,
                              (int)k - v339,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
LABEL_377:
        v306 = (FollowerInfo_o *)Instance;
        v307 = (unsigned int *)*p_memberList;
        if ( Instance )
        {
          v308 = *(_QWORD *)(Instance + 40);
          if ( !v308 )
            goto LABEL_75;
          if ( !*(_DWORD *)(v308 + 24) )
            goto LABEL_411;
          v309 = *(_QWORD *)(v308 + 32);
          if ( !v309 )
            goto LABEL_75;
          v310 = *(_DWORD *)(v309 + 32);
          v311 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v88, v299, v300);
          PartyOrganizationListViewItem___ctor_32576596(
            v311,
            k,
            v306,
            v310,
            setupInfoa,
            questRestrictionInfo,
            0LL,
            1,
            v338,
            v251,
            0LL);
          if ( !v307 )
            goto LABEL_75;
          v94 = v351;
          if ( v311 )
          {
            Instance = sub_1BCA91C(v311, *(_QWORD *)(*(_QWORD *)v307 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          if ( k >= v307[6] )
            goto LABEL_411;
          *(_QWORD *)((char *)v307 + v241) = v311;
          Instance = sub_1BCA784((char *)v307 + v241, v311);
LABEL_402:
          v320 = this->fields.memberList;
          v238 = setupInfoa;
          if ( !v320 )
            goto LABEL_75;
          if ( k >= v320->max_length )
            goto LABEL_411;
          Instance = *(__int64 *)((char *)&v320->obj.klass + v241);
          if ( !Instance )
            goto LABEL_75;
          v321 = this->fields.cost;
          this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                                (PartyOrganizationListViewItem_o *)Instance,
                                0LL)
                            + v321;
          goto LABEL_280;
        }
      }
      v319 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v88, v299, v300);
      PartyOrganizationListViewItem___ctor_32613444(v319, k, 0, setupInfoa, questRestrictionInfo, 0, v251, 0LL);
      if ( !v307 )
        goto LABEL_75;
      if ( v319 )
      {
        Instance = sub_1BCA91C(v319, *(_QWORD *)(*(_QWORD *)v307 + 64LL));
        if ( !Instance )
          goto LABEL_412;
      }
      if ( k >= v307[6] )
        goto LABEL_411;
      *(_QWORD *)((char *)v307 + v241) = v319;
      Instance = sub_1BCA784((char *)v307 + v241, v319);
      v94 = v351;
      goto LABEL_402;
    }
    v252 = (unsigned int *)*p_memberList;
    v253 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v88, v245, v246);
    PartyOrganizationListViewItem___ctor_32613444(v253, k, 0, v238, questRestrictionInfo, 1, v251, 0LL);
    if ( !v252 )
      goto LABEL_75;
    if ( v253 )
    {
      Instance = sub_1BCA91C(v253, *(_QWORD *)(*(_QWORD *)v252 + 64LL));
      if ( !Instance )
        goto LABEL_412;
    }
    if ( k >= v252[6] )
      goto LABEL_411;
    *(_QWORD *)((char *)v252 + v241) = v253;
    sub_1BCA784((char *)v252 + v241, v253);
    v241 += 8LL;
  }
LABEL_406:
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)v88);
  if ( (questRestrictionInfo->fields.isNpcEditablePos || !questRestrictionInfo->fields.isNpcOnlyBattle)
    && !PartyListViewItem__GetStartDeckCondition(this, v322) )
  {
    *isBaseModify = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_32482620(
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x29
  __int64 Master_object; // x0
  __int64 v37; // x1
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *UserServantList; // x0
  __int64 v40; // x1
  BalanceConfig_c *v41; // x8
  struct PartyOrganizationListViewItem_array *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Collections_Generic_List_int__o *v46; // x28
  __int64 v47; // x1
  int v48; // w8
  __int64 v49; // x29
  unsigned int v50; // w19
  __int64 v51; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  struct System_Int32_array *v55; // x0
  __int64 v56; // x2
  __int64 v57; // x3
  int32_t v58; // w28
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v60; // w24
  struct DeckServant_o *v61; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v63; // x8
  UserServantEntity_array *v64; // x9
  int32_t initPos; // w27
  UserServantEntity_o *v66; // x29
  struct PartyOrganizationListViewItem_array *v67; // x19
  __int128 v68; // q0
  int64_t v69; // x0
  __int64 v70; // x2
  __int64 v71; // x3
  System_Int64_array *v72; // x21
  struct DeckServant_o *v73; // x8
  struct DeckServantData_array *v74; // x8
  DeckServantData_o *v75; // x8
  System_Int32_array *equipSvtIdList; // x24
  PartyOrganizationListViewItem_o *v77; // x20
  unsigned int max_length; // w8
  Il2CppClass **v79; // x0
  struct PartyOrganizationListViewItem_array *v80; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v83; // x0
  UserEventDeckEntity_o *v84; // [xsp+18h] [xbp-D8h]
  int v85; // [xsp+24h] [xbp-CCh]
  UserServantEntity_array *v86; // [xsp+28h] [xbp-C8h]
  int32_t v89; // [xsp+44h] [xbp-ACh]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+48h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+70h] [xbp-80h]

  if ( (byte_4B11E4E & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind, *(_QWORD *)&index);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v27, v28);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v29, v30);
    sub_1BCA7E0(&PartyOrganizationListViewItem___TypeInfo, v31, v32);
    sub_1BCA7E0(&PartyOrganizationListViewItem_TypeInfo, v33, v34);
    byte_4B11E4E = 1;
  }
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1BCA784(&this->fields.setupInfo, setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  Master_object = sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
  if ( !deck )
    goto LABEL_69;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_69;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  this->fields._IsWaveBattleRestart_k__BackingField = restartWave > 0;
  v89 = index + 1;
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, index + 1, restartWave > 0, 0LL);
  v41 = BalanceConfig_TypeInfo;
  v86 = UserServantList;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v40);
    v41 = BalanceConfig_TypeInfo;
  }
  v42 = (struct PartyOrganizationListViewItem_array *)sub_1BCA888(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v41->static_fields->DeckMemberMax);
  this->fields.memberList = v42;
  sub_1BCA784(&this->fields.memberList, v42);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  v46 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v43,
                                                    v44,
                                                    v45);
  System_Collections_Generic_List_int____ctor(
    v46,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v47);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
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
  v48 = *(_DWORD *)(Master_object + 24);
  v49 = Master_object;
  if ( v48 >= 1 )
  {
    v50 = 0;
    while ( 1 )
    {
      if ( v50 >= v48 )
LABEL_70:
        sub_1BCAA44(Master_object, v37);
      v51 = *(_QWORD *)(v49 + 8LL * (int)v50 + 32);
      if ( !v51 )
        break;
      if ( *(_DWORD *)(v51 + 56) == v89 )
      {
        if ( !v46 )
          break;
        Master_object = System_Collections_Generic_List_int___Contains(
                          v46,
                          *(_DWORD *)(v51 + 32),
                          (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Master_object & 1) == 0 )
        {
          v37 = *(unsigned int *)(v51 + 32);
          items = v46->fields._items;
          v53 = Method_System_Collections_Generic_List_int__Add__;
          ++v46->fields._version;
          if ( !items )
            break;
          size = v46->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v46,
              v37,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
          }
          else
          {
            v46->fields._size = size + 1;
            items->m_Items[size + 1] = v37;
          }
        }
      }
      v48 = *(_DWORD *)(v49 + 24);
      if ( (int)++v50 >= v48 )
        goto LABEL_24;
    }
LABEL_69:
    sub_1BCAA3C(Master_object, v37);
  }
LABEL_24:
  if ( !v46 )
    goto LABEL_69;
  v55 = System_Collections_Generic_List_int___ToArray(
          v46,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.waveBattleEnemyClassIds = v55;
  sub_1BCA784(&this->fields.waveBattleEnemyClassIds, v55);
  this->fields._IsClearedWave_k__BackingField = v89 < restartWave;
  Master_object = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v37);
    Master_object = (__int64)BalanceConfig_TypeInfo;
  }
  v58 = 0;
  v84 = deck;
  v85 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 160LL) * index;
  while ( 1 )
  {
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object, v37);
      Master_object = (__int64)BalanceConfig_TypeInfo;
    }
    static_fields = *(struct BalanceConfig_StaticFields **)(Master_object + 184);
    if ( v58 >= static_fields->DeckMemberMax )
      break;
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object, v37);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v60 = v85 + v58;
    if ( v58 < static_fields->DeckMainMemberMax )
    {
      v61 = deck->fields.deckInfo;
      if ( !v61 )
        goto LABEL_69;
      svts = v61->fields.svts;
      if ( !svts )
        goto LABEL_69;
      if ( v60 >= svts->max_length )
        goto LABEL_70;
      v63 = svts->m_Items[v60];
      v64 = v86;
      if ( !v63 )
        goto LABEL_69;
      initPos = v63->fields.initPos;
    }
    else
    {
      v64 = v86;
      initPos = v58 + 1;
    }
    if ( !v64 )
      goto LABEL_69;
    if ( v58 >= v64->max_length )
      goto LABEL_70;
    v66 = v64->m_Items[v58];
    v67 = *p_memberList;
    if ( v66 )
    {
      v68 = *(_OWORD *)&v66->fields.id.fields.fakeValue;
      *(_OWORD *)&v92.fields.currentCryptoKey = *(_OWORD *)&v66->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v92.fields.fakeValue = v68;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v37);
      v91 = v92;
      v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v91, 0LL);
      Master_object = (__int64)UserEventDeckEntity__GetEquipList_40804124(deck, v69, restartWave > 0, 0LL);
      v72 = (System_Int64_array *)Master_object;
      if ( restartWave < 1 )
      {
        equipSvtIdList = 0LL;
      }
      else
      {
        v73 = deck->fields.deckInfo;
        if ( !v73 )
          goto LABEL_69;
        v74 = v73->fields.svts;
        if ( !v74 )
          goto LABEL_69;
        if ( v60 >= v74->max_length )
          goto LABEL_70;
        v75 = v74->m_Items[v60];
        if ( !v75 )
          goto LABEL_69;
        equipSvtIdList = v75->fields.svtEquipIds;
      }
      v77 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v37, v70, v71);
      PartyOrganizationListViewItem___ctor_32604236(
        v77,
        v58,
        v66,
        v72,
        setupInfo,
        questRestrictionInfo,
        0LL,
        initPos,
        equipSvtIdList,
        v89 < restartWave,
        0LL);
      if ( !v67 )
        goto LABEL_69;
      if ( v77 )
      {
        Master_object = sub_1BCA91C(v77, v67->obj.klass->_1.element_class);
        if ( !Master_object )
        {
LABEL_71:
          v83 = sub_1BCAA60();
          sub_1BCA908(v83, 0LL);
        }
      }
      max_length = v67->max_length;
      deck = v84;
    }
    else
    {
      v77 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v37, v56, v57);
      PartyOrganizationListViewItem___ctor_32613444(v77, v58, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
      if ( !v67 )
        goto LABEL_69;
      if ( v77 )
      {
        Master_object = sub_1BCA91C(v77, v67->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_71;
      }
      max_length = v67->max_length;
    }
    if ( v58 >= max_length )
      goto LABEL_70;
    v79 = &v67->obj.klass + v58;
    v79[4] = (Il2CppClass *)v77;
    Master_object = sub_1BCA784(v79 + 4, v77);
    v80 = *p_memberList;
    if ( !*p_memberList )
      goto LABEL_69;
    if ( v58 >= v80->max_length )
      goto LABEL_70;
    Master_object = (__int64)v80->m_Items[v58];
    if ( !Master_object )
      goto LABEL_69;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)Master_object,
      this->fields.waveBattleEnemyClassIds,
      0LL);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_69;
    if ( v58 >= memberList->max_length )
      goto LABEL_70;
    Master_object = (__int64)memberList->m_Items[v58];
    if ( !Master_object )
      goto LABEL_69;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)Master_object,
                          0LL)
                      + cost;
    Master_object = (__int64)BalanceConfig_TypeInfo;
    ++v58;
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

  if ( (byte_4B11E61 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&deckMemberCount, *(_QWORD *)&mainMemberCount);
    byte_4B11E61 = 1;
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
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&deckMemberCount);
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
        j_il2cpp_runtime_class_init_0(questRestrictionInfo, *(_QWORD *)&deckMemberCount);
        type = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
      }
      if ( servantNumMin <= type )
        v20 = v13;
      else
        v20 = deckMemberCount;
      return servantNumMax >= deckMemberCount && servantNumMin <= v20;
    }
LABEL_28:
    sub_1BCAA3C(questRestrictionInfo, *(_QWORD *)&deckMemberCount);
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
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&deckMemberCount);
    v21 = BalanceConfig_TypeInfo;
  }
  return v13 >= v21->static_fields->DeckMainMemberMax;
}


void __fastcall PartyListViewItem__CheckRestriction(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t v6; // w20
  int v7; // w23
  int v8; // w24
  PartyOrganizationListViewItem_o *IsUseOldMaster; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v11; // x8
  PartyOrganizationListViewItem_o *v12; // x8
  struct UserServantEntity_o *userServantEntity; // x10
  int isFollower; // w9
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t FixedServantPositionCount; // w20
  il2cpp_array_size_t v17; // w21
  char i; // w25
  struct PartyOrganizationListViewItem_array *v19; // x8
  PartyOrganizationListViewItem_o *v20; // x8
  int v21; // w21
  int32_t FixedPositionCount; // w20
  int v23; // w27
  char v24; // w25
  int v25; // w26
  struct PartyOrganizationListViewItem_array *v26; // x8
  PartyOrganizationListViewItem_o *v27; // x9
  bool isFixedSupportPositionRestriction; // w8
  _BOOL4 isRestrictionNeedStarting; // w11
  int isRestrictionMyServantPos; // w10
  int isRestrictionServantPos; // w9
  bool v32; // zf
  struct PartyOrganizationListViewItem_array *v33; // x20
  int max_length; // w8
  unsigned int v35; // w21
  struct PartyOrganizationListViewItem_array *v36; // x21
  int v37; // w8
  unsigned int v38; // w27
  struct PartyOrganizationListViewItem_array *v39; // x20
  int v40; // w8
  unsigned int v41; // w21
  struct QuestRestrictionInfo_o *v42; // x8
  int64_t sortValue2; // x20
  __int64 sortValue1_low; // x21
  __int64 v45; // x25
  __int64 v46; // x8
  __int64 v47; // x8
  struct QuestRestrictionInfo_o *v48; // x8
  il2cpp_array_size_t k; // w20
  struct PartyOrganizationListViewItem_array *v50; // x8
  PartyOrganizationListViewItem_o *v51; // x8
  il2cpp_array_size_t j; // w21
  struct PartyOrganizationListViewItem_array *v53; // x8

  if ( (byte_4B11E55 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v4, v5);
    byte_4B11E55 = 1;
  }
  v6 = 0;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
      IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( v6 >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_105;
    if ( v6 >= memberList->max_length )
      goto LABEL_106;
    IsUseOldMaster = memberList->m_Items[v6];
    if ( !IsUseOldMaster )
      goto LABEL_105;
    PartyOrganizationListViewItem__CheckRestriction(IsUseOldMaster, this, v6, 0LL);
    v11 = this->fields.memberList;
    if ( !v11 )
      goto LABEL_105;
    if ( v6 >= v11->max_length )
      goto LABEL_106;
    v12 = v11->m_Items[v6];
    if ( !v12 )
      goto LABEL_105;
    userServantEntity = v12->fields.userServantEntity;
    isFollower = v12->fields.isFollower;
    ++v6;
    v12->fields._IsNotSupportSingle_k__BackingField = 0;
    v7 += isFollower;
    if ( userServantEntity )
      ++v8;
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
      v17 = 0;
      for ( i = 0; ; i |= v20->fields.isFixedSupportPositionRestriction )
      {
        if ( !LODWORD(IsUseOldMaster->fields.npcFollowerSvtId) )
        {
          j_il2cpp_runtime_class_init_0(IsUseOldMaster, method);
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
        }
        if ( (signed int)v17 >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
          break;
        v19 = this->fields.memberList;
        if ( !v19 )
          goto LABEL_105;
        if ( v17 >= v19->max_length )
          goto LABEL_106;
        v20 = v19->m_Items[v17];
        if ( !v20 )
          goto LABEL_105;
        ++v17;
        FixedServantPositionCount -= v20->fields.isFixedServantPositionAgreement;
      }
      if ( !(i & 1 | (FixedServantPositionCount > 0)) )
      {
        v33 = this->fields.memberList;
        if ( !v33 )
          goto LABEL_105;
        max_length = v33->max_length;
        if ( max_length >= 1 )
        {
          v35 = 0;
          while ( v35 < max_length )
          {
            IsUseOldMaster = v33->m_Items[v35];
            if ( !IsUseOldMaster )
              goto LABEL_105;
            PartyOrganizationListViewItem__ResetPositionRestriction(IsUseOldMaster, 0LL);
            max_length = v33->max_length;
            if ( (int)++v35 >= max_length )
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
    v21 = (int)IsUseOldMaster;
    FixedPositionCount = QuestRestrictionInfo__GetFixedPositionCount(this->fields.questRestrictionInfo, 0LL);
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    v23 = 0;
    v24 = 0;
    v25 = -1;
    while ( 1 )
    {
      if ( !LODWORD(IsUseOldMaster->fields.npcFollowerSvtId) )
      {
        j_il2cpp_runtime_class_init_0(IsUseOldMaster, method);
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( v23 >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
        break;
      v26 = this->fields.memberList;
      if ( !v26 )
        goto LABEL_105;
      if ( v23 >= v26->max_length )
        goto LABEL_106;
      v27 = v26->m_Items[v23];
      if ( !v27 )
        goto LABEL_105;
      isFixedSupportPositionRestriction = v27->fields.isFixedSupportPositionRestriction;
      if ( v27->fields.isFixedServantPositionAgreement )
      {
        isRestrictionNeedStarting = v27->fields.isRestrictionNeedStarting;
        isRestrictionMyServantPos = v27->fields.isRestrictionMyServantPos;
        isRestrictionServantPos = v27->fields.isRestrictionServantPos;
        v32 = isRestrictionNeedStarting && v25 == -1;
        v21 -= isRestrictionMyServantPos;
        if ( v32 )
          v25 = v23;
        FixedPositionCount -= isRestrictionServantPos;
      }
      v24 |= isFixedSupportPositionRestriction;
      ++v23;
    }
    if ( v21 > 0 )
      goto LABEL_58;
    v36 = this->fields.memberList;
    if ( !v36 )
      goto LABEL_105;
    v37 = v36->max_length;
    if ( v37 < 1 )
    {
LABEL_58:
      if ( !((v25 < 0) | v24 & 1) )
      {
        for ( j = v25 + 1; ; ++j )
        {
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
            IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
          }
          if ( (signed int)j >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
            break;
          v53 = this->fields.memberList;
          if ( !v53 )
            goto LABEL_105;
          if ( j >= v53->max_length )
            goto LABEL_106;
          IsUseOldMaster = v53->m_Items[j];
          if ( !IsUseOldMaster )
            goto LABEL_105;
          PartyOrganizationListViewItem__ResetPositionRestrictionNeedStarting(IsUseOldMaster, 0LL);
        }
      }
      if ( (FixedPositionCount > 0) | v24 & 1 )
        goto LABEL_66;
      v39 = this->fields.memberList;
      if ( !v39 )
        goto LABEL_105;
      v40 = v39->max_length;
      if ( v40 < 1 )
      {
LABEL_66:
        v42 = this->fields.questRestrictionInfo;
        if ( !v42 || v42->fields.servantNumMin != 1 )
          return;
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( IsUseOldMaster )
        {
          sortValue2 = IsUseOldMaster->fields.sortValue2;
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( IsUseOldMaster )
          {
            if ( sortValue2 )
            {
              sortValue1_low = LODWORD(IsUseOldMaster->fields.sortValue1);
              if ( (int)sortValue1_low >= 1 )
              {
                IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                v45 = 0LL;
                v8 = 0;
                while ( 1 )
                {
                  if ( !LODWORD(IsUseOldMaster->fields.npcFollowerSvtId) )
                  {
                    j_il2cpp_runtime_class_init_0(IsUseOldMaster, method);
                    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                  }
                  if ( v45 >= *(int *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
                    break;
                  if ( sortValue1_low != ++v45 )
                  {
                    v46 = *(_QWORD *)(sortValue2 + 120);
                    if ( !v46 )
                      goto LABEL_105;
                    if ( v45 - 1 >= (unsigned __int64)*(unsigned int *)(v46 + 24) )
                      goto LABEL_106;
                    v47 = *(_QWORD *)(v46 + 8 * v45 + 24);
                    if ( !v47 )
                      goto LABEL_105;
                    if ( *(_QWORD *)(v47 + 112) )
                      ++v8;
                  }
                }
              }
            }
            v48 = this->fields.questRestrictionInfo;
            if ( v48 )
            {
              if ( !v8 && v7 == 1 && v48->fields.isNotSingleSupportOnly )
              {
                IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                for ( k = 0; ; ++k )
                {
                  if ( !LODWORD(IsUseOldMaster->fields.npcFollowerSvtId) )
                  {
                    j_il2cpp_runtime_class_init_0(IsUseOldMaster, method);
                    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                  }
                  if ( (signed int)k >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
                    break;
                  v50 = this->fields.memberList;
                  if ( !v50 )
                    goto LABEL_105;
                  if ( k >= v50->max_length )
                    goto LABEL_106;
                  v51 = v50->m_Items[k];
                  if ( !v51 )
                    goto LABEL_105;
                  if ( v51->fields.isFollower )
                  {
                    v51->fields._IsNotSupportSingle_k__BackingField = 1;
                    return;
                  }
                }
              }
              return;
            }
          }
        }
LABEL_105:
        sub_1BCAA3C(IsUseOldMaster, method);
      }
      v41 = 0;
      while ( v41 < v40 )
      {
        IsUseOldMaster = v39->m_Items[v41];
        if ( !IsUseOldMaster )
          goto LABEL_105;
        PartyOrganizationListViewItem__ResetPositionRestrictionServant(IsUseOldMaster, 0LL);
        v40 = v39->max_length;
        if ( (int)++v41 >= v40 )
          goto LABEL_66;
      }
    }
    else
    {
      v38 = 0;
      while ( v38 < v37 )
      {
        IsUseOldMaster = v36->m_Items[v38];
        if ( !IsUseOldMaster )
          goto LABEL_105;
        PartyOrganizationListViewItem__ResetPositionRestrictionMyServant(IsUseOldMaster, 0LL);
        v37 = v36->max_length;
        if ( (int)++v38 >= v37 )
          goto LABEL_58;
      }
    }
LABEL_106:
    sub_1BCAA44(IsUseOldMaster, method);
  }
}


void __fastcall PartyListViewItem__ClearDeckName(PartyListViewItem_o *this, const MethodInfo *method)
{
  struct System_String_o *DefaultDeckName; // x0

  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, method);
  this->fields.deckName = DefaultDeckName;
  sub_1BCA784(&this->fields.deckName, DefaultDeckName);
}


void __fastcall PartyListViewItem__ClearEquip(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  il2cpp_array_size_t i; // w20
  BalanceConfig_c *v5; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w22

  if ( (byte_4B11E5B & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B11E5B = 1;
  }
  for ( i = 0; ; ++i )
  {
    v5 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
      v5 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v5->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_14;
    if ( i >= memberList->max_length )
      sub_1BCAA44(v5, method);
    v5 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v5 )
LABEL_14:
      sub_1BCAA3C(v5, method);
    if ( !LOBYTE(v5->_1.fields) )
    {
      cost = this->fields.cost;
      this->fields.cost = cost - PartyOrganizationListViewItem__ClearEquip((PartyOrganizationListViewItem_o *)v5, 0LL);
    }
  }
  PartyListViewItem__CheckRestriction(this, method);
}


void __fastcall PartyListViewItem__ClearFollower(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  il2cpp_array_size_t i; // w20
  BalanceConfig_c *v5; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8

  if ( (byte_4B11E5C & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B11E5C = 1;
  }
  for ( i = 0; ; ++i )
  {
    v5 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
      v5 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v5->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_12;
    if ( i >= memberList->max_length )
      sub_1BCAA44(v5, method);
    v5 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v5 )
LABEL_12:
      sub_1BCAA3C(v5, method);
    PartyOrganizationListViewItem__ClearFollower((PartyOrganizationListViewItem_o *)v5, 0LL);
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
    sub_1BCAA3C(this, *(_QWORD *)&num);
  }
  if ( v7->max_length <= num )
LABEL_9:
    sub_1BCAA44(this, *(_QWORD *)&num);
  this = (PartyListViewItem_o *)v7->m_Items[num];
  if ( !this )
    goto LABEL_8;
  PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)this, 0LL);
  PartyListViewItem__CheckRestriction(v5, v8);
}


void __fastcall PartyListViewItem__ClearMember_32486028(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  il2cpp_array_size_t i; // w20
  BalanceConfig_c *v5; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8

  if ( (byte_4B11E5A & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B11E5A = 1;
  }
  for ( i = 0; ; ++i )
  {
    v5 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
      v5 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v5->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_14;
    if ( i >= memberList->max_length )
      sub_1BCAA44(v5, method);
    v5 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v5 )
LABEL_14:
      sub_1BCAA3C(v5, method);
    if ( !LOBYTE(v5->_1.fields) )
      PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)v5, 0LL);
  }
  this->fields.cost = 0;
  PartyListViewItem__CheckRestriction(this, method);
}


PartyListViewItem_o *__fastcall PartyListViewItem__Clone(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  PartyListViewItem_o *v5; // x20
  const MethodInfo *v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4B11E54 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyListViewItem_TypeInfo, method, v2);
    byte_4B11E54 = 1;
  }
  v5 = (PartyListViewItem_o *)sub_1BCAA2C(PartyListViewItem_TypeInfo, method, v2, v3);
  PartyListViewItem___ctor(v5, v6);
  if ( !v5 )
    sub_1BCAA3C(v7, v8);
  PartyListViewItem__Set(v5, this, v9);
  return v5;
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
  if ( (byte_4B11E65 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1BCA7E0(&BalanceConfig_TypeInfo, item, method);
    byte_4B11E65 = 1;
  }
  if ( !item )
LABEL_17:
    sub_1BCAA3C(this, item);
  if ( System_String__op_Inequality(v4->fields.deckName, item->fields.deckName, 0LL) )
    return 0;
  v6 = -1;
  do
  {
    this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item);
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
      sub_1BCAA44(this, item);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  __int64 v16; // x1
  unsigned __int64 i; // x24
  Il2CppObject *AssetName; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v20; // x0
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppObject *v24; // x1
  Il2CppClass **v25; // x0

  if ( (byte_4B11E71 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v13, v14);
    byte_4B11E71 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  for ( i = 0LL; ; ++i )
  {
    AssetName = (Il2CppObject *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v16);
      AssetName = (Il2CppObject *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= *((int *)AssetName[11].monitor + 39) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_21;
    if ( i >= memberList->max_length )
      sub_1BCAA44(AssetName, v16);
    v20 = memberList->m_Items[i];
    if ( v20 )
    {
      AssetName = (Il2CppObject *)PartyOrganizationListViewItem__GetAssetName(v20, 0LL);
      if ( AssetName )
      {
        if ( !v15 )
          goto LABEL_21;
        items = v15->fields._items;
        v22 = Method_System_Collections_Generic_List_string__Add__;
        ++v15->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v15->fields._size;
        v24 = AssetName;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            AssetName,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v24;
          sub_1BCA784(v25 + 4, v24);
        }
      }
    }
  }
  if ( !v15 )
LABEL_21:
    sub_1BCAA3C(AssetName, v16);
  if ( v15->fields._size < 1 )
    return 0LL;
  else
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    v15,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall PartyListViewItem__GetCommandCardList(
        PartyListViewItem_o *this,
        int32_t typeMax,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_Int32_array *v8; // x21
  unsigned __int64 i; // x23
  _QWORD *p_image; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v12; // x0
  unsigned __int64 v13; // x9
  unsigned __int64 j; // x8

  if ( (byte_4B11E70 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&typeMax, method);
    sub_1BCA7E0(&int___TypeInfo, v5, v6);
    byte_4B11E70 = 1;
  }
  v8 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)typeMax);
  for ( i = 0LL; ; ++i )
  {
    p_image = &BalanceConfig_TypeInfo->_1.image;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
      p_image = &BalanceConfig_TypeInfo->_1.image;
    }
    if ( (__int64)i >= *(int *)(p_image[23] + 160LL) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
LABEL_22:
      sub_1BCAA3C(p_image, v7);
    if ( i >= memberList->max_length )
LABEL_21:
      sub_1BCAA44(p_image, v7);
    v12 = memberList->m_Items[i];
    if ( v12 )
    {
      p_image = PartyOrganizationListViewItem__GetCommandCardList(v12, 0LL);
      if ( p_image )
      {
        if ( typeMax >= 1 )
        {
          v13 = *((unsigned int *)p_image + 6);
          for ( j = 0LL; typeMax != j; ++j )
          {
            if ( (__int64)j < (int)v13 )
            {
              if ( !v8 )
                goto LABEL_22;
              if ( j >= v8->max_length || j >= v13 )
                goto LABEL_21;
              v8->m_Items[j + 1] += *((_DWORD *)p_image + j + 8);
            }
          }
        }
      }
    }
  }
  return v8;
}


int32_t __fastcall PartyListViewItem__GetDeckCondition(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x5
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  void *DeckConditionServantNumAndPosition; // x0
  il2cpp_array_size_t v22; // w28
  int v23; // w25
  char v24; // w26
  int v25; // w29
  int v26; // w21
  int32_t v27; // w20
  int32_t DeckMainMemberMax; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v30; // x8
  PartyOrganizationListViewItem_o *v31; // x22
  _BOOL4 isFollower; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v34; // w28
  __int64 v35; // x8
  struct PartyOrganizationListViewItem_array *v36; // x8
  Il2CppClass **v37; // x8
  PartyOrganizationListViewItem_o *v38; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // kr10_16
  int32_t v40; // w23
  struct PartyOrganizationListViewItem_array *v41; // x9
  PartyOrganizationListViewItem_o *v42; // x9
  const MethodInfo *v43; // x5
  const MethodInfo *v44; // x5
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  _BOOL4 isNotSingleSupportOnly; // w8
  struct PartyOrganizationListViewItem_array *v47; // x26
  int max_length; // w8
  const MethodInfo_35A198C **v49; // x25
  int v50; // w29
  Il2CppClass **v51; // x8
  PartyOrganizationListViewItem_o *v52; // x20
  PartyOrganizationListViewItem_o *v53; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // kr20_16
  System_Collections_Generic_List_object__o *v55; // x21
  int size; // w8
  int v57; // w9
  char v58; // w24
  int32_t v59; // w23
  struct PartyOrganizationListViewItem_array *v60; // x22
  const MethodInfo_35A198C **v61; // x28
  Il2CppObject *Item; // x0
  ServantEntity_o *servantEntity; // x25
  int32_t svtLimitCount; // w26
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x24
  System_Collections_Generic_IEnumerable_TSource__o *Individuality; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x24
  __int64 i; // x23
  struct PartyOrganizationListViewItem_array *v70; // x8
  PartyOrganizationListViewItem_o *v71; // x8
  struct ServantEntity_o *v72; // x8
  __int64 v73; // x20
  __int64 v74; // x21
  int32_t v75; // w20
  unsigned __int64 j; // x24
  struct PartyOrganizationListViewItem_array *v77; // x8
  PartyOrganizationListViewItem_o *v78; // x8
  struct ServantEntity_o *v79; // x8
  __int64 v80; // x21
  __int64 v81; // x22
  System_Collections_Generic_List_T__o *v83; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16

  if ( (byte_4B11E63 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_int___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Intersect_int___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____get_Item__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    byte_4B11E63 = 1;
  }
  if ( this->fields.cost > this->fields.maxCost )
  {
    LODWORD(DeckConditionServantNumAndPosition) = 7;
    return (int)DeckConditionServantNumAndPosition;
  }
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  while ( 1 )
  {
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
      DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    }
    DeckMainMemberMax = *(_DWORD *)(*((_QWORD *)DeckConditionServantNumAndPosition + 23) + 160LL);
    if ( (int)v22 >= DeckMainMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_164;
    if ( v22 >= memberList->max_length )
LABEL_165:
      sub_1BCAA44(DeckConditionServantNumAndPosition, method);
    v30 = &memberList->obj.klass + (int)v22;
    v31 = (PartyOrganizationListViewItem_o *)v30[4];
    if ( !v31 )
      goto LABEL_164;
    if ( PartyOrganizationListViewItem__get_IsLeave((PartyOrganizationListViewItem_o *)v30[4], 0LL) )
    {
LABEL_54:
      LODWORD(DeckConditionServantNumAndPosition) = 5;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( (v31->fields.fatigureTime & 0x8000000000000000LL) == 0 )
    {
LABEL_55:
      LODWORD(DeckConditionServantNumAndPosition) = 6;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v31->fields._IsAllOutBattle_k__BackingField )
    {
LABEL_56:
      LODWORD(DeckConditionServantNumAndPosition) = 19;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v31->fields._IsDataLost_k__BackingField )
    {
LABEL_57:
      LODWORD(DeckConditionServantNumAndPosition) = 20;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v31->fields._TimesToRestart_k__BackingField > 0 )
    {
LABEL_58:
      LODWORD(DeckConditionServantNumAndPosition) = 21;
      return (int)DeckConditionServantNumAndPosition;
    }
    isFollower = v31->fields.isFollower;
    if ( v31->fields.isFollower && !v31->fields.isMyServantOrNpcRestriction )
    {
      ++v26;
      ++v25;
      v24 = 1;
    }
    else
    {
      if ( v31->fields.userServantEntity )
        goto LABEL_21;
      if ( v31->fields.isMyServantOrNpcRestriction )
      {
        SvtId = PartyOrganizationListViewItem__get_SvtId(v31, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            *(_QWORD *)&SvtId.fields.fakeValue);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(SvtId, 0LL) >= 1 )
        {
          isFollower = v31->fields.isFollower;
LABEL_21:
          ++v27;
          v23 |= isFollower;
        }
      }
    }
    ++v22;
  }
  if ( !*((_DWORD *)DeckConditionServantNumAndPosition + 56) )
  {
    j_il2cpp_runtime_class_init_0(DeckConditionServantNumAndPosition, method);
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    DeckMainMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
  }
  v34 = v27;
  while ( 1 )
  {
    if ( !*((_DWORD *)DeckConditionServantNumAndPosition + 56) )
    {
      j_il2cpp_runtime_class_init_0(DeckConditionServantNumAndPosition, method);
      DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    }
    v35 = *((_QWORD *)DeckConditionServantNumAndPosition + 23);
    if ( DeckMainMemberMax >= *(_DWORD *)(v35 + 156) )
      break;
    v36 = this->fields.memberList;
    if ( !v36 )
      goto LABEL_164;
    if ( DeckMainMemberMax >= v36->max_length )
      goto LABEL_165;
    v37 = &v36->obj.klass + DeckMainMemberMax;
    v38 = (PartyOrganizationListViewItem_o *)v37[4];
    if ( !v38 )
      goto LABEL_164;
    if ( PartyOrganizationListViewItem__get_IsLeave((PartyOrganizationListViewItem_o *)v37[4], 0LL) )
      goto LABEL_54;
    if ( (v38->fields.fatigureTime & 0x8000000000000000LL) == 0 )
      goto LABEL_55;
    if ( v38->fields._IsAllOutBattle_k__BackingField )
      goto LABEL_56;
    if ( v38->fields._IsDataLost_k__BackingField )
      goto LABEL_57;
    if ( v38->fields._TimesToRestart_k__BackingField > 0 )
      goto LABEL_58;
    if ( v38->fields.isFollower && !v38->fields.isMyServantOrNpcRestriction )
    {
      ++v25;
    }
    else
    {
      if ( v38->fields.userServantEntity )
        goto LABEL_46;
      if ( v38->fields.isMyServantOrNpcRestriction )
      {
        v39 = PartyOrganizationListViewItem__get_SvtId(v38, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            *(_QWORD *)&v39.fields.fakeValue);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v39, 0LL) >= 1 )
LABEL_46:
          ++v34;
      }
    }
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    ++DeckMainMemberMax;
  }
  DeckConditionServantNumAndPosition = 0LL;
  v40 = v25 + v34;
  switch ( this->fields.menuKind )
  {
    case 4:
      DeckConditionServantNumAndPosition = (void *)PartyListViewItem__CheckDeckConditionServantNum(
                                                     this,
                                                     v40,
                                                     v27,
                                                     v24 & 1,
                                                     1,
                                                     v3);
      if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
        goto LABEL_99;
      goto LABEL_95;
    case 5:
      DeckConditionServantNumAndPosition = (void *)PartyListViewItem__GetDeckConditionServantNumAndPosition(
                                                     this,
                                                     v40,
                                                     v27,
                                                     v24 & 1,
                                                     1,
                                                     v3);
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
                                                            v40,
                                                            v27,
                                                            v24 & 1,
                                                            v26,
                                                            v44);
            if ( (_DWORD)DeckConditionServantNumAndPosition )
              return (int)DeckConditionServantNumAndPosition;
          }
        }
      }
      else if ( !PartyListViewItem__CheckDeckConditionServantNum(this, v40, v27, v24 & 1, v26, v43) )
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
              v34,
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
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
          DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
        }
        v35 = *((_QWORD *)DeckConditionServantNumAndPosition + 23);
LABEL_93:
        if ( v27 + v26 < *(_DWORD *)(v35 + 160) )
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
      if ( v27 == 1 && (v23 & isNotSingleSupportOnly & 1) != 0 )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 22;
        return (int)DeckConditionServantNumAndPosition;
      }
      v47 = this->fields.memberList;
      if ( !v47 )
        goto LABEL_164;
      max_length = v47->max_length;
      if ( max_length < 1 )
        goto LABEL_133;
      v49 = (const MethodInfo_35A198C **)&Method_System_Collections_Generic_List_int____get_Item__;
      v50 = 0;
      break;
    default:
      if ( !v34 )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 1;
        return (int)DeckConditionServantNumAndPosition;
      }
      if ( v27 != 1 )
        goto LABEL_81;
      v41 = this->fields.memberList;
      if ( !v41 )
        goto LABEL_164;
      if ( !v41->max_length )
        goto LABEL_165;
      v42 = v41->m_Items[0];
      if ( !v42 )
        goto LABEL_164;
      if ( v42->fields.userServantEntity )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 2;
        return (int)DeckConditionServantNumAndPosition;
      }
LABEL_81:
      v26 = v24 & 1;
      goto LABEL_93;
  }
  do
  {
    if ( v50 >= (unsigned int)max_length )
      goto LABEL_165;
    v51 = &v47->obj.klass + v50;
    v52 = (PartyOrganizationListViewItem_o *)v51[4];
    if ( !v52 )
      goto LABEL_164;
    v53 = (PartyOrganizationListViewItem_o *)v51[4];
    v52->fields._IsErrorNeedIndividuality_k__BackingField = 0;
    v54 = PartyOrganizationListViewItem__get_SvtId(v53, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        *(_QWORD *)&v54.fields.fakeValue);
    DeckConditionServantNumAndPosition = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                   v54,
                                                   0LL);
    if ( !(_DWORD)DeckConditionServantNumAndPosition )
    {
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
        goto LABEL_164;
      DeckConditionServantNumAndPosition = (void *)QuestRestrictionInfo__IsSetRequired(
                                                     (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                                                     v52->fields.index + 1,
                                                     v52->fields._InitPos_k__BackingField,
                                                     0LL);
      if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) != 0 )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 18;
        return (int)DeckConditionServantNumAndPosition;
      }
    }
    if ( !v52->fields.userServantEntity )
      goto LABEL_132;
    DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
    if ( !DeckConditionServantNumAndPosition )
      goto LABEL_164;
    DeckConditionServantNumAndPosition = QuestRestrictionInfo__GetNeedIndividualityList(
                                           (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                                           v52->fields._InitPos_k__BackingField,
                                           0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_164;
    v55 = (System_Collections_Generic_List_object__o *)DeckConditionServantNumAndPosition;
    DeckConditionServantNumAndPosition = QuestRestrictionInfo__GetRangeTypeList(
                                           this->fields.questRestrictionInfo,
                                           v52->fields._InitPos_k__BackingField,
                                           0LL);
    v83 = (System_Collections_Generic_List_T__o *)DeckConditionServantNumAndPosition;
    if ( !v55 )
      goto LABEL_132;
    if ( !DeckConditionServantNumAndPosition )
      goto LABEL_132;
    size = v55->fields._size;
    if ( size < 1 )
      goto LABEL_132;
    v57 = *((_DWORD *)DeckConditionServantNumAndPosition + 6);
    if ( v57 < 1 || size != v57 )
      goto LABEL_132;
    v58 = 0;
    v59 = 0;
    do
    {
      DeckConditionServantNumAndPosition = System_Collections_Generic_List_object___get_Item(v55, v59, *v49);
      if ( DeckConditionServantNumAndPosition )
      {
        DeckConditionServantNumAndPosition = System_Collections_Generic_List_object___get_Item(v55, v59, *v49);
        if ( !DeckConditionServantNumAndPosition )
          goto LABEL_164;
        if ( *((_QWORD *)DeckConditionServantNumAndPosition + 3) )
        {
          v60 = v47;
          v61 = v49;
          Item = System_Collections_Generic_List_object___get_Item(v55, v59, *v49);
          servantEntity = v52->fields.servantEntity;
          svtLimitCount = v52->fields.svtLimitCount;
          v65 = (System_Collections_Generic_IEnumerable_TSource__o *)Item;
          DeckConditionServantNumAndPosition = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(v52, 0LL);
          if ( !servantEntity )
            goto LABEL_164;
          Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                 servantEntity,
                                                                                 svtLimitCount,
                                                                                 (int32_t)DeckConditionServantNumAndPosition,
                                                                                 0LL);
          v67 = System_Linq_Enumerable__Intersect_int_(
                  v65,
                  Individuality,
                  (const MethodInfo_2F36730 *)Method_System_Linq_Enumerable_Intersect_int___);
          v68 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       v67,
                                                                       (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( System_Collections_Generic_List_Int32Enum___get_Item(
                 v83,
                 v59,
                 (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
          {
            DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                           v68,
                                                           (const MethodInfo_2F1E314 *)Method_System_Linq_Enumerable_Any_int___);
            v49 = v61;
            v47 = v60;
            if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) != 0 )
              goto LABEL_132;
LABEL_128:
            v58 = 1;
            goto LABEL_130;
          }
          DeckConditionServantNumAndPosition = (void *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                         v83,
                                                         v59,
                                                         (const MethodInfo_3587174 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          v49 = v61;
          if ( (_DWORD)DeckConditionServantNumAndPosition == 2 )
          {
            DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                           v68,
                                                           (const MethodInfo_2F1E314 *)Method_System_Linq_Enumerable_Any_int___);
            v47 = v60;
            if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
              goto LABEL_132;
            goto LABEL_128;
          }
          v58 = 1;
          v47 = v60;
        }
      }
LABEL_130:
      ++v59;
    }
    while ( v59 < v55->fields._size );
    if ( (v58 & 1) != 0 )
    {
      v52->fields._IsErrorNeedIndividuality_k__BackingField = 1;
      LODWORD(DeckConditionServantNumAndPosition) = 23;
      return (int)DeckConditionServantNumAndPosition;
    }
LABEL_132:
    max_length = v47->max_length;
    ++v50;
  }
  while ( v50 < max_length );
LABEL_133:
  DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
  for ( i = 0LL; ; ++i )
  {
    if ( !*((_DWORD *)DeckConditionServantNumAndPosition + 56) )
    {
      j_il2cpp_runtime_class_init_0(DeckConditionServantNumAndPosition, method);
      DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    }
    if ( (int)i >= *(_DWORD *)(*((_QWORD *)DeckConditionServantNumAndPosition + 23) + 156LL) )
    {
      LODWORD(DeckConditionServantNumAndPosition) = 0;
      return (int)DeckConditionServantNumAndPosition;
    }
    v70 = this->fields.memberList;
    if ( !v70 )
      goto LABEL_164;
    if ( (unsigned int)i >= v70->max_length )
      goto LABEL_165;
    v71 = v70->m_Items[(int)i];
    if ( !v71 )
      goto LABEL_164;
    if ( v71->fields.userServantEntity )
      break;
LABEL_158:
    ;
  }
  v72 = v71->fields.servantEntity;
  if ( !v72 )
LABEL_164:
    sub_1BCAA3C(DeckConditionServantNumAndPosition, method);
  v74 = *(_QWORD *)&v72->fields.baseSvtId.fields.currentCryptoKey;
  v73 = *(_QWORD *)&v72->fields.baseSvtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v84.fields.currentCryptoKey = v74;
  *(_QWORD *)&v84.fields.fakeValue = v73;
  v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v84, 0LL);
  for ( j = 0LL; ; ++j )
  {
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
      DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    }
    if ( (__int64)j >= *(int *)(*((_QWORD *)DeckConditionServantNumAndPosition + 23) + 156LL) )
      goto LABEL_158;
    if ( i != j )
    {
      v77 = this->fields.memberList;
      if ( !v77 )
        goto LABEL_164;
      if ( j >= v77->max_length )
        goto LABEL_165;
      v78 = v77->m_Items[j];
      if ( !v78 )
        goto LABEL_164;
      if ( v78->fields.userServantEntity )
      {
        v79 = v78->fields.servantEntity;
        if ( !v79 )
          goto LABEL_164;
        v81 = *(_QWORD *)&v79->fields.baseSvtId.fields.currentCryptoKey;
        v80 = *(_QWORD *)&v79->fields.baseSvtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
        *(_QWORD *)&v85.fields.currentCryptoKey = v81;
        *(_QWORD *)&v85.fields.fakeValue = v80;
        if ( v75 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v85, 0LL) )
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B11E62 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&deckMemberCount, *(_QWORD *)&mainMemberCount);
    byte_4B11E62 = 1;
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
    sub_1BCAA3C(questRestrictionInfo, v11);
  FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(questRestrictionInfo, 0LL);
  v15 = 0;
  questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( !LODWORD(questRestrictionInfo->fields.myServantNumRestrictionEntity) )
    {
      j_il2cpp_runtime_class_init_0(questRestrictionInfo, v11);
      questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v15 >= SHIDWORD(questRestrictionInfo->fields.uniqueSvtRestrictionEntity[2].fields.name) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( v15 >= memberList->max_length )
      sub_1BCAA44(questRestrictionInfo, v11);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_long__o *v11; // x20
  __int64 EquipUserSvtId; // x0
  __int64 v13; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x8
  __int64 v15; // x23
  int max_length; // w9
  Il2CppClass **v17; // x8
  PartyOrganizationListViewItem_o *v18; // x21
  struct System_Int64_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10

  if ( (byte_4B11E68 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v9, v10);
    byte_4B11E68 = 1;
  }
  v11 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_15;
  v15 = 0LL;
  while ( 1 )
  {
    max_length = memberList->max_length;
    if ( (int)v15 >= max_length )
      break;
    if ( (unsigned int)v15 >= max_length )
      sub_1BCAA44(EquipUserSvtId, v13);
    v17 = &memberList->obj.klass + v15;
    v18 = (PartyOrganizationListViewItem_o *)v17[4];
    if ( !v18 )
      goto LABEL_15;
    EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)v17[4], 0LL);
    if ( EquipUserSvtId >= 1 )
    {
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v18, 0LL);
      if ( !v11 )
        goto LABEL_15;
      items = v11->fields._items;
      v20 = Method_System_Collections_Generic_List_long__Add__;
      ++v11->fields._version;
      if ( !items )
        goto LABEL_15;
      size = v11->fields._size;
      v13 = EquipUserSvtId;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v11,
          EquipUserSvtId,
          *(const MethodInfo_3589C90 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v11->fields._size = size + 1;
        items->m_Items[size] = EquipUserSvtId;
      }
    }
    memberList = this->fields.memberList;
    ++v15;
    if ( !memberList )
      goto LABEL_15;
  }
  if ( !v11 )
LABEL_15:
    sub_1BCAA3C(EquipUserSvtId, v13);
  return System_Collections_Generic_List_long___ToArray(
           v11,
           (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
}


bool __fastcall PartyListViewItem__GetEventUpVal(
        PartyListViewItem_o *this,
        int32_t *eventId,
        EventUpValInfo_array **eventUpValList,
        const MethodInfo *method)
{
  PartyListViewItem_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  struct EventUpValSetupInfo_o *setupInfo; // x8
  __int64 v10; // x9
  BalanceConfig_c *v11; // x0
  EventUpValInfo_array *v12; // x0
  unsigned __int64 i; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  EventUpValInfo_array *v15; // x8

  v6 = this;
  if ( (byte_4B11E6F & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, eventId, eventUpValList);
    this = (PartyListViewItem_o *)sub_1BCA7E0(&EventUpValInfo___TypeInfo, v7, v8);
    byte_4B11E6F = 1;
  }
  setupInfo = v6->fields.setupInfo;
  if ( setupInfo )
  {
    setupInfo = (struct EventUpValSetupInfo_o *)setupInfo->fields.eventIdList;
    if ( !setupInfo )
LABEL_23:
      sub_1BCAA3C(this, eventId);
    v10 = *(_QWORD *)&setupInfo->fields.questPhase;
    if ( v10 )
    {
      if ( !(_DWORD)v10 )
LABEL_24:
        sub_1BCAA44(this, eventId);
      LODWORD(setupInfo) = setupInfo->fields.eventIdList;
    }
    else
    {
      LODWORD(setupInfo) = 0;
    }
  }
  *eventId = (int)setupInfo;
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, eventId);
    v11 = BalanceConfig_TypeInfo;
  }
  v12 = (EventUpValInfo_array *)sub_1BCA888(EventUpValInfo___TypeInfo, (unsigned int)v11->static_fields->DeckMemberMax);
  *eventUpValList = v12;
  sub_1BCA784(eventUpValList, v12);
  for ( i = 0LL; ; ++i )
  {
    this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, eventId);
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
      v15 = *eventUpValList;
      if ( !*eventUpValList )
        goto LABEL_23;
      if ( i >= v15->max_length )
        goto LABEL_24;
      PartyOrganizationListViewItem__GetEventUpVal((PartyOrganizationListViewItem_o *)this, &v15->m_Items[i], 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  int current; // w22
  DeckServantData_o *v27; // x8
  QuestRestrictionInfo_o *v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  __int64 v31; // x3
  struct QuestRestrictionInfo_o *v32; // x8
  int servantNumMax; // w9
  __int64 v34; // x21
  __int64 v35; // x2
  __int64 v36; // x3
  System_Func_object__bool__o *v37; // x23
  struct QuestRestrictionInfo_o *v38; // x8
  System_Collections_Generic_List_Enumerator_int__o v40; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v41; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B11E51 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_FollowerInfo___, deck, fixNpcFollowerInfoList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11, v12);
    sub_1BCA7E0(&System_Func_FollowerInfo__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_PartyListViewItem___c__DisplayClass32_0__GetFollowerIndex_b__0__, v17, v18);
    sub_1BCA7E0(&PartyListViewItem___c__DisplayClass32_0_TypeInfo, v19, v20);
    byte_4B11E51 = 1;
  }
  memset(&v41, 0, sizeof(v41));
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v40,
      (System_Collections_Generic_List_int__o *)questRestrictionInfo,
      (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v41 = v40;
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v41,
              (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
      if ( !v22 )
        break;
      deckInfo = deck->fields.deckInfo;
      if ( !deckInfo )
        sub_1BCAA3C(v22, v23);
      svts = deckInfo->fields.svts;
      if ( !svts )
        sub_1BCAA3C(v22, v23);
      current = v41.fields._current;
      if ( v41.fields._current - 1 >= svts->max_length )
        sub_1BCAA44(v22, v23);
      v27 = svts->m_Items[v41.fields._current - 1];
      if ( !v27 )
        sub_1BCAA3C(v22, v23);
      v28 = this->fields.questRestrictionInfo;
      if ( !v28 )
        sub_1BCAA3C(0LL, v23);
      if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(v28, v27->fields.initPos, 0LL) )
        goto LABEL_38;
    }
    current = 0;
LABEL_38:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v41,
      (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  v32 = this->fields.questRestrictionInfo;
  if ( !v32 )
    return current;
  servantNumMax = v32->fields.servantNumMax;
  if ( servantNumMax >= 1 && servantNumMax < current )
  {
LABEL_31:
    v38 = this->fields.questRestrictionInfo;
    if ( v38 )
    {
      if ( fixNpcFollowerInfoList )
        return PartyListViewItem__GetSupportInitIndex(this, fixNpcFollowerInfoList, v30);
      else
        return v38->fields.supportInitIndex;
    }
    return 0;
  }
  if ( fixNpcFollowerInfoList && !v32->fields.isNpcEditablePos )
  {
    v34 = sub_1BCAA2C(PartyListViewItem___c__DisplayClass32_0_TypeInfo, v29, v30, v31);
    System_Object___ctor((Il2CppObject *)v34, 0LL);
    if ( v34 )
    {
      *(_DWORD *)(v34 + 16) = current;
      v37 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_FollowerInfo__bool__TypeInfo, deck, v35, v36);
      System_Func_object__bool____ctor(
        v37,
        (Il2CppObject *)v34,
        Method_PartyListViewItem___c__DisplayClass32_0__GetFollowerIndex_b__0__,
        0LL);
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)fixNpcFollowerInfoList,
              (System_Func_T__bool__o *)v37,
              (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_FollowerInfo___) )
        return current;
      goto LABEL_31;
    }
LABEL_39:
    sub_1BCAA3C(questRestrictionInfo, deck);
  }
  return current;
}


int32_t __fastcall PartyListViewItem__GetFriendPointUpVal(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  unsigned __int64 v4; // x21
  int32_t v5; // w20
  BalanceConfig_c *v6; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v8; // x0
  int32_t FriendPointUpVal; // w0

  if ( (byte_4B11E6E & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B11E6E = 1;
  }
  v4 = 0LL;
  v5 = 0;
  while ( 1 )
  {
    v6 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
      v6 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v4 >= v6->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      sub_1BCAA3C(v6, method);
    if ( v4 >= memberList->max_length )
      sub_1BCAA44(v6, method);
    v8 = memberList->m_Items[v4];
    if ( v8 )
    {
      FriendPointUpVal = PartyOrganizationListViewItem__GetFriendPointUpVal(v8, 0LL);
      if ( FriendPointUpVal > v5 )
        v5 = FriendPointUpVal;
    }
    ++v4;
  }
  return v5;
}


System_Boolean_array *__fastcall PartyListViewItem__GetIsFollowerList(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BalanceConfig_c *v6; // x0
  __int64 v7; // x1
  System_Boolean_array *v8; // x20
  BalanceConfig_c *v9; // x0
  unsigned __int64 i; // x22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v12; // x8

  if ( (byte_4B11E6D & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&bool___TypeInfo, v4, v5);
    byte_4B11E6D = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v6 = BalanceConfig_TypeInfo;
  }
  v8 = (System_Boolean_array *)sub_1BCA888(bool___TypeInfo, (unsigned int)v6->static_fields->DeckMemberMax);
  v9 = BalanceConfig_TypeInfo;
  for ( i = 0LL; ; ++i )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9, v7);
      v9 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= v9->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( i >= memberList->max_length )
      goto LABEL_18;
    v12 = memberList->m_Items[i];
    if ( v12 )
    {
      if ( !v8 )
LABEL_17:
        sub_1BCAA3C(v9, v7);
      if ( i >= v8->max_length )
LABEL_18:
        sub_1BCAA44(v9, v7);
      v8->m_Items[i + 4] = v12->fields.isFollower;
    }
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
PartyOrganizationListViewItem_o *__fastcall PartyListViewItem__GetMember(
        PartyListViewItem_o *this,
        int32_t num,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_array *memberList; // x8

  memberList = this->fields.memberList;
  if ( !memberList )
    sub_1BCAA3C(this, *(_QWORD *)&num);
  if ( memberList->max_length <= num )
    sub_1BCAA44(this, num);
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
    sub_1BCAA3C(this, npcSvtIds);
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
        sub_1BCAA44(myServantNumMax, npcSvtIds);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t menuKind; // w8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int dialogMessageInfoDictionary; // w23
  PartyOrganizationListViewItem_o *v9; // x20
  il2cpp_array_size_t v10; // w24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int TotalCostRestriction; // w0
  QuestRestrictionInfo_o *v14; // x0
  int32_t FixedServantPositionCount; // w20
  il2cpp_array_size_t v16; // w25
  char v17; // w24
  char v18; // w22
  char v19; // w23
  struct PartyOrganizationListViewItem_array *v20; // x8
  Il2CppClass **v21; // x8
  Il2CppClass *v22; // x21
  bool v23; // w10
  int v24; // w8
  char v25; // w9
  char v26; // w10

  if ( (byte_4B11E64 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    byte_4B11E64 = 1;
  }
  menuKind = this->fields.menuKind;
  if ( menuKind == 1 )
    goto LABEL_4;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( menuKind == 3 )
  {
    if ( !questRestrictionInfo )
LABEL_47:
      sub_1BCAA3C(questRestrictionInfo, method);
    questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(
                                                       questRestrictionInfo,
                                                       0LL);
    if ( questRestrictionInfo )
    {
      dialogMessageInfoDictionary = (int)questRestrictionInfo->fields.dialogMessageInfoDictionary;
      v9 = (PartyOrganizationListViewItem_o *)questRestrictionInfo;
      if ( dialogMessageInfoDictionary < 1 )
      {
LABEL_4:
        LODWORD(questRestrictionInfo) = 0;
        return (int)questRestrictionInfo;
      }
      v10 = 0;
      while ( 1 )
      {
        memberList = this->fields.memberList;
        if ( !memberList )
          goto LABEL_47;
        if ( v10 >= memberList->max_length )
          goto LABEL_48;
        questRestrictionInfo = (QuestRestrictionInfo_o *)memberList->m_Items[v10];
        if ( !questRestrictionInfo )
          goto LABEL_47;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)questRestrictionInfo, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            *(_QWORD *)&SvtId.fields.fakeValue);
        questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                           SvtId,
                                                           0LL);
        if ( v10 >= v9->fields.sortIndex )
          goto LABEL_48;
        if ( (_DWORD)questRestrictionInfo != *((_DWORD *)&v9->fields.sortValue0 + (int)v10) )
          break;
        if ( dialogMessageInfoDictionary == ++v10 )
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
      v14 = this->fields.questRestrictionInfo;
      if ( !v14 )
        goto LABEL_4;
      FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(v14, 0LL);
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      while ( 1 )
      {
        questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
          questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( (signed int)v16 >= SHIDWORD(questRestrictionInfo->fields.uniqueSvtRestrictionEntity[2].fields.name) )
          break;
        v20 = this->fields.memberList;
        if ( !v20 )
          goto LABEL_47;
        if ( v16 >= v20->max_length )
LABEL_48:
          sub_1BCAA44(questRestrictionInfo, method);
        v21 = &v20->obj.klass + (int)v16;
        v22 = v21[4];
        if ( !v22 )
          goto LABEL_47;
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction((PartyOrganizationListViewItem_o *)v21[4], 0LL) )
        {
          LODWORD(questRestrictionInfo) = 18;
          return (int)questRestrictionInfo;
        }
        ++v16;
        v19 |= BYTE2(v22->_2.unity_user_data) != 0;
        v18 |= BYTE3(v22->_2.unity_user_data) != 0;
        FixedServantPositionCount -= BYTE6(v22->_2.unity_user_data) & 1;
        v17 |= BYTE4(v22->_2.unity_user_data) != 0;
      }
      if ( (v17 & 1) != 0 )
      {
        LODWORD(questRestrictionInfo) = 9;
        return (int)questRestrictionInfo;
      }
      v23 = FixedServantPositionCount > 0;
      v24 = FixedServantPositionCount <= 0 ? 12 : 10;
      v25 = v23 | v19;
      v26 = v18 | v23 | v19;
      LODWORD(questRestrictionInfo) = (v25 & 1) != 0 ? v24 : 13;
      if ( (v26 & 1) == 0 )
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
  __int64 v3; // x3
  PartyListViewItem_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t supportInitIndex; // w20
  int32_t v19; // w23
  BalanceConfig_c *v20; // x0
  __int64 v21; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  System_Func_object__bool__o *v24; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  int myServantNumMax; // [xsp+Ch] [xbp-64h]

  v5 = this;
  if ( (byte_4B11E52 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, fixNpcFollowerInfoList, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_FollowerInfo___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_FollowerInfo___, v8, v9);
    sub_1BCA7E0(&System_Func_FollowerInfo__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_PartyListViewItem___c__DisplayClass33_0__GetSupportInitIndex_b__0__, v12, v13);
    this = (PartyListViewItem_o *)sub_1BCA7E0(&PartyListViewItem___c__DisplayClass33_0_TypeInfo, v14, v15);
    byte_4B11E52 = 1;
  }
  questRestrictionInfo = v5->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_15:
    sub_1BCAA3C(this, fixNpcFollowerInfoList);
  supportInitIndex = questRestrictionInfo->fields.supportInitIndex;
  if ( supportInitIndex <= 0 )
  {
    myServantNumMax = questRestrictionInfo->fields.myServantNumMax;
    v19 = 0;
    while ( 1 )
    {
      v20 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, fixNpcFollowerInfoList);
        v20 = BalanceConfig_TypeInfo;
      }
      if ( v19 >= v20->static_fields->DeckMemberMax )
        break;
      v21 = sub_1BCAA2C(PartyListViewItem___c__DisplayClass33_0_TypeInfo, fixNpcFollowerInfoList, method, v3);
      System_Object___ctor((Il2CppObject *)v21, 0LL);
      if ( !v21 )
        goto LABEL_15;
      *(_DWORD *)(v21 + 16) = ++v19;
      v24 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                             System_Func_FollowerInfo__bool__TypeInfo,
                                             fixNpcFollowerInfoList,
                                             v22,
                                             v23);
      System_Func_object__bool____ctor(
        v24,
        (Il2CppObject *)v21,
        Method_PartyListViewItem___c__DisplayClass33_0__GetSupportInitIndex_b__0__,
        0LL);
      v25 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)fixNpcFollowerInfoList,
              (System_Func_TSource__bool__o *)v24,
              (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      if ( !System_Linq_Enumerable__Any_object_(
              v25,
              (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
      {
        if ( myServantNumMax < 1 )
          return *(_DWORD *)(v21 + 16);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BalanceConfig_c *v6; // x0
  __int64 v7; // x1
  ServantEntity_array *v8; // x20
  unsigned __int64 v9; // x24
  ServantEntity_o **i; // x21
  BalanceConfig_c *v11; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v13; // x8
  ServantEntity_o *servantEntity; // x22
  __int64 v16; // x0

  if ( (byte_4B11E6B & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&ServantEntity___TypeInfo, v4, v5);
    byte_4B11E6B = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v6 = BalanceConfig_TypeInfo;
  }
  v8 = (ServantEntity_array *)sub_1BCA888(ServantEntity___TypeInfo, (unsigned int)v6->static_fields->DeckMemberMax);
  v9 = 0LL;
  for ( i = v8->m_Items; ; ++i )
  {
    v11 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
      v11 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v9 >= v11->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_19;
    if ( v9 >= memberList->max_length )
      goto LABEL_20;
    v13 = memberList->m_Items[v9];
    if ( v13 )
    {
      if ( !v8 )
LABEL_19:
        sub_1BCAA3C(v11, v7);
      servantEntity = v13->fields.servantEntity;
      if ( servantEntity )
      {
        v11 = (BalanceConfig_c *)sub_1BCA91C(servantEntity, v8->obj.klass->_1.element_class);
        if ( !v11 )
        {
          v16 = sub_1BCAA60();
          sub_1BCA908(v16, 0LL);
        }
      }
      if ( v9 >= v8->max_length )
LABEL_20:
        sub_1BCAA44(v11, v7);
      *i = servantEntity;
      sub_1BCA784(i, servantEntity);
    }
    ++v9;
  }
  return v8;
}


System_String_array *__fastcall PartyListViewItem__GetSvtNameList(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BalanceConfig_c *v6; // x0
  __int64 v7; // x1
  System_String_array *v8; // x20
  unsigned __int64 v9; // x23
  System_String_o **i; // x21
  System_String_o *SvtNameText; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v13; // x0

  if ( (byte_4B11E6C & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&string___TypeInfo, v4, v5);
    byte_4B11E6C = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v6 = BalanceConfig_TypeInfo;
  }
  v8 = (System_String_array *)sub_1BCA888(string___TypeInfo, (unsigned int)v6->static_fields->DeckMemberMax);
  v9 = 0LL;
  for ( i = v8->m_Items; ; ++i )
  {
    SvtNameText = (System_String_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
      SvtNameText = (System_String_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v9 >= *(int *)(*(_QWORD *)&SvtNameText[7].fields + 156LL) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( v9 >= memberList->max_length )
      goto LABEL_18;
    v13 = memberList->m_Items[v9];
    if ( v13 )
    {
      SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(v13, 0LL);
      if ( !v8 )
LABEL_17:
        sub_1BCAA3C(SvtNameText, v7);
      if ( v9 >= v8->max_length )
LABEL_18:
        sub_1BCAA44(SvtNameText, v7);
      *i = SvtNameText;
      sub_1BCA784(i, SvtNameText);
    }
    ++v9;
  }
  return v8;
}


UserDeckEntity_o *__fastcall PartyListViewItem__GetUserDeck(
        PartyListViewItem_o *this,
        PartyListViewItem_o *baseItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UserDeckEntity_o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  struct System_String_o *deckName; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v19; // x23
  int32_t max_length; // w22
  int64_t userEquipId; // x20
  DeckServant_o *v22; // x21
  struct DeckServant_o **p_deckInfo; // x20
  __int64 v24; // x2
  __int64 v25; // x3
  struct PartyOrganizationListViewItem_array *v26; // x24
  __int64 v27; // x25
  __int64 v28; // x29
  int v29; // w28
  PartyOrganizationListViewItem_o *v30; // x22
  DeckServantData_o *v31; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v33; // q0
  System_Int64_array *EquipList; // x0
  struct DeckServantData_array *svts; // x22
  __int64 v36; // x0
  Il2CppClass **v37; // x0
  __int64 v40; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+40h] [xbp-80h]

  if ( (byte_4B11E66 & 1) == 0 )
  {
    sub_1BCA7E0(&DeckServantData_TypeInfo, baseItem, method);
    sub_1BCA7E0(&DeckServant_TypeInfo, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9);
    sub_1BCA7E0(&UserDeckEntity_TypeInfo, v10, v11);
    byte_4B11E66 = 1;
  }
  v12 = (UserDeckEntity_o *)sub_1BCAA2C(UserDeckEntity_TypeInfo, baseItem, method, v3);
  UserDeckEntity___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_29;
  v12->fields.id = this->fields.id;
  v12->fields.deckNo = this->fields.index + 1;
  deckName = this->fields.deckName;
  v12->fields.name = deckName;
  v13 = sub_1BCA784(&v12->fields.name, deckName);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_29;
  v19 = baseItem ? baseItem : this;
  max_length = memberList->max_length;
  userEquipId = v19->fields.userEquipId;
  v22 = (DeckServant_o *)sub_1BCAA2C(DeckServant_TypeInfo, v14, v16, v17);
  DeckServant___ctor_39589472(v22, max_length, userEquipId, 0LL);
  v12->fields.deckInfo = v22;
  p_deckInfo = &v12->fields.deckInfo;
  v13 = sub_1BCA784(&v12->fields.deckInfo, v22);
  v26 = v19->fields.memberList;
  if ( !v26 )
    goto LABEL_29;
  v27 = *(_QWORD *)&v26->max_length;
  if ( (int)v27 >= 1 )
  {
    v28 = 0LL;
    v29 = 1;
    while ( 1 )
    {
      v30 = v26->m_Items[v28];
      v31 = (DeckServantData_o *)sub_1BCAA2C(DeckServantData_TypeInfo, v14, v24, v25);
      DeckServantData___ctor(v31, 0LL);
      if ( !v31 )
        break;
      v31->fields.id = v29;
      if ( !v30 )
        break;
      userServantEntity = v30->fields.userServantEntity;
      if ( userServantEntity )
      {
        v33 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v43.fields.fakeValue = v33;
      }
      else
      {
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v42, 0LL, 0LL);
        v43 = v42;
      }
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
      v41 = v43;
      v31->fields.userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v41, 0LL);
      v31->fields.isFollowerSvt = v30->fields.isFollower;
      EquipList = PartyOrganizationListViewItem__GetEquipList(v30, 0LL);
      v31->fields.userSvtEquipIds = EquipList;
      v13 = sub_1BCA784(&v31->fields.userSvtEquipIds, EquipList);
      v31->fields.initPos = v30->fields._InitPos_k__BackingField;
      if ( !*p_deckInfo )
        break;
      svts = (*p_deckInfo)->fields.svts;
      if ( !svts )
        break;
      v36 = sub_1BCA91C(v31, svts->obj.klass->_1.element_class);
      if ( !v36 )
      {
        v40 = sub_1BCAA60();
        sub_1BCA908(v40, 0LL);
      }
      if ( v29 - 1 < svts->max_length )
      {
        v37 = &svts->obj.klass + v28;
        v37[4] = (Il2CppClass *)v31;
        v36 = sub_1BCA784(v37 + 4, v31);
        if ( (_DWORD)v27 == v29 )
          return v12;
        v28 = v29;
        if ( v29++ < v26->max_length )
          continue;
      }
      sub_1BCAA44(v36, v14);
    }
LABEL_29:
    sub_1BCAA3C(v13, v14);
  }
  return v12;
}


UserEventDeckEntity_o *__fastcall PartyListViewItem__GetUserEventDeck(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UserEventDeckEntity_o *v13; // x20
  __int64 v14; // x1
  __int64 UserId; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  struct PartyOrganizationListViewItem_array *memberList; // x22
  int64_t userEquipId; // x21
  DeckServant_o *v21; // x0
  int32_t max_length; // w1
  struct DeckServant_o *v23; // x22
  struct DeckServant_o **p_deckInfo; // x21
  __int64 v25; // x2
  __int64 v26; // x3
  struct PartyOrganizationListViewItem_array *v27; // x8
  unsigned __int64 v28; // x28
  unsigned __int64 v29; // x9
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  PartyOrganizationListViewItem_o *v31; // x22
  struct QuestRestrictionInfo_o *v32; // x8
  _BOOL4 isNpcEditablePos; // w23
  _BOOL4 IsEditablePos; // w0
  DeckServantData_o *v35; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v37; // q0
  System_Int64_array *EquipList; // x0
  int32_t InitPos_k__BackingField; // w8
  int v40; // w8
  unsigned int *svts; // x22
  unsigned int *v42; // x0
  __int64 v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+40h] [xbp-80h]

  if ( (byte_4B11E67 & 1) == 0 )
  {
    sub_1BCA7E0(&DeckServantData_TypeInfo, method, v2);
    sub_1BCA7E0(&DeckServant_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10);
    sub_1BCA7E0(&UserEventDeckEntity_TypeInfo, v11, v12);
    byte_4B11E67 = 1;
  }
  v13 = (UserEventDeckEntity_o *)sub_1BCAA2C(UserEventDeckEntity_TypeInfo, method, v2, v3);
  UserEventDeckEntity___ctor(v13, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v13 )
    goto LABEL_51;
  v13->fields.userId = UserId;
  v13->fields.eventId = this->fields.id;
  v13->fields.deckNo = this->fields.index + 1;
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_51;
  userEquipId = this->fields.userEquipId;
  v21 = (DeckServant_o *)sub_1BCAA2C(DeckServant_TypeInfo, v16, v17, v18);
  max_length = memberList->max_length;
  v23 = v21;
  DeckServant___ctor_39589472(v21, max_length, userEquipId, 0LL);
  v13->fields.deckInfo = v23;
  p_deckInfo = &v13->fields.deckInfo;
  UserId = sub_1BCA784(&v13->fields.deckInfo, v23);
  v27 = this->fields.memberList;
  if ( !v27 )
LABEL_51:
    sub_1BCAA3C(UserId, v16);
  v28 = 0LL;
  while ( 1 )
  {
    v29 = v27->max_length;
    if ( (__int64)v28 >= (int)v29 )
      return v13;
    if ( v28 >= v29 )
      goto LABEL_52;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v31 = v27->m_Items[v28];
    if ( !questRestrictionInfo )
    {
      isNpcEditablePos = 0;
      goto LABEL_24;
    }
    UserId = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
    v32 = this->fields.questRestrictionInfo;
    if ( (UserId & 1) != 0 )
    {
      if ( !v32 )
        goto LABEL_51;
      isNpcEditablePos = v32->fields.isNpcEditablePos;
    }
    else
    {
      if ( !v31 || !v32 )
        goto LABEL_51;
      IsEditablePos = QuestRestrictionInfo__IsEditablePos(
                        this->fields.questRestrictionInfo,
                        v31->fields._InitPos_k__BackingField,
                        0LL);
      v32 = this->fields.questRestrictionInfo;
      isNpcEditablePos = IsEditablePos;
      if ( !v32 )
        goto LABEL_24;
    }
    UserId = QuestRestrictionInfo__IsNpcMulitipleOrOnly(v32, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( !v31 )
        goto LABEL_51;
      if ( v31->fields.isFixNpc
        && v31->fields.isFollower
        && !isNpcEditablePos
        && !v31->fields.isMyServantOrNpcRestriction )
      {
        ++v28;
        goto LABEL_47;
      }
    }
LABEL_24:
    v35 = (DeckServantData_o *)sub_1BCAA2C(DeckServantData_TypeInfo, v16, v25, v26);
    DeckServantData___ctor(v35, 0LL);
    if ( !v35 )
      goto LABEL_51;
    v35->fields.id = v28 + 1;
    if ( !v31 )
      goto LABEL_51;
    userServantEntity = v31->fields.userServantEntity;
    if ( userServantEntity )
    {
      v37 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v47.fields.fakeValue = v37;
    }
    else
    {
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v46, 0LL, 0LL);
      v47 = v46;
    }
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    v45 = v47;
    v35->fields.userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v45, 0LL);
    v35->fields.isFollowerSvt = v31->fields.isFollower;
    EquipList = PartyOrganizationListViewItem__GetEquipList(v31, 0LL);
    v35->fields.userSvtEquipIds = EquipList;
    UserId = sub_1BCA784(&v35->fields.userSvtEquipIds, EquipList);
    InitPos_k__BackingField = v31->fields._InitPos_k__BackingField;
    v35->fields.npcFollowerSvtId = 0LL;
    v35->fields.initPos = InitPos_k__BackingField;
    if ( v35->fields.userSvtId )
    {
      v40 = 0;
LABEL_39:
      if ( (isNpcEditablePos & v40 & 1) != 0 )
      {
        v35->fields.npcFollowerSvtId = v31->fields.npcFollowerSvtId;
        if ( v31->fields.isFixNpc )
          v35->fields.isFollowerSvt = 0;
      }
      goto LABEL_42;
    }
    if ( !v31->fields.isMyServantOrNpcRestriction || !v31->fields.isFollower )
    {
      v40 = !v31->fields.isMyServantOrNpcRestriction;
      goto LABEL_39;
    }
    v35->fields.npcFollowerSvtId = v31->fields.npcFollowerSvtId;
LABEL_42:
    if ( !*p_deckInfo )
      goto LABEL_51;
    svts = (unsigned int *)(*p_deckInfo)->fields.svts;
    if ( !svts )
      goto LABEL_51;
    UserId = sub_1BCA91C(v35, *(_QWORD *)(*(_QWORD *)svts + 64LL));
    if ( !UserId )
    {
      v44 = sub_1BCAA60();
      sub_1BCA908(v44, 0LL);
    }
    if ( v28 >= svts[6] )
LABEL_52:
      sub_1BCAA44(UserId, v16);
    v42 = &svts[2 * v28];
    *((_QWORD *)v42 + 4) = v35;
    UserId = sub_1BCA784(v42 + 8, v35);
    ++v28;
LABEL_47:
    v27 = this->fields.memberList;
    if ( !v27 )
      goto LABEL_51;
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

  if ( (byte_4B11E50 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, userServantList, npcSvtIds);
    byte_4B11E50 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  for ( i = 0LL; ; ++i )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6, userServantList);
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
        sub_1BCAA3C(v6, userServantList);
      if ( i >= npcSvtIds->max_length )
LABEL_17:
        sub_1BCAA44(v6, userServantList);
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
      sub_1BCAA3C(this, userSvtId);
    v6 = 0LL;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
        sub_1BCAA44(this, userSvtId);
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
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  signed int v5; // w9
  signed int v6; // w21
  int32_t DeckMemberMax; // w8
  struct PartyOrganizationListViewItem_array *memberList; // x9
  PartyOrganizationListViewItem_o *v9; // x9
  struct UserServantEntity_o *userServantEntity; // x10

  if ( (byte_4B11E5F & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B11E5F = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  v5 = 0;
  do
  {
    v6 = v5;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      v4 = BalanceConfig_TypeInfo;
    }
    DeckMemberMax = v4->static_fields->DeckMemberMax;
    if ( v6 >= DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_12;
    if ( v6 >= memberList->max_length )
      sub_1BCAA44(v4, method);
    v9 = memberList->m_Items[v6];
    if ( !v9 )
LABEL_12:
      sub_1BCAA3C(v4, method);
    userServantEntity = v9->fields.userServantEntity;
    v5 = v6 + 1;
  }
  while ( !userServantEntity );
  return v6 >= DeckMemberMax;
}


bool __fastcall PartyListViewItem__IsDeckInit(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  il2cpp_array_size_t i; // w21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v7; // x8
  System_String_o *deckName; // x20
  System_String_o *DefaultDeckName; // x1

  if ( (byte_4B11E5E & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B11E5E = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v4->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_15;
    if ( i >= memberList->max_length )
      sub_1BCAA44(v4, method);
    v7 = memberList->m_Items[i];
    if ( !v7 )
LABEL_15:
      sub_1BCAA3C(v4, method);
    if ( v7->fields.userServantEntity )
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
  __int64 v2; // x2
  signed int v4; // w8
  BalanceConfig_c *v5; // x0
  signed int v6; // w21
  int32_t DeckMemberMax; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int64_t EquipUserSvtId; // x0

  if ( (byte_4B11E60 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B11E60 = 1;
  }
  v4 = 0;
  do
  {
    v5 = BalanceConfig_TypeInfo;
    v6 = v4;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
      v5 = BalanceConfig_TypeInfo;
    }
    DeckMemberMax = v5->static_fields->DeckMemberMax;
    if ( v6 >= DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_12;
    if ( v6 >= memberList->max_length )
      sub_1BCAA44(v5, method);
    v5 = (BalanceConfig_c *)memberList->m_Items[v6];
    if ( !v5 )
LABEL_12:
      sub_1BCAA3C(v5, method);
    EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)v5, 0LL);
    v4 = v6 + 1;
  }
  while ( EquipUserSvtId <= 0 );
  return v6 >= DeckMemberMax;
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
  if ( (byte_4B11E69 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1BCA7E0(
                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                    *(_QWORD *)&svtId,
                                    method);
    byte_4B11E69 = 1;
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
          sub_1BCAA44(this, *(_QWORD *)&svtId);
        this = (PartyListViewItem_o *)memberList->m_Items[v7];
        if ( !this )
          break;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)this, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
            *(_QWORD *)&EquipSvtId.fields.fakeValue);
        v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(EquipSvtId, 0LL) == svtId;
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
      sub_1BCAA3C(this, *(_QWORD *)&svtId);
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

  if ( (byte_4B11E4F & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, deck, method);
    byte_4B11E4F = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_29:
    sub_1BCAA3C(questRestrictionInfo, deck);
  IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  for ( i = 0LL; ; ++i )
  {
    questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, deck);
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
      sub_1BCAA44(questRestrictionInfo, deck);
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
      if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_41192312(
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


bool __fastcall PartyListViewItem__IsSpecificMenuKind_32495016(
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
  __int64 v2; // x2
  int32_t i; // w21
  PartyOrganizationListViewItem_o *v5; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  __int64 v7; // x9
  const MethodInfo *v8; // x1

  if ( (byte_4B11E5D & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B11E5D = 1;
  }
  for ( i = 1; ; ++i )
  {
    v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_16;
    v7 = *(_QWORD *)&memberList->max_length;
    if ( i >= BalanceConfig_TypeInfo->static_fields->DeckMemberMax )
      break;
    if ( i >= (unsigned int)v7 )
      goto LABEL_17;
    v5 = memberList->m_Items[i];
    if ( !v5 )
      goto LABEL_16;
    if ( !v5->fields.isFollower )
      PartyOrganizationListViewItem__Empty(v5, 0LL);
  }
  if ( !(_DWORD)v7 )
LABEL_17:
    sub_1BCAA44(v5, method);
  v5 = memberList->m_Items[0];
  if ( !v5 )
LABEL_16:
    sub_1BCAA3C(v5, method);
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v5, 0LL);
  PartyListViewItem__CheckRestriction(this, v8);
}


void __fastcall PartyListViewItem__Modify(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int i; // w21
  BalanceConfig_c *v5; // x0
  int v6; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  const MethodInfo *v8; // x1

  if ( (byte_4B11E56 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    byte_4B11E56 = 1;
  }
  for ( i = 1; ; ++i )
  {
    v5 = BalanceConfig_TypeInfo;
    v6 = i - 1;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
      v5 = BalanceConfig_TypeInfo;
    }
    if ( v6 >= v5->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_12;
    if ( v6 >= memberList->max_length )
      sub_1BCAA44(v5, method);
    v5 = (BalanceConfig_c *)memberList->m_Items[v6];
    if ( !v5 )
LABEL_12:
      sub_1BCAA3C(v5, method);
    LODWORD(v5->vtable._3_ToString.methodPtr) = i;
    PartyOrganizationListViewItem__Modify((PartyOrganizationListViewItem_o *)v5, 0LL);
  }
  PartyListViewItem__CheckRestriction(this, method);
  PartyListViewItem__UpdateEventEffect(this, v8);
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

  if ( (byte_4B11E57 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, item, method);
    byte_4B11E57 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
LABEL_20:
    sub_1BCAA3C(v5, v6);
  *(_QWORD *)&this->fields.menuKind = *(_QWORD *)&item->fields.menuKind;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1BCA784(&this->fields.setupInfo, setupInfo);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
  v9 = 1;
  this->fields.id = item->fields.id;
  while ( 1 )
  {
    v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    v10 = v9 - 1;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6);
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
      v5 = (PartyOrganizationListViewItem_o *)sub_1BCA91C(v5, v12->obj.klass->_1.element_class);
      if ( !v5 )
      {
        v20 = sub_1BCAA60();
        sub_1BCA908(v20, 0LL);
      }
    }
    if ( v10 >= v12->max_length )
      goto LABEL_21;
    v14 = &v12->obj.klass + (int)v10;
    v14[4] = (Il2CppClass *)v13;
    v5 = (PartyOrganizationListViewItem_o *)sub_1BCA784(v14 + 4, v13);
    v15 = this->fields.memberList;
    if ( !v15 )
      goto LABEL_20;
    if ( v10 >= v15->max_length )
LABEL_21:
      sub_1BCAA44(v5, v6);
    v16 = v15->m_Items[v10];
    if ( !v16 )
      goto LABEL_20;
    v16->fields._NowPos_k__BackingField = v9++;
  }
  this->fields.cost = item->fields.cost;
  this->fields.isDeckNameDefault = item->fields.isDeckNameDefault;
  deckName = item->fields.deckName;
  this->fields.deckName = deckName;
  sub_1BCA784(&this->fields.deckName, deckName);
  this->fields.userEquipId = item->fields.userEquipId;
  waveBattleEnemyClassIds = item->fields.waveBattleEnemyClassIds;
  this->fields.waveBattleEnemyClassIds = waveBattleEnemyClassIds;
  p_waveBattleEnemyClassIds = &this->fields.waveBattleEnemyClassIds;
  sub_1BCA784(p_waveBattleEnemyClassIds, waveBattleEnemyClassIds);
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
  sub_1BCA784(p_deckName, DefaultDeckName);
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

  if ( (byte_4B11E58 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&num, userSvtId);
    byte_4B11E58 = 1;
  }
  for ( i = 0; ; ++i )
  {
    v8 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&num);
      v8 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v8->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_15;
    if ( i >= memberList->max_length )
      sub_1BCAA44(v8, *(_QWORD *)&num);
    v10 = &memberList->obj.klass + (int)i;
    v11 = (PartyOrganizationListViewItem_o *)v10[4];
    if ( !v11 )
LABEL_15:
      sub_1BCAA3C(v8, *(_QWORD *)&num);
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
    || (PartyOrganizationListViewItem__Modify_32616228((PartyOrganizationListViewItem_o *)this, item, 0LL),
        (v10 = v6->fields.memberList) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(this, *(_QWORD *)&num);
  }
  if ( v10->max_length <= num )
LABEL_12:
    sub_1BCAA44(this, *(_QWORD *)&num);
  this = (PartyListViewItem_o *)v10->m_Items[num];
  if ( !this )
    goto LABEL_11;
  v11 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0LL) + v11;
  PartyListViewItem__CheckRestriction(v6, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__SetMember_32495040(
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
    sub_1BCAA3C(this, *(_QWORD *)&idx);
  }
  if ( member )
  {
    this = (PartyListViewItem_o *)sub_1BCA91C(member, v9->obj.klass->_1.element_class);
    if ( !this )
    {
      v14 = sub_1BCAA60();
      sub_1BCA908(v14, 0LL);
    }
  }
  if ( v9->max_length <= idx )
    goto LABEL_18;
  v10 = &v9->obj.klass + idx;
  v10[4] = (Il2CppClass *)member;
  this = (PartyListViewItem_o *)sub_1BCA784(v10 + 4, member);
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
    sub_1BCAA44(this, *(_QWORD *)&idx);
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  System_Int32_array *Master_object; // x0
  __int64 v25; // x1
  signed int max_length; // w8
  bool v27; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x19
  signed int v29; // w20
  FollowerInfo_o *v30; // x26
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w0
  ServantLeaderInfo_o *ServantLeaderInfo; // x27
  struct QuestRestrictionInfo_o *v34; // x8
  int32_t v35; // w0
  QuestRestrictionInfo_o *v36; // x28
  QuestRestrictionInfo_o *v37; // x28
  __int64 v38; // x24
  int32_t *v40; // [xsp+0h] [xbp-90h]
  __int64 value; // [xsp+10h] [xbp-80h]
  PartyListViewItem_o *v43; // [xsp+18h] [xbp-78h]
  Il2CppObject *v44; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4B11E53 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___, follower, followerClassId);
    sub_1BCA7E0(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v12, v13);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v16,
      v17);
    sub_1BCA7E0(
      &Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__,
      v18,
      v19);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    byte_4B11E53 = 1;
  }
  v44 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, follower);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  if ( !npcFollowerInfoList )
    goto LABEL_37;
  max_length = npcFollowerInfoList->max_length;
  v27 = max_length > 0;
  if ( max_length >= 1 )
  {
    v40 = followerClassId;
    v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v29 = 0;
    v43 = this;
    do
    {
      if ( v29 >= (unsigned int)max_length )
        sub_1BCAA44(Master_object, v25);
      v30 = npcFollowerInfoList->m_Items[v29];
      if ( !v30 )
        goto LABEL_37;
      if ( v30->fields.npcFollowerSvtId == npcFollowerSvtId )
      {
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_37;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
        ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v30, 0, ReturnTypeByQuestId, 0LL);
        Master_object = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Master_object )
          goto LABEL_37;
        Master_object = (System_Int32_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Master_object,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
        if ( !Master_object )
          goto LABEL_37;
        Master_object = (System_Int32_array *)DataMasterBase_object__object__long___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                &entity,
                                                npcFollowerSvtId,
                                                (const MethodInfo_31B3040 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          v34 = this->fields.questRestrictionInfo;
          if ( !v34 )
            goto LABEL_37;
          v35 = FollowerInfo__GetReturnTypeByQuestId(v34->fields.questId, 0LL);
          Master_object = FollowerInfo__GetNpcServantIndividuality(v30, 0, v35, 0LL);
          if ( !this->fields.questRestrictionInfo )
            goto LABEL_37;
          Master_object = (System_Int32_array *)QuestRestrictionInfo__IsRestrictionServantIndividuality_41195344(
                                                  this->fields.questRestrictionInfo,
                                                  Master_object,
                                                  pos,
                                                  0LL);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
            goto LABEL_34;
        }
        else
        {
          if ( !v28 )
            goto LABEL_37;
          Master_object = (System_Int32_array *)DataMasterBase_object__object__long___TryGetEntity(
                                                  v28,
                                                  &v44,
                                                  npcFollowerSvtId,
                                                  (const MethodInfo_31B3040 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
            goto LABEL_41;
          Master_object = (System_Int32_array *)v44;
          if ( !v44 )
            goto LABEL_37;
          Master_object = (System_Int32_array *)NpcServantFollowerEntity__IsOverwriteIndividuality(
                                                  (NpcServantFollowerEntity_o *)v44,
                                                  0LL);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = (System_Int32_array *)v44;
            if ( !v44 )
              goto LABEL_37;
            v36 = this->fields.questRestrictionInfo;
            Master_object = NpcServantFollowerEntity__GetOverwriteIndividuality((NpcServantFollowerEntity_o *)v44, 0LL);
            if ( !v36 )
              goto LABEL_37;
            Master_object = (System_Int32_array *)QuestRestrictionInfo__IsRestrictionServantIndividuality_41195344(
                                                    v36,
                                                    Master_object,
                                                    pos,
                                                    0LL);
          }
          else
          {
LABEL_41:
            if ( !ServantLeaderInfo )
              goto LABEL_37;
            v37 = this->fields.questRestrictionInfo;
            v38 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
            *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              value = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
              j_il2cpp_runtime_class_init_0(
                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                *(_QWORD *)&v46.fields.fakeValue);
              *(_QWORD *)&v46.fields.fakeValue = value;
            }
            *(_QWORD *)&v46.fields.currentCryptoKey = v38;
            Master_object = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                    v46,
                                                    0LL);
            if ( !v37 )
              goto LABEL_37;
            Master_object = (System_Int32_array *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                    v37,
                                                    (int32_t)Master_object,
                                                    ServantLeaderInfo->fields.limitCount,
                                                    ServantLeaderInfo->fields.dispLimitCount,
                                                    pos,
                                                    0,
                                                    0LL);
            this = v43;
          }
          if ( ((unsigned __int8)Master_object & 1) == 0 )
          {
LABEL_34:
            *follower = v30;
            Master_object = (System_Int32_array *)sub_1BCA784(follower, v30);
            if ( ServantLeaderInfo )
            {
              *v40 = ServantLeaderInfo->fields.classId;
              return v27;
            }
LABEL_37:
            sub_1BCAA3C(Master_object, v25);
          }
        }
      }
      max_length = npcFollowerInfoList->max_length;
      v27 = ++v29 < max_length;
    }
    while ( v29 < max_length );
  }
  return v27;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__SetNpcMember(
        PartyListViewItem_o *this,
        int32_t num,
        FollowerInfo_o *follower,
        int32_t initPos,
        EventCampaignEntity_array *friendPointCampaignEntityList,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x27
  EventUpValSetupInfo_o *setupInfo; // x25
  QuestRestrictionInfo_o *questRestrictionInfo; // x26
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  PartyOrganizationListViewItem_o *v21; // x24
  Il2CppClass **v22; // x0
  const MethodInfo *v23; // x1
  __int64 v24; // x0

  if ( (byte_4B11E59 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationListViewItem_TypeInfo, *(_QWORD *)&num, follower);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v11, v12);
    byte_4B11E59 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance
    || (PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, initPos, follower, 0LL),
        memberList = this->fields.memberList,
        setupInfo = this->fields.setupInfo,
        questRestrictionInfo = this->fields.questRestrictionInfo,
        v21 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v18, v19, v20),
        PartyOrganizationListViewItem___ctor_32576596(
          v21,
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
    sub_1BCAA3C(Instance, v14);
  }
  if ( v21 )
  {
    Instance = (Il2CppObject *)sub_1BCA91C(v21, memberList->obj.klass->_1.element_class);
    if ( !Instance )
    {
      v24 = sub_1BCAA60();
      sub_1BCA908(v24, 0LL);
    }
  }
  if ( memberList->max_length <= num )
    sub_1BCAA44(Instance, v14);
  v22 = &memberList->obj.klass + num;
  v22[4] = (Il2CppClass *)v21;
  sub_1BCA784(v22 + 4, v21);
  PartyListViewItem__CheckRestriction(this, v23);
}


void __fastcall PartyListViewItem__SetUserEquip(
        PartyListViewItem_o *this,
        int64_t userEquipId,
        const MethodInfo *method)
{
  this->fields.userEquipId = userEquipId;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA44(this, num1);
  this = (PartyListViewItem_o *)memberList->m_Items[num1];
  if ( !this )
LABEL_7:
    sub_1BCAA3C(this, *(_QWORD *)&num1);
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
        sub_1BCAA44(this, method);
      this = (PartyListViewItem_o *)memberList->m_Items[v4];
      if ( !this )
        break;
      PartyOrganizationListViewItem__UpdateEventEffect((PartyOrganizationListViewItem_o *)this, 0LL);
      max_length = memberList->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1BCAA3C(this, method);
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
        sub_1BCAA44(this, method);
      this = (PartyListViewItem_o *)memberList->m_Items[v4];
      if ( !this )
        break;
      PartyOrganizationListViewItem__UpdateServantInfo((PartyOrganizationListViewItem_o *)this, 0LL);
      max_length = memberList->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x20
  Il2CppObject *v7; // x0
  int v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B11E6A & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_10409/*"PARTY_ORGANIZATION_NAME_BASE"*/, v4, v5);
    byte_4B11E6A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_10409/*"PARTY_ORGANIZATION_NAME_BASE"*/, 0LL);
  v9 = this->fields.index + 1;
  v7 = (Il2CppObject *)System_Int32__ToString((int32_t)&v9, 0LL);
  return System_String__Format(v6, v7, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}