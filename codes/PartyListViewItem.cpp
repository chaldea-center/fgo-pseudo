void __fastcall PartyListViewItem___ctor(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationListViewItem_array *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4AFD9EB & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&PartyOrganizationListViewItem___TypeInfo, v3);
    byte_4AFD9EB = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct PartyOrganizationListViewItem_array *)sub_1BC30B0(
                                                       PartyOrganizationListViewItem___TypeInfo,
                                                       (unsigned int)v4->static_fields->DeckMemberMax);
  this->fields.memberList = v5;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_33200212(
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
  UserServantEntity_array *UserServantList; // x24
  int32_t FollowerIndex; // w0
  BalanceConfig_c *v32; // x8
  struct PartyOrganizationListViewItem_array *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x2
  int32_t v37; // w20
  struct DeckServant_o *v38; // x8
  struct DeckServantData_array *svts; // x8
  int32_t max_length; // w9
  DeckServantData_o *v41; // x8
  int32_t initPos; // w26
  int v43; // w9
  struct PartyOrganizationListViewItem_array *v44; // x19
  PartyOrganizationListViewItem_o *v45; // x0
  PartyOrganizationListViewItem_o *v46; // x25
  const MethodInfo *v47; // x3
  UserServantEntity_o *v48; // x24
  struct PartyOrganizationListViewItem_array *v49; // x19
  PartyListViewItem_o *v50; // x28
  FollowerInfo_o *v51; // x27
  UserDeckEntity_o *v52; // x23
  System_Int64_array *EquipList; // x29
  __int64 v54; // x8
  Il2CppClass **v55; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v58; // x0
  UserServantEntity_array *v62; // [xsp+40h] [xbp-80h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+50h] [xbp-70h]
  int32_t DeckMainMemberMax; // [xsp+58h] [xbp-68h]
  int32_t v65; // [xsp+5Ch] [xbp-64h]

  if ( (byte_4AFD9EC & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind);
    sub_1BC3008(&PartyOrganizationListViewItem___TypeInfo, v19);
    sub_1BC3008(&PartyOrganizationListViewItem_TypeInfo, v20);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v21);
    byte_4AFD9EC = 1;
  }
  ListViewItem___ctor_42769384((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v22, v23);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v24, v25);
  if ( !deck )
    goto LABEL_57;
  PartyListViewItem__SetDeckName(this, deck->fields.name, v28);
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_57;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.id;
  UserServantList = UserDeckEntity__GetUserServantList(deck, 0LL);
  FollowerIndex = UserDeckEntity__GetFollowerIndex(deck, 0LL);
  v32 = BalanceConfig_TypeInfo;
  DeckMainMemberMax = FollowerIndex;
  if ( FollowerIndex <= 0 )
  {
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v32 = BalanceConfig_TypeInfo;
    }
    DeckMainMemberMax = v32->static_fields->DeckMainMemberMax;
  }
  if ( !v32->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v32);
    v32 = BalanceConfig_TypeInfo;
  }
  v33 = (struct PartyOrganizationListViewItem_array *)sub_1BC30B0(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v32->static_fields->DeckMemberMax);
  this->fields.memberList = v33;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v33, v34, v35);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  if ( *(_QWORD *)&Instance->fields.sortIndex )
  {
    Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      follower = *(FollowerInfo_o **)&Instance->fields.sortIndex;
      Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        followerClassId = Instance->fields.sortValue0;
        Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          followerGrandGraphId = HIDWORD(Instance->fields.sortValue0);
          Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( Instance )
          {
            followerDeckId = Instance->fields.sortValue0B;
            goto LABEL_18;
          }
        }
      }
    }
LABEL_57:
    sub_1BC3264(Instance, v27);
  }
LABEL_18:
  v37 = 0;
  v62 = UserServantList;
  while ( 1 )
  {
    Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( v37 >= SHIDWORD(Instance->fields.servantEntity->fields.classPassive) )
      break;
    v38 = deck->fields.deckInfo;
    if ( !v38 )
      goto LABEL_57;
    svts = v38->fields.svts;
    if ( !svts )
      goto LABEL_57;
    max_length = svts->max_length;
    if ( v37 >= max_length )
    {
      v43 = v37 + 1;
      initPos = v37 + 1;
    }
    else
    {
      if ( v37 >= (unsigned int)max_length )
        goto LABEL_58;
      v41 = svts->m_Items[v37];
      if ( !v41 )
        goto LABEL_57;
      initPos = v41->fields.initPos;
      v43 = v37 + 1;
    }
    v65 = v43;
    if ( v43 == DeckMainMemberMax )
    {
      v44 = *p_memberList;
      v45 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
      v46 = v45;
      if ( follower )
      {
        PartyOrganizationListViewItem___ctor_33325708(
          v45,
          v37,
          follower,
          followerClassId,
          followerGrandGraphId,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          followerDeckId,
          initPos,
          0LL);
        if ( !v44 )
          goto LABEL_57;
      }
      else
      {
        PartyOrganizationListViewItem___ctor_33380072(v45, v37, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v44 )
          goto LABEL_57;
      }
      if ( v46 )
      {
        Instance = (PartyOrganizationListViewItem_o *)sub_1BC3144(v46, v44->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_59;
      }
      if ( v37 >= v44->max_length )
        goto LABEL_58;
      v55 = &v44->obj.klass + v37;
    }
    else
    {
      if ( !UserServantList )
        goto LABEL_57;
      if ( v37 >= UserServantList->max_length )
        goto LABEL_58;
      v48 = UserServantList->m_Items[v37];
      v49 = *p_memberList;
      if ( v48 )
      {
        v50 = this;
        v51 = follower;
        v52 = deck;
        EquipList = UserDeckEntity__GetEquipList(deck, v37, 0LL);
        v46 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_33369480(
          v46,
          v37,
          v48,
          EquipList,
          setupInfo,
          questRestrictionInfo,
          0LL,
          initPos,
          0LL,
          0,
          0,
          0LL);
        if ( !v49 )
          goto LABEL_57;
        UserServantList = v62;
        if ( v46 )
        {
          Instance = (PartyOrganizationListViewItem_o *)sub_1BC3144(v46, v49->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_59;
        }
        if ( v37 >= v49->max_length )
          goto LABEL_58;
        v54 = v37;
        deck = v52;
        follower = v51;
        this = v50;
      }
      else
      {
        v46 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_33380072(v46, v37, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v49 )
          goto LABEL_57;
        UserServantList = v62;
        if ( v46 )
        {
          Instance = (PartyOrganizationListViewItem_o *)sub_1BC3144(v46, v49->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_59:
            v58 = sub_1BC3288();
            sub_1BC3130(v58, 0LL);
          }
        }
        if ( v37 >= v49->max_length )
          goto LABEL_58;
        v54 = v37;
      }
      v55 = &v49->obj.klass + v54;
    }
    v55[4] = (Il2CppClass *)v46;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v55 + 4), (int32_t)v46, v36, v47);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_57;
    if ( v37 >= memberList->max_length )
LABEL_58:
      sub_1BC326C(Instance, v27, v36);
    Instance = memberList->m_Items[v37];
    if ( !Instance )
      goto LABEL_57;
    cost = this->fields.cost;
    v37 = v65;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(Instance, 0LL) + cost;
  }
  PartyListViewItem__CheckRestriction(this, v27);
}


void __fastcall PartyListViewItem___ctor_33201580(
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x24
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x1
  struct System_String_o *DefaultDeckName; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 Instance; // x0
  unsigned __int64 SvtEquipMax; // x1
  const MethodInfo *v37; // x2
  UserEventDeckEntity_o *v38; // x19
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo *v40; // x3
  int32_t FollowerIndex; // w29
  BalanceConfig_c *v42; // x0
  PartyListViewItem_o *v43; // x27
  int v44; // w25
  const MethodInfo *v45; // x2
  int32_t v46; // w23
  BalanceConfig_c *v47; // x0
  struct PartyOrganizationListViewItem_array *v48; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x28
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  UserEventDeckEntity_o *v52; // x20
  const MethodInfo *v53; // x2
  unsigned int v54; // w24
  struct DeckServant_o *v55; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v57; // x8
  int32_t *p_initPos; // x8
  int32_t initPos; // w29
  const MethodInfo *v60; // x6
  int v61; // w25
  struct DeckServant_o *v62; // x8
  struct DeckServantData_array *v63; // x8
  DeckServantData_o *v64; // x8
  _BOOL4 v65; // w27
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v68; // x23
  int32_t v69; // w27
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v71; // x19
  int32_t v72; // w26
  PartyOrganizationListViewItem_o *v73; // x25
  const MethodInfo *v74; // x3
  unsigned int max_length; // w8
  FollowerInfo_o *v76; // x23
  int32_t v77; // w27
  RestrictionEntity_o *GrandServantRestrictionEntity; // x27
  const MethodInfo *v79; // x5
  UserServantEntity_array *v80; // x26
  PartyOrganizationListViewItem_o *v81; // x0
  Il2CppClass **v82; // x8
  System_Int64_array *v83; // x23
  Il2CppClass **v84; // x25
  Il2CppClass *v85; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v86; // x25
  Il2CppClass *v87; // t1
  Il2CppClass *parent; // x23
  Il2CppClass *declaringType; // x27
  int32_t v90; // w23
  int32_t v91; // w27
  int32_t DispLimitCount; // w0
  const MethodInfo *v93; // x3
  UserServantEntity_o *v94; // x23
  struct PartyOrganizationListViewItem_array *v95; // x26
  System_Int64_array *v96; // x27
  int32_t v97; // w20
  unsigned int v98; // w8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v101; // x1
  __int64 v102; // x0
  bool *v103; // [xsp+30h] [xbp-E0h]
  int32_t followerGrandGraphIda; // [xsp+3Ch] [xbp-D4h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+50h] [xbp-C0h]
  UserServantEntity_array *UserServantList; // [xsp+58h] [xbp-B8h]
  int v109; // [xsp+60h] [xbp-B0h]
  int v110; // [xsp+64h] [xbp-ACh]
  PartyListViewItem_o *v111; // [xsp+68h] [xbp-A8h]
  int32_t v113; // [xsp+80h] [xbp-90h]
  _BOOL4 v114; // [xsp+84h] [xbp-8Ch]
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+94h] [xbp-7Ch] BYREF
  System_Int64_array *equipIdList; // [xsp+98h] [xbp-78h] BYREF
  int32_t followerClassIda; // [xsp+A4h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // 0:x0.16

  if ( (byte_4AFD9ED & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, isBaseModify);
    sub_1BC3008(&Method_DataManager_GetMaster_NpcFollowerMaster___, v19);
    sub_1BC3008(&DataManager_TypeInfo, v20);
    sub_1BC3008(&long___TypeInfo, v21);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1BC3008(&PartyOrganizationListViewItem___TypeInfo, v23);
    sub_1BC3008(&PartyOrganizationListViewItem_TypeInfo, v24);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v25);
    byte_4AFD9ED = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  equipIdList = 0LL;
  isChangeFriendShipSvtEquipSkill = 0;
  ListViewItem___ctor_42769384((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v26, v27);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v29, v30);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v31);
  this->fields.deckName = DefaultDeckName;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.deckName, (int32_t)DefaultDeckName, v33, v34);
  v38 = deck;
  if ( !deck )
    goto LABEL_125;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_125;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v37) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_125;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0LL);
    v38 = deck;
  }
  UserServantList = UserEventDeckEntity__GetUserServantList(v38, 0, 0, 0LL);
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, v38, 0LL, v40);
  if ( FollowerIndex <= 0 )
  {
    v42 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v42 = BalanceConfig_TypeInfo;
    }
    FollowerIndex = v42->static_fields->DeckMainMemberMax;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_125;
  if ( *(int *)(Instance + 56) < 1 )
  {
    v43 = 0LL;
    v44 = 0;
    v114 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_125;
    v43 = *(PartyListViewItem_o **)(Instance + 80);
    v44 = 0;
    v114 = v43 == 0LL;
    if ( follower && v43 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_125;
      v44 = *(_DWORD *)(Instance + 56);
      Instance = (__int64)PartyListViewItem__GetMember(v43, v44 - 1, v45);
      if ( !Instance )
        goto LABEL_125;
      v46 = *(_DWORD *)(Instance + 364);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_125;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v46, follower, 0LL);
      v114 = 0;
    }
  }
  v47 = BalanceConfig_TypeInfo;
  v103 = isBaseModify;
  v111 = v43;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v47 = BalanceConfig_TypeInfo;
  }
  v48 = (struct PartyOrganizationListViewItem_array *)sub_1BC30B0(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v47->static_fields->DeckMemberMax);
  this->fields.memberList = v48;
  p_memberList = &this->fields.memberList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v48, v50, v51);
  this->fields.cost = 0;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  v52 = deck;
  if ( !Instance )
    goto LABEL_125;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_125;
    follower = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_125;
    followerClassId = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_125;
    followerGrandGraphIda = *(_DWORD *)(Instance + 36);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_125;
    v113 = *(_DWORD *)(Instance + 40);
  }
  else
  {
    v113 = followerDeckId;
    followerGrandGraphIda = followerGrandGraphId;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || !Instance )
LABEL_125:
    sub_1BC3264(Instance, SvtEquipMax);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)Instance,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0LL);
  v54 = 0;
  v109 = v44 - 1;
  v110 = FollowerIndex - 1;
  while ( 1 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v54 >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 172LL) )
      break;
    if ( v114 )
    {
      v55 = v52->fields.deckInfo;
      if ( !v55 )
        goto LABEL_125;
      svts = v55->fields.svts;
      if ( !svts )
        goto LABEL_125;
      if ( v54 >= svts->max_length )
        goto LABEL_129;
      v57 = svts->m_Items[v54];
      if ( !v57 )
        goto LABEL_125;
      p_initPos = &v57->fields.initPos;
    }
    else
    {
      Instance = (__int64)PartyListViewItem__GetMember(v111, v54, v53);
      if ( !Instance )
        goto LABEL_125;
      p_initPos = (int32_t *)(Instance + 364);
    }
    initPos = *p_initPos;
    followera = 0LL;
    followerClassIda = 0;
    if ( !questRestrictionInfo )
      goto LABEL_125;
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_42413184(questRestrictionInfo, initPos, 0LL);
    v61 = Instance;
    if ( (Instance & 1) != 0 )
    {
      v62 = v52->fields.deckInfo;
      if ( !v62 )
        goto LABEL_125;
      v63 = v62->fields.svts;
      if ( !v63 )
        goto LABEL_125;
      if ( v54 >= v63->max_length )
        goto LABEL_129;
      v64 = v63->m_Items[v54];
      if ( !v64 )
        goto LABEL_125;
      v65 = 0;
      if ( v109 != v54 )
      {
        npcFollowerSvtId = v64->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v65 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v60);
      }
    }
    else
    {
      v65 = 0;
    }
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_125;
    NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, initPos, 0LL);
    if ( NpcFollowerInfo && ((v61 ^ 1) & 1) == 0 )
    {
      v68 = NpcFollowerInfo;
      if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0LL) )
        v69 = 0;
      else
        v69 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v68, 0LL);
      v71 = *p_memberList;
      if ( IsNpc )
        v72 = 0;
      else
        v72 = v113;
      v73 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_33325708(
        v73,
        v54,
        v68,
        v69,
        0,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v72,
        initPos,
        0LL);
      if ( !v71 )
        goto LABEL_125;
      if ( v73 )
      {
        Instance = sub_1BC3144(v73, v71->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_130;
      }
      max_length = v71->max_length;
      goto LABEL_84;
    }
    if ( v110 == v54 || v65 )
    {
      v76 = followera;
      v71 = *p_memberList;
      if ( followera )
      {
        v77 = followerClassIda;
        v73 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_33325708(
          v73,
          v54,
          v76,
          v77,
          0,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v113,
          initPos,
          0LL);
LABEL_80:
        if ( !v71 )
          goto LABEL_125;
      }
      else
      {
        v81 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
        v73 = v81;
        if ( follower )
        {
          PartyOrganizationListViewItem___ctor_33325708(
            v81,
            v54,
            follower,
            followerClassId,
            followerGrandGraphIda,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v113,
            initPos,
            0LL);
          goto LABEL_80;
        }
        PartyOrganizationListViewItem___ctor_33380072(v81, v54, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v71 )
          goto LABEL_125;
      }
      if ( v73 )
      {
        Instance = sub_1BC3144(v73, v71->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_130;
      }
      max_length = v71->max_length;
LABEL_84:
      if ( v54 >= max_length )
        goto LABEL_129;
      v82 = &v71->obj.klass + (int)v54;
      goto LABEL_120;
    }
    GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                      questRestrictionInfo,
                                      initPos,
                                      0LL);
    Instance = (__int64)UserEventDeckEntity__GetEquipList(v52, v54, 0LL);
    equipIdList = (System_Int64_array *)Instance;
    isChangeFriendShipSvtEquipSkill = 0;
    if ( GrandServantRestrictionEntity )
    {
      v80 = UserServantList;
      if ( !UserServantList )
        goto LABEL_125;
      if ( v54 >= UserServantList->max_length )
        goto LABEL_129;
      PartyListViewItem__GetGrandServantInfo(
        this,
        GrandServantRestrictionEntity,
        &UserServantList->m_Items[v54],
        &equipIdList,
        &isChangeFriendShipSvtEquipSkill,
        v79);
    }
    else
    {
      v80 = UserServantList;
      v83 = (System_Int64_array *)Instance;
      if ( (v61 & 1) != 0 )
      {
        if ( !UserServantList )
          goto LABEL_125;
        if ( v54 >= UserServantList->max_length )
          goto LABEL_129;
        v84 = &UserServantList->obj.klass + (int)v54;
        v87 = v84[4];
        v86 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v84 + 4);
        v85 = v87;
        if ( v87 )
        {
          declaringType = v85->_1.declaringType;
          parent = v85->_1.parent;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v119.fields.currentCryptoKey = declaringType;
          *(_QWORD *)&v119.fields.fakeValue = parent;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v119, 0LL);
          if ( v54 >= UserServantList->max_length )
            goto LABEL_129;
          if ( !*v86 )
            goto LABEL_125;
          v90 = Instance;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060((*v86)[6], 0LL);
          if ( v54 >= UserServantList->max_length )
            goto LABEL_129;
          v91 = Instance;
          Instance = (__int64)*v86;
          if ( !*v86 )
            goto LABEL_125;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
          Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                       questRestrictionInfo,
                       v90,
                       v91,
                       DispLimitCount,
                       initPos,
                       0,
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v54 >= UserServantList->max_length )
              goto LABEL_129;
            *v86 = 0LL;
            sub_1BC2FAC((CGThumbnailListItem_o *)v86, 0, (int32_t)v53, v93);
          }
        }
        v83 = equipIdList;
      }
      if ( !v83 )
        goto LABEL_125;
      Instance = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (__int64)BalanceConfig_TypeInfo;
      }
      SvtEquipMax = *(unsigned int *)(*(_QWORD *)(Instance + 184) + 48LL);
      if ( (int)SvtEquipMax < (signed int)v83->max_length )
      {
        if ( !*(_DWORD *)(Instance + 224) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          SvtEquipMax = (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax;
        }
        Instance = sub_1BC30B0(long___TypeInfo, SvtEquipMax);
        equipIdList = (System_Int64_array *)Instance;
      }
      if ( !UserServantList )
        goto LABEL_125;
    }
    if ( v54 >= v80->max_length )
      goto LABEL_129;
    v94 = v80->m_Items[v54];
    v95 = *p_memberList;
    if ( v94 )
    {
      v96 = equipIdList;
      v97 = isChangeFriendShipSvtEquipSkill;
      v73 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_33369480(
        v73,
        v54,
        v94,
        v96,
        setupInfo,
        questRestrictionInfo,
        0LL,
        initPos,
        0LL,
        0,
        v97,
        0LL);
      if ( !v95 )
        goto LABEL_125;
      if ( v73 )
      {
        Instance = sub_1BC3144(v73, v95->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_130;
      }
      v98 = v95->max_length;
      v52 = deck;
    }
    else
    {
      v73 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_33380072(v73, v54, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
      if ( !v95 )
        goto LABEL_125;
      if ( v73 )
      {
        Instance = sub_1BC3144(v73, v95->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_130:
          v102 = sub_1BC3288();
          sub_1BC3130(v102, 0LL);
        }
      }
      v98 = v95->max_length;
    }
    if ( v54 >= v98 )
      goto LABEL_129;
    v82 = &v95->obj.klass + (int)v54;
LABEL_120:
    v82[4] = (Il2CppClass *)v73;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v82 + 4), (int32_t)v73, (int32_t)v53, v74);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_125;
    if ( v54 >= memberList->max_length )
LABEL_129:
      sub_1BC326C(Instance, SvtEquipMax, v53);
    Instance = (__int64)memberList->m_Items[v54];
    if ( !Instance )
      goto LABEL_125;
    cost = this->fields.cost;
    ++v54;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)SvtEquipMax);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v101) )
    *v103 = 1;
}


void __fastcall PartyListViewItem___ctor_33208724(
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x24
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x1
  struct System_String_o *DefaultDeckName; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 Instance; // x0
  unsigned __int64 SvtEquipMax; // x1
  const MethodInfo *v39; // x2
  struct DeckServant_o *deckInfo; // x8
  PartyListViewItem_o *v41; // x22
  unsigned int v42; // w23
  const MethodInfo *v43; // x2
  int32_t v44; // w19
  BalanceConfig_c *v45; // x0
  struct PartyOrganizationListViewItem_array *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int32_t v49; // w8
  QuestRestrictionInfo_o *v50; // x19
  struct QuestRestrictionInfo_o *v51; // x8
  unsigned __int64 v52; // x20
  unsigned __int64 v53; // x24
  const MethodInfo *v54; // x2
  int32_t *p_initPos; // x8
  struct DeckServant_o *v56; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v58; // x8
  int32_t v59; // w25
  unsigned __int64 max_length; // x8
  UserServantEntity_o *v61; // x9
  __int64 v62; // x23
  __int64 v63; // x27
  const MethodInfo *v64; // x3
  __int64 v65; // x23
  const MethodInfo *v66; // x6
  int v67; // w29
  struct DeckServant_o *v68; // x8
  struct DeckServantData_array *v69; // x8
  DeckServantData_o *v70; // x8
  _BOOL4 v71; // w27
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v74; // x23
  int32_t v75; // w27
  bool IsNpc; // w0
  unsigned int *v77; // x26
  int32_t v78; // w19
  PartyOrganizationListViewItem_o *v79; // x0
  EventUpValSetupInfo_o *v80; // x5
  QuestRestrictionInfo_o *v81; // x6
  PartyOrganizationListViewItem_o *v82; // x29
  int32_t v83; // w1
  FollowerInfo_o *v84; // x2
  int32_t v85; // w3
  int32_t v86; // w4
  EventCampaignEntity_array *v87; // x7
  FollowerInfo_o *v88; // x23
  int32_t v89; // w27
  const MethodInfo *v90; // x3
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  int32_t v93; // w8
  unsigned int *v94; // x23
  PartyOrganizationListViewItem_o *v95; // x27
  const MethodInfo *v96; // x3
  RestrictionEntity_o *GrandServantRestrictionEntity; // x27
  const MethodInfo *v98; // x5
  UserServantEntity_array *v99; // x19
  System_Int64_array *v100; // x23
  UserServantEntity_o *v101; // x8
  __int64 v102; // x23
  __int64 v103; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v104; // x8
  int32_t v105; // w23
  int32_t v106; // w27
  int32_t DispLimitCount; // w0
  const MethodInfo *v108; // x3
  UserServantEntity_o *v109; // x23
  System_Int64_array *v110; // x27
  int32_t v111; // w19
  EventUpValSetupInfo_o *v112; // x3
  QuestRestrictionInfo_o *v113; // x4
  int32_t v114; // w1
  bool v115; // w2
  const MethodInfo *v116; // x1
  __int64 v117; // x0
  int32_t followerDeckIda; // [xsp+8h] [xbp-138h]
  int32_t initPos; // [xsp+10h] [xbp-130h]
  UserServantMaster_o *Master_object; // [xsp+28h] [xbp-118h]
  int32_t v122; // [xsp+3Ch] [xbp-104h]
  int32_t *v123; // [xsp+40h] [xbp-100h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+50h] [xbp-F0h]
  UserServantEntity_array *UserServantList; // [xsp+60h] [xbp-E0h]
  struct System_Int32_array *svtIdForceBattleList; // [xsp+70h] [xbp-D0h]
  UserServantEntity_o **m_Items; // [xsp+80h] [xbp-C0h]
  __int64 v130; // [xsp+88h] [xbp-B8h]
  int32_t v131; // [xsp+94h] [xbp-ACh]
  UserEventDeckEntity_o *v132; // [xsp+98h] [xbp-A8h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+A0h] [xbp-A0h]
  __int64 v134; // [xsp+A8h] [xbp-98h]
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+C4h] [xbp-7Ch] BYREF
  System_Int64_array *equipIdList; // [xsp+C8h] [xbp-78h] BYREF
  int32_t followerClassIda; // [xsp+D4h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+D8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16

  if ( (byte_4AFD9EE & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, isBaseModify);
    sub_1BC3008(&Method_DataManager_GetMaster_NpcFollowerMaster___, v20);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantMaster___, v21);
    sub_1BC3008(&DataManager_TypeInfo, v22);
    sub_1BC3008(&long___TypeInfo, v23);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
    sub_1BC3008(&PartyOrganizationListViewItem___TypeInfo, v25);
    sub_1BC3008(&PartyOrganizationListViewItem_TypeInfo, v26);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v27);
    byte_4AFD9EE = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  equipIdList = 0LL;
  isChangeFriendShipSvtEquipSkill = 0;
  ListViewItem___ctor_42769384((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v28, v29);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v31, v32);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v33);
  this->fields.deckName = DefaultDeckName;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.deckName, (int32_t)DefaultDeckName, v35, v36);
  if ( !deck )
    goto LABEL_148;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_148;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v39) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_148;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0LL);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  if ( *(int *)(Instance + 56) < 1 )
  {
    v41 = 0LL;
    if ( !questRestrictionInfo )
      goto LABEL_15;
    goto LABEL_14;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  v41 = *(PartyListViewItem_o **)(Instance + 80);
  if ( questRestrictionInfo )
LABEL_14:
    QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL);
LABEL_15:
  v42 = 0;
  if ( follower && v41 )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    v42 = *(_DWORD *)(Instance + 56);
    Instance = (__int64)PartyListViewItem__GetMember(v41, v42 - 1, v43);
    if ( !Instance )
      goto LABEL_148;
    v44 = *(_DWORD *)(Instance + 364);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v44, follower, 0LL);
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    follower = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    followerClassId = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    v122 = *(_DWORD *)(Instance + 36);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    v131 = *(_DWORD *)(Instance + 40);
  }
  else
  {
    v131 = followerDeckId;
    v122 = followerGrandGraphId;
  }
  v45 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v45 = BalanceConfig_TypeInfo;
  }
  v46 = (struct PartyOrganizationListViewItem_array *)sub_1BC30B0(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v45->static_fields->DeckMemberMax);
  this->fields.memberList = v46;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v46, v47, v48);
  v49 = this->fields.menuKind;
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( v49 == 3 )
  {
    Instance = (__int64)*p_questRestrictionInfo;
    v50 = questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_148;
    Instance = (__int64)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList((QuestRestrictionInfo_o *)Instance, 0LL);
    if ( !*p_questRestrictionInfo )
      goto LABEL_148;
    v130 = Instance;
    svtIdForceBattleList = (*p_questRestrictionInfo)->fields.svtIdForceBattleList;
  }
  else
  {
    v50 = questRestrictionInfo;
    svtIdForceBattleList = 0LL;
    v130 = 0LL;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v51 = *p_questRestrictionInfo;
  if ( !*p_questRestrictionInfo || !Instance )
LABEL_148:
    sub_1BC3264(Instance, SvtEquipMax);
  v123 = &svtIdForceBattleList->m_Items[1];
  v52 = 0LL;
  v53 = 0LL;
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)Instance,
                          v51->fields.questId,
                          v51->fields.questPhase,
                          0LL);
  m_Items = UserServantList->m_Items;
  v134 = v42 - 1LL;
  v132 = deck;
  while ( 1 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v53 >= *(int *)(*(_QWORD *)(Instance + 184) + 172LL) )
      break;
    if ( v41 )
    {
      Instance = (__int64)PartyListViewItem__GetMember(v41, v53, v54);
      if ( !Instance )
        goto LABEL_148;
      p_initPos = (int32_t *)(Instance + 364);
    }
    else
    {
      v56 = deck->fields.deckInfo;
      if ( !v56 )
        goto LABEL_148;
      svts = v56->fields.svts;
      if ( !svts )
        goto LABEL_148;
      if ( v53 >= svts->max_length )
        goto LABEL_152;
      v58 = svts->m_Items[v53];
      if ( !v58 )
        goto LABEL_148;
      p_initPos = &v58->fields.initPos;
    }
    v59 = *p_initPos;
    if ( this->fields.menuKind == 3 )
    {
      if ( !v130 )
        goto LABEL_148;
      if ( (__int64)v53 >= *(int *)(v130 + 24) )
      {
        v94 = (unsigned int *)*p_memberList;
        v95 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_33380072(v95, v53, 0, setupInfo, v50, 1, v59, 0LL);
        if ( !v94 )
          goto LABEL_148;
        if ( v95 )
        {
          Instance = sub_1BC3144(v95, *(_QWORD *)(*(_QWORD *)v94 + 64LL));
          if ( !Instance )
          {
LABEL_153:
            v117 = sub_1BC3288();
            sub_1BC3130(v117, 0LL);
          }
        }
        if ( v53 >= v94[6] )
          goto LABEL_152;
        *(_QWORD *)&v94[2 * v53 + 8] = v95;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v94[v52 / 4 + 8], (int32_t)v95, (int32_t)v54, v96);
        goto LABEL_112;
      }
      if ( svtIdForceBattleList )
      {
        if ( v134 != v53 && isFirstEnforceChange )
        {
          max_length = svtIdForceBattleList->max_length;
          if ( (__int64)v53 < (int)max_length )
          {
            if ( v53 >= max_length )
              goto LABEL_152;
            SvtEquipMax = (unsigned int)v123[v53];
            if ( (int)SvtEquipMax >= 1 )
            {
              if ( !UserServantList )
                goto LABEL_148;
              if ( v53 >= UserServantList->max_length )
                goto LABEL_152;
              v61 = m_Items[v53];
              if ( !v61 )
                goto LABEL_69;
              v63 = *(_QWORD *)&v61->fields.svtId.fields.currentCryptoKey;
              v62 = *(_QWORD *)&v61->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v139.fields.currentCryptoKey = v63;
              *(_QWORD *)&v139.fields.fakeValue = v62;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v139, 0LL);
              max_length = svtIdForceBattleList->max_length;
              if ( v53 >= max_length )
                goto LABEL_152;
              SvtEquipMax = (unsigned int)v123[v53];
              if ( (_DWORD)Instance != (_DWORD)SvtEquipMax )
              {
LABEL_69:
                if ( v53 >= max_length )
                  goto LABEL_152;
                Instance = (__int64)Master_object;
                if ( !Master_object )
                  goto LABEL_148;
                Instance = (__int64)UserServantMaster__getSvtIdBattle(Master_object, SvtEquipMax, 0LL);
                v65 = Instance;
                if ( Instance )
                {
                  Instance = sub_1BC3144(Instance, UserServantList->obj.klass->_1.element_class);
                  if ( !Instance )
                    goto LABEL_153;
                }
                if ( v53 >= UserServantList->max_length )
                  goto LABEL_152;
                m_Items[v53] = (UserServantEntity_o *)v65;
                sub_1BC2FAC((CGThumbnailListItem_o *)&m_Items[v52 / 8], v65, (int32_t)v54, v64);
                v50 = questRestrictionInfo;
                *isBaseModify = 1;
              }
            }
          }
        }
      }
    }
    followera = 0LL;
    followerClassIda = 0;
    if ( !v50 )
      goto LABEL_148;
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_42413184(v50, v59, 0LL);
    v67 = Instance;
    if ( (Instance & 1) != 0 )
    {
      v68 = deck->fields.deckInfo;
      if ( !v68 )
        goto LABEL_148;
      v69 = v68->fields.svts;
      if ( !v69 )
        goto LABEL_148;
      if ( v53 >= v69->max_length )
        goto LABEL_152;
      v70 = v69->m_Items[v53];
      if ( !v70 )
        goto LABEL_148;
      v71 = 0;
      if ( v134 != v53 )
      {
        npcFollowerSvtId = v70->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v71 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  v59,
                  v66);
      }
    }
    else
    {
      v71 = 0;
    }
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v59, 0LL);
    if ( NpcFollowerInfo && ((v67 ^ 1) & 1) == 0 )
    {
      v74 = NpcFollowerInfo;
      if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0LL) )
        v75 = 0;
      else
        v75 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v74, 0LL);
      v77 = (unsigned int *)*p_memberList;
      if ( IsNpc )
        v78 = 0;
      else
        v78 = v131;
      v79 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
      v80 = setupInfo;
      v81 = questRestrictionInfo;
      v82 = v79;
      v83 = v53;
      v84 = v74;
      v85 = v75;
      v86 = 0;
      initPos = v59;
      followerDeckIda = v78;
      goto LABEL_95;
    }
    if ( v134 == v53 || v71 )
    {
      v88 = followera;
      v77 = (unsigned int *)*p_memberList;
      if ( followera )
      {
        v89 = followerClassIda;
        v79 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
        v80 = setupInfo;
        v82 = v79;
        initPos = v59;
        followerDeckIda = v131;
        v83 = v53;
        v84 = v88;
        v85 = v89;
        v86 = 0;
        v81 = v50;
        v87 = 0LL;
      }
      else
      {
        v79 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
        v84 = follower;
        v82 = v79;
        if ( !follower )
        {
          v112 = setupInfo;
          v115 = 1;
          v114 = v53;
          v113 = v50;
LABEL_147:
          PartyOrganizationListViewItem___ctor_33380072(v79, v114, v115, v112, v113, 1, v59, 0LL);
          if ( !v77 )
            goto LABEL_148;
          goto LABEL_100;
        }
        v85 = followerClassId;
        v86 = v122;
        v80 = setupInfo;
        initPos = v59;
        followerDeckIda = v131;
        v83 = v53;
        v81 = v50;
LABEL_95:
        v87 = friendPointCampaignEntityList;
      }
      PartyOrganizationListViewItem___ctor_33325708(
        v79,
        v83,
        v84,
        v85,
        v86,
        v80,
        v81,
        v87,
        0,
        followerDeckIda,
        initPos,
        0LL);
      if ( !v77 )
        goto LABEL_148;
      goto LABEL_100;
    }
    GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(v50, v59, 0LL);
    Instance = (__int64)UserEventDeckEntity__GetEquipList(deck, v53, 0LL);
    equipIdList = (System_Int64_array *)Instance;
    isChangeFriendShipSvtEquipSkill = 0;
    if ( GrandServantRestrictionEntity )
    {
      v99 = UserServantList;
      if ( !UserServantList )
        goto LABEL_148;
      if ( v53 >= UserServantList->max_length )
        goto LABEL_152;
      PartyListViewItem__GetGrandServantInfo(
        this,
        GrandServantRestrictionEntity,
        &m_Items[v52 / 8],
        &equipIdList,
        &isChangeFriendShipSvtEquipSkill,
        v98);
    }
    else
    {
      v99 = UserServantList;
      v100 = (System_Int64_array *)Instance;
      if ( (v67 & 1) != 0 )
      {
        if ( !UserServantList )
          goto LABEL_148;
        if ( v53 >= UserServantList->max_length )
          goto LABEL_152;
        v101 = m_Items[v53];
        if ( v101 )
        {
          v103 = *(_QWORD *)&v101->fields.svtId.fields.currentCryptoKey;
          v102 = *(_QWORD *)&v101->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v140.fields.currentCryptoKey = v103;
          *(_QWORD *)&v140.fields.fakeValue = v102;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v140, 0LL);
          if ( v53 >= UserServantList->max_length )
            goto LABEL_152;
          v104 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)m_Items[v53];
          if ( !v104 )
            goto LABEL_148;
          v105 = Instance;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v104[6], 0LL);
          if ( v53 >= UserServantList->max_length )
LABEL_152:
            sub_1BC326C(Instance, SvtEquipMax, v54);
          v106 = Instance;
          Instance = (__int64)m_Items[v53];
          if ( !Instance )
            goto LABEL_148;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
          Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                       questRestrictionInfo,
                       v105,
                       v106,
                       DispLimitCount,
                       v59,
                       0,
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v53 >= UserServantList->max_length )
              goto LABEL_152;
            m_Items[v53] = 0LL;
            sub_1BC2FAC((CGThumbnailListItem_o *)&m_Items[v52 / 8], 0, (int32_t)v54, v108);
          }
        }
        v100 = equipIdList;
      }
      if ( !v100 )
        goto LABEL_148;
      Instance = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Instance = (__int64)BalanceConfig_TypeInfo;
      }
      SvtEquipMax = *(unsigned int *)(*(_QWORD *)(Instance + 184) + 48LL);
      if ( (int)SvtEquipMax < (signed int)v100->max_length )
      {
        if ( !*(_DWORD *)(Instance + 224) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          SvtEquipMax = (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax;
        }
        Instance = sub_1BC30B0(long___TypeInfo, SvtEquipMax);
        equipIdList = (System_Int64_array *)Instance;
      }
      if ( !UserServantList )
        goto LABEL_148;
    }
    if ( v53 >= v99->max_length )
      goto LABEL_152;
    v109 = m_Items[v53];
    v77 = (unsigned int *)*p_memberList;
    if ( !v109 )
    {
      v79 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
      v112 = setupInfo;
      v113 = questRestrictionInfo;
      v82 = v79;
      v114 = v53;
      v115 = 0;
      goto LABEL_147;
    }
    v110 = equipIdList;
    v111 = isChangeFriendShipSvtEquipSkill;
    v82 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_33369480(
      v82,
      v53,
      v109,
      v110,
      setupInfo,
      questRestrictionInfo,
      0LL,
      v59,
      0LL,
      0,
      v111,
      0LL);
    if ( !v77 )
      goto LABEL_148;
LABEL_100:
    if ( v82 )
    {
      Instance = sub_1BC3144(v82, *(_QWORD *)(*(_QWORD *)v77 + 64LL));
      if ( !Instance )
        goto LABEL_153;
    }
    if ( v53 >= v77[6] )
      goto LABEL_152;
    *(_QWORD *)&v77[2 * v53 + 8] = v82;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v77[v52 / 4 + 8], (int32_t)v82, (int32_t)v54, v90);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_148;
    deck = v132;
    if ( v53 >= memberList->max_length )
      goto LABEL_152;
    Instance = (__int64)memberList->m_Items[v53];
    if ( !Instance )
      goto LABEL_148;
    cost = this->fields.cost;
    v93 = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL) + cost;
    v50 = questRestrictionInfo;
    this->fields.cost = v93;
LABEL_112:
    ++v53;
    v52 += 8LL;
  }
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)SvtEquipMax);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v116) )
    *isBaseModify = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_33211616(
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
  int32_t klass_high; // w27
  int32_t monitor; // w26
  struct PartyOrganizationListViewItem_array *v40; // x27
  PartyOrganizationListViewItem_o *v41; // x0
  PartyOrganizationListViewItem_o *v42; // x28
  __int64 v43; // x2
  const MethodInfo *v44; // x3
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w23
  const MethodInfo *v47; // x1
  int32_t i; // w23
  BalanceConfig_c *v49; // x0
  struct PartyOrganizationListViewItem_array *v50; // x26
  PartyOrganizationListViewItem_o *v51; // x24
  const MethodInfo *v52; // x3
  Il2CppClass **v53; // x0
  struct PartyOrganizationListViewItem_array *v54; // x8
  int32_t v55; // w24
  __int64 v56; // x0

  if ( (byte_4AFD9EF & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind);
    sub_1BC3008(&PartyOrganizationListViewItem___TypeInfo, v19);
    sub_1BC3008(&PartyOrganizationListViewItem_TypeInfo, v20);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v21);
    sub_1BC3008(&StringLiteral_1/*""*/, v22);
    byte_4AFD9EF = 1;
  }
  ListViewItem___ctor_42769384((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v23, v24);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v25, v26);
  this->fields.isDeckNameDefault = 0;
  v27 = (int)StringLiteral_1/*""*/;
  this->fields.deckName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.deckName, v27, v28, v29);
  this->fields.userEquipId = userEquipId;
  this->fields.id = 0LL;
  v30 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v30 = BalanceConfig_TypeInfo;
  }
  v31 = (struct PartyOrganizationListViewItem_array *)sub_1BC30B0(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v30->static_fields->DeckMemberMax);
  this->fields.memberList = v31;
  p_memberList = &this->fields.memberList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v31, v33, v34);
  this->fields.cost = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  klass = followerClassId;
  if ( Instance[1].monitor )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    follower = (FollowerInfo_o *)Instance[1].monitor;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    klass = (int32_t)Instance[2].klass;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    klass_high = HIDWORD(Instance[2].klass);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    monitor = (int32_t)Instance[2].monitor;
    followerGrandGraphId = klass_high;
  }
  else
  {
    monitor = followerDeckId;
  }
  v40 = *p_memberList;
  v41 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
  v42 = v41;
  if ( follower )
  {
    PartyOrganizationListViewItem___ctor_33325708(
      v41,
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
      0LL);
    if ( !v40 )
      goto LABEL_36;
  }
  else
  {
    PartyOrganizationListViewItem___ctor_33380072(v41, 0, 1, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v40 )
      goto LABEL_36;
  }
  if ( v42 )
  {
    Instance = (Il2CppObject *)sub_1BC3144(v42, v40->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_38:
      v56 = sub_1BC3288();
      sub_1BC3130(v56, 0LL);
    }
  }
  if ( !v40->max_length )
    goto LABEL_37;
  v40->m_Items[0] = v42;
  sub_1BC2FAC((CGThumbnailListItem_o *)v40->m_Items, (int32_t)v42, v43, v44);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_36;
  if ( !memberList->max_length )
LABEL_37:
    sub_1BC326C(Instance, v36, v43);
  Instance = (Il2CppObject *)memberList->m_Items[0];
  if ( !Instance )
LABEL_36:
    sub_1BC3264(Instance, v36);
  cost = this->fields.cost;
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                    + cost;
  for ( i = 1; ; ++i )
  {
    v49 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v49 = BalanceConfig_TypeInfo;
    }
    if ( i >= v49->static_fields->DeckMemberMax )
      break;
    v50 = *p_memberList;
    v51 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_33380072(v51, i, 0, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v50 )
      goto LABEL_36;
    if ( v51 )
    {
      Instance = (Il2CppObject *)sub_1BC3144(v51, v50->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_38;
    }
    if ( i >= v50->max_length )
      goto LABEL_37;
    v53 = &v50->obj.klass + i;
    v53[4] = (Il2CppClass *)v51;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v53 + 4), (int32_t)v51, v43, v52);
    v54 = this->fields.memberList;
    if ( !v54 )
      goto LABEL_36;
    if ( i >= v54->max_length )
      goto LABEL_37;
    Instance = (Il2CppObject *)v54->m_Items[i];
    if ( !Instance )
      goto LABEL_36;
    v55 = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                      + v55;
  }
  PartyListViewItem__CheckRestriction(this, v47);
}


void __fastcall PartyListViewItem___ctor_33212532(
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 IsNeedDeckPosReset; // x0
  unsigned __int64 SvtEquipMax; // x1
  const MethodInfo *v34; // x2
  struct DeckServant_o *deckInfo; // x8
  int32_t servantNumMax; // w26
  const MethodInfo *v37; // x3
  PartyListViewItem_o *v38; // x28
  int v39; // w25
  const MethodInfo *v40; // x2
  int32_t v41; // w23
  int32_t FollowerIndex; // w24
  BalanceConfig_c *v43; // x0
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x3
  __int64 v46; // x9
  __int64 v47; // x28
  __int64 v48; // x21
  unsigned __int64 v49; // x8
  __int64 v50; // x23
  signed __int64 v51; // x29
  BalanceConfig_c *v52; // x0
  UserEventDeckEntity_o *v53; // x29
  struct PartyOrganizationListViewItem_array *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  unsigned int v57; // w19
  struct DeckServant_o *v58; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v60; // x8
  int32_t *p_initPos; // x8
  int32_t initPos; // w24
  const MethodInfo *v63; // x6
  int v64; // w25
  _BOOL4 v65; // w26
  struct DeckServant_o *v66; // x8
  struct DeckServantData_array *v67; // x8
  DeckServantData_o *v68; // x8
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v71; // x23
  int32_t v72; // w26
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v74; // x21
  int32_t v75; // w27
  PartyOrganizationListViewItem_o *v76; // x25
  const MethodInfo *v77; // x3
  Il2CppClass **v78; // x8
  FollowerInfo_o *v79; // x23
  struct PartyOrganizationListViewItem_array *v80; // x27
  int32_t v81; // w26
  RestrictionEntity_o *GrandServantRestrictionEntity; // x26
  const MethodInfo *v83; // x5
  PartyOrganizationListViewItem_o *v84; // x0
  System_Int64_array *v85; // x23
  __int64 v86; // x25
  __int64 v87; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v88; // x25
  __int64 v89; // t1
  __int64 v90; // x23
  __int64 v91; // x26
  int32_t v92; // w23
  int32_t v93; // w26
  int32_t DispLimitCount; // w0
  const MethodInfo *v95; // x3
  UserServantEntity_o *v96; // x23
  struct PartyOrganizationListViewItem_array *v97; // x21
  System_Int64_array *v98; // x26
  int32_t v99; // w29
  unsigned int max_length; // w8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w21
  const MethodInfo *v103; // x1
  __int64 v104; // x0
  int32_t followerGrandGraphIda; // [xsp+2Ch] [xbp-E4h]
  FollowerInfo_o *followerInfo; // [xsp+30h] [xbp-E0h]
  UserEventDeckEntity_o *v107; // [xsp+38h] [xbp-D8h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+40h] [xbp-D0h]
  int v110; // [xsp+50h] [xbp-C0h]
  int v111; // [xsp+54h] [xbp-BCh]
  PartyListViewItem_o *v112; // [xsp+58h] [xbp-B8h]
  int32_t v113; // [xsp+64h] [xbp-ACh]
  int32_t v114; // [xsp+74h] [xbp-9Ch]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+78h] [xbp-98h]
  _BOOL4 v116; // [xsp+84h] [xbp-8Ch]
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+94h] [xbp-7Ch] BYREF
  System_Int64_array *equipIdList; // [xsp+98h] [xbp-78h] BYREF
  int32_t followerClassIda; // [xsp+A4h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+A8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16

  if ( (byte_4AFD9F0 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, isBaseModify);
    sub_1BC3008(&Method_DataManager_GetMaster_NpcFollowerMaster___, v20);
    sub_1BC3008(&DataManager_TypeInfo, v21);
    sub_1BC3008(&long___TypeInfo, v22);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1BC3008(&PartyOrganizationListViewItem___TypeInfo, v24);
    sub_1BC3008(&PartyOrganizationListViewItem_TypeInfo, v25);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v26);
    byte_4AFD9F0 = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  equipIdList = 0LL;
  isChangeFriendShipSvtEquipSkill = 0;
  ListViewItem___ctor_42769384((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v27, v28);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v30, v31);
  if ( !deck )
    goto LABEL_136;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_136;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  IsNeedDeckPosReset = PartyListViewItem__IsNeedDeckPosReset(this, deck, v34);
  if ( (IsNeedDeckPosReset & 1) != 0 )
  {
    IsNeedDeckPosReset = (__int64)deck->fields.deckInfo;
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    DeckServant__ResetInitPos((DeckServant_o *)IsNeedDeckPosReset, 0LL);
  }
  if ( !questRestrictionInfo )
    goto LABEL_136;
  servantNumMax = questRestrictionInfo->fields.servantNumMax;
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_136;
  if ( *(int *)(IsNeedDeckPosReset + 56) < 1 )
  {
    v38 = 0LL;
    v39 = 0;
    v116 = 1;
  }
  else
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    v38 = *(PartyListViewItem_o **)(IsNeedDeckPosReset + 80);
    v39 = 0;
    v116 = v38 == 0LL;
    if ( followerInfo && v38 )
    {
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_136;
      v39 = *(_DWORD *)(IsNeedDeckPosReset + 56);
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v38, v39 - 1, v40);
      if ( !IsNeedDeckPosReset )
        goto LABEL_136;
      v41 = *(_DWORD *)(IsNeedDeckPosReset + 364);
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_136;
      PartyOrganizationUtility__SetNpcFollowerInfo(
        (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
        v41,
        followerInfo,
        0LL);
      v116 = 0;
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
  v43 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v43 = BalanceConfig_TypeInfo;
  }
  FollowerIndex = servantNumMax;
  if ( servantNumMax > v43->static_fields->DeckMainMemberMax )
  {
    FollowerIndex = v43->static_fields->DeckMainMemberMax;
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      FollowerIndex = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
    }
  }
LABEL_29:
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_136;
  v112 = v38;
  if ( *(_QWORD *)(IsNeedDeckPosReset + 24) )
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    followerInfo = *(FollowerInfo_o **)(IsNeedDeckPosReset + 24);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    v113 = *(_DWORD *)(IsNeedDeckPosReset + 32);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    followerGrandGraphIda = *(_DWORD *)(IsNeedDeckPosReset + 36);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    v114 = *(_DWORD *)(IsNeedDeckPosReset + 40);
  }
  else
  {
    v114 = followerDeckId;
    followerGrandGraphIda = followerGrandGraphId;
    v113 = followerClassId;
  }
  v107 = deck;
  IsNeedDeckPosReset = (__int64)UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  if ( !IsNeedDeckPosReset )
    goto LABEL_136;
  v46 = *(_QWORD *)(IsNeedDeckPosReset + 24);
  v47 = IsNeedDeckPosReset;
  if ( (int)v46 >= 1 )
  {
    v48 = 0LL;
    v49 = 0LL;
    v50 = IsNeedDeckPosReset + 32;
    do
    {
      if ( v49 >= (unsigned int)v46 )
LABEL_140:
        sub_1BC326C(IsNeedDeckPosReset, SvtEquipMax, v44);
      v51 = v49 + 1;
      if ( servantNumMax < (int)v49 + 1 && *(_QWORD *)(v50 + 8 * v49) )
      {
        *isBaseModify = 1;
        if ( v49 >= *(unsigned int *)(v47 + 24) )
          goto LABEL_140;
        *(_QWORD *)(v50 + 8 * v49) = 0LL;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v50 + v48), 0, (int32_t)v44, v45);
      }
      LODWORD(v46) = *(_DWORD *)(v47 + 24);
      v48 += 8LL;
      v49 = v51;
    }
    while ( v51 < (int)v46 );
  }
  v52 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v52 = BalanceConfig_TypeInfo;
  }
  v53 = deck;
  v54 = (struct PartyOrganizationListViewItem_array *)sub_1BC30B0(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v52->static_fields->DeckMemberMax);
  this->fields.memberList = v54;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v54, v55, v56);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNeedDeckPosReset = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || !IsNeedDeckPosReset )
LABEL_136:
    sub_1BC3264(IsNeedDeckPosReset, SvtEquipMax);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)IsNeedDeckPosReset,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0LL);
  v57 = 0;
  v110 = v39 - 1;
  v111 = FollowerIndex - 1;
  while ( 1 )
  {
    IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v57 >= *(_DWORD *)(*(_QWORD *)(IsNeedDeckPosReset + 184) + 172LL) )
      break;
    if ( v116 )
    {
      v58 = v53->fields.deckInfo;
      if ( !v58 )
        goto LABEL_136;
      svts = v58->fields.svts;
      if ( !svts )
        goto LABEL_136;
      if ( v57 >= svts->max_length )
        goto LABEL_140;
      v60 = svts->m_Items[v57];
      if ( !v60 )
        goto LABEL_136;
      p_initPos = &v60->fields.initPos;
    }
    else
    {
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v112, v57, v44);
      if ( !IsNeedDeckPosReset )
        goto LABEL_136;
      p_initPos = (int32_t *)(IsNeedDeckPosReset + 364);
    }
    initPos = *p_initPos;
    followera = 0LL;
    followerClassIda = 0;
    IsNeedDeckPosReset = QuestRestrictionInfo__IsMyServantOrNpcRestriction_42413184(questRestrictionInfo, initPos, 0LL);
    v64 = IsNeedDeckPosReset;
    v65 = 0;
    if ( (IsNeedDeckPosReset & 1) != 0 )
    {
      v66 = v53->fields.deckInfo;
      if ( !v66 )
        goto LABEL_136;
      v67 = v66->fields.svts;
      if ( !v67 )
        goto LABEL_136;
      if ( v57 >= v67->max_length )
        goto LABEL_140;
      v68 = v67->m_Items[v57];
      if ( !v68 )
        goto LABEL_136;
      v65 = 0;
      if ( v110 != v57 )
      {
        npcFollowerSvtId = v68->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v65 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v63);
      }
    }
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo(
                        (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
                        initPos,
                        0LL);
    if ( !NpcFollowerInfo || ((v64 ^ 1) & 1) != 0 )
    {
      if ( v111 == v57 || v65 )
      {
        v79 = followera;
        v80 = *p_memberList;
        if ( followera )
        {
          v81 = followerClassIda;
          v76 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_33325708(
            v76,
            v57,
            v79,
            v81,
            0,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v114,
            initPos,
            0LL);
LABEL_94:
          if ( !v80 )
            goto LABEL_136;
        }
        else
        {
          v84 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
          v76 = v84;
          if ( followerInfo )
          {
            PartyOrganizationListViewItem___ctor_33325708(
              v84,
              v57,
              followerInfo,
              v113,
              followerGrandGraphIda,
              setupInfo,
              questRestrictionInfo,
              friendPointCampaignEntityList,
              0,
              v114,
              initPos,
              0LL);
            goto LABEL_94;
          }
          PartyOrganizationListViewItem___ctor_33380072(v84, v57, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
          if ( !v80 )
            goto LABEL_136;
        }
        if ( v76 )
        {
          IsNeedDeckPosReset = sub_1BC3144(v76, v80->obj.klass->_1.element_class);
          if ( !IsNeedDeckPosReset )
            goto LABEL_141;
        }
        if ( v57 >= v80->max_length )
          goto LABEL_140;
        v78 = &v80->obj.klass + (int)v57;
        goto LABEL_131;
      }
      GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                        questRestrictionInfo,
                                        initPos,
                                        0LL);
      IsNeedDeckPosReset = (__int64)UserEventDeckEntity__GetEquipList(v53, v57, 0LL);
      equipIdList = (System_Int64_array *)IsNeedDeckPosReset;
      isChangeFriendShipSvtEquipSkill = 0;
      if ( GrandServantRestrictionEntity )
      {
        if ( v57 >= *(_DWORD *)(v47 + 24) )
          goto LABEL_140;
        PartyListViewItem__GetGrandServantInfo(
          this,
          GrandServantRestrictionEntity,
          (UserServantEntity_o **)(v47 + 8LL * (int)v57 + 32),
          &equipIdList,
          &isChangeFriendShipSvtEquipSkill,
          v83);
      }
      else
      {
        v85 = (System_Int64_array *)IsNeedDeckPosReset;
        if ( (v64 & 1) != 0 )
        {
          if ( v57 >= *(_DWORD *)(v47 + 24) )
            goto LABEL_140;
          v86 = v47 + 8LL * (int)v57;
          v89 = *(_QWORD *)(v86 + 32);
          v88 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v86 + 32);
          v87 = v89;
          if ( v89 )
          {
            v91 = *(_QWORD *)(v87 + 80);
            v90 = *(_QWORD *)(v87 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v121.fields.currentCryptoKey = v91;
            *(_QWORD *)&v121.fields.fakeValue = v90;
            IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v121, 0LL);
            if ( v57 >= *(_DWORD *)(v47 + 24) )
              goto LABEL_140;
            if ( !*v88 )
              goto LABEL_136;
            v92 = IsNeedDeckPosReset;
            IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060((*v88)[6], 0LL);
            if ( v57 >= *(_DWORD *)(v47 + 24) )
              goto LABEL_140;
            v93 = IsNeedDeckPosReset;
            IsNeedDeckPosReset = (__int64)*v88;
            if ( !*v88 )
              goto LABEL_136;
            DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)IsNeedDeckPosReset, 0, 0LL);
            IsNeedDeckPosReset = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                   questRestrictionInfo,
                                   v92,
                                   v93,
                                   DispLimitCount,
                                   initPos,
                                   0,
                                   0LL);
            if ( (IsNeedDeckPosReset & 1) != 0 )
            {
              if ( v57 >= *(_DWORD *)(v47 + 24) )
                goto LABEL_140;
              *v88 = 0LL;
              sub_1BC2FAC((CGThumbnailListItem_o *)v88, 0, (int32_t)v44, v95);
            }
          }
          v85 = equipIdList;
        }
        if ( !v85 )
          goto LABEL_136;
        IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
        }
        SvtEquipMax = *(unsigned int *)(*(_QWORD *)(IsNeedDeckPosReset + 184) + 48LL);
        if ( (int)SvtEquipMax < (signed int)v85->max_length )
        {
          if ( !*(_DWORD *)(IsNeedDeckPosReset + 224) )
          {
            j_il2cpp_runtime_class_init_0(IsNeedDeckPosReset);
            SvtEquipMax = (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax;
          }
          IsNeedDeckPosReset = sub_1BC30B0(long___TypeInfo, SvtEquipMax);
          equipIdList = (System_Int64_array *)IsNeedDeckPosReset;
        }
      }
      if ( v57 >= *(_DWORD *)(v47 + 24) )
        goto LABEL_140;
      v96 = *(UserServantEntity_o **)(v47 + 8LL * (int)v57 + 32);
      v97 = *p_memberList;
      if ( v96 )
      {
        v98 = equipIdList;
        v99 = isChangeFriendShipSvtEquipSkill;
        v76 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_33369480(
          v76,
          v57,
          v96,
          v98,
          setupInfo,
          questRestrictionInfo,
          0LL,
          initPos,
          0LL,
          0,
          v99,
          0LL);
        if ( !v97 )
          goto LABEL_136;
        if ( v76 )
        {
          IsNeedDeckPosReset = sub_1BC3144(v76, v97->obj.klass->_1.element_class);
          if ( !IsNeedDeckPosReset )
            goto LABEL_141;
        }
        max_length = v97->max_length;
        v53 = v107;
      }
      else
      {
        v76 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_33380072(v76, v57, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v97 )
          goto LABEL_136;
        if ( v76 )
        {
          IsNeedDeckPosReset = sub_1BC3144(v76, v97->obj.klass->_1.element_class);
          if ( !IsNeedDeckPosReset )
          {
LABEL_141:
            v104 = sub_1BC3288();
            sub_1BC3130(v104, 0LL);
          }
        }
        max_length = v97->max_length;
      }
      if ( v57 >= max_length )
        goto LABEL_140;
      v78 = &v97->obj.klass + (int)v57;
    }
    else
    {
      v71 = NpcFollowerInfo;
      if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0LL) )
        v72 = 0;
      else
        v72 = v113;
      IsNpc = FollowerInfo__get_IsNpc(v71, 0LL);
      v74 = *p_memberList;
      if ( IsNpc )
        v75 = 0;
      else
        v75 = v114;
      v76 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_33325708(
        v76,
        v57,
        v71,
        v72,
        0,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v75,
        initPos,
        0LL);
      if ( !v74 )
        goto LABEL_136;
      if ( v76 )
      {
        IsNeedDeckPosReset = sub_1BC3144(v76, v74->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
          goto LABEL_141;
      }
      if ( v57 >= v74->max_length )
        goto LABEL_140;
      v78 = &v74->obj.klass + (int)v57;
    }
LABEL_131:
    v78[4] = (Il2CppClass *)v76;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v78 + 4), (int32_t)v76, (int32_t)v44, v77);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_136;
    if ( v57 >= memberList->max_length )
      goto LABEL_140;
    IsNeedDeckPosReset = (__int64)memberList->m_Items[v57];
    if ( !IsNeedDeckPosReset )
      goto LABEL_136;
    cost = this->fields.cost;
    ++v57;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)IsNeedDeckPosReset,
                          0LL)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)SvtEquipMax);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v103) )
    *isBaseModify = 1;
}


void __fastcall PartyListViewItem___ctor_33215196(
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
  __int64 v53; // x1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  __int64 Instance; // x0
  unsigned __int64 SvtEquipMax; // x1
  const MethodInfo *v61; // x2
  UserEventDeckEntity_o *v62; // x20
  struct DeckServant_o *deckInfo; // x8
  System_Int64_array *NpcServantFollowerIds; // x23
  PartyListViewItem_o *v65; // x8
  const MethodInfo *v66; // x2
  int32_t v67; // w20
  int32_t DeckMemberMax; // w22
  FollowerInfo_array *QuestFollowerList; // x19
  const MethodInfo *v70; // x2
  const MethodInfo *v71; // x3
  int max_length; // w8
  int i; // w19
  struct System_Object_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  Il2CppClass **v77; // x0
  bool v78; // w25
  int32_t v79; // w24
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v81; // w9
  int j; // w10
  QuestRestrictionInfo_SlotInfo_o *v83; // x11
  struct DeckServant_o *v84; // x8
  __int64 v85; // x29
  int v86; // w25
  int v87; // w28
  struct DeckServantData_array *svts; // x8
  PartyListViewItem___c__DisplayClass31_0_o *v89; // x19
  struct DeckServant_o *v90; // x8
  struct DeckServantData_array *v91; // x8
  DeckServantData_o *v92; // x8
  int64_t userSvtId; // x20
  System_Func_object__bool__o *v94; // x20
  BalanceConfig_c *v95; // x0
  _BOOL8 v96; // x0
  __int64 v97; // x1
  const MethodInfo *v98; // x2
  Il2CppClass *klass; // x20
  int v100; // w8
  Il2CppClass **v101; // x8
  __int64 NpcDeployIdx; // x0
  __int64 v103; // x1
  __int64 v104; // x2
  BalanceConfig_c *v105; // x0
  const MethodInfo *v106; // x3
  int32_t k; // w19
  struct DeckServant_o *v108; // x8
  struct DeckServantData_array *v109; // x8
  DeckServantData_o *v110; // x8
  int32_t UserServantDeployIndex; // w0
  il2cpp_array_size_t v112; // w20
  const MethodInfo *v113; // x3
  __int64 v114; // x24
  Il2CppClass **v115; // x0
  BalanceConfig_c *v116; // x0
  struct PartyOrganizationListViewItem_array *v117; // x0
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  unsigned __int64 v120; // x24
  signed __int64 v121; // x28
  __int64 m; // x22
  BalanceConfig_c *v123; // x0
  PartyListViewItem___c__DisplayClass31_1_o *v124; // x25
  struct DeckServant_o *v125; // x8
  struct DeckServantData_array *v126; // x8
  DeckServantData_o *v127; // x8
  int32_t *p_initPos; // x8
  int32_t initPos; // w19
  unsigned int *v130; // x20
  PartyOrganizationListViewItem_o *v131; // x25
  const MethodInfo *v132; // x3
  const MethodInfo *v133; // x6
  bool v134; // w20
  int64_t v135; // x4
  FollowerInfo_o *v136; // x29
  bool IsNpc; // w0
  int32_t v138; // w8
  bool v139; // w0
  unsigned int *v140; // x23
  int32_t v141; // w20
  PartyOrganizationListViewItem_o *v142; // x28
  const MethodInfo *v143; // x3
  unsigned __int64 v144; // x20
  unsigned __int64 questPhase; // x8
  FollowerInfo_o *v146; // x29
  int32_t v147; // w25
  PartyOrganizationListViewItem_o *v148; // x0
  System_Func_object__bool__o *v149; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v150; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v151; // x25
  FollowerInfo_o *v152; // x29
  System_Collections_Generic_List_object__o *v153; // x20
  int32_t v154; // w25
  PartyOrganizationListViewItem_o *v155; // x0
  bool v156; // w5
  int32_t v157; // w1
  EventUpValSetupInfo_o *v158; // x3
  QuestRestrictionInfo_o *v159; // x4
  bool v160; // w2
  int32_t v161; // w1
  int32_t v162; // w25
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  RestrictionEntity_o *GrandServantRestrictionEntity; // x29
  const MethodInfo *v166; // x5
  UserServantEntity_array *v167; // x8
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v169; // x8
  int32_t classId; // w25
  System_Int64_array *v171; // x25
  UserServantEntity_o *v172; // x8
  __int64 v173; // x25
  __int64 v174; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v175; // x8
  int32_t v176; // w25
  int32_t v177; // w29
  int32_t DispLimitCount; // w0
  const MethodInfo *v179; // x3
  UserServantEntity_o *v180; // x29
  EventUpValSetupInfo_o *v181; // x23
  PartyListViewItem_o *v182; // x26
  unsigned __int64 v183; // x27
  System_Int64_array *v184; // x25
  int32_t v185; // w20
  PartyOrganizationListViewItem_o *v186; // x0
  System_Int64_array *v187; // x3
  EventUpValSetupInfo_o *v188; // x25
  EventUpValSetupInfo_o *v189; // x4
  __int64 v190; // x23
  int v191; // w25
  unsigned __int64 v192; // x29
  UserServantEntity_o **v193; // x26
  PartyListViewItem___c__DisplayClass31_2_o *v194; // x19
  signed __int64 v195; // x20
  System_Func_object__bool__o *v196; // x24
  const MethodInfo *v197; // x3
  unsigned __int64 v198; // x8
  signed __int64 v199; // x28
  EventUpValSetupInfo_o *v200; // x22
  unsigned __int64 v201; // x24
  int v202; // w26
  __int64 n; // x23
  BalanceConfig_c *v204; // x0
  PartyListViewItem___c__DisplayClass31_3_o *v205; // x25
  struct DeckServant_o *v206; // x8
  struct DeckServantData_array *v207; // x8
  __int64 v208; // x8
  int32_t *v209; // x8
  int32_t v210; // w19
  unsigned int *v211; // x20
  PartyOrganizationListViewItem_o *v212; // x25
  const MethodInfo *v213; // x3
  const MethodInfo *v214; // x6
  struct DeckServant_o *v215; // x8
  struct DeckServantData_array *v216; // x8
  __int64 v217; // x8
  int64_t v218; // x4
  _BOOL4 v219; // w22
  char isFixNpc; // w26
  int32_t chkIdx; // w8
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v223; // x29
  int32_t v224; // w22
  bool v225; // w0
  unsigned int *v226; // x20
  int32_t v227; // w26
  PartyOrganizationListViewItem_o *v228; // x0
  int32_t v229; // w3
  PartyOrganizationListViewItem_o *v230; // x25
  const MethodInfo *v231; // x3
  struct PartyOrganizationListViewItem_array *v232; // x8
  struct DeckServant_o *v233; // x9
  struct DeckServantData_array *v234; // x9
  __int64 v235; // x9
  __int64 v236; // x8
  int v237; // w9
  FollowerInfo_o *v238; // x29
  unsigned int *v239; // x27
  int32_t v240; // w22
  PartyOrganizationListViewItem_o *v241; // x0
  int32_t v242; // w3
  PartyOrganizationListViewItem_o *v243; // x25
  const MethodInfo *v244; // x3
  unsigned int *v245; // x19
  int v246; // w26
  PartyOrganizationListViewItem_o *v247; // x0
  System_Func_object__bool__o *v248; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v249; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v250; // x25
  bool v251; // w0
  RestrictionEntity_o *v252; // x29
  const MethodInfo *v253; // x5
  UserServantEntity_array *v254; // x20
  struct PartyOrganizationListViewItem_array *v255; // x8
  struct DeckServant_o *v256; // x9
  struct DeckServantData_array *v257; // x9
  __int64 v258; // x9
  FollowerInfo_o *v259; // x29
  unsigned int *v260; // x26
  __int64 v261; // x8
  __int64 v262; // x8
  int32_t v263; // w22
  PartyOrganizationListViewItem_o *v264; // x25
  const MethodInfo *v265; // x3
  System_Int64_array *v266; // x25
  __int64 v267; // x8
  __int64 v268; // x25
  __int64 v269; // x29
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v270; // x8
  int32_t v271; // w25
  int32_t v272; // w29
  int32_t v273; // w0
  const MethodInfo *v274; // x3
  UserServantEntity_o *v275; // x29
  unsigned int *v276; // x26
  System_Int64_array *v277; // x22
  int32_t v278; // w20
  PartyOrganizationListViewItem_o *v279; // x25
  const MethodInfo *v280; // x3
  struct PartyOrganizationListViewItem_array *v281; // x8
  int32_t v282; // w19
  const MethodInfo *v283; // x1
  __int64 v284; // x0
  UserServantEntity_o **v285; // [xsp+28h] [xbp-178h]
  bool v286; // [xsp+30h] [xbp-170h]
  _BOOL4 v287; // [xsp+30h] [xbp-170h]
  int32_t followerGrandGraphIda; // [xsp+34h] [xbp-16Ch]
  int v289; // [xsp+38h] [xbp-168h]
  int v290; // [xsp+38h] [xbp-168h]
  int32_t v291; // [xsp+3Ch] [xbp-164h]
  int32_t v292; // [xsp+3Ch] [xbp-164h]
  bool v293; // [xsp+3Ch] [xbp-164h]
  signed __int64 v295; // [xsp+48h] [xbp-158h]
  int32_t v296; // [xsp+58h] [xbp-148h]
  int v297; // [xsp+5Ch] [xbp-144h]
  int32_t v298; // [xsp+60h] [xbp-140h]
  int32_t FollowerIndex; // [xsp+64h] [xbp-13Ch]
  PartyListViewItem_o *v300; // [xsp+68h] [xbp-138h]
  FollowerInfo_o *v301; // [xsp+70h] [xbp-130h]
  EventUpValSetupInfo_o *setupInfoa; // [xsp+78h] [xbp-128h]
  EventUpValSetupInfo_o *setupInfob; // [xsp+78h] [xbp-128h]
  System_Int64_array *v304; // [xsp+80h] [xbp-120h]
  int v305; // [xsp+80h] [xbp-120h]
  QuestRestrictionInfo_o *v306; // [xsp+88h] [xbp-118h]
  int64_t *m_Items; // [xsp+88h] [xbp-118h]
  int v308; // [xsp+88h] [xbp-118h]
  System_Collections_Generic_List_object__o *v309; // [xsp+90h] [xbp-110h]
  PartyListViewItem_o *v310; // [xsp+98h] [xbp-108h]
  UserServantEntity_array *userServantList; // [xsp+A0h] [xbp-100h]
  _BOOL4 v312; // [xsp+ACh] [xbp-F4h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+B0h] [xbp-F0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+C0h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v316; // [xsp+C8h] [xbp-D8h] BYREF
  int32_t v317; // [xsp+E4h] [xbp-BCh] BYREF
  System_Int64_array *v318; // [xsp+E8h] [xbp-B8h] BYREF
  int32_t v319; // [xsp+F4h] [xbp-ACh] BYREF
  FollowerInfo_o *v320; // [xsp+F8h] [xbp-A8h] BYREF
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+104h] [xbp-9Ch] BYREF
  System_Int64_array *equipIdList; // [xsp+108h] [xbp-98h] BYREF
  int32_t followerClassIda; // [xsp+114h] [xbp-8Ch] BYREF
  FollowerInfo_o *followera; // [xsp+118h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v325; // [xsp+120h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v326; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v327; // 0:x0.16

  if ( (byte_4AFD9F1 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, isBaseModify);
    sub_1BC3008(&Method_BasicHelper_Any_FollowerInfo___, v21);
    sub_1BC3008(&Method_DataManager_GetMaster_NpcFollowerMaster___, v22);
    sub_1BC3008(&DataManager_TypeInfo, v23);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_FollowerInfo___, v24);
    sub_1BC3008(&Method_System_Linq_Enumerable_Count_FollowerInfo___, v25);
    sub_1BC3008(&Method_System_Linq_Enumerable_ElementAt_FollowerInfo___, v26);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___, v27);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_FollowerInfo___, v28);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__, v29);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__, v30);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__get_Current__, v31);
    sub_1BC3008(&FollowerInfo___TypeInfo, v32);
    sub_1BC3008(&System_Func_FollowerInfo__bool__TypeInfo, v33);
    sub_1BC3008(&long___TypeInfo, v34);
    sub_1BC3008(&Method_System_Collections_Generic_List_FollowerInfo__Add__, v35);
    sub_1BC3008(&Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__, v36);
    sub_1BC3008(&Method_System_Collections_Generic_List_FollowerInfo___ctor__, v37);
    sub_1BC3008(&Method_System_Collections_Generic_List_FollowerInfo__get_Count__, v38);
    sub_1BC3008(&Method_System_Collections_Generic_List_FollowerInfo__get_Item__, v39);
    sub_1BC3008(&System_Collections_Generic_List_FollowerInfo__TypeInfo, v40);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41);
    sub_1BC3008(&PartyOrganizationListViewItem___TypeInfo, v42);
    sub_1BC3008(&PartyOrganizationListViewItem_TypeInfo, v43);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v44);
    sub_1BC3008(&Method_PartyListViewItem___c__DisplayClass31_0___ctor_b__0__, v45);
    sub_1BC3008(&PartyListViewItem___c__DisplayClass31_0_TypeInfo, v46);
    sub_1BC3008(&Method_PartyListViewItem___c__DisplayClass31_1___ctor_b__1__, v47);
    sub_1BC3008(&PartyListViewItem___c__DisplayClass31_1_TypeInfo, v48);
    sub_1BC3008(&Method_PartyListViewItem___c__DisplayClass31_2___ctor_b__2__, v49);
    sub_1BC3008(&PartyListViewItem___c__DisplayClass31_2_TypeInfo, v50);
    sub_1BC3008(&Method_PartyListViewItem___c__DisplayClass31_3___ctor_b__3__, v51);
    sub_1BC3008(&PartyListViewItem___c__DisplayClass31_3_TypeInfo, v52);
    sub_1BC3008(&UserServantEntity___TypeInfo, v53);
    byte_4AFD9F1 = 1;
  }
  memset(&v325, 0, sizeof(v325));
  followera = 0LL;
  followerClassIda = 0;
  equipIdList = 0LL;
  isChangeFriendShipSvtEquipSkill = 0;
  v320 = 0LL;
  v319 = 0;
  v318 = 0LL;
  v317 = 0;
  ListViewItem___ctor_42769384((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v54, v55);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v57, v58);
  v62 = deck;
  if ( !deck )
    goto LABEL_75;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_75;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v61) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_75;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0LL);
    v62 = deck;
  }
  NpcServantFollowerIds = UserEventDeckEntity__GetNpcServantFollowerIds(v62, 0LL);
  userServantList = UserEventDeckEntity__GetUserServantList(v62, 0, 0, 0LL);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  if ( *(int *)(Instance + 56) < 1 )
  {
    v310 = 0LL;
    v297 = 0;
    v312 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v65 = *(PartyListViewItem_o **)(Instance + 80);
    v297 = 0;
    v312 = v65 == 0LL;
    v310 = v65;
    if ( follower && v65 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      v297 = *(_DWORD *)(Instance + 56);
      Instance = (__int64)PartyListViewItem__GetMember(v310, v297 - 1, v66);
      if ( !Instance )
        goto LABEL_75;
      v67 = *(_DWORD *)(Instance + 364);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v67, follower, 0LL);
      v312 = 0;
    }
  }
  Instance = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  v301 = follower;
  if ( !questRestrictionInfo )
    goto LABEL_75;
  DeckMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMemberMax;
  if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0LL) )
    DeckMemberMax = questRestrictionInfo->fields.servantNumMax;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo
    || !Instance
    || (QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                              (NpcFollowerMaster_o *)Instance,
                              (*p_questRestrictionInfo)->fields.questId,
                              (*p_questRestrictionInfo)->fields.questPhase,
                              0LL),
        v309 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_FollowerInfo__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v309,
          (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_FollowerInfo___ctor__),
        !QuestFollowerList) )
  {
LABEL_75:
    sub_1BC3264(Instance, SvtEquipMax);
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
        if ( !v309 )
          goto LABEL_75;
        items = v309->fields._items;
        v75 = Method_System_Collections_Generic_List_FollowerInfo__Add__;
        ++v309->fields._version;
        if ( !items )
          goto LABEL_75;
        size = v309->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v309,
            (Il2CppObject *)SvtEquipMax,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
        }
        else
        {
          v77 = &items->obj.klass + size;
          v309->fields._size = size + 1;
          v77[4] = (Il2CppClass *)SvtEquipMax;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v77 + 4), SvtEquipMax, (int32_t)v70, v71);
        }
      }
      max_length = npcFollowerInfoList->max_length;
    }
  }
  v78 = isNew;
  FollowerIndex = PartyListViewItem__GetFollowerIndex(
                    this,
                    deck,
                    (System_Collections_Generic_List_FollowerInfo__o *)v309,
                    v71);
  setupInfoa = setupInfo;
  v306 = questRestrictionInfo;
  v300 = this;
  if ( isNew || !questRestrictionInfo->fields.isNpcEditablePos )
    goto LABEL_117;
  Instance = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !v309 )
      goto LABEL_75;
    v79 = v309->fields._size;
  }
  else
  {
    slotInfos = questRestrictionInfo->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_75;
    v81 = slotInfos->max_length;
    if ( v81 < 1 )
    {
      v79 = 0;
    }
    else
    {
      v79 = 0;
      for ( j = 0; j != v81; ++j )
      {
        if ( v81 == j )
          goto LABEL_425;
        v83 = slotInfos->m_Items[j];
        if ( !v83 )
          goto LABEL_75;
        if ( v83->fields.slotType == 1 )
          v79 += v83->fields.isMoved;
      }
    }
  }
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
    v89 = (PartyListViewItem___c__DisplayClass31_0_o *)sub_1BC3254(PartyListViewItem___c__DisplayClass31_0_TypeInfo);
    PartyListViewItem___c__DisplayClass31_0___ctor(v89, 0LL);
    v90 = deck->fields.deckInfo;
    if ( !v90 )
      goto LABEL_75;
    v91 = v90->fields.svts;
    if ( !v91 )
      goto LABEL_75;
    if ( (unsigned int)v85 >= v91->max_length )
      goto LABEL_425;
    v92 = v91->m_Items[v85];
    if ( v92 && v89 )
    {
      userSvtId = v92->fields.userSvtId;
      v89->fields.npcSvtId = v92->fields.npcFollowerSvtId;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_42413184(
                   questRestrictionInfo,
                   v92->fields.initPos,
                   0LL);
      if ( (int)v85 >= DeckMemberMax && (userSvtId || v89->fields.npcSvtId) )
        v86 = 1;
      if ( !(Instance & 1 | (v89->fields.npcSvtId == 0)) )
      {
        v94 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v94,
          (Il2CppObject *)v89,
          Method_PartyListViewItem___c__DisplayClass31_0___ctor_b__0__,
          0LL);
        Instance = BasicHelper__Any_object_(
                     (System_Collections_Generic_List_T__o *)v309,
                     (System_Func_T__bool__o *)v94,
                     (const MethodInfo_2FEB2DC *)Method_BasicHelper_Any_FollowerInfo___);
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
    v78 = isNew;
    goto LABEL_117;
  }
  v95 = BalanceConfig_TypeInfo;
  v78 = isNew;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v95 = BalanceConfig_TypeInfo;
  }
  NpcServantFollowerIds = (System_Int64_array *)sub_1BC30B0(
                                                  long___TypeInfo,
                                                  (unsigned int)v95->static_fields->DeckMemberMax);
  Instance = (__int64)v309;
  if ( !v309 )
    goto LABEL_75;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v316,
    v309,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
  v325 = v316;
  while ( 1 )
  {
    v96 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v325,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    if ( !v96 )
      break;
    if ( !v325.fields._current )
      sub_1BC3264(v96, v97);
    klass = v325.fields._current[5].klass;
    if ( klass )
    {
      v100 = LODWORD(v325.fields._current[5].monitor) - 1;
      if ( v100 >= 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_1BC3264(v96, v97);
        if ( v100 >= NpcServantFollowerIds->max_length )
          sub_1BC326C(v96, v97, v98);
        v101 = &NpcServantFollowerIds->obj.klass + (unsigned int)v100;
        goto LABEL_92;
      }
      NpcDeployIdx = PartyListViewItem__GetNpcDeployIdx(this, NpcServantFollowerIds, v98);
      if ( (NpcDeployIdx & 0x80000000) == 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_1BC3264(NpcDeployIdx, v103);
        if ( (unsigned int)NpcDeployIdx >= NpcServantFollowerIds->max_length )
          sub_1BC326C(NpcDeployIdx, v103, v104);
        v101 = &NpcServantFollowerIds->obj.klass + (unsigned int)NpcDeployIdx;
LABEL_92:
        v101[4] = klass;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v325,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
  v105 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v105 = BalanceConfig_TypeInfo;
  }
  userServantList = (UserServantEntity_array *)sub_1BC30B0(
                                                 UserServantEntity___TypeInfo,
                                                 (unsigned int)v105->static_fields->DeckMemberMax);
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
    v108 = deck->fields.deckInfo;
    if ( !v108 )
      goto LABEL_75;
    v109 = v108->fields.svts;
    if ( !v109 )
      goto LABEL_75;
    if ( k >= v109->max_length )
      goto LABEL_425;
    v110 = v109->m_Items[k];
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
          Instance = (__int64)UserEventDeckEntity__GetUserServant(deck, k, 0LL);
          if ( !userServantList )
            goto LABEL_75;
          v114 = Instance;
          if ( Instance )
          {
            Instance = sub_1BC3144(Instance, userServantList->obj.klass->_1.element_class);
            if ( !Instance )
              goto LABEL_426;
          }
          if ( v112 >= userServantList->max_length )
            goto LABEL_425;
          v115 = &userServantList->obj.klass + v112;
          v115[4] = (Il2CppClass *)v114;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v115 + 4), v114, (int32_t)v70, v113);
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
                      (System_Collections_Generic_List_FollowerInfo__o *)v309,
                      v70);
  }
LABEL_117:
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v301 = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v296 = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    followerGrandGraphIda = *(_DWORD *)(Instance + 36);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v298 = *(_DWORD *)(Instance + 40);
  }
  else
  {
    v298 = followerDeckId;
    followerGrandGraphIda = followerGrandGraphId;
    v296 = followerClassId;
  }
  v116 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v116 = BalanceConfig_TypeInfo;
  }
  v117 = (struct PartyOrganizationListViewItem_array *)sub_1BC30B0(
                                                         PartyOrganizationListViewItem___TypeInfo,
                                                         (unsigned int)v116->static_fields->DeckMemberMax);
  this->fields.memberList = v117;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v117, v118, v119);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( !v78 && questRestrictionInfo->fields.isNpcEditablePos )
  {
    m_Items = NpcServantFollowerIds->m_Items;
    v120 = 0LL;
    v121 = DeckMemberMax;
    v285 = userServantList->m_Items;
    v289 = -1;
    while ( 1 )
    {
      for ( m = 8 * v120; ; m += 8LL )
      {
        v123 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v123 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v120 >= v123->static_fields->DeckMemberMax )
          goto LABEL_419;
        v124 = (PartyListViewItem___c__DisplayClass31_1_o *)sub_1BC3254(PartyListViewItem___c__DisplayClass31_1_TypeInfo);
        PartyListViewItem___c__DisplayClass31_1___ctor(v124, 0LL);
        if ( v312 )
        {
          v125 = deck->fields.deckInfo;
          if ( !v125 )
            goto LABEL_75;
          v126 = v125->fields.svts;
          if ( !v126 )
            goto LABEL_75;
          if ( v120 >= v126->max_length )
            goto LABEL_425;
          v127 = v126->m_Items[v120];
          if ( !v127 )
            goto LABEL_75;
          p_initPos = &v127->fields.initPos;
        }
        else
        {
          Instance = (__int64)PartyListViewItem__GetMember(v310, v120, v70);
          if ( !Instance )
            goto LABEL_75;
          p_initPos = (int32_t *)(Instance + 364);
        }
        initPos = *p_initPos;
        if ( (__int64)v120 < v121 )
          break;
        v130 = (unsigned int *)*p_memberList;
        v131 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_33380072(v131, v120, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v130 )
          goto LABEL_75;
        if ( v131 )
        {
          Instance = sub_1BC3144(v131, *(_QWORD *)(*(_QWORD *)v130 + 64LL));
          if ( !Instance )
            goto LABEL_426;
        }
        if ( v120 >= v130[6] )
          goto LABEL_425;
        *(_QWORD *)&v130[2 * v120 + 8] = v131;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v130[(unsigned __int64)m / 4 + 8], (int32_t)v131, (int32_t)v70, v132);
        ++v120;
      }
      if ( !v124 )
        goto LABEL_75;
      v124->fields.chkIdx = v120 + 1;
      followera = 0LL;
      followerClassIda = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_42413184(questRestrictionInfo, initPos, 0LL);
      v134 = 0;
      v291 = Instance;
      if ( (Instance & 1) != 0 )
      {
        if ( !NpcServantFollowerIds )
          goto LABEL_75;
        if ( v120 >= NpcServantFollowerIds->max_length )
          goto LABEL_425;
        v135 = m_Items[v120];
        v134 = v135 >= 1
            && v124->fields.chkIdx != v297
            && PartyListViewItem__SetNpcFollowerInfo(
                 this,
                 &followera,
                 &followerClassIda,
                 npcFollowerInfoList,
                 v135,
                 initPos,
                 v133);
      }
      v286 = !QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL)
          && QuestRestrictionInfo__IsPositionFixNpc(questRestrictionInfo, initPos, 0LL);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                            (PartyOrganizationUtility_o *)Instance,
                            initPos,
                            0LL);
      v295 = v121;
      v304 = NpcServantFollowerIds;
      if ( !Instance || ((v291 ^ 1) & 1) != 0 )
      {
        if ( v134 || v124->fields.chkIdx == FollowerIndex )
        {
          v146 = followera;
          v140 = (unsigned int *)*p_memberList;
          if ( followera )
          {
            v147 = followerClassIda;
            v142 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_33325708(
              v142,
              v120,
              v146,
              v147,
              0,
              setupInfo,
              questRestrictionInfo,
              0LL,
              0,
              v298,
              initPos,
              0LL);
            v144 = v120 + 1;
            if ( !v140 )
              goto LABEL_75;
          }
          else
          {
            v148 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
            v144 = v120 + 1;
            v142 = v148;
            if ( !v301 )
            {
              v160 = 1;
              v161 = v120;
              goto LABEL_198;
            }
            PartyOrganizationListViewItem___ctor_33325708(
              v148,
              v120,
              v301,
              v296,
              followerGrandGraphIda,
              setupInfo,
              questRestrictionInfo,
              0LL,
              0,
              v298,
              initPos,
              0LL);
LABEL_199:
            if ( !v140 )
              goto LABEL_75;
          }
          goto LABEL_215;
        }
        if ( v286 )
        {
          v149 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_FollowerInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v149,
            (Il2CppObject *)v124,
            Method_PartyListViewItem___c__DisplayClass31_1___ctor_b__1__,
            0LL);
          v150 = System_Linq_Enumerable__Where_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v309,
                   (System_Func_TSource__bool__o *)v149,
                   (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
          v151 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1BC3144(v150, FollowerInfo___TypeInfo);
          if ( !v151 )
            v151 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                          v150,
                                                                          (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
          v144 = v120 + 1;
          if ( System_Linq_Enumerable__Any_object_(
                 v151,
                 (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
          {
            Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                                  v151,
                                  0,
                                  (const MethodInfo_3021E98 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
            v152 = (FollowerInfo_o *)Instance;
LABEL_183:
            v140 = (unsigned int *)*p_memberList;
            if ( v152 )
              goto LABEL_229;
          }
          else
          {
            Instance = (__int64)v309;
            if ( !v309 )
              goto LABEL_75;
            if ( v309->fields._size >= 1 )
            {
              v162 = 0;
              while ( 1 )
              {
                Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      v162,
                                      (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
                if ( !Instance || !NpcServantFollowerIds )
                  goto LABEL_75;
                if ( v120 >= NpcServantFollowerIds->max_length )
                  goto LABEL_425;
                if ( *(_QWORD *)(Instance + 80) != m_Items[v120] )
                {
                  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                        v309,
                                        v162,
                                        (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
                  if ( !Instance )
                    goto LABEL_75;
                  if ( v289 < v162 && *(int *)(Instance + 88) <= 0 )
                    break;
                }
                Instance = (__int64)v309;
                if ( ++v162 >= v309->fields._size )
                  goto LABEL_212;
              }
              Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                    v309,
                                    v162,
                                    (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
              v152 = (FollowerInfo_o *)Instance;
              v289 = v162;
              goto LABEL_183;
            }
LABEL_212:
            v140 = (unsigned int *)*p_memberList;
          }
          v155 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
          v142 = v155;
          v157 = v120;
          v158 = setupInfo;
          v159 = questRestrictionInfo;
          v156 = 0;
LABEL_214:
          PartyOrganizationListViewItem___ctor_33380072(v155, v157, 0, v158, v159, v156, initPos, 0LL);
          if ( !v140 )
            goto LABEL_75;
          goto LABEL_215;
        }
        if ( !NpcServantFollowerIds )
          goto LABEL_75;
        if ( v120 >= NpcServantFollowerIds->max_length )
          goto LABEL_425;
        if ( m_Items[v120] )
        {
          Instance = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)v309,
                       (const MethodInfo_301E214 *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
          if ( (int)Instance < 1 )
          {
LABEL_195:
            v144 = v120 + 1;
            v140 = (unsigned int *)*p_memberList;
          }
          else
          {
            if ( !v309 )
              goto LABEL_75;
            v153 = v309;
            v154 = 0;
            while ( 1 )
            {
              Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                    v153,
                                    v154,
                                    (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
              if ( !Instance )
                goto LABEL_75;
              if ( v120 >= NpcServantFollowerIds->max_length )
                goto LABEL_425;
              if ( *(_QWORD *)(Instance + 80) == m_Items[v120] )
                break;
              v153 = v309;
              if ( ++v154 >= System_Linq_Enumerable__Count_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)v309,
                               (const MethodInfo_301E214 *)Method_System_Linq_Enumerable_Count_FollowerInfo___) )
                goto LABEL_195;
            }
            Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                  v309,
                                  v154,
                                  (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
            v144 = v120 + 1;
            v140 = (unsigned int *)*p_memberList;
            if ( Instance )
            {
              v152 = (FollowerInfo_o *)Instance;
LABEL_229:
              userSvtLeaderHash = v152->fields.userSvtLeaderHash;
              if ( !userSvtLeaderHash )
                goto LABEL_75;
              if ( !userSvtLeaderHash->max_length )
                goto LABEL_425;
              v169 = userSvtLeaderHash->m_Items[0];
              if ( !v169 )
                goto LABEL_75;
              classId = v169->fields.classId;
              v142 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
              PartyOrganizationListViewItem___ctor_33325708(
                v142,
                v120,
                v152,
                classId,
                0,
                setupInfo,
                questRestrictionInfo,
                0LL,
                1,
                v298,
                initPos,
                0LL);
              if ( !v140 )
                goto LABEL_75;
LABEL_215:
              if ( v142 )
              {
                Instance = sub_1BC3144(v142, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
                if ( !Instance )
                  goto LABEL_426;
              }
              questPhase = v140[6];
              goto LABEL_218;
            }
          }
          v155 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
          v142 = v155;
          v156 = 1;
          v157 = v120;
          v158 = setupInfo;
          v159 = questRestrictionInfo;
          goto LABEL_214;
        }
        GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                          questRestrictionInfo,
                                          initPos,
                                          0LL);
        Instance = (__int64)UserEventDeckEntity__GetEquipList(deck, v120, 0LL);
        equipIdList = (System_Int64_array *)Instance;
        isChangeFriendShipSvtEquipSkill = 0;
        if ( GrandServantRestrictionEntity )
        {
          if ( !userServantList )
            goto LABEL_75;
          v144 = v120 + 1;
          if ( v120 >= userServantList->max_length )
            goto LABEL_425;
          PartyListViewItem__GetGrandServantInfo(
            this,
            GrandServantRestrictionEntity,
            &v285[(unsigned __int64)m / 8],
            &equipIdList,
            &isChangeFriendShipSvtEquipSkill,
            v166);
          v167 = userServantList;
        }
        else
        {
          v171 = (System_Int64_array *)Instance;
          if ( (v291 & 1) != 0 )
          {
            if ( !userServantList )
              goto LABEL_75;
            if ( v120 >= userServantList->max_length )
              goto LABEL_425;
            v172 = v285[v120];
            if ( v172 )
            {
              v174 = *(_QWORD *)&v172->fields.svtId.fields.currentCryptoKey;
              v173 = *(_QWORD *)&v172->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v326.fields.currentCryptoKey = v174;
              *(_QWORD *)&v326.fields.fakeValue = v173;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v326, 0LL);
              if ( v120 >= userServantList->max_length )
                goto LABEL_425;
              v175 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v285[v120];
              if ( !v175 )
                goto LABEL_75;
              v176 = Instance;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v175[6], 0LL);
              if ( v120 >= userServantList->max_length )
                goto LABEL_425;
              v177 = Instance;
              Instance = (__int64)v285[v120];
              if ( !Instance )
                goto LABEL_75;
              DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
              Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                           questRestrictionInfo,
                           v176,
                           v177,
                           DispLimitCount,
                           initPos,
                           0,
                           0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( v120 >= userServantList->max_length )
                  goto LABEL_425;
                v285[v120] = 0LL;
                sub_1BC2FAC((CGThumbnailListItem_o *)&v285[(unsigned __int64)m / 8], 0, (int32_t)v70, v179);
              }
            }
            v171 = equipIdList;
          }
          if ( !v171 )
            goto LABEL_75;
          Instance = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Instance = (__int64)BalanceConfig_TypeInfo;
          }
          v144 = v120 + 1;
          SvtEquipMax = *(unsigned int *)(*(_QWORD *)(Instance + 184) + 48LL);
          if ( (int)SvtEquipMax < (signed int)v171->max_length )
          {
            if ( !*(_DWORD *)(Instance + 224) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              SvtEquipMax = (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax;
            }
            Instance = sub_1BC30B0(long___TypeInfo, SvtEquipMax);
            equipIdList = (System_Int64_array *)Instance;
          }
          v167 = userServantList;
          if ( !userServantList )
            goto LABEL_75;
        }
        if ( v120 >= v167->max_length )
          goto LABEL_425;
        v180 = v285[v120];
        v140 = (unsigned int *)*p_memberList;
        if ( !v180 )
        {
          v148 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
          v142 = v148;
          v161 = v120;
          v160 = 0;
LABEL_198:
          PartyOrganizationListViewItem___ctor_33380072(
            v148,
            v161,
            v160,
            setupInfo,
            questRestrictionInfo,
            1,
            initPos,
            0LL);
          goto LABEL_199;
        }
        setupInfob = (EventUpValSetupInfo_o *)*p_memberList;
        v181 = setupInfo;
        v182 = this;
        v183 = v144;
        v184 = equipIdList;
        v185 = isChangeFriendShipSvtEquipSkill;
        v186 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
        v187 = v184;
        v188 = v181;
        v189 = v181;
        v140 = (unsigned int *)setupInfob;
        v142 = v186;
        PartyOrganizationListViewItem___ctor_33369480(
          v186,
          v120,
          v180,
          v187,
          v189,
          questRestrictionInfo,
          0LL,
          initPos,
          0LL,
          0,
          v185,
          0LL);
        if ( !setupInfob )
          goto LABEL_75;
        v144 = v183;
        if ( v142 )
        {
          Instance = sub_1BC3144(v142, setupInfob->klass->_1.element_class);
          if ( !Instance )
            goto LABEL_426;
        }
        questPhase = (unsigned int)setupInfob->fields.questPhase;
        this = v182;
        setupInfo = v188;
      }
      else
      {
        v136 = (FollowerInfo_o *)Instance;
        IsNpc = FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0LL);
        v138 = v296;
        if ( IsNpc )
          v138 = 0;
        v292 = v138;
        v139 = FollowerInfo__get_IsNpc(v136, 0LL);
        v140 = (unsigned int *)*p_memberList;
        if ( v139 )
          v141 = 0;
        else
          v141 = v298;
        v142 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_33325708(
          v142,
          v120,
          v136,
          v292,
          0,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v141,
          initPos,
          0LL);
        if ( !v140 )
          goto LABEL_75;
        v144 = v120 + 1;
        if ( v142 )
        {
          Instance = sub_1BC3144(v142, *(_QWORD *)(*(_QWORD *)v140 + 64LL));
          if ( !Instance )
            goto LABEL_426;
        }
        questPhase = v140[6];
      }
LABEL_218:
      if ( v120 >= questPhase )
        goto LABEL_425;
      *(_QWORD *)&v140[2 * v120 + 8] = v142;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v140[(unsigned __int64)m / 4 + 8], (int32_t)v142, (int32_t)v70, v143);
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_75;
      NpcServantFollowerIds = v304;
      if ( v120 >= memberList->max_length )
        goto LABEL_425;
      Instance = (__int64)memberList->m_Items[v120];
      v121 = v295;
      if ( !Instance )
        goto LABEL_75;
      cost = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                        + cost;
      v120 = v144;
    }
  }
  v305 = questRestrictionInfo->fields.myServantNumMax
       + (FollowerIndex > 0 && !questRestrictionInfo->fields.isNotTransitionSupportList);
  if ( !v78 )
  {
    if ( !userServantList )
      goto LABEL_75;
    if ( (int)userServantList->max_length >= 1 )
    {
      v190 = 0LL;
      v191 = 0;
      v192 = 0LL;
      v193 = userServantList->m_Items;
      while ( 1 )
      {
        v194 = (PartyListViewItem___c__DisplayClass31_2_o *)sub_1BC3254(PartyListViewItem___c__DisplayClass31_2_TypeInfo);
        PartyListViewItem___c__DisplayClass31_2___ctor(v194, 0LL);
        if ( !v194 )
          goto LABEL_75;
        v195 = v192 + 1;
        v194->fields.chkIdx = v192 + 1;
        if ( v192 >= userServantList->max_length )
          goto LABEL_425;
        if ( v193[v192] )
          ++v191;
        v196 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v196,
          (Il2CppObject *)v194,
          Method_PartyListViewItem___c__DisplayClass31_2___ctor_b__2__,
          0LL);
        Instance = (__int64)System_Linq_Enumerable__Where_object_(
                              (System_Collections_Generic_IEnumerable_TSource__o *)npcFollowerInfoList,
                              (System_Func_TSource__bool__o *)v196,
                              (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
        v198 = userServantList->max_length;
        if ( v192 >= v198 )
          goto LABEL_425;
        questRestrictionInfo = v306;
        if ( !v193[v192] )
          goto LABEL_281;
        if ( v194->fields.chkIdx > DeckMemberMax )
          goto LABEL_279;
        Instance = System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                     (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
        if ( v191 > v305 || (Instance & 1) != 0 )
          break;
LABEL_281:
        ++v190;
        ++v192;
        if ( v195 >= (int)userServantList->max_length )
          goto LABEL_282;
      }
      v198 = userServantList->max_length;
LABEL_279:
      if ( v192 >= v198 )
        goto LABEL_425;
      v193[v192] = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v193[v190], 0, (int32_t)v70, v197);
      goto LABEL_281;
    }
  }
LABEL_282:
  v199 = DeckMemberMax;
  v200 = setupInfoa;
  v201 = 0LL;
  v202 = 0;
LABEL_283:
  for ( n = 8 * v201 + 32; ; n += 8LL )
  {
    v204 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v204 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v201 >= v204->static_fields->DeckMemberMax )
      break;
    v205 = (PartyListViewItem___c__DisplayClass31_3_o *)sub_1BC3254(PartyListViewItem___c__DisplayClass31_3_TypeInfo);
    PartyListViewItem___c__DisplayClass31_3___ctor(v205, 0LL);
    if ( v312 )
    {
      v206 = deck->fields.deckInfo;
      if ( !v206 )
        goto LABEL_75;
      v207 = v206->fields.svts;
      if ( !v207 )
        goto LABEL_75;
      if ( v201 >= v207->max_length )
        goto LABEL_425;
      v208 = *(__int64 *)((char *)&v207->obj.klass + n);
      if ( !v208 )
        goto LABEL_75;
      v209 = (int32_t *)(v208 + 76);
    }
    else
    {
      Instance = (__int64)PartyListViewItem__GetMember(v310, v201, v70);
      if ( !Instance )
        goto LABEL_75;
      v209 = (int32_t *)(Instance + 364);
    }
    v210 = *v209;
    if ( (__int64)v201 < v199 )
    {
      if ( !v205 )
        goto LABEL_75;
      v205->fields.chkIdx = v201 + 1;
      v320 = 0LL;
      v319 = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_42413184(questRestrictionInfo, v210, 0LL);
      v308 = v202;
      v290 = Instance;
      if ( (Instance & 1) == 0 )
        goto LABEL_310;
      v215 = deck->fields.deckInfo;
      if ( !v215 )
        goto LABEL_75;
      v216 = v215->fields.svts;
      if ( !v216 )
        goto LABEL_75;
      if ( v201 >= v216->max_length )
        goto LABEL_425;
      v217 = *(__int64 *)((char *)&v216->obj.klass + n);
      if ( !v217 )
        goto LABEL_75;
      v218 = *(_QWORD *)(v217 + 64);
      if ( v218 >= 1 )
      {
        if ( v205->fields.chkIdx == v297 )
        {
          v219 = 0;
          isFixNpc = 1;
          v293 = 1;
          goto LABEL_316;
        }
        v293 = PartyListViewItem__SetNpcFollowerInfo(this, &v320, &v319, npcFollowerInfoList, v218, v210, v214);
        v219 = 0;
LABEL_315:
        isFixNpc = 1;
        goto LABEL_316;
      }
LABEL_310:
      if ( !v301 || questRestrictionInfo->fields.isNotTransitionSupportList )
      {
        v219 = 0;
        v293 = 0;
        goto LABEL_315;
      }
      chkIdx = v205->fields.chkIdx;
      v293 = 0;
      isFixNpc = chkIdx != FollowerIndex;
      v219 = chkIdx == FollowerIndex;
LABEL_316:
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v210, 0LL);
      if ( NpcFollowerInfo && ((v290 ^ 1) & 1) == 0 )
      {
        v223 = NpcFollowerInfo;
        if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0LL) )
          v224 = 0;
        else
          v224 = v296;
        v225 = FollowerInfo__get_IsNpc(v223, 0LL);
        v226 = (unsigned int *)*p_memberList;
        if ( v225 )
          v227 = 0;
        else
          v227 = v298;
        v228 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
        v229 = v224;
        v200 = setupInfoa;
        v230 = v228;
        PartyOrganizationListViewItem___ctor_33325708(
          v228,
          v201,
          v223,
          v229,
          0,
          setupInfoa,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v227,
          v210,
          0LL);
        if ( !v226 )
          goto LABEL_75;
        if ( !v230 || (Instance = sub_1BC3144(v230, *(_QWORD *)(*(_QWORD *)v226 + 64LL))) != 0 )
        {
          if ( v201 < v226[6] )
          {
            *(_QWORD *)((char *)v226 + n) = v230;
            sub_1BC2FAC((CGThumbnailListItem_o *)((char *)v226 + n), (int32_t)v230, (int32_t)v70, v231);
            v232 = *p_memberList;
            if ( !*p_memberList )
              goto LABEL_75;
            if ( v201 < v232->max_length )
            {
              v233 = deck->fields.deckInfo;
              if ( !v233 )
                goto LABEL_75;
              v234 = v233->fields.svts;
              if ( !v234 )
                goto LABEL_75;
              if ( v201 < v234->max_length )
              {
                v235 = *(__int64 *)((char *)&v234->obj.klass + n);
                if ( v235 )
                {
                  v236 = *(__int64 *)((char *)&v232->obj.klass + n);
                  if ( v236 )
                  {
                    v237 = *(_DWORD *)(v235 + 76);
                    v202 = v308 + 1;
                    goto LABEL_367;
                  }
                }
                goto LABEL_75;
              }
            }
          }
LABEL_425:
          sub_1BC326C(Instance, SvtEquipMax, v70);
        }
LABEL_426:
        v284 = sub_1BC3288();
        sub_1BC3130(v284, 0LL);
      }
      if ( v293 || v205->fields.chkIdx == FollowerIndex )
      {
        v238 = v320;
        v287 = v219;
        v239 = (unsigned int *)*p_memberList;
        if ( v320 )
        {
          v240 = v319;
          v241 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
          v242 = v240;
          v200 = setupInfoa;
          v243 = v241;
          PartyOrganizationListViewItem___ctor_33325708(
            v241,
            v201,
            v238,
            v242,
            0,
            setupInfoa,
            questRestrictionInfo,
            0LL,
            isFixNpc,
            v298,
            v210,
            0LL);
          if ( !v239 )
            goto LABEL_75;
          v245 = v239;
          v246 = v308;
          this = v300;
        }
        else
        {
          v247 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
          v243 = v247;
          if ( v301 )
          {
            v200 = setupInfoa;
            PartyOrganizationListViewItem___ctor_33325708(
              v247,
              v201,
              v301,
              v296,
              followerGrandGraphIda,
              setupInfoa,
              questRestrictionInfo,
              0LL,
              isFixNpc,
              v298,
              v210,
              0LL);
            v245 = v239;
            this = v300;
            if ( !v245 )
              goto LABEL_75;
            v246 = v308;
          }
          else
          {
            v200 = setupInfoa;
            PartyOrganizationListViewItem___ctor_33380072(v247, v201, 1, setupInfoa, questRestrictionInfo, 1, v210, 0LL);
            v246 = v308;
            v245 = v239;
            this = v300;
            if ( !v245 )
              goto LABEL_75;
          }
        }
        if ( v243 )
        {
          Instance = sub_1BC3144(v243, *(_QWORD *)(*(_QWORD *)v245 + 64LL));
          if ( !Instance )
            goto LABEL_426;
        }
        if ( v201 >= v245[6] )
          goto LABEL_425;
        *(_QWORD *)((char *)v245 + n) = v243;
        sub_1BC2FAC((CGThumbnailListItem_o *)((char *)v245 + n), (int32_t)v243, (int32_t)v70, v244);
        v255 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_75;
        if ( v201 >= v255->max_length )
          goto LABEL_425;
        v256 = deck->fields.deckInfo;
        if ( !v256 )
          goto LABEL_75;
        v257 = v256->fields.svts;
        if ( !v257 )
          goto LABEL_75;
        if ( v201 >= v257->max_length )
          goto LABEL_425;
        v258 = *(__int64 *)((char *)&v257->obj.klass + n);
        if ( !v258 )
          goto LABEL_75;
        v236 = *(__int64 *)((char *)&v255->obj.klass + n);
        if ( !v236 )
          goto LABEL_75;
        v237 = *(_DWORD *)(v258 + 76);
        v202 = (v287 || v293) + v246;
LABEL_367:
        *(_DWORD *)(v236 + 364) = v237;
        goto LABEL_368;
      }
      v248 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v248,
        (Il2CppObject *)v205,
        Method_PartyListViewItem___c__DisplayClass31_3___ctor_b__3__,
        0LL);
      v249 = System_Linq_Enumerable__Where_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v309,
               (System_Func_TSource__bool__o *)v248,
               (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v250 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1BC3144(v249, FollowerInfo___TypeInfo);
      if ( !v250 )
        v250 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                      v249,
                                                                      (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
      v251 = System_Linq_Enumerable__Any_object_(
               v250,
               (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( v308 < v305 && !v251 )
      {
        v252 = QuestRestrictionInfo__GetGrandServantRestrictionEntity(questRestrictionInfo, v210, 0LL);
        Instance = (__int64)UserEventDeckEntity__GetEquipList(deck, v201, 0LL);
        v318 = (System_Int64_array *)Instance;
        v317 = 0;
        if ( v252 )
        {
          v254 = userServantList;
          if ( !userServantList )
            goto LABEL_75;
          if ( v201 >= userServantList->max_length )
            goto LABEL_425;
          PartyListViewItem__GetGrandServantInfo(
            this,
            v252,
            (UserServantEntity_o **)((char *)userServantList + n),
            &v318,
            &v317,
            v253);
        }
        else
        {
          v266 = (System_Int64_array *)Instance;
          if ( (v290 & 1) != 0 )
          {
            if ( !userServantList )
              goto LABEL_75;
            if ( v201 >= userServantList->max_length )
              goto LABEL_425;
            v267 = *(__int64 *)((char *)&userServantList->obj.klass + n);
            if ( v267 )
            {
              v269 = *(_QWORD *)(v267 + 80);
              v268 = *(_QWORD *)(v267 + 88);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v327.fields.currentCryptoKey = v269;
              *(_QWORD *)&v327.fields.fakeValue = v268;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v327, 0LL);
              if ( v201 >= userServantList->max_length )
                goto LABEL_425;
              v270 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&userServantList->obj.klass + n);
              if ( !v270 )
                goto LABEL_75;
              v271 = Instance;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v270[6], 0LL);
              if ( v201 >= userServantList->max_length )
                goto LABEL_425;
              v272 = Instance;
              Instance = *(__int64 *)((char *)&userServantList->obj.klass + n);
              if ( !Instance )
                goto LABEL_75;
              v273 = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
              Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                           questRestrictionInfo,
                           v271,
                           v272,
                           v273,
                           v210,
                           0,
                           0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( v201 >= userServantList->max_length )
                  goto LABEL_425;
                *(Il2CppClass **)((char *)&userServantList->obj.klass + n) = 0LL;
                sub_1BC2FAC((CGThumbnailListItem_o *)((char *)userServantList + n), 0, (int32_t)v70, v274);
              }
            }
            v266 = v318;
          }
          if ( !v266 )
            goto LABEL_75;
          Instance = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Instance = (__int64)BalanceConfig_TypeInfo;
          }
          SvtEquipMax = *(unsigned int *)(*(_QWORD *)(Instance + 184) + 48LL);
          if ( (int)SvtEquipMax < (signed int)v266->max_length )
          {
            if ( !*(_DWORD *)(Instance + 224) )
            {
              j_il2cpp_runtime_class_init_0(Instance);
              SvtEquipMax = (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipMax;
            }
            Instance = sub_1BC30B0(long___TypeInfo, SvtEquipMax);
            v318 = (System_Int64_array *)Instance;
          }
          v254 = userServantList;
          if ( !userServantList )
            goto LABEL_75;
        }
        if ( v201 >= v254->max_length )
          goto LABEL_425;
        v275 = *(UserServantEntity_o **)((char *)&v254->obj.klass + n);
        v276 = (unsigned int *)*p_memberList;
        if ( v275 )
        {
          v277 = v318;
          v278 = v317;
          v279 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_33369480(
            v279,
            v201,
            v275,
            v277,
            setupInfoa,
            questRestrictionInfo,
            0LL,
            v210,
            0LL,
            0,
            v278,
            0LL);
          if ( !v276 )
            goto LABEL_75;
        }
        else
        {
          v279 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_33380072(v279, v201, 0, setupInfoa, questRestrictionInfo, 1, v210, 0LL);
          if ( !v276 )
            goto LABEL_75;
        }
        if ( v279 )
        {
          Instance = sub_1BC3144(v279, *(_QWORD *)(*(_QWORD *)v276 + 64LL));
          if ( !Instance )
            goto LABEL_426;
        }
        if ( v201 >= v276[6] )
          goto LABEL_425;
        *(_QWORD *)((char *)v276 + n) = v279;
        sub_1BC2FAC((CGThumbnailListItem_o *)((char *)v276 + n), (int32_t)v279, (int32_t)v70, v280);
        v202 = v308 + 1;
        goto LABEL_415;
      }
      if ( System_Linq_Enumerable__Any_object_(
             v250,
             (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
      {
        Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                              v250,
                              0,
                              (const MethodInfo_3021E98 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
        goto LABEL_372;
      }
      Instance = (__int64)v309;
      if ( !v309 )
        goto LABEL_75;
      if ( v309->fields._size <= (int)v201 - v308 )
      {
        v260 = (unsigned int *)*p_memberList;
      }
      else
      {
        Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                              v309,
                              (int)v201 - v308,
                              (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
LABEL_372:
        v259 = (FollowerInfo_o *)Instance;
        v260 = (unsigned int *)*p_memberList;
        if ( Instance )
        {
          v261 = *(_QWORD *)(Instance + 40);
          if ( !v261 )
            goto LABEL_75;
          if ( !*(_DWORD *)(v261 + 24) )
            goto LABEL_425;
          v262 = *(_QWORD *)(v261 + 32);
          if ( !v262 )
            goto LABEL_75;
          v263 = *(_DWORD *)(v262 + 32);
          v264 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_33325708(
            v264,
            v201,
            v259,
            v263,
            0,
            setupInfoa,
            questRestrictionInfo,
            0LL,
            1,
            v298,
            v210,
            0LL);
          if ( !v260 )
            goto LABEL_75;
          goto LABEL_411;
        }
      }
      v264 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_33380072(v264, v201, 0, setupInfoa, questRestrictionInfo, 0, v210, 0LL);
      if ( !v260 )
        goto LABEL_75;
LABEL_411:
      if ( v264 )
      {
        Instance = sub_1BC3144(v264, *(_QWORD *)(*(_QWORD *)v260 + 64LL));
        if ( !Instance )
          goto LABEL_426;
      }
      if ( v201 >= v260[6] )
        goto LABEL_425;
      *(_QWORD *)((char *)v260 + n) = v264;
      sub_1BC2FAC((CGThumbnailListItem_o *)((char *)v260 + n), (int32_t)v264, (int32_t)v70, v265);
      v202 = v308;
LABEL_415:
      v281 = this->fields.memberList;
      v200 = setupInfoa;
      if ( !v281 )
        goto LABEL_75;
      if ( v201 >= v281->max_length )
        goto LABEL_425;
      Instance = *(__int64 *)((char *)&v281->obj.klass + n);
      if ( !Instance )
        goto LABEL_75;
      v282 = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                        + v282;
LABEL_368:
      ++v201;
      goto LABEL_283;
    }
    v211 = (unsigned int *)*p_memberList;
    v212 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_33380072(v212, v201, 0, v200, questRestrictionInfo, 1, v210, 0LL);
    if ( !v211 )
      goto LABEL_75;
    if ( v212 )
    {
      Instance = sub_1BC3144(v212, *(_QWORD *)(*(_QWORD *)v211 + 64LL));
      if ( !Instance )
        goto LABEL_426;
    }
    if ( v201 >= v211[6] )
      goto LABEL_425;
    *(_QWORD *)((char *)v211 + n) = v212;
    sub_1BC2FAC((CGThumbnailListItem_o *)((char *)v211 + n), (int32_t)v212, (int32_t)v70, v213);
    ++v201;
  }
LABEL_419:
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)SvtEquipMax);
  if ( (questRestrictionInfo->fields.isNpcEditablePos
     || !questRestrictionInfo->fields.isNpcOnlyBattle
     || QuestRestrictionInfo__IsExistGrand(questRestrictionInfo, 0LL))
    && !PartyListViewItem__GetStartDeckCondition(this, v283) )
  {
    *isBaseModify = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_33224436(
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
  __int64 v46; // x2
  int max_length; // w8
  char v48; // w20
  unsigned int v49; // w24
  ViewWaveEnemyEntity_o *v50; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  int32_t version; // w10
  struct System_Int32_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  struct System_Int32_array *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct System_Int32_array *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  UserEventDeckEntity_o *v64; // x29
  int32_t v65; // w28
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v67; // w26
  struct DeckServant_o *v68; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v70; // x8
  int32_t initPos; // w20
  UserServantEntity_o *v72; // x21
  struct PartyOrganizationListViewItem_array *v73; // x19
  __int128 v74; // q0
  int64_t v75; // x0
  UserEventDeckEntity_o *v76; // x8
  System_Int64_array *v77; // x29
  struct DeckServant_o *v78; // x8
  struct DeckServantData_array *v79; // x8
  DeckServantData_o *v80; // x8
  System_Int32_array *equipSvtIdList; // x26
  PartyOrganizationListViewItem_o *v82; // x27
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

  if ( (byte_4AFD9F2 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind);
    sub_1BC3008(&Method_DataManager_GetMaster_ReachedWaveInfoMaster___, v14);
    sub_1BC3008(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___, v15);
    sub_1BC3008(&DataManager_TypeInfo, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_1BC3008(&PartyOrganizationListViewItem___TypeInfo, v23);
    sub_1BC3008(&PartyOrganizationListViewItem_TypeInfo, v24);
    sub_1BC3008(&WaveBattleWaveEnemyInfoItem_TypeInfo, v25);
    byte_4AFD9F2 = 1;
  }
  ListViewItem___ctor_42769384((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v26, v27);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v29, v30);
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
  v37 = (struct PartyOrganizationListViewItem_array *)sub_1BC30B0(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v35->static_fields->DeckMemberMax);
  this->fields.memberList = v37;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.memberList, (int32_t)v37, v38, v39);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  v40 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  v41 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v41,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
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
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
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
    v48 = Master_object;
    v49 = 0;
    while ( 1 )
    {
      if ( v49 >= max_length )
LABEL_89:
        sub_1BC326C(Master_object, classId, v46);
      v50 = EntityListFromQuestId->m_Items[v49];
      if ( !v50 )
        goto LABEL_88;
      if ( v50->fields.wave != v94 )
        goto LABEL_43;
      if ( !v40 )
        goto LABEL_88;
      Master_object = System_Collections_Generic_List_int___Contains(
                        v40,
                        v50->fields.classId,
                        (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( (Master_object & 1) != 0 )
        goto LABEL_24;
      classId = (unsigned int)v50->fields.classId;
      items = v40->fields._items;
      v52 = Method_System_Collections_Generic_List_int__Add__;
      ++v40->fields._version;
      if ( !items )
        goto LABEL_88;
      size = v40->fields._size;
      if ( (unsigned int)size < items->max_length )
        break;
      System_Collections_Generic_List_int___AddWithResize(
        v40,
        classId,
        *(const MethodInfo_3683E1C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      if ( (v48 & 1) != 0 )
        goto LABEL_36;
LABEL_27:
      if ( ReachedWave >= v50->fields.wave
        || (Master_object = ViewWaveEnemyEntity__IsUnknownDispInfo(v50, 0, 0LL, 0LL), (Master_object & 1) == 0) )
      {
LABEL_36:
        if ( !v41 )
          goto LABEL_88;
        Master_object = System_Collections_Generic_List_int___Contains(
                          v41,
                          v50->fields.classId,
                          (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Master_object & 1) == 0 )
        {
          classId = (unsigned int)v50->fields.classId;
          version = v41->fields._version;
          v55 = v41->fields._items;
LABEL_39:
          v56 = Method_System_Collections_Generic_List_int__Add__;
          v41->fields._version = version + 1;
          if ( !v55 )
            goto LABEL_88;
          v57 = v41->fields._size;
          if ( (unsigned int)v57 >= v55->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v41,
              classId,
              *(const MethodInfo_3683E1C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
          }
          else
          {
            v41->fields._size = v57 + 1;
            v55->m_Items[v57 + 1] = classId;
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
                        (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( (Master_object & 1) == 0 )
      {
        Master_object = (__int64)WaveBattleWaveEnemyInfoItem_TypeInfo;
        if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
          Master_object = (__int64)WaveBattleWaveEnemyInfoItem_TypeInfo;
        }
        version = v41->fields._version;
        v55 = v41->fields._items;
        classId = *(unsigned int *)(*(_QWORD *)(Master_object + 184) + 64LL);
        goto LABEL_39;
      }
LABEL_43:
      max_length = EntityListFromQuestId->max_length;
      if ( (int)++v49 >= max_length )
        goto LABEL_44;
    }
    v40->fields._size = size + 1;
    items->m_Items[size + 1] = classId;
LABEL_24:
    if ( (v48 & 1) != 0 )
      goto LABEL_36;
    goto LABEL_27;
  }
LABEL_44:
  if ( !v40
    || (v58 = System_Collections_Generic_List_int___ToArray(
                v40,
                (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__),
        this->fields.waveBattleEnemyClassIds = v58,
        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.waveBattleEnemyClassIds, (int32_t)v58, v59, v60),
        !v41) )
  {
LABEL_88:
    sub_1BC3264(Master_object, classId);
  }
  v61 = System_Collections_Generic_List_int___ToArray(
          v41,
          (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.trendDispWaveBattleEnemyClassIds = v61;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.trendDispWaveBattleEnemyClassIds, (int32_t)v61, v62, v63);
  v64 = deck;
  this->fields._IsClearedWave_k__BackingField = v94 < restartWave;
  Master_object = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Master_object = (__int64)BalanceConfig_TypeInfo;
  }
  v65 = 0;
  v91 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 176LL) * v90;
  while ( 1 )
  {
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (__int64)BalanceConfig_TypeInfo;
    }
    static_fields = *(struct BalanceConfig_StaticFields **)(Master_object + 184);
    if ( v65 >= static_fields->DeckMemberMax )
      break;
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v67 = v91 + v65;
    if ( v65 < static_fields->DeckMainMemberMax )
    {
      v68 = v64->fields.deckInfo;
      if ( !v68 )
        goto LABEL_88;
      svts = v68->fields.svts;
      if ( !svts )
        goto LABEL_88;
      if ( v67 >= svts->max_length )
        goto LABEL_89;
      v70 = svts->m_Items[v67];
      if ( !v70 )
        goto LABEL_88;
      initPos = v70->fields.initPos;
    }
    else
    {
      initPos = v65 + 1;
    }
    if ( !v36 )
      goto LABEL_88;
    if ( v65 >= v36->max_length )
      goto LABEL_89;
    v72 = v36->m_Items[v65];
    v73 = *p_memberList;
    if ( v72 )
    {
      v74 = *(_OWORD *)&v72->fields.id.fields.fakeValue;
      *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)&v72->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v98.fields.fakeValue = v74;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v97 = v98;
      v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v97, 0LL);
      Master_object = (__int64)UserEventDeckEntity__GetEquipList_42007856(v64, v75, restartWave > 0, 0LL);
      v76 = v64;
      v77 = (System_Int64_array *)Master_object;
      if ( restartWave < 1 )
      {
        equipSvtIdList = 0LL;
      }
      else
      {
        v78 = v76->fields.deckInfo;
        if ( !v78 )
          goto LABEL_88;
        v79 = v78->fields.svts;
        if ( !v79 )
          goto LABEL_88;
        if ( v67 >= v79->max_length )
          goto LABEL_89;
        v80 = v79->m_Items[v67];
        if ( !v80 )
          goto LABEL_88;
        equipSvtIdList = v80->fields.svtEquipIds;
      }
      v82 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_33369480(
        v82,
        v65,
        v72,
        v77,
        setupInfo,
        questRestrictionInfo,
        0LL,
        initPos,
        equipSvtIdList,
        v94 < restartWave,
        0,
        0LL);
      if ( !v73 )
        goto LABEL_88;
      v64 = v89;
    }
    else
    {
      v82 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_33380072(v82, v65, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
      if ( !v73 )
        goto LABEL_88;
    }
    if ( v82 )
    {
      Master_object = sub_1BC3144(v82, v73->obj.klass->_1.element_class);
      if ( !Master_object )
      {
        v88 = sub_1BC3288();
        sub_1BC3130(v88, 0LL);
      }
    }
    if ( v65 >= v73->max_length )
      goto LABEL_89;
    v84 = &v73->obj.klass + v65;
    v84[4] = (Il2CppClass *)v82;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v84 + 4), (int32_t)v82, v46, v83);
    v85 = *p_memberList;
    if ( !*p_memberList )
      goto LABEL_88;
    if ( v65 >= v85->max_length )
      goto LABEL_89;
    Master_object = (__int64)v85->m_Items[v65];
    if ( !Master_object )
      goto LABEL_88;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)Master_object,
      this->fields.waveBattleEnemyClassIds,
      0LL);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_88;
    if ( v65 >= memberList->max_length )
      goto LABEL_89;
    Master_object = (__int64)memberList->m_Items[v65];
    if ( !Master_object )
      goto LABEL_88;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)Master_object,
                          0LL)
                      + cost;
    Master_object = (__int64)BalanceConfig_TypeInfo;
    ++v65;
  }
}


void __fastcall PartyListViewItem__CheckAndAddDuplicationUserSvtId(
        PartyListViewItem_o *this,
        System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___o *duplicationUserSvtIdDictionary,
        int32_t *orderIdx,
        int64_t *userSvtId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t v11; // w1
  int64_t v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_ValueTuple_int__bool__o value; // [xsp+8h] [xbp-38h] BYREF
  System_ValueTuple_int__bool__o p_value; // 0:x0.8
  System_ValueTuple_int__bool__o v17; // 0:x2.8
  System_ValueTuple_int__bool__o v18; // 0:x2.8

  if ( (byte_4AFDA1D & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TryAdd__,
      duplicationUserSvtIdDictionary);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___get_Item__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___set_Item__, v9);
    sub_1BC3008(&Method_System_ValueTuple_int__bool___ctor__, v10);
    byte_4AFDA1D = 1;
  }
  v11 = *orderIdx;
  v12 = *userSvtId;
  p_value = (System_ValueTuple_int__bool__o)&value;
  value = 0LL;
  System_ValueTuple_int__bool____ctor(
    p_value,
    v11,
    0,
    (const MethodInfo_39EB4C4 *)Method_System_ValueTuple_int__bool___ctor__);
  if ( !duplicationUserSvtIdDictionary )
    sub_1BC3264(v13, v14);
  v17 = value;
  if ( !System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____TryAdd(
          duplicationUserSvtIdDictionary,
          v12,
          v17,
          (const MethodInfo_333E5B8 *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TryAdd__) )
  {
    v18 = (System_ValueTuple_int__bool__o)(*(_QWORD *)&System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____get_Item(
                                                         duplicationUserSvtIdDictionary,
                                                         *userSvtId,
                                                         (const MethodInfo_333CDA0 *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___get_Item__) & 0xFFFFFF00FFFFFFFFLL | 0x100000000LL);
    System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____set_Item(
      duplicationUserSvtIdDictionary,
      *userSvtId,
      v18,
      (const MethodInfo_333CE2C *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___set_Item__);
  }
}


bool __fastcall PartyListViewItem__CheckAndUpdateDuplicationGrandQuestServant(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BalanceConfig_c *v9; // x0
  const MethodInfo *v10; // x1
  ServantEntity_array *SvtEntityList; // x0
  PartyListViewItem___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  System_Func_object__int__o *_9__110_0; // x21
  Il2CppObject *v15; // x22
  struct PartyListViewItem___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  const MethodInfo *v20; // x2
  System_Int32_array *v21; // x20
  __int64 v22; // x21
  bool v23; // w25
  BalanceConfig_c *v24; // x0
  void *Member; // x0
  __int64 v26; // x1
  RestrictionEntity_o *GrandServantRestrictionEntity; // x0
  const MethodInfo *v28; // x5
  __int64 v29; // x8
  unsigned __int64 v30; // x22
  struct PartyOrganizationListViewItem_array *memberList; // x9
  PartyOrganizationListViewItem_o *v32; // x9
  int32_t v33; // w26
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+4h] [xbp-5Ch] BYREF
  System_Int64_array *equipIdList; // [xsp+8h] [xbp-58h] BYREF
  UserServantEntity_o *userServantEntity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4AFDA1F & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_ServantEntity__int___, v3);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, v4);
    sub_1BC3008(&System_Func_ServantEntity__int__TypeInfo, v5);
    sub_1BC3008(&long___TypeInfo, v6);
    sub_1BC3008(&Method_PartyListViewItem___c__CheckAndUpdateDuplicationGrandQuestServant_b__110_0__, v7);
    sub_1BC3008(&PartyListViewItem___c_TypeInfo, v8);
    byte_4AFDA1F = 1;
  }
  v9 = BalanceConfig_TypeInfo;
  isChangeFriendShipSvtEquipSkill = 0;
  userServantEntity = 0LL;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  equipIdList = (System_Int64_array *)sub_1BC30B0(long___TypeInfo, (unsigned int)v9->static_fields->GrandSvtEquipMax);
  SvtEntityList = PartyListViewItem__GetSvtEntityList(this, v10);
  v12 = PartyListViewItem___c_TypeInfo;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)SvtEntityList;
  if ( !PartyListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyListViewItem___c_TypeInfo);
    v12 = PartyListViewItem___c_TypeInfo;
  }
  _9__110_0 = (System_Func_object__int__o *)v12->static_fields->__9__110_0;
  if ( !_9__110_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = PartyListViewItem___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__110_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_ServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__110_0,
      v15,
      Method_PartyListViewItem___c__CheckAndUpdateDuplicationGrandQuestServant_b__110_0__,
      0LL);
    static_fields = PartyListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__110_0 = (struct System_Func_ServantEntity__int__o *)_9__110_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__110_0, (int32_t)_9__110_0, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v13,
                                                               (System_Func_TSource__TResult__o *)_9__110_0,
                                                               (const MethodInfo_3035A44 *)Method_System_Linq_Enumerable_Select_ServantEntity__int___);
  v21 = System_Linq_Enumerable__ToArray_int_(
          v19,
          (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
  v22 = 0LL;
  v23 = 0;
  while ( 1 )
  {
    v24 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    if ( v22 >= v24->static_fields->DeckMemberMax )
      return v23;
    Member = PartyListViewItem__GetMember(this, v22, v20);
    if ( !Member )
      goto LABEL_35;
    if ( *((_QWORD *)Member + 14) )
    {
      if ( !this->fields.questRestrictionInfo )
        goto LABEL_35;
      GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                        this->fields.questRestrictionInfo,
                                        *((_DWORD *)Member + 91),
                                        0LL);
      if ( GrandServantRestrictionEntity )
      {
        PartyListViewItem__GetGrandServantInfo(
          this,
          GrandServantRestrictionEntity,
          &userServantEntity,
          &equipIdList,
          &isChangeFriendShipSvtEquipSkill,
          v28);
        if ( userServantEntity )
        {
          if ( !v21 )
LABEL_35:
            sub_1BC3264(Member, v26);
          v29 = *(_QWORD *)&v21->max_length;
          if ( (int)v29 >= 1 )
          {
            v30 = 0LL;
            while ( 1 )
            {
              if ( v22 != v30 )
              {
                memberList = this->fields.memberList;
                if ( !memberList )
                  goto LABEL_35;
                if ( v30 >= memberList->max_length )
LABEL_36:
                  sub_1BC326C(Member, v26, v20);
                v32 = memberList->m_Items[v30];
                if ( !v32 )
                  goto LABEL_35;
                if ( !v32->fields.isFollower )
                {
                  if ( v30 >= (unsigned int)v29 )
                    goto LABEL_36;
                  Member = userServantEntity;
                  if ( !userServantEntity )
                    goto LABEL_35;
                  v33 = v21->m_Items[v30 + 1];
                  Member = (void *)UserServantEntity__getSvtId(userServantEntity, 0LL);
                  if ( v33 == (_DWORD)Member )
                    break;
                }
              }
              LODWORD(v29) = v21->max_length;
              if ( (__int64)++v30 >= (int)v29 )
                goto LABEL_32;
            }
            PartyListViewItem__ClearMember(this, v30, v20);
            v23 = 1;
          }
        }
      }
    }
LABEL_32:
    ++v22;
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
  int32_t targetVals2; // w8
  struct QuestRestrictionInfo_o *v18; // x9
  int32_t servantNumMin; // w20
  int32_t v20; // w8
  BalanceConfig_c *v21; // x0

  if ( (byte_4AFDA05 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&deckMemberCount);
    byte_4AFDA05 = 1;
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
    sub_1BC3264(questRestrictionInfo, *(_QWORD *)&deckMemberCount);
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


bool __fastcall PartyListViewItem__CheckDuplicationGrandQuestEquipment(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___o *v17; // x20
  const MethodInfo *v18; // x2
  int v19; // w29
  int32_t i; // w21
  BalanceConfig_c *v21; // x0
  QuestRestrictionInfo_o *Member; // x0
  __int64 v23; // x1
  PartyOrganizationListViewItem_o *v24; // x22
  RestrictionEntity_o *GrandServantRestrictionEntity; // x0
  const MethodInfo *v26; // x5
  const MethodInfo *v27; // x4
  struct System_Int64_array *v28; // x23
  __int64 v29; // x8
  unsigned __int64 v30; // x24
  int64_t *m_Items; // x22
  const MethodInfo *v32; // x4
  PartyListViewItem___c_c *v33; // x0
  System_Func_KeyValuePair_long__ValueTuple_int__bool____int__o *_9__106_0; // x21
  Il2CppObject *v35; // x22
  struct PartyListViewItem___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v39; // x0
  PartyListViewItem___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x20
  System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__o *_9__106_1; // x21
  Il2CppObject *v43; // x22
  struct PartyListViewItem___c_StaticFields *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  PartyListViewItem___c_c *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x20
  System_Func_KeyValuePair_long__ValueTuple_int__bool____long__o *_9__106_2; // x21
  Il2CppObject *v51; // x22
  struct PartyListViewItem___c_StaticFields *v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  struct System_Int64_array **p_duplicatedEquipmentUserSvtIdList; // x19
  PartyListViewItem_o *EquipUserSvtId; // [xsp+0h] [xbp-80h] BYREF
  int32_t orderIdx; // [xsp+8h] [xbp-78h] BYREF
  int32_t isChangeFriendShipSvtEquipSkill; // [xsp+Ch] [xbp-74h] BYREF
  System_Int64_array *equipIdList; // [xsp+10h] [xbp-70h] BYREF
  UserServantEntity_o *userServantEntity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4AFDA1B & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____ctor__, v3);
    sub_1BC3008(&System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TypeInfo, v4);
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderBy_KeyValuePair_long__ValueTuple_int__bool____int___, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_KeyValuePair_long__ValueTuple_int__bool____long___, v6);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_long___, v7);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_KeyValuePair_long__ValueTuple_int__bool_____, v8);
    sub_1BC3008(&System_Func_KeyValuePair_long__ValueTuple_int__bool____int__TypeInfo, v9);
    sub_1BC3008(&System_Func_KeyValuePair_long__ValueTuple_int__bool____long__TypeInfo, v10);
    sub_1BC3008(&System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__TypeInfo, v11);
    sub_1BC3008(&Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__106_0__, v12);
    sub_1BC3008(&Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__106_1__, v13);
    sub_1BC3008(&Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__106_2__, v14);
    sub_1BC3008(&PartyListViewItem___c_TypeInfo, v15);
    byte_4AFDA1B = 1;
  }
  equipIdList = 0LL;
  isChangeFriendShipSvtEquipSkill = 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    userServantEntity = 0LL;
    v17 = (System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___o *)sub_1BC3254(System_Collections_Generic_Dictionary_long__ValueTuple_int__bool___TypeInfo);
    System_Collections_Generic_Dictionary_long__ValueTuple_int__bool_____ctor(
      v17,
      (const MethodInfo_333C470 *)Method_System_Collections_Generic_Dictionary_long__ValueTuple_int__bool____ctor__);
    v19 = 0;
    for ( i = 0; ; ++i )
    {
      v21 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v21 = BalanceConfig_TypeInfo;
      }
      if ( i >= v21->static_fields->DeckMemberMax )
        break;
      Member = (QuestRestrictionInfo_o *)PartyListViewItem__GetMember(this, i, v18);
      if ( !Member )
        goto LABEL_46;
      v24 = (PartyOrganizationListViewItem_o *)Member;
      if ( Member->fields.restrictionBaseEntity )
      {
        Member = this->fields.questRestrictionInfo;
        if ( !Member )
          goto LABEL_46;
        GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                          Member,
                                          v24->fields._InitPos_k__BackingField,
                                          0LL);
        if ( GrandServantRestrictionEntity
          && (PartyListViewItem__GetGrandServantInfo(
                this,
                GrandServantRestrictionEntity,
                &userServantEntity,
                &equipIdList,
                &isChangeFriendShipSvtEquipSkill,
                v26),
              userServantEntity) )
        {
          v28 = v24->fields.equipIdList;
          if ( !v28 )
            goto LABEL_46;
          v29 = *(_QWORD *)&v28->max_length;
          if ( (int)v29 >= 1 )
          {
            v30 = 0LL;
            m_Items = v28->m_Items;
            do
            {
              if ( v30 >= (unsigned int)v29 )
                sub_1BC326C(Member, v23, v18);
              if ( *m_Items >= 1 )
              {
                orderIdx = v19 + v30;
                PartyListViewItem__CheckAndAddDuplicationUserSvtId(
                  (PartyListViewItem_o *)Member,
                  v17,
                  &orderIdx,
                  m_Items,
                  v27);
              }
              LODWORD(v29) = v28->max_length;
              ++v30;
              ++m_Items;
            }
            while ( (__int64)v30 < (int)v29 );
          }
        }
        else if ( PartyOrganizationListViewItem__get_EquipUserSvtId(v24, 0LL) >= 1 )
        {
          orderIdx = 10 * i;
          EquipUserSvtId = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_EquipUserSvtId(v24, 0LL);
          PartyListViewItem__CheckAndAddDuplicationUserSvtId(
            EquipUserSvtId,
            v17,
            &orderIdx,
            (int64_t *)&EquipUserSvtId,
            v32);
        }
      }
      v19 += 10;
    }
    v33 = PartyListViewItem___c_TypeInfo;
    if ( !PartyListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyListViewItem___c_TypeInfo);
      v33 = PartyListViewItem___c_TypeInfo;
    }
    _9__106_0 = v33->static_fields->__9__106_0;
    if ( !_9__106_0 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = PartyListViewItem___c_TypeInfo;
      }
      v35 = (Il2CppObject *)v33->static_fields->__9;
      _9__106_0 = (System_Func_KeyValuePair_long__ValueTuple_int__bool____int__o *)sub_1BC3254(System_Func_KeyValuePair_long__ValueTuple_int__bool____int__TypeInfo);
      System_Func_KeyValuePair_long__ValueTuple_int__bool____int____ctor(
        _9__106_0,
        v35,
        Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__106_0__,
        0LL);
      static_fields = PartyListViewItem___c_TypeInfo->static_fields;
      static_fields->__9__106_0 = _9__106_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__106_0, (int32_t)_9__106_0, v37, v38);
    }
    v39 = System_Linq_Enumerable__OrderBy_KeyValuePair_long__ValueTuple_int__bool____int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v17,
            (System_Func_TSource__TKey__o *)_9__106_0,
            (const MethodInfo_302D280 *)Method_System_Linq_Enumerable_OrderBy_KeyValuePair_long__ValueTuple_int__bool____int___);
    v40 = PartyListViewItem___c_TypeInfo;
    v41 = (System_Collections_Generic_IEnumerable_TSource__o *)v39;
    if ( !PartyListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyListViewItem___c_TypeInfo);
      v40 = PartyListViewItem___c_TypeInfo;
    }
    _9__106_1 = v40->static_fields->__9__106_1;
    if ( !_9__106_1 )
    {
      if ( !v40->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v40);
        v40 = PartyListViewItem___c_TypeInfo;
      }
      v43 = (Il2CppObject *)v40->static_fields->__9;
      _9__106_1 = (System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__o *)sub_1BC3254(System_Func_KeyValuePair_long__ValueTuple_int__bool____bool__TypeInfo);
      System_Func_KeyValuePair_long__ValueTuple_int__bool____bool____ctor(
        _9__106_1,
        v43,
        Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__106_1__,
        0LL);
      v44 = PartyListViewItem___c_TypeInfo->static_fields;
      v44->__9__106_1 = _9__106_1;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v44->__9__106_1, (int32_t)_9__106_1, v45, v46);
    }
    v47 = System_Linq_Enumerable__Where_KeyValuePair_long__ValueTuple_int__bool___(
            v41,
            (System_Func_TSource__bool__o *)_9__106_1,
            (const MethodInfo_3043B44 *)Method_System_Linq_Enumerable_Where_KeyValuePair_long__ValueTuple_int__bool_____);
    v48 = PartyListViewItem___c_TypeInfo;
    v49 = v47;
    if ( !PartyListViewItem___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyListViewItem___c_TypeInfo);
      v48 = PartyListViewItem___c_TypeInfo;
    }
    _9__106_2 = v48->static_fields->__9__106_2;
    if ( !_9__106_2 )
    {
      if ( !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        v48 = PartyListViewItem___c_TypeInfo;
      }
      v51 = (Il2CppObject *)v48->static_fields->__9;
      _9__106_2 = (System_Func_KeyValuePair_long__ValueTuple_int__bool____long__o *)sub_1BC3254(System_Func_KeyValuePair_long__ValueTuple_int__bool____long__TypeInfo);
      System_Func_KeyValuePair_long__ValueTuple_int__bool____long____ctor(
        _9__106_2,
        v51,
        Method_PartyListViewItem___c__CheckDuplicationGrandQuestEquipment_b__106_2__,
        0LL);
      v52 = PartyListViewItem___c_TypeInfo->static_fields;
      v52->__9__106_2 = _9__106_2;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v52->__9__106_2, (int32_t)_9__106_2, v53, v54);
    }
    v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_long__ValueTuple_int__bool____long_(
                                                                 v49,
                                                                 (System_Func_TSource__TResult__o *)_9__106_2,
                                                                 (const MethodInfo_302F084 *)Method_System_Linq_Enumerable_Select_KeyValuePair_long__ValueTuple_int__bool____long___);
    Member = (QuestRestrictionInfo_o *)System_Linq_Enumerable__ToArray_long_(
                                         v55,
                                         (const MethodInfo_303E4C4 *)Method_System_Linq_Enumerable_ToArray_long___);
    if ( !this )
LABEL_46:
      sub_1BC3264(Member, v23);
    this->fields.duplicatedEquipmentUserSvtIdList = (struct System_Int64_array *)Member;
    p_duplicatedEquipmentUserSvtIdList = &this->fields.duplicatedEquipmentUserSvtIdList;
    sub_1BC2FAC((CGThumbnailListItem_o *)p_duplicatedEquipmentUserSvtIdList, (int32_t)Member, v56, v57);
    LOBYTE(questRestrictionInfo) = !BasicHelper__IsNullOrEmpty(
                                      (System_Collections_ICollection_o *)*p_duplicatedEquipmentUserSvtIdList,
                                      0LL);
  }
  return (unsigned __int8)questRestrictionInfo & 1;
}


System_Tuple_string__bool__o *__fastcall PartyListViewItem__CheckDuplicationGrandServantEquipmentNameList(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v15; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  const MethodInfo *v17; // x2
  System_Int64_array *v18; // x21
  int32_t v19; // w22
  char v20; // w24
  BalanceConfig_c *v21; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  System_Collections_ICollection_o *v23; // x23
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Func_T__TResult__o *v30; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_String_array *v32; // x0
  Il2CppObject *v33; // x0

  if ( (byte_4AFDA1E & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantMaster___, v3);
    sub_1BC3008(&DataManager_TypeInfo, v4);
    sub_1BC3008(&Method_System_Linq_Enumerable_Concat_long___, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_long__string___, v6);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_long___, v7);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_string___, v8);
    sub_1BC3008(&System_Func_long__string__TypeInfo, v9);
    sub_1BC3008(&long___TypeInfo, v10);
    sub_1BC3008(&Method_System_Tuple_Create_string__bool___, v11);
    sub_1BC3008(
      &Method_PartyListViewItem___c__DisplayClass109_0__CheckDuplicationGrandServantEquipmentNameList_b__0__,
      v12);
    sub_1BC3008(&PartyListViewItem___c__DisplayClass109_0_TypeInfo, v13);
    sub_1BC3008(&StringLiteral_43/*"\n"*/, v14);
    byte_4AFDA1E = 1;
  }
  v15 = sub_1BC3254(PartyListViewItem___c__DisplayClass109_0_TypeInfo);
  PartyListViewItem___c__DisplayClass109_0___ctor((PartyListViewItem___c__DisplayClass109_0_o *)v15, 0LL);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !QuestRestrictionInfo__IsExistGrand(questRestrictionInfo, 0LL) )
    return 0LL;
  v18 = (System_Int64_array *)sub_1BC30B0(long___TypeInfo, 0LL);
  v19 = 0;
  v20 = 0;
  while ( 1 )
  {
    v21 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v21 = BalanceConfig_TypeInfo;
    }
    if ( v19 >= v21->static_fields->DeckMemberMax )
      break;
    Member = PartyListViewItem__GetMember(this, v19, v17);
    if ( Member )
    {
      v23 = (System_Collections_ICollection_o *)PartyOrganizationListViewItem__CheckDuplicationGrandServantEquipment(
                                                  Member,
                                                  0LL);
      IsNullOrEmpty = (Il2CppObject *)BasicHelper__IsNullOrEmpty(v23, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( !v18 )
          goto LABEL_20;
        v20 |= (signed int)v18->max_length > 0;
        v26 = System_Linq_Enumerable__Concat_long_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                (System_Collections_Generic_IEnumerable_TSource__o *)v23,
                (const MethodInfo_301A824 *)Method_System_Linq_Enumerable_Concat_long___);
        v18 = System_Linq_Enumerable__ToArray_long_(
                v26,
                (const MethodInfo_303E4C4 *)Method_System_Linq_Enumerable_ToArray_long___);
      }
    }
    ++v19;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v18, 0LL) )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !v15 )
LABEL_20:
    sub_1BC3264(IsNullOrEmpty, v25);
  *(_QWORD *)(v15 + 16) = IsNullOrEmpty;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v15 + 16), (int32_t)IsNullOrEmpty, v28, v29);
  v30 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_long__string__TypeInfo);
  System_Func_long__object____ctor(
    v30,
    (Il2CppObject *)v15,
    Method_PartyListViewItem___c__DisplayClass109_0__CheckDuplicationGrandServantEquipmentNameList_b__0__,
    0LL);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                               (System_Func_TSource__TResult__o *)v30,
                                                               (const MethodInfo_3034E04 *)Method_System_Linq_Enumerable_Select_long__string___);
  v32 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v31,
                                 (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_string___);
  v33 = (Il2CppObject *)System_String__Join((System_String_o *)StringLiteral_43/*"\n"*/, v32, 0LL);
  return (System_Tuple_string__bool__o *)System_Tuple__Create_object__bool_(
                                           v33,
                                           v20 & 1,
                                           (const MethodInfo_30B5C6C *)Method_System_Tuple_Create_string__bool___);
}


void __fastcall PartyListViewItem__CheckRestriction(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  int32_t v5; // w20
  int v6; // w23
  int v7; // w24
  PartyOrganizationListViewItem_o *IsUseOldMaster; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v10; // x8
  PartyOrganizationListViewItem_o *v11; // x8
  struct UserServantEntity_o *userServantEntity; // x10
  int isFollower; // w9
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t FixedServantPositionCount; // w20
  il2cpp_array_size_t v16; // w21
  char i; // w25
  struct PartyOrganizationListViewItem_array *v18; // x8
  PartyOrganizationListViewItem_o *v19; // x8
  int v20; // w21
  int32_t FixedPositionCount; // w20
  int v22; // w27
  char v23; // w25
  int v24; // w26
  struct PartyOrganizationListViewItem_array *v25; // x8
  PartyOrganizationListViewItem_o *v26; // x9
  bool isFixedSupportPositionRestriction; // w8
  _BOOL4 isRestrictionNeedStarting; // w11
  int isRestrictionMyServantPos; // w10
  int isRestrictionServantPos; // w9
  bool v31; // zf
  struct PartyOrganizationListViewItem_array *v32; // x20
  int max_length; // w8
  unsigned int v34; // w21
  struct PartyOrganizationListViewItem_array *v35; // x21
  int v36; // w8
  unsigned int v37; // w27
  struct PartyOrganizationListViewItem_array *v38; // x20
  int v39; // w8
  unsigned int v40; // w21
  struct QuestRestrictionInfo_o *v41; // x8
  int64_t sortValue2B; // x20
  __int64 sortStr1_low; // x21
  __int64 v44; // x25
  __int64 v45; // x8
  __int64 v46; // x8
  struct QuestRestrictionInfo_o *v47; // x8
  il2cpp_array_size_t k; // w20
  struct PartyOrganizationListViewItem_array *v49; // x8
  PartyOrganizationListViewItem_o *v50; // x8
  il2cpp_array_size_t j; // w21
  struct PartyOrganizationListViewItem_array *v52; // x8

  if ( (byte_4AFD9F8 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v4);
    byte_4AFD9F8 = 1;
  }
  if ( this->fields.questRestrictionInfo )
    PartyListViewItem__CheckDuplicationGrandQuestEquipment(this, method);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( v5 >= SHIDWORD(IsUseOldMaster->fields.servantEntity->fields.classPassive) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_107;
    if ( v5 >= memberList->max_length )
      goto LABEL_108;
    IsUseOldMaster = memberList->m_Items[v5];
    if ( !IsUseOldMaster )
      goto LABEL_107;
    PartyOrganizationListViewItem__CheckRestriction(IsUseOldMaster, this, v5, 0LL);
    v10 = this->fields.memberList;
    if ( !v10 )
      goto LABEL_107;
    if ( v5 >= v10->max_length )
      goto LABEL_108;
    v11 = v10->m_Items[v5];
    if ( !v11 )
      goto LABEL_107;
    userServantEntity = v11->fields.userServantEntity;
    isFollower = v11->fields.isFollower;
    ++v5;
    v11->fields._IsNotSupportSingle_k__BackingField = 0;
    v6 += isFollower;
    if ( userServantEntity )
      ++v7;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_107;
    if ( ((unsigned __int8)IsUseOldMaster & 1) != 0 )
    {
      FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(
                                    this->fields.questRestrictionInfo,
                                    0LL);
      IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      v16 = 0;
      for ( i = 0; ; i |= v19->fields.isFixedSupportPositionRestriction )
      {
        if ( !LODWORD(IsUseOldMaster->fields.commandCodeIdList) )
        {
          j_il2cpp_runtime_class_init_0(IsUseOldMaster);
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
        }
        if ( (signed int)v16 >= SHIDWORD(IsUseOldMaster->fields.servantEntity->fields.classPassive) )
          break;
        v18 = this->fields.memberList;
        if ( !v18 )
          goto LABEL_107;
        if ( v16 >= v18->max_length )
          goto LABEL_108;
        v19 = v18->m_Items[v16];
        if ( !v19 )
          goto LABEL_107;
        ++v16;
        FixedServantPositionCount -= v19->fields.isFixedServantPositionAgreement;
      }
      if ( !(i & 1 | (FixedServantPositionCount > 0)) )
      {
        v32 = this->fields.memberList;
        if ( !v32 )
          goto LABEL_107;
        max_length = v32->max_length;
        if ( max_length >= 1 )
        {
          v34 = 0;
          while ( v34 < max_length )
          {
            IsUseOldMaster = v32->m_Items[v34];
            if ( !IsUseOldMaster )
              goto LABEL_107;
            PartyOrganizationListViewItem__ResetPositionRestriction(IsUseOldMaster, 0LL);
            max_length = v32->max_length;
            if ( (int)++v34 >= max_length )
              goto LABEL_68;
          }
          goto LABEL_108;
        }
      }
      goto LABEL_68;
    }
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)QuestRestrictionInfo__GetFixedMyServantPositionCount(
                                                          this->fields.questRestrictionInfo,
                                                          0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_107;
    v20 = (int)IsUseOldMaster;
    FixedPositionCount = QuestRestrictionInfo__GetFixedPositionCount(this->fields.questRestrictionInfo, 0LL);
    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    v22 = 0;
    v23 = 0;
    v24 = -1;
    while ( 1 )
    {
      if ( !LODWORD(IsUseOldMaster->fields.commandCodeIdList) )
      {
        j_il2cpp_runtime_class_init_0(IsUseOldMaster);
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
      }
      if ( v22 >= SHIDWORD(IsUseOldMaster->fields.servantEntity->fields.classPassive) )
        break;
      v25 = this->fields.memberList;
      if ( !v25 )
        goto LABEL_107;
      if ( v22 >= v25->max_length )
        goto LABEL_108;
      v26 = v25->m_Items[v22];
      if ( !v26 )
        goto LABEL_107;
      isFixedSupportPositionRestriction = v26->fields.isFixedSupportPositionRestriction;
      if ( v26->fields.isFixedServantPositionAgreement )
      {
        isRestrictionNeedStarting = v26->fields.isRestrictionNeedStarting;
        isRestrictionMyServantPos = v26->fields.isRestrictionMyServantPos;
        isRestrictionServantPos = v26->fields.isRestrictionServantPos;
        v31 = isRestrictionNeedStarting && v24 == -1;
        v20 -= isRestrictionMyServantPos;
        if ( v31 )
          v24 = v22;
        FixedPositionCount -= isRestrictionServantPos;
      }
      v23 |= isFixedSupportPositionRestriction;
      ++v22;
    }
    if ( v20 > 0 )
      goto LABEL_60;
    v35 = this->fields.memberList;
    if ( !v35 )
      goto LABEL_107;
    v36 = v35->max_length;
    if ( v36 < 1 )
    {
LABEL_60:
      if ( !((v24 < 0) | v23 & 1) )
      {
        for ( j = v24 + 1; ; ++j )
        {
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
          }
          if ( (signed int)j >= SHIDWORD(IsUseOldMaster->fields.servantEntity->fields.classPassive) )
            break;
          v52 = this->fields.memberList;
          if ( !v52 )
            goto LABEL_107;
          if ( j >= v52->max_length )
            goto LABEL_108;
          IsUseOldMaster = v52->m_Items[j];
          if ( !IsUseOldMaster )
            goto LABEL_107;
          PartyOrganizationListViewItem__ResetPositionRestrictionNeedStarting(IsUseOldMaster, 0LL);
        }
      }
      if ( (FixedPositionCount > 0) | v23 & 1 )
        goto LABEL_68;
      v38 = this->fields.memberList;
      if ( !v38 )
        goto LABEL_107;
      v39 = v38->max_length;
      if ( v39 < 1 )
      {
LABEL_68:
        v41 = this->fields.questRestrictionInfo;
        if ( !v41 || v41->fields.servantNumMin != 1 )
          return;
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( IsUseOldMaster )
        {
          sortValue2B = IsUseOldMaster->fields.sortValue2B;
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( IsUseOldMaster )
          {
            if ( sortValue2B )
            {
              sortStr1_low = LODWORD(IsUseOldMaster->fields.sortStr1);
              if ( (int)sortStr1_low >= 1 )
              {
                IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                v44 = 0LL;
                v7 = 0;
                while ( 1 )
                {
                  if ( !LODWORD(IsUseOldMaster->fields.commandCodeIdList) )
                  {
                    j_il2cpp_runtime_class_init_0(IsUseOldMaster);
                    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                  }
                  if ( v44 >= SHIDWORD(IsUseOldMaster->fields.servantEntity->fields.classPassive) )
                    break;
                  if ( sortStr1_low != ++v44 )
                  {
                    v45 = *(_QWORD *)(sortValue2B + 120);
                    if ( !v45 )
                      goto LABEL_107;
                    if ( v44 - 1 >= (unsigned __int64)*(unsigned int *)(v45 + 24) )
                      goto LABEL_108;
                    v46 = *(_QWORD *)(v45 + 8 * v44 + 24);
                    if ( !v46 )
                      goto LABEL_107;
                    if ( *(_QWORD *)(v46 + 112) )
                      ++v7;
                  }
                }
              }
            }
            v47 = this->fields.questRestrictionInfo;
            if ( v47 )
            {
              if ( !v7 && v6 == 1 && v47->fields.isNotSingleSupportOnly )
              {
                IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                for ( k = 0; ; ++k )
                {
                  if ( !LODWORD(IsUseOldMaster->fields.commandCodeIdList) )
                  {
                    j_il2cpp_runtime_class_init_0(IsUseOldMaster);
                    IsUseOldMaster = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
                  }
                  if ( (signed int)k >= SHIDWORD(IsUseOldMaster->fields.servantEntity->fields.classPassive) )
                    break;
                  v49 = this->fields.memberList;
                  if ( !v49 )
                    goto LABEL_107;
                  if ( k >= v49->max_length )
                    goto LABEL_108;
                  v50 = v49->m_Items[k];
                  if ( !v50 )
                    goto LABEL_107;
                  if ( v50->fields.isFollower )
                  {
                    v50->fields._IsNotSupportSingle_k__BackingField = 1;
                    return;
                  }
                }
              }
              return;
            }
          }
        }
LABEL_107:
        sub_1BC3264(IsUseOldMaster, method);
      }
      v40 = 0;
      while ( v40 < v39 )
      {
        IsUseOldMaster = v38->m_Items[v40];
        if ( !IsUseOldMaster )
          goto LABEL_107;
        PartyOrganizationListViewItem__ResetPositionRestrictionServant(IsUseOldMaster, 0LL);
        v39 = v38->max_length;
        if ( (int)++v40 >= v39 )
          goto LABEL_68;
      }
    }
    else
    {
      v37 = 0;
      while ( v37 < v36 )
      {
        IsUseOldMaster = v35->m_Items[v37];
        if ( !IsUseOldMaster )
          goto LABEL_107;
        PartyOrganizationListViewItem__ResetPositionRestrictionMyServant(IsUseOldMaster, 0LL);
        v36 = v35->max_length;
        if ( (int)++v37 >= v36 )
          goto LABEL_60;
      }
    }
LABEL_108:
    sub_1BC326C(IsUseOldMaster, method, v2);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.deckName, (int32_t)DefaultDeckName, v4, v5);
}


void __fastcall PartyListViewItem__ClearEquip(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  il2cpp_array_size_t i; // w20
  PartyOrganizationListViewItem_o *v5; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w22

  if ( (byte_4AFD9FF & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    byte_4AFD9FF = 1;
  }
  for ( i = 0; ; ++i )
  {
    v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= SHIDWORD(v5->fields.servantEntity->fields.classPassive) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_15;
    if ( i >= memberList->max_length )
      sub_1BC326C(v5, method, v2);
    v5 = memberList->m_Items[i];
    if ( !v5 )
LABEL_15:
      sub_1BC3264(v5, method);
    if ( !v5->fields.isFollower && !v5->fields.isRestrictionGrandServant )
    {
      cost = this->fields.cost;
      this->fields.cost = cost - PartyOrganizationListViewItem__ClearEquip(v5, 0LL);
    }
  }
  PartyListViewItem__CheckRestriction(this, method);
}


void __fastcall PartyListViewItem__ClearFollower(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  il2cpp_array_size_t i; // w20
  PartyOrganizationListViewItem_o *v5; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8

  if ( (byte_4AFDA00 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    byte_4AFDA00 = 1;
  }
  for ( i = 0; ; ++i )
  {
    v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= SHIDWORD(v5->fields.servantEntity->fields.classPassive) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_12;
    if ( i >= memberList->max_length )
      sub_1BC326C(v5, method, v2);
    v5 = memberList->m_Items[i];
    if ( !v5 )
LABEL_12:
      sub_1BC3264(v5, method);
    PartyOrganizationListViewItem__ClearFollower(v5, 0LL);
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
    sub_1BC3264(this, *(_QWORD *)&num);
  }
  if ( v7->max_length <= num )
LABEL_9:
    sub_1BC326C(this, *(_QWORD *)&num, method);
  this = (PartyListViewItem_o *)v7->m_Items[num];
  if ( !this )
    goto LABEL_8;
  PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)this, 0LL);
  PartyListViewItem__CheckRestriction(v5, v8);
}


void __fastcall PartyListViewItem__ClearMember_33229736(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  il2cpp_array_size_t v4; // w20
  PartyOrganizationListViewItem_o *v5; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w22

  if ( (byte_4AFD9FE & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    byte_4AFD9FE = 1;
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
    if ( (signed int)v4 >= SHIDWORD(v5->fields.servantEntity->fields.classPassive) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_19;
    if ( v4 >= memberList->max_length )
LABEL_20:
      sub_1BC326C(v5, method, v2);
    v5 = memberList->m_Items[v4];
    if ( !v5 )
      goto LABEL_19;
    if ( !v5->fields.isFollower && !v5->fields.isRestrictionGrandServant )
    {
      PartyOrganizationListViewItem__Empty(v5, 0LL);
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_19;
    }
    if ( v4 >= memberList->max_length )
      goto LABEL_20;
    v5 = memberList->m_Items[v4];
    if ( !v5 )
LABEL_19:
      sub_1BC3264(v5, method);
    if ( v5->fields.isRestrictionGrandServant )
    {
      cost = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v5, 0LL) + cost;
    }
    ++v4;
  }
  PartyListViewItem__CheckRestriction(this, method);
}


PartyListViewItem_o *__fastcall PartyListViewItem__Clone(PartyListViewItem_o *this, const MethodInfo *method)
{
  PartyListViewItem_o *v3; // x20
  const MethodInfo *v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4AFD9F7 & 1) == 0 )
  {
    sub_1BC3008(&PartyListViewItem_TypeInfo, method);
    byte_4AFD9F7 = 1;
  }
  v3 = (PartyListViewItem_o *)sub_1BC3254(PartyListViewItem_TypeInfo);
  PartyListViewItem___ctor(v3, v4);
  if ( !v3 )
    sub_1BC3264(v5, v6);
  PartyListViewItem__Set(v3, this, v7);
  return v3;
}


bool __fastcall PartyListViewItem__CompMember(
        PartyListViewItem_o *this,
        PartyListViewItem_o *item,
        const MethodInfo *method)
{
  PartyListViewItem_o *v4; // x20
  __int64 v5; // x2
  int v7; // w21
  int32_t v8; // w24
  int32_t v9; // w23
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v11; // x9

  v4 = this;
  if ( (byte_4AFDA0A & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1BC3008(&BalanceConfig_TypeInfo, item);
    byte_4AFDA0A = 1;
  }
  if ( !item )
LABEL_17:
    sub_1BC3264(this, item);
  if ( System_String__op_Inequality(v4->fields.deckName, item->fields.deckName, 0LL) )
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
    v9 = this->fields.trendDispWaveBattleEnemyClassIds->m_Items[36];
    if ( v7 + 1 >= v9 )
      break;
    memberList = v4->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( v8 >= memberList->max_length )
      goto LABEL_18;
    v11 = item->fields.memberList;
    if ( !v11 )
      goto LABEL_17;
    if ( ++v7 >= v11->max_length )
LABEL_18:
      sub_1BC326C(this, item, v5);
    this = (PartyListViewItem_o *)memberList->m_Items[v8];
    if ( !this )
      goto LABEL_17;
  }
  while ( PartyOrganizationListViewItem__CompMember((PartyOrganizationListViewItem_o *)this, v11->m_Items[v8], 0LL) );
  return v8 >= v9;
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
  __int64 v10; // x2
  unsigned __int64 i; // x24
  Il2CppObject *AssetName; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v14; // x0
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppObject *v19; // x1
  Il2CppClass **v20; // x0

  if ( (byte_4AFDA17 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__ToArray__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v7);
    byte_4AFDA17 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
  for ( i = 0LL; ; ++i )
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
    if ( i >= memberList->max_length )
      sub_1BC326C(AssetName, v9, v10);
    v14 = memberList->m_Items[i];
    if ( v14 )
    {
      AssetName = (Il2CppObject *)PartyOrganizationListViewItem__GetAssetName(v14, 0LL);
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
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v19;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v10, v15);
        }
      }
    }
  }
  if ( !v8 )
LABEL_21:
    sub_1BC3264(AssetName, v9);
  if ( v8->fields._size < 1 )
    return 0LL;
  else
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    v8,
                                    (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall PartyListViewItem__GetCommandCardList(
        PartyListViewItem_o *this,
        int32_t typeMax,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  System_Int32_array *v8; // x21
  unsigned __int64 i; // x23
  _QWORD *p_image; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v12; // x0
  unsigned __int64 v13; // x9
  unsigned __int64 j; // x8

  if ( (byte_4AFDA16 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&typeMax);
    sub_1BC3008(&int___TypeInfo, v5);
    byte_4AFDA16 = 1;
  }
  v8 = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, (unsigned int)typeMax);
  for ( i = 0LL; ; ++i )
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
      sub_1BC3264(p_image, v6);
    if ( i >= memberList->max_length )
LABEL_21:
      sub_1BC326C(p_image, v6, v7);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  void *DeckConditionServantNumAndPosition; // x0
  il2cpp_array_size_t v14; // w28
  int v15; // w25
  char v16; // w26
  int v17; // w29
  int v18; // w21
  int32_t v19; // w20
  int32_t DeckMainMemberMax; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v22; // x8
  PartyOrganizationListViewItem_o *v23; // x22
  _BOOL4 isFollower; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int32_t v26; // w28
  __int64 v27; // x8
  struct PartyOrganizationListViewItem_array *v28; // x8
  Il2CppClass **v29; // x8
  PartyOrganizationListViewItem_o *v30; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // kr10_16
  int32_t v32; // w23
  struct PartyOrganizationListViewItem_array *v33; // x9
  PartyOrganizationListViewItem_o *v34; // x9
  const MethodInfo *v35; // x5
  const MethodInfo *v36; // x5
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  _BOOL4 isNotSingleSupportOnly; // w8
  struct PartyOrganizationListViewItem_array *v39; // x26
  int max_length; // w8
  const MethodInfo_36A0B70 **v41; // x25
  int v42; // w29
  Il2CppClass **v43; // x8
  PartyOrganizationListViewItem_o *v44; // x20
  PartyOrganizationListViewItem_o *v45; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // kr20_16
  System_Collections_Generic_List_object__o *v47; // x21
  int size; // w8
  int v49; // w9
  char v50; // w24
  int32_t v51; // w23
  struct PartyOrganizationListViewItem_array *v52; // x22
  const MethodInfo_36A0B70 **v53; // x28
  Il2CppObject *Item; // x0
  ServantEntity_o *servantEntity; // x25
  int32_t svtLimitCount; // w26
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x24
  System_Collections_Generic_IEnumerable_TSource__o *Individuality; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x24
  __int64 i; // x23
  struct PartyOrganizationListViewItem_array *v62; // x8
  PartyOrganizationListViewItem_o *v63; // x8
  struct ServantEntity_o *v64; // x8
  __int64 v65; // x20
  __int64 v66; // x21
  int32_t v67; // w20
  unsigned __int64 j; // x24
  struct PartyOrganizationListViewItem_array *v69; // x8
  PartyOrganizationListViewItem_o *v70; // x8
  struct ServantEntity_o *v71; // x8
  __int64 v72; // x21
  __int64 v73; // x22
  System_Collections_Generic_List_T__o *v75; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16

  if ( (byte_4AFDA08 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_int___, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_Intersect_int___, v6);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_int____get_Count__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_int____get_Item__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    byte_4AFDA08 = 1;
  }
  if ( this->fields.cost > this->fields.maxCost )
  {
    LODWORD(DeckConditionServantNumAndPosition) = 7;
    return (int)DeckConditionServantNumAndPosition;
  }
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  while ( 1 )
  {
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    }
    DeckMainMemberMax = *(_DWORD *)(*((_QWORD *)DeckConditionServantNumAndPosition + 23) + 176LL);
    if ( (int)v14 >= DeckMainMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_166;
    if ( v14 >= memberList->max_length )
LABEL_167:
      sub_1BC326C(DeckConditionServantNumAndPosition, method, v2);
    v22 = &memberList->obj.klass + (int)v14;
    v23 = (PartyOrganizationListViewItem_o *)v22[4];
    if ( !v23 )
      goto LABEL_166;
    if ( PartyOrganizationListViewItem__get_IsLeave((PartyOrganizationListViewItem_o *)v22[4], 0LL) )
    {
LABEL_54:
      LODWORD(DeckConditionServantNumAndPosition) = 5;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( (v23->fields.fatigureTime & 0x8000000000000000LL) == 0 )
    {
LABEL_55:
      LODWORD(DeckConditionServantNumAndPosition) = 6;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v23->fields._IsAllOutBattle_k__BackingField )
    {
LABEL_56:
      LODWORD(DeckConditionServantNumAndPosition) = 19;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v23->fields._IsDataLost_k__BackingField )
    {
LABEL_57:
      LODWORD(DeckConditionServantNumAndPosition) = 20;
      return (int)DeckConditionServantNumAndPosition;
    }
    if ( v23->fields._TimesToRestart_k__BackingField > 0 )
    {
LABEL_58:
      LODWORD(DeckConditionServantNumAndPosition) = 21;
      return (int)DeckConditionServantNumAndPosition;
    }
    isFollower = v23->fields.isFollower;
    if ( v23->fields.isFollower && !v23->fields.isMyServantOrNpcRestriction )
    {
      ++v18;
      ++v17;
      v16 = 1;
    }
    else
    {
      if ( v23->fields.userServantEntity )
        goto LABEL_21;
      if ( v23->fields.isMyServantOrNpcRestriction )
      {
        SvtId = PartyOrganizationListViewItem__get_SvtId(v23, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(SvtId, 0LL) >= 1 )
        {
          isFollower = v23->fields.isFollower;
LABEL_21:
          ++v19;
          v15 |= isFollower;
        }
      }
    }
    ++v14;
  }
  if ( !*((_DWORD *)DeckConditionServantNumAndPosition + 56) )
  {
    j_il2cpp_runtime_class_init_0(DeckConditionServantNumAndPosition);
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    DeckMainMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
  }
  v26 = v19;
  while ( 1 )
  {
    if ( !*((_DWORD *)DeckConditionServantNumAndPosition + 56) )
    {
      j_il2cpp_runtime_class_init_0(DeckConditionServantNumAndPosition);
      DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    }
    v27 = *((_QWORD *)DeckConditionServantNumAndPosition + 23);
    if ( DeckMainMemberMax >= *(_DWORD *)(v27 + 172) )
      break;
    v28 = this->fields.memberList;
    if ( !v28 )
      goto LABEL_166;
    if ( DeckMainMemberMax >= v28->max_length )
      goto LABEL_167;
    v29 = &v28->obj.klass + DeckMainMemberMax;
    v30 = (PartyOrganizationListViewItem_o *)v29[4];
    if ( !v30 )
      goto LABEL_166;
    if ( PartyOrganizationListViewItem__get_IsLeave((PartyOrganizationListViewItem_o *)v29[4], 0LL) )
      goto LABEL_54;
    if ( (v30->fields.fatigureTime & 0x8000000000000000LL) == 0 )
      goto LABEL_55;
    if ( v30->fields._IsAllOutBattle_k__BackingField )
      goto LABEL_56;
    if ( v30->fields._IsDataLost_k__BackingField )
      goto LABEL_57;
    if ( v30->fields._TimesToRestart_k__BackingField > 0 )
      goto LABEL_58;
    if ( v30->fields.isFollower && !v30->fields.isMyServantOrNpcRestriction )
    {
      ++v17;
    }
    else
    {
      if ( v30->fields.userServantEntity )
        goto LABEL_46;
      if ( v30->fields.isMyServantOrNpcRestriction )
      {
        v31 = PartyOrganizationListViewItem__get_SvtId(v30, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v31, 0LL) >= 1 )
LABEL_46:
          ++v26;
      }
    }
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    ++DeckMainMemberMax;
  }
  DeckConditionServantNumAndPosition = 0LL;
  v32 = v17 + v26;
  switch ( this->fields.menuKind )
  {
    case 4:
      DeckConditionServantNumAndPosition = (void *)PartyListViewItem__CheckDeckConditionServantNum(
                                                     this,
                                                     v32,
                                                     v19,
                                                     v16 & 1,
                                                     1,
                                                     v3);
      if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
        goto LABEL_99;
      goto LABEL_95;
    case 5:
      DeckConditionServantNumAndPosition = (void *)PartyListViewItem__GetDeckConditionServantNumAndPosition(
                                                     this,
                                                     v32,
                                                     v19,
                                                     v16 & 1,
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
        goto LABEL_166;
      if ( !QuestRestrictionInfo__IsServantNum((QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition, 0LL) )
        goto LABEL_75;
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
        goto LABEL_166;
      if ( QuestRestrictionInfo__IsFixedServantPosition(
             (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
             0LL) )
      {
LABEL_75:
        DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
        if ( !DeckConditionServantNumAndPosition )
          goto LABEL_166;
        if ( QuestRestrictionInfo__IsServantNum((QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition, 0LL) )
        {
          DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
          if ( !DeckConditionServantNumAndPosition )
            goto LABEL_166;
          if ( QuestRestrictionInfo__IsFixedServantPosition(
                 (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                 0LL) )
          {
            LODWORD(DeckConditionServantNumAndPosition) = PartyListViewItem__GetDeckConditionServantNumAndPosition(
                                                            this,
                                                            v32,
                                                            v19,
                                                            v16 & 1,
                                                            v18,
                                                            v36);
            if ( (_DWORD)DeckConditionServantNumAndPosition )
              return (int)DeckConditionServantNumAndPosition;
          }
        }
      }
      else if ( !PartyListViewItem__CheckDeckConditionServantNum(this, v32, v19, v16 & 1, v18, v35) )
      {
LABEL_99:
        LODWORD(DeckConditionServantNumAndPosition) = 14;
        return (int)DeckConditionServantNumAndPosition;
      }
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
        goto LABEL_166;
      if ( !QuestRestrictionInfo__IsMyServantNum((QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition, 0LL) )
        goto LABEL_88;
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
        goto LABEL_166;
      if ( !QuestRestrictionInfo__CheckMyServantNumRestriction(
              (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
              v26,
              0LL) )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 16;
        return (int)DeckConditionServantNumAndPosition;
      }
LABEL_88:
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
        goto LABEL_166;
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
        v27 = *((_QWORD *)DeckConditionServantNumAndPosition + 23);
LABEL_93:
        if ( v19 + v18 < *(_DWORD *)(v27 + 176) )
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
      if ( v19 == 1 && (v15 & isNotSingleSupportOnly & 1) != 0 )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 22;
        return (int)DeckConditionServantNumAndPosition;
      }
      v39 = this->fields.memberList;
      if ( !v39 )
        goto LABEL_166;
      max_length = v39->max_length;
      if ( max_length < 1 )
        goto LABEL_133;
      v41 = (const MethodInfo_36A0B70 **)&Method_System_Collections_Generic_List_int____get_Item__;
      v42 = 0;
      break;
    default:
      if ( !v26 )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 1;
        return (int)DeckConditionServantNumAndPosition;
      }
      if ( v19 != 1 )
        goto LABEL_81;
      v33 = this->fields.memberList;
      if ( !v33 )
        goto LABEL_166;
      if ( !v33->max_length )
        goto LABEL_167;
      v34 = v33->m_Items[0];
      if ( !v34 )
        goto LABEL_166;
      if ( v34->fields.userServantEntity )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 2;
        return (int)DeckConditionServantNumAndPosition;
      }
LABEL_81:
      v18 = v16 & 1;
      goto LABEL_93;
  }
  do
  {
    if ( v42 >= (unsigned int)max_length )
      goto LABEL_167;
    v43 = &v39->obj.klass + v42;
    v44 = (PartyOrganizationListViewItem_o *)v43[4];
    if ( !v44 )
      goto LABEL_166;
    v45 = (PartyOrganizationListViewItem_o *)v43[4];
    v44->fields._IsErrorNeedIndividuality_k__BackingField = 0;
    v46 = PartyOrganizationListViewItem__get_SvtId(v45, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    DeckConditionServantNumAndPosition = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                   v46,
                                                   0LL);
    if ( !(_DWORD)DeckConditionServantNumAndPosition )
    {
      DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
      if ( !DeckConditionServantNumAndPosition )
        goto LABEL_166;
      DeckConditionServantNumAndPosition = (void *)QuestRestrictionInfo__IsSetRequired(
                                                     (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                                                     v44->fields.index + 1,
                                                     v44->fields._InitPos_k__BackingField,
                                                     0LL);
      if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) != 0 )
      {
        LODWORD(DeckConditionServantNumAndPosition) = 18;
        return (int)DeckConditionServantNumAndPosition;
      }
    }
    if ( !v44->fields.userServantEntity )
      goto LABEL_132;
    DeckConditionServantNumAndPosition = this->fields.questRestrictionInfo;
    if ( !DeckConditionServantNumAndPosition )
      goto LABEL_166;
    DeckConditionServantNumAndPosition = QuestRestrictionInfo__GetNeedIndividualityList(
                                           (QuestRestrictionInfo_o *)DeckConditionServantNumAndPosition,
                                           v44->fields._InitPos_k__BackingField,
                                           0LL);
    if ( !this->fields.questRestrictionInfo )
      goto LABEL_166;
    v47 = (System_Collections_Generic_List_object__o *)DeckConditionServantNumAndPosition;
    DeckConditionServantNumAndPosition = QuestRestrictionInfo__GetRangeTypeList(
                                           this->fields.questRestrictionInfo,
                                           v44->fields._InitPos_k__BackingField,
                                           0LL);
    v75 = (System_Collections_Generic_List_T__o *)DeckConditionServantNumAndPosition;
    if ( !v47 )
      goto LABEL_132;
    if ( !DeckConditionServantNumAndPosition )
      goto LABEL_132;
    size = v47->fields._size;
    if ( size < 1 )
      goto LABEL_132;
    v49 = *((_DWORD *)DeckConditionServantNumAndPosition + 6);
    if ( v49 < 1 || size != v49 )
      goto LABEL_132;
    v50 = 0;
    v51 = 0;
    do
    {
      DeckConditionServantNumAndPosition = System_Collections_Generic_List_object___get_Item(v47, v51, *v41);
      if ( DeckConditionServantNumAndPosition )
      {
        DeckConditionServantNumAndPosition = System_Collections_Generic_List_object___get_Item(v47, v51, *v41);
        if ( !DeckConditionServantNumAndPosition )
          goto LABEL_166;
        if ( *((_QWORD *)DeckConditionServantNumAndPosition + 3) )
        {
          v52 = v39;
          v53 = v41;
          Item = System_Collections_Generic_List_object___get_Item(v47, v51, *v41);
          servantEntity = v44->fields.servantEntity;
          svtLimitCount = v44->fields.svtLimitCount;
          v57 = (System_Collections_Generic_IEnumerable_TSource__o *)Item;
          DeckConditionServantNumAndPosition = (void *)PartyOrganizationListViewItem__GetDispImageLimitCount(v44, 0LL);
          if ( !servantEntity )
            goto LABEL_166;
          Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                                 servantEntity,
                                                                                 svtLimitCount,
                                                                                 (int32_t)DeckConditionServantNumAndPosition,
                                                                                 0LL);
          v59 = System_Linq_Enumerable__Intersect_int_(
                  v57,
                  Individuality,
                  (const MethodInfo_302853C *)Method_System_Linq_Enumerable_Intersect_int___);
          v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       v59,
                                                                       (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( System_Collections_Generic_List_Int32Enum___get_Item(
                 v75,
                 v51,
                 (const MethodInfo_3686358 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
          {
            DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                           v60,
                                                           (const MethodInfo_300D4AC *)Method_System_Linq_Enumerable_Any_int___);
            v41 = v53;
            v39 = v52;
            if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) != 0 )
              goto LABEL_132;
LABEL_128:
            v50 = 1;
            goto LABEL_130;
          }
          DeckConditionServantNumAndPosition = (void *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                         v75,
                                                         v51,
                                                         (const MethodInfo_3686358 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          v41 = v53;
          if ( (_DWORD)DeckConditionServantNumAndPosition == 2 )
          {
            DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                           v60,
                                                           (const MethodInfo_300D4AC *)Method_System_Linq_Enumerable_Any_int___);
            v39 = v52;
            if ( ((unsigned __int8)DeckConditionServantNumAndPosition & 1) == 0 )
              goto LABEL_132;
            goto LABEL_128;
          }
          v50 = 1;
          v39 = v52;
        }
      }
LABEL_130:
      ++v51;
    }
    while ( v51 < v47->fields._size );
    if ( (v50 & 1) != 0 )
    {
      v44->fields._IsErrorNeedIndividuality_k__BackingField = 1;
      LODWORD(DeckConditionServantNumAndPosition) = 23;
      return (int)DeckConditionServantNumAndPosition;
    }
LABEL_132:
    max_length = v39->max_length;
    ++v42;
  }
  while ( v42 < max_length );
LABEL_133:
  DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
  for ( i = 0LL; ; ++i )
  {
    if ( !*((_DWORD *)DeckConditionServantNumAndPosition + 56) )
    {
      j_il2cpp_runtime_class_init_0(DeckConditionServantNumAndPosition);
      DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    }
    if ( (int)i >= *(_DWORD *)(*((_QWORD *)DeckConditionServantNumAndPosition + 23) + 172LL) )
    {
      if ( PartyListViewItem__CheckDuplicationGrandQuestEquipment(this, method) )
        LODWORD(DeckConditionServantNumAndPosition) = 24;
      else
        LODWORD(DeckConditionServantNumAndPosition) = 0;
      return (int)DeckConditionServantNumAndPosition;
    }
    v62 = this->fields.memberList;
    if ( !v62 )
      goto LABEL_166;
    if ( (unsigned int)i >= v62->max_length )
      goto LABEL_167;
    v63 = v62->m_Items[(int)i];
    if ( !v63 )
      goto LABEL_166;
    if ( v63->fields.userServantEntity )
      break;
LABEL_158:
    ;
  }
  v64 = v63->fields.servantEntity;
  if ( !v64 )
LABEL_166:
    sub_1BC3264(DeckConditionServantNumAndPosition, method);
  v66 = *(_QWORD *)&v64->fields.baseSvtId.fields.currentCryptoKey;
  v65 = *(_QWORD *)&v64->fields.baseSvtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v76.fields.currentCryptoKey = v66;
  *(_QWORD *)&v76.fields.fakeValue = v65;
  v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v76, 0LL);
  for ( j = 0LL; ; ++j )
  {
    DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      DeckConditionServantNumAndPosition = BalanceConfig_TypeInfo;
    }
    if ( (__int64)j >= *(int *)(*((_QWORD *)DeckConditionServantNumAndPosition + 23) + 172LL) )
      goto LABEL_158;
    if ( i != j )
    {
      v69 = this->fields.memberList;
      if ( !v69 )
        goto LABEL_166;
      if ( j >= v69->max_length )
        goto LABEL_167;
      v70 = v69->m_Items[j];
      if ( !v70 )
        goto LABEL_166;
      if ( v70->fields.userServantEntity )
      {
        v71 = v70->fields.servantEntity;
        if ( !v71 )
          goto LABEL_166;
        v73 = *(_QWORD *)&v71->fields.baseSvtId.fields.currentCryptoKey;
        v72 = *(_QWORD *)&v71->fields.baseSvtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v77.fields.currentCryptoKey = v73;
        *(_QWORD *)&v77.fields.fakeValue = v72;
        if ( v67 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v77, 0LL) )
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
  __int64 v14; // x2
  int32_t FixedServantPositionCount; // w20
  il2cpp_array_size_t v16; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v18; // x8

  if ( (byte_4AFDA06 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&deckMemberCount);
    byte_4AFDA06 = 1;
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
    sub_1BC3264(questRestrictionInfo, v11);
  FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(questRestrictionInfo, 0LL);
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
    if ( v16 >= memberList->max_length )
      sub_1BC326C(questRestrictionInfo, v11, v14);
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


System_Int64_array *__fastcall PartyListViewItem__GetEquipList(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_long__o *v6; // x20
  __int64 EquipUserSvtId; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct PartyOrganizationListViewItem_array *memberList; // x8
  __int64 v11; // x23
  int max_length; // w9
  Il2CppClass **v13; // x8
  PartyOrganizationListViewItem_o *v14; // x21
  struct System_Int64_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_4AFDA0D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_long__ToArray__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_long___ctor__, v4);
    sub_1BC3008(&System_Collections_Generic_List_long__TypeInfo, v5);
    byte_4AFDA0D = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_1BC3254(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_3688620 *)Method_System_Collections_Generic_List_long___ctor__);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_15;
  v11 = 0LL;
  while ( 1 )
  {
    max_length = memberList->max_length;
    if ( (int)v11 >= max_length )
      break;
    if ( (unsigned int)v11 >= max_length )
      sub_1BC326C(EquipUserSvtId, v8, v9);
    v13 = &memberList->obj.klass + v11;
    v14 = (PartyOrganizationListViewItem_o *)v13[4];
    if ( !v14 )
      goto LABEL_15;
    EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)v13[4], 0LL);
    if ( EquipUserSvtId >= 1 )
    {
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v14, 0LL);
      if ( !v6 )
        goto LABEL_15;
      items = v6->fields._items;
      v16 = Method_System_Collections_Generic_List_long__Add__;
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
          *(const MethodInfo_3688E74 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v6->fields._size = size + 1;
        items->m_Items[size] = EquipUserSvtId;
      }
    }
    memberList = this->fields.memberList;
    ++v11;
    if ( !memberList )
      goto LABEL_15;
  }
  if ( !v6 )
LABEL_15:
    sub_1BC3264(EquipUserSvtId, v8);
  return System_Collections_Generic_List_long___ToArray(
           v6,
           (const MethodInfo_368A92C *)Method_System_Collections_Generic_List_long__ToArray__);
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
  if ( (byte_4AFDA15 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, eventId);
    this = (PartyListViewItem_o *)sub_1BC3008(&EventUpValInfo___TypeInfo, v7);
    byte_4AFDA15 = 1;
  }
  setupInfo = v6->fields.setupInfo;
  if ( setupInfo )
  {
    setupInfo = (struct EventUpValSetupInfo_o *)setupInfo->fields.eventIdList;
    if ( !setupInfo )
LABEL_23:
      sub_1BC3264(this, eventId);
    v9 = *(_QWORD *)&setupInfo->fields.questPhase;
    if ( v9 )
    {
      if ( !(_DWORD)v9 )
LABEL_24:
        sub_1BC326C(this, eventId, eventUpValList);
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
  v11 = (EventUpValInfo_array *)sub_1BC30B0(EventUpValInfo___TypeInfo, (unsigned int)v10->static_fields->DeckMemberMax);
  *eventUpValList = v11;
  sub_1BC2FAC((CGThumbnailListItem_o *)eventUpValList, (int32_t)v11, v12, v13);
  for ( i = 0LL; ; ++i )
  {
    this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (PartyListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= this->fields.trendDispWaveBattleEnemyClassIds->m_Items[36] )
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
  __int64 v17; // x2
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  int current; // w22
  DeckServantData_o *v21; // x8
  QuestRestrictionInfo_o *v22; // x0
  const MethodInfo *v23; // x2
  struct QuestRestrictionInfo_o *v24; // x8
  int servantNumMax; // w9
  PartyListViewItem___c__DisplayClass36_0_o *v26; // x21
  System_Func_object__bool__o *v27; // x23
  struct QuestRestrictionInfo_o *v28; // x8
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v31; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4AFD9F5 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_FollowerInfo___, deck);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9);
    sub_1BC3008(&System_Func_FollowerInfo__bool__TypeInfo, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11);
    sub_1BC3008(&Method_PartyListViewItem___c__DisplayClass36_0__GetFollowerIndex_b__0__, v12);
    sub_1BC3008(&PartyListViewItem___c__DisplayClass36_0_TypeInfo, v13);
    byte_4AFD9F5 = 1;
  }
  memset(&v31, 0, sizeof(v31));
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      (System_Collections_Generic_List_int__o *)questRestrictionInfo,
      (const MethodInfo_36848F0 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v31 = v30;
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v31,
              (const MethodInfo_3432974 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
      if ( !v15 )
        break;
      deckInfo = deck->fields.deckInfo;
      if ( !deckInfo )
        sub_1BC3264(v15, v16);
      svts = deckInfo->fields.svts;
      if ( !svts )
        sub_1BC3264(v15, v16);
      current = v31.fields._current;
      if ( v31.fields._current - 1 >= svts->max_length )
        sub_1BC326C(v15, v16, v17);
      v21 = svts->m_Items[v31.fields._current - 1];
      if ( !v21 )
        sub_1BC3264(v15, v16);
      v22 = this->fields.questRestrictionInfo;
      if ( !v22 )
        sub_1BC3264(0LL, v16);
      if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_42413184(v22, v21->fields.initPos, 0LL) )
        goto LABEL_38;
    }
    current = 0;
LABEL_38:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v31,
      (const MethodInfo_3432970 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  v24 = this->fields.questRestrictionInfo;
  if ( !v24 )
    return current;
  servantNumMax = v24->fields.servantNumMax;
  if ( servantNumMax >= 1 && servantNumMax < current )
  {
LABEL_31:
    v28 = this->fields.questRestrictionInfo;
    if ( v28 )
    {
      if ( fixNpcFollowerInfoList )
        return PartyListViewItem__GetSupportInitIndex(this, fixNpcFollowerInfoList, v23);
      else
        return v28->fields.supportInitIndex;
    }
    return 0;
  }
  if ( fixNpcFollowerInfoList && !v24->fields.isNpcEditablePos )
  {
    v26 = (PartyListViewItem___c__DisplayClass36_0_o *)sub_1BC3254(PartyListViewItem___c__DisplayClass36_0_TypeInfo);
    PartyListViewItem___c__DisplayClass36_0___ctor(v26, 0LL);
    if ( v26 )
    {
      v26->fields.chkIndex = current;
      v27 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v27,
        (Il2CppObject *)v26,
        Method_PartyListViewItem___c__DisplayClass36_0__GetFollowerIndex_b__0__,
        0LL);
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)fixNpcFollowerInfoList,
              (System_Func_T__bool__o *)v27,
              (const MethodInfo_2FEB2DC *)Method_BasicHelper_Any_FollowerInfo___) )
        return current;
      goto LABEL_31;
    }
LABEL_39:
    sub_1BC3264(questRestrictionInfo, deck);
  }
  return current;
}


System_String_o *__fastcall PartyListViewItem__GetGrandQuestDuplicationEquipmentNameList(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *duplicatedEquipmentUserSvtIdList; // x19
  System_Func_T__TResult__o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_String_array *v20; // x0

  if ( (byte_4AFDA1C & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_long__string___, v4);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_string___, v5);
    sub_1BC3008(&System_Func_long__string__TypeInfo, v6);
    sub_1BC3008(&Method_PartyListViewItem___c__DisplayClass107_0__GetGrandQuestDuplicationEquipmentNameList_b__0__, v7);
    sub_1BC3008(&PartyListViewItem___c__DisplayClass107_0_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_43/*"\n"*/, v9);
    sub_1BC3008(&StringLiteral_1/*""*/, v10);
    byte_4AFDA1C = 1;
  }
  v11 = sub_1BC3254(PartyListViewItem___c__DisplayClass107_0_TypeInfo);
  PartyListViewItem___c__DisplayClass107_0___ctor((PartyListViewItem___c__DisplayClass107_0_o *)v11, 0LL);
  if ( BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)this->fields.duplicatedEquipmentUserSvtIdList,
         0LL) )
  {
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !v11 )
    sub_1BC3264(Master_object, v14);
  *(_QWORD *)(v11 + 16) = Master_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)Master_object, v15, v16);
  duplicatedEquipmentUserSvtIdList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.duplicatedEquipmentUserSvtIdList;
  v18 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_long__string__TypeInfo);
  System_Func_long__object____ctor(
    v18,
    (Il2CppObject *)v11,
    Method_PartyListViewItem___c__DisplayClass107_0__GetGrandQuestDuplicationEquipmentNameList_b__0__,
    0LL);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               duplicatedEquipmentUserSvtIdList,
                                                               (System_Func_TSource__TResult__o *)v18,
                                                               (const MethodInfo_3034E04 *)Method_System_Linq_Enumerable_Select_long__string___);
  v20 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v19,
                                 (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_string___);
  return System_String__Join((System_String_o *)StringLiteral_43/*"\n"*/, v20, 0LL);
}


void __fastcall PartyListViewItem__GetGrandServantInfo(
        PartyListViewItem_o *this,
        RestrictionEntity_o *restrictionEntity,
        UserServantEntity_o **userServantEntity,
        System_Int64_array **equipIdList,
        int32_t *isChangeFriendShipSvtEquipSkill,
        const MethodInfo *method)
{
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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_ICollection_o *list; // x23
  BalanceConfig_c *v38; // x0
  System_Int64_array *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  bool IsNullOrEmpty; // w0
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x27
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v45; // x1
  System_Collections_IEnumerator_c **v46; // x25
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **v47; // x26
  PartyListViewItem___c__DisplayClass60_0_c **v48; // x22
  const MethodInfo_32B1618 **v49; // x24
  System_Collections_Generic_IEnumerator_T__o *v50; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  System_Collections_IEnumerator_c *v52; // x1
  __int64 v53; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v56; // x8
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c *v57; // x1
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  __int64 v61; // x28
  __int64 v62; // x29
  __int64 v63; // x0
  __int64 v64; // x1
  __int64 v65; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v66; // x23
  const MethodInfo_32B1618 **v67; // x27
  PartyListViewItem___c__DisplayClass60_0_c **v68; // x24
  System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **v69; // x22
  System_Collections_IEnumerator_c **v70; // x26
  QuestRestrictionInfo_o *questRestrictionInfo; // x19
  int32_t v72; // w20
  int32_t v73; // w21
  int32_t v74; // w25
  ServantOverwriteStatus_o *OverwriteStatus; // x0
  __int64 v76; // x1
  _BOOL8 IsRestriction_42392700; // x0
  __int64 v78; // x1
  void *monitor; // x20
  Il2CppClass *v80; // x21
  QuestRestrictionInfo_o *v81; // x19
  __int64 v82; // x0
  __int64 v83; // x1
  int32_t v84; // w20
  __int64 v85; // x1
  int32_t v86; // w21
  __int64 DispLimitCount; // x0
  __int64 v88; // x1
  System_Int32_array *ServantIndividuality; // x0
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  _BOOL8 v92; // x0
  __int64 v93; // x1
  __int64 v94; // x2
  const MethodInfo *v95; // x3
  struct System_Int32_array *targetVals; // x19
  System_Func_int__bool__o *v97; // x20
  struct System_Object_array *items; // x8
  _QWORD *v99; // x9
  __int64 size; // x10
  Il2CppClass **v101; // x0
  __int64 v102; // x0
  __int64 v103; // x1
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  Il2CppObject *v106; // x1
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  Il2CppClass **v110; // x0
  System_Collections_Generic_IEnumerator_T__c *v111; // x8
  __int64 v112; // x9
  int *v113; // x10
  __int64 v114; // x0
  Il2CppObject *Item; // x0
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  System_Int64_array *EquipUserServantIdList; // x0
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  CGThumbnailListItem_o *v121; // [xsp+8h] [xbp-A8h]
  CGThumbnailListItem_o *v122; // [xsp+10h] [xbp-A0h]
  int32_t *v123; // [xsp+18h] [xbp-98h]
  System_Collections_Generic_List_object__o *v124; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_List_object__o *v125; // [xsp+28h] [xbp-88h]
  System_Collections_Generic_IEnumerator_T__o *v127; // [xsp+38h] [xbp-78h]
  Il2CppObject *entity; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16

  if ( (byte_4AFDA07 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, restrictionEntity);
    sub_1BC3008(&Method_BasicHelper_Any_int____76812400, v9);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__, v10);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantGrandMaster___, v11);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantMaster___, v12);
    sub_1BC3008(&DataManager_TypeInfo, v13);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v14);
    sub_1BC3008(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntityList__, v15);
    sub_1BC3008(&System_Func_int__bool__TypeInfo, v16);
    sub_1BC3008(&System_IDisposable_TypeInfo, v17);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo, v18);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v19);
    sub_1BC3008(&long___TypeInfo, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantGrandEntity__Add__, v21);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v22);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__, v23);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v24);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantGrandEntity__get_Count__, v25);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v26);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantGrandEntity__get_Item__, v27);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v28);
    sub_1BC3008(&System_Collections_Generic_List_UserServantGrandEntity__TypeInfo, v29);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
    sub_1BC3008(&Method_PartyListViewItem___c__DisplayClass60_0__GetGrandServantInfo_b__0__, v31);
    sub_1BC3008(&PartyListViewItem___c__DisplayClass60_0_TypeInfo, v32);
    byte_4AFDA07 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    goto LABEL_89;
  list = (System_Collections_ICollection_o *)Master_object->fields.list;
  *userServantEntity = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)userServantEntity, 0, v35, v36);
  v38 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v38 = BalanceConfig_TypeInfo;
  }
  v39 = (System_Int64_array *)sub_1BC30B0(long___TypeInfo, (unsigned int)v38->static_fields->GrandSvtEquipMax);
  *equipIdList = v39;
  sub_1BC2FAC((CGThumbnailListItem_o *)equipIdList, (int32_t)v39, v40, v41);
  *isChangeFriendShipSvtEquipSkill = 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(list, 0LL);
  if ( restrictionEntity && !IsNullOrEmpty )
  {
    v121 = (CGThumbnailListItem_o *)userServantEntity;
    v122 = (CGThumbnailListItem_o *)equipIdList;
    v123 = isChangeFriendShipSvtEquipSkill;
    v125 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantGrandEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v125,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantGrandEntity___ctor__);
    v124 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v124,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantMaster___);
    if ( !list )
      goto LABEL_89;
    v43 = Master_object;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_UserServantGrandEntity__GetEnumerator__);
    v127 = Enumerator;
    if ( !Enumerator )
      sub_1BC3264(0LL, v45);
    v46 = &System_Collections_IEnumerator_TypeInfo;
    v47 = &System_Collections_Generic_IEnumerator_UserServantGrandEntity__TypeInfo;
    v48 = &PartyListViewItem___c__DisplayClass60_0_TypeInfo;
    v49 = (const MethodInfo_32B1618 **)&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__;
    v50 = Enumerator;
    while ( 1 )
    {
      klass = v50->klass;
      v52 = *v46;
      v53 = *(unsigned __int16 *)(&v50->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v50->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != v52 )
        {
          --v53;
          p_offset += 4;
          if ( !v53 )
            goto LABEL_19;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_19:
        p_method = sub_1C13570(v50, v52, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              v50,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v56 = v50->klass;
      v57 = *v47;
      v58 = *(unsigned __int16 *)(&v50->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v50->klass->_2.bitflags2 + 3) )
      {
        v59 = &v56->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_UserServantGrandEntity__c **)v59 - 1) != v57 )
        {
          --v58;
          v59 += 4;
          if ( !v58 )
            goto LABEL_26;
        }
        v60 = (__int64)&v56->vtable[*v59].method;
      }
      else
      {
LABEL_26:
        v60 = sub_1C13570(v50, v57, 0LL);
      }
      v61 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v60)(
              v50,
              *(_QWORD *)(v60 + 8));
      v62 = sub_1BC3254(*v48);
      PartyListViewItem___c__DisplayClass60_0___ctor((PartyListViewItem___c__DisplayClass60_0_o *)v62, 0LL);
      if ( !v61 )
        sub_1BC3264(v63, v64);
      if ( !v43 )
        sub_1BC3264(v63, v64);
      if ( DataMasterBase_object__object__long___TryGetEntity(v43, &entity, *(_QWORD *)(v61 + 32), *v49) )
      {
        if ( !entity )
          sub_1BC3264(0LL, v65);
        v66 = v43;
        v67 = v49;
        v68 = v48;
        v69 = v47;
        v70 = v46;
        questRestrictionInfo = this->fields.questRestrictionInfo;
        v72 = *(_DWORD *)(v61 + 40);
        v73 = *(_DWORD *)(v61 + 44);
        v74 = *(_DWORD *)(v61 + 48);
        OverwriteStatus = UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)entity, 0LL, 0LL);
        if ( !OverwriteStatus )
          sub_1BC3264(0LL, v76);
        if ( !questRestrictionInfo )
          sub_1BC3264(OverwriteStatus, v76);
        IsRestriction_42392700 = QuestRestrictionInfo__IsRestriction_42392700(
                                   questRestrictionInfo,
                                   v72,
                                   v73,
                                   v74,
                                   OverwriteStatus->fields._Rarity_k__BackingField,
                                   *(_DWORD *)(v61 + 52),
                                   1,
                                   0LL);
        v46 = v70;
        v47 = v69;
        v48 = v68;
        v49 = v67;
        v43 = v66;
        v50 = v127;
        if ( !IsRestriction_42392700 )
        {
          if ( !entity )
            sub_1BC3264(IsRestriction_42392700, v78);
          v80 = entity[5].klass;
          monitor = entity[5].monitor;
          v81 = this->fields.questRestrictionInfo;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v130.fields.currentCryptoKey = v80;
          *(_QWORD *)&v130.fields.fakeValue = monitor;
          v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v130, 0LL);
          if ( !entity )
            sub_1BC3264(v82, v83);
          v84 = v82;
          v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
                  0LL);
          if ( !entity )
            sub_1BC3264(0LL, v85);
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0LL);
          if ( !v81 )
            sub_1BC3264(DispLimitCount, v88);
          ServantIndividuality = QuestRestrictionInfo__GetServantIndividuality(v81, v84, v86, DispLimitCount, 0LL);
          if ( !v62 )
            sub_1BC3264(ServantIndividuality, ServantIndividuality);
          *(_QWORD *)(v62 + 16) = ServantIndividuality;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v62 + 16), (int32_t)ServantIndividuality, v90, v91);
          v92 = BasicHelper__IsNullOrEmpty(
                  (System_Collections_ICollection_o *)restrictionEntity->fields.targetVals,
                  0LL);
          if ( v92 )
            goto LABEL_47;
          targetVals = restrictionEntity->fields.targetVals;
          if ( !targetVals )
            sub_1BC3264(v92, v93);
          if ( !targetVals->max_length )
            sub_1BC326C(v92, v93, v94);
          if ( !targetVals->m_Items[1]
            || (v97 = (System_Func_int__bool__o *)sub_1BC3254(System_Func_int__bool__TypeInfo),
                System_Func_int__bool____ctor(
                  v97,
                  (Il2CppObject *)v62,
                  Method_PartyListViewItem___c__DisplayClass60_0__GetGrandServantInfo_b__0__,
                  0LL),
                v92 = BasicHelper__Any_int__50245724(
                        targetVals,
                        (System_Func_T__bool__o *)v97,
                        (const MethodInfo_2FEB05C *)Method_BasicHelper_Any_int____76812400)) )
          {
LABEL_47:
            if ( !v125 )
              sub_1BC3264(v92, v93);
            items = v125->fields._items;
            v99 = Method_System_Collections_Generic_List_UserServantGrandEntity__Add__;
            ++v125->fields._version;
            if ( !items )
              sub_1BC3264(v92, v93);
            size = v125->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v125,
                (Il2CppObject *)v61,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
            }
            else
            {
              v101 = &items->obj.klass + size;
              v125->fields._size = size + 1;
              v101[4] = (Il2CppClass *)v61;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v101 + 4), v61, v94, v95);
            }
            if ( !v124 )
              sub_1BC3264(v102, v103);
            v106 = entity;
            v107 = v124->fields._items;
            v108 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
            ++v124->fields._version;
            if ( !v107 )
              sub_1BC3264(v102, v106);
            v109 = v124->fields._size;
            if ( (unsigned int)v109 >= v107->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v124,
                v106,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
            }
            else
            {
              v110 = &v107->obj.klass + v109;
              v124->fields._size = v109 + 1;
              v110[4] = (Il2CppClass *)v106;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v110 + 4), (int32_t)v106, v104, v105);
            }
          }
        }
      }
    }
    if ( v50 )
    {
      v111 = v50->klass;
      v112 = *(unsigned __int16 *)(&v50->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v50->klass->_2.bitflags2 + 3) )
      {
        v113 = &v111->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v113 - 1) != System_IDisposable_TypeInfo )
        {
          --v112;
          v113 += 4;
          if ( !v112 )
            goto LABEL_62;
        }
        v114 = (__int64)&v111->vtable[*v113].method;
      }
      else
      {
LABEL_62:
        v114 = sub_1C13570(v50, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v114)(v50, *(_QWORD *)(v114 + 8));
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__IsNullOrEmpty(
                                                                    (System_Collections_ICollection_o *)v125,
                                                                    0LL);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      if ( v125 )
      {
        if ( v125->fields._size > 1 )
          return;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v124;
        if ( v124 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v124,
                   0,
                   (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
          v121->klass = (CGThumbnailListItem_c *)Item;
          sub_1BC2FAC(v121, (int32_t)Item, v116, v117);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v125,
                                                                          0,
                                                                          (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_UserServantGrandEntity__get_Item__);
          if ( Master_object )
          {
            EquipUserServantIdList = UserServantGrandEntity__GetEquipUserServantIdList(
                                       (UserServantGrandEntity_o *)Master_object,
                                       0LL);
            v122->klass = (CGThumbnailListItem_c *)EquipUserServantIdList;
            sub_1BC2FAC(v122, (int32_t)EquipUserServantIdList, v119, v120);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_List_object___get_Item(
                                                                            v125,
                                                                            0,
                                                                            (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_UserServantGrandEntity__get_Item__);
            if ( Master_object )
            {
              *v123 = UserServantGrandEntity__IsChangeFriendShipSvtEquipSkill(
                        (UserServantGrandEntity_o *)Master_object,
                        0LL);
              return;
            }
          }
        }
      }
LABEL_89:
      sub_1BC3264(Master_object, v34);
    }
  }
}


System_Collections_Generic_List_int__o *__fastcall PartyListViewItem__GetGrandSvtIdListInParty(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *v6; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct PartyOrganizationListViewItem_array *memberList; // x23
  int max_length; // w8
  unsigned int v12; // w24
  PartyOrganizationListViewItem_o *v13; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_4AFDA19 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4AFDA19 = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( this->fields.questRestrictionInfo )
  {
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_22;
    max_length = memberList->max_length;
    if ( max_length >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= max_length )
          sub_1BC326C(questRestrictionInfo, v8, v9);
        v13 = memberList->m_Items[v12];
        if ( !v13 )
          break;
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          break;
        questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                                           questRestrictionInfo,
                                                           v13->fields._InitPos_k__BackingField,
                                                           0LL);
        if ( questRestrictionInfo
          && (v13->fields._IsGrandServant_k__BackingField || v13->fields._IsTempGrandServant_k__BackingField) )
        {
          SvtId = PartyOrganizationListViewItem__get_SvtId(v13, 0LL);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                             SvtId,
                                                             0LL);
          if ( !v6 )
            break;
          items = v6->fields._items;
          v16 = Method_System_Collections_Generic_List_int__Add__;
          ++v6->fields._version;
          if ( !items )
            break;
          size = v6->fields._size;
          v8 = (unsigned int)questRestrictionInfo;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v6,
              (int32_t)questRestrictionInfo,
              *(const MethodInfo_3683E1C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v6->fields._size = size + 1;
            items->m_Items[size + 1] = (int)questRestrictionInfo;
          }
        }
        max_length = memberList->max_length;
        if ( (int)++v12 >= max_length )
          return v6;
      }
LABEL_22:
      sub_1BC3264(questRestrictionInfo, v8);
    }
  }
  return v6;
}


GrandSvtInfo_array *__fastcall PartyListViewItem__GetGrandSvtInfoInParty(
        PartyListViewItem_o *this,
        PartyListViewItem_o *oldPartyItem,
        const MethodInfo *method)
{
  long double inited; // q0
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
  System_Collections_Generic_List_object__o *v19; // x21
  GrandGraphDetailMaster_o *Master_object; // x0
  __int64 v21; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x28
  unsigned __int64 v23; // x29
  __int64 v24; // x25
  __int64 v25; // x2
  const MethodInfo *v26; // x3
  PartyOrganizationListViewItem_o *v27; // x1
  __int64 v28; // x23
  RestrictionEntity_o *GrandServantRestrictionEntity; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x26
  RestrictionEntity_o *v31; // x24
  System_Func_object__bool__o *v32; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int v34; // w25
  __int64 v35; // x8
  __int64 v36; // x10
  int32_t v37; // w25
  __int128 v38; // q1
  System_Int64_array *v39; // x23
  int32_t grandGraphId; // w26
  int64_t v41; // x27
  GrandSvtInfo_o *v42; // x24
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  _QWORD *v50; // x19
  __int64 v51; // x8
  __int64 v52; // x0
  __int64 v53; // x0
  GrandGraphDetailMaster_o *v54; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+30h] [xbp-90h]
  GrandGraphDetailEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_4AFDA1A & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_Empty_GrandSvtInfo___, oldPartyItem);
    sub_1BC3008(&Method_DataManager_GetMaster_GrandGraphDetailMaster___, v6);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&Method_System_Linq_Enumerable_SingleOrDefault_PartyOrganizationListViewItem___, v8);
    sub_1BC3008(&System_Func_PartyOrganizationListViewItem__bool__TypeInfo, v9);
    sub_1BC3008(&GrandSvtInfo_TypeInfo, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_GrandSvtInfo__Add__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_GrandSvtInfo__ToArray__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_GrandSvtInfo___ctor__, v13);
    sub_1BC3008(&System_Collections_Generic_List_GrandSvtInfo__TypeInfo, v14);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1BC3008(&Method_PartyListViewItem___c__DisplayClass105_0__GetGrandSvtInfoInParty_b__0__, v17);
    sub_1BC3008(&PartyListViewItem___c__DisplayClass105_0_TypeInfo, v18);
    byte_4AFDA1A = 1;
  }
  entity = 0LL;
  if ( oldPartyItem && this->fields.questRestrictionInfo )
  {
    v19 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_GrandSvtInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_GrandSvtInfo___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (GrandGraphDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    memberList = this->fields.memberList;
    v54 = Master_object;
    if ( !memberList )
      goto LABEL_48;
    if ( (int)memberList->max_length >= 1 )
    {
      v23 = 0LL;
      while ( 1 )
      {
        v24 = sub_1BC3254(PartyListViewItem___c__DisplayClass105_0_TypeInfo);
        PartyListViewItem___c__DisplayClass105_0___ctor((PartyListViewItem___c__DisplayClass105_0_o *)v24, 0LL);
        if ( v23 >= memberList->max_length )
          sub_1BC326C(Master_object, v21, v25);
        if ( !v24 )
          break;
        v27 = memberList->m_Items[v23];
        *(_QWORD *)(v24 + 16) = v27;
        v28 = v24 + 16;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v24 + 16), (int32_t)v27, v25, v26);
        if ( !*(_QWORD *)(v24 + 16) )
          break;
        Master_object = (GrandGraphDetailMaster_o *)this->fields.questRestrictionInfo;
        if ( !Master_object )
          break;
        GrandServantRestrictionEntity = QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                          (QuestRestrictionInfo_o *)Master_object,
                                          *(_DWORD *)(*(_QWORD *)(v24 + 16) + 364LL),
                                          0LL);
        v30 = (System_Collections_Generic_IEnumerable_TSource__o *)oldPartyItem->fields.memberList;
        v31 = GrandServantRestrictionEntity;
        v32 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_PartyOrganizationListViewItem__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v32,
          (Il2CppObject *)v24,
          Method_PartyListViewItem___c__DisplayClass105_0__GetGrandSvtInfoInParty_b__0__,
          0LL);
        Master_object = (GrandGraphDetailMaster_o *)System_Linq_Enumerable__SingleOrDefault_object__50578272(
                                                      v30,
                                                      (System_Func_TSource__bool__o *)v32,
                                                      (const MethodInfo_303C360 *)Method_System_Linq_Enumerable_SingleOrDefault_PartyOrganizationListViewItem___);
        if ( Master_object && *((_BYTE *)&Master_object[5].fields.revision + 4) )
        {
          SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)Master_object, 0LL);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          Master_object = (GrandGraphDetailMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                        SvtId,
                                                        0LL);
          if ( !*(_QWORD *)v28 )
            break;
          v34 = (int)Master_object;
          v58 = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)*(_QWORD *)v28, 0LL);
          Master_object = (GrandGraphDetailMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                        v58,
                                                        0LL);
          if ( v31 && v34 == (_DWORD)Master_object )
          {
            if ( !*(_QWORD *)v28 )
              break;
            Master_object = v54;
            if ( !v54 )
              break;
            Master_object = (GrandGraphDetailMaster_o *)GrandGraphDetailMaster__TryGetEntityByBaseClassId(
                                                          v54,
                                                          &entity,
                                                          *(_DWORD *)(*(_QWORD *)v28 + 204LL),
                                                          0LL);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
            {
              Master_object = *(GrandGraphDetailMaster_o **)v28;
              if ( !*(_QWORD *)v28 )
                break;
              Master_object = (GrandGraphDetailMaster_o *)PartyOrganizationListViewItem__GetEquipList(
                                                            (PartyOrganizationListViewItem_o *)Master_object,
                                                            0LL);
              v35 = *(_QWORD *)v28;
              if ( !*(_QWORD *)v28 )
                break;
              if ( !entity )
                break;
              v36 = *(_QWORD *)(v35 + 112);
              if ( !v36 )
                break;
              v37 = *(_DWORD *)(v35 + 152);
              v38 = *(_OWORD *)(v36 + 32);
              v39 = (System_Int64_array *)Master_object;
              grandGraphId = entity->fields.grandGraphId;
              *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)(v36 + 16);
              *(_OWORD *)&v56.fields.fakeValue = v38;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v55 = v56;
              v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v55, 0LL);
              v42 = (GrandSvtInfo_o *)sub_1BC3254(GrandSvtInfo_TypeInfo);
              GrandSvtInfo___ctor(v42, grandGraphId, v41, v39, v37, 0LL);
              if ( !v19 )
                break;
              items = v19->fields._items;
              v46 = Method_System_Collections_Generic_List_GrandSvtInfo__Add__;
              ++v19->fields._version;
              if ( !items )
                break;
              size = v19->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v19,
                  (Il2CppObject *)v42,
                  *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
              }
              else
              {
                v48 = &items->obj.klass + size;
                v19->fields._size = size + 1;
                v48[4] = (Il2CppClass *)v42;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v42, v43, v44);
              }
            }
          }
        }
        if ( (__int64)++v23 >= (int)memberList->max_length )
          goto LABEL_36;
      }
LABEL_48:
      sub_1BC3264(Master_object, v21);
    }
LABEL_36:
    if ( !v19 )
      goto LABEL_48;
    return (GrandSvtInfo_array *)System_Collections_Generic_List_object___ToArray(
                                   v19,
                                   (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_GrandSvtInfo__ToArray__);
  }
  else
  {
    v50 = Method_System_Array_Empty_GrandSvtInfo___;
    v51 = *((_QWORD *)Method_System_Array_Empty_GrandSvtInfo___ + 7);
    if ( !v51 )
    {
      sub_1C134C8(Method_System_Array_Empty_GrandSvtInfo___);
      v51 = v50[7];
    }
    v52 = *(_QWORD *)(v51 + 16);
    if ( (*(_BYTE *)(v52 + 309) & 1) == 0 )
      v52 = sub_1C1346C(inited);
    if ( !*(_DWORD *)(v52 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v52);
    v53 = *(_QWORD *)(v50[7] + 16LL);
    if ( (*(_BYTE *)(v53 + 309) & 1) == 0 )
      v53 = sub_1C1346C(inited);
    return **(GrandSvtInfo_array ***)(v53 + 184);
  }
}


System_Boolean_array *__fastcall PartyListViewItem__GetIsFollowerList(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  System_Boolean_array *v7; // x20
  BalanceConfig_c *v8; // x0
  unsigned __int64 i; // x22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v11; // x8

  if ( (byte_4AFDA14 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&bool___TypeInfo, v3);
    byte_4AFDA14 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v7 = (System_Boolean_array *)sub_1BC30B0(bool___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
  v8 = BalanceConfig_TypeInfo;
  for ( i = 0LL; ; ++i )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= v8->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( i >= memberList->max_length )
      goto LABEL_18;
    v11 = memberList->m_Items[i];
    if ( v11 )
    {
      if ( !v7 )
LABEL_17:
        sub_1BC3264(v8, v5);
      if ( i >= v7->max_length )
LABEL_18:
        sub_1BC326C(v8, v5, v6);
      v7->m_Items[i + 4] = v11->fields.isFollower;
    }
  }
  return v7;
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
    sub_1BC3264(this, num);
  if ( memberList->max_length <= num )
    sub_1BC326C(this, *(_QWORD *)&num, method);
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
    sub_1BC3264(this, npcSvtIds);
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
        sub_1BC326C(myServantNumMax, npcSvtIds, method);
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
  __int64 v6; // x2
  int dialogMessageInfoDictionary; // w23
  PartyOrganizationListViewItem_o *v8; // x20
  il2cpp_array_size_t v9; // w24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o SvtId; // kr00_16
  int TotalCostRestriction; // w0
  QuestRestrictionInfo_o *v13; // x0
  int32_t FixedServantPositionCount; // w20
  il2cpp_array_size_t v15; // w25
  char v16; // w24
  char v17; // w22
  char v18; // w23
  struct PartyOrganizationListViewItem_array *v19; // x8
  Il2CppClass **v20; // x8
  Il2CppClass *v21; // x21
  bool v22; // w10
  int v23; // w8
  char v24; // w9
  char v25; // w10

  if ( (byte_4AFDA09 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4AFDA09 = 1;
  }
  menuKind = this->fields.menuKind;
  if ( menuKind == 1 )
    goto LABEL_4;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( menuKind == 3 )
  {
    if ( !questRestrictionInfo )
LABEL_47:
      sub_1BC3264(questRestrictionInfo, method);
    questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList(
                                                       questRestrictionInfo,
                                                       0LL);
    if ( questRestrictionInfo )
    {
      dialogMessageInfoDictionary = (int)questRestrictionInfo->fields.dialogMessageInfoDictionary;
      v8 = (PartyOrganizationListViewItem_o *)questRestrictionInfo;
      if ( dialogMessageInfoDictionary < 1 )
      {
LABEL_4:
        LODWORD(questRestrictionInfo) = 0;
        return (int)questRestrictionInfo;
      }
      v9 = 0;
      while ( 1 )
      {
        memberList = this->fields.memberList;
        if ( !memberList )
          goto LABEL_47;
        if ( v9 >= memberList->max_length )
          goto LABEL_48;
        questRestrictionInfo = (QuestRestrictionInfo_o *)memberList->m_Items[v9];
        if ( !questRestrictionInfo )
          goto LABEL_47;
        SvtId = PartyOrganizationListViewItem__get_SvtId((PartyOrganizationListViewItem_o *)questRestrictionInfo, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                                           SvtId,
                                                           0LL);
        if ( v9 >= v8->fields.sortIndex )
          goto LABEL_48;
        if ( (_DWORD)questRestrictionInfo != *((_DWORD *)&v8->fields.sortValue0 + (int)v9) )
          break;
        if ( dialogMessageInfoDictionary == ++v9 )
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
      v13 = this->fields.questRestrictionInfo;
      if ( !v13 )
        goto LABEL_4;
      FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(v13, 0LL);
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      while ( 1 )
      {
        questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( (signed int)v15 >= SHIDWORD(questRestrictionInfo->fields.uniqueSvtRestrictionEntity[2].fields.targetVals) )
          break;
        v19 = this->fields.memberList;
        if ( !v19 )
          goto LABEL_47;
        if ( v15 >= v19->max_length )
LABEL_48:
          sub_1BC326C(questRestrictionInfo, method, v6);
        v20 = &v19->obj.klass + (int)v15;
        v21 = v20[4];
        if ( !v21 )
          goto LABEL_47;
        if ( PartyOrganizationListViewItem__get_IsQuestRestriction((PartyOrganizationListViewItem_o *)v20[4], 0LL) )
        {
          LODWORD(questRestrictionInfo) = 18;
          return (int)questRestrictionInfo;
        }
        ++v15;
        v18 |= BYTE2(v21->_2.genericContainerHandle) != 0;
        v17 |= BYTE3(v21->_2.genericContainerHandle) != 0;
        FixedServantPositionCount -= BYTE6(v21->_2.genericContainerHandle) & 1;
        v16 |= BYTE4(v21->_2.genericContainerHandle) != 0;
      }
      if ( (v16 & 1) != 0 )
      {
        LODWORD(questRestrictionInfo) = 9;
        return (int)questRestrictionInfo;
      }
      v22 = FixedServantPositionCount > 0;
      v23 = FixedServantPositionCount <= 0 ? 12 : 10;
      v24 = v22 | v18;
      v25 = v17 | v22 | v18;
      LODWORD(questRestrictionInfo) = (v24 & 1) != 0 ? v23 : 13;
      if ( (v25 & 1) == 0 )
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
  PartyListViewItem___c__DisplayClass37_0_o *v15; // x21
  System_Func_object__bool__o *v16; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  int myServantNumMax; // [xsp+Ch] [xbp-64h]

  v4 = this;
  if ( (byte_4AFD9F6 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, fixNpcFollowerInfoList);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_FollowerInfo___, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_FollowerInfo___, v6);
    sub_1BC3008(&System_Func_FollowerInfo__bool__TypeInfo, v7);
    sub_1BC3008(&Method_PartyListViewItem___c__DisplayClass37_0__GetSupportInitIndex_b__0__, v8);
    this = (PartyListViewItem_o *)sub_1BC3008(&PartyListViewItem___c__DisplayClass37_0_TypeInfo, v9);
    byte_4AFD9F6 = 1;
  }
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_15:
    sub_1BC3264(this, fixNpcFollowerInfoList);
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
      v15 = (PartyListViewItem___c__DisplayClass37_0_o *)sub_1BC3254(PartyListViewItem___c__DisplayClass37_0_TypeInfo);
      PartyListViewItem___c__DisplayClass37_0___ctor(v15, 0LL);
      if ( !v15 )
        goto LABEL_15;
      v15->fields.chkIdx = ++v13;
      v16 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v16,
        (Il2CppObject *)v15,
        Method_PartyListViewItem___c__DisplayClass37_0__GetSupportInitIndex_b__0__,
        0LL);
      v17 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)fixNpcFollowerInfoList,
              (System_Func_TSource__bool__o *)v16,
              (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      if ( !System_Linq_Enumerable__Any_object_(
              v17,
              (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
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
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  ServantEntity_array *v8; // x20
  unsigned __int64 v9; // x24
  CGThumbnailListItem_o *i; // x21
  BalanceConfig_c *v11; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v13; // x8
  CGThumbnailListItem_c *servantEntity; // x22
  __int64 v16; // x0

  if ( (byte_4AFDA12 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&ServantEntity___TypeInfo, v3);
    byte_4AFDA12 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v8 = (ServantEntity_array *)sub_1BC30B0(ServantEntity___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
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
        sub_1BC3264(v11, v5);
      servantEntity = (CGThumbnailListItem_c *)v13->fields.servantEntity;
      if ( servantEntity )
      {
        v11 = (BalanceConfig_c *)sub_1BC3144(servantEntity, v8->obj.klass->_1.element_class);
        if ( !v11 )
        {
          v16 = sub_1BC3288();
          sub_1BC3130(v16, 0LL);
        }
      }
      if ( v9 >= v8->max_length )
LABEL_20:
        sub_1BC326C(v11, v5, v6);
      i->klass = servantEntity;
      sub_1BC2FAC(i, (int32_t)servantEntity, v6, v7);
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
  __int64 v6; // x2
  System_String_array *v7; // x20
  unsigned __int64 v8; // x23
  CGThumbnailListItem_o *i; // x21
  CGThumbnailListItem_c *SvtNameText; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v12; // x0
  const MethodInfo *v13; // x3

  if ( (byte_4AFDA13 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&string___TypeInfo, v3);
    byte_4AFDA13 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v7 = (System_String_array *)sub_1BC30B0(string___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
  v8 = 0LL;
  for ( i = (CGThumbnailListItem_o *)v7->m_Items; ; i = (CGThumbnailListItem_o *)((char *)i + 8) )
  {
    SvtNameText = (CGThumbnailListItem_c *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      SvtNameText = (CGThumbnailListItem_c *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v8 >= *((int *)SvtNameText->static_fields + 43) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( v8 >= memberList->max_length )
      goto LABEL_18;
    v12 = memberList->m_Items[v8];
    if ( v12 )
    {
      SvtNameText = (CGThumbnailListItem_c *)PartyOrganizationListViewItem__get_SvtNameText(v12, 0LL);
      if ( !v7 )
LABEL_17:
        sub_1BC3264(SvtNameText, v5);
      if ( v8 >= v7->max_length )
LABEL_18:
        sub_1BC326C(SvtNameText, v5, v6);
      i->klass = SvtNameText;
      sub_1BC2FAC(i, (int32_t)SvtNameText, v6, v13);
    }
    ++v8;
  }
  return v7;
}


int32_t __fastcall PartyListViewItem__GetTotalCost(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  il2cpp_array_size_t v8; // w23
  int32_t v9; // w20
  int64_t Entity; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v12; // x21
  int64_t userServantEntity; // x22
  Il2CppObject *Master_object; // x0
  __int128 v15; // q0
  __int128 v16; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x22
  int v18; // w20
  int32_t EquipCost; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-80h]

  if ( (byte_4AFDA10 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantMaster___, v4);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    byte_4AFDA10 = 1;
  }
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    Entity = (int64_t)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Entity = (int64_t)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v8 >= *(_DWORD *)(*(_QWORD *)(Entity + 184) + 172LL) )
      return v9;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_22;
    if ( v8 >= memberList->max_length )
      sub_1BC326C(Entity, method, v2);
    v12 = memberList->m_Items[v8];
    if ( !v12 )
LABEL_22:
      sub_1BC3264(Entity, method);
    userServantEntity = (int64_t)v12->fields.userServantEntity;
    if ( userServantEntity )
    {
      if ( !v12->fields._IsDisappearSvt_k__BackingField )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantMaster___);
        v16 = *(_OWORD *)(userServantEntity + 16);
        v15 = *(_OWORD *)(userServantEntity + 32);
        v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
        *(_OWORD *)&v22.fields.currentCryptoKey = v16;
        *(_OWORD *)&v22.fields.fakeValue = v15;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v21 = v22;
        Entity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v21, 0LL);
        if ( !v17 )
          goto LABEL_22;
        Entity = (int64_t)DataMasterBase_object__object__long___GetEntity(
                            v17,
                            Entity,
                            (const MethodInfo_32B15CC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        userServantEntity = Entity;
        if ( !Entity )
          goto LABEL_22;
      }
      Entity = (int64_t)UserServantEntity__GetOverwriteStatus(
                          (UserServantEntity_o *)userServantEntity,
                          this->fields.questRestrictionInfo,
                          0LL);
      if ( !Entity )
        goto LABEL_22;
      v18 = *(_DWORD *)(Entity + 28) + v9;
      EquipCost = PartyOrganizationListViewItem__get_EquipCost(v12, 0LL);
      v9 = v18 + (EquipCost & ~(EquipCost >> 31));
    }
    ++v8;
  }
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
  __int64 v36; // x2
  const MethodInfo *v37; // x3
  _DWORD *v38; // x0
  __int64 v41; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+40h] [xbp-80h]

  if ( (byte_4AFDA0B & 1) == 0 )
  {
    sub_1BC3008(&DeckServantData_TypeInfo, baseItem);
    sub_1BC3008(&DeckServant_TypeInfo, v5);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1BC3008(&UserDeckEntity_TypeInfo, v7);
    byte_4AFDA0B = 1;
  }
  v8 = sub_1BC3254(UserDeckEntity_TypeInfo);
  UserDeckEntity___ctor((UserDeckEntity_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_29;
  *(_QWORD *)(v8 + 16) = this->fields.id;
  *(_DWORD *)(v8 + 32) = this->fields.index + 1;
  deckName = this->fields.deckName;
  *(_QWORD *)(v8 + 40) = deckName;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v8 + 40), (int32_t)deckName, v11, v12);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_29;
  v15 = baseItem ? baseItem : this;
  max_length = memberList->max_length;
  userEquipId = v15->fields.userEquipId;
  v18 = (DeckServant_o *)sub_1BC3254(DeckServant_TypeInfo);
  DeckServant___ctor_40715848(v18, max_length, userEquipId, 0LL);
  *(_QWORD *)(v8 + 48) = v18;
  v19 = v8 + 48;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v8 + 48), (int32_t)v18, v20, v21);
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
      v27 = sub_1BC3254(DeckServantData_TypeInfo);
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
      *(_QWORD *)(v27 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v42, 0LL);
      *(_BYTE *)(v27 + 56) = v26->fields.isFollower;
      EquipList = PartyOrganizationListViewItem__GetEquipList(v26, 0LL);
      *(_QWORD *)(v27 + 40) = EquipList;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v27 + 40), (int32_t)EquipList, v31, v32);
      *(_DWORD *)(v27 + 76) = v26->fields._InitPos_k__BackingField;
      if ( !*(_QWORD *)v19 )
        break;
      v33 = *(_DWORD **)(*(_QWORD *)v19 + 16LL);
      if ( !v33 )
        break;
      v34 = sub_1BC3144(v27, *(_QWORD *)(*(_QWORD *)v33 + 64LL));
      if ( !v34 )
      {
        v41 = sub_1BC3288();
        sub_1BC3130(v41, 0LL);
      }
      if ( (unsigned int)(v25 - 1) < v33[6] )
      {
        v38 = &v33[2 * v24];
        *((_QWORD *)v38 + 4) = v27;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v38 + 8), v27, v36, v37);
        if ( (_DWORD)v23 == v25 )
          return (UserDeckEntity_o *)v8;
        v24 = v25;
        if ( v25++ < v22->max_length )
          continue;
      }
      sub_1BC326C(v34, v35, v36);
    }
LABEL_29:
    sub_1BC3264(v9, v10);
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
  __int64 v18; // x2
  struct PartyOrganizationListViewItem_array *v19; // x8
  unsigned __int64 v20; // x28
  unsigned __int64 v21; // x9
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  PartyOrganizationListViewItem_o *v23; // x22
  struct QuestRestrictionInfo_o *v24; // x8
  _BOOL4 isNpcEditablePos; // w23
  _BOOL4 IsEditablePos; // w0
  __int64 v27; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v29; // q0
  System_Int64_array *EquipList; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t InitPos_k__BackingField; // w8
  int v34; // w8
  unsigned int *v35; // x22
  const MethodInfo *v36; // x3
  unsigned int *v37; // x0
  __int64 v39; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41[2]; // [xsp+20h] [xbp-A0h] BYREF

  if ( (byte_4AFDA0C & 1) == 0 )
  {
    sub_1BC3008(&DeckServantData_TypeInfo, method);
    sub_1BC3008(&DeckServant_TypeInfo, v3);
    sub_1BC3008(&NetworkManager_TypeInfo, v4);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1BC3008(&UserEventDeckEntity_TypeInfo, v6);
    byte_4AFDA0C = 1;
  }
  memset(&v41[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v7 = sub_1BC3254(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor((UserEventDeckEntity_o *)v7, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v8);
    byte_4AFC1F1 = 1;
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
  v12 = (DeckServant_o *)sub_1BC3254(DeckServant_TypeInfo);
  max_length = memberList->max_length;
  v14 = v12;
  DeckServant___ctor_40715848(v12, max_length, userEquipId, 0LL);
  *(_QWORD *)(v7 + 32) = v14;
  v15 = v7 + 32;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)v14, v16, v17);
  v19 = this->fields.memberList;
  if ( !v19 )
LABEL_55:
    sub_1BC3264(IsUseOldMaster, v8);
  v20 = 0LL;
  while ( 1 )
  {
    v21 = v19->max_length;
    if ( (__int64)v20 >= (int)v21 )
      return (UserEventDeckEntity_o *)v7;
    if ( v20 >= v21 )
      goto LABEL_56;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v23 = v19->m_Items[v20];
    if ( !questRestrictionInfo )
    {
      isNpcEditablePos = 0;
      goto LABEL_28;
    }
    IsUseOldMaster = (NetworkManager_c *)QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
    v24 = this->fields.questRestrictionInfo;
    if ( ((unsigned __int8)IsUseOldMaster & 1) != 0 )
    {
      if ( !v24 )
        goto LABEL_55;
      isNpcEditablePos = v24->fields.isNpcEditablePos;
    }
    else
    {
      if ( !v23 || !v24 )
        goto LABEL_55;
      IsEditablePos = QuestRestrictionInfo__IsEditablePos(
                        this->fields.questRestrictionInfo,
                        v23->fields._InitPos_k__BackingField,
                        0LL);
      v24 = this->fields.questRestrictionInfo;
      isNpcEditablePos = IsEditablePos;
      if ( !v24 )
        goto LABEL_28;
    }
    IsUseOldMaster = (NetworkManager_c *)QuestRestrictionInfo__IsNpcMulitipleOrOnly(v24, 0LL);
    if ( ((unsigned __int8)IsUseOldMaster & 1) != 0 )
    {
      if ( !v23 )
        goto LABEL_55;
      if ( v23->fields.isFixNpc
        && v23->fields.isFollower
        && !isNpcEditablePos
        && !v23->fields.isMyServantOrNpcRestriction )
      {
        ++v20;
        goto LABEL_51;
      }
    }
LABEL_28:
    v27 = sub_1BC3254(DeckServantData_TypeInfo);
    DeckServantData___ctor((DeckServantData_o *)v27, 0LL);
    if ( !v27 )
      goto LABEL_55;
    *(_DWORD *)(v27 + 16) = v20 + 1;
    if ( !v23 )
      goto LABEL_55;
    userServantEntity = v23->fields.userServantEntity;
    if ( userServantEntity )
    {
      v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v41[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v41[1].fields.fakeValue = v29;
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
    *(_QWORD *)(v27 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v40, 0LL);
    *(_BYTE *)(v27 + 56) = v23->fields.isFollower;
    EquipList = PartyOrganizationListViewItem__GetEquipList(v23, 0LL);
    *(_QWORD *)(v27 + 40) = EquipList;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v27 + 40), (int32_t)EquipList, v31, v32);
    InitPos_k__BackingField = v23->fields._InitPos_k__BackingField;
    *(_QWORD *)(v27 + 64) = 0LL;
    *(_DWORD *)(v27 + 76) = InitPos_k__BackingField;
    if ( *(_QWORD *)(v27 + 24) )
    {
      v34 = 0;
LABEL_43:
      if ( (isNpcEditablePos & v34 & 1) != 0 )
      {
        *(_QWORD *)(v27 + 64) = v23->fields.npcFollowerSvtId;
        if ( v23->fields.isFixNpc )
          *(_BYTE *)(v27 + 56) = 0;
      }
      goto LABEL_46;
    }
    if ( !v23->fields.isMyServantOrNpcRestriction || !v23->fields.isFollower )
    {
      v34 = !v23->fields.isMyServantOrNpcRestriction;
      goto LABEL_43;
    }
    *(_QWORD *)(v27 + 64) = v23->fields.npcFollowerSvtId;
LABEL_46:
    *(_DWORD *)(v27 + 80) = v23->fields._EquipFriendShipSkillChange_k__BackingField;
    if ( !*(_QWORD *)v15 )
      goto LABEL_55;
    v35 = *(unsigned int **)(*(_QWORD *)v15 + 16LL);
    if ( !v35 )
      goto LABEL_55;
    IsUseOldMaster = (NetworkManager_c *)sub_1BC3144(v27, *(_QWORD *)(*(_QWORD *)v35 + 64LL));
    if ( !IsUseOldMaster )
    {
      v39 = sub_1BC3288();
      sub_1BC3130(v39, 0LL);
    }
    if ( v20 >= v35[6] )
LABEL_56:
      sub_1BC326C(IsUseOldMaster, v8, v18);
    v37 = &v35[2 * v20];
    *((_QWORD *)v37 + 4) = v27;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v37 + 8), v27, v18, v36);
    ++v20;
LABEL_51:
    v19 = this->fields.memberList;
    if ( !v19 )
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

  if ( (byte_4AFD9F4 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, userServantList);
    byte_4AFD9F4 = 1;
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
        sub_1BC3264(v6, userServantList);
      if ( i >= npcSvtIds->max_length )
LABEL_17:
        sub_1BC326C(v6, userServantList, npcSvtIds);
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


System_Collections_Generic_Dictionary_int__int__o *__fastcall PartyListViewItem__GetWearerMember(
        PartyListViewItem_o *this,
        int64_t userSvtId,
        int32_t memberIndex,
        int32_t editEquipIndex,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__int__o *v11; // x22
  System_Int64_array *EquipList; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t v16; // w23
  __int64 v17; // x27
  il2cpp_array_size_t max_length; // w9
  __int64 v19; // x8
  System_Int64_array *v20; // x24
  unsigned __int64 v21; // x25
  int64_t v22; // x8

  if ( (byte_4AFDA0E & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__TryAdd__, userSvtId);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v9);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10);
    byte_4AFDA0E = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v11,
    (const MethodInfo_32FF0D8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( userSvtId >= 1 )
  {
    memberList = this->fields.memberList;
    if ( !memberList )
LABEL_21:
      sub_1BC3264(EquipList, v13);
    v16 = 0;
    v17 = (unsigned int)editEquipIndex;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( v16 >= (int)max_length )
        break;
      if ( v16 >= max_length )
LABEL_23:
        sub_1BC326C(EquipList, v13, v14);
      EquipList = (System_Int64_array *)memberList->m_Items[v16];
      if ( EquipList )
      {
        EquipList = PartyOrganizationListViewItem__GetEquipList((PartyOrganizationListViewItem_o *)EquipList, 0LL);
        if ( EquipList )
        {
          v19 = *(_QWORD *)&EquipList->max_length;
          v20 = EquipList;
          if ( (int)v19 >= 1 )
          {
            v21 = 0LL;
            do
            {
              if ( v16 != memberIndex || v17 != v21 )
              {
                if ( v21 >= (unsigned int)v19 )
                  goto LABEL_23;
                v22 = v20->m_Items[v21];
                if ( v22 )
                {
                  if ( v22 == userSvtId )
                  {
                    if ( !v11 )
                      goto LABEL_21;
                    EquipList = (System_Int64_array *)System_Collections_Generic_Dictionary_int__int___TryAdd(
                                                        v11,
                                                        v16,
                                                        v21,
                                                        (const MethodInfo_330119C *)Method_System_Collections_Generic_Dictionary_int__int__TryAdd__);
                  }
                }
              }
              LODWORD(v19) = v20->max_length;
              ++v21;
            }
            while ( (__int64)v21 < (int)v19 );
          }
          memberList = this->fields.memberList;
          ++v16;
          if ( memberList )
            continue;
        }
      }
      goto LABEL_21;
    }
  }
  return v11;
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

  if ( (byte_4AFDA03 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    byte_4AFDA03 = 1;
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
    if ( v6 >= memberList->max_length )
      sub_1BC326C(v4, method, v2);
    v9 = memberList->m_Items[v6];
    if ( !v9 )
LABEL_12:
      sub_1BC3264(v4, method);
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

  if ( (byte_4AFDA02 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    byte_4AFDA02 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  for ( i = 0; ; ++i )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v4->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_15;
    if ( i >= memberList->max_length )
      sub_1BC326C(v4, method, v2);
    v7 = memberList->m_Items[i];
    if ( !v7 )
LABEL_15:
      sub_1BC3264(v4, method);
    if ( v7->fields.userServantEntity )
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
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  signed __int64 i; // x21
  signed __int64 DeckMemberMax; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x9
  PartyOrganizationListViewItem_o *v8; // x9

  if ( (byte_4AFDA18 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    byte_4AFDA18 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  for ( i = 0LL; ; ++i )
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
      sub_1BC3264(v4, method);
    if ( i >= (unsigned __int64)memberList->max_length )
      sub_1BC326C(v4, method, v2);
    v8 = memberList->m_Items[i];
    if ( v8 )
    {
      if ( v8->fields._IsDuplicateBonus_k__BackingField )
        break;
    }
  }
  return i < DeckMemberMax;
}


bool __fastcall PartyListViewItem__IsEquipEmpty(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  signed int v4; // w8
  PartyOrganizationListViewItem_o *v5; // x0
  signed int v6; // w21
  signed int classPassive_high; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int64_t EquipUserSvtId; // x0

  if ( (byte_4AFDA04 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    byte_4AFDA04 = 1;
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
    classPassive_high = HIDWORD(v5->fields.servantEntity->fields.classPassive);
    if ( v6 >= classPassive_high )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_12;
    if ( v6 >= memberList->max_length )
      sub_1BC326C(v5, method, v2);
    v5 = memberList->m_Items[v6];
    if ( !v5 )
LABEL_12:
      sub_1BC3264(v5, method);
    EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v5, 0LL);
    v4 = v6 + 1;
  }
  while ( EquipUserSvtId <= 0 );
  return v6 >= classPassive_high;
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
  if ( (byte_4AFDA0F & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1BC3008(
                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                    *(_QWORD *)&svtId);
    byte_4AFDA0F = 1;
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
          sub_1BC326C(this, *(_QWORD *)&svtId, method);
        this = (PartyListViewItem_o *)memberList->m_Items[v7];
        if ( !this )
          break;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)this, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(EquipSvtId, 0LL) == svtId;
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
      sub_1BC3264(this, *(_QWORD *)&svtId);
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
  __int64 v6; // x2
  bool IsUseOldMaster; // w21
  signed __int64 i; // x23
  signed __int64 targetVals_high; // x24
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v12; // x25
  struct QuestRestrictionInfo_o *v13; // x8

  if ( (byte_4AFD9F3 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, deck);
    byte_4AFD9F3 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_29:
    sub_1BC3264(questRestrictionInfo, deck);
  IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  for ( i = 0LL; ; ++i )
  {
    questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    }
    targetVals_high = SHIDWORD(questRestrictionInfo->fields.uniqueSvtRestrictionEntity[2].fields.targetVals);
    if ( i >= targetVals_high )
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
      sub_1BC326C(questRestrictionInfo, deck, v6);
    v12 = svts->m_Items[i];
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( IsUseOldMaster )
    {
      if ( !questRestrictionInfo )
        goto LABEL_29;
      questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsNpcMulitipleOrOnly(
                                                         questRestrictionInfo,
                                                         0LL);
      v13 = this->fields.questRestrictionInfo;
      if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_29;
        if ( !v13->fields.isNpcEditablePos )
        {
          if ( !v12 )
            goto LABEL_29;
LABEL_26:
          if ( v12->fields.initPos != v12->fields.id )
            return i < targetVals_high;
          continue;
        }
      }
      if ( !v12 || !v13 )
        goto LABEL_29;
      if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_42413184(
             this->fields.questRestrictionInfo,
             v12->fields.initPos,
             0LL) )
      {
        goto LABEL_26;
      }
    }
    else
    {
      if ( !v12 || !questRestrictionInfo )
        goto LABEL_29;
      if ( !QuestRestrictionInfo__IsEditablePos(questRestrictionInfo, v12->fields.initPos, 0LL) )
        goto LABEL_26;
    }
  }
  return i < targetVals_high;
}


bool __fastcall PartyListViewItem__IsSpecificMenuKind(PartyListViewItem_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    LOBYTE(questRestrictionInfo) = questRestrictionInfo->fields.eventDeckNum > 0;
  return (unsigned __int8)questRestrictionInfo | ((unsigned int)(this->fields.menuKind - 1) < 7);
}


bool __fastcall PartyListViewItem__IsSpecificMenuKind_33176836(
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

  if ( (byte_4AFDA01 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    byte_4AFDA01 = 1;
  }
  for ( i = 1; ; ++i )
  {
    v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
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
    sub_1BC326C(v5, method, v2);
  v5 = memberList->m_Items[0];
  if ( !v5 )
LABEL_16:
    sub_1BC3264(v5, method);
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v5, 0LL);
  PartyListViewItem__CheckRestriction(this, v8);
}


void __fastcall PartyListViewItem__Modify(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v4; // w8
  int i; // w22
  BalanceConfig_c *v6; // x0
  int v7; // w20
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v9; // x8
  PartyOrganizationListViewItem_o *v10; // x20
  PartyOrganizationListViewItem_o *v11; // x0
  int32_t cost; // w23
  const MethodInfo *v13; // x1

  if ( (byte_4AFD9F9 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    byte_4AFD9F9 = 1;
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
    if ( v7 >= memberList->max_length )
      sub_1BC326C(v6, method, v2);
    v9 = &memberList->obj.klass + v7;
    v10 = (PartyOrganizationListViewItem_o *)v9[4];
    if ( !v10 )
LABEL_12:
      sub_1BC3264(v6, method);
    v11 = (PartyOrganizationListViewItem_o *)v9[4];
    v10->fields._NowPos_k__BackingField = i;
    PartyOrganizationListViewItem__Modify(v11, 0LL);
    cost = this->fields.cost;
    v4 = PartyOrganizationListViewItem__get_MargeCost(v10, 0LL) + cost;
  }
  PartyListViewItem__CheckRestriction(this, method);
  PartyListViewItem__UpdateEventEffect(this, v13);
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
  __int64 v13; // x2
  const MethodInfo *v14; // x3
  int v15; // w23
  il2cpp_array_size_t v16; // w24
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

  if ( (byte_4AFD9FA & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, item);
    byte_4AFD9FA = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
LABEL_20:
    sub_1BC3264(v5, v6);
  *(_QWORD *)&this->fields.menuKind = *(_QWORD *)&item->fields.menuKind;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v7, v8);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v11, v12);
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
    if ( (signed int)v16 >= SHIDWORD(v5->fields.servantEntity->fields.classPassive) )
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
    v20 = v5;
    if ( v5 )
    {
      v5 = (PartyOrganizationListViewItem_o *)sub_1BC3144(v5, v18->obj.klass->_1.element_class);
      if ( !v5 )
      {
        v32 = sub_1BC3288();
        sub_1BC3130(v32, 0LL);
      }
    }
    if ( v16 >= v18->max_length )
      goto LABEL_21;
    v21 = &v18->obj.klass + (int)v16;
    v21[4] = (Il2CppClass *)v20;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v20, v13, v19);
    v22 = this->fields.memberList;
    if ( !v22 )
      goto LABEL_20;
    if ( v16 >= v22->max_length )
LABEL_21:
      sub_1BC326C(v5, v6, v13);
    v23 = v22->m_Items[v16];
    if ( !v23 )
      goto LABEL_20;
    v23->fields._NowPos_k__BackingField = v15++;
  }
  this->fields.cost = item->fields.cost;
  this->fields.isDeckNameDefault = item->fields.isDeckNameDefault;
  deckName = item->fields.deckName;
  this->fields.deckName = deckName;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.deckName, (int32_t)deckName, v13, v14);
  this->fields.userEquipId = item->fields.userEquipId;
  waveBattleEnemyClassIds = item->fields.waveBattleEnemyClassIds;
  this->fields.waveBattleEnemyClassIds = waveBattleEnemyClassIds;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.waveBattleEnemyClassIds,
    (int32_t)waveBattleEnemyClassIds,
    v26,
    v27);
  trendDispWaveBattleEnemyClassIds = item->fields.trendDispWaveBattleEnemyClassIds;
  this->fields.trendDispWaveBattleEnemyClassIds = trendDispWaveBattleEnemyClassIds;
  p_trendDispWaveBattleEnemyClassIds = &this->fields.trendDispWaveBattleEnemyClassIds;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)p_trendDispWaveBattleEnemyClassIds,
    (int32_t)trendDispWaveBattleEnemyClassIds,
    v30,
    v31);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)p_deckName, (int32_t)v3, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__SetEquip(
        PartyListViewItem_o *this,
        int32_t num,
        int64_t userSvtId,
        int32_t equipFrameIndex,
        const MethodInfo *method)
{
  il2cpp_array_size_t i; // w24
  BalanceConfig_c *v10; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v12; // x8
  PartyOrganizationListViewItem_o *v13; // x23
  int32_t cost; // w26
  int32_t v15; // w26
  int32_t v16; // w8

  if ( (byte_4AFD9FB & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&num);
    byte_4AFD9FB = 1;
  }
  for ( i = 0; ; ++i )
  {
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v10->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_15;
    if ( i >= memberList->max_length )
      sub_1BC326C(v10, *(_QWORD *)&num, userSvtId);
    v12 = &memberList->obj.klass + (int)i;
    v13 = (PartyOrganizationListViewItem_o *)v12[4];
    if ( !v13 )
LABEL_15:
      sub_1BC3264(v10, *(_QWORD *)&num);
    cost = this->fields.cost;
    if ( num == i )
    {
      this->fields.cost = cost
                        - PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)v12[4], 0LL);
      PartyOrganizationListViewItem__SetEquipUserServantId(v13, userSvtId, equipFrameIndex, 0LL);
      v15 = this->fields.cost;
      v16 = PartyOrganizationListViewItem__get_MargeCost(v13, 0LL) + v15;
    }
    else
    {
      v16 = cost
          - PartyOrganizationListViewItem__RemoveEquipUserServantId(
              (PartyOrganizationListViewItem_o *)v12[4],
              userSvtId,
              0LL);
    }
    this->fields.cost = v16;
  }
  PartyListViewItem__CheckRestriction(this, *(const MethodInfo **)&num);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__SetEquipRemoveIncludeSelf(
        PartyListViewItem_o *this,
        int32_t num,
        int64_t userSvtId,
        int32_t equipFrameIndex,
        const MethodInfo *method)
{
  il2cpp_array_size_t i; // w24
  BalanceConfig_c *v10; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  Il2CppClass **v12; // x8
  PartyOrganizationListViewItem_o *v13; // x23
  int32_t cost; // w26
  int32_t v15; // w26
  int32_t v16; // w26

  if ( (byte_4AFD9FC & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&num);
    byte_4AFD9FC = 1;
  }
  for ( i = 0; ; ++i )
  {
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= v10->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_14;
    if ( i >= memberList->max_length )
      sub_1BC326C(v10, *(_QWORD *)&num, userSvtId);
    v12 = &memberList->obj.klass + (int)i;
    v13 = (PartyOrganizationListViewItem_o *)v12[4];
    if ( !v13 )
LABEL_14:
      sub_1BC3264(v10, *(_QWORD *)&num);
    cost = this->fields.cost;
    v15 = cost
        - PartyOrganizationListViewItem__RemoveEquipUserServantId(
            (PartyOrganizationListViewItem_o *)v12[4],
            userSvtId,
            0LL);
    this->fields.cost = v15;
    if ( num == i )
    {
      this->fields.cost = v15 - PartyOrganizationListViewItem__get_MargeCost(v13, 0LL);
      PartyOrganizationListViewItem__SetEquipUserServantId(v13, userSvtId, equipFrameIndex, 0LL);
      v16 = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(v13, 0LL) + v16;
    }
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
    || (PartyOrganizationListViewItem__Modify_33387152((PartyOrganizationListViewItem_o *)this, item, 0LL),
        (v10 = v6->fields.memberList) == 0LL) )
  {
LABEL_11:
    sub_1BC3264(this, *(_QWORD *)&num);
  }
  if ( v10->max_length <= num )
LABEL_12:
    sub_1BC326C(this, *(_QWORD *)&num, item);
  this = (PartyListViewItem_o *)v10->m_Items[num];
  if ( !this )
    goto LABEL_11;
  v11 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0LL) + v11;
  PartyListViewItem__CheckRestriction(v6, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__SetMember_33238184(
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
  if ( memberList->max_length <= idx )
    goto LABEL_18;
  v6 = this;
  this = (PartyListViewItem_o *)memberList->m_Items[idx];
  if ( !this
    || (cost = v6->fields.cost,
        this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(
                                        (PartyOrganizationListViewItem_o *)this,
                                        0LL),
        v10 = v6->fields.memberList,
        v6->fields.cost = cost - (_DWORD)this,
        !v10) )
  {
LABEL_17:
    sub_1BC3264(this, *(_QWORD *)&idx);
  }
  if ( member )
  {
    this = (PartyListViewItem_o *)sub_1BC3144(member, v10->obj.klass->_1.element_class);
    if ( !this )
    {
      v15 = sub_1BC3288();
      sub_1BC3130(v15, 0LL);
    }
  }
  if ( v10->max_length <= idx )
    goto LABEL_18;
  v11 = &v10->obj.klass + idx;
  v11[4] = (Il2CppClass *)member;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v11 + 4), (int32_t)member, (int32_t)member, v9);
  if ( v6->fields.menuKind == 9 )
  {
    v12 = v6->fields.memberList;
    if ( !v12 )
      goto LABEL_17;
    if ( v12->max_length <= idx )
      goto LABEL_18;
    this = (PartyListViewItem_o *)v12->m_Items[idx];
    if ( !this )
      goto LABEL_17;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)this,
      v6->fields.waveBattleEnemyClassIds,
      0LL);
  }
  v13 = v6->fields.memberList;
  if ( !v13 )
    goto LABEL_17;
  if ( v13->max_length <= idx )
LABEL_18:
    sub_1BC326C(this, *(_QWORD *)&idx, member);
  this = (PartyListViewItem_o *)v13->m_Items[idx];
  if ( !this )
    goto LABEL_17;
  v14 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0LL) + v14;
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
  const MethodInfo *v23; // x3
  bool isWhole; // [xsp+Ch] [xbp-64h] BYREF

  isWhole = 0;
  if ( !npcFollowerInfoList )
LABEL_19:
    sub_1BC3264(this, follower);
  max_length = npcFollowerInfoList->max_length;
  v9 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = this;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1BC326C(this, follower, followerClassId);
      v15 = npcFollowerInfoList->m_Items[v14];
      if ( !v15 )
        goto LABEL_19;
      if ( v15->fields.npcFollowerSvtId == npcFollowerSvtId )
      {
        questRestrictionInfo = v13->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_19;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
        this = (PartyListViewItem_o *)FollowerInfo__getServantLeaderInfo(v15, 0, ReturnTypeByQuestId, 0LL);
        v18 = v13->fields.questRestrictionInfo;
        if ( !v18 )
          goto LABEL_19;
        v19 = (ServantLeaderInfo_o *)this;
        v20 = FollowerInfo__GetReturnTypeByQuestId(v18->fields.questId, 0LL);
        this = (PartyListViewItem_o *)FollowerInfo__GetNpcServantIndividualityFull(v15, 0, v20, 0LL);
        if ( !v19 )
          goto LABEL_19;
        v21 = v13->fields.questRestrictionInfo;
        v22 = this;
        this = (PartyListViewItem_o *)ServantLeaderInfo__GetOverwriteStatus(v19, 0LL);
        if ( !this || !v21 )
          goto LABEL_19;
        this = (PartyListViewItem_o *)QuestRestrictionInfo__IsRestriction_42394212(
                                        v21,
                                        &isWhole,
                                        (System_Int32_array *)v22,
                                        this->fields.sortIndex,
                                        v19->fields.lv,
                                        pos,
                                        3,
                                        0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          this = (PartyListViewItem_o *)v13->fields.questRestrictionInfo;
          if ( !this )
            goto LABEL_19;
          this = (PartyListViewItem_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_42416260(
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
    sub_1BC2FAC((CGThumbnailListItem_o *)follower, (int32_t)v15, (int32_t)followerClassId, v23);
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
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  Il2CppClass **v20; // x0
  const MethodInfo *v21; // x1
  __int64 v22; // x0

  if ( (byte_4AFD9FD & 1) == 0 )
  {
    sub_1BC3008(&PartyOrganizationListViewItem_TypeInfo, *(_QWORD *)&num);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v11);
    byte_4AFD9FD = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance
    || (PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, initPos, follower, 0LL),
        memberList = this->fields.memberList,
        setupInfo = this->fields.setupInfo,
        questRestrictionInfo = this->fields.questRestrictionInfo,
        v17 = (PartyOrganizationListViewItem_o *)sub_1BC3254(PartyOrganizationListViewItem_TypeInfo),
        PartyOrganizationListViewItem___ctor_33325708(
          v17,
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
          0LL),
        !memberList) )
  {
    sub_1BC3264(Instance, v13);
  }
  if ( v17 )
  {
    Instance = (Il2CppObject *)sub_1BC3144(v17, memberList->obj.klass->_1.element_class);
    if ( !Instance )
    {
      v22 = sub_1BC3288();
      sub_1BC3130(v22, 0LL);
    }
  }
  if ( memberList->max_length <= num )
    sub_1BC326C(Instance, v13, v18);
  v20 = &memberList->obj.klass + num;
  v20[4] = (Il2CppClass *)v17;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v17, v18, v19);
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
    sub_1BC326C(this, *(_QWORD *)&num1, *(_QWORD *)&num2);
  this = (PartyListViewItem_o *)memberList->m_Items[num1];
  if ( !this )
LABEL_7:
    sub_1BC3264(this, num1);
  PartyOrganizationListViewItem__Swap(
    (PartyOrganizationListViewItem_o *)this,
    memberList->m_Items[num2],
    notChangeInitPos,
    0LL);
}


void __fastcall PartyListViewItem__UpdateEventEffect(PartyListViewItem_o *this, const MethodInfo *method)
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
        sub_1BC326C(this, method, v2);
      this = (PartyListViewItem_o *)memberList->m_Items[v5];
      if ( !this )
        break;
      PartyOrganizationListViewItem__UpdateEventEffect((PartyOrganizationListViewItem_o *)this, 0LL);
      max_length = memberList->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_9:
    sub_1BC3264(this, method);
  }
}


void __fastcall PartyListViewItem__UpdateServantInfo(PartyListViewItem_o *this, const MethodInfo *method)
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
        sub_1BC326C(this, method, v2);
      v7 = &memberList->obj.klass + (int)v6;
      v8 = (PartyOrganizationListViewItem_o *)v7[4];
      if ( !v8 )
        break;
      PartyOrganizationListViewItem__UpdateServantInfo((PartyOrganizationListViewItem_o *)v7[4], 0LL);
      cost = v5->fields.cost;
      this = (PartyListViewItem_o *)PartyOrganizationListViewItem__get_MargeCost(v8, 0LL);
      v5->fields.cost = (_DWORD)this + cost;
      max_length = memberList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1BC3264(this, method);
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

  if ( (byte_4AFDA11 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_10170/*"PARTY_ORGANIZATION_NAME_BASE"*/, v3);
    byte_4AFDA11 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_10170/*"PARTY_ORGANIZATION_NAME_BASE"*/, 0LL);
  v7 = this->fields.index + 1;
  v5 = (Il2CppObject *)System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Format(v4, v5, 0LL);
}


System_Int64_array *__fastcall PartyListViewItem__get_DuplicatedEquipmentUserSvtIdList(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.duplicatedEquipmentUserSvtIdList;
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


void __fastcall PartyListViewItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4AFDA20 & 1) == 0 )
  {
    sub_1BC3008(&PartyListViewItem___c_TypeInfo, v1);
    byte_4AFDA20 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(PartyListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  PartyListViewItem___c_TypeInfo->static_fields->__9 = (struct PartyListViewItem___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)PartyListViewItem___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall PartyListViewItem___c___ctor(PartyListViewItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall PartyListViewItem___c___CheckAndUpdateDuplicationGrandQuestServant_b__110_0(
        PartyListViewItem___c_o *this,
        ServantEntity_o *e,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4AFDA24 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, e);
    byte_4AFDA24 = 1;
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
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(-1, 0LL);
    v5 = *(_QWORD *)&v6.fields.fakeValue;
    v4 = *(_QWORD *)&v6.fields.currentCryptoKey;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v8, 0LL);
}


int32_t __fastcall PartyListViewItem___c___CheckDuplicationGrandQuestEquipment_b__106_0(
        PartyListViewItem___c_o *this,
        System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___o pair,
        const MethodInfo *method)
{
  int32_t Item1; // w19

  Item1 = pair.fields.value.fields.Item1;
  if ( (byte_4AFDA21 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___get_Value__,
      pair.fields.key);
    byte_4AFDA21 = 1;
  }
  return Item1;
}


bool __fastcall PartyListViewItem___c___CheckDuplicationGrandQuestEquipment_b__106_1(
        PartyListViewItem___c_o *this,
        System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___o pair,
        const MethodInfo *method)
{
  struct System_ValueTuple_int__bool__o value; // x19

  value = pair.fields.value;
  if ( (byte_4AFDA22 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___get_Value__,
      pair.fields.key);
    byte_4AFDA22 = 1;
  }
  return HIDWORD(*(unsigned __int64 *)&value) & 1;
}


int64_t __fastcall PartyListViewItem___c___CheckDuplicationGrandQuestEquipment_b__106_2(
        PartyListViewItem___c_o *this,
        System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___o pair,
        const MethodInfo *method)
{
  int64_t key; // x19

  key = pair.fields.key;
  if ( (byte_4AFDA23 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_long__ValueTuple_int__bool___get_Key__, pair.fields.key);
    byte_4AFDA23 = 1;
  }
  return key;
}


void __fastcall PartyListViewItem___c__DisplayClass105_0___ctor(
        PartyListViewItem___c__DisplayClass105_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass105_0___GetGrandSvtInfoInParty_b__0(
        PartyListViewItem___c__DisplayClass105_0_o *this,
        PartyOrganizationListViewItem_o *member,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItem_o *memberItem; // x8

  if ( !member || (memberItem = this->fields.memberItem) == 0LL )
    sub_1BC3264(this, member);
  return member->fields._InitPos_k__BackingField == memberItem->fields._InitPos_k__BackingField;
}


void __fastcall PartyListViewItem___c__DisplayClass107_0___ctor(
        PartyListViewItem___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall PartyListViewItem___c__DisplayClass107_0___GetGrandQuestDuplicationEquipmentNameList_b__0(
        PartyListViewItem___c__DisplayClass107_0_o *this,
        int64_t id,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *userServantMaster; // x0

  if ( (byte_4AFDA25 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, id);
    byte_4AFDA25 = 1;
  }
  userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userServantMaster;
  if ( !userServantMaster
    || (userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                            userServantMaster,
                                                                            id,
                                                                            (const MethodInfo_32B15CC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0LL )
  {
    sub_1BC3264(userServantMaster, id);
  }
  return UserServantEntity__GetSvtName((UserServantEntity_o *)userServantMaster, 0LL);
}


void __fastcall PartyListViewItem___c__DisplayClass109_0___ctor(
        PartyListViewItem___c__DisplayClass109_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall PartyListViewItem___c__DisplayClass109_0___CheckDuplicationGrandServantEquipmentNameList_b__0(
        PartyListViewItem___c__DisplayClass109_0_o *this,
        int64_t id,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *userServantMaster; // x0

  if ( (byte_4AFDA26 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, id);
    byte_4AFDA26 = 1;
  }
  userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userServantMaster;
  if ( !userServantMaster
    || (userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___GetEntity(
                                                                            userServantMaster,
                                                                            id,
                                                                            (const MethodInfo_32B15CC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0LL )
  {
    sub_1BC3264(userServantMaster, id);
  }
  return UserServantEntity__GetSvtName((UserServantEntity_o *)userServantMaster, 0LL);
}


void __fastcall PartyListViewItem___c__DisplayClass31_0___ctor(
        PartyListViewItem___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass31_0____ctor_b__0(
        PartyListViewItem___c__DisplayClass31_0_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.npcFollowerSvtId == this->fields.npcSvtId;
}


void __fastcall PartyListViewItem___c__DisplayClass31_1___ctor(
        PartyListViewItem___c__DisplayClass31_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass31_1____ctor_b__1(
        PartyListViewItem___c__DisplayClass31_1_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}


void __fastcall PartyListViewItem___c__DisplayClass31_2___ctor(
        PartyListViewItem___c__DisplayClass31_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass31_2____ctor_b__2(
        PartyListViewItem___c__DisplayClass31_2_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}


void __fastcall PartyListViewItem___c__DisplayClass31_3___ctor(
        PartyListViewItem___c__DisplayClass31_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass31_3____ctor_b__3(
        PartyListViewItem___c__DisplayClass31_3_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}


void __fastcall PartyListViewItem___c__DisplayClass36_0___ctor(
        PartyListViewItem___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass36_0___GetFollowerIndex_b__0(
        PartyListViewItem___c__DisplayClass36_0_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIndex;
}


void __fastcall PartyListViewItem___c__DisplayClass37_0___ctor(
        PartyListViewItem___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass37_0___GetSupportInitIndex_b__0(
        PartyListViewItem___c__DisplayClass37_0_o *this,
        FollowerInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}


void __fastcall PartyListViewItem___c__DisplayClass60_0___ctor(
        PartyListViewItem___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyListViewItem___c__DisplayClass60_0___GetGrandServantInfo_b__0(
        PartyListViewItem___c__DisplayClass60_0_o *this,
        int32_t classIndividuality,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Int32_array *individuality; // x19
  System_Func_int__bool__o *v12; // x20

  if ( (byte_4AFDA27 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_int____76812400, *(_QWORD *)&classIndividuality);
    sub_1BC3008(&System_Func_int__bool__TypeInfo, v5);
    sub_1BC3008(&Method_PartyListViewItem___c__DisplayClass60_1__GetGrandServantInfo_b__1__, v6);
    sub_1BC3008(&PartyListViewItem___c__DisplayClass60_1_TypeInfo, v7);
    byte_4AFDA27 = 1;
  }
  v8 = sub_1BC3254(PartyListViewItem___c__DisplayClass60_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BC3264(v9, v10);
  *(_DWORD *)(v8 + 16) = classIndividuality;
  individuality = this->fields.individuality;
  v12 = (System_Func_int__bool__o *)sub_1BC3254(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_PartyListViewItem___c__DisplayClass60_1__GetGrandServantInfo_b__1__,
    0LL);
  return BasicHelper__Any_int__50245724(
           individuality,
           (System_Func_T__bool__o *)v12,
           (const MethodInfo_2FEB05C *)Method_BasicHelper_Any_int____76812400);
}


void __fastcall PartyListViewItem___c__DisplayClass60_1___ctor(
        PartyListViewItem___c__DisplayClass60_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall PartyListViewItem___c__DisplayClass60_1___GetGrandServantInfo_b__1(
        PartyListViewItem___c__DisplayClass60_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.classIndividuality == x;
}