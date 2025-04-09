void __fastcall PartyListViewItem___ctor(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationListViewItem_array *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_49B696A & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    sub_1B4CF90(&PartyOrganizationListViewItem___TypeInfo, v3);
    byte_49B696A = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct PartyOrganizationListViewItem_array *)sub_1B4D038(
                                                       PartyOrganizationListViewItem___TypeInfo,
                                                       (unsigned int)v4->static_fields->DeckMemberMax);
  this->fields.memberList = v5;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_32099116(
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
  __int64 v20; // x1
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  PartyOrganizationListViewItem_o *Instance; // x0
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  struct DeckServant_o *deckInfo; // x8
  int32_t FollowerIndex; // w0
  BalanceConfig_c *v31; // x8
  int32_t DeckMainMemberMax; // w23
  struct PartyOrganizationListViewItem_array *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
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
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  PartyListViewItem_o *v49; // x26
  QuestRestrictionInfo_o *v50; // x21
  UserServantEntity_o *v51; // x28
  struct PartyOrganizationListViewItem_array *v52; // x20
  System_Int64_array *EquipList; // x19
  PartyOrganizationListViewItem_o *v54; // x0
  UserServantEntity_o *v55; // x2
  Il2CppClass **v56; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v59; // x0
  int32_t v62; // [xsp+2Ch] [xbp-84h]
  UserServantEntity_array *UserServantList; // [xsp+38h] [xbp-78h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+40h] [xbp-70h]
  int32_t v66; // [xsp+4Ch] [xbp-64h]

  v12 = questRestrictionInfo;
  if ( (byte_49B696B & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind);
    sub_1B4CF90(&PartyOrganizationListViewItem___TypeInfo, v19);
    sub_1B4CF90(&PartyOrganizationListViewItem_TypeInfo, v20);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v21);
    byte_49B696B = 1;
  }
  ListViewItem___ctor_41325876((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v22, v23);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v24, v25);
  if ( !deck )
    goto LABEL_53;
  PartyListViewItem__SetDeckName(this, deck->fields.name, v28);
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
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(v31);
    v31 = BalanceConfig_TypeInfo;
  }
  v33 = (struct PartyOrganizationListViewItem_array *)sub_1B4D038(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v31->static_fields->DeckMemberMax);
  this->fields.memberList = v33;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v33, v34, v35);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  v36 = UserServantList;
  if ( *(_QWORD *)&Instance->fields.sortIndex )
  {
    Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      follower = *(FollowerInfo_o **)&Instance->fields.sortIndex;
      Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        followerClassId = Instance->fields.sortValue0;
        Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          followerDeckId = HIDWORD(Instance->fields.sortValue0);
          goto LABEL_18;
        }
      }
    }
LABEL_53:
    sub_1B4D1EC(Instance, v27);
  }
LABEL_18:
  v37 = 0;
  v62 = DeckMainMemberMax;
  while ( 1 )
  {
    Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
    v66 = v43;
    if ( v43 == DeckMainMemberMax )
    {
      v44 = *p_memberList;
      v45 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
      v46 = v45;
      if ( follower )
      {
        PartyOrganizationListViewItem___ctor_32260152(
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
        PartyOrganizationListViewItem___ctor_32262724(v45, v37, 1, setupInfo, v12, 1, initPos, 0LL);
        if ( !v44 )
          goto LABEL_53;
      }
      if ( v46 )
      {
        Instance = (PartyOrganizationListViewItem_o *)sub_1B4D0CC(v46, v44->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_55;
      }
      if ( v37 >= v44->max_length )
        goto LABEL_54;
      v56 = &v44->obj.klass + v37;
    }
    else
    {
      if ( !v36 )
        goto LABEL_53;
      if ( v37 >= v36->max_length )
        goto LABEL_54;
      v49 = this;
      v50 = v12;
      v51 = v36->m_Items[v37];
      v52 = *p_memberList;
      if ( v51 )
      {
        EquipList = UserDeckEntity__GetEquipList(deck, v37, 0LL);
        v54 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
        v55 = v51;
        v46 = v54;
        v12 = v50;
        PartyOrganizationListViewItem___ctor_32251956(
          v54,
          v37,
          v55,
          EquipList,
          setupInfo,
          v50,
          0LL,
          initPos,
          0LL,
          0,
          0LL);
        if ( !v52 )
          goto LABEL_53;
      }
      else
      {
        v46 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
        v12 = v50;
        PartyOrganizationListViewItem___ctor_32262724(v46, v37, 0, setupInfo, v50, 1, initPos, 0LL);
        if ( !v52 )
          goto LABEL_53;
      }
      this = v49;
      if ( v46 )
      {
        Instance = (PartyOrganizationListViewItem_o *)sub_1B4D0CC(v46, v52->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_55:
          v59 = sub_1B4D210();
          sub_1B4D0B8(v59, 0LL);
        }
      }
      if ( v37 >= v52->max_length )
        goto LABEL_54;
      v56 = &v52->obj.klass + v37;
      v36 = UserServantList;
      DeckMainMemberMax = v62;
    }
    v56[4] = (Il2CppClass *)v46;
    sub_1B4CF34((CGThumbnailListItem_o *)(v56 + 4), (int32_t)v46, v47, v48);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_53;
    if ( v37 >= memberList->max_length )
LABEL_54:
      sub_1B4D1F4(Instance, v27);
    Instance = memberList->m_Items[v37];
    if ( !Instance )
      goto LABEL_53;
    cost = this->fields.cost;
    v37 = v66;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(Instance, 0LL) + cost;
  }
  PartyListViewItem__CheckRestriction(this, v27);
}


void __fastcall PartyListViewItem___ctor_32101688(
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x1
  struct System_String_o *DefaultDeckName; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 Instance; // x0
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x2
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo *v38; // x3
  int32_t FollowerIndex; // w25
  BalanceConfig_c *v40; // x0
  PartyListViewItem_o *v41; // x24
  int v42; // w27
  const MethodInfo *v43; // x2
  int32_t v44; // w23
  BalanceConfig_c *v45; // x0
  struct PartyOrganizationListViewItem_array *v46; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x28
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w8
  const MethodInfo *v51; // x2
  unsigned int v52; // w24
  struct DeckServant_o *v53; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v55; // x8
  int32_t *p_initPos; // x8
  int32_t initPos; // w19
  const MethodInfo *v58; // x6
  int v59; // w25
  struct DeckServant_o *v60; // x8
  struct DeckServantData_array *v61; // x8
  DeckServantData_o *v62; // x8
  _BOOL4 v63; // w27
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *v65; // x23
  int32_t v66; // w27
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v68; // x26
  int32_t v69; // w29
  PartyOrganizationListViewItem_o *v70; // x25
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  CGThumbnailListItem_o *v73; // x0
  FollowerInfo_o *v74; // x23
  struct PartyOrganizationListViewItem_array *v75; // x29
  int32_t v76; // w27
  UserServantEntity_array *v77; // x26
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
  System_Int64_array *EquipList; // x27
  PartyOrganizationListViewItem_o *v92; // x0
  Il2CppClass **v93; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v96; // x1
  __int64 v97; // x0
  bool *v98; // [xsp+20h] [xbp-C0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+30h] [xbp-B0h]
  UserServantEntity_array *UserServantList; // [xsp+38h] [xbp-A8h]
  int v102; // [xsp+40h] [xbp-A0h]
  int v103; // [xsp+44h] [xbp-9Ch]
  PartyListViewItem_o *v104; // [xsp+48h] [xbp-98h]
  int32_t v106; // [xsp+60h] [xbp-80h]
  _BOOL4 v107; // [xsp+64h] [xbp-7Ch]
  int32_t followerClassIda; // [xsp+74h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16

  if ( (byte_49B696C & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, isBaseModify);
    sub_1B4CF90(&Method_DataManager_GetMaster_NpcFollowerMaster___, v19);
    sub_1B4CF90(&DataManager_TypeInfo, v20);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1B4CF90(&PartyOrganizationListViewItem___TypeInfo, v22);
    sub_1B4CF90(&PartyOrganizationListViewItem_TypeInfo, v23);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v24);
    byte_49B696C = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_41325876((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v25, v26);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v28, v29);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v30);
  this->fields.deckName = DefaultDeckName;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.deckName, (int32_t)DefaultDeckName, v32, v33);
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
    v40 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v40 = BalanceConfig_TypeInfo;
    }
    FollowerIndex = v40->static_fields->DeckMainMemberMax;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  if ( *(int *)(Instance + 48) < 1 )
  {
    v41 = 0LL;
    v42 = 0;
    v107 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    v41 = *(PartyListViewItem_o **)(Instance + 72);
    v42 = 0;
    v107 = v41 == 0LL;
    if ( follower && v41 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_110;
      v42 = *(_DWORD *)(Instance + 48);
      Instance = (__int64)PartyListViewItem__GetMember(v41, v42 - 1, v43);
      if ( !Instance )
        goto LABEL_110;
      v44 = *(_DWORD *)(Instance + 336);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_110;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v44, follower, 0LL);
      v107 = 0;
    }
  }
  v45 = BalanceConfig_TypeInfo;
  v98 = isBaseModify;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v45 = BalanceConfig_TypeInfo;
  }
  v46 = (struct PartyOrganizationListViewItem_array *)sub_1B4D038(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v45->static_fields->DeckMemberMax);
  this->fields.memberList = v46;
  p_memberList = &this->fields.memberList;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v46, v48, v49);
  this->fields.cost = 0;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    follower = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    followerClassId = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    v50 = *(_DWORD *)(Instance + 36);
  }
  else
  {
    v50 = followerDeckId;
  }
  v106 = v50;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || (v104 = v41, !Instance) )
LABEL_110:
    sub_1B4D1EC(Instance, v35);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)Instance,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0LL);
  v52 = 0;
  v102 = v42 - 1;
  v103 = FollowerIndex - 1;
  while ( 1 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v52 >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 156LL) )
      break;
    if ( v107 )
    {
      v53 = deck->fields.deckInfo;
      if ( !v53 )
        goto LABEL_110;
      svts = v53->fields.svts;
      if ( !svts )
        goto LABEL_110;
      if ( v52 >= svts->max_length )
        goto LABEL_114;
      v55 = svts->m_Items[v52];
      if ( !v55 )
        goto LABEL_110;
      p_initPos = &v55->fields.initPos;
    }
    else
    {
      Instance = (__int64)PartyListViewItem__GetMember(v104, v52, v51);
      if ( !Instance )
        goto LABEL_110;
      p_initPos = (int32_t *)(Instance + 336);
    }
    initPos = *p_initPos;
    followera = 0LL;
    followerClassIda = 0;
    if ( !questRestrictionInfo )
      goto LABEL_110;
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41066216(questRestrictionInfo, initPos, 0LL);
    v59 = Instance;
    if ( (Instance & 1) != 0 )
    {
      v60 = deck->fields.deckInfo;
      if ( !v60 )
        goto LABEL_110;
      v61 = v60->fields.svts;
      if ( !v61 )
        goto LABEL_110;
      if ( v52 >= v61->max_length )
        goto LABEL_114;
      v62 = v61->m_Items[v52];
      if ( !v62 )
        goto LABEL_110;
      v63 = 0;
      if ( v102 != v52 )
      {
        npcFollowerSvtId = v62->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v63 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v58);
      }
    }
    else
    {
      v63 = 0;
    }
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                          (PartyOrganizationUtility_o *)Instance,
                          initPos,
                          0LL);
    if ( !Instance || ((v59 ^ 1) & 1) != 0 )
    {
      if ( v103 != v52 && !v63 )
      {
        if ( (v59 & 1) != 0 )
        {
          v77 = UserServantList;
          if ( !UserServantList )
            goto LABEL_110;
          if ( v52 >= UserServantList->max_length )
            goto LABEL_114;
          v78 = &UserServantList->obj.klass + (int)v52;
          v81 = v78[4];
          v80 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v78 + 4);
          v79 = v81;
          if ( v81 )
          {
            declaringType = v79->_1.declaringType;
            parent = v79->_1.parent;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v110.fields.currentCryptoKey = declaringType;
            *(_QWORD *)&v110.fields.fakeValue = parent;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v110, 0LL);
            if ( v52 >= UserServantList->max_length )
              goto LABEL_114;
            if ( !*v80 )
              goto LABEL_110;
            v84 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572((*v80)[6], 0LL);
            if ( v52 >= UserServantList->max_length )
              goto LABEL_114;
            v85 = Instance;
            Instance = (__int64)*v80;
            if ( !*v80 )
              goto LABEL_110;
            DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
            Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                         questRestrictionInfo,
                         v84,
                         v85,
                         DispLimitCount,
                         initPos,
                         0,
                         0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( v52 >= UserServantList->max_length )
                goto LABEL_114;
              *v80 = 0LL;
              sub_1B4CF34((CGThumbnailListItem_o *)v80, 0, v87, v88);
            }
          }
        }
        else
        {
          v77 = UserServantList;
          if ( !UserServantList )
            goto LABEL_110;
        }
        if ( v52 >= v77->max_length )
          goto LABEL_114;
        v89 = v77->m_Items[v52];
        v90 = *p_memberList;
        if ( v89 )
        {
          EquipList = UserEventDeckEntity__GetEquipList(deck, v52, 0LL);
          v70 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32251956(
            v70,
            v52,
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
          v70 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32262724(v70, v52, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
          if ( !v90 )
            goto LABEL_110;
        }
        if ( v70 )
        {
          Instance = sub_1B4D0CC(v70, v90->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_115:
            v97 = sub_1B4D210();
            sub_1B4D0B8(v97, 0LL);
          }
        }
        if ( v52 >= v90->max_length )
          goto LABEL_114;
        v93 = &v90->obj.klass + (int)v52;
      }
      else
      {
        v74 = followera;
        v75 = *p_memberList;
        if ( followera )
        {
          v76 = followerClassIda;
          v70 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32260152(
            v70,
            v52,
            v74,
            v76,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v106,
            initPos,
            0LL);
LABEL_94:
          if ( !v75 )
            goto LABEL_110;
        }
        else
        {
          v92 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
          v70 = v92;
          if ( follower )
          {
            PartyOrganizationListViewItem___ctor_32260152(
              v92,
              v52,
              follower,
              followerClassId,
              setupInfo,
              questRestrictionInfo,
              friendPointCampaignEntityList,
              0,
              v106,
              initPos,
              0LL);
            goto LABEL_94;
          }
          PartyOrganizationListViewItem___ctor_32262724(v92, v52, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
          if ( !v75 )
            goto LABEL_110;
        }
        if ( v70 )
        {
          Instance = sub_1B4D0CC(v70, v75->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_115;
        }
        if ( v52 >= v75->max_length )
          goto LABEL_114;
        v93 = &v75->obj.klass + (int)v52;
      }
      v73 = (CGThumbnailListItem_o *)(v93 + 4);
      goto LABEL_105;
    }
    v65 = (FollowerInfo_o *)Instance;
    if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0LL) )
      v66 = 0;
    else
      v66 = followerClassId;
    IsNpc = FollowerInfo__get_IsNpc(v65, 0LL);
    v68 = *p_memberList;
    if ( IsNpc )
      v69 = 0;
    else
      v69 = v106;
    v70 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_32260152(
      v70,
      v52,
      v65,
      v66,
      setupInfo,
      questRestrictionInfo,
      friendPointCampaignEntityList,
      0,
      v69,
      initPos,
      0LL);
    if ( !v68 )
      goto LABEL_110;
    if ( v70 )
    {
      Instance = sub_1B4D0CC(v70, v68->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_115;
    }
    if ( v52 >= v68->max_length )
      goto LABEL_114;
    v73 = (CGThumbnailListItem_o *)&v68->m_Items[v52];
LABEL_105:
    v73->klass = (CGThumbnailListItem_c *)v70;
    sub_1B4CF34(v73, (int32_t)v70, v71, v72);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_110;
    if ( v52 >= memberList->max_length )
LABEL_114:
      sub_1B4D1F4(Instance, v35);
    Instance = (__int64)memberList->m_Items[v52];
    if ( !Instance )
      goto LABEL_110;
    cost = this->fields.cost;
    ++v52;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, v35);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v96) )
    *v98 = 1;
}


void __fastcall PartyListViewItem___ctor_32106280(
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x24
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x1
  struct System_String_o *DefaultDeckName; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 Instance; // x0
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x2
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo_37B4830 **v40; // x28
  PartyListViewItem_o *v41; // x27
  unsigned int v42; // w25
  const MethodInfo *v43; // x2
  int32_t v44; // w19
  int32_t v45; // w8
  BalanceConfig_c *v46; // x0
  struct PartyOrganizationListViewItem_array *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w8
  FollowerInfo_array *QuestFollowerList; // x0
  const MethodInfo *v52; // x2
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
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  __int64 v68; // x20
  const MethodInfo *v69; // x6
  int v70; // w26
  struct DeckServant_o *v71; // x8
  struct DeckServantData_array *v72; // x8
  DeckServantData_o *v73; // x8
  _BOOL4 v74; // w27
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *v76; // x20
  PartyListViewItem_o *v77; // x23
  const MethodInfo_37B4830 **v78; // x21
  UserEventDeckEntity_o *v79; // x28
  int32_t v80; // w27
  bool IsNpc; // w0
  unsigned int *v82; // x19
  int32_t v83; // w29
  PartyOrganizationListViewItem_o *v84; // x26
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  __int64 v87; // x25
  unsigned __int64 v88; // x8
  FollowerInfo_o *v89; // x20
  int32_t v90; // w27
  unsigned int *v91; // x19
  PartyOrganizationListViewItem_o *v92; // x26
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  UserServantEntity_o *v95; // x8
  __int64 v96; // x20
  __int64 v97; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v98; // x8
  int32_t v99; // w20
  int32_t v100; // w26
  int32_t DispLimitCount; // w0
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  UserServantEntity_o *v104; // x20
  System_Int64_array *EquipList; // x27
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

  if ( (byte_49B696D & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, isBaseModify);
    sub_1B4CF90(&Method_DataManager_GetMaster_NpcFollowerMaster___, v20);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserServantMaster___, v21);
    sub_1B4CF90(&DataManager_TypeInfo, v22);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1B4CF90(&PartyOrganizationListViewItem___TypeInfo, v24);
    sub_1B4CF90(&PartyOrganizationListViewItem_TypeInfo, v25);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v26);
    byte_49B696D = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_41325876((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v27, v28);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v30, v31);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v32);
  this->fields.deckName = DefaultDeckName;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.deckName, (int32_t)DefaultDeckName, v34, v35);
  if ( !deck )
    goto LABEL_142;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_142;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v38) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_142;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0LL);
  }
  v40 = (const MethodInfo_37B4830 **)&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  if ( *(int *)(Instance + 48) < 1 )
  {
    v41 = 0LL;
    if ( !questRestrictionInfo )
      goto LABEL_15;
    goto LABEL_14;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  v41 = *(PartyListViewItem_o **)(Instance + 72);
  if ( questRestrictionInfo )
LABEL_14:
    QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL);
LABEL_15:
  v42 = 0;
  if ( follower && v41 )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    v42 = *(_DWORD *)(Instance + 48);
    Instance = (__int64)PartyListViewItem__GetMember(v41, v42 - 1, v43);
    if ( !Instance )
      goto LABEL_142;
    v44 = *(_DWORD *)(Instance + 336);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v44, follower, 0LL);
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    follower = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    followerClassId = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    v45 = *(_DWORD *)(Instance + 36);
  }
  else
  {
    v45 = followerDeckId;
  }
  v123 = v45;
  v46 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v46 = BalanceConfig_TypeInfo;
  }
  v47 = (struct PartyOrganizationListViewItem_array *)sub_1B4D038(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v46->static_fields->DeckMemberMax);
  this->fields.memberList = v47;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v47, v48, v49);
  v50 = this->fields.menuKind;
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( v50 == 3 )
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
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || (v115 = follower, !Instance) )
LABEL_142:
    sub_1B4D1EC(Instance, v37);
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Instance,
                        (*p_questRestrictionInfo)->fields.questId,
                        (*p_questRestrictionInfo)->fields.questPhase,
                        0LL);
  v53 = (unsigned int *)UserServantList;
  v54 = v42;
  v55 = 0LL;
  v56 = 0LL;
  v116 = &svtIdForceBattleList->m_Items[1];
  npcFollowerInfoList = QuestFollowerList;
  m_Items = UserServantList->m_Items;
  v126 = v54 - 1;
  v124 = v41;
  while ( 1 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v55 >= *(int *)(*(_QWORD *)(Instance + 184) + 156LL) )
      break;
    v127 = v56;
    if ( v41 )
    {
      Instance = (__int64)PartyListViewItem__GetMember(v41, v55, v52);
      if ( !Instance )
        goto LABEL_142;
      p_initPos = (int32_t *)(Instance + 336);
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
        v91 = (unsigned int *)*p_memberList;
        v92 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32262724(v92, v55, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v91 )
          goto LABEL_142;
        v87 = v127;
        if ( v92 )
        {
          Instance = sub_1B4D0CC(v92, *(_QWORD *)(*(_QWORD *)v91 + 64LL));
          if ( !Instance )
          {
LABEL_144:
            v112 = sub_1B4D210();
            sub_1B4D0B8(v112, 0LL);
          }
        }
        if ( v55 >= v91[6] )
          goto LABEL_143;
        *(_QWORD *)&v91[2 * v55 + 8] = v92;
        sub_1B4CF34((CGThumbnailListItem_o *)((char *)v91 + v127 + 32), (int32_t)v92, v93, v94);
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
            v37 = (const MethodInfo *)(unsigned int)v116[v55];
            if ( (int)v37 >= 1 )
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
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v130.fields.currentCryptoKey = v65;
              *(_QWORD *)&v130.fields.fakeValue = v64;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v130, 0LL);
              max_length = svtIdForceBattleList->max_length;
              if ( v55 >= max_length )
                goto LABEL_143;
              v37 = (const MethodInfo *)(unsigned int)v116[v55];
              if ( (_DWORD)Instance != (_DWORD)v37 )
              {
LABEL_68:
                if ( v55 >= max_length )
                  goto LABEL_143;
                Instance = (__int64)Master_object;
                if ( !Master_object )
                  goto LABEL_142;
                Instance = (__int64)UserServantMaster__getSvtIdBattle(Master_object, (int32_t)v37, 0LL);
                v68 = Instance;
                if ( Instance )
                {
                  Instance = sub_1B4D0CC(Instance, *(_QWORD *)(*(_QWORD *)v53 + 64LL));
                  if ( !Instance )
                    goto LABEL_144;
                }
                if ( v55 >= v53[6] )
                  goto LABEL_143;
                m_Items[v55] = (UserServantEntity_o *)v68;
                sub_1B4CF34((CGThumbnailListItem_o *)((char *)m_Items + v127), v68, v66, v67);
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
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41066216(questRestrictionInfo, initPos, 0LL);
    v70 = Instance;
    if ( (Instance & 1) != 0 )
    {
      v71 = deck->fields.deckInfo;
      if ( !v71 )
        goto LABEL_142;
      v72 = v71->fields.svts;
      if ( !v72 )
        goto LABEL_142;
      if ( v55 >= v72->max_length )
        goto LABEL_143;
      v73 = v72->m_Items[v55];
      if ( !v73 )
        goto LABEL_142;
      v74 = 0;
      if ( v126 != v55 )
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
    Instance = (__int64)SingletonTemplate_object___get_Instance(*v40);
    if ( !Instance )
      goto LABEL_142;
    Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                          (PartyOrganizationUtility_o *)Instance,
                          initPos,
                          0LL);
    if ( Instance && ((v70 ^ 1) & 1) == 0 )
    {
      v76 = (FollowerInfo_o *)Instance;
      v77 = this;
      v78 = v40;
      v79 = deck;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0LL) )
        v80 = 0;
      else
        v80 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v76, 0LL);
      v82 = (unsigned int *)*p_memberList;
      if ( IsNpc )
        v83 = 0;
      else
        v83 = v123;
      v84 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32260152(
        v84,
        v55,
        v76,
        v80,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v83,
        initPos,
        0LL);
      if ( !v82 )
        goto LABEL_142;
      v41 = v124;
      v87 = v127;
      deck = v79;
      if ( v84 )
      {
        Instance = sub_1B4D0CC(v84, *(_QWORD *)(*(_QWORD *)v82 + 64LL));
        if ( !Instance )
          goto LABEL_144;
      }
      v88 = v82[6];
      v40 = v78;
      this = v77;
      v53 = (unsigned int *)UserServantList;
      goto LABEL_133;
    }
    if ( v126 != v55 && !v74 )
    {
      if ( (v70 & 1) != 0 )
      {
        if ( !v53 )
          goto LABEL_142;
        if ( v55 >= v53[6] )
          goto LABEL_143;
        v95 = m_Items[v55];
        if ( v95 )
        {
          v97 = *(_QWORD *)&v95->fields.svtId.fields.currentCryptoKey;
          v96 = *(_QWORD *)&v95->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v131.fields.currentCryptoKey = v97;
          *(_QWORD *)&v131.fields.fakeValue = v96;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v131, 0LL);
          if ( v55 >= v53[6] )
            goto LABEL_143;
          v98 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)m_Items[v55];
          if ( !v98 )
            goto LABEL_142;
          v99 = Instance;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v98[6], 0LL);
          if ( v55 >= v53[6] )
LABEL_143:
            sub_1B4D1F4(Instance, v37);
          v100 = Instance;
          Instance = (__int64)m_Items[v55];
          if ( !Instance )
            goto LABEL_142;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
          Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                       questRestrictionInfo,
                       v99,
                       v100,
                       DispLimitCount,
                       initPos,
                       0,
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v55 >= v53[6] )
              goto LABEL_143;
            m_Items[v55] = 0LL;
            sub_1B4CF34((CGThumbnailListItem_o *)((char *)m_Items + v127), 0, v102, v103);
          }
        }
      }
      else if ( !v53 )
      {
        goto LABEL_142;
      }
      if ( v55 >= v53[6] )
        goto LABEL_143;
      v104 = m_Items[v55];
      v82 = (unsigned int *)*p_memberList;
      if ( !v104 )
      {
        v106 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
        v84 = v106;
        v107 = v55;
        v108 = 0;
        goto LABEL_128;
      }
      EquipList = UserEventDeckEntity__GetEquipList(deck, v55, 0LL);
      v84 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32251956(
        v84,
        v55,
        v104,
        EquipList,
        setupInfo,
        questRestrictionInfo,
        0LL,
        initPos,
        0LL,
        0,
        0LL);
      if ( !v82 )
        goto LABEL_142;
    }
    else
    {
      v89 = followera;
      v82 = (unsigned int *)*p_memberList;
      if ( !followera )
      {
        v106 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
        v84 = v106;
        if ( v115 )
        {
          PartyOrganizationListViewItem___ctor_32260152(
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
          PartyOrganizationListViewItem___ctor_32262724(
            v106,
            v107,
            v108,
            setupInfo,
            questRestrictionInfo,
            1,
            initPos,
            0LL);
        }
        v41 = v124;
        if ( !v82 )
          goto LABEL_142;
        goto LABEL_130;
      }
      v90 = followerClassIda;
      v84 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32260152(
        v84,
        v55,
        v89,
        v90,
        setupInfo,
        questRestrictionInfo,
        0LL,
        0,
        v123,
        initPos,
        0LL);
      if ( !v82 )
        goto LABEL_142;
    }
    v41 = v124;
LABEL_130:
    v87 = v127;
    if ( v84 )
    {
      Instance = sub_1B4D0CC(v84, *(_QWORD *)(*(_QWORD *)v82 + 64LL));
      if ( !Instance )
        goto LABEL_144;
    }
    v88 = v82[6];
LABEL_133:
    if ( v55 >= v88 )
      goto LABEL_143;
    *(_QWORD *)&v82[2 * v55 + 8] = v84;
    sub_1B4CF34((CGThumbnailListItem_o *)((char *)v82 + v87 + 32), (int32_t)v84, v85, v86);
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
    v56 = v87 + 8;
  }
  PartyListViewItem__CheckRestriction(this, v37);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v111) )
    *isBaseModify = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_32109028(
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  BalanceConfig_c *v30; // x0
  struct PartyOrganizationListViewItem_array *v31; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x22
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *Instance; // x0
  __int64 v36; // x1
  int32_t klass; // w23
  int32_t klass_high; // w25
  struct PartyOrganizationListViewItem_array *v39; // x26
  PartyOrganizationListViewItem_o *v40; // x0
  PartyOrganizationListViewItem_o *v41; // x27
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w23
  const MethodInfo *v46; // x1
  int32_t i; // w23
  BalanceConfig_c *v48; // x0
  struct PartyOrganizationListViewItem_array *v49; // x25
  PartyOrganizationListViewItem_o *v50; // x24
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  Il2CppClass **v53; // x0
  struct PartyOrganizationListViewItem_array *v54; // x8
  int32_t v55; // w24
  __int64 v56; // x0

  if ( (byte_49B696E & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind);
    sub_1B4CF90(&PartyOrganizationListViewItem___TypeInfo, v19);
    sub_1B4CF90(&PartyOrganizationListViewItem_TypeInfo, v20);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v21);
    sub_1B4CF90(&StringLiteral_1/*""*/, v22);
    byte_49B696E = 1;
  }
  ListViewItem___ctor_41325876((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v23, v24);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v25, v26);
  this->fields.isDeckNameDefault = 0;
  v27 = (int)StringLiteral_1/*""*/;
  this->fields.deckName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.deckName, v27, v28, v29);
  this->fields.userEquipId = userEquipId;
  this->fields.id = 0LL;
  v30 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v30 = BalanceConfig_TypeInfo;
  }
  v31 = (struct PartyOrganizationListViewItem_array *)sub_1B4D038(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v30->static_fields->DeckMemberMax);
  this->fields.memberList = v31;
  p_memberList = &this->fields.memberList;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v31, v33, v34);
  this->fields.cost = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  klass = followerClassId;
  if ( Instance[1].monitor )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    follower = (FollowerInfo_o *)Instance[1].monitor;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    klass = (int32_t)Instance[2].klass;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    klass_high = HIDWORD(Instance[2].klass);
  }
  else
  {
    klass_high = followerDeckId;
  }
  v39 = *p_memberList;
  v40 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
  v41 = v40;
  if ( follower )
  {
    PartyOrganizationListViewItem___ctor_32260152(
      v40,
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
    if ( !v39 )
      goto LABEL_35;
  }
  else
  {
    PartyOrganizationListViewItem___ctor_32262724(v40, 0, 1, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v39 )
      goto LABEL_35;
  }
  if ( v41 )
  {
    Instance = (Il2CppObject *)sub_1B4D0CC(v41, v39->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_37:
      v56 = sub_1B4D210();
      sub_1B4D0B8(v56, 0LL);
    }
  }
  if ( !v39->max_length )
    goto LABEL_36;
  v39->m_Items[0] = v41;
  sub_1B4CF34((CGThumbnailListItem_o *)v39->m_Items, (int32_t)v41, v42, v43);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_35;
  if ( !memberList->max_length )
LABEL_36:
    sub_1B4D1F4(Instance, v36);
  Instance = (Il2CppObject *)memberList->m_Items[0];
  if ( !Instance )
LABEL_35:
    sub_1B4D1EC(Instance, v36);
  cost = this->fields.cost;
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                    + cost;
  for ( i = 1; ; ++i )
  {
    v48 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v48 = BalanceConfig_TypeInfo;
    }
    if ( i >= v48->static_fields->DeckMemberMax )
      break;
    v49 = *p_memberList;
    v50 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_32262724(v50, i, 0, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v49 )
      goto LABEL_35;
    if ( v50 )
    {
      Instance = (Il2CppObject *)sub_1B4D0CC(v50, v49->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_37;
    }
    if ( i >= v49->max_length )
      goto LABEL_36;
    v53 = &v49->obj.klass + i;
    v53[4] = (Il2CppClass *)v50;
    sub_1B4CF34((CGThumbnailListItem_o *)(v53 + 4), (int32_t)v50, v51, v52);
    v54 = this->fields.memberList;
    if ( !v54 )
      goto LABEL_35;
    if ( i >= v54->max_length )
      goto LABEL_36;
    Instance = (Il2CppObject *)v54->m_Items[i];
    if ( !Instance )
      goto LABEL_35;
    v55 = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                      + v55;
  }
  PartyListViewItem__CheckRestriction(this, v46);
}


void __fastcall PartyListViewItem___ctor_32109920(
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 IsNeedDeckPosReset; // x0
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  struct DeckServant_o *deckInfo; // x8
  int32_t servantNumMax; // w26
  const MethodInfo *v35; // x3
  PartyListViewItem_o *v36; // x28
  int v37; // w25
  const MethodInfo *v38; // x2
  int32_t v39; // w23
  int32_t FollowerIndex; // w24
  BalanceConfig_c *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x9
  __int64 v45; // x27
  __int64 v46; // x21
  unsigned __int64 v47; // x8
  __int64 v48; // x23
  signed __int64 v49; // x29
  BalanceConfig_c *v50; // x0
  struct PartyOrganizationListViewItem_array *v51; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x28
  int32_t v53; // w2
  const MethodInfo *v54; // x3
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
  FollowerInfo_o *v69; // x23
  int32_t v70; // w26
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v72; // x21
  int32_t v73; // w29
  PartyOrganizationListViewItem_o *v74; // x25
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  Il2CppClass **v77; // x8
  FollowerInfo_o *v78; // x23
  struct PartyOrganizationListViewItem_array *v79; // x29
  int32_t v80; // w26
  __int64 v81; // x29
  __int64 v82; // x25
  __int64 v83; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v84; // x25
  __int64 v85; // t1
  __int64 v86; // x23
  __int64 v87; // x26
  int32_t v88; // w23
  int32_t v89; // w26
  int32_t DispLimitCount; // w0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  UserServantEntity_o *v93; // x23
  struct PartyOrganizationListViewItem_array *v94; // x21
  System_Int64_array *EquipList; // x26
  PartyOrganizationListViewItem_o *v96; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w21
  const MethodInfo *v99; // x1
  __int64 v100; // x0
  FollowerInfo_o *followerInfo; // [xsp+18h] [xbp-C8h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+20h] [xbp-C0h]
  int v104; // [xsp+30h] [xbp-B0h]
  int v105; // [xsp+38h] [xbp-A8h]
  PartyListViewItem_o *v106; // [xsp+40h] [xbp-A0h]
  int32_t v107; // [xsp+4Ch] [xbp-94h]
  int32_t v108; // [xsp+58h] [xbp-88h]
  _BOOL4 v109; // [xsp+5Ch] [xbp-84h]
  UserEventDeckEntity_o *v110; // [xsp+68h] [xbp-78h]
  int32_t followerClassIda; // [xsp+74h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16

  if ( (byte_49B696F & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, isBaseModify);
    sub_1B4CF90(&Method_DataManager_GetMaster_NpcFollowerMaster___, v19);
    sub_1B4CF90(&DataManager_TypeInfo, v20);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1B4CF90(&PartyOrganizationListViewItem___TypeInfo, v22);
    sub_1B4CF90(&PartyOrganizationListViewItem_TypeInfo, v23);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v24);
    byte_49B696F = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_41325876((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v25, v26);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v28, v29);
  if ( !deck )
    goto LABEL_121;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_121;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  IsNeedDeckPosReset = PartyListViewItem__IsNeedDeckPosReset(this, deck, v32);
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
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_121;
  if ( *(int *)(IsNeedDeckPosReset + 48) < 1 )
  {
    v36 = 0LL;
    v37 = 0;
    v109 = 1;
  }
  else
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    v36 = *(PartyListViewItem_o **)(IsNeedDeckPosReset + 72);
    v37 = 0;
    v109 = v36 == 0LL;
    if ( followerInfo && v36 )
    {
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      v37 = *(_DWORD *)(IsNeedDeckPosReset + 48);
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v36, v37 - 1, v38);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      v39 = *(_DWORD *)(IsNeedDeckPosReset + 336);
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      PartyOrganizationUtility__SetNpcFollowerInfo(
        (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
        v39,
        followerInfo,
        0LL);
      v109 = 0;
    }
  }
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0LL, v35);
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
  v41 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v41 = BalanceConfig_TypeInfo;
  }
  FollowerIndex = servantNumMax;
  if ( servantNumMax > v41->static_fields->DeckMainMemberMax )
  {
    FollowerIndex = v41->static_fields->DeckMainMemberMax;
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      FollowerIndex = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
    }
  }
LABEL_29:
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_121;
  if ( *(_QWORD *)(IsNeedDeckPosReset + 24) )
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    followerInfo = *(FollowerInfo_o **)(IsNeedDeckPosReset + 24);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    v107 = *(_DWORD *)(IsNeedDeckPosReset + 32);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    v108 = *(_DWORD *)(IsNeedDeckPosReset + 36);
  }
  else
  {
    v108 = followerDeckId;
    v107 = followerClassId;
  }
  v106 = v36;
  v110 = deck;
  IsNeedDeckPosReset = (__int64)UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  if ( !IsNeedDeckPosReset )
    goto LABEL_121;
  v44 = *(_QWORD *)(IsNeedDeckPosReset + 24);
  v45 = IsNeedDeckPosReset;
  if ( (int)v44 >= 1 )
  {
    v46 = 0LL;
    v47 = 0LL;
    v48 = IsNeedDeckPosReset + 32;
    do
    {
      if ( v47 >= (unsigned int)v44 )
LABEL_125:
        sub_1B4D1F4(IsNeedDeckPosReset, v31);
      v49 = v47 + 1;
      if ( servantNumMax < (int)v47 + 1 && *(_QWORD *)(v48 + 8 * v47) )
      {
        *isBaseModify = 1;
        if ( v47 >= *(unsigned int *)(v45 + 24) )
          goto LABEL_125;
        *(_QWORD *)(v48 + 8 * v47) = 0LL;
        sub_1B4CF34((CGThumbnailListItem_o *)(v48 + v46), 0, v42, v43);
      }
      LODWORD(v44) = *(_DWORD *)(v45 + 24);
      v46 += 8LL;
      v47 = v49;
    }
    while ( v49 < (int)v44 );
  }
  v50 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v50 = BalanceConfig_TypeInfo;
  }
  v51 = (struct PartyOrganizationListViewItem_array *)sub_1B4D038(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v50->static_fields->DeckMemberMax);
  this->fields.memberList = v51;
  p_memberList = &this->fields.memberList;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v51, v53, v54);
  this->fields.cost = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNeedDeckPosReset = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || !IsNeedDeckPosReset )
LABEL_121:
    sub_1B4D1EC(IsNeedDeckPosReset, v31);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)IsNeedDeckPosReset,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0LL);
  v56 = 0LL;
  v104 = v37 - 1;
  v105 = FollowerIndex - 1;
  while ( 1 )
  {
    IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (int)v56 >= *(_DWORD *)(*(_QWORD *)(IsNeedDeckPosReset + 184) + 156LL) )
      break;
    if ( v109 )
    {
      v57 = v110->fields.deckInfo;
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
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v106, v56, v55);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      p_initPos = (int32_t *)(IsNeedDeckPosReset + 336);
    }
    initPos = *p_initPos;
    followera = 0LL;
    followerClassIda = 0;
    IsNeedDeckPosReset = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41066216(questRestrictionInfo, initPos, 0LL);
    v63 = IsNeedDeckPosReset;
    v64 = 0;
    if ( (IsNeedDeckPosReset & 1) != 0 )
    {
      v65 = v110->fields.deckInfo;
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
      if ( v104 != (_DWORD)v56 )
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
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    IsNeedDeckPosReset = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                                    (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
                                    initPos,
                                    0LL);
    if ( !IsNeedDeckPosReset || ((v63 ^ 1) & 1) != 0 )
    {
      if ( v105 == (_DWORD)v56 || v64 )
      {
        v78 = followera;
        v79 = *p_memberList;
        if ( followera )
        {
          v80 = followerClassIda;
          v74 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32260152(
            v74,
            v56,
            v78,
            v80,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v108,
            initPos,
            0LL);
LABEL_106:
          if ( !v79 )
            goto LABEL_121;
        }
        else
        {
          v96 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
          v74 = v96;
          if ( followerInfo )
          {
            PartyOrganizationListViewItem___ctor_32260152(
              v96,
              v56,
              followerInfo,
              v107,
              setupInfo,
              questRestrictionInfo,
              friendPointCampaignEntityList,
              0,
              v108,
              initPos,
              0LL);
            goto LABEL_106;
          }
          PartyOrganizationListViewItem___ctor_32262724(v96, v56, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
          if ( !v79 )
            goto LABEL_121;
        }
        if ( v74 )
        {
          IsNeedDeckPosReset = sub_1B4D0CC(v74, v79->obj.klass->_1.element_class);
          if ( !IsNeedDeckPosReset )
            goto LABEL_126;
        }
        if ( (unsigned int)v56 >= v79->max_length )
          goto LABEL_125;
        v77 = &v79->obj.klass + (int)v56;
        goto LABEL_116;
      }
      v81 = v56;
      if ( (v63 & 1) != 0 )
      {
        if ( (unsigned int)v56 >= *(_DWORD *)(v45 + 24) )
          goto LABEL_125;
        v82 = v45 + 8LL * (int)v56;
        v85 = *(_QWORD *)(v82 + 32);
        v84 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v82 + 32);
        v83 = v85;
        v81 = (int)v56;
        if ( v85 )
        {
          v87 = *(_QWORD *)(v83 + 80);
          v86 = *(_QWORD *)(v83 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v113.fields.currentCryptoKey = v87;
          *(_QWORD *)&v113.fields.fakeValue = v86;
          IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v113, 0LL);
          if ( (unsigned int)v56 >= *(_DWORD *)(v45 + 24) )
            goto LABEL_125;
          if ( !*v84 )
            goto LABEL_121;
          v88 = IsNeedDeckPosReset;
          IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572((*v84)[6], 0LL);
          if ( (unsigned int)v56 >= *(_DWORD *)(v45 + 24) )
            goto LABEL_125;
          v89 = IsNeedDeckPosReset;
          IsNeedDeckPosReset = (__int64)*v84;
          if ( !*v84 )
            goto LABEL_121;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)IsNeedDeckPosReset, 0, 0LL);
          IsNeedDeckPosReset = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                 questRestrictionInfo,
                                 v88,
                                 v89,
                                 DispLimitCount,
                                 initPos,
                                 0,
                                 0LL);
          if ( (IsNeedDeckPosReset & 1) != 0 )
          {
            if ( (unsigned int)v56 >= *(_DWORD *)(v45 + 24) )
              goto LABEL_125;
            *v84 = 0LL;
            sub_1B4CF34((CGThumbnailListItem_o *)v84, 0, v91, v92);
          }
        }
      }
      if ( (unsigned int)v56 >= *(_DWORD *)(v45 + 24) )
        goto LABEL_125;
      v93 = *(UserServantEntity_o **)(v45 + 8 * v81 + 32);
      v94 = *p_memberList;
      if ( v93 )
      {
        EquipList = UserEventDeckEntity__GetEquipList(v110, v56, 0LL);
        v74 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32251956(
          v74,
          v56,
          v93,
          EquipList,
          setupInfo,
          questRestrictionInfo,
          0LL,
          initPos,
          0LL,
          0,
          0LL);
        if ( !v94 )
          goto LABEL_121;
      }
      else
      {
        v74 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32262724(v74, v56, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v94 )
          goto LABEL_121;
      }
      if ( v74 )
      {
        IsNeedDeckPosReset = sub_1B4D0CC(v74, v94->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
        {
LABEL_126:
          v100 = sub_1B4D210();
          sub_1B4D0B8(v100, 0LL);
        }
      }
      if ( (unsigned int)v56 >= v94->max_length )
        goto LABEL_125;
      v77 = &v94->obj.klass + v81;
    }
    else
    {
      v69 = (FollowerInfo_o *)IsNeedDeckPosReset;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)IsNeedDeckPosReset, 0LL) )
        v70 = 0;
      else
        v70 = v107;
      IsNpc = FollowerInfo__get_IsNpc(v69, 0LL);
      v72 = *p_memberList;
      if ( IsNpc )
        v73 = 0;
      else
        v73 = v108;
      v74 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32260152(
        v74,
        v56,
        v69,
        v70,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v73,
        initPos,
        0LL);
      if ( !v72 )
        goto LABEL_121;
      if ( v74 )
      {
        IsNeedDeckPosReset = sub_1B4D0CC(v74, v72->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
          goto LABEL_126;
      }
      if ( (unsigned int)v56 >= v72->max_length )
        goto LABEL_125;
      v77 = &v72->obj.klass + (int)v56;
    }
LABEL_116:
    v77[4] = (Il2CppClass *)v74;
    sub_1B4CF34((CGThumbnailListItem_o *)(v77 + 4), (int32_t)v74, v75, v76);
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
  PartyListViewItem__CheckRestriction(this, v31);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v99) )
    *isBaseModify = 1;
}


void __fastcall PartyListViewItem___ctor_32112296(
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
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  __int64 Instance; // x0
  FollowerInfo_o *v59; // x1
  const MethodInfo *v60; // x2
  UserEventDeckEntity_o *v61; // x21
  struct DeckServant_o *deckInfo; // x8
  System_Int64_array *NpcServantFollowerIds; // x29
  FollowerInfo_o *v64; // x24
  PartyListViewItem_o *v65; // x22
  int v66; // w25
  const MethodInfo *v67; // x2
  int32_t v68; // w21
  int32_t DeckMemberMax; // w25
  FollowerInfo_array *QuestFollowerList; // x28
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  int max_length; // w8
  unsigned int v74; // w19
  struct System_Object_array *items; // x8
  _QWORD *v76; // x9
  __int64 size; // x10
  Il2CppClass **v78; // x0
  int32_t v79; // w22
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v81; // w9
  int v82; // w10
  QuestRestrictionInfo_SlotInfo_o *v83; // x11
  struct DeckServant_o *v84; // x8
  __int64 v85; // x29
  int v86; // w24
  int v87; // w28
  struct DeckServantData_array *svts; // x8
  PartyListViewItem___c__DisplayClass28_0_o *v89; // x19
  struct DeckServant_o *v90; // x8
  struct DeckServantData_array *v91; // x8
  DeckServantData_o *v92; // x8
  int64_t userSvtId; // x21
  System_Func_object__bool__o *v94; // x21
  BalanceConfig_c *v95; // x0
  _BOOL8 v96; // x0
  __int64 v97; // x1
  const MethodInfo *v98; // x2
  Il2CppClass *klass; // x21
  int v100; // w8
  Il2CppClass **v101; // x8
  __int64 NpcDeployIdx; // x0
  __int64 v103; // x1
  BalanceConfig_c *v104; // x0
  const MethodInfo *v105; // x2
  const MethodInfo *v106; // x3
  int32_t i; // w19
  struct DeckServant_o *v108; // x8
  struct DeckServantData_array *v109; // x8
  DeckServantData_o *v110; // x8
  int32_t UserServantDeployIndex; // w0
  il2cpp_array_size_t v112; // w21
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  __int64 v115; // x22
  Il2CppClass **v116; // x0
  BalanceConfig_c *v117; // x0
  struct PartyOrganizationListViewItem_array *v118; // x0
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  unsigned __int64 v121; // x24
  EventUpValSetupInfo_o *v122; // x23
  __int64 j; // x28
  BalanceConfig_c *v124; // x0
  PartyListViewItem___c__DisplayClass28_1_o *v125; // x25
  const MethodInfo *v126; // x2
  struct DeckServant_o *v127; // x8
  struct DeckServantData_array *v128; // x8
  DeckServantData_o *v129; // x8
  int32_t *p_initPos; // x8
  int32_t v131; // w19
  unsigned int *v132; // x21
  PartyOrganizationListViewItem_o *v133; // x25
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  const MethodInfo *v136; // x6
  bool v137; // w21
  int64_t v138; // x4
  bool v139; // w22
  FollowerInfo_o *v140; // x29
  int32_t v141; // w22
  bool IsNpc; // w0
  unsigned int *v143; // x23
  int32_t v144; // w21
  PartyOrganizationListViewItem_o *v145; // x25
  unsigned int *v146; // x19
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  unsigned __int64 v149; // x8
  FollowerInfo_o *v150; // x22
  unsigned int *v151; // x21
  EventUpValSetupInfo_o *v152; // x23
  int32_t v153; // w26
  PartyOrganizationListViewItem_o *v154; // x0
  int32_t v155; // w3
  PartyOrganizationListViewItem_o *v156; // x0
  System_Func_object__bool__o *v157; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v158; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v159; // x22
  FollowerInfo_o *v160; // x29
  unsigned int *v161; // x25
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v163; // x8
  int32_t classId; // w22
  PartyOrganizationListViewItem_o *v165; // x21
  System_Collections_Generic_List_object__o *v166; // x21
  int32_t v167; // w25
  PartyOrganizationListViewItem_o *v168; // x21
  int32_t v169; // w25
  UserServantEntity_o *v170; // x8
  __int64 v171; // x22
  __int64 v172; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v173; // x8
  int32_t v174; // w22
  int32_t v175; // w25
  int32_t DispLimitCount; // w0
  int32_t v177; // w2
  const MethodInfo *v178; // x3
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  unsigned int *v181; // x21
  __int64 v182; // x8
  FollowerInfo_o *v183; // x22
  __int64 v184; // x8
  PartyListViewItem_o *v185; // x21
  UserServantEntity_o *v186; // x22
  unsigned int *v187; // x27
  __int64 v188; // x23
  int v189; // w24
  unsigned __int64 v190; // x29
  UserServantEntity_o **v191; // x26
  PartyListViewItem___c__DisplayClass28_2_o *v192; // x19
  signed __int64 v193; // x21
  System_Func_object__bool__o *v194; // x22
  int32_t v195; // w2
  const MethodInfo *v196; // x3
  unsigned __int64 v197; // x8
  EventUpValSetupInfo_o *v198; // x26
  unsigned __int64 v199; // x21
  signed __int64 v200; // x28
  __int64 v201; // x23
  unsigned __int64 k; // x24
  BalanceConfig_c *v203; // x0
  PartyListViewItem___c__DisplayClass28_3_o *v204; // x29
  const MethodInfo *v205; // x2
  struct DeckServant_o *v206; // x8
  struct DeckServantData_array *v207; // x8
  __int64 v208; // x8
  int32_t *v209; // x8
  int32_t v210; // w19
  unsigned int *v211; // x21
  PartyOrganizationListViewItem_o *v212; // x25
  int32_t v213; // w2
  const MethodInfo *v214; // x3
  const MethodInfo *v215; // x6
  int v216; // w25
  struct DeckServant_o *v217; // x8
  struct DeckServantData_array *v218; // x8
  __int64 v219; // x8
  int64_t v220; // x4
  int32_t chkIdx; // w8
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v223; // x22
  int32_t v224; // w29
  bool v225; // w0
  unsigned int *v226; // x21
  int32_t v227; // w26
  PartyOrganizationListViewItem_o *v228; // x25
  int32_t v229; // w2
  const MethodInfo *v230; // x3
  struct PartyOrganizationListViewItem_array *v231; // x8
  struct DeckServant_o *v232; // x9
  struct DeckServantData_array *v233; // x9
  __int64 v234; // x9
  __int64 v235; // x8
  FollowerInfo_o *v236; // x22
  unsigned int *v237; // x29
  int32_t v238; // w29
  PartyOrganizationListViewItem_o *v239; // x0
  int32_t v240; // w3
  PartyOrganizationListViewItem_o *v241; // x25
  int32_t v242; // w2
  const MethodInfo *v243; // x3
  PartyOrganizationListViewItem_o *v244; // x0
  System_Func_object__bool__o *v245; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v246; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v247; // x22
  UserServantEntity_array *v248; // x21
  __int64 v249; // x8
  __int64 v250; // x22
  __int64 v251; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v252; // x8
  int32_t v253; // w22
  int32_t v254; // w25
  int32_t v255; // w0
  int32_t v256; // w2
  const MethodInfo *v257; // x3
  struct PartyOrganizationListViewItem_array *v258; // x8
  struct DeckServant_o *v259; // x9
  struct DeckServantData_array *v260; // x9
  __int64 v261; // x9
  __int64 v262; // x8
  FollowerInfo_o *v263; // x25
  unsigned int *v264; // x26
  __int64 v265; // x8
  __int64 v266; // x8
  int32_t v267; // w22
  PartyOrganizationListViewItem_o *v268; // x29
  int32_t v269; // w2
  const MethodInfo *v270; // x3
  UserServantEntity_o *v271; // x22
  unsigned int *v272; // x26
  System_Int64_array *v273; // x29
  PartyOrganizationListViewItem_o *v274; // x25
  int32_t v275; // w2
  const MethodInfo *v276; // x3
  PartyOrganizationListViewItem_o *v277; // x22
  int32_t v278; // w2
  const MethodInfo *v279; // x3
  struct PartyOrganizationListViewItem_array *v280; // x8
  int32_t v281; // w19
  const MethodInfo *v282; // x1
  __int64 v283; // x0
  int32_t followerDeckIda; // [xsp+0h] [xbp-190h]
  int32_t initPos; // [xsp+8h] [xbp-188h]
  unsigned int *v286; // [xsp+28h] [xbp-168h]
  UserServantEntity_o **isFixNpc; // [xsp+30h] [xbp-160h]
  char isFixNpca; // [xsp+30h] [xbp-160h]
  int v289; // [xsp+3Ch] [xbp-154h]
  _BOOL4 v290; // [xsp+3Ch] [xbp-154h]
  int32_t v291; // [xsp+40h] [xbp-150h]
  int32_t v292; // [xsp+40h] [xbp-150h]
  System_Int64_array *EquipList; // [xsp+40h] [xbp-150h]
  bool v294; // [xsp+40h] [xbp-150h]
  int v296; // [xsp+54h] [xbp-13Ch]
  int32_t v297; // [xsp+60h] [xbp-130h]
  int32_t v298; // [xsp+64h] [xbp-12Ch]
  int v299; // [xsp+68h] [xbp-128h]
  int32_t FollowerIndex; // [xsp+74h] [xbp-11Ch]
  FollowerInfo_o *v301; // [xsp+78h] [xbp-118h]
  EventUpValSetupInfo_o *setupInfoa; // [xsp+80h] [xbp-110h]
  EventUpValSetupInfo_o *setupInfob; // [xsp+80h] [xbp-110h]
  PartyListViewItem_o *v304; // [xsp+88h] [xbp-108h]
  System_Int64_array *v305; // [xsp+90h] [xbp-100h]
  System_Int64_array *v306; // [xsp+90h] [xbp-100h]
  int v307; // [xsp+90h] [xbp-100h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+98h] [xbp-F8h]
  QuestRestrictionInfo_o *v309; // [xsp+A0h] [xbp-F0h]
  QuestRestrictionInfo_o *m_Items; // [xsp+A0h] [xbp-F0h]
  PartyListViewItem_o *v311; // [xsp+A8h] [xbp-E8h]
  System_Collections_Generic_List_object__o *v312; // [xsp+B0h] [xbp-E0h]
  UserServantEntity_array *userServantList; // [xsp+B8h] [xbp-D8h]
  _BOOL4 v314; // [xsp+C4h] [xbp-CCh]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+C8h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_object__o v317; // [xsp+D8h] [xbp-B8h] BYREF
  int32_t v318; // [xsp+F4h] [xbp-9Ch] BYREF
  FollowerInfo_o *v319; // [xsp+F8h] [xbp-98h] BYREF
  int32_t followerClassIda; // [xsp+104h] [xbp-8Ch] BYREF
  FollowerInfo_o *followera; // [xsp+108h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v322; // [xsp+110h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v323; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v324; // 0:x0.16

  if ( (byte_49B6970 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, isBaseModify);
    sub_1B4CF90(&Method_BasicHelper_Any_FollowerInfo___, v20);
    sub_1B4CF90(&Method_DataManager_GetMaster_NpcFollowerMaster___, v21);
    sub_1B4CF90(&DataManager_TypeInfo, v22);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_FollowerInfo___, v23);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Count_FollowerInfo___, v24);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ElementAt_FollowerInfo___, v25);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___, v26);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_FollowerInfo___, v27);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__, v28);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__, v29);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__get_Current__, v30);
    sub_1B4CF90(&FollowerInfo___TypeInfo, v31);
    sub_1B4CF90(&System_Func_FollowerInfo__bool__TypeInfo, v32);
    sub_1B4CF90(&long___TypeInfo, v33);
    sub_1B4CF90(&Method_System_Collections_Generic_List_FollowerInfo__Add__, v34);
    sub_1B4CF90(&Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__, v35);
    sub_1B4CF90(&Method_System_Collections_Generic_List_FollowerInfo___ctor__, v36);
    sub_1B4CF90(&Method_System_Collections_Generic_List_FollowerInfo__get_Count__, v37);
    sub_1B4CF90(&Method_System_Collections_Generic_List_FollowerInfo__get_Item__, v38);
    sub_1B4CF90(&System_Collections_Generic_List_FollowerInfo__TypeInfo, v39);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40);
    sub_1B4CF90(&PartyOrganizationListViewItem___TypeInfo, v41);
    sub_1B4CF90(&PartyOrganizationListViewItem_TypeInfo, v42);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v43);
    sub_1B4CF90(&Method_PartyListViewItem___c__DisplayClass28_0___ctor_b__0__, v44);
    sub_1B4CF90(&PartyListViewItem___c__DisplayClass28_0_TypeInfo, v45);
    sub_1B4CF90(&Method_PartyListViewItem___c__DisplayClass28_1___ctor_b__1__, v46);
    sub_1B4CF90(&PartyListViewItem___c__DisplayClass28_1_TypeInfo, v47);
    sub_1B4CF90(&Method_PartyListViewItem___c__DisplayClass28_2___ctor_b__2__, v48);
    sub_1B4CF90(&PartyListViewItem___c__DisplayClass28_2_TypeInfo, v49);
    sub_1B4CF90(&Method_PartyListViewItem___c__DisplayClass28_3___ctor_b__3__, v50);
    sub_1B4CF90(&PartyListViewItem___c__DisplayClass28_3_TypeInfo, v51);
    sub_1B4CF90(&UserServantEntity___TypeInfo, v52);
    byte_49B6970 = 1;
  }
  memset(&v322, 0, sizeof(v322));
  followera = 0LL;
  followerClassIda = 0;
  v319 = 0LL;
  v318 = 0;
  ListViewItem___ctor_41325876((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v53, v54);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v56, v57);
  v61 = deck;
  if ( !deck )
    goto LABEL_75;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_75;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v60) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_75;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0LL);
    v61 = deck;
  }
  NpcServantFollowerIds = UserEventDeckEntity__GetNpcServantFollowerIds(v61, 0LL);
  userServantList = UserEventDeckEntity__GetUserServantList(v61, 0, 0, 0LL);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  v64 = follower;
  if ( *(int *)(Instance + 48) < 1 )
  {
    v65 = 0LL;
    v66 = 0;
    v314 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v65 = *(PartyListViewItem_o **)(Instance + 72);
    v66 = 0;
    v314 = v65 == 0LL;
    if ( follower && v65 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      v66 = *(_DWORD *)(Instance + 48);
      Instance = (__int64)PartyListViewItem__GetMember(v65, v66 - 1, v67);
      if ( !Instance )
        goto LABEL_75;
      v68 = *(_DWORD *)(Instance + 336);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v68, follower, 0LL);
      v314 = 0;
    }
  }
  Instance = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  v296 = v66;
  if ( !questRestrictionInfo )
    goto LABEL_75;
  DeckMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMemberMax;
  if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0LL) )
    DeckMemberMax = questRestrictionInfo->fields.servantNumMax;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo
    || !Instance
    || (QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                              (NpcFollowerMaster_o *)Instance,
                              (*p_questRestrictionInfo)->fields.questId,
                              (*p_questRestrictionInfo)->fields.questPhase,
                              0LL),
        v312 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_FollowerInfo__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v312,
          (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_FollowerInfo___ctor__),
        !QuestFollowerList) )
  {
LABEL_75:
    sub_1B4D1EC(Instance, v59);
  }
  max_length = QuestFollowerList->max_length;
  if ( max_length >= 1 )
  {
    v74 = 0;
    while ( v74 < max_length )
    {
      v59 = QuestFollowerList->m_Items[v74];
      if ( !v59 )
        goto LABEL_75;
      if ( !v59->fields.isMySvtOrNpc
        && (questRestrictionInfo->fields.isNotTransitionSupportList
         || !questRestrictionInfo->fields.isNpcMultipleBattle
         || v59->fields.isFixedNpc) )
      {
        if ( !v312 )
          goto LABEL_75;
        items = v312->fields._items;
        v76 = Method_System_Collections_Generic_List_FollowerInfo__Add__;
        ++v312->fields._version;
        if ( !items )
          goto LABEL_75;
        size = v312->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v312,
            (Il2CppObject *)v59,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
        }
        else
        {
          v78 = &items->obj.klass + size;
          v312->fields._size = size + 1;
          v78[4] = (Il2CppClass *)v59;
          sub_1B4CF34((CGThumbnailListItem_o *)(v78 + 4), (int32_t)v59, v71, v72);
        }
      }
      max_length = QuestFollowerList->max_length;
      if ( (int)++v74 >= max_length )
        goto LABEL_44;
    }
LABEL_411:
    sub_1B4D1F4(Instance, v59);
  }
LABEL_44:
  FollowerIndex = PartyListViewItem__GetFollowerIndex(
                    this,
                    deck,
                    (System_Collections_Generic_List_FollowerInfo__o *)v312,
                    v72);
  setupInfoa = setupInfo;
  v304 = this;
  v309 = questRestrictionInfo;
  v311 = v65;
  npcFollowerInfoList = QuestFollowerList;
  if ( isNew || !questRestrictionInfo->fields.isNpcEditablePos )
    goto LABEL_117;
  Instance = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !v312 )
      goto LABEL_75;
    v79 = v312->fields._size;
  }
  else
  {
    slotInfos = questRestrictionInfo->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_75;
    v81 = slotInfos->max_length;
    if ( v81 >= 1 )
    {
      v79 = 0;
      v82 = 0;
      while ( v81 != v82 )
      {
        v83 = slotInfos->m_Items[v82];
        if ( !v83 )
          goto LABEL_75;
        if ( v83->fields.slotType == 1 )
          v79 += v83->fields.isMoved;
        if ( v81 == ++v82 )
          goto LABEL_59;
      }
      goto LABEL_411;
    }
    v79 = 0;
  }
LABEL_59:
  v305 = NpcServantFollowerIds;
  v84 = deck->fields.deckInfo;
  if ( !v84 )
    goto LABEL_75;
  v85 = 0LL;
  v86 = 0;
  v87 = 0;
  while ( 1 )
  {
    svts = v84->fields.svts;
    if ( !svts )
      goto LABEL_75;
    if ( (int)v85 >= (signed int)svts->max_length )
      break;
    v89 = (PartyListViewItem___c__DisplayClass28_0_o *)sub_1B4D1DC(PartyListViewItem___c__DisplayClass28_0_TypeInfo);
    PartyListViewItem___c__DisplayClass28_0___ctor(v89, 0LL);
    v90 = deck->fields.deckInfo;
    if ( !v90 )
      goto LABEL_75;
    v91 = v90->fields.svts;
    if ( !v91 )
      goto LABEL_75;
    if ( (unsigned int)v85 >= v91->max_length )
      goto LABEL_411;
    v92 = v91->m_Items[v85];
    if ( v92 && v89 )
    {
      userSvtId = v92->fields.userSvtId;
      v89->fields.npcSvtId = v92->fields.npcFollowerSvtId;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41066216(
                   questRestrictionInfo,
                   v92->fields.initPos,
                   0LL);
      if ( (int)v85 >= DeckMemberMax && (userSvtId || v89->fields.npcSvtId) )
        v86 = 1;
      if ( !(Instance & 1 | (v89->fields.npcSvtId == 0)) )
      {
        v94 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v94,
          (Il2CppObject *)v89,
          Method_PartyListViewItem___c__DisplayClass28_0___ctor_b__0__,
          0LL);
        Instance = BasicHelper__Any_object_(
                     (System_Collections_Generic_List_T__o *)v312,
                     (System_Func_T__bool__o *)v94,
                     (const MethodInfo_2EEC494 *)Method_BasicHelper_Any_FollowerInfo___);
        v87 += Instance & 1;
      }
      ++v85;
      v84 = deck->fields.deckInfo;
      if ( v84 )
        continue;
    }
    goto LABEL_75;
  }
  if ( ((v87 == v79) & (v86 ^ 1)) != 0 )
  {
    v64 = follower;
    v65 = v311;
    NpcServantFollowerIds = v305;
    goto LABEL_117;
  }
  v95 = BalanceConfig_TypeInfo;
  v64 = follower;
  v65 = v311;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v95 = BalanceConfig_TypeInfo;
  }
  NpcServantFollowerIds = (System_Int64_array *)sub_1B4D038(
                                                  long___TypeInfo,
                                                  (unsigned int)v95->static_fields->DeckMemberMax);
  Instance = (__int64)v312;
  if ( !v312 )
    goto LABEL_75;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v317,
    v312,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
  v322 = v317;
  while ( 1 )
  {
    v96 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v322,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    if ( !v96 )
      break;
    if ( !v322.fields._current )
      sub_1B4D1EC(v96, v97);
    klass = v322.fields._current[5].klass;
    if ( klass )
    {
      v100 = LODWORD(v322.fields._current[5].monitor) - 1;
      if ( v100 >= 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_1B4D1EC(v96, v97);
        if ( v100 >= NpcServantFollowerIds->max_length )
          sub_1B4D1F4(v96, v97);
        v101 = &NpcServantFollowerIds->obj.klass + (unsigned int)v100;
        goto LABEL_92;
      }
      NpcDeployIdx = PartyListViewItem__GetNpcDeployIdx(this, NpcServantFollowerIds, v98);
      if ( (NpcDeployIdx & 0x80000000) == 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_1B4D1EC(NpcDeployIdx, v103);
        if ( (unsigned int)NpcDeployIdx >= NpcServantFollowerIds->max_length )
          sub_1B4D1F4(NpcDeployIdx, v103);
        v101 = &NpcServantFollowerIds->obj.klass + (unsigned int)NpcDeployIdx;
LABEL_92:
        v101[4] = klass;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v322,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
  v104 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v104 = BalanceConfig_TypeInfo;
  }
  userServantList = (UserServantEntity_array *)sub_1B4D038(
                                                 UserServantEntity___TypeInfo,
                                                 (unsigned int)v104->static_fields->DeckMemberMax);
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
    v108 = deck->fields.deckInfo;
    if ( !v108 )
      goto LABEL_75;
    v109 = v108->fields.svts;
    if ( !v109 )
      goto LABEL_75;
    if ( i >= v109->max_length )
      goto LABEL_411;
    v110 = v109->m_Items[i];
    if ( !v110 )
      goto LABEL_75;
    if ( v110->fields.userSvtId )
    {
      UserServantDeployIndex = PartyListViewItem__GetUserServantDeployIndex(
                                 (PartyListViewItem_o *)Instance,
                                 userServantList,
                                 NpcServantFollowerIds,
                                 v106);
      if ( (UserServantDeployIndex & 0x80000000) == 0 )
      {
        v112 = UserServantDeployIndex;
        if ( UserServantDeployIndex < DeckMemberMax )
        {
          Instance = (__int64)UserEventDeckEntity__GetUserServant(deck, i, 0LL);
          if ( !userServantList )
            goto LABEL_75;
          v115 = Instance;
          if ( Instance )
          {
            Instance = sub_1B4D0CC(Instance, userServantList->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_412:
              v283 = sub_1B4D210();
              sub_1B4D0B8(v283, 0LL);
            }
          }
          if ( v112 >= userServantList->max_length )
            goto LABEL_411;
          v116 = &userServantList->obj.klass + v112;
          v116[4] = (Il2CppClass *)v115;
          sub_1B4CF34((CGThumbnailListItem_o *)(v116 + 4), v115, v113, v114);
          questRestrictionInfo = v309;
          v65 = v311;
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
                      (System_Collections_Generic_List_FollowerInfo__o *)v312,
                      v105);
  }
LABEL_117:
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      v64 = *(FollowerInfo_o **)(Instance + 24);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        v297 = *(_DWORD *)(Instance + 32);
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          v298 = *(_DWORD *)(Instance + 36);
          goto LABEL_124;
        }
      }
    }
    goto LABEL_75;
  }
  v297 = followerClassId;
  v298 = followerDeckId;
LABEL_124:
  v117 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v117 = BalanceConfig_TypeInfo;
  }
  v118 = (struct PartyOrganizationListViewItem_array *)sub_1B4D038(
                                                         PartyOrganizationListViewItem___TypeInfo,
                                                         (unsigned int)v117->static_fields->DeckMemberMax);
  this->fields.memberList = v118;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v118, v119, v120);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  v301 = v64;
  if ( !isNew && questRestrictionInfo->fields.isNpcEditablePos )
  {
    m_Items = (QuestRestrictionInfo_o *)NpcServantFollowerIds->m_Items;
    v121 = 0LL;
    v122 = (EventUpValSetupInfo_o *)DeckMemberMax;
    isFixNpc = userServantList->m_Items;
    v289 = -1;
    while ( 1 )
    {
      for ( j = 8 * v121; ; j += 8LL )
      {
        v124 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v124 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v121 >= v124->static_fields->DeckMemberMax )
          goto LABEL_406;
        v125 = (PartyListViewItem___c__DisplayClass28_1_o *)sub_1B4D1DC(PartyListViewItem___c__DisplayClass28_1_TypeInfo);
        PartyListViewItem___c__DisplayClass28_1___ctor(v125, 0LL);
        if ( v314 )
        {
          v127 = deck->fields.deckInfo;
          if ( !v127 )
            goto LABEL_75;
          v128 = v127->fields.svts;
          if ( !v128 )
            goto LABEL_75;
          if ( v121 >= v128->max_length )
            goto LABEL_411;
          v129 = v128->m_Items[v121];
          if ( !v129 )
            goto LABEL_75;
          p_initPos = &v129->fields.initPos;
        }
        else
        {
          Instance = (__int64)PartyListViewItem__GetMember(v65, v121, v126);
          if ( !Instance )
            goto LABEL_75;
          p_initPos = (int32_t *)(Instance + 336);
        }
        v131 = *p_initPos;
        if ( (__int64)v121 < (__int64)v122 )
          break;
        v132 = (unsigned int *)*p_memberList;
        v133 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32262724(v133, v121, 0, setupInfo, questRestrictionInfo, 1, v131, 0LL);
        if ( !v132 )
          goto LABEL_75;
        if ( v133 )
        {
          Instance = sub_1B4D0CC(v133, *(_QWORD *)(*(_QWORD *)v132 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        if ( v121 >= v132[6] )
          goto LABEL_411;
        *(_QWORD *)&v132[2 * v121 + 8] = v133;
        sub_1B4CF34((CGThumbnailListItem_o *)&v132[(unsigned __int64)j / 4 + 8], (int32_t)v133, v134, v135);
        ++v121;
      }
      if ( !v125 )
        goto LABEL_75;
      v125->fields.chkIdx = v121 + 1;
      followera = 0LL;
      followerClassIda = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41066216(questRestrictionInfo, v131, 0LL);
      v137 = 0;
      v291 = Instance;
      if ( (Instance & 1) != 0 )
      {
        if ( !NpcServantFollowerIds )
          goto LABEL_75;
        if ( v121 >= NpcServantFollowerIds->max_length )
          goto LABEL_411;
        v138 = *((_QWORD *)&m_Items->klass + v121);
        v137 = v138 >= 1
            && v125->fields.chkIdx != v296
            && PartyListViewItem__SetNpcFollowerInfo(
                 this,
                 &followera,
                 &followerClassIda,
                 npcFollowerInfoList,
                 v138,
                 v131,
                 v136);
      }
      setupInfob = v122;
      v139 = !QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL)
          && QuestRestrictionInfo__IsPositionFixNpc(questRestrictionInfo, v131, 0LL);
      v306 = NpcServantFollowerIds;
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                            (PartyOrganizationUtility_o *)Instance,
                            v131,
                            0LL);
      if ( !Instance || ((v291 ^ 1) & 1) != 0 )
      {
        if ( v137 || v125->fields.chkIdx == FollowerIndex )
        {
          v150 = followera;
          v151 = (unsigned int *)*p_memberList;
          if ( !followera )
          {
            v156 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
            v145 = v156;
            if ( v301 )
              PartyOrganizationListViewItem___ctor_32260152(
                v156,
                v121,
                v301,
                v297,
                setupInfo,
                questRestrictionInfo,
                0LL,
                0,
                v298,
                v131,
                0LL);
            else
              PartyOrganizationListViewItem___ctor_32262724(
                v156,
                v121,
                1,
                setupInfo,
                questRestrictionInfo,
                1,
                v131,
                0LL);
            v65 = v311;
            v146 = v151;
            if ( !v151 )
              goto LABEL_75;
            goto LABEL_208;
          }
          v152 = setupInfo;
          v153 = followerClassIda;
          v154 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
          v155 = v153;
          v145 = v154;
          setupInfo = v152;
          PartyOrganizationListViewItem___ctor_32260152(
            v154,
            v121,
            v150,
            v155,
            v152,
            questRestrictionInfo,
            0LL,
            0,
            v298,
            v131,
            0LL);
          v122 = setupInfob;
          if ( !v151 )
            goto LABEL_75;
          v65 = v311;
          v146 = v151;
          if ( v145 )
          {
            Instance = sub_1B4D0CC(v145, *(_QWORD *)(*(_QWORD *)v151 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          v149 = v151[6];
          this = v304;
        }
        else if ( v139 )
        {
          v157 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_FollowerInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v157,
            (Il2CppObject *)v125,
            Method_PartyListViewItem___c__DisplayClass28_1___ctor_b__1__,
            0LL);
          v158 = System_Linq_Enumerable__Where_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v312,
                   (System_Func_TSource__bool__o *)v157,
                   (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
          v159 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B4D0CC(v158, FollowerInfo___TypeInfo);
          if ( !v159 )
            v159 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                          v158,
                                                                          (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
          if ( System_Linq_Enumerable__Any_object_(
                 v159,
                 (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
          {
            Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                                  v159,
                                  0,
                                  (const MethodInfo_2F2297C *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
            v65 = v311;
            v160 = (FollowerInfo_o *)Instance;
          }
          else
          {
            v65 = v311;
            Instance = (__int64)v312;
            if ( !v312 )
              goto LABEL_75;
            if ( v312->fields._size < 1 )
            {
LABEL_221:
              v161 = (unsigned int *)*p_memberList;
              goto LABEL_236;
            }
            v169 = 0;
            while ( 1 )
            {
              Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v169,
                                    (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
              if ( !Instance || !NpcServantFollowerIds )
                goto LABEL_75;
              if ( v121 >= NpcServantFollowerIds->max_length )
                goto LABEL_411;
              if ( *(_QWORD *)(Instance + 80) != *((_QWORD *)&m_Items->klass + v121) )
              {
                Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                      v312,
                                      v169,
                                      (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
                if ( !Instance )
                  goto LABEL_75;
                if ( v289 < v169 && *(int *)(Instance + 88) <= 0 )
                  break;
              }
              Instance = (__int64)v312;
              if ( ++v169 >= v312->fields._size )
                goto LABEL_221;
            }
            Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                  v312,
                                  v169,
                                  (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
            v160 = (FollowerInfo_o *)Instance;
            v289 = v169;
          }
          v161 = (unsigned int *)*p_memberList;
          if ( !v160 )
          {
            NpcServantFollowerIds = v306;
LABEL_236:
            v168 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_32262724(v168, v121, 0, setupInfo, questRestrictionInfo, 0, v131, 0LL);
            if ( !v161 )
              goto LABEL_75;
            goto LABEL_237;
          }
          userSvtLeaderHash = v160->fields.userSvtLeaderHash;
          if ( !userSvtLeaderHash )
            goto LABEL_75;
          if ( !userSvtLeaderHash->max_length )
            goto LABEL_411;
          v163 = userSvtLeaderHash->m_Items[0];
          if ( !v163 )
            goto LABEL_75;
          classId = v163->fields.classId;
          v165 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32260152(
            v165,
            v121,
            v160,
            classId,
            setupInfo,
            questRestrictionInfo,
            0LL,
            1,
            v298,
            v131,
            0LL);
          if ( !v161 )
            goto LABEL_75;
          v65 = v311;
          NpcServantFollowerIds = v306;
          v146 = v161;
          v145 = v165;
          if ( v165 )
          {
            Instance = sub_1B4D0CC(v165, *(_QWORD *)(*(_QWORD *)v146 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          v149 = v146[6];
        }
        else
        {
          if ( !NpcServantFollowerIds )
            goto LABEL_75;
          v65 = v311;
          if ( v121 >= NpcServantFollowerIds->max_length )
            goto LABEL_411;
          if ( *((_QWORD *)&m_Items->klass + v121) )
          {
            Instance = System_Linq_Enumerable__Count_object_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v312,
                         (const MethodInfo_2F1F018 *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
            if ( (int)Instance < 1 )
            {
LABEL_203:
              v161 = (unsigned int *)*p_memberList;
            }
            else
            {
              if ( !v312 )
                goto LABEL_75;
              v166 = v312;
              v167 = 0;
              while ( 1 )
              {
                Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                      v166,
                                      v167,
                                      (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
                if ( !Instance )
                  goto LABEL_75;
                if ( v121 >= NpcServantFollowerIds->max_length )
                  goto LABEL_411;
                if ( *(_QWORD *)(Instance + 80) == *((_QWORD *)&m_Items->klass + v121) )
                  break;
                v166 = v312;
                if ( ++v167 >= System_Linq_Enumerable__Count_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)v312,
                                 (const MethodInfo_2F1F018 *)Method_System_Linq_Enumerable_Count_FollowerInfo___) )
                  goto LABEL_203;
              }
              Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                    v312,
                                    v167,
                                    (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
              v181 = (unsigned int *)*p_memberList;
              if ( Instance )
              {
                v182 = *(_QWORD *)(Instance + 40);
                v183 = (FollowerInfo_o *)Instance;
                if ( !v182 )
                  goto LABEL_75;
                if ( !*(_DWORD *)(v182 + 24) )
                  goto LABEL_411;
                v184 = *(_QWORD *)(v182 + 32);
                if ( !v184 )
                  goto LABEL_75;
                v292 = *(_DWORD *)(v184 + 32);
                v145 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
                PartyOrganizationListViewItem___ctor_32260152(
                  v145,
                  v121,
                  v183,
                  v292,
                  setupInfo,
                  questRestrictionInfo,
                  0LL,
                  1,
                  v298,
                  v131,
                  0LL);
                if ( !v181 )
                  goto LABEL_75;
                v65 = v311;
                v146 = v181;
LABEL_208:
                if ( !v145 )
                {
LABEL_239:
                  v149 = v146[6];
                  goto LABEL_240;
                }
LABEL_238:
                Instance = sub_1B4D0CC(v145, *(_QWORD *)(*(_QWORD *)v146 + 64LL));
                if ( !Instance )
                  goto LABEL_412;
                goto LABEL_239;
              }
              v65 = v311;
              v161 = (unsigned int *)*p_memberList;
            }
            v168 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_32262724(v168, v121, 0, setupInfo, questRestrictionInfo, 1, v131, 0LL);
            if ( !v161 )
              goto LABEL_75;
LABEL_237:
            v146 = v161;
            v145 = v168;
            if ( !v168 )
              goto LABEL_239;
            goto LABEL_238;
          }
          if ( (v291 & 1) != 0 )
          {
            if ( !userServantList )
              goto LABEL_75;
            if ( v121 >= userServantList->max_length )
              goto LABEL_411;
            v170 = isFixNpc[v121];
            if ( v170 )
            {
              v172 = *(_QWORD *)&v170->fields.svtId.fields.currentCryptoKey;
              v171 = *(_QWORD *)&v170->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v323.fields.currentCryptoKey = v172;
              *(_QWORD *)&v323.fields.fakeValue = v171;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v323, 0LL);
              if ( v121 >= userServantList->max_length )
                goto LABEL_411;
              v173 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)isFixNpc[v121];
              if ( !v173 )
                goto LABEL_75;
              v174 = Instance;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v173[6], 0LL);
              if ( v121 >= userServantList->max_length )
                goto LABEL_411;
              v175 = Instance;
              Instance = (__int64)isFixNpc[v121];
              if ( !Instance )
                goto LABEL_75;
              DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
              Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                           questRestrictionInfo,
                           v174,
                           v175,
                           DispLimitCount,
                           v131,
                           0,
                           0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( v121 >= userServantList->max_length )
                  goto LABEL_411;
                isFixNpc[v121] = 0LL;
                sub_1B4CF34((CGThumbnailListItem_o *)&isFixNpc[(unsigned __int64)j / 8], 0, v177, v178);
              }
            }
          }
          else if ( !userServantList )
          {
            goto LABEL_75;
          }
          if ( v121 >= userServantList->max_length )
            goto LABEL_411;
          v185 = this;
          v186 = isFixNpc[v121];
          v187 = (unsigned int *)*p_memberList;
          if ( !v186 )
          {
            v145 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_32262724(v145, v121, 0, setupInfo, questRestrictionInfo, 1, v131, 0LL);
            v65 = v311;
            if ( !v187 )
              goto LABEL_75;
            v146 = v187;
            this = v185;
            goto LABEL_208;
          }
          EquipList = UserEventDeckEntity__GetEquipList(deck, v121, 0LL);
          v145 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32251956(
            v145,
            v121,
            v186,
            EquipList,
            setupInfo,
            questRestrictionInfo,
            0LL,
            v131,
            0LL,
            0,
            0LL);
          if ( !v187 )
            goto LABEL_75;
          v65 = v311;
          v146 = v187;
          if ( v145 )
          {
            Instance = sub_1B4D0CC(v145, *(_QWORD *)(*(_QWORD *)v187 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          v149 = v187[6];
          this = v185;
        }
      }
      else
      {
        v140 = (FollowerInfo_o *)Instance;
        if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0LL) )
          v141 = 0;
        else
          v141 = v297;
        IsNpc = FollowerInfo__get_IsNpc(v140, 0LL);
        v143 = (unsigned int *)*p_memberList;
        if ( IsNpc )
          v144 = 0;
        else
          v144 = v298;
        v145 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
        initPos = v131;
        v146 = v143;
        PartyOrganizationListViewItem___ctor_32260152(
          v145,
          v121,
          v140,
          v141,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v144,
          initPos,
          0LL);
        if ( !v143 )
          goto LABEL_75;
        v65 = v311;
        if ( v145 )
        {
          Instance = sub_1B4D0CC(v145, *(_QWORD *)(*(_QWORD *)v143 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        v149 = v143[6];
        this = v304;
        NpcServantFollowerIds = v306;
        v122 = setupInfob;
      }
LABEL_240:
      if ( v121 >= v149 )
        goto LABEL_411;
      *(_QWORD *)&v146[2 * v121 + 8] = v145;
      sub_1B4CF34((CGThumbnailListItem_o *)&v146[(unsigned __int64)j / 4 + 8], (int32_t)v145, v147, v148);
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_75;
      if ( v121 >= memberList->max_length )
        goto LABEL_411;
      Instance = (__int64)memberList->m_Items[v121];
      if ( !Instance )
        goto LABEL_75;
      cost = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                        + cost;
      ++v121;
    }
  }
  v307 = questRestrictionInfo->fields.myServantNumMax
       + (FollowerIndex > 0 && !questRestrictionInfo->fields.isNotTransitionSupportList);
  if ( !isNew )
  {
    if ( !userServantList )
      goto LABEL_75;
    if ( (int)userServantList->max_length >= 1 )
    {
      v188 = 0LL;
      v189 = 0;
      v190 = 0LL;
      v191 = userServantList->m_Items;
      while ( 1 )
      {
        v192 = (PartyListViewItem___c__DisplayClass28_2_o *)sub_1B4D1DC(PartyListViewItem___c__DisplayClass28_2_TypeInfo);
        PartyListViewItem___c__DisplayClass28_2___ctor(v192, 0LL);
        if ( !v192 )
          goto LABEL_75;
        v193 = v190 + 1;
        v192->fields.chkIdx = v190 + 1;
        if ( v190 >= userServantList->max_length )
          goto LABEL_411;
        if ( v191[v190] )
          ++v189;
        v194 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v194,
          (Il2CppObject *)v192,
          Method_PartyListViewItem___c__DisplayClass28_2___ctor_b__2__,
          0LL);
        Instance = (__int64)System_Linq_Enumerable__Where_object_(
                              (System_Collections_Generic_IEnumerable_TSource__o *)npcFollowerInfoList,
                              (System_Func_TSource__bool__o *)v194,
                              (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
        v197 = userServantList->max_length;
        if ( v190 >= v197 )
          goto LABEL_411;
        questRestrictionInfo = v309;
        v65 = v311;
        if ( v191[v190] )
        {
          if ( v192->fields.chkIdx > DeckMemberMax )
            goto LABEL_276;
          Instance = System_Linq_Enumerable__Any_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                       (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
          if ( v189 > v307 || (Instance & 1) != 0 )
            break;
        }
LABEL_278:
        ++v188;
        ++v190;
        if ( v193 >= (int)userServantList->max_length )
          goto LABEL_279;
      }
      v197 = userServantList->max_length;
LABEL_276:
      if ( v190 >= v197 )
        goto LABEL_411;
      v191[v190] = 0LL;
      sub_1B4CF34((CGThumbnailListItem_o *)&v191[v188], 0, v195, v196);
      goto LABEL_278;
    }
  }
LABEL_279:
  v198 = setupInfoa;
  v199 = 0LL;
  v200 = DeckMemberMax;
  v299 = 0;
LABEL_280:
  v201 = 8 * v199 + 32;
  for ( k = v199; ; ++k )
  {
    v203 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v203 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)k >= v203->static_fields->DeckMemberMax )
      break;
    v204 = (PartyListViewItem___c__DisplayClass28_3_o *)sub_1B4D1DC(PartyListViewItem___c__DisplayClass28_3_TypeInfo);
    PartyListViewItem___c__DisplayClass28_3___ctor(v204, 0LL);
    if ( v314 )
    {
      v206 = deck->fields.deckInfo;
      if ( !v206 )
        goto LABEL_75;
      v207 = v206->fields.svts;
      if ( !v207 )
        goto LABEL_75;
      if ( k >= v207->max_length )
        goto LABEL_411;
      v208 = *(__int64 *)((char *)&v207->obj.klass + v201);
      if ( !v208 )
        goto LABEL_75;
      v209 = (int32_t *)(v208 + 76);
    }
    else
    {
      Instance = (__int64)PartyListViewItem__GetMember(v65, k, v205);
      if ( !Instance )
        goto LABEL_75;
      v209 = (int32_t *)(Instance + 336);
    }
    v210 = *v209;
    if ( (__int64)k < v200 )
    {
      if ( !v204 )
        goto LABEL_75;
      v199 = k + 1;
      v204->fields.chkIdx = k + 1;
      v319 = 0LL;
      v318 = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41066216(questRestrictionInfo, v210, 0LL);
      v216 = Instance;
      if ( (Instance & 1) == 0 )
        goto LABEL_307;
      v217 = deck->fields.deckInfo;
      if ( !v217 )
        goto LABEL_75;
      v218 = v217->fields.svts;
      if ( !v218 )
        goto LABEL_75;
      if ( k >= v218->max_length )
        goto LABEL_411;
      v219 = *(__int64 *)((char *)&v218->obj.klass + v201);
      if ( !v219 )
        goto LABEL_75;
      v220 = *(_QWORD *)(v219 + 64);
      if ( v220 >= 1 )
      {
        if ( v204->fields.chkIdx == v296 )
        {
          isFixNpca = 1;
          v290 = 0;
          v294 = 1;
          goto LABEL_313;
        }
        v290 = 0;
        v294 = PartyListViewItem__SetNpcFollowerInfo(this, &v319, &v318, npcFollowerInfoList, v220, v210, v215);
LABEL_312:
        isFixNpca = 1;
        goto LABEL_313;
      }
LABEL_307:
      if ( !v301 || questRestrictionInfo->fields.isNotTransitionSupportList )
      {
        v290 = 0;
        v294 = 0;
        goto LABEL_312;
      }
      chkIdx = v204->fields.chkIdx;
      isFixNpca = chkIdx != FollowerIndex;
      v290 = chkIdx == FollowerIndex;
      v294 = 0;
LABEL_313:
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v210, 0LL);
      if ( NpcFollowerInfo && ((v216 ^ 1) & 1) == 0 )
      {
        v223 = NpcFollowerInfo;
        if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0LL) )
          v224 = 0;
        else
          v224 = v297;
        v225 = FollowerInfo__get_IsNpc(v223, 0LL);
        v226 = (unsigned int *)*p_memberList;
        if ( v225 )
          v227 = 0;
        else
          v227 = v298;
        followerDeckIda = v227;
        v198 = setupInfoa;
        v228 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32260152(
          v228,
          k,
          v223,
          v224,
          setupInfoa,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          followerDeckIda,
          v210,
          0LL);
        if ( !v226 )
          goto LABEL_75;
        v65 = v311;
        if ( v228 )
        {
          Instance = sub_1B4D0CC(v228, *(_QWORD *)(*(_QWORD *)v226 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        if ( k >= v226[6] )
          goto LABEL_411;
        *(_QWORD *)((char *)v226 + v201) = v228;
        sub_1B4CF34((CGThumbnailListItem_o *)((char *)v226 + v201), (int32_t)v228, v229, v230);
        v231 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_75;
        if ( k >= v231->max_length )
          goto LABEL_411;
        v199 = k + 1;
        this = v304;
        v232 = deck->fields.deckInfo;
        if ( !v232 )
          goto LABEL_75;
        v233 = v232->fields.svts;
        if ( !v233 )
          goto LABEL_75;
        if ( k >= v233->max_length )
          goto LABEL_411;
        v234 = *(__int64 *)((char *)&v233->obj.klass + v201);
        if ( !v234 )
          goto LABEL_75;
        v235 = *(__int64 *)((char *)&v231->obj.klass + v201);
        if ( !v235 )
          goto LABEL_75;
        *(_DWORD *)(v235 + 336) = *(_DWORD *)(v234 + 76);
        ++v299;
        goto LABEL_280;
      }
      if ( v294 || v204->fields.chkIdx == FollowerIndex )
      {
        v236 = v319;
        v237 = (unsigned int *)*p_memberList;
        if ( v319 )
        {
          v286 = (unsigned int *)*p_memberList;
          v238 = v318;
          v239 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
          v240 = v238;
          v237 = v286;
          v241 = v239;
          PartyOrganizationListViewItem___ctor_32260152(
            v239,
            k,
            v236,
            v240,
            v198,
            questRestrictionInfo,
            0LL,
            isFixNpca,
            v298,
            v210,
            0LL);
          if ( !v286 )
            goto LABEL_75;
          v65 = v311;
          if ( !v241 )
          {
LABEL_365:
            if ( k >= v237[6] )
              goto LABEL_411;
            *(_QWORD *)((char *)v237 + v201) = v241;
            sub_1B4CF34((CGThumbnailListItem_o *)((char *)v237 + v201), (int32_t)v241, v242, v243);
            v258 = *p_memberList;
            if ( !*p_memberList )
              goto LABEL_75;
            if ( k >= v258->max_length )
              goto LABEL_411;
            v259 = deck->fields.deckInfo;
            if ( !v259 )
              goto LABEL_75;
            v260 = v259->fields.svts;
            if ( !v260 )
              goto LABEL_75;
            if ( k >= v260->max_length )
              goto LABEL_411;
            v261 = *(__int64 *)((char *)&v260->obj.klass + v201);
            if ( !v261 )
              goto LABEL_75;
            v262 = *(__int64 *)((char *)&v258->obj.klass + v201);
            if ( !v262 )
              goto LABEL_75;
            *(_DWORD *)(v262 + 336) = *(_DWORD *)(v261 + 76);
            v299 += v290 || v294;
            goto LABEL_280;
          }
        }
        else
        {
          v244 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
          v241 = v244;
          if ( v301 )
            PartyOrganizationListViewItem___ctor_32260152(
              v244,
              k,
              v301,
              v297,
              v198,
              questRestrictionInfo,
              0LL,
              isFixNpca,
              v298,
              v210,
              0LL);
          else
            PartyOrganizationListViewItem___ctor_32262724(v244, k, 1, v198, questRestrictionInfo, 1, v210, 0LL);
          v65 = v311;
          if ( !v237 )
            goto LABEL_75;
          if ( !v241 )
            goto LABEL_365;
        }
        Instance = sub_1B4D0CC(v241, *(_QWORD *)(*(_QWORD *)v237 + 64LL));
        if ( !Instance )
          goto LABEL_412;
        goto LABEL_365;
      }
      v245 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v245,
        (Il2CppObject *)v204,
        Method_PartyListViewItem___c__DisplayClass28_3___ctor_b__3__,
        0LL);
      v246 = System_Linq_Enumerable__Where_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v312,
               (System_Func_TSource__bool__o *)v245,
               (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v247 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B4D0CC(v246, FollowerInfo___TypeInfo);
      if ( !v247 )
        v247 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                      v246,
                                                                      (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
      Instance = System_Linq_Enumerable__Any_object_(
                   v247,
                   (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( v299 < v307 && (Instance & 1) == 0 )
      {
        if ( (v216 & 1) != 0 )
        {
          v248 = userServantList;
          if ( !userServantList )
            goto LABEL_75;
          if ( k >= userServantList->max_length )
            goto LABEL_411;
          v249 = *(__int64 *)((char *)&userServantList->obj.klass + v201);
          if ( v249 )
          {
            v251 = *(_QWORD *)(v249 + 80);
            v250 = *(_QWORD *)(v249 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v324.fields.currentCryptoKey = v251;
            *(_QWORD *)&v324.fields.fakeValue = v250;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v324, 0LL);
            if ( k >= userServantList->max_length )
              goto LABEL_411;
            v252 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&userServantList->obj.klass + v201);
            if ( !v252 )
              goto LABEL_75;
            v253 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v252[6], 0LL);
            if ( k >= userServantList->max_length )
              goto LABEL_411;
            v254 = Instance;
            Instance = *(__int64 *)((char *)&userServantList->obj.klass + v201);
            if ( !Instance )
              goto LABEL_75;
            v255 = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
            questRestrictionInfo = v309;
            Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(v309, v253, v254, v255, v210, 0, 0LL);
            v248 = userServantList;
            if ( (Instance & 1) != 0 )
            {
              if ( k >= userServantList->max_length )
                goto LABEL_411;
              *(Il2CppClass **)((char *)&userServantList->obj.klass + v201) = 0LL;
              sub_1B4CF34((CGThumbnailListItem_o *)((char *)userServantList + v201), 0, v256, v257);
            }
          }
        }
        else
        {
          v248 = userServantList;
          if ( !userServantList )
            goto LABEL_75;
        }
        if ( k >= v248->max_length )
          goto LABEL_411;
        v271 = *(UserServantEntity_o **)((char *)&v248->obj.klass + v201);
        v272 = (unsigned int *)*p_memberList;
        if ( v271 )
        {
          v273 = UserEventDeckEntity__GetEquipList(deck, k, 0LL);
          v274 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32251956(
            v274,
            k,
            v271,
            v273,
            setupInfoa,
            questRestrictionInfo,
            0LL,
            v210,
            0LL,
            0,
            0LL);
          v199 = k + 1;
          if ( !v272 )
            goto LABEL_75;
          v65 = v311;
        }
        else
        {
          v274 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32262724(v274, k, 0, setupInfoa, questRestrictionInfo, 1, v210, 0LL);
          v65 = v311;
          v199 = k + 1;
          if ( !v272 )
            goto LABEL_75;
        }
        if ( v274 )
        {
          Instance = sub_1B4D0CC(v274, *(_QWORD *)(*(_QWORD *)v272 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        if ( k >= v272[6] )
          goto LABEL_411;
        *(_QWORD *)((char *)v272 + v201) = v274;
        sub_1B4CF34((CGThumbnailListItem_o *)((char *)v272 + v201), (int32_t)v274, v275, v276);
        ++v299;
        goto LABEL_402;
      }
      if ( System_Linq_Enumerable__Any_object_(
             v247,
             (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
      {
        Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                              v247,
                              0,
                              (const MethodInfo_2F2297C *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
        goto LABEL_377;
      }
      Instance = (__int64)v312;
      if ( !v312 )
        goto LABEL_75;
      if ( v312->fields._size <= (int)k - v299 )
      {
        v264 = (unsigned int *)*p_memberList;
      }
      else
      {
        Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                              v312,
                              (int)k - v299,
                              (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
LABEL_377:
        v263 = (FollowerInfo_o *)Instance;
        v264 = (unsigned int *)*p_memberList;
        if ( Instance )
        {
          v265 = *(_QWORD *)(Instance + 40);
          if ( !v265 )
            goto LABEL_75;
          if ( !*(_DWORD *)(v265 + 24) )
            goto LABEL_411;
          v266 = *(_QWORD *)(v265 + 32);
          if ( !v266 )
            goto LABEL_75;
          v267 = *(_DWORD *)(v266 + 32);
          v268 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32260152(
            v268,
            k,
            v263,
            v267,
            setupInfoa,
            questRestrictionInfo,
            0LL,
            1,
            v298,
            v210,
            0LL);
          if ( !v264 )
            goto LABEL_75;
          v65 = v311;
          if ( v268 )
          {
            Instance = sub_1B4D0CC(v268, *(_QWORD *)(*(_QWORD *)v264 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          if ( k >= v264[6] )
            goto LABEL_411;
          *(_QWORD *)((char *)v264 + v201) = v268;
          sub_1B4CF34((CGThumbnailListItem_o *)((char *)v264 + v201), (int32_t)v268, v269, v270);
LABEL_402:
          v280 = this->fields.memberList;
          v198 = setupInfoa;
          if ( !v280 )
            goto LABEL_75;
          if ( k >= v280->max_length )
            goto LABEL_411;
          Instance = *(__int64 *)((char *)&v280->obj.klass + v201);
          if ( !Instance )
            goto LABEL_75;
          v281 = this->fields.cost;
          this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                                (PartyOrganizationListViewItem_o *)Instance,
                                0LL)
                            + v281;
          goto LABEL_280;
        }
      }
      v277 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32262724(v277, k, 0, setupInfoa, questRestrictionInfo, 0, v210, 0LL);
      if ( !v264 )
        goto LABEL_75;
      if ( v277 )
      {
        Instance = sub_1B4D0CC(v277, *(_QWORD *)(*(_QWORD *)v264 + 64LL));
        if ( !Instance )
          goto LABEL_412;
      }
      if ( k >= v264[6] )
        goto LABEL_411;
      *(_QWORD *)((char *)v264 + v201) = v277;
      sub_1B4CF34((CGThumbnailListItem_o *)((char *)v264 + v201), (int32_t)v277, v278, v279);
      v65 = v311;
      goto LABEL_402;
    }
    v211 = (unsigned int *)*p_memberList;
    v212 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_32262724(v212, k, 0, v198, questRestrictionInfo, 1, v210, 0LL);
    if ( !v211 )
      goto LABEL_75;
    if ( v212 )
    {
      Instance = sub_1B4D0CC(v212, *(_QWORD *)(*(_QWORD *)v211 + 64LL));
      if ( !Instance )
        goto LABEL_412;
    }
    if ( k >= v211[6] )
      goto LABEL_411;
    *(_QWORD *)((char *)v211 + v201) = v212;
    sub_1B4CF34((CGThumbnailListItem_o *)((char *)v211 + v201), (int32_t)v212, v213, v214);
    v201 += 8LL;
  }
LABEL_406:
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)v59);
  if ( (questRestrictionInfo->fields.isNpcEditablePos || !questRestrictionInfo->fields.isNpcOnlyBattle)
    && !PartyListViewItem__GetStartDeckCondition(this, v282) )
  {
    *isBaseModify = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_32121280(
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
  __int64 v14; // x1
  __int64 v15; // x1
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
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 Master_object; // x0
  __int64 classId; // x1
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *UserServantList; // x0
  BalanceConfig_c *v35; // x8
  UserServantEntity_array *v36; // x25
  struct PartyOrganizationListViewItem_array *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Collections_Generic_List_int__o *v40; // x29
  System_Collections_Generic_List_int__o *v41; // x28
  struct QuestRestrictionInfo_o *v42; // x8
  ViewWaveEnemyMaster_o *v43; // x20
  ViewWaveEnemyEntity_array *EntityListFromQuestId; // x27
  int32_t ReachedWave; // w19
  int max_length; // w8
  char v47; // w20
  unsigned int v48; // w24
  ViewWaveEnemyEntity_o *v49; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  int32_t version; // w10
  struct System_Int32_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  struct System_Int32_array *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Int32_array *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  UserEventDeckEntity_o *v63; // x29
  int32_t v64; // w28
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v66; // w26
  struct DeckServant_o *v67; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v69; // x8
  int32_t initPos; // w20
  UserServantEntity_o *v71; // x21
  struct PartyOrganizationListViewItem_array *v72; // x19
  __int128 v73; // q0
  int64_t v74; // x0
  UserEventDeckEntity_o *v75; // x8
  System_Int64_array *v76; // x29
  struct DeckServant_o *v77; // x8
  struct DeckServantData_array *v78; // x8
  DeckServantData_o *v79; // x8
  System_Int32_array *equipSvtIdList; // x26
  PartyOrganizationListViewItem_o *v81; // x27
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  Il2CppClass **v84; // x0
  struct PartyOrganizationListViewItem_array *v85; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v88; // x0
  UserEventDeckEntity_o *v89; // [xsp+20h] [xbp-D0h]
  int32_t v90; // [xsp+2Ch] [xbp-C4h]
  int v91; // [xsp+2Ch] [xbp-C4h]
  int32_t v94; // [xsp+40h] [xbp-B0h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+48h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+70h] [xbp-80h]

  if ( (byte_49B6971 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind);
    sub_1B4CF90(&Method_DataManager_GetMaster_ReachedWaveInfoMaster___, v14);
    sub_1B4CF90(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___, v15);
    sub_1B4CF90(&DataManager_TypeInfo, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Contains__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_1B4CF90(&PartyOrganizationListViewItem___TypeInfo, v23);
    sub_1B4CF90(&PartyOrganizationListViewItem_TypeInfo, v24);
    sub_1B4CF90(&WaveBattleWaveEnemyInfoItem_TypeInfo, v25);
    byte_49B6971 = 1;
  }
  ListViewItem___ctor_41325876((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v26, v27);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v29, v30);
  if ( !deck )
    goto LABEL_88;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_88;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  this->fields._IsWaveBattleRestart_k__BackingField = restartWave > 0;
  v94 = index + 1;
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, index + 1, restartWave > 0, 0LL);
  v35 = BalanceConfig_TypeInfo;
  v36 = UserServantList;
  v89 = deck;
  v90 = index;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v35 = BalanceConfig_TypeInfo;
  }
  v37 = (struct PartyOrganizationListViewItem_array *)sub_1B4D038(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v35->static_fields->DeckMemberMax);
  this->fields.memberList = v37;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v37, v38, v39);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  v40 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  v41 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v41,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
  v42 = *p_questRestrictionInfo;
  if ( !*p_questRestrictionInfo )
    goto LABEL_88;
  v43 = (ViewWaveEnemyMaster_o *)Master_object;
  if ( !Master_object )
    goto LABEL_88;
  EntityListFromQuestId = ViewWaveEnemyMaster__GetEntityListFromQuestId(
                            (ViewWaveEnemyMaster_o *)Master_object,
                            v42->fields.questId,
                            0LL);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
  if ( !questRestrictionInfo )
    goto LABEL_88;
  if ( !Master_object )
    goto LABEL_88;
  ReachedWave = ReachedWaveInfoMaster__GetReachedWave(
                  (ReachedWaveInfoMaster_o *)Master_object,
                  questRestrictionInfo->fields.questId,
                  0LL);
  Master_object = ViewWaveEnemyMaster__IsSameUnknownNpcEncounter(v43, EntityListFromQuestId, ReachedWave, 0LL);
  if ( !EntityListFromQuestId )
    goto LABEL_88;
  max_length = EntityListFromQuestId->max_length;
  if ( max_length >= 1 )
  {
    v47 = Master_object;
    v48 = 0;
    while ( 1 )
    {
      if ( v48 >= max_length )
LABEL_89:
        sub_1B4D1F4(Master_object, classId);
      v49 = EntityListFromQuestId->m_Items[v48];
      if ( !v49 )
        goto LABEL_88;
      if ( v49->fields.wave != v94 )
        goto LABEL_43;
      if ( !v40 )
        goto LABEL_88;
      Master_object = System_Collections_Generic_List_int___Contains(
                        v40,
                        v49->fields.classId,
                        (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( (Master_object & 1) != 0 )
        goto LABEL_24;
      classId = (unsigned int)v49->fields.classId;
      items = v40->fields._items;
      v51 = Method_System_Collections_Generic_List_int__Add__;
      ++v40->fields._version;
      if ( !items )
        goto LABEL_88;
      size = v40->fields._size;
      if ( (unsigned int)size < items->max_length )
        break;
      System_Collections_Generic_List_int___AddWithResize(
        v40,
        classId,
        *(const MethodInfo_35631B8 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      if ( (v47 & 1) != 0 )
        goto LABEL_36;
LABEL_27:
      if ( ReachedWave >= v49->fields.wave
        || (Master_object = ViewWaveEnemyEntity__IsUnknownDispInfo(v49, 0, 0LL, 0LL), (Master_object & 1) == 0) )
      {
LABEL_36:
        if ( !v41 )
          goto LABEL_88;
        Master_object = System_Collections_Generic_List_int___Contains(
                          v41,
                          v49->fields.classId,
                          (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Master_object & 1) == 0 )
        {
          classId = (unsigned int)v49->fields.classId;
          version = v41->fields._version;
          v54 = v41->fields._items;
LABEL_39:
          v55 = Method_System_Collections_Generic_List_int__Add__;
          v41->fields._version = version + 1;
          if ( !v54 )
            goto LABEL_88;
          v56 = v41->fields._size;
          if ( (unsigned int)v56 >= v54->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v41,
              classId,
              *(const MethodInfo_35631B8 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v41->fields._size = v56 + 1;
            v54->m_Items[v56 + 1] = classId;
          }
          goto LABEL_43;
        }
        goto LABEL_43;
      }
      Master_object = (__int64)WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
      if ( !v41 )
        goto LABEL_88;
      Master_object = System_Collections_Generic_List_int___Contains(
                        v41,
                        WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_UNKNOWN_CLASSID,
                        (const MethodInfo_3563530 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( (Master_object & 1) == 0 )
      {
        Master_object = (__int64)WaveBattleWaveEnemyInfoItem_TypeInfo;
        if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
          Master_object = (__int64)WaveBattleWaveEnemyInfoItem_TypeInfo;
        }
        version = v41->fields._version;
        v54 = v41->fields._items;
        classId = *(unsigned int *)(*(_QWORD *)(Master_object + 184) + 64LL);
        goto LABEL_39;
      }
LABEL_43:
      max_length = EntityListFromQuestId->max_length;
      if ( (int)++v48 >= max_length )
        goto LABEL_44;
    }
    v40->fields._size = size + 1;
    items->m_Items[size + 1] = classId;
LABEL_24:
    if ( (v47 & 1) != 0 )
      goto LABEL_36;
    goto LABEL_27;
  }
LABEL_44:
  if ( !v40
    || (v57 = System_Collections_Generic_List_int___ToArray(
                v40,
                (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__),
        this->fields.waveBattleEnemyClassIds = v57,
        sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.waveBattleEnemyClassIds, (int32_t)v57, v58, v59),
        !v41) )
  {
LABEL_88:
    sub_1B4D1EC(Master_object, classId);
  }
  v60 = System_Collections_Generic_List_int___ToArray(
          v41,
          (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.trendDispWaveBattleEnemyClassIds = v60;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.trendDispWaveBattleEnemyClassIds, (int32_t)v60, v61, v62);
  v63 = deck;
  this->fields._IsClearedWave_k__BackingField = v94 < restartWave;
  Master_object = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Master_object = (__int64)BalanceConfig_TypeInfo;
  }
  v64 = 0;
  v91 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 160LL) * v90;
  while ( 1 )
  {
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (__int64)BalanceConfig_TypeInfo;
    }
    static_fields = *(struct BalanceConfig_StaticFields **)(Master_object + 184);
    if ( v64 >= static_fields->DeckMemberMax )
      break;
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v66 = v91 + v64;
    if ( v64 < static_fields->DeckMainMemberMax )
    {
      v67 = v63->fields.deckInfo;
      if ( !v67 )
        goto LABEL_88;
      svts = v67->fields.svts;
      if ( !svts )
        goto LABEL_88;
      if ( v66 >= svts->max_length )
        goto LABEL_89;
      v69 = svts->m_Items[v66];
      if ( !v69 )
        goto LABEL_88;
      initPos = v69->fields.initPos;
    }
    else
    {
      initPos = v64 + 1;
    }
    if ( !v36 )
      goto LABEL_88;
    if ( v64 >= v36->max_length )
      goto LABEL_89;
    v71 = v36->m_Items[v64];
    v72 = *p_memberList;
    if ( v71 )
    {
      v73 = *(_OWORD *)&v71->fields.id.fields.fakeValue;
      *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)&v71->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v98.fields.fakeValue = v73;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v97 = v98;
      v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v97, 0LL);
      Master_object = (__int64)UserEventDeckEntity__GetEquipList_40670704(v63, v74, restartWave > 0, 0LL);
      v75 = v63;
      v76 = (System_Int64_array *)Master_object;
      if ( restartWave < 1 )
      {
        equipSvtIdList = 0LL;
      }
      else
      {
        v77 = v75->fields.deckInfo;
        if ( !v77 )
          goto LABEL_88;
        v78 = v77->fields.svts;
        if ( !v78 )
          goto LABEL_88;
        if ( v66 >= v78->max_length )
          goto LABEL_89;
        v79 = v78->m_Items[v66];
        if ( !v79 )
          goto LABEL_88;
        equipSvtIdList = v79->fields.svtEquipIds;
      }
      v81 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32251956(
        v81,
        v64,
        v71,
        v76,
        setupInfo,
        questRestrictionInfo,
        0LL,
        initPos,
        equipSvtIdList,
        v94 < restartWave,
        0LL);
      if ( !v72 )
        goto LABEL_88;
      v63 = v89;
    }
    else
    {
      v81 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32262724(v81, v64, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
      if ( !v72 )
        goto LABEL_88;
    }
    if ( v81 )
    {
      Master_object = sub_1B4D0CC(v81, v72->obj.klass->_1.element_class);
      if ( !Master_object )
      {
        v88 = sub_1B4D210();
        sub_1B4D0B8(v88, 0LL);
      }
    }
    if ( v64 >= v72->max_length )
      goto LABEL_89;
    v84 = &v72->obj.klass + v64;
    v84[4] = (Il2CppClass *)v81;
    sub_1B4CF34((CGThumbnailListItem_o *)(v84 + 4), (int32_t)v81, v82, v83);
    v85 = *p_memberList;
    if ( !*p_memberList )
      goto LABEL_88;
    if ( v64 >= v85->max_length )
      goto LABEL_89;
    Master_object = (__int64)v85->m_Items[v64];
    if ( !Master_object )
      goto LABEL_88;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)Master_object,
      this->fields.waveBattleEnemyClassIds,
      0LL);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_88;
    if ( v64 >= memberList->max_length )
      goto LABEL_89;
    Master_object = (__int64)memberList->m_Items[v64];
    if ( !Master_object )
      goto LABEL_88;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)Master_object,
                          0LL)
                      + cost;
    Master_object = (__int64)BalanceConfig_TypeInfo;
    ++v64;
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

  if ( (byte_49B6983 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, *(_QWORD *)&deckMemberCount);
    byte_49B6983 = 1;
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
    sub_1B4D1EC(questRestrictionInfo, *(_QWORD *)&deckMemberCount);
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
  __int64 v3; // x1
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
  il2cpp_array_size_t v15; // w21
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
  int64_t sortValue2; // x20
  __int64 sortValue1_low; // x21
  __int64 v43; // x25
  __int64 v44; // x8
  __int64 v45; // x8
  struct QuestRestrictionInfo_o *v46; // x8
  il2cpp_array_size_t k; // w20
  struct PartyOrganizationListViewItem_array *v48; // x8
  PartyOrganizationListViewItem_o *v49; // x8
  il2cpp_array_size_t j; // w21
  struct PartyOrganizationListViewItem_array *v51; // x8

  if ( (byte_49B6977 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_49B6977 = 1;
  }
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
    if ( v4 >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_105;
    if ( v4 >= memberList->max_length )
      goto LABEL_106;
    IsUseOldMaster = memberList->m_Items[v4];
    if ( !IsUseOldMaster )
      goto LABEL_105;
    PartyOrganizationListViewItem__CheckRestriction(IsUseOldMaster, this, v4, 0LL);
    v9 = this->fields.memberList;
    if ( !v9 )
      goto LABEL_105;
    if ( v4 >= v9->max_length )
      goto LABEL_106;
    v10 = v9->m_Items[v4];
    if ( !v10 )
      goto LABEL_105;
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
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_105;
    if ( ((unsigned __int8)IsUseOldMaster & 1) != 0 )
    {
      FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(
                                    this->fields.questRestrictionInfo,
                                    0LL);
      IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      v15 = 0;
      for ( i = 0; ; i |= v18->fields.isFixedSupportPositionRestriction )
      {
        if ( !LODWORD(IsUseOldMaster->fields.npcFollowerSvtId) )
        {
          j_il2cpp_runtime_class_init_0(IsUseOldMaster);
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
        }
        if ( (signed int)v15 >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
          break;
        v17 = this->fields.memberList;
        if ( !v17 )
          goto LABEL_105;
        if ( v15 >= v17->max_length )
          goto LABEL_106;
        v18 = v17->m_Items[v15];
        if ( !v18 )
          goto LABEL_105;
        ++v15;
        FixedServantPositionCount -= v18->fields.isFixedServantPositionAgreement;
      }
      if ( !(i & 1 | (FixedServantPositionCount > 0)) )
      {
        v31 = this->fields.memberList;
        if ( !v31 )
          goto LABEL_105;
        max_length = v31->max_length;
        if ( max_length >= 1 )
        {
          v33 = 0;
          while ( v33 < max_length )
          {
            IsUseOldMaster = v31->m_Items[v33];
            if ( !IsUseOldMaster )
              goto LABEL_105;
            PartyOrganizationListViewItem__ResetPositionRestriction(IsUseOldMaster, 0LL);
            max_length = v31->max_length;
            if ( (int)++v33 >= max_length )
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
    v19 = (int)IsUseOldMaster;
    FixedPositionCount = QuestRestrictionInfo__GetFixedPositionCount(this->fields.questRestrictionInfo, 0LL);
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    v21 = 0;
    v22 = 0;
    v23 = -1;
    while ( 1 )
    {
      if ( !LODWORD(IsUseOldMaster->fields.npcFollowerSvtId) )
      {
        j_il2cpp_runtime_class_init_0(IsUseOldMaster);
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( v21 >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
        break;
      v24 = this->fields.memberList;
      if ( !v24 )
        goto LABEL_105;
      if ( v21 >= v24->max_length )
        goto LABEL_106;
      v25 = v24->m_Items[v21];
      if ( !v25 )
        goto LABEL_105;
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
      goto LABEL_58;
    v34 = this->fields.memberList;
    if ( !v34 )
      goto LABEL_105;
    v35 = v34->max_length;
    if ( v35 < 1 )
    {
LABEL_58:
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
          if ( (signed int)j >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
            break;
          v51 = this->fields.memberList;
          if ( !v51 )
            goto LABEL_105;
          if ( j >= v51->max_length )
            goto LABEL_106;
          IsUseOldMaster = v51->m_Items[j];
          if ( !IsUseOldMaster )
            goto LABEL_105;
          PartyOrganizationListViewItem__ResetPositionRestrictionNeedStarting(IsUseOldMaster, 0LL);
        }
      }
      if ( (FixedPositionCount > 0) | v22 & 1 )
        goto LABEL_66;
      v37 = this->fields.memberList;
      if ( !v37 )
        goto LABEL_105;
      v38 = v37->max_length;
      if ( v38 < 1 )
      {
LABEL_66:
        v40 = this->fields.questRestrictionInfo;
        if ( !v40 || v40->fields.servantNumMin != 1 )
          return;
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( IsUseOldMaster )
        {
          sortValue2 = IsUseOldMaster->fields.sortValue2;
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( IsUseOldMaster )
          {
            if ( sortValue2 )
            {
              sortValue1_low = LODWORD(IsUseOldMaster->fields.sortValue1);
              if ( (int)sortValue1_low >= 1 )
              {
                IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                v43 = 0LL;
                v6 = 0;
                while ( 1 )
                {
                  if ( !LODWORD(IsUseOldMaster->fields.npcFollowerSvtId) )
                  {
                    j_il2cpp_runtime_class_init_0(IsUseOldMaster);
                    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                  }
                  if ( v43 >= *(int *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
                    break;
                  if ( sortValue1_low != ++v43 )
                  {
                    v44 = *(_QWORD *)(sortValue2 + 120);
                    if ( !v44 )
                      goto LABEL_105;
                    if ( v43 - 1 >= (unsigned __int64)*(unsigned int *)(v44 + 24) )
                      goto LABEL_106;
                    v45 = *(_QWORD *)(v44 + 8 * v43 + 24);
                    if ( !v45 )
                      goto LABEL_105;
                    if ( *(_QWORD *)(v45 + 112) )
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
                  if ( !LODWORD(IsUseOldMaster->fields.npcFollowerSvtId) )
                  {
                    j_il2cpp_runtime_class_init_0(IsUseOldMaster);
                    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                  }
                  if ( (signed int)k >= *(_DWORD *)(*(_QWORD *)&IsUseOldMaster->fields.classId + 156LL) )
                    break;
                  v48 = this->fields.memberList;
                  if ( !v48 )
                    goto LABEL_105;
                  if ( k >= v48->max_length )
                    goto LABEL_106;
                  v49 = v48->m_Items[k];
                  if ( !v49 )
                    goto LABEL_105;
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
LABEL_105:
        sub_1B4D1EC(IsUseOldMaster, method);
      }
      v39 = 0;
      while ( v39 < v38 )
      {
        IsUseOldMaster = v37->m_Items[v39];
        if ( !IsUseOldMaster )
          goto LABEL_105;
        PartyOrganizationListViewItem__ResetPositionRestrictionServant(IsUseOldMaster, 0LL);
        v38 = v37->max_length;
        if ( (int)++v39 >= v38 )
          goto LABEL_66;
      }
    }
    else
    {
      v36 = 0;
      while ( v36 < v35 )
      {
        IsUseOldMaster = v34->m_Items[v36];
        if ( !IsUseOldMaster )
          goto LABEL_105;
        PartyOrganizationListViewItem__ResetPositionRestrictionMyServant(IsUseOldMaster, 0LL);
        v35 = v34->max_length;
        if ( (int)++v36 >= v35 )
          goto LABEL_58;
      }
    }
LABEL_106:
    sub_1B4D1F4(IsUseOldMaster, method);
  }
}


void __fastcall PartyListViewItem__ClearDeckName(PartyListViewItem_o *this, const MethodInfo *method)
{
  struct System_String_o *DefaultDeckName; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, method);
  this->fields.deckName = DefaultDeckName;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.deckName, (int32_t)DefaultDeckName, v4, v5);
}


void __fastcall PartyListViewItem__ClearEquip(PartyListViewItem_o *this, const MethodInfo *method)
{
  il2cpp_array_size_t i; // w20
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w22

  if ( (byte_49B697D & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    byte_49B697D = 1;
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
      sub_1B4D1F4(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v4 )
LABEL_14:
      sub_1B4D1EC(v4, method);
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

  if ( (byte_49B697E & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    byte_49B697E = 1;
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
      sub_1B4D1F4(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v4 )
LABEL_12:
      sub_1B4D1EC(v4, method);
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
    sub_1B4D1EC(this, *(_QWORD *)&num);
  }
  if ( v7->max_length <= num )
LABEL_9:
    sub_1B4D1F4(this, *(_QWORD *)&num);
  this = (PartyListViewItem_o *)v7->m_Items[num];
  if ( !this )
    goto LABEL_8;
  PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)this, 0LL);
  PartyListViewItem__CheckRestriction(v5, v8);
}


void __fastcall PartyListViewItem__ClearMember_32125084(PartyListViewItem_o *this, const MethodInfo *method)
{
  il2cpp_array_size_t i; // w20
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8

  if ( (byte_49B697C & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    byte_49B697C = 1;
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
      sub_1B4D1F4(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v4 )
LABEL_14:
      sub_1B4D1EC(v4, method);
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

  if ( (byte_49B6976 & 1) == 0 )
  {
    sub_1B4CF90(&PartyListViewItem_TypeInfo, method);
    byte_49B6976 = 1;
  }
  v3 = (PartyListViewItem_o *)sub_1B4D1DC(PartyListViewItem_TypeInfo);
  PartyListViewItem___ctor(v3, v4);
  if ( !v3 )
    sub_1B4D1EC(v5, v6);
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
  int32_t v7; // w24
  int32_t v8; // w23
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v10; // x9

  v4 = this;
  if ( (byte_49B6987 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1B4CF90(&BalanceConfig_TypeInfo, item);
    byte_49B6987 = 1;
  }
  if ( !item )
LABEL_17:
    sub_1B4D1EC(this, item);
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
    v8 = this->fields.trendDispWaveBattleEnemyClassIds->m_Items[32];
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
      sub_1B4D1F4(this, item);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  __int64 v9; // x1
  unsigned __int64 i; // x24
  Il2CppObject *AssetName; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppObject *v19; // x1
  Il2CppClass **v20; // x0

  if ( (byte_49B6993 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__ToArray__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_1B4CF90(&System_Collections_Generic_List_string__TypeInfo, v7);
    byte_49B6993 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_string___ctor__);
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
      sub_1B4D1F4(AssetName, v9);
    v13 = memberList->m_Items[i];
    if ( v13 )
    {
      AssetName = (Il2CppObject *)PartyOrganizationListViewItem__GetAssetName(v13, 0LL);
      if ( AssetName )
      {
        if ( !v8 )
          goto LABEL_21;
        items = v8->fields._items;
        v17 = Method_System_Collections_Generic_List_string__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v8->fields._size;
        v19 = AssetName;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            AssetName,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v19;
          sub_1B4CF34((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
        }
      }
    }
  }
  if ( !v8 )
LABEL_21:
    sub_1B4D1EC(AssetName, v9);
  if ( v8->fields._size < 1 )
    return 0LL;
  else
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    v8,
                                    (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall PartyListViewItem__GetCommandCardList(
        PartyListViewItem_o *this,
        int32_t typeMax,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Int32_array *v7; // x21
  unsigned __int64 i; // x23
  _QWORD *p_image; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v11; // x0
  unsigned __int64 v12; // x9
  unsigned __int64 j; // x8

  if ( (byte_49B6992 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, *(_QWORD *)&typeMax);
    sub_1B4CF90(&int___TypeInfo, v5);
    byte_49B6992 = 1;
  }
  v7 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, (unsigned int)typeMax);
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
      sub_1B4D1EC(p_image, v6);
    if ( i >= memberList->max_length )
LABEL_21:
      sub_1B4D1F4(p_image, v6);
    v11 = memberList->m_Items[i];
    if ( v11 )
    {
      p_image = PartyOrganizationListViewItem__GetCommandCardList(v11, 0LL);
      if ( p_image )
      {
        if ( typeMax >= 1 )
        {
          v12 = *((unsigned int *)p_image + 6);
          for ( j = 0LL; typeMax != j; ++j )
          {
            if ( (__int64)j < (int)v12 )
            {
              if ( !v7 )
                goto LABEL_22;
              if ( j >= v7->max_length || j >= v12 )
                goto LABEL_21;
              v7->m_Items[j + 1] += *((_DWORD *)p_image + j + 8);
            }
          }
        }
      }
    }
  }
  return v7;
}


int32_t __fastcall PartyListViewItem__GetDeckCondition(PartyListViewItem_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  void *DeckConditionServantNumAndPosition; // x0
  il2cpp_array_size_t v13; // w28
  int v14; // w25
  char v15; // w26
  int v16; // w29
  int v17; // w21
  int32_t v18; // w20
  int32_t DeckMainMemberMax; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v21; // x8
  PartyOrganizationListViewItem_o *v22; // x22
  _BOOL4 isFollower; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v25; // w28
  __int64 v26; // x8
  struct PartyOrganizationListViewItem_array *v27; // x8
  Il2CppClass **v28; // x8
  PartyOrganizationListViewItem_o *v29; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // kr10_16
  int32_t v31; // w23
  struct PartyOrganizationListViewItem_array *v32; // x9
  PartyOrganizationListViewItem_o *v33; // x9
  const MethodInfo *v34; // x5
  const MethodInfo *v35; // x5
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  _BOOL4 isNotSingleSupportOnly; // w8
  struct PartyOrganizationListViewItem_array *v38; // x26
  int max_length; // w8
  const MethodInfo_357FF0C **v40; // x25
  int v41; // w29
  Il2CppClass **v42; // x8
  PartyOrganizationListViewItem_o *v43; // x20
  PartyOrganizationListViewItem_o *v44; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // kr20_16
  System_Collections_Generic_List_object__o *v46; // x21
  int size; // w8
  int v48; // w9
  char v49; // w24
  int32_t v50; // w23
  struct PartyOrganizationListViewItem_array *v51; // x22
  const MethodInfo_357FF0C **v52; // x28
  Il2CppObject *Item; // x0
  ServantEntity_o *servantEntity; // x25
  int32_t svtLimitCount; // w26
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x24
  System_Collections_Generic_IEnumerable_TSource__o *Individuality; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x24
  __int64 i; // x23
  struct PartyOrganizationListViewItem_array *v61; // x8
  PartyOrganizationListViewItem_o *v62; // x8
  struct ServantEntity_o *v63; // x8
  __int64 v64; // x20
  __int64 v65; // x21
  int32_t v66; // w20
  unsigned __int64 j; // x24
  struct PartyOrganizationListViewItem_array *v68; // x8
  PartyOrganizationListViewItem_o *v69; // x8
  struct ServantEntity_o *v70; // x8
  __int64 v71; // x21
  __int64 v72; // x22
  System_Collections_Generic_List_T__o *v74; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_49B6985 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_int___, v4);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Intersect_int___, v5);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int____get_Count__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int____get_Item__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v10);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_49B6985 = 1;
  }
  if ( this->fields.cost > this->fields.maxCost )
  {
    LODWORD(DeckConditionServantNumAndPosition) = 7;
    return (int)DeckConditionServantNumAndPosition;
  }
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  while ( 1 )
  {
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    }
    DeckMainMemberMax = *(_DWORD *)(*((_QWORD *)DeckConditionServantNumAndPosition + 23) + 160LL);
    if ( (int)v13 >= DeckMainMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_164;
    if ( v13 >= memberList->max_length )
LABEL_165:
      sub_1B4D1F4(DeckConditionServantNumAndPosition, method);
    v21 = &memberList->obj.klass + (int)v13;
    v22 = (PartyOrganizationListViewItem_o *)v21[4];
    if ( !v22 )
      goto LABEL_164;
    if ( PartyOrganizationListViewItem__get_IsLeave((PartyOrganizationListViewItem_o *)v21[4], 0LL) )
    {
LABEL_54:
      LODWORD(DeckConditionServantNumAndPosition) = 5;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( (v22->fields.fatigureTime & 0x8000000000000000LL) == 0 )
    {
LABEL_55:
      LODWORD(DeckConditionServantNumAndPosition) = 6;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v22->fields._IsAllOutBattle_k__BackingField )
    {
LABEL_56:
      LODWORD(DeckConditionServantNumAndPosition) = 19;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v22->fields._IsDataLost_k__BackingField )
    {
LABEL_57:
      LODWORD(DeckConditionServantNumAndPosition) = 20;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v22->fields._TimesToRestart_k__BackingField > 0 )
    {
LABEL_58:
      LODWORD(DeckConditionServantNumAndPosition) = 21;
      return (int)DeckConditionServantNumAndPosition;
    }
    isFollower = v22->fields.isFollower;
    if ( v22->fields.isFollower && !v22->fields.isMyServantOrNpcRestriction )
    {
      ++v17;
      ++v16;
      v15 = 1;
    }
    else
    {
      if ( v22->fields.userServantEntity )
        goto LABEL_21;
      if ( v22->fields.isMyServantOrNpcRestriction )
      {
        SvtId = PartyOrganizationListViewItem__get_SvtId(v22, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(SvtId, 0LL) >= 1 )
        {
          isFollower = v22->fields.isFollower;
LABEL_21:
          ++v18;
          v14 |= isFollower;
        }
      }
    }
    ++v13;
  }
  if ( !*((_DWORD *)DeckConditionServantNumAndPosition + 56) )
  {
    j_il2cpp_runtime_class_init_0(DeckConditionServantNumAndPosition);
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    DeckMainMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
  }
  v25 = v18;
  while ( 1 )
  {
    if ( !*((_DWORD *)DeckConditionServantNumAndPosition + 56) )
    {
      j_il2cpp_runtime_class_init_0(DeckConditionServantNumAndPosition);
      DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    }
    v26 = *((_QWORD *)DeckConditionServantNumAndPosition + 23);
    if ( DeckMainMemberMax >= *(_DWORD *)(v26 + 156) )
      break;
    v27 = this->fields.memberList;
    if ( !v27 )
      goto LABEL_164;
    if ( DeckMainMemberMax >= v27->max_length )
      goto LABEL_165;
    v28 = &v27->obj.klass + DeckMainMemberMax;
    v29 = (PartyOrganizationListViewItem_o *)v28[4];
    if ( !v29 )
      goto LABEL_164;
    if ( PartyOrganizationListViewItem__get_IsLeave((PartyOrganizationListViewItem_o *)v28[4], 0LL) )
      goto LABEL_54;
    if ( (v29->fields.fatigureTime & 0x8000000000000000LL) == 0 )
      goto LABEL_55;
    if ( v29->fields._IsAllOutBattle_k__BackingField )
      goto LABEL_56;
    if ( v29->fields._IsDataLost_k__BackingField )
      goto LABEL_57;
    if ( v29->fields._TimesToRestart_k__BackingField > 0 )
      goto LABEL_58;
    if ( v29->fields.isFollower && !v29->fields.isMyServantOrNpcRestriction )
    {
      ++v16;
    }
    else
    {
      if ( v29->fields.userServantEntity )
        goto LABEL_46;
      if ( v29->fields.isMyServantOrNpcRestriction )
      {
        v30 = PartyOrganizationListViewItem__get_SvtId(v29, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v30, 0LL) >= 1 )
LABEL_46:
          ++v25;
      }
    }
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    ++DeckMainMemberMax;
  }
  DeckConditionServantNumAndPosition = 0LL;
  v31 = v16 + v25;
  switch ( this->fields.menuKind )
  {
    case 4:
      DeckConditionServantNumAndPosition = (void *)PartyListViewItem__CheckDeckConditionServantNum(
                                                     this,
                                                     v31,
                                                     v18,
                                                     v15 & 1,
                                                     1,
                                                     v2);
      if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
        goto LABEL_99;
      goto LABEL_95;
    case 5:
      DeckConditionServantNumAndPosition = (void *)PartyListViewItem__GetDeckConditionServantNumAndPosition(
                                                     this,
                                                     v31,
                                                     v18,
                                                     v15 & 1,
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
                                                            v31,
                                                            v18,
                                                            v15 & 1,
                                                            v17,
                                                            v35);
            if ( (_DWORD)DeckConditionServantNumAndPosition )
              return (int)DeckConditionServantNumAndPosition;
          }
        }
      }
      else if ( !PartyListViewItem__CheckDeckConditionServantNum(this, v31, v18, v15 & 1, v17, v34) )
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
              v25,
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
        v26 = *((_QWORD *)DeckConditionServantNumAndPosition + 23);
LABEL_93:
        if ( v18 + v17 < *(_DWORD *)(v26 + 160) )
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
      if ( v18 == 1 && (v14 & isNotSingleSupportOnly & 1) != 0 )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 22;
        return (int)DeckConditionServantNumAndPosition;
      }
      v38 = this->fields.memberList;
      if ( !v38 )
        goto LABEL_164;
      max_length = v38->max_length;
      if ( max_length < 1 )
        goto LABEL_133;
      v40 = (const MethodInfo_357FF0C **)&Method_System_Collections_Generic_List_int____get_Item__;
      v41 = 0;
      break;
    default:
      if ( !v25 )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 1;
        return (int)DeckConditionServantNumAndPosition;
      }
      if ( v18 != 1 )
        goto LABEL_81;
      v32 = this->fields.memberList;
      if ( !v32 )
        goto LABEL_164;
      if ( !v32->max_length )
        goto LABEL_165;
      v33 = v32->m_Items[0];
      if ( !v33 )
        goto LABEL_164;
      if ( v33->fields.userServantEntity )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 2;
        return (int)DeckConditionServantNumAndPosition;
      }
LABEL_81:
      v17 = v15 & 1;
      goto LABEL_93;
  }
  do
  {
    if ( v41 >= (unsigned int)max_length )
      goto LABEL_165;
    v42 = &v38->obj.klass + v41;
    v43 = (PartyOrganizationListViewItem_o *)v42[4];
    if ( !v43 )
      goto LABEL_164;
    v44 = (PartyOrganizationListViewItem_o *)v42[4];
    v43->fields._IsErrorNeedIndividuality_k__BackingField = 0;
    v45 = PartyOrganizationListViewItem__get_SvtId(v44, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    DeckConditionServantNumAndPosition = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                                   v45,
                                                   0LL);
    if ( !(_DWORD)DeckConditionServantNumAndPosition )
    {
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
        goto LABEL_164;
      DeckConditionServantNumAndPosition = (void *)QuestRestrictionInfo__IsSetRequired(
                                                     (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                                                     v43->fields.index + 1,
                                                     v43->fields._InitPos_k__BackingField,
                                                     0LL);
      if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) != 0 )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 18;
        return (int)DeckConditionServantNumAndPosition;
      }
    }
    if ( !v43->fields.userServantEntity )
      goto LABEL_132;
    DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
    if ( !DeckConditionServantNumAndPosition )
      goto LABEL_164;
    DeckConditionServantNumAndPosition = QuestRestrictionInfo__GetNeedIndividualityList(
                                           (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                                           v43->fields._InitPos_k__BackingField,
                                           0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_164;
    v46 = (System_Collections_Generic_List_object__o *)DeckConditionServantNumAndPosition;
    DeckConditionServantNumAndPosition = QuestRestrictionInfo__GetRangeTypeList(
                                           this->fields.questRestrictionInfo,
                                           v43->fields._InitPos_k__BackingField,
                                           0LL);
    v74 = (System_Collections_Generic_List_T__o *)DeckConditionServantNumAndPosition;
    if ( !v46 )
      goto LABEL_132;
    if ( !DeckConditionServantNumAndPosition )
      goto LABEL_132;
    size = v46->fields._size;
    if ( size < 1 )
      goto LABEL_132;
    v48 = *((_DWORD *)DeckConditionServantNumAndPosition + 6);
    if ( v48 < 1 || size != v48 )
      goto LABEL_132;
    v49 = 0;
    v50 = 0;
    do
    {
      DeckConditionServantNumAndPosition = System_Collections_Generic_List_object___get_Item(v46, v50, *v40);
      if ( DeckConditionServantNumAndPosition )
      {
        DeckConditionServantNumAndPosition = System_Collections_Generic_List_object___get_Item(v46, v50, *v40);
        if ( !DeckConditionServantNumAndPosition )
          goto LABEL_164;
        if ( *((_QWORD *)DeckConditionServantNumAndPosition + 3) )
        {
          v51 = v38;
          v52 = v40;
          Item = System_Collections_Generic_List_object___get_Item(v46, v50, *v40);
          servantEntity = v43->fields.servantEntity;
          svtLimitCount = v43->fields.svtLimitCount;
          v56 = (System_Collections_Generic_IEnumerable_TSource__o *)Item;
          DeckConditionServantNumAndPosition = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(v43, 0LL);
          if ( !servantEntity )
            goto LABEL_164;
          Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                 servantEntity,
                                                                                 svtLimitCount,
                                                                                 (int32_t)DeckConditionServantNumAndPosition,
                                                                                 0LL);
          v58 = System_Linq_Enumerable__Intersect_int_(
                  v56,
                  Individuality,
                  (const MethodInfo_2F28B34 *)Method_System_Linq_Enumerable_Intersect_int___);
          v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       v58,
                                                                       (const MethodInfo_2F3C24C *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( System_Collections_Generic_List_Int32Enum___get_Item(
                 v74,
                 v50,
                 (const MethodInfo_35656F4 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
          {
            DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                           v59,
                                                           (const MethodInfo_2F0EF80 *)Method_System_Linq_Enumerable_Any_int___);
            v40 = v52;
            v38 = v51;
            if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) != 0 )
              goto LABEL_132;
LABEL_128:
            v49 = 1;
            goto LABEL_130;
          }
          DeckConditionServantNumAndPosition = (void *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                         v74,
                                                         v50,
                                                         (const MethodInfo_35656F4 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          v40 = v52;
          if ( (_DWORD)DeckConditionServantNumAndPosition == 2 )
          {
            DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                           v59,
                                                           (const MethodInfo_2F0EF80 *)Method_System_Linq_Enumerable_Any_int___);
            v38 = v51;
            if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
              goto LABEL_132;
            goto LABEL_128;
          }
          v49 = 1;
          v38 = v51;
        }
      }
LABEL_130:
      ++v50;
    }
    while ( v50 < v46->fields._size );
    if ( (v49 & 1) != 0 )
    {
      v43->fields._IsErrorNeedIndividuality_k__BackingField = 1;
      LODWORD(DeckConditionServantNumAndPosition) = 23;
      return (int)DeckConditionServantNumAndPosition;
    }
LABEL_132:
    max_length = v38->max_length;
    ++v41;
  }
  while ( v41 < max_length );
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
    v61 = this->fields.memberList;
    if ( !v61 )
      goto LABEL_164;
    if ( (unsigned int)i >= v61->max_length )
      goto LABEL_165;
    v62 = v61->m_Items[(int)i];
    if ( !v62 )
      goto LABEL_164;
    if ( v62->fields.userServantEntity )
      break;
LABEL_158:
    ;
  }
  v63 = v62->fields.servantEntity;
  if ( !v63 )
LABEL_164:
    sub_1B4D1EC(DeckConditionServantNumAndPosition, method);
  v65 = *(_QWORD *)&v63->fields.baseSvtId.fields.currentCryptoKey;
  v64 = *(_QWORD *)&v63->fields.baseSvtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v75.fields.currentCryptoKey = v65;
  *(_QWORD *)&v75.fields.fakeValue = v64;
  v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v75, 0LL);
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
      v68 = this->fields.memberList;
      if ( !v68 )
        goto LABEL_164;
      if ( j >= v68->max_length )
        goto LABEL_165;
      v69 = v68->m_Items[j];
      if ( !v69 )
        goto LABEL_164;
      if ( v69->fields.userServantEntity )
      {
        v70 = v69->fields.servantEntity;
        if ( !v70 )
          goto LABEL_164;
        v72 = *(_QWORD *)&v70->fields.baseSvtId.fields.currentCryptoKey;
        v71 = *(_QWORD *)&v70->fields.baseSvtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v76.fields.currentCryptoKey = v72;
        *(_QWORD *)&v76.fields.fakeValue = v71;
        if ( v66 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v76, 0LL) )
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

  if ( (byte_49B6984 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, *(_QWORD *)&deckMemberCount);
    byte_49B6984 = 1;
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
    sub_1B4D1EC(questRestrictionInfo, v11);
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
      sub_1B4D1F4(questRestrictionInfo, v11);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_long__o *v6; // x20
  __int64 EquipUserSvtId; // x0
  __int64 v8; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x8
  __int64 v10; // x23
  int max_length; // w9
  Il2CppClass **v12; // x8
  PartyOrganizationListViewItem_o *v13; // x21
  struct System_Int64_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10

  if ( (byte_49B698A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__ToArray__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long___ctor__, v4);
    sub_1B4CF90(&System_Collections_Generic_List_long__TypeInfo, v5);
    byte_49B698A = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_1B4D1DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_35679BC *)Method_System_Collections_Generic_List_long___ctor__);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_15;
  v10 = 0LL;
  while ( 1 )
  {
    max_length = memberList->max_length;
    if ( (int)v10 >= max_length )
      break;
    if ( (unsigned int)v10 >= max_length )
      sub_1B4D1F4(EquipUserSvtId, v8);
    v12 = &memberList->obj.klass + v10;
    v13 = (PartyOrganizationListViewItem_o *)v12[4];
    if ( !v13 )
      goto LABEL_15;
    EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)v12[4], 0LL);
    if ( EquipUserSvtId >= 1 )
    {
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v13, 0LL);
      if ( !v6 )
        goto LABEL_15;
      items = v6->fields._items;
      v15 = Method_System_Collections_Generic_List_long__Add__;
      ++v6->fields._version;
      if ( !items )
        goto LABEL_15;
      size = v6->fields._size;
      v8 = EquipUserSvtId;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v6,
          EquipUserSvtId,
          *(const MethodInfo_3568210 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v6->fields._size = size + 1;
        items->m_Items[size] = EquipUserSvtId;
      }
    }
    memberList = this->fields.memberList;
    ++v10;
    if ( !memberList )
      goto LABEL_15;
  }
  if ( !v6 )
LABEL_15:
    sub_1B4D1EC(EquipUserSvtId, v8);
  return System_Collections_Generic_List_long___ToArray(
           v6,
           (const MethodInfo_3569CC8 *)Method_System_Collections_Generic_List_long__ToArray__);
}


bool __fastcall PartyListViewItem__GetEventUpVal(
        PartyListViewItem_o *this,
        int32_t *eventId,
        EventUpValInfo_array **eventUpValList,
        const MethodInfo *method)
{
  PartyListViewItem_o *v6; // x20
  __int64 v7; // x1
  struct EventUpValSetupInfo_o *setupInfo; // x8
  __int64 v9; // x9
  BalanceConfig_c *v10; // x0
  EventUpValInfo_array *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  unsigned __int64 i; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  EventUpValInfo_array *v16; // x8

  v6 = this;
  if ( (byte_49B6991 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, eventId);
    this = (PartyListViewItem_o *)sub_1B4CF90(&EventUpValInfo___TypeInfo, v7);
    byte_49B6991 = 1;
  }
  setupInfo = v6->fields.setupInfo;
  if ( setupInfo )
  {
    setupInfo = (struct EventUpValSetupInfo_o *)setupInfo->fields.eventIdList;
    if ( !setupInfo )
LABEL_23:
      sub_1B4D1EC(this, eventId);
    v9 = *(_QWORD *)&setupInfo->fields.questPhase;
    if ( v9 )
    {
      if ( !(_DWORD)v9 )
LABEL_24:
        sub_1B4D1F4(this, eventId);
      LODWORD(setupInfo) = setupInfo->fields.eventIdList;
    }
    else
    {
      LODWORD(setupInfo) = 0;
    }
  }
  *eventId = (int)setupInfo;
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  v11 = (EventUpValInfo_array *)sub_1B4D038(EventUpValInfo___TypeInfo, (unsigned int)v10->static_fields->DeckMemberMax);
  *eventUpValList = v11;
  sub_1B4CF34((CGThumbnailListItem_o *)eventUpValList, (int32_t)v11, v12, v13);
  for ( i = 0LL; ; ++i )
  {
    this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= this->fields.trendDispWaveBattleEnemyClassIds->m_Items[32] )
      break;
    memberList = v6->fields.memberList;
    if ( !memberList )
      goto LABEL_23;
    if ( i >= memberList->max_length )
      goto LABEL_24;
    this = (PartyListViewItem_o *)memberList->m_Items[i];
    if ( this )
    {
      v16 = *eventUpValList;
      if ( !*eventUpValList )
        goto LABEL_23;
      if ( i >= v16->max_length )
        goto LABEL_24;
      PartyOrganizationListViewItem__GetEventUpVal((PartyOrganizationListViewItem_o *)this, &v16->m_Items[i], 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  int current; // w22
  DeckServantData_o *v20; // x8
  QuestRestrictionInfo_o *v21; // x0
  const MethodInfo *v22; // x2
  struct QuestRestrictionInfo_o *v23; // x8
  int servantNumMax; // w9
  PartyListViewItem___c__DisplayClass33_0_o *v25; // x21
  System_Func_object__bool__o *v26; // x23
  struct QuestRestrictionInfo_o *v27; // x8
  System_Collections_Generic_List_Enumerator_int__o v29; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49B6974 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_FollowerInfo___, deck);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9);
    sub_1B4CF90(&System_Func_FollowerInfo__bool__TypeInfo, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11);
    sub_1B4CF90(&Method_PartyListViewItem___c__DisplayClass33_0__GetFollowerIndex_b__0__, v12);
    sub_1B4CF90(&PartyListViewItem___c__DisplayClass33_0_TypeInfo, v13);
    byte_49B6974 = 1;
  }
  memset(&v30, 0, sizeof(v30));
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      (System_Collections_Generic_List_int__o *)questRestrictionInfo,
      (const MethodInfo_3563C8C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v30 = v29;
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v30,
              (const MethodInfo_3304A70 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
      if ( !v15 )
        break;
      deckInfo = deck->fields.deckInfo;
      if ( !deckInfo )
        sub_1B4D1EC(v15, v16);
      svts = deckInfo->fields.svts;
      if ( !svts )
        sub_1B4D1EC(v15, v16);
      current = v30.fields._current;
      if ( v30.fields._current - 1 >= svts->max_length )
        sub_1B4D1F4(v15, v16);
      v20 = svts->m_Items[v30.fields._current - 1];
      if ( !v20 )
        sub_1B4D1EC(v15, v16);
      v21 = this->fields.questRestrictionInfo;
      if ( !v21 )
        sub_1B4D1EC(0LL, v16);
      if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_41066216(v21, v20->fields.initPos, 0LL) )
        goto LABEL_38;
    }
    current = 0;
LABEL_38:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v30,
      (const MethodInfo_3304A6C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  v23 = this->fields.questRestrictionInfo;
  if ( !v23 )
    return current;
  servantNumMax = v23->fields.servantNumMax;
  if ( servantNumMax >= 1 && servantNumMax < current )
  {
LABEL_31:
    v27 = this->fields.questRestrictionInfo;
    if ( v27 )
    {
      if ( fixNpcFollowerInfoList )
        return PartyListViewItem__GetSupportInitIndex(this, fixNpcFollowerInfoList, v22);
      else
        return v27->fields.supportInitIndex;
    }
    return 0;
  }
  if ( fixNpcFollowerInfoList && !v23->fields.isNpcEditablePos )
  {
    v25 = (PartyListViewItem___c__DisplayClass33_0_o *)sub_1B4D1DC(PartyListViewItem___c__DisplayClass33_0_TypeInfo);
    PartyListViewItem___c__DisplayClass33_0___ctor(v25, 0LL);
    if ( v25 )
    {
      v25->fields.chkIndex = current;
      v26 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v26,
        (Il2CppObject *)v25,
        Method_PartyListViewItem___c__DisplayClass33_0__GetFollowerIndex_b__0__,
        0LL);
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)fixNpcFollowerInfoList,
              (System_Func_T__bool__o *)v26,
              (const MethodInfo_2EEC494 *)Method_BasicHelper_Any_FollowerInfo___) )
        return current;
      goto LABEL_31;
    }
LABEL_39:
    sub_1B4D1EC(questRestrictionInfo, deck);
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

  if ( (byte_49B6990 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    byte_49B6990 = 1;
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
      sub_1B4D1EC(v5, method);
    if ( v3 >= memberList->max_length )
      sub_1B4D1F4(v5, method);
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
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  System_Boolean_array *v6; // x20
  BalanceConfig_c *v7; // x0
  unsigned __int64 i; // x22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v10; // x8

  if ( (byte_49B698F & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    sub_1B4CF90(&bool___TypeInfo, v3);
    byte_49B698F = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v6 = (System_Boolean_array *)sub_1B4D038(bool___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
  v7 = BalanceConfig_TypeInfo;
  for ( i = 0LL; ; ++i )
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
    if ( i >= memberList->max_length )
      goto LABEL_18;
    v10 = memberList->m_Items[i];
    if ( v10 )
    {
      if ( !v6 )
LABEL_17:
        sub_1B4D1EC(v7, v5);
      if ( i >= v6->max_length )
LABEL_18:
        sub_1B4D1F4(v7, v5);
      v6->m_Items[i + 4] = v10->fields.isFollower;
    }
  }
  return v6;
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
    sub_1B4D1EC(this, num);
  if ( memberList->max_length <= num )
    sub_1B4D1F4(this, *(_QWORD *)&num);
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
    sub_1B4D1EC(this, npcSvtIds);
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
        sub_1B4D1F4(myServantNumMax, npcSvtIds);
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
  __int64 v3; // x1
  int32_t menuKind; // w8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int dialogMessageInfoDictionary; // w23
  PartyOrganizationListViewItem_o *v7; // x20
  il2cpp_array_size_t v8; // w24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int TotalCostRestriction; // w0
  QuestRestrictionInfo_o *v12; // x0
  int32_t FixedServantPositionCount; // w20
  il2cpp_array_size_t v14; // w25
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

  if ( (byte_49B6986 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_49B6986 = 1;
  }
  menuKind = this->fields.menuKind;
  if ( menuKind == 1 )
    goto LABEL_4;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( menuKind == 3 )
  {
    if ( !questRestrictionInfo )
LABEL_47:
      sub_1B4D1EC(questRestrictionInfo, method);
    questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(
                                                       questRestrictionInfo,
                                                       0LL);
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
        if ( v8 >= memberList->max_length )
          goto LABEL_48;
        questRestrictionInfo = (QuestRestrictionInfo_o *)memberList->m_Items[v8];
        if ( !questRestrictionInfo )
          goto LABEL_47;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)questRestrictionInfo, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(
                                                           SvtId,
                                                           0LL);
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
      v12 = this->fields.questRestrictionInfo;
      if ( !v12 )
        goto LABEL_4;
      FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(v12, 0LL);
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
        if ( (signed int)v14 >= SHIDWORD(questRestrictionInfo->fields.uniqueSvtRestrictionEntity[2].fields.name) )
          break;
        v18 = this->fields.memberList;
        if ( !v18 )
          goto LABEL_47;
        if ( v14 >= v18->max_length )
LABEL_48:
          sub_1B4D1F4(questRestrictionInfo, method);
        v19 = &v18->obj.klass + (int)v14;
        v20 = v19[4];
        if ( !v20 )
          goto LABEL_47;
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction((PartyOrganizationListViewItem_o *)v19[4], 0LL) )
        {
          LODWORD(questRestrictionInfo) = 18;
          return (int)questRestrictionInfo;
        }
        ++v14;
        v17 |= BYTE2(v20->_2.unity_user_data) != 0;
        v16 |= BYTE3(v20->_2.unity_user_data) != 0;
        FixedServantPositionCount -= BYTE6(v20->_2.unity_user_data) & 1;
        v15 |= BYTE4(v20->_2.unity_user_data) != 0;
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


int32_t __fastcall PartyListViewItem__GetSupportInitIndex(
        PartyListViewItem_o *this,
        System_Collections_Generic_List_FollowerInfo__o *fixNpcFollowerInfoList,
        const MethodInfo *method)
{
  PartyListViewItem_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t supportInitIndex; // w20
  int32_t v13; // w23
  BalanceConfig_c *v14; // x0
  PartyListViewItem___c__DisplayClass34_0_o *v15; // x21
  System_Func_object__bool__o *v16; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  int myServantNumMax; // [xsp+Ch] [xbp-64h]

  v4 = this;
  if ( (byte_49B6975 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, fixNpcFollowerInfoList);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_FollowerInfo___, v5);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_FollowerInfo___, v6);
    sub_1B4CF90(&System_Func_FollowerInfo__bool__TypeInfo, v7);
    sub_1B4CF90(&Method_PartyListViewItem___c__DisplayClass34_0__GetSupportInitIndex_b__0__, v8);
    this = (PartyListViewItem_o *)sub_1B4CF90(&PartyListViewItem___c__DisplayClass34_0_TypeInfo, v9);
    byte_49B6975 = 1;
  }
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_15:
    sub_1B4D1EC(this, fixNpcFollowerInfoList);
  supportInitIndex = questRestrictionInfo->fields.supportInitIndex;
  if ( supportInitIndex <= 0 )
  {
    myServantNumMax = questRestrictionInfo->fields.myServantNumMax;
    v13 = 0;
    while ( 1 )
    {
      v14 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v14 = BalanceConfig_TypeInfo;
      }
      if ( v13 >= v14->static_fields->DeckMemberMax )
        break;
      v15 = (PartyListViewItem___c__DisplayClass34_0_o *)sub_1B4D1DC(PartyListViewItem___c__DisplayClass34_0_TypeInfo);
      PartyListViewItem___c__DisplayClass34_0___ctor(v15, 0LL);
      if ( !v15 )
        goto LABEL_15;
      v15->fields.chkIdx = ++v13;
      v16 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v16,
        (Il2CppObject *)v15,
        Method_PartyListViewItem___c__DisplayClass34_0__GetSupportInitIndex_b__0__,
        0LL);
      v17 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)fixNpcFollowerInfoList,
              (System_Func_TSource__bool__o *)v16,
              (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      if ( !System_Linq_Enumerable__Any_object_(
              v17,
              (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
      {
        if ( myServantNumMax < 1 )
          return v15->fields.chkIdx;
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
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  ServantEntity_array *v8; // x20
  unsigned __int64 v9; // x24
  CGThumbnailListItem_o *i; // x21
  BalanceConfig_c *v11; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v13; // x8
  CGThumbnailListItem_c *servantEntity; // x22
  __int64 v16; // x0

  if ( (byte_49B698D & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    sub_1B4CF90(&ServantEntity___TypeInfo, v3);
    byte_49B698D = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v8 = (ServantEntity_array *)sub_1B4D038(ServantEntity___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
  v9 = 0LL;
  for ( i = (CGThumbnailListItem_o *)v8->m_Items; ; i = (CGThumbnailListItem_o *)((char *)i + 8) )
  {
    v11 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
        sub_1B4D1EC(v11, v5);
      servantEntity = (CGThumbnailListItem_c *)v13->fields.servantEntity;
      if ( servantEntity )
      {
        v11 = (BalanceConfig_c *)sub_1B4D0CC(servantEntity, v8->obj.klass->_1.element_class);
        if ( !v11 )
        {
          v16 = sub_1B4D210();
          sub_1B4D0B8(v16, 0LL);
        }
      }
      if ( v9 >= v8->max_length )
LABEL_20:
        sub_1B4D1F4(v11, v5);
      i->klass = servantEntity;
      sub_1B4CF34(i, (int32_t)servantEntity, v6, v7);
    }
    ++v9;
  }
  return v8;
}


System_String_array *__fastcall PartyListViewItem__GetSvtNameList(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  System_String_array *v6; // x20
  unsigned __int64 v7; // x23
  CGThumbnailListItem_o *i; // x21
  CGThumbnailListItem_c *SvtNameText; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_49B698E & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    sub_1B4CF90(&string___TypeInfo, v3);
    byte_49B698E = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v6 = (System_String_array *)sub_1B4D038(string___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
  v7 = 0LL;
  for ( i = (CGThumbnailListItem_o *)v6->m_Items; ; i = (CGThumbnailListItem_o *)((char *)i + 8) )
  {
    SvtNameText = (CGThumbnailListItem_c *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      SvtNameText = (CGThumbnailListItem_c *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v7 >= *((int *)SvtNameText->static_fields + 39) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( v7 >= memberList->max_length )
      goto LABEL_18;
    v11 = memberList->m_Items[v7];
    if ( v11 )
    {
      SvtNameText = (CGThumbnailListItem_c *)PartyOrganizationListViewItem__get_SvtNameText(v11, 0LL);
      if ( !v6 )
LABEL_17:
        sub_1B4D1EC(SvtNameText, v5);
      if ( v7 >= v6->max_length )
LABEL_18:
        sub_1B4D1F4(SvtNameText, v5);
      i->klass = SvtNameText;
      sub_1B4CF34(i, (int32_t)SvtNameText, v12, v13);
    }
    ++v7;
  }
  return v6;
}


UserDeckEntity_o *__fastcall PartyListViewItem__GetUserDeck(
        PartyListViewItem_o *this,
        PartyListViewItem_o *baseItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_String_o *deckName; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v15; // x23
  int32_t max_length; // w22
  int64_t userEquipId; // x20
  DeckServant_o *v18; // x21
  __int64 v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct PartyOrganizationListViewItem_array *v22; // x24
  __int64 v23; // x25
  __int64 v24; // x29
  int v25; // w28
  PartyOrganizationListViewItem_o *v26; // x22
  __int64 v27; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v29; // q0
  System_Int64_array *EquipList; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  _DWORD *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  _DWORD *v38; // x0
  __int64 v41; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+40h] [xbp-80h]

  if ( (byte_49B6988 & 1) == 0 )
  {
    sub_1B4CF90(&DeckServantData_TypeInfo, baseItem);
    sub_1B4CF90(&DeckServant_TypeInfo, v5);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1B4CF90(&UserDeckEntity_TypeInfo, v7);
    byte_49B6988 = 1;
  }
  v8 = sub_1B4D1DC(UserDeckEntity_TypeInfo);
  UserDeckEntity___ctor((UserDeckEntity_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_29;
  *(_QWORD *)(v8 + 16) = this->fields.id;
  *(_DWORD *)(v8 + 32) = this->fields.index + 1;
  deckName = this->fields.deckName;
  *(_QWORD *)(v8 + 40) = deckName;
  sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 40), (int32_t)deckName, v11, v12);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_29;
  v15 = baseItem ? baseItem : this;
  max_length = memberList->max_length;
  userEquipId = v15->fields.userEquipId;
  v18 = (DeckServant_o *)sub_1B4D1DC(DeckServant_TypeInfo);
  DeckServant___ctor_39429276(v18, max_length, userEquipId, 0LL);
  *(_QWORD *)(v8 + 48) = v18;
  v19 = v8 + 48;
  sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 48), (int32_t)v18, v20, v21);
  v22 = v15->fields.memberList;
  if ( !v22 )
    goto LABEL_29;
  v23 = *(_QWORD *)&v22->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = 0LL;
    v25 = 1;
    while ( 1 )
    {
      v26 = v22->m_Items[v24];
      v27 = sub_1B4D1DC(DeckServantData_TypeInfo);
      DeckServantData___ctor((DeckServantData_o *)v27, 0LL);
      if ( !v27 )
        break;
      *(_DWORD *)(v27 + 16) = v25;
      if ( !v26 )
        break;
      userServantEntity = v26->fields.userServantEntity;
      if ( userServantEntity )
      {
        v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v44.fields.fakeValue = v29;
      }
      else
      {
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v43, 0LL, 0LL);
        v44 = v43;
      }
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v42 = v44;
      *(_QWORD *)(v27 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v42, 0LL);
      *(_BYTE *)(v27 + 56) = v26->fields.isFollower;
      EquipList = PartyOrganizationListViewItem__GetEquipList(v26, 0LL);
      *(_QWORD *)(v27 + 40) = EquipList;
      sub_1B4CF34((CGThumbnailListItem_o *)(v27 + 40), (int32_t)EquipList, v31, v32);
      *(_DWORD *)(v27 + 76) = v26->fields._InitPos_k__BackingField;
      if ( !*(_QWORD *)v19 )
        break;
      v33 = *(_DWORD **)(*(_QWORD *)v19 + 16LL);
      if ( !v33 )
        break;
      v34 = sub_1B4D0CC(v27, *(_QWORD *)(*(_QWORD *)v33 + 64LL));
      if ( !v34 )
      {
        v41 = sub_1B4D210();
        sub_1B4D0B8(v41, 0LL);
      }
      if ( (unsigned int)(v25 - 1) < v33[6] )
      {
        v38 = &v33[2 * v24];
        *((_QWORD *)v38 + 4) = v27;
        sub_1B4CF34((CGThumbnailListItem_o *)(v38 + 8), v27, v36, v37);
        if ( (_DWORD)v23 == v25 )
          return (UserDeckEntity_o *)v8;
        v24 = v25;
        if ( v25++ < v22->max_length )
          continue;
      }
      sub_1B4D1F4(v34, v35);
    }
LABEL_29:
    sub_1B4D1EC(v9, v10);
  }
  return (UserDeckEntity_o *)v8;
}


UserEventDeckEntity_o *__fastcall PartyListViewItem__GetUserEventDeck(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x1
  NetworkManager_c *IsUseOldMaster; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x22
  int64_t userEquipId; // x21
  DeckServant_o *v12; // x0
  int32_t max_length; // w1
  DeckServant_o *v14; // x22
  __int64 v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct PartyOrganizationListViewItem_array *v18; // x8
  unsigned __int64 v19; // x28
  unsigned __int64 v20; // x9
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
  const MethodInfo *v31; // x3
  int32_t InitPos_k__BackingField; // w8
  int v33; // w8
  unsigned int *v34; // x22
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  unsigned int *v37; // x0
  __int64 v39; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41[2]; // [xsp+20h] [xbp-A0h] BYREF

  if ( (byte_49B6989 & 1) == 0 )
  {
    sub_1B4CF90(&DeckServantData_TypeInfo, method);
    sub_1B4CF90(&DeckServant_TypeInfo, v3);
    sub_1B4CF90(&NetworkManager_TypeInfo, v4);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1B4CF90(&UserEventDeckEntity_TypeInfo, v6);
    byte_49B6989 = 1;
  }
  memset(&v41[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v7 = sub_1B4D1DC(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor((UserEventDeckEntity_o *)v7, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v8);
    byte_49B57A5 = 1;
  }
  IsUseOldMaster = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    IsUseOldMaster = NetworkManager_TypeInfo;
  }
  if ( !v7 )
    goto LABEL_55;
  *(_QWORD *)(v7 + 16) = IsUseOldMaster->static_fields->userIdNumber;
  *(_DWORD *)(v7 + 24) = this->fields.id;
  *(_DWORD *)(v7 + 28) = this->fields.index + 1;
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_55;
  userEquipId = this->fields.userEquipId;
  v12 = (DeckServant_o *)sub_1B4D1DC(DeckServant_TypeInfo);
  max_length = memberList->max_length;
  v14 = v12;
  DeckServant___ctor_39429276(v12, max_length, userEquipId, 0LL);
  *(_QWORD *)(v7 + 32) = v14;
  v15 = v7 + 32;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 32), (int32_t)v14, v16, v17);
  v18 = this->fields.memberList;
  if ( !v18 )
LABEL_55:
    sub_1B4D1EC(IsUseOldMaster, v8);
  v19 = 0LL;
  while ( 1 )
  {
    v20 = v18->max_length;
    if ( (__int64)v19 >= (int)v20 )
      return (UserEventDeckEntity_o *)v7;
    if ( v19 >= v20 )
      goto LABEL_56;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v22 = v18->m_Items[v19];
    if ( !questRestrictionInfo )
    {
      isNpcEditablePos = 0;
      goto LABEL_28;
    }
    IsUseOldMaster = (NetworkManager_c *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
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
                        0LL);
      v23 = this->fields.questRestrictionInfo;
      isNpcEditablePos = IsEditablePos;
      if ( !v23 )
        goto LABEL_28;
    }
    IsUseOldMaster = (NetworkManager_c *)QuestRestrictionInfo__IsNpcMulitipleOrOnly(v23, 0LL);
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
    v26 = sub_1B4D1DC(DeckServantData_TypeInfo);
    DeckServantData___ctor((DeckServantData_o *)v26, 0LL);
    if ( !v26 )
      goto LABEL_55;
    *(_DWORD *)(v26 + 16) = v19 + 1;
    if ( !v22 )
      goto LABEL_55;
    userServantEntity = v22->fields.userServantEntity;
    if ( userServantEntity )
    {
      v28 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v41[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v41[1].fields.fakeValue = v28;
    }
    else
    {
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v41, 0LL, 0LL);
      v41[1] = v41[0];
    }
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v40 = v41[1];
    *(_QWORD *)(v26 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v40, 0LL);
    *(_BYTE *)(v26 + 56) = v22->fields.isFollower;
    EquipList = PartyOrganizationListViewItem__GetEquipList(v22, 0LL);
    *(_QWORD *)(v26 + 40) = EquipList;
    sub_1B4CF34((CGThumbnailListItem_o *)(v26 + 40), (int32_t)EquipList, v30, v31);
    InitPos_k__BackingField = v22->fields._InitPos_k__BackingField;
    *(_QWORD *)(v26 + 64) = 0LL;
    *(_DWORD *)(v26 + 76) = InitPos_k__BackingField;
    if ( *(_QWORD *)(v26 + 24) )
    {
      v33 = 0;
LABEL_43:
      if ( (isNpcEditablePos & v33 & 1) != 0 )
      {
        *(_QWORD *)(v26 + 64) = v22->fields.npcFollowerSvtId;
        if ( v22->fields.isFixNpc )
          *(_BYTE *)(v26 + 56) = 0;
      }
      goto LABEL_46;
    }
    if ( !v22->fields.isMyServantOrNpcRestriction || !v22->fields.isFollower )
    {
      v33 = !v22->fields.isMyServantOrNpcRestriction;
      goto LABEL_43;
    }
    *(_QWORD *)(v26 + 64) = v22->fields.npcFollowerSvtId;
LABEL_46:
    if ( !*(_QWORD *)v15 )
      goto LABEL_55;
    v34 = *(unsigned int **)(*(_QWORD *)v15 + 16LL);
    if ( !v34 )
      goto LABEL_55;
    IsUseOldMaster = (NetworkManager_c *)sub_1B4D0CC(v26, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
    if ( !IsUseOldMaster )
    {
      v39 = sub_1B4D210();
      sub_1B4D0B8(v39, 0LL);
    }
    if ( v19 >= v34[6] )
LABEL_56:
      sub_1B4D1F4(IsUseOldMaster, v8);
    v37 = &v34[2 * v19];
    *((_QWORD *)v37 + 4) = v26;
    sub_1B4CF34((CGThumbnailListItem_o *)(v37 + 8), v26, v35, v36);
    ++v19;
LABEL_51:
    v18 = this->fields.memberList;
    if ( !v18 )
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

  if ( (byte_49B6973 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, userServantList);
    byte_49B6973 = 1;
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
        sub_1B4D1EC(v6, userServantList);
      if ( i >= npcSvtIds->max_length )
LABEL_17:
        sub_1B4D1F4(v6, userServantList);
      if ( !npcSvtIds->m_Items[i] )
        return i;
    }
  }
  LODWORD(i) = -1;
  return i;
}


System_Int32_array *__fastcall PartyListViewItem__GetWaveBattleEnemyClassIds(
        PartyListViewItem_o *this,
        bool isTrendDisp,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 176LL;
  if ( isTrendDisp )
    v3 = 184LL;
  return *(System_Int32_array **)((char *)&this->klass + v3);
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
      sub_1B4D1EC(this, userSvtId);
    v6 = 0LL;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
        sub_1B4D1F4(this, userSvtId);
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

  if ( (byte_49B6981 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    byte_49B6981 = 1;
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
      sub_1B4D1F4(v3, method);
    v8 = memberList->m_Items[v5];
    if ( !v8 )
LABEL_12:
      sub_1B4D1EC(v3, method);
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

  if ( (byte_49B6980 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    byte_49B6980 = 1;
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
      sub_1B4D1F4(v3, method);
    v6 = memberList->m_Items[i];
    if ( !v6 )
LABEL_15:
      sub_1B4D1EC(v3, method);
    if ( v6->fields.userServantEntity )
      return 0;
  }
  if ( this->fields.isDeckNameDefault )
    return 1;
  deckName = this->fields.deckName;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, method);
  return System_String__op_Equality(deckName, DefaultDeckName, 0LL);
}


bool __fastcall PartyListViewItem__IsDuplicateEventBonus(PartyListViewItem_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  signed __int64 i; // x21
  signed __int64 DeckMemberMax; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x9
  PartyOrganizationListViewItem_o *v7; // x9

  if ( (byte_49B6994 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    byte_49B6994 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  for ( i = 0LL; ; ++i )
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
      sub_1B4D1EC(v3, method);
    if ( i >= (unsigned __int64)memberList->max_length )
      sub_1B4D1F4(v3, method);
    v7 = memberList->m_Items[i];
    if ( v7 )
    {
      if ( v7->fields._IsDuplicateBonus_k__BackingField )
        break;
    }
  }
  return i < DeckMemberMax;
}


bool __fastcall PartyListViewItem__IsEquipEmpty(PartyListViewItem_o *this, const MethodInfo *method)
{
  signed int v3; // w8
  BalanceConfig_c *v4; // x0
  signed int v5; // w21
  int32_t DeckMemberMax; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int64_t EquipUserSvtId; // x0

  if ( (byte_49B6982 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    byte_49B6982 = 1;
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
      sub_1B4D1F4(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[v5];
    if ( !v4 )
LABEL_12:
      sub_1B4D1EC(v4, method);
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
  if ( (byte_49B698B & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1B4CF90(
                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                    *(_QWORD *)&svtId);
    byte_49B698B = 1;
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
          sub_1B4D1F4(this, *(_QWORD *)&svtId);
        this = (PartyListViewItem_o *)memberList->m_Items[v7];
        if ( !this )
          break;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)this, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(EquipSvtId, 0LL) == svtId;
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
      sub_1B4D1EC(this, *(_QWORD *)&svtId);
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

  if ( (byte_49B6972 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, deck);
    byte_49B6972 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_29:
    sub_1B4D1EC(questRestrictionInfo, deck);
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
      sub_1B4D1F4(questRestrictionInfo, deck);
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
      if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_41066216(
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


bool __fastcall PartyListViewItem__IsSpecificMenuKind_32077264(
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

  if ( (byte_49B697F & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    byte_49B697F = 1;
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
    sub_1B4D1F4(v4, method);
  v4 = memberList->m_Items[0];
  if ( !v4 )
LABEL_16:
    sub_1B4D1EC(v4, method);
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

  if ( (byte_49B6978 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    byte_49B6978 = 1;
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
      sub_1B4D1F4(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[v5];
    if ( !v4 )
LABEL_12:
      sub_1B4D1EC(v4, method);
    HIDWORD(v4->vtable._2_GetHashCode.methodPtr) = i;
    PartyOrganizationListViewItem__Modify((PartyOrganizationListViewItem_o *)v4, 0LL);
  }
  PartyListViewItem__CheckRestriction(this, method);
  PartyListViewItem__UpdateEventEffect(this, v7);
}


void __fastcall PartyListViewItem__Set(PartyListViewItem_o *this, PartyListViewItem_o *item, const MethodInfo *method)
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
  il2cpp_array_size_t v16; // w24
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

  if ( (byte_49B6979 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, item);
    byte_49B6979 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
LABEL_20:
    sub_1B4D1EC(v5, v6);
  *(_QWORD *)&this->fields.menuKind = *(_QWORD *)&item->fields.menuKind;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v7, v8);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v11, v12);
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
    if ( (signed int)v16 >= *(_DWORD *)(*(_QWORD *)&v5->fields.classId + 156LL) )
      break;
    memberList = item->fields.memberList;
    if ( !memberList )
      goto LABEL_20;
    if ( v16 >= memberList->max_length )
      goto LABEL_21;
    v5 = memberList->m_Items[v16];
    if ( !v5 )
      goto LABEL_20;
    v18 = this->fields.memberList;
    v5 = PartyOrganizationListViewItem__Clone(v5, -1, 0LL);
    if ( !v18 )
      goto LABEL_20;
    v21 = v5;
    if ( v5 )
    {
      v5 = (PartyOrganizationListViewItem_o *)sub_1B4D0CC(v5, v18->obj.klass->_1.element_class);
      if ( !v5 )
      {
        v33 = sub_1B4D210();
        sub_1B4D0B8(v33, 0LL);
      }
    }
    if ( v16 >= v18->max_length )
      goto LABEL_21;
    v22 = &v18->obj.klass + (int)v16;
    v22[4] = (Il2CppClass *)v21;
    sub_1B4CF34((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v21, v19, v20);
    v23 = this->fields.memberList;
    if ( !v23 )
      goto LABEL_20;
    if ( v16 >= v23->max_length )
LABEL_21:
      sub_1B4D1F4(v5, v6);
    v24 = v23->m_Items[v16];
    if ( !v24 )
      goto LABEL_20;
    v24->fields._NowPos_k__BackingField = v15++;
  }
  this->fields.cost = item->fields.cost;
  this->fields.isDeckNameDefault = item->fields.isDeckNameDefault;
  deckName = item->fields.deckName;
  this->fields.deckName = deckName;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.deckName, (int32_t)deckName, v13, v14);
  this->fields.userEquipId = item->fields.userEquipId;
  waveBattleEnemyClassIds = item->fields.waveBattleEnemyClassIds;
  this->fields.waveBattleEnemyClassIds = waveBattleEnemyClassIds;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.waveBattleEnemyClassIds,
    (int32_t)waveBattleEnemyClassIds,
    v27,
    v28);
  trendDispWaveBattleEnemyClassIds = item->fields.trendDispWaveBattleEnemyClassIds;
  this->fields.trendDispWaveBattleEnemyClassIds = trendDispWaveBattleEnemyClassIds;
  p_trendDispWaveBattleEnemyClassIds = &this->fields.trendDispWaveBattleEnemyClassIds;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)p_trendDispWaveBattleEnemyClassIds,
    (int32_t)trendDispWaveBattleEnemyClassIds,
    v31,
    v32);
  *((_BYTE *)p_trendDispWaveBattleEnemyClassIds + 8) = item->fields._IsWaveBattleRestart_k__BackingField;
  *((_BYTE *)p_trendDispWaveBattleEnemyClassIds + 9) = item->fields._IsClearedWave_k__BackingField;
}


void __fastcall PartyListViewItem__SetDeckName(
        PartyListViewItem_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  struct System_String_o *v3; // x20
  const MethodInfo *v5; // x1
  System_String_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_String_o *DefaultDeckName; // x0
  struct System_String_o **p_deckName; // x19

  v3 = name;
  if ( System_String__IsNullOrEmpty(name, 0LL)
    || (v6 = PartyListViewItem__get_DefaultDeckName(this, v5), System_String__op_Equality(v3, v6, 0LL)) )
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
  sub_1B4CF34((CGThumbnailListItem_o *)p_deckName, (int32_t)v3, v7, v8);
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

  if ( (byte_49B697A & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, *(_QWORD *)&num);
    byte_49B697A = 1;
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
      sub_1B4D1F4(v8, *(_QWORD *)&num);
    v10 = &memberList->obj.klass + (int)i;
    v11 = (PartyOrganizationListViewItem_o *)v10[4];
    if ( !v11 )
LABEL_15:
      sub_1B4D1EC(v8, *(_QWORD *)&num);
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
    || (PartyOrganizationListViewItem__Modify_32268680((PartyOrganizationListViewItem_o *)this, item, 0LL),
        (v10 = v6->fields.memberList) == 0LL) )
  {
LABEL_11:
    sub_1B4D1EC(this, *(_QWORD *)&num);
  }
  if ( v10->max_length <= num )
LABEL_12:
    sub_1B4D1F4(this, *(_QWORD *)&num);
  this = (PartyListViewItem_o *)v10->m_Items[num];
  if ( !this )
    goto LABEL_11;
  v11 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0LL) + v11;
  PartyListViewItem__CheckRestriction(v6, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__SetMember_32132916(
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
  if ( memberList->max_length <= idx )
    goto LABEL_18;
  v6 = this;
  this = (PartyListViewItem_o *)memberList->m_Items[idx];
  if ( !this
    || (cost = v6->fields.cost,
        this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(
                                        (PartyOrganizationListViewItem_o *)this,
                                        0LL),
        v11 = v6->fields.memberList,
        v6->fields.cost = cost - (_DWORD)this,
        !v11) )
  {
LABEL_17:
    sub_1B4D1EC(this, *(_QWORD *)&idx);
  }
  if ( member )
  {
    this = (PartyListViewItem_o *)sub_1B4D0CC(member, v11->obj.klass->_1.element_class);
    if ( !this )
    {
      v16 = sub_1B4D210();
      sub_1B4D0B8(v16, 0LL);
    }
  }
  if ( v11->max_length <= idx )
    goto LABEL_18;
  v12 = &v11->obj.klass + idx;
  v12[4] = (Il2CppClass *)member;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 4), (int32_t)member, v9, v10);
  if ( v6->fields.menuKind == 9 )
  {
    v13 = v6->fields.memberList;
    if ( !v13 )
      goto LABEL_17;
    if ( v13->max_length <= idx )
      goto LABEL_18;
    this = (PartyListViewItem_o *)v13->m_Items[idx];
    if ( !this )
      goto LABEL_17;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)this,
      v6->fields.waveBattleEnemyClassIds,
      0LL);
  }
  v14 = v6->fields.memberList;
  if ( !v14 )
    goto LABEL_17;
  if ( v14->max_length <= idx )
LABEL_18:
    sub_1B4D1F4(this, *(_QWORD *)&idx);
  this = (PartyListViewItem_o *)v14->m_Items[idx];
  if ( !this )
    goto LABEL_17;
  v15 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0LL) + v15;
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
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  bool isWhole; // [xsp+Ch] [xbp-64h] BYREF

  isWhole = 0;
  if ( !npcFollowerInfoList )
LABEL_18:
    sub_1B4D1EC(this, follower);
  max_length = npcFollowerInfoList->max_length;
  v9 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = this;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1B4D1F4(this, follower);
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
        this = (PartyListViewItem_o *)QuestRestrictionInfo__IsRestriction_41047808(
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
          this = (PartyListViewItem_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_41069216(
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
    sub_1B4CF34((CGThumbnailListItem_o *)follower, (int32_t)v15, v23, v24);
    *followerClassId = v19->fields.classId;
  }
  return v9;
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
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x27
  EventUpValSetupInfo_o *setupInfo; // x25
  QuestRestrictionInfo_o *questRestrictionInfo; // x26
  PartyOrganizationListViewItem_o *v17; // x24
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppClass **v20; // x0
  const MethodInfo *v21; // x1
  __int64 v22; // x0

  if ( (byte_49B697B & 1) == 0 )
  {
    sub_1B4CF90(&PartyOrganizationListViewItem_TypeInfo, *(_QWORD *)&num);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v11);
    byte_49B697B = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance
    || (PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, initPos, follower, 0LL),
        memberList = this->fields.memberList,
        setupInfo = this->fields.setupInfo,
        questRestrictionInfo = this->fields.questRestrictionInfo,
        v17 = (PartyOrganizationListViewItem_o *)sub_1B4D1DC(PartyOrganizationListViewItem_TypeInfo),
        PartyOrganizationListViewItem___ctor_32260152(
          v17,
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
    sub_1B4D1EC(Instance, v13);
  }
  if ( v17 )
  {
    Instance = (Il2CppObject *)sub_1B4D0CC(v17, memberList->obj.klass->_1.element_class);
    if ( !Instance )
    {
      v22 = sub_1B4D210();
      sub_1B4D0B8(v22, 0LL);
    }
  }
  if ( memberList->max_length <= num )
    sub_1B4D1F4(Instance, v13);
  v20 = &memberList->obj.klass + num;
  v20[4] = (Il2CppClass *)v17;
  sub_1B4CF34((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v17, v18, v19);
  PartyListViewItem__CheckRestriction(this, v21);
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
    sub_1B4D1F4(this, *(_QWORD *)&num1);
  this = (PartyListViewItem_o *)memberList->m_Items[num1];
  if ( !this )
LABEL_7:
    sub_1B4D1EC(this, num1);
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
        sub_1B4D1F4(this, method);
      this = (PartyListViewItem_o *)memberList->m_Items[v4];
      if ( !this )
        break;
      PartyOrganizationListViewItem__UpdateEventEffect((PartyOrganizationListViewItem_o *)this, 0LL);
      max_length = memberList->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1B4D1EC(this, method);
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
        sub_1B4D1F4(this, method);
      this = (PartyListViewItem_o *)memberList->m_Items[v4];
      if ( !this )
        break;
      PartyOrganizationListViewItem__UpdateServantInfo((PartyOrganizationListViewItem_o *)this, 0LL);
      max_length = memberList->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1B4D1EC(this, method);
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
  __int64 v3; // x1
  System_String_o *v4; // x20
  Il2CppObject *v5; // x0
  int v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49B698C & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_10052/*"PARTY_ORGANIZATION_NAME_BASE"*/, v3);
    byte_49B698C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_10052/*"PARTY_ORGANIZATION_NAME_BASE"*/, 0LL);
  v7 = this->fields.index + 1;
  v5 = (Il2CppObject *)System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Format(v4, v5, 0LL);
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


void __fastcall PartyListViewItem___c__DisplayClass28_0___ctor(
        PartyListViewItem___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass28_0____ctor_b__0(
        PartyListViewItem___c__DisplayClass28_0_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.npcFollowerSvtId == this->fields.npcSvtId;
}


void __fastcall PartyListViewItem___c__DisplayClass28_1___ctor(
        PartyListViewItem___c__DisplayClass28_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass28_1____ctor_b__1(
        PartyListViewItem___c__DisplayClass28_1_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}


void __fastcall PartyListViewItem___c__DisplayClass28_2___ctor(
        PartyListViewItem___c__DisplayClass28_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass28_2____ctor_b__2(
        PartyListViewItem___c__DisplayClass28_2_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}


void __fastcall PartyListViewItem___c__DisplayClass28_3___ctor(
        PartyListViewItem___c__DisplayClass28_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass28_3____ctor_b__3(
        PartyListViewItem___c__DisplayClass28_3_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}


void __fastcall PartyListViewItem___c__DisplayClass33_0___ctor(
        PartyListViewItem___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass33_0___GetFollowerIndex_b__0(
        PartyListViewItem___c__DisplayClass33_0_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIndex;
}


void __fastcall PartyListViewItem___c__DisplayClass34_0___ctor(
        PartyListViewItem___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass34_0___GetSupportInitIndex_b__0(
        PartyListViewItem___c__DisplayClass34_0_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}