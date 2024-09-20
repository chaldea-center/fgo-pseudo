void __fastcall PartyListViewItem___ctor(PartyListViewItem_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct PartyOrganizationListViewItem_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A56F6A & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItem___TypeInfo);
    byte_4A56F6A = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct PartyOrganizationListViewItem_array *)sub_1B88658(
                                                       PartyOrganizationListViewItem___TypeInfo,
                                                       (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.memberList = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.memberList, (int32_t)v4, v5, v6);
}


void __fastcall PartyListViewItem___ctor_31912968(
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
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  PartyOrganizationListViewItem_o *Instance; // x0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  struct DeckServant_o *deckInfo; // x8
  int32_t FollowerIndex; // w0
  BalanceConfig_c *v28; // x8
  int32_t DeckMainMemberMax; // w23
  struct PartyOrganizationListViewItem_array *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  UserServantEntity_array *v33; // x20
  int32_t v34; // w29
  struct DeckServant_o *v35; // x8
  struct DeckServantData_array *svts; // x8
  int32_t max_length; // w9
  DeckServantData_o *v38; // x8
  int32_t initPos; // w25
  int v40; // w9
  struct PartyOrganizationListViewItem_array *v41; // x19
  PartyOrganizationListViewItem_o *v42; // x0
  PartyOrganizationListViewItem_o *v43; // x22
  int32_t v44; // w2
  int32_t v45; // w3
  PartyListViewItem_o *v46; // x26
  QuestRestrictionInfo_o *v47; // x21
  UserServantEntity_o *v48; // x28
  struct PartyOrganizationListViewItem_array *v49; // x20
  System_Int64_array *EquipList; // x19
  PartyOrganizationListViewItem_o *v51; // x0
  UserServantEntity_o *v52; // x2
  Il2CppClass **v53; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v56; // x0
  int32_t v59; // [xsp+2Ch] [xbp-84h]
  UserServantEntity_array *UserServantList; // [xsp+38h] [xbp-78h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+40h] [xbp-70h]
  int32_t v63; // [xsp+4Ch] [xbp-64h]

  v12 = questRestrictionInfo;
  if ( (byte_4A56F6B & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItem___TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A56F6B = 1;
  }
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v19, v20);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v21,
    v22);
  if ( !deck )
    goto LABEL_53;
  PartyListViewItem__SetDeckName(this, deck->fields.name, v25);
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_53;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.id;
  UserServantList = UserDeckEntity__GetUserServantList(deck, 0LL);
  FollowerIndex = UserDeckEntity__GetFollowerIndex(deck, 0LL);
  v28 = BalanceConfig_TypeInfo;
  if ( FollowerIndex <= 0 )
  {
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v28 = BalanceConfig_TypeInfo;
    }
    DeckMainMemberMax = v28->static_fields->DeckMainMemberMax;
  }
  else
  {
    DeckMainMemberMax = FollowerIndex;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = BalanceConfig_TypeInfo;
  }
  v30 = (struct PartyOrganizationListViewItem_array *)sub_1B88658(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v28->static_fields->DeckMemberMax);
  this->fields.memberList = v30;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.memberList, (int32_t)v30, v31, v32);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  v33 = UserServantList;
  if ( *(_QWORD *)&Instance->fields.sortIndex )
  {
    Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      follower = *(FollowerInfo_o **)&Instance->fields.sortIndex;
      Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        followerClassId = Instance->fields.sortValue0;
        Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          followerDeckId = HIDWORD(Instance->fields.sortValue0);
          goto LABEL_18;
        }
      }
    }
LABEL_53:
    sub_1B8880C(Instance, v24);
  }
LABEL_18:
  v34 = 0;
  v59 = DeckMainMemberMax;
  while ( 1 )
  {
    Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( v34 >= *(_DWORD *)(*(_QWORD *)&Instance->fields.classId + 156LL) )
      break;
    v35 = deck->fields.deckInfo;
    if ( !v35 )
      goto LABEL_53;
    svts = v35->fields.svts;
    if ( !svts )
      goto LABEL_53;
    max_length = svts->max_length;
    if ( v34 >= max_length )
    {
      v40 = v34 + 1;
      initPos = v34 + 1;
    }
    else
    {
      if ( v34 >= (unsigned int)max_length )
        goto LABEL_54;
      v38 = svts->m_Items[v34];
      if ( !v38 )
        goto LABEL_53;
      initPos = v38->fields.initPos;
      v40 = v34 + 1;
    }
    v63 = v40;
    if ( v40 == DeckMainMemberMax )
    {
      v41 = *p_memberList;
      v42 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
      v43 = v42;
      if ( follower )
      {
        PartyOrganizationListViewItem___ctor_32029524(
          v42,
          v34,
          follower,
          followerClassId,
          setupInfo,
          v12,
          friendPointCampaignEntityList,
          0,
          followerDeckId,
          initPos,
          0LL);
        if ( !v41 )
          goto LABEL_53;
      }
      else
      {
        PartyOrganizationListViewItem___ctor_32066372(v42, v34, 1, setupInfo, v12, 1, initPos, 0LL);
        if ( !v41 )
          goto LABEL_53;
      }
      if ( v43 )
      {
        Instance = (PartyOrganizationListViewItem_o *)sub_1B886EC(v43, v41->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_55;
      }
      if ( v34 >= v41->max_length )
        goto LABEL_54;
      v53 = &v41->obj.klass + v34;
    }
    else
    {
      if ( !v33 )
        goto LABEL_53;
      if ( v34 >= v33->max_length )
        goto LABEL_54;
      v46 = this;
      v47 = v12;
      v48 = v33->m_Items[v34];
      v49 = *p_memberList;
      if ( v48 )
      {
        EquipList = UserDeckEntity__GetEquipList(deck, v34, 0LL);
        v51 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
        v52 = v48;
        v43 = v51;
        v12 = v47;
        PartyOrganizationListViewItem___ctor_32057164(
          v51,
          v34,
          v52,
          EquipList,
          setupInfo,
          v47,
          0LL,
          initPos,
          0LL,
          0,
          0LL);
        if ( !v49 )
          goto LABEL_53;
      }
      else
      {
        v43 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
        v12 = v47;
        PartyOrganizationListViewItem___ctor_32066372(v43, v34, 0, setupInfo, v47, 1, initPos, 0LL);
        if ( !v49 )
          goto LABEL_53;
      }
      this = v46;
      if ( v43 )
      {
        Instance = (PartyOrganizationListViewItem_o *)sub_1B886EC(v43, v49->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_55:
          v56 = sub_1B88830();
          sub_1B886D8(v56, 0LL);
        }
      }
      if ( v34 >= v49->max_length )
        goto LABEL_54;
      v53 = &v49->obj.klass + v34;
      v33 = UserServantList;
      DeckMainMemberMax = v59;
    }
    v53[4] = (Il2CppClass *)v43;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v53 + 4), (int32_t)v43, v44, v45);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_53;
    if ( v34 >= memberList->max_length )
LABEL_54:
      sub_1B88814(Instance, v24);
    Instance = memberList->m_Items[v34];
    if ( !Instance )
      goto LABEL_53;
    cost = this->fields.cost;
    v34 = v63;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(Instance, 0LL) + cost;
  }
  PartyListViewItem__CheckRestriction(this, v24);
}


void __fastcall PartyListViewItem___ctor_31915540(
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
  int32_t v19; // w2
  int32_t v20; // w3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x1
  struct System_String_o *DefaultDeckName; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 Instance; // x0
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo *v32; // x3
  int32_t FollowerIndex; // w25
  BalanceConfig_c *v34; // x0
  PartyListViewItem_o *v35; // x24
  int v36; // w27
  const MethodInfo *v37; // x2
  int32_t v38; // w23
  BalanceConfig_c *v39; // x0
  struct PartyOrganizationListViewItem_array *v40; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x28
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w8
  const MethodInfo *v45; // x2
  unsigned int v46; // w24
  struct DeckServant_o *v47; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v49; // x8
  int32_t *p_initPos; // x8
  int32_t initPos; // w19
  const MethodInfo *v52; // x6
  int v53; // w25
  struct DeckServant_o *v54; // x8
  struct DeckServantData_array *v55; // x8
  DeckServantData_o *v56; // x8
  _BOOL4 v57; // w27
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *v59; // x23
  int32_t v60; // w27
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v62; // x26
  int32_t v63; // w29
  PartyOrganizationListViewItem_o *v64; // x25
  int32_t v65; // w2
  int32_t v66; // w3
  ServantStatusBattleListViewItem_o *v67; // x0
  FollowerInfo_o *v68; // x23
  struct PartyOrganizationListViewItem_array *v69; // x29
  int32_t v70; // w27
  UserServantEntity_array *v71; // x26
  Il2CppClass **v72; // x25
  Il2CppClass *v73; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v74; // x25
  Il2CppClass *v75; // t1
  Il2CppClass *parent; // x23
  Il2CppClass *declaringType; // x27
  int32_t v78; // w23
  int32_t v79; // w27
  int32_t DispLimitCount; // w0
  int32_t v81; // w2
  int32_t v82; // w3
  UserServantEntity_o *v83; // x23
  struct PartyOrganizationListViewItem_array *v84; // x26
  System_Int64_array *EquipList; // x27
  PartyOrganizationListViewItem_o *v86; // x0
  Il2CppClass **v87; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v90; // x1
  __int64 v91; // x0
  bool *v92; // [xsp+20h] [xbp-C0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+30h] [xbp-B0h]
  UserServantEntity_array *UserServantList; // [xsp+38h] [xbp-A8h]
  int v96; // [xsp+40h] [xbp-A0h]
  int v97; // [xsp+44h] [xbp-9Ch]
  PartyListViewItem_o *v98; // [xsp+48h] [xbp-98h]
  int32_t v100; // [xsp+60h] [xbp-80h]
  _BOOL4 v101; // [xsp+64h] [xbp-7Ch]
  int32_t followerClassIda; // [xsp+74h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16

  if ( (byte_4A56F6C & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItem___TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A56F6C = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v19, v20);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v22,
    v23);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v24);
  this->fields.deckName = DefaultDeckName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.deckName, (int32_t)DefaultDeckName, v26, v27);
  if ( !deck )
    goto LABEL_110;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_110;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v30) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_110;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0LL);
  }
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0LL, v32);
  if ( FollowerIndex <= 0 )
  {
    v34 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v34 = BalanceConfig_TypeInfo;
    }
    FollowerIndex = v34->static_fields->DeckMainMemberMax;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  if ( *(int *)(Instance + 48) < 1 )
  {
    v35 = 0LL;
    v36 = 0;
    v101 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    v35 = *(PartyListViewItem_o **)(Instance + 72);
    v36 = 0;
    v101 = v35 == 0LL;
    if ( follower && v35 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_110;
      v36 = *(_DWORD *)(Instance + 48);
      Instance = (__int64)PartyListViewItem__GetMember(v35, v36 - 1, v37);
      if ( !Instance )
        goto LABEL_110;
      v38 = *(_DWORD *)(Instance + 348);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_110;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v38, follower, 0LL);
      v101 = 0;
    }
  }
  v39 = BalanceConfig_TypeInfo;
  v92 = isBaseModify;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v39 = BalanceConfig_TypeInfo;
  }
  v40 = (struct PartyOrganizationListViewItem_array *)sub_1B88658(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v39->static_fields->DeckMemberMax);
  this->fields.memberList = v40;
  p_memberList = &this->fields.memberList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.memberList, (int32_t)v40, v42, v43);
  this->fields.cost = 0;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    follower = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    followerClassId = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    v44 = *(_DWORD *)(Instance + 36);
  }
  else
  {
    v44 = followerDeckId;
  }
  v100 = v44;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || (v98 = v35, !Instance) )
LABEL_110:
    sub_1B8880C(Instance, v29);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)Instance,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0LL);
  v46 = 0;
  v96 = v36 - 1;
  v97 = FollowerIndex - 1;
  while ( 1 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v46 >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 156LL) )
      break;
    if ( v101 )
    {
      v47 = deck->fields.deckInfo;
      if ( !v47 )
        goto LABEL_110;
      svts = v47->fields.svts;
      if ( !svts )
        goto LABEL_110;
      if ( v46 >= svts->max_length )
        goto LABEL_114;
      v49 = svts->m_Items[v46];
      if ( !v49 )
        goto LABEL_110;
      p_initPos = &v49->fields.initPos;
    }
    else
    {
      Instance = (__int64)PartyListViewItem__GetMember(v98, v46, v45);
      if ( !Instance )
        goto LABEL_110;
      p_initPos = (int32_t *)(Instance + 348);
    }
    initPos = *p_initPos;
    followera = 0LL;
    followerClassIda = 0;
    if ( !questRestrictionInfo )
      goto LABEL_110;
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(questRestrictionInfo, initPos, 0LL);
    v53 = Instance;
    if ( (Instance & 1) != 0 )
    {
      v54 = deck->fields.deckInfo;
      if ( !v54 )
        goto LABEL_110;
      v55 = v54->fields.svts;
      if ( !v55 )
        goto LABEL_110;
      if ( v46 >= v55->max_length )
        goto LABEL_114;
      v56 = v55->m_Items[v46];
      if ( !v56 )
        goto LABEL_110;
      v57 = 0;
      if ( v96 != v46 )
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
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                          (PartyOrganizationUtility_o *)Instance,
                          initPos,
                          0LL);
    if ( !Instance || ((v53 ^ 1) & 1) != 0 )
    {
      if ( v97 != v46 && !v57 )
      {
        if ( (v53 & 1) != 0 )
        {
          v71 = UserServantList;
          if ( !UserServantList )
            goto LABEL_110;
          if ( v46 >= UserServantList->max_length )
            goto LABEL_114;
          v72 = &UserServantList->obj.klass + (int)v46;
          v75 = v72[4];
          v74 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v72 + 4);
          v73 = v75;
          if ( v75 )
          {
            declaringType = v73->_1.declaringType;
            parent = v73->_1.parent;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v104.fields.currentCryptoKey = declaringType;
            *(_QWORD *)&v104.fields.fakeValue = parent;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v104, 0LL);
            if ( v46 >= UserServantList->max_length )
              goto LABEL_114;
            if ( !*v74 )
              goto LABEL_110;
            v78 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*v74)[6], 0LL);
            if ( v46 >= UserServantList->max_length )
              goto LABEL_114;
            v79 = Instance;
            Instance = (__int64)*v74;
            if ( !*v74 )
              goto LABEL_110;
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
              if ( v46 >= UserServantList->max_length )
                goto LABEL_114;
              *v74 = 0LL;
              sub_1B88554((ServantStatusBattleListViewItem_o *)v74, 0, v81, v82);
            }
          }
        }
        else
        {
          v71 = UserServantList;
          if ( !UserServantList )
            goto LABEL_110;
        }
        if ( v46 >= v71->max_length )
          goto LABEL_114;
        v83 = v71->m_Items[v46];
        v84 = *p_memberList;
        if ( v83 )
        {
          EquipList = UserEventDeckEntity__GetEquipList(deck, v46, 0LL);
          v64 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32057164(
            v64,
            v46,
            v83,
            EquipList,
            setupInfo,
            questRestrictionInfo,
            0LL,
            initPos,
            0LL,
            0,
            0LL);
          if ( !v84 )
            goto LABEL_110;
        }
        else
        {
          v64 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32066372(v64, v46, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
          if ( !v84 )
            goto LABEL_110;
        }
        if ( v64 )
        {
          Instance = sub_1B886EC(v64, v84->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_115:
            v91 = sub_1B88830();
            sub_1B886D8(v91, 0LL);
          }
        }
        if ( v46 >= v84->max_length )
          goto LABEL_114;
        v87 = &v84->obj.klass + (int)v46;
      }
      else
      {
        v68 = followera;
        v69 = *p_memberList;
        if ( followera )
        {
          v70 = followerClassIda;
          v64 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32029524(
            v64,
            v46,
            v68,
            v70,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v100,
            initPos,
            0LL);
LABEL_94:
          if ( !v69 )
            goto LABEL_110;
        }
        else
        {
          v86 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
          v64 = v86;
          if ( follower )
          {
            PartyOrganizationListViewItem___ctor_32029524(
              v86,
              v46,
              follower,
              followerClassId,
              setupInfo,
              questRestrictionInfo,
              friendPointCampaignEntityList,
              0,
              v100,
              initPos,
              0LL);
            goto LABEL_94;
          }
          PartyOrganizationListViewItem___ctor_32066372(v86, v46, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
          if ( !v69 )
            goto LABEL_110;
        }
        if ( v64 )
        {
          Instance = sub_1B886EC(v64, v69->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_115;
        }
        if ( v46 >= v69->max_length )
          goto LABEL_114;
        v87 = &v69->obj.klass + (int)v46;
      }
      v67 = (ServantStatusBattleListViewItem_o *)(v87 + 4);
      goto LABEL_105;
    }
    v59 = (FollowerInfo_o *)Instance;
    if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0LL) )
      v60 = 0;
    else
      v60 = followerClassId;
    IsNpc = FollowerInfo__get_IsNpc(v59, 0LL);
    v62 = *p_memberList;
    if ( IsNpc )
      v63 = 0;
    else
      v63 = v100;
    v64 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_32029524(
      v64,
      v46,
      v59,
      v60,
      setupInfo,
      questRestrictionInfo,
      friendPointCampaignEntityList,
      0,
      v63,
      initPos,
      0LL);
    if ( !v62 )
      goto LABEL_110;
    if ( v64 )
    {
      Instance = sub_1B886EC(v64, v62->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_115;
    }
    if ( v46 >= v62->max_length )
      goto LABEL_114;
    v67 = (ServantStatusBattleListViewItem_o *)&v62->m_Items[v46];
LABEL_105:
    v67->klass = (ServantStatusBattleListViewItem_c *)v64;
    sub_1B88554(v67, (int32_t)v64, v65, v66);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_110;
    if ( v46 >= memberList->max_length )
LABEL_114:
      sub_1B88814(Instance, v29);
    Instance = (__int64)memberList->m_Items[v46];
    if ( !Instance )
      goto LABEL_110;
    cost = this->fields.cost;
    ++v46;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, v29);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v90) )
    *v92 = 1;
}


void __fastcall PartyListViewItem___ctor_31920516(
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
  int32_t v20; // w2
  int32_t v21; // w3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x24
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x1
  struct System_String_o *DefaultDeckName; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 Instance; // x0
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x2
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo_3739B38 **v33; // x28
  PartyListViewItem_o *v34; // x27
  unsigned int v35; // w25
  const MethodInfo *v36; // x2
  int32_t v37; // w19
  int32_t v38; // w8
  BalanceConfig_c *v39; // x0
  struct PartyOrganizationListViewItem_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w8
  FollowerInfo_array *QuestFollowerList; // x0
  const MethodInfo *v45; // x2
  unsigned int *v46; // x23
  __int64 v47; // x8
  unsigned __int64 v48; // x24
  __int64 v49; // x25
  int32_t *p_initPos; // x8
  struct DeckServant_o *v51; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v53; // x8
  int32_t initPos; // w25
  unsigned __int64 max_length; // x8
  UserServantEntity_o *v56; // x9
  __int64 v57; // x20
  __int64 v58; // x26
  int32_t v59; // w2
  int32_t v60; // w3
  __int64 v61; // x20
  const MethodInfo *v62; // x6
  int v63; // w26
  struct DeckServant_o *v64; // x8
  struct DeckServantData_array *v65; // x8
  DeckServantData_o *v66; // x8
  _BOOL4 v67; // w27
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *v69; // x20
  PartyListViewItem_o *v70; // x23
  const MethodInfo_3739B38 **v71; // x21
  UserEventDeckEntity_o *v72; // x28
  int32_t v73; // w27
  bool IsNpc; // w0
  unsigned int *v75; // x19
  int32_t v76; // w29
  PartyOrganizationListViewItem_o *v77; // x26
  int32_t v78; // w2
  int32_t v79; // w3
  __int64 v80; // x25
  unsigned __int64 v81; // x8
  FollowerInfo_o *v82; // x20
  int32_t v83; // w27
  unsigned int *v84; // x19
  PartyOrganizationListViewItem_o *v85; // x26
  int32_t v86; // w2
  int32_t v87; // w3
  UserServantEntity_o *v88; // x8
  __int64 v89; // x20
  __int64 v90; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v91; // x8
  int32_t v92; // w20
  int32_t v93; // w26
  int32_t DispLimitCount; // w0
  int32_t v95; // w2
  int32_t v96; // w3
  UserServantEntity_o *v97; // x20
  System_Int64_array *EquipList; // x27
  PartyOrganizationListViewItem_o *v99; // x0
  int32_t v100; // w1
  bool v101; // w2
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v104; // x1
  __int64 v105; // x0
  UserServantMaster_o *Master_object; // [xsp+20h] [xbp-100h]
  FollowerInfo_o *v108; // [xsp+30h] [xbp-F0h]
  int32_t *v109; // [xsp+38h] [xbp-E8h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+40h] [xbp-E0h]
  UserServantEntity_array *UserServantList; // [xsp+50h] [xbp-D0h]
  struct System_Int32_array *svtIdForceBattleList; // [xsp+60h] [xbp-C0h]
  UserServantEntity_o **m_Items; // [xsp+70h] [xbp-B0h]
  __int64 v115; // [xsp+78h] [xbp-A8h]
  int32_t v116; // [xsp+84h] [xbp-9Ch]
  PartyListViewItem_o *v117; // [xsp+88h] [xbp-98h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+90h] [xbp-90h]
  __int64 v119; // [xsp+98h] [xbp-88h]
  __int64 v120; // [xsp+A8h] [xbp-78h]
  int32_t followerClassIda; // [xsp+B4h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16

  if ( (byte_4A56F6D & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItem___TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A56F6D = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v20, v21);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v23,
    v24);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v25);
  this->fields.deckName = DefaultDeckName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.deckName, (int32_t)DefaultDeckName, v27, v28);
  if ( !deck )
    goto LABEL_142;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_142;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v31) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_142;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0LL);
  }
  v33 = (const MethodInfo_3739B38 **)&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  if ( *(int *)(Instance + 48) < 1 )
  {
    v34 = 0LL;
    if ( !questRestrictionInfo )
      goto LABEL_15;
    goto LABEL_14;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  v34 = *(PartyListViewItem_o **)(Instance + 72);
  if ( questRestrictionInfo )
LABEL_14:
    QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL);
LABEL_15:
  v35 = 0;
  if ( follower && v34 )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    v35 = *(_DWORD *)(Instance + 48);
    Instance = (__int64)PartyListViewItem__GetMember(v34, v35 - 1, v36);
    if ( !Instance )
      goto LABEL_142;
    v37 = *(_DWORD *)(Instance + 348);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v37, follower, 0LL);
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    follower = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    followerClassId = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    v38 = *(_DWORD *)(Instance + 36);
  }
  else
  {
    v38 = followerDeckId;
  }
  v116 = v38;
  v39 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v39 = BalanceConfig_TypeInfo;
  }
  v40 = (struct PartyOrganizationListViewItem_array *)sub_1B88658(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v39->static_fields->DeckMemberMax);
  this->fields.memberList = v40;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.memberList, (int32_t)v40, v41, v42);
  v43 = this->fields.menuKind;
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( v43 == 3 )
  {
    Instance = (__int64)*p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_142;
    Instance = (__int64)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList((QuestRestrictionInfo_o *)Instance, 0LL);
    if ( !*p_questRestrictionInfo )
      goto LABEL_142;
    v115 = Instance;
    svtIdForceBattleList = (*p_questRestrictionInfo)->fields.svtIdForceBattleList;
  }
  else
  {
    svtIdForceBattleList = 0LL;
    v115 = 0LL;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || (v108 = follower, !Instance) )
LABEL_142:
    sub_1B8880C(Instance, v30);
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Instance,
                        (*p_questRestrictionInfo)->fields.questId,
                        (*p_questRestrictionInfo)->fields.questPhase,
                        0LL);
  v46 = (unsigned int *)UserServantList;
  v47 = v35;
  v48 = 0LL;
  v49 = 0LL;
  v109 = &svtIdForceBattleList->m_Items[1];
  npcFollowerInfoList = QuestFollowerList;
  m_Items = UserServantList->m_Items;
  v119 = v47 - 1;
  v117 = v34;
  while ( 1 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v48 >= *(int *)(*(_QWORD *)(Instance + 184) + 156LL) )
      break;
    v120 = v49;
    if ( v34 )
    {
      Instance = (__int64)PartyListViewItem__GetMember(v34, v48, v45);
      if ( !Instance )
        goto LABEL_142;
      p_initPos = (int32_t *)(Instance + 348);
    }
    else
    {
      v51 = deck->fields.deckInfo;
      if ( !v51 )
        goto LABEL_142;
      svts = v51->fields.svts;
      if ( !svts )
        goto LABEL_142;
      if ( v48 >= svts->max_length )
        goto LABEL_143;
      v53 = svts->m_Items[v48];
      if ( !v53 )
        goto LABEL_142;
      p_initPos = &v53->fields.initPos;
    }
    initPos = *p_initPos;
    if ( this->fields.menuKind == 3 )
    {
      if ( !v115 )
        goto LABEL_142;
      if ( (__int64)v48 >= *(int *)(v115 + 24) )
      {
        v84 = (unsigned int *)*p_memberList;
        v85 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32066372(v85, v48, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v84 )
          goto LABEL_142;
        v80 = v120;
        if ( v85 )
        {
          Instance = sub_1B886EC(v85, *(_QWORD *)(*(_QWORD *)v84 + 64LL));
          if ( !Instance )
          {
LABEL_144:
            v105 = sub_1B88830();
            sub_1B886D8(v105, 0LL);
          }
        }
        if ( v48 >= v84[6] )
          goto LABEL_143;
        *(_QWORD *)&v84[2 * v48 + 8] = v85;
        sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v84 + v120 + 32), (int32_t)v85, v86, v87);
        goto LABEL_138;
      }
      if ( svtIdForceBattleList )
      {
        if ( v119 != v48 && isFirstEnforceChange )
        {
          max_length = svtIdForceBattleList->max_length;
          if ( (__int64)v48 < (int)max_length )
          {
            if ( v48 >= max_length )
              goto LABEL_143;
            v30 = (const MethodInfo *)(unsigned int)v109[v48];
            if ( (int)v30 >= 1 )
            {
              if ( !v46 )
                goto LABEL_142;
              if ( v48 >= v46[6] )
                goto LABEL_143;
              v56 = m_Items[v48];
              if ( !v56 )
                goto LABEL_68;
              v58 = *(_QWORD *)&v56->fields.svtId.fields.currentCryptoKey;
              v57 = *(_QWORD *)&v56->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v123.fields.currentCryptoKey = v58;
              *(_QWORD *)&v123.fields.fakeValue = v57;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v123, 0LL);
              max_length = svtIdForceBattleList->max_length;
              if ( v48 >= max_length )
                goto LABEL_143;
              v30 = (const MethodInfo *)(unsigned int)v109[v48];
              if ( (_DWORD)Instance != (_DWORD)v30 )
              {
LABEL_68:
                if ( v48 >= max_length )
                  goto LABEL_143;
                Instance = (__int64)Master_object;
                if ( !Master_object )
                  goto LABEL_142;
                Instance = (__int64)UserServantMaster__getSvtIdBattle(Master_object, (int32_t)v30, 0LL);
                v61 = Instance;
                if ( Instance )
                {
                  Instance = sub_1B886EC(Instance, *(_QWORD *)(*(_QWORD *)v46 + 64LL));
                  if ( !Instance )
                    goto LABEL_144;
                }
                if ( v48 >= v46[6] )
                  goto LABEL_143;
                m_Items[v48] = (UserServantEntity_o *)v61;
                sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)m_Items + v120), v61, v59, v60);
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
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(questRestrictionInfo, initPos, 0LL);
    v63 = Instance;
    if ( (Instance & 1) != 0 )
    {
      v64 = deck->fields.deckInfo;
      if ( !v64 )
        goto LABEL_142;
      v65 = v64->fields.svts;
      if ( !v65 )
        goto LABEL_142;
      if ( v48 >= v65->max_length )
        goto LABEL_143;
      v66 = v65->m_Items[v48];
      if ( !v66 )
        goto LABEL_142;
      v67 = 0;
      if ( v119 != v48 )
      {
        npcFollowerSvtId = v66->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v67 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v62);
      }
    }
    else
    {
      v67 = 0;
    }
    Instance = (__int64)SingletonTemplate_object___get_Instance(*v33);
    if ( !Instance )
      goto LABEL_142;
    Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                          (PartyOrganizationUtility_o *)Instance,
                          initPos,
                          0LL);
    if ( Instance && ((v63 ^ 1) & 1) == 0 )
    {
      v69 = (FollowerInfo_o *)Instance;
      v70 = this;
      v71 = v33;
      v72 = deck;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0LL) )
        v73 = 0;
      else
        v73 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v69, 0LL);
      v75 = (unsigned int *)*p_memberList;
      if ( IsNpc )
        v76 = 0;
      else
        v76 = v116;
      v77 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32029524(
        v77,
        v48,
        v69,
        v73,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v76,
        initPos,
        0LL);
      if ( !v75 )
        goto LABEL_142;
      v34 = v117;
      v80 = v120;
      deck = v72;
      if ( v77 )
      {
        Instance = sub_1B886EC(v77, *(_QWORD *)(*(_QWORD *)v75 + 64LL));
        if ( !Instance )
          goto LABEL_144;
      }
      v81 = v75[6];
      v33 = v71;
      this = v70;
      v46 = (unsigned int *)UserServantList;
      goto LABEL_133;
    }
    if ( v119 != v48 && !v67 )
    {
      if ( (v63 & 1) != 0 )
      {
        if ( !v46 )
          goto LABEL_142;
        if ( v48 >= v46[6] )
          goto LABEL_143;
        v88 = m_Items[v48];
        if ( v88 )
        {
          v90 = *(_QWORD *)&v88->fields.svtId.fields.currentCryptoKey;
          v89 = *(_QWORD *)&v88->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v124.fields.currentCryptoKey = v90;
          *(_QWORD *)&v124.fields.fakeValue = v89;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v124, 0LL);
          if ( v48 >= v46[6] )
            goto LABEL_143;
          v91 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)m_Items[v48];
          if ( !v91 )
            goto LABEL_142;
          v92 = Instance;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v91[6], 0LL);
          if ( v48 >= v46[6] )
LABEL_143:
            sub_1B88814(Instance, v30);
          v93 = Instance;
          Instance = (__int64)m_Items[v48];
          if ( !Instance )
            goto LABEL_142;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
          Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                       questRestrictionInfo,
                       v92,
                       v93,
                       DispLimitCount,
                       initPos,
                       0,
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v48 >= v46[6] )
              goto LABEL_143;
            m_Items[v48] = 0LL;
            sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)m_Items + v120), 0, v95, v96);
          }
        }
      }
      else if ( !v46 )
      {
        goto LABEL_142;
      }
      if ( v48 >= v46[6] )
        goto LABEL_143;
      v97 = m_Items[v48];
      v75 = (unsigned int *)*p_memberList;
      if ( !v97 )
      {
        v99 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
        v77 = v99;
        v100 = v48;
        v101 = 0;
        goto LABEL_128;
      }
      EquipList = UserEventDeckEntity__GetEquipList(deck, v48, 0LL);
      v77 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32057164(
        v77,
        v48,
        v97,
        EquipList,
        setupInfo,
        questRestrictionInfo,
        0LL,
        initPos,
        0LL,
        0,
        0LL);
      if ( !v75 )
        goto LABEL_142;
    }
    else
    {
      v82 = followera;
      v75 = (unsigned int *)*p_memberList;
      if ( !followera )
      {
        v99 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
        v77 = v99;
        if ( v108 )
        {
          PartyOrganizationListViewItem___ctor_32029524(
            v99,
            v48,
            v108,
            followerClassId,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v116,
            initPos,
            0LL);
        }
        else
        {
          v101 = 1;
          v100 = v48;
LABEL_128:
          PartyOrganizationListViewItem___ctor_32066372(
            v99,
            v100,
            v101,
            setupInfo,
            questRestrictionInfo,
            1,
            initPos,
            0LL);
        }
        v34 = v117;
        if ( !v75 )
          goto LABEL_142;
        goto LABEL_130;
      }
      v83 = followerClassIda;
      v77 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32029524(
        v77,
        v48,
        v82,
        v83,
        setupInfo,
        questRestrictionInfo,
        0LL,
        0,
        v116,
        initPos,
        0LL);
      if ( !v75 )
        goto LABEL_142;
    }
    v34 = v117;
LABEL_130:
    v80 = v120;
    if ( v77 )
    {
      Instance = sub_1B886EC(v77, *(_QWORD *)(*(_QWORD *)v75 + 64LL));
      if ( !Instance )
        goto LABEL_144;
    }
    v81 = v75[6];
LABEL_133:
    if ( v48 >= v81 )
      goto LABEL_143;
    *(_QWORD *)&v75[2 * v48 + 8] = v77;
    sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v75 + v80 + 32), (int32_t)v77, v78, v79);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_142;
    if ( v48 >= memberList->max_length )
      goto LABEL_143;
    Instance = (__int64)memberList->m_Items[v48];
    if ( !Instance )
      goto LABEL_142;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                      + cost;
LABEL_138:
    ++v48;
    v49 = v80 + 8;
  }
  PartyListViewItem__CheckRestriction(this, v30);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v104) )
    *isBaseModify = 1;
}


void __fastcall PartyListViewItem___ctor_31923264(
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
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  BalanceConfig_c *v26; // x0
  struct PartyOrganizationListViewItem_array *v27; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *Instance; // x0
  __int64 v32; // x1
  int32_t klass; // w23
  int32_t klass_high; // w25
  struct PartyOrganizationListViewItem_array *v35; // x26
  PartyOrganizationListViewItem_o *v36; // x0
  PartyOrganizationListViewItem_o *v37; // x27
  int32_t v38; // w2
  int32_t v39; // w3
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w23
  const MethodInfo *v42; // x1
  int32_t i; // w23
  BalanceConfig_c *v44; // x0
  struct PartyOrganizationListViewItem_array *v45; // x25
  PartyOrganizationListViewItem_o *v46; // x24
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppClass **v49; // x0
  struct PartyOrganizationListViewItem_array *v50; // x8
  int32_t v51; // w24
  __int64 v52; // x0

  if ( (byte_4A56F6E & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItem___TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A56F6E = 1;
  }
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v19, v20);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v21,
    v22);
  this->fields.isDeckNameDefault = 0;
  v23 = (int)StringLiteral_1/*""*/;
  this->fields.deckName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.deckName, v23, v24, v25);
  this->fields.userEquipId = userEquipId;
  this->fields.id = 0LL;
  v26 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v26 = BalanceConfig_TypeInfo;
  }
  v27 = (struct PartyOrganizationListViewItem_array *)sub_1B88658(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v26->static_fields->DeckMemberMax);
  this->fields.memberList = v27;
  p_memberList = &this->fields.memberList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.memberList, (int32_t)v27, v29, v30);
  this->fields.cost = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  klass = followerClassId;
  if ( Instance[1].monitor )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    follower = (FollowerInfo_o *)Instance[1].monitor;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    klass = (int32_t)Instance[2].klass;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    klass_high = HIDWORD(Instance[2].klass);
  }
  else
  {
    klass_high = followerDeckId;
  }
  v35 = *p_memberList;
  v36 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
  v37 = v36;
  if ( follower )
  {
    PartyOrganizationListViewItem___ctor_32029524(
      v36,
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
    if ( !v35 )
      goto LABEL_35;
  }
  else
  {
    PartyOrganizationListViewItem___ctor_32066372(v36, 0, 1, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v35 )
      goto LABEL_35;
  }
  if ( v37 )
  {
    Instance = (Il2CppObject *)sub_1B886EC(v37, v35->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_37:
      v52 = sub_1B88830();
      sub_1B886D8(v52, 0LL);
    }
  }
  if ( !v35->max_length )
    goto LABEL_36;
  v35->m_Items[0] = v37;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v35->m_Items, (int32_t)v37, v38, v39);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_35;
  if ( !memberList->max_length )
LABEL_36:
    sub_1B88814(Instance, v32);
  Instance = (Il2CppObject *)memberList->m_Items[0];
  if ( !Instance )
LABEL_35:
    sub_1B8880C(Instance, v32);
  cost = this->fields.cost;
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                    + cost;
  for ( i = 1; ; ++i )
  {
    v44 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v44 = BalanceConfig_TypeInfo;
    }
    if ( i >= v44->static_fields->DeckMemberMax )
      break;
    v45 = *p_memberList;
    v46 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_32066372(v46, i, 0, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v45 )
      goto LABEL_35;
    if ( v46 )
    {
      Instance = (Il2CppObject *)sub_1B886EC(v46, v45->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_37;
    }
    if ( i >= v45->max_length )
      goto LABEL_36;
    v49 = &v45->obj.klass + i;
    v49[4] = (Il2CppClass *)v46;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v49 + 4), (int32_t)v46, v47, v48);
    v50 = this->fields.memberList;
    if ( !v50 )
      goto LABEL_35;
    if ( i >= v50->max_length )
      goto LABEL_36;
    Instance = (Il2CppObject *)v50->m_Items[i];
    if ( !Instance )
      goto LABEL_35;
    v51 = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                      + v51;
  }
  PartyListViewItem__CheckRestriction(this, v42);
}


void __fastcall PartyListViewItem___ctor_31924156(
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
  int32_t v19; // w2
  int32_t v20; // w3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 IsNeedDeckPosReset; // x0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  struct DeckServant_o *deckInfo; // x8
  int32_t servantNumMax; // w26
  const MethodInfo *v29; // x3
  PartyListViewItem_o *v30; // x28
  int v31; // w25
  const MethodInfo *v32; // x2
  int32_t v33; // w23
  int32_t FollowerIndex; // w24
  BalanceConfig_c *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x9
  __int64 v39; // x27
  __int64 v40; // x21
  unsigned __int64 v41; // x8
  __int64 v42; // x23
  signed __int64 v43; // x29
  BalanceConfig_c *v44; // x0
  struct PartyOrganizationListViewItem_array *v45; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x28
  int32_t v47; // w2
  int32_t v48; // w3
  const MethodInfo *v49; // x2
  __int64 v50; // x19
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
  FollowerInfo_o *v63; // x23
  int32_t v64; // w26
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v66; // x21
  int32_t v67; // w29
  PartyOrganizationListViewItem_o *v68; // x25
  int32_t v69; // w2
  int32_t v70; // w3
  Il2CppClass **v71; // x8
  FollowerInfo_o *v72; // x23
  struct PartyOrganizationListViewItem_array *v73; // x29
  int32_t v74; // w26
  __int64 v75; // x29
  __int64 v76; // x25
  __int64 v77; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v78; // x25
  __int64 v79; // t1
  __int64 v80; // x23
  __int64 v81; // x26
  int32_t v82; // w23
  int32_t v83; // w26
  int32_t DispLimitCount; // w0
  int32_t v85; // w2
  int32_t v86; // w3
  UserServantEntity_o *v87; // x23
  struct PartyOrganizationListViewItem_array *v88; // x21
  System_Int64_array *EquipList; // x26
  PartyOrganizationListViewItem_o *v90; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w21
  const MethodInfo *v93; // x1
  __int64 v94; // x0
  FollowerInfo_o *followerInfo; // [xsp+18h] [xbp-C8h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+20h] [xbp-C0h]
  int v98; // [xsp+30h] [xbp-B0h]
  int v99; // [xsp+38h] [xbp-A8h]
  PartyListViewItem_o *v100; // [xsp+40h] [xbp-A0h]
  int32_t v101; // [xsp+4Ch] [xbp-94h]
  int32_t v102; // [xsp+58h] [xbp-88h]
  _BOOL4 v103; // [xsp+5Ch] [xbp-84h]
  UserEventDeckEntity_o *v104; // [xsp+68h] [xbp-78h]
  int32_t followerClassIda; // [xsp+74h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16

  if ( (byte_4A56F6F & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItem___TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A56F6F = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v19, v20);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v22,
    v23);
  if ( !deck )
    goto LABEL_121;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_121;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  IsNeedDeckPosReset = PartyListViewItem__IsNeedDeckPosReset(this, deck, v26);
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
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_121;
  if ( *(int *)(IsNeedDeckPosReset + 48) < 1 )
  {
    v30 = 0LL;
    v31 = 0;
    v103 = 1;
  }
  else
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    v30 = *(PartyListViewItem_o **)(IsNeedDeckPosReset + 72);
    v31 = 0;
    v103 = v30 == 0LL;
    if ( followerInfo && v30 )
    {
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      v31 = *(_DWORD *)(IsNeedDeckPosReset + 48);
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v30, v31 - 1, v32);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      v33 = *(_DWORD *)(IsNeedDeckPosReset + 348);
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      PartyOrganizationUtility__SetNpcFollowerInfo(
        (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
        v33,
        followerInfo,
        0LL);
      v103 = 0;
    }
  }
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0LL, v29);
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
  v35 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v35 = BalanceConfig_TypeInfo;
  }
  FollowerIndex = servantNumMax;
  if ( servantNumMax > v35->static_fields->DeckMainMemberMax )
  {
    FollowerIndex = v35->static_fields->DeckMainMemberMax;
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      FollowerIndex = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
    }
  }
LABEL_29:
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_121;
  if ( *(_QWORD *)(IsNeedDeckPosReset + 24) )
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    followerInfo = *(FollowerInfo_o **)(IsNeedDeckPosReset + 24);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    v101 = *(_DWORD *)(IsNeedDeckPosReset + 32);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    v102 = *(_DWORD *)(IsNeedDeckPosReset + 36);
  }
  else
  {
    v102 = followerDeckId;
    v101 = followerClassId;
  }
  v100 = v30;
  v104 = deck;
  IsNeedDeckPosReset = (__int64)UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  if ( !IsNeedDeckPosReset )
    goto LABEL_121;
  v38 = *(_QWORD *)(IsNeedDeckPosReset + 24);
  v39 = IsNeedDeckPosReset;
  if ( (int)v38 >= 1 )
  {
    v40 = 0LL;
    v41 = 0LL;
    v42 = IsNeedDeckPosReset + 32;
    do
    {
      if ( v41 >= (unsigned int)v38 )
LABEL_125:
        sub_1B88814(IsNeedDeckPosReset, v25);
      v43 = v41 + 1;
      if ( servantNumMax < (int)v41 + 1 && *(_QWORD *)(v42 + 8 * v41) )
      {
        *isBaseModify = 1;
        if ( v41 >= *(unsigned int *)(v39 + 24) )
          goto LABEL_125;
        *(_QWORD *)(v42 + 8 * v41) = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v42 + v40), 0, v36, v37);
      }
      LODWORD(v38) = *(_DWORD *)(v39 + 24);
      v40 += 8LL;
      v41 = v43;
    }
    while ( v43 < (int)v38 );
  }
  v44 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v44 = BalanceConfig_TypeInfo;
  }
  v45 = (struct PartyOrganizationListViewItem_array *)sub_1B88658(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v44->static_fields->DeckMemberMax);
  this->fields.memberList = v45;
  p_memberList = &this->fields.memberList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.memberList, (int32_t)v45, v47, v48);
  this->fields.cost = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNeedDeckPosReset = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || !IsNeedDeckPosReset )
LABEL_121:
    sub_1B8880C(IsNeedDeckPosReset, v25);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)IsNeedDeckPosReset,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0LL);
  v50 = 0LL;
  v98 = v31 - 1;
  v99 = FollowerIndex - 1;
  while ( 1 )
  {
    IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (int)v50 >= *(_DWORD *)(*(_QWORD *)(IsNeedDeckPosReset + 184) + 156LL) )
      break;
    if ( v103 )
    {
      v51 = v104->fields.deckInfo;
      if ( !v51 )
        goto LABEL_121;
      svts = v51->fields.svts;
      if ( !svts )
        goto LABEL_121;
      if ( (unsigned int)v50 >= svts->max_length )
        goto LABEL_125;
      v53 = svts->m_Items[(int)v50];
      if ( !v53 )
        goto LABEL_121;
      p_initPos = &v53->fields.initPos;
    }
    else
    {
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v100, v50, v49);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      p_initPos = (int32_t *)(IsNeedDeckPosReset + 348);
    }
    initPos = *p_initPos;
    followera = 0LL;
    followerClassIda = 0;
    IsNeedDeckPosReset = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(questRestrictionInfo, initPos, 0LL);
    v57 = IsNeedDeckPosReset;
    v58 = 0;
    if ( (IsNeedDeckPosReset & 1) != 0 )
    {
      v59 = v104->fields.deckInfo;
      if ( !v59 )
        goto LABEL_121;
      v60 = v59->fields.svts;
      if ( !v60 )
        goto LABEL_121;
      if ( (unsigned int)v50 >= v60->max_length )
        goto LABEL_125;
      v61 = v60->m_Items[(int)v50];
      if ( !v61 )
        goto LABEL_121;
      v58 = 0;
      if ( v98 != (_DWORD)v50 )
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
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    IsNeedDeckPosReset = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                                    (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
                                    initPos,
                                    0LL);
    if ( !IsNeedDeckPosReset || ((v57 ^ 1) & 1) != 0 )
    {
      if ( v99 == (_DWORD)v50 || v58 )
      {
        v72 = followera;
        v73 = *p_memberList;
        if ( followera )
        {
          v74 = followerClassIda;
          v68 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32029524(
            v68,
            v50,
            v72,
            v74,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v102,
            initPos,
            0LL);
LABEL_106:
          if ( !v73 )
            goto LABEL_121;
        }
        else
        {
          v90 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
          v68 = v90;
          if ( followerInfo )
          {
            PartyOrganizationListViewItem___ctor_32029524(
              v90,
              v50,
              followerInfo,
              v101,
              setupInfo,
              questRestrictionInfo,
              friendPointCampaignEntityList,
              0,
              v102,
              initPos,
              0LL);
            goto LABEL_106;
          }
          PartyOrganizationListViewItem___ctor_32066372(v90, v50, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
          if ( !v73 )
            goto LABEL_121;
        }
        if ( v68 )
        {
          IsNeedDeckPosReset = sub_1B886EC(v68, v73->obj.klass->_1.element_class);
          if ( !IsNeedDeckPosReset )
            goto LABEL_126;
        }
        if ( (unsigned int)v50 >= v73->max_length )
          goto LABEL_125;
        v71 = &v73->obj.klass + (int)v50;
        goto LABEL_116;
      }
      v75 = v50;
      if ( (v57 & 1) != 0 )
      {
        if ( (unsigned int)v50 >= *(_DWORD *)(v39 + 24) )
          goto LABEL_125;
        v76 = v39 + 8LL * (int)v50;
        v79 = *(_QWORD *)(v76 + 32);
        v78 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v76 + 32);
        v77 = v79;
        v75 = (int)v50;
        if ( v79 )
        {
          v81 = *(_QWORD *)(v77 + 80);
          v80 = *(_QWORD *)(v77 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v107.fields.currentCryptoKey = v81;
          *(_QWORD *)&v107.fields.fakeValue = v80;
          IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v107, 0LL);
          if ( (unsigned int)v50 >= *(_DWORD *)(v39 + 24) )
            goto LABEL_125;
          if ( !*v78 )
            goto LABEL_121;
          v82 = IsNeedDeckPosReset;
          IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*v78)[6], 0LL);
          if ( (unsigned int)v50 >= *(_DWORD *)(v39 + 24) )
            goto LABEL_125;
          v83 = IsNeedDeckPosReset;
          IsNeedDeckPosReset = (__int64)*v78;
          if ( !*v78 )
            goto LABEL_121;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)IsNeedDeckPosReset, 0, 0LL);
          IsNeedDeckPosReset = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                 questRestrictionInfo,
                                 v82,
                                 v83,
                                 DispLimitCount,
                                 initPos,
                                 0,
                                 0LL);
          if ( (IsNeedDeckPosReset & 1) != 0 )
          {
            if ( (unsigned int)v50 >= *(_DWORD *)(v39 + 24) )
              goto LABEL_125;
            *v78 = 0LL;
            sub_1B88554((ServantStatusBattleListViewItem_o *)v78, 0, v85, v86);
          }
        }
      }
      if ( (unsigned int)v50 >= *(_DWORD *)(v39 + 24) )
        goto LABEL_125;
      v87 = *(UserServantEntity_o **)(v39 + 8 * v75 + 32);
      v88 = *p_memberList;
      if ( v87 )
      {
        EquipList = UserEventDeckEntity__GetEquipList(v104, v50, 0LL);
        v68 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32057164(
          v68,
          v50,
          v87,
          EquipList,
          setupInfo,
          questRestrictionInfo,
          0LL,
          initPos,
          0LL,
          0,
          0LL);
        if ( !v88 )
          goto LABEL_121;
      }
      else
      {
        v68 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32066372(v68, v50, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v88 )
          goto LABEL_121;
      }
      if ( v68 )
      {
        IsNeedDeckPosReset = sub_1B886EC(v68, v88->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
        {
LABEL_126:
          v94 = sub_1B88830();
          sub_1B886D8(v94, 0LL);
        }
      }
      if ( (unsigned int)v50 >= v88->max_length )
        goto LABEL_125;
      v71 = &v88->obj.klass + v75;
    }
    else
    {
      v63 = (FollowerInfo_o *)IsNeedDeckPosReset;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)IsNeedDeckPosReset, 0LL) )
        v64 = 0;
      else
        v64 = v101;
      IsNpc = FollowerInfo__get_IsNpc(v63, 0LL);
      v66 = *p_memberList;
      if ( IsNpc )
        v67 = 0;
      else
        v67 = v102;
      v68 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32029524(
        v68,
        v50,
        v63,
        v64,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v67,
        initPos,
        0LL);
      if ( !v66 )
        goto LABEL_121;
      if ( v68 )
      {
        IsNeedDeckPosReset = sub_1B886EC(v68, v66->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
          goto LABEL_126;
      }
      if ( (unsigned int)v50 >= v66->max_length )
        goto LABEL_125;
      v71 = &v66->obj.klass + (int)v50;
    }
LABEL_116:
    v71[4] = (Il2CppClass *)v68;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v71 + 4), (int32_t)v68, v69, v70);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_121;
    if ( (unsigned int)v50 >= memberList->max_length )
      goto LABEL_125;
    IsNeedDeckPosReset = (__int64)memberList->m_Items[(int)v50];
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    cost = this->fields.cost;
    ++v50;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)IsNeedDeckPosReset,
                          0LL)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, v25);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v93) )
    *isBaseModify = 1;
}


void __fastcall PartyListViewItem___ctor_31926532(
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
  int32_t v20; // w2
  int32_t v21; // w3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 Instance; // x0
  FollowerInfo_o *v26; // x1
  const MethodInfo *v27; // x2
  UserEventDeckEntity_o *v28; // x21
  struct DeckServant_o *deckInfo; // x8
  System_Int64_array *NpcServantFollowerIds; // x29
  FollowerInfo_o *v31; // x24
  PartyListViewItem_o *v32; // x22
  int v33; // w25
  const MethodInfo *v34; // x2
  int32_t v35; // w21
  int32_t DeckMemberMax; // w25
  FollowerInfo_array *QuestFollowerList; // x28
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int max_length; // w8
  unsigned int v41; // w19
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  int32_t v46; // w22
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v48; // w9
  int v49; // w10
  QuestRestrictionInfo_SlotInfo_o *v50; // x11
  struct DeckServant_o *v51; // x8
  __int64 v52; // x29
  int v53; // w24
  int v54; // w28
  struct DeckServantData_array *svts; // x8
  Il2CppObject *v56; // x19
  struct DeckServant_o *v57; // x8
  struct DeckServantData_array *v58; // x8
  DeckServantData_o *v59; // x8
  int64_t userSvtId; // x21
  System_Func_object__bool__o *v61; // x21
  BalanceConfig_c *v62; // x0
  _BOOL8 v63; // x0
  __int64 v64; // x1
  const MethodInfo *v65; // x2
  Il2CppClass *klass; // x21
  int v67; // w8
  Il2CppClass **v68; // x8
  __int64 NpcDeployIdx; // x0
  __int64 v70; // x1
  BalanceConfig_c *v71; // x0
  const MethodInfo *v72; // x2
  const MethodInfo *v73; // x3
  int32_t i; // w19
  struct DeckServant_o *v75; // x8
  struct DeckServantData_array *v76; // x8
  DeckServantData_o *v77; // x8
  int32_t UserServantDeployIndex; // w0
  il2cpp_array_size_t v79; // w21
  int32_t v80; // w2
  int32_t v81; // w3
  __int64 v82; // x22
  Il2CppClass **v83; // x0
  BalanceConfig_c *v84; // x0
  struct PartyOrganizationListViewItem_array *v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  unsigned __int64 v88; // x24
  EventUpValSetupInfo_o *v89; // x23
  __int64 j; // x28
  BalanceConfig_c *v91; // x0
  __int64 v92; // x25
  const MethodInfo *v93; // x2
  struct DeckServant_o *v94; // x8
  struct DeckServantData_array *v95; // x8
  DeckServantData_o *v96; // x8
  int32_t *p_initPos; // x8
  int32_t v98; // w19
  unsigned int *v99; // x21
  PartyOrganizationListViewItem_o *v100; // x25
  int32_t v101; // w2
  int32_t v102; // w3
  const MethodInfo *v103; // x6
  bool v104; // w21
  int64_t v105; // x4
  bool v106; // w22
  FollowerInfo_o *v107; // x29
  int32_t v108; // w22
  bool IsNpc; // w0
  unsigned int *v110; // x23
  int32_t v111; // w21
  PartyOrganizationListViewItem_o *v112; // x25
  unsigned int *v113; // x19
  int32_t v114; // w2
  int32_t v115; // w3
  unsigned __int64 v116; // x8
  FollowerInfo_o *v117; // x22
  unsigned int *v118; // x21
  EventUpValSetupInfo_o *v119; // x23
  int32_t v120; // w26
  PartyOrganizationListViewItem_o *v121; // x0
  int32_t v122; // w3
  PartyOrganizationListViewItem_o *v123; // x0
  System_Func_object__bool__o *v124; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v125; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v126; // x22
  FollowerInfo_o *v127; // x29
  unsigned int *v128; // x25
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v130; // x8
  int32_t classId; // w22
  PartyOrganizationListViewItem_o *v132; // x21
  System_Collections_Generic_List_object__o *v133; // x21
  int32_t v134; // w25
  PartyOrganizationListViewItem_o *v135; // x21
  int32_t v136; // w25
  UserServantEntity_o *v137; // x8
  __int64 v138; // x22
  __int64 v139; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v140; // x8
  int32_t v141; // w22
  int32_t v142; // w25
  int32_t DispLimitCount; // w0
  int32_t v144; // w2
  int32_t v145; // w3
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  unsigned int *v148; // x21
  __int64 v149; // x8
  FollowerInfo_o *v150; // x22
  __int64 v151; // x8
  PartyListViewItem_o *v152; // x21
  UserServantEntity_o *v153; // x22
  unsigned int *v154; // x27
  __int64 v155; // x23
  int v156; // w24
  unsigned __int64 v157; // x29
  UserServantEntity_o **v158; // x26
  __int64 v159; // x19
  signed __int64 v160; // x21
  System_Func_object__bool__o *v161; // x22
  int32_t v162; // w2
  int32_t v163; // w3
  unsigned __int64 v164; // x8
  EventUpValSetupInfo_o *v165; // x26
  unsigned __int64 v166; // x21
  signed __int64 v167; // x28
  __int64 v168; // x23
  unsigned __int64 k; // x24
  BalanceConfig_c *v170; // x0
  __int64 v171; // x29
  const MethodInfo *v172; // x2
  struct DeckServant_o *v173; // x8
  struct DeckServantData_array *v174; // x8
  __int64 v175; // x8
  int32_t *v176; // x8
  int32_t v177; // w19
  unsigned int *v178; // x21
  PartyOrganizationListViewItem_o *v179; // x25
  int32_t v180; // w2
  int32_t v181; // w3
  const MethodInfo *v182; // x6
  int v183; // w25
  struct DeckServant_o *v184; // x8
  struct DeckServantData_array *v185; // x8
  __int64 v186; // x8
  int64_t v187; // x4
  int v188; // w8
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v190; // x22
  int32_t v191; // w29
  bool v192; // w0
  unsigned int *v193; // x21
  int32_t v194; // w26
  PartyOrganizationListViewItem_o *v195; // x25
  int32_t v196; // w2
  int32_t v197; // w3
  struct PartyOrganizationListViewItem_array *v198; // x8
  struct DeckServant_o *v199; // x9
  struct DeckServantData_array *v200; // x9
  __int64 v201; // x9
  __int64 v202; // x8
  FollowerInfo_o *v203; // x22
  unsigned int *v204; // x29
  int32_t v205; // w29
  PartyOrganizationListViewItem_o *v206; // x0
  int32_t v207; // w3
  PartyOrganizationListViewItem_o *v208; // x25
  int32_t v209; // w2
  int32_t v210; // w3
  PartyOrganizationListViewItem_o *v211; // x0
  System_Func_object__bool__o *v212; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v213; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v214; // x22
  UserServantEntity_array *v215; // x21
  __int64 v216; // x8
  __int64 v217; // x22
  __int64 v218; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v219; // x8
  int32_t v220; // w22
  int32_t v221; // w25
  int32_t v222; // w0
  int32_t v223; // w2
  int32_t v224; // w3
  struct PartyOrganizationListViewItem_array *v225; // x8
  struct DeckServant_o *v226; // x9
  struct DeckServantData_array *v227; // x9
  __int64 v228; // x9
  __int64 v229; // x8
  FollowerInfo_o *v230; // x25
  unsigned int *v231; // x26
  __int64 v232; // x8
  __int64 v233; // x8
  int32_t v234; // w22
  PartyOrganizationListViewItem_o *v235; // x29
  int32_t v236; // w2
  int32_t v237; // w3
  UserServantEntity_o *v238; // x22
  unsigned int *v239; // x26
  System_Int64_array *v240; // x29
  PartyOrganizationListViewItem_o *v241; // x25
  int32_t v242; // w2
  int32_t v243; // w3
  PartyOrganizationListViewItem_o *v244; // x22
  int32_t v245; // w2
  int32_t v246; // w3
  struct PartyOrganizationListViewItem_array *v247; // x8
  int32_t v248; // w19
  const MethodInfo *v249; // x1
  __int64 v250; // x0
  int32_t followerDeckIda; // [xsp+0h] [xbp-190h]
  int32_t initPos; // [xsp+8h] [xbp-188h]
  unsigned int *v253; // [xsp+28h] [xbp-168h]
  UserServantEntity_o **isFixNpc; // [xsp+30h] [xbp-160h]
  char isFixNpca; // [xsp+30h] [xbp-160h]
  int v256; // [xsp+3Ch] [xbp-154h]
  _BOOL4 v257; // [xsp+3Ch] [xbp-154h]
  int32_t v258; // [xsp+40h] [xbp-150h]
  int32_t v259; // [xsp+40h] [xbp-150h]
  System_Int64_array *EquipList; // [xsp+40h] [xbp-150h]
  bool v261; // [xsp+40h] [xbp-150h]
  int v263; // [xsp+54h] [xbp-13Ch]
  int32_t v264; // [xsp+60h] [xbp-130h]
  int32_t v265; // [xsp+64h] [xbp-12Ch]
  int v266; // [xsp+68h] [xbp-128h]
  int32_t FollowerIndex; // [xsp+74h] [xbp-11Ch]
  FollowerInfo_o *v268; // [xsp+78h] [xbp-118h]
  EventUpValSetupInfo_o *setupInfoa; // [xsp+80h] [xbp-110h]
  EventUpValSetupInfo_o *setupInfob; // [xsp+80h] [xbp-110h]
  PartyListViewItem_o *v271; // [xsp+88h] [xbp-108h]
  System_Int64_array *v272; // [xsp+90h] [xbp-100h]
  System_Int64_array *v273; // [xsp+90h] [xbp-100h]
  int v274; // [xsp+90h] [xbp-100h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+98h] [xbp-F8h]
  QuestRestrictionInfo_o *v276; // [xsp+A0h] [xbp-F0h]
  QuestRestrictionInfo_o *m_Items; // [xsp+A0h] [xbp-F0h]
  PartyListViewItem_o *v278; // [xsp+A8h] [xbp-E8h]
  System_Collections_Generic_List_object__o *v279; // [xsp+B0h] [xbp-E0h]
  UserServantEntity_array *userServantList; // [xsp+B8h] [xbp-D8h]
  _BOOL4 v281; // [xsp+C4h] [xbp-CCh]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+C8h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_object__o v284; // [xsp+D8h] [xbp-B8h] BYREF
  int32_t v285; // [xsp+F4h] [xbp-9Ch] BYREF
  FollowerInfo_o *v286; // [xsp+F8h] [xbp-98h] BYREF
  int32_t followerClassIda; // [xsp+104h] [xbp-8Ch] BYREF
  FollowerInfo_o *followera; // [xsp+108h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v289; // [xsp+110h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v290; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v291; // 0:x0.16

  if ( (byte_4A56F70 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_BasicHelper_Any_FollowerInfo___);
    sub_1B885B0(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_FollowerInfo___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_FollowerInfo___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__get_Current__);
    sub_1B885B0(&FollowerInfo___TypeInfo);
    sub_1B885B0(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_FollowerInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FollowerInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FollowerInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_FollowerInfo__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItem___TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&Method_PartyListViewItem___c__DisplayClass27_0___ctor_b__0__);
    sub_1B885B0(&PartyListViewItem___c__DisplayClass27_0_TypeInfo);
    sub_1B885B0(&Method_PartyListViewItem___c__DisplayClass27_1___ctor_b__1__);
    sub_1B885B0(&PartyListViewItem___c__DisplayClass27_1_TypeInfo);
    sub_1B885B0(&Method_PartyListViewItem___c__DisplayClass27_2___ctor_b__2__);
    sub_1B885B0(&PartyListViewItem___c__DisplayClass27_2_TypeInfo);
    sub_1B885B0(&Method_PartyListViewItem___c__DisplayClass27_3___ctor_b__3__);
    sub_1B885B0(&PartyListViewItem___c__DisplayClass27_3_TypeInfo);
    sub_1B885B0(&UserServantEntity___TypeInfo);
    byte_4A56F70 = 1;
  }
  memset(&v289, 0, sizeof(v289));
  followera = 0LL;
  followerClassIda = 0;
  v286 = 0LL;
  v285 = 0;
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v20, v21);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v23,
    v24);
  v28 = deck;
  if ( !deck )
    goto LABEL_75;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_75;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v27) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_75;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0LL);
    v28 = deck;
  }
  NpcServantFollowerIds = UserEventDeckEntity__GetNpcServantFollowerIds(v28, 0LL);
  userServantList = UserEventDeckEntity__GetUserServantList(v28, 0, 0, 0LL);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  v31 = follower;
  if ( *(int *)(Instance + 48) < 1 )
  {
    v32 = 0LL;
    v33 = 0;
    v281 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v32 = *(PartyListViewItem_o **)(Instance + 72);
    v33 = 0;
    v281 = v32 == 0LL;
    if ( follower && v32 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      v33 = *(_DWORD *)(Instance + 48);
      Instance = (__int64)PartyListViewItem__GetMember(v32, v33 - 1, v34);
      if ( !Instance )
        goto LABEL_75;
      v35 = *(_DWORD *)(Instance + 348);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v35, follower, 0LL);
      v281 = 0;
    }
  }
  Instance = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  v263 = v33;
  if ( !questRestrictionInfo )
    goto LABEL_75;
  DeckMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMemberMax;
  if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0LL) )
    DeckMemberMax = questRestrictionInfo->fields.servantNumMax;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo
    || !Instance
    || (QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                              (NpcFollowerMaster_o *)Instance,
                              (*p_questRestrictionInfo)->fields.questId,
                              (*p_questRestrictionInfo)->fields.questPhase,
                              0LL),
        v279 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_FollowerInfo__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v279,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_FollowerInfo___ctor__),
        !QuestFollowerList) )
  {
LABEL_75:
    sub_1B8880C(Instance, v26);
  }
  max_length = QuestFollowerList->max_length;
  if ( max_length >= 1 )
  {
    v41 = 0;
    while ( v41 < max_length )
    {
      v26 = QuestFollowerList->m_Items[v41];
      if ( !v26 )
        goto LABEL_75;
      if ( !v26->fields.isMySvtOrNpc
        && (questRestrictionInfo->fields.isNotTransitionSupportList
         || !questRestrictionInfo->fields.isNpcMultipleBattle
         || v26->fields.isFixedNpc) )
      {
        if ( !v279 )
          goto LABEL_75;
        items = v279->fields._items;
        v43 = Method_System_Collections_Generic_List_FollowerInfo__Add__;
        ++v279->fields._version;
        if ( !items )
          goto LABEL_75;
        size = v279->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v279,
            (Il2CppObject *)v26,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = &items->obj.klass + size;
          v279->fields._size = size + 1;
          v45[4] = (Il2CppClass *)v26;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v26, v38, (int32_t)v39);
        }
      }
      max_length = QuestFollowerList->max_length;
      if ( (int)++v41 >= max_length )
        goto LABEL_44;
    }
LABEL_411:
    sub_1B88814(Instance, v26);
  }
LABEL_44:
  FollowerIndex = PartyListViewItem__GetFollowerIndex(
                    this,
                    deck,
                    (System_Collections_Generic_List_FollowerInfo__o *)v279,
                    v39);
  setupInfoa = setupInfo;
  v271 = this;
  v276 = questRestrictionInfo;
  v278 = v32;
  npcFollowerInfoList = QuestFollowerList;
  if ( isNew || !questRestrictionInfo->fields.isNpcEditablePos )
    goto LABEL_117;
  Instance = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !v279 )
      goto LABEL_75;
    v46 = v279->fields._size;
  }
  else
  {
    slotInfos = questRestrictionInfo->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_75;
    v48 = slotInfos->max_length;
    if ( v48 >= 1 )
    {
      v46 = 0;
      v49 = 0;
      while ( v48 != v49 )
      {
        v50 = slotInfos->m_Items[v49];
        if ( !v50 )
          goto LABEL_75;
        if ( v50->fields.slotType == 1 )
          v46 += v50->fields.isMoved;
        if ( v48 == ++v49 )
          goto LABEL_59;
      }
      goto LABEL_411;
    }
    v46 = 0;
  }
LABEL_59:
  v272 = NpcServantFollowerIds;
  v51 = deck->fields.deckInfo;
  if ( !v51 )
    goto LABEL_75;
  v52 = 0LL;
  v53 = 0;
  v54 = 0;
  while ( 1 )
  {
    svts = v51->fields.svts;
    if ( !svts )
      goto LABEL_75;
    if ( (int)v52 >= (signed int)svts->max_length )
      break;
    v56 = (Il2CppObject *)sub_1B887FC(PartyListViewItem___c__DisplayClass27_0_TypeInfo);
    System_Object___ctor(v56, 0LL);
    v57 = deck->fields.deckInfo;
    if ( !v57 )
      goto LABEL_75;
    v58 = v57->fields.svts;
    if ( !v58 )
      goto LABEL_75;
    if ( (unsigned int)v52 >= v58->max_length )
      goto LABEL_411;
    v59 = v58->m_Items[v52];
    if ( v59 && v56 )
    {
      userSvtId = v59->fields.userSvtId;
      v56[1].klass = (Il2CppClass *)v59->fields.npcFollowerSvtId;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(
                   questRestrictionInfo,
                   v59->fields.initPos,
                   0LL);
      if ( (int)v52 >= DeckMemberMax && (userSvtId || v56[1].klass) )
        v53 = 1;
      if ( !(Instance & 1 | (v56[1].klass == 0LL)) )
      {
        v61 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(v61, v56, Method_PartyListViewItem___c__DisplayClass27_0___ctor_b__0__, 0LL);
        Instance = BasicHelper__Any_object_(
                     (System_Collections_Generic_List_T__o *)v279,
                     (System_Func_T__bool__o *)v61,
                     (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_FollowerInfo___);
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
    v31 = follower;
    v32 = v278;
    NpcServantFollowerIds = v272;
    goto LABEL_117;
  }
  v62 = BalanceConfig_TypeInfo;
  v31 = follower;
  v32 = v278;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v62 = BalanceConfig_TypeInfo;
  }
  NpcServantFollowerIds = (System_Int64_array *)sub_1B88658(
                                                  long___TypeInfo,
                                                  (unsigned int)v62->static_fields->DeckMemberMax);
  Instance = (__int64)v279;
  if ( !v279 )
    goto LABEL_75;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v284,
    v279,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
  v289 = v284;
  while ( 1 )
  {
    v63 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v289,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    if ( !v63 )
      break;
    if ( !v289.fields._current )
      sub_1B8880C(v63, v64);
    klass = v289.fields._current[5].klass;
    if ( klass )
    {
      v67 = LODWORD(v289.fields._current[5].monitor) - 1;
      if ( v67 >= 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_1B8880C(v63, v64);
        if ( v67 >= NpcServantFollowerIds->max_length )
          sub_1B88814(v63, v64);
        v68 = &NpcServantFollowerIds->obj.klass + (unsigned int)v67;
        goto LABEL_92;
      }
      NpcDeployIdx = PartyListViewItem__GetNpcDeployIdx(this, NpcServantFollowerIds, v65);
      if ( (NpcDeployIdx & 0x80000000) == 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_1B8880C(NpcDeployIdx, v70);
        if ( (unsigned int)NpcDeployIdx >= NpcServantFollowerIds->max_length )
          sub_1B88814(NpcDeployIdx, v70);
        v68 = &NpcServantFollowerIds->obj.klass + (unsigned int)NpcDeployIdx;
LABEL_92:
        v68[4] = klass;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v289,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
  v71 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v71 = BalanceConfig_TypeInfo;
  }
  userServantList = (UserServantEntity_array *)sub_1B88658(
                                                 UserServantEntity___TypeInfo,
                                                 (unsigned int)v71->static_fields->DeckMemberMax);
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
    v75 = deck->fields.deckInfo;
    if ( !v75 )
      goto LABEL_75;
    v76 = v75->fields.svts;
    if ( !v76 )
      goto LABEL_75;
    if ( i >= v76->max_length )
      goto LABEL_411;
    v77 = v76->m_Items[i];
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
          Instance = (__int64)UserEventDeckEntity__GetUserServant(deck, i, 0LL);
          if ( !userServantList )
            goto LABEL_75;
          v82 = Instance;
          if ( Instance )
          {
            Instance = sub_1B886EC(Instance, userServantList->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_412:
              v250 = sub_1B88830();
              sub_1B886D8(v250, 0LL);
            }
          }
          if ( v79 >= userServantList->max_length )
            goto LABEL_411;
          v83 = &userServantList->obj.klass + v79;
          v83[4] = (Il2CppClass *)v82;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v83 + 4), v82, v80, v81);
          questRestrictionInfo = v276;
          v32 = v278;
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
                      (System_Collections_Generic_List_FollowerInfo__o *)v279,
                      v72);
  }
LABEL_117:
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      v31 = *(FollowerInfo_o **)(Instance + 24);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        v264 = *(_DWORD *)(Instance + 32);
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          v265 = *(_DWORD *)(Instance + 36);
          goto LABEL_124;
        }
      }
    }
    goto LABEL_75;
  }
  v264 = followerClassId;
  v265 = followerDeckId;
LABEL_124:
  v84 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v84 = BalanceConfig_TypeInfo;
  }
  v85 = (struct PartyOrganizationListViewItem_array *)sub_1B88658(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v84->static_fields->DeckMemberMax);
  this->fields.memberList = v85;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.memberList, (int32_t)v85, v86, v87);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  v268 = v31;
  if ( !isNew && questRestrictionInfo->fields.isNpcEditablePos )
  {
    m_Items = (QuestRestrictionInfo_o *)NpcServantFollowerIds->m_Items;
    v88 = 0LL;
    v89 = (EventUpValSetupInfo_o *)DeckMemberMax;
    isFixNpc = userServantList->m_Items;
    v256 = -1;
    while ( 1 )
    {
      for ( j = 8 * v88; ; j += 8LL )
      {
        v91 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v91 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v88 >= v91->static_fields->DeckMemberMax )
          goto LABEL_406;
        v92 = sub_1B887FC(PartyListViewItem___c__DisplayClass27_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v92, 0LL);
        if ( v281 )
        {
          v94 = deck->fields.deckInfo;
          if ( !v94 )
            goto LABEL_75;
          v95 = v94->fields.svts;
          if ( !v95 )
            goto LABEL_75;
          if ( v88 >= v95->max_length )
            goto LABEL_411;
          v96 = v95->m_Items[v88];
          if ( !v96 )
            goto LABEL_75;
          p_initPos = &v96->fields.initPos;
        }
        else
        {
          Instance = (__int64)PartyListViewItem__GetMember(v32, v88, v93);
          if ( !Instance )
            goto LABEL_75;
          p_initPos = (int32_t *)(Instance + 348);
        }
        v98 = *p_initPos;
        if ( (__int64)v88 < (__int64)v89 )
          break;
        v99 = (unsigned int *)*p_memberList;
        v100 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32066372(v100, v88, 0, setupInfo, questRestrictionInfo, 1, v98, 0LL);
        if ( !v99 )
          goto LABEL_75;
        if ( v100 )
        {
          Instance = sub_1B886EC(v100, *(_QWORD *)(*(_QWORD *)v99 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        if ( v88 >= v99[6] )
          goto LABEL_411;
        *(_QWORD *)&v99[2 * v88 + 8] = v100;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v99[(unsigned __int64)j / 4 + 8], (int32_t)v100, v101, v102);
        ++v88;
      }
      if ( !v92 )
        goto LABEL_75;
      *(_DWORD *)(v92 + 16) = v88 + 1;
      followera = 0LL;
      followerClassIda = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(questRestrictionInfo, v98, 0LL);
      v104 = 0;
      v258 = Instance;
      if ( (Instance & 1) != 0 )
      {
        if ( !NpcServantFollowerIds )
          goto LABEL_75;
        if ( v88 >= NpcServantFollowerIds->max_length )
          goto LABEL_411;
        v105 = *((_QWORD *)&m_Items->klass + v88);
        v104 = v105 >= 1
            && *(_DWORD *)(v92 + 16) != v263
            && PartyListViewItem__SetNpcFollowerInfo(
                 this,
                 &followera,
                 &followerClassIda,
                 npcFollowerInfoList,
                 v105,
                 v98,
                 v103);
      }
      setupInfob = v89;
      v106 = !QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL)
          && QuestRestrictionInfo__IsPositionFixNpc(questRestrictionInfo, v98, 0LL);
      v273 = NpcServantFollowerIds;
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v98, 0LL);
      if ( !Instance || ((v258 ^ 1) & 1) != 0 )
      {
        if ( v104 || *(_DWORD *)(v92 + 16) == FollowerIndex )
        {
          v117 = followera;
          v118 = (unsigned int *)*p_memberList;
          if ( !followera )
          {
            v123 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
            v112 = v123;
            if ( v268 )
              PartyOrganizationListViewItem___ctor_32029524(
                v123,
                v88,
                v268,
                v264,
                setupInfo,
                questRestrictionInfo,
                0LL,
                0,
                v265,
                v98,
                0LL);
            else
              PartyOrganizationListViewItem___ctor_32066372(v123, v88, 1, setupInfo, questRestrictionInfo, 1, v98, 0LL);
            v32 = v278;
            v113 = v118;
            if ( !v118 )
              goto LABEL_75;
            goto LABEL_208;
          }
          v119 = setupInfo;
          v120 = followerClassIda;
          v121 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
          v122 = v120;
          v112 = v121;
          setupInfo = v119;
          PartyOrganizationListViewItem___ctor_32029524(
            v121,
            v88,
            v117,
            v122,
            v119,
            questRestrictionInfo,
            0LL,
            0,
            v265,
            v98,
            0LL);
          v89 = setupInfob;
          if ( !v118 )
            goto LABEL_75;
          v32 = v278;
          v113 = v118;
          if ( v112 )
          {
            Instance = sub_1B886EC(v112, *(_QWORD *)(*(_QWORD *)v118 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          v116 = v118[6];
          this = v271;
        }
        else if ( v106 )
        {
          v124 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_FollowerInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v124,
            (Il2CppObject *)v92,
            Method_PartyListViewItem___c__DisplayClass27_1___ctor_b__1__,
            0LL);
          v125 = System_Linq_Enumerable__Where_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v279,
                   (System_Func_TSource__bool__o *)v124,
                   (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
          v126 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B886EC(v125, FollowerInfo___TypeInfo);
          if ( !v126 )
            v126 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                          v125,
                                                                          (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
          if ( System_Linq_Enumerable__Any_object_(
                 v126,
                 (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
          {
            Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                                  v126,
                                  0,
                                  (const MethodInfo_2E9FD1C *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
            v32 = v278;
            v127 = (FollowerInfo_o *)Instance;
          }
          else
          {
            v32 = v278;
            Instance = (__int64)v279;
            if ( !v279 )
              goto LABEL_75;
            if ( v279->fields._size < 1 )
            {
LABEL_221:
              v128 = (unsigned int *)*p_memberList;
              goto LABEL_236;
            }
            v136 = 0;
            while ( 1 )
            {
              Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v136,
                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
              if ( !Instance || !NpcServantFollowerIds )
                goto LABEL_75;
              if ( v88 >= NpcServantFollowerIds->max_length )
                goto LABEL_411;
              if ( *(_QWORD *)(Instance + 80) != *((_QWORD *)&m_Items->klass + v88) )
              {
                Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                      v279,
                                      v136,
                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
                if ( !Instance )
                  goto LABEL_75;
                if ( v256 < v136 && *(int *)(Instance + 88) <= 0 )
                  break;
              }
              Instance = (__int64)v279;
              if ( ++v136 >= v279->fields._size )
                goto LABEL_221;
            }
            Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                  v279,
                                  v136,
                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
            v127 = (FollowerInfo_o *)Instance;
            v256 = v136;
          }
          v128 = (unsigned int *)*p_memberList;
          if ( !v127 )
          {
            NpcServantFollowerIds = v273;
LABEL_236:
            v135 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_32066372(v135, v88, 0, setupInfo, questRestrictionInfo, 0, v98, 0LL);
            if ( !v128 )
              goto LABEL_75;
            goto LABEL_237;
          }
          userSvtLeaderHash = v127->fields.userSvtLeaderHash;
          if ( !userSvtLeaderHash )
            goto LABEL_75;
          if ( !userSvtLeaderHash->max_length )
            goto LABEL_411;
          v130 = userSvtLeaderHash->m_Items[0];
          if ( !v130 )
            goto LABEL_75;
          classId = v130->fields.classId;
          v132 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32029524(
            v132,
            v88,
            v127,
            classId,
            setupInfo,
            questRestrictionInfo,
            0LL,
            1,
            v265,
            v98,
            0LL);
          if ( !v128 )
            goto LABEL_75;
          v32 = v278;
          NpcServantFollowerIds = v273;
          v113 = v128;
          v112 = v132;
          if ( v132 )
          {
            Instance = sub_1B886EC(v132, *(_QWORD *)(*(_QWORD *)v113 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          v116 = v113[6];
        }
        else
        {
          if ( !NpcServantFollowerIds )
            goto LABEL_75;
          v32 = v278;
          if ( v88 >= NpcServantFollowerIds->max_length )
            goto LABEL_411;
          if ( *((_QWORD *)&m_Items->klass + v88) )
          {
            Instance = System_Linq_Enumerable__Count_object_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v279,
                         (const MethodInfo_2E9CA20 *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
            if ( (int)Instance < 1 )
            {
LABEL_203:
              v128 = (unsigned int *)*p_memberList;
            }
            else
            {
              if ( !v279 )
                goto LABEL_75;
              v133 = v279;
              v134 = 0;
              while ( 1 )
              {
                Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                      v133,
                                      v134,
                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
                if ( !Instance )
                  goto LABEL_75;
                if ( v88 >= NpcServantFollowerIds->max_length )
                  goto LABEL_411;
                if ( *(_QWORD *)(Instance + 80) == *((_QWORD *)&m_Items->klass + v88) )
                  break;
                v133 = v279;
                if ( ++v134 >= System_Linq_Enumerable__Count_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)v279,
                                 (const MethodInfo_2E9CA20 *)Method_System_Linq_Enumerable_Count_FollowerInfo___) )
                  goto LABEL_203;
              }
              Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                    v279,
                                    v134,
                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
              v148 = (unsigned int *)*p_memberList;
              if ( Instance )
              {
                v149 = *(_QWORD *)(Instance + 40);
                v150 = (FollowerInfo_o *)Instance;
                if ( !v149 )
                  goto LABEL_75;
                if ( !*(_DWORD *)(v149 + 24) )
                  goto LABEL_411;
                v151 = *(_QWORD *)(v149 + 32);
                if ( !v151 )
                  goto LABEL_75;
                v259 = *(_DWORD *)(v151 + 32);
                v112 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
                PartyOrganizationListViewItem___ctor_32029524(
                  v112,
                  v88,
                  v150,
                  v259,
                  setupInfo,
                  questRestrictionInfo,
                  0LL,
                  1,
                  v265,
                  v98,
                  0LL);
                if ( !v148 )
                  goto LABEL_75;
                v32 = v278;
                v113 = v148;
LABEL_208:
                if ( !v112 )
                {
LABEL_239:
                  v116 = v113[6];
                  goto LABEL_240;
                }
LABEL_238:
                Instance = sub_1B886EC(v112, *(_QWORD *)(*(_QWORD *)v113 + 64LL));
                if ( !Instance )
                  goto LABEL_412;
                goto LABEL_239;
              }
              v32 = v278;
              v128 = (unsigned int *)*p_memberList;
            }
            v135 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_32066372(v135, v88, 0, setupInfo, questRestrictionInfo, 1, v98, 0LL);
            if ( !v128 )
              goto LABEL_75;
LABEL_237:
            v113 = v128;
            v112 = v135;
            if ( !v135 )
              goto LABEL_239;
            goto LABEL_238;
          }
          if ( (v258 & 1) != 0 )
          {
            if ( !userServantList )
              goto LABEL_75;
            if ( v88 >= userServantList->max_length )
              goto LABEL_411;
            v137 = isFixNpc[v88];
            if ( v137 )
            {
              v139 = *(_QWORD *)&v137->fields.svtId.fields.currentCryptoKey;
              v138 = *(_QWORD *)&v137->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v290.fields.currentCryptoKey = v139;
              *(_QWORD *)&v290.fields.fakeValue = v138;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v290, 0LL);
              if ( v88 >= userServantList->max_length )
                goto LABEL_411;
              v140 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)isFixNpc[v88];
              if ( !v140 )
                goto LABEL_75;
              v141 = Instance;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v140[6], 0LL);
              if ( v88 >= userServantList->max_length )
                goto LABEL_411;
              v142 = Instance;
              Instance = (__int64)isFixNpc[v88];
              if ( !Instance )
                goto LABEL_75;
              DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
              Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                           questRestrictionInfo,
                           v141,
                           v142,
                           DispLimitCount,
                           v98,
                           0,
                           0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( v88 >= userServantList->max_length )
                  goto LABEL_411;
                isFixNpc[v88] = 0LL;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&isFixNpc[(unsigned __int64)j / 8], 0, v144, v145);
              }
            }
          }
          else if ( !userServantList )
          {
            goto LABEL_75;
          }
          if ( v88 >= userServantList->max_length )
            goto LABEL_411;
          v152 = this;
          v153 = isFixNpc[v88];
          v154 = (unsigned int *)*p_memberList;
          if ( !v153 )
          {
            v112 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_32066372(v112, v88, 0, setupInfo, questRestrictionInfo, 1, v98, 0LL);
            v32 = v278;
            if ( !v154 )
              goto LABEL_75;
            v113 = v154;
            this = v152;
            goto LABEL_208;
          }
          EquipList = UserEventDeckEntity__GetEquipList(deck, v88, 0LL);
          v112 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32057164(
            v112,
            v88,
            v153,
            EquipList,
            setupInfo,
            questRestrictionInfo,
            0LL,
            v98,
            0LL,
            0,
            0LL);
          if ( !v154 )
            goto LABEL_75;
          v32 = v278;
          v113 = v154;
          if ( v112 )
          {
            Instance = sub_1B886EC(v112, *(_QWORD *)(*(_QWORD *)v154 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          v116 = v154[6];
          this = v152;
        }
      }
      else
      {
        v107 = (FollowerInfo_o *)Instance;
        if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0LL) )
          v108 = 0;
        else
          v108 = v264;
        IsNpc = FollowerInfo__get_IsNpc(v107, 0LL);
        v110 = (unsigned int *)*p_memberList;
        if ( IsNpc )
          v111 = 0;
        else
          v111 = v265;
        v112 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
        initPos = v98;
        v113 = v110;
        PartyOrganizationListViewItem___ctor_32029524(
          v112,
          v88,
          v107,
          v108,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v111,
          initPos,
          0LL);
        if ( !v110 )
          goto LABEL_75;
        v32 = v278;
        if ( v112 )
        {
          Instance = sub_1B886EC(v112, *(_QWORD *)(*(_QWORD *)v110 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        v116 = v110[6];
        this = v271;
        NpcServantFollowerIds = v273;
        v89 = setupInfob;
      }
LABEL_240:
      if ( v88 >= v116 )
        goto LABEL_411;
      *(_QWORD *)&v113[2 * v88 + 8] = v112;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v113[(unsigned __int64)j / 4 + 8], (int32_t)v112, v114, v115);
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_75;
      if ( v88 >= memberList->max_length )
        goto LABEL_411;
      Instance = (__int64)memberList->m_Items[v88];
      if ( !Instance )
        goto LABEL_75;
      cost = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                        + cost;
      ++v88;
    }
  }
  v274 = questRestrictionInfo->fields.myServantNumMax
       + (FollowerIndex > 0 && !questRestrictionInfo->fields.isNotTransitionSupportList);
  if ( !isNew )
  {
    if ( !userServantList )
      goto LABEL_75;
    if ( (int)userServantList->max_length >= 1 )
    {
      v155 = 0LL;
      v156 = 0;
      v157 = 0LL;
      v158 = userServantList->m_Items;
      while ( 1 )
      {
        v159 = sub_1B887FC(PartyListViewItem___c__DisplayClass27_2_TypeInfo);
        System_Object___ctor((Il2CppObject *)v159, 0LL);
        if ( !v159 )
          goto LABEL_75;
        v160 = v157 + 1;
        *(_DWORD *)(v159 + 16) = v157 + 1;
        if ( v157 >= userServantList->max_length )
          goto LABEL_411;
        if ( v158[v157] )
          ++v156;
        v161 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v161,
          (Il2CppObject *)v159,
          Method_PartyListViewItem___c__DisplayClass27_2___ctor_b__2__,
          0LL);
        Instance = (__int64)System_Linq_Enumerable__Where_object_(
                              (System_Collections_Generic_IEnumerable_TSource__o *)npcFollowerInfoList,
                              (System_Func_TSource__bool__o *)v161,
                              (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
        v164 = userServantList->max_length;
        if ( v157 >= v164 )
          goto LABEL_411;
        questRestrictionInfo = v276;
        v32 = v278;
        if ( v158[v157] )
        {
          if ( *(_DWORD *)(v159 + 16) > DeckMemberMax )
            goto LABEL_276;
          Instance = System_Linq_Enumerable__Any_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                       (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
          if ( v156 > v274 || (Instance & 1) != 0 )
            break;
        }
LABEL_278:
        ++v155;
        ++v157;
        if ( v160 >= (int)userServantList->max_length )
          goto LABEL_279;
      }
      v164 = userServantList->max_length;
LABEL_276:
      if ( v157 >= v164 )
        goto LABEL_411;
      v158[v157] = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v158[v155], 0, v162, v163);
      goto LABEL_278;
    }
  }
LABEL_279:
  v165 = setupInfoa;
  v166 = 0LL;
  v167 = DeckMemberMax;
  v266 = 0;
LABEL_280:
  v168 = 8 * v166 + 32;
  for ( k = v166; ; ++k )
  {
    v170 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v170 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)k >= v170->static_fields->DeckMemberMax )
      break;
    v171 = sub_1B887FC(PartyListViewItem___c__DisplayClass27_3_TypeInfo);
    System_Object___ctor((Il2CppObject *)v171, 0LL);
    if ( v281 )
    {
      v173 = deck->fields.deckInfo;
      if ( !v173 )
        goto LABEL_75;
      v174 = v173->fields.svts;
      if ( !v174 )
        goto LABEL_75;
      if ( k >= v174->max_length )
        goto LABEL_411;
      v175 = *(__int64 *)((char *)&v174->obj.klass + v168);
      if ( !v175 )
        goto LABEL_75;
      v176 = (int32_t *)(v175 + 76);
    }
    else
    {
      Instance = (__int64)PartyListViewItem__GetMember(v32, k, v172);
      if ( !Instance )
        goto LABEL_75;
      v176 = (int32_t *)(Instance + 348);
    }
    v177 = *v176;
    if ( (__int64)k < v167 )
    {
      if ( !v171 )
        goto LABEL_75;
      v166 = k + 1;
      *(_DWORD *)(v171 + 16) = k + 1;
      v286 = 0LL;
      v285 = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(questRestrictionInfo, v177, 0LL);
      v183 = Instance;
      if ( (Instance & 1) == 0 )
        goto LABEL_307;
      v184 = deck->fields.deckInfo;
      if ( !v184 )
        goto LABEL_75;
      v185 = v184->fields.svts;
      if ( !v185 )
        goto LABEL_75;
      if ( k >= v185->max_length )
        goto LABEL_411;
      v186 = *(__int64 *)((char *)&v185->obj.klass + v168);
      if ( !v186 )
        goto LABEL_75;
      v187 = *(_QWORD *)(v186 + 64);
      if ( v187 >= 1 )
      {
        if ( *(_DWORD *)(v171 + 16) == v263 )
        {
          isFixNpca = 1;
          v257 = 0;
          v261 = 1;
          goto LABEL_313;
        }
        v257 = 0;
        v261 = PartyListViewItem__SetNpcFollowerInfo(this, &v286, &v285, npcFollowerInfoList, v187, v177, v182);
LABEL_312:
        isFixNpca = 1;
        goto LABEL_313;
      }
LABEL_307:
      if ( !v268 || questRestrictionInfo->fields.isNotTransitionSupportList )
      {
        v257 = 0;
        v261 = 0;
        goto LABEL_312;
      }
      v188 = *(_DWORD *)(v171 + 16);
      isFixNpca = v188 != FollowerIndex;
      v257 = v188 == FollowerIndex;
      v261 = 0;
LABEL_313:
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v177, 0LL);
      if ( NpcFollowerInfo && ((v183 ^ 1) & 1) == 0 )
      {
        v190 = NpcFollowerInfo;
        if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0LL) )
          v191 = 0;
        else
          v191 = v264;
        v192 = FollowerInfo__get_IsNpc(v190, 0LL);
        v193 = (unsigned int *)*p_memberList;
        if ( v192 )
          v194 = 0;
        else
          v194 = v265;
        followerDeckIda = v194;
        v165 = setupInfoa;
        v195 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32029524(
          v195,
          k,
          v190,
          v191,
          setupInfoa,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          followerDeckIda,
          v177,
          0LL);
        if ( !v193 )
          goto LABEL_75;
        v32 = v278;
        if ( v195 )
        {
          Instance = sub_1B886EC(v195, *(_QWORD *)(*(_QWORD *)v193 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        if ( k >= v193[6] )
          goto LABEL_411;
        *(_QWORD *)((char *)v193 + v168) = v195;
        sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v193 + v168), (int32_t)v195, v196, v197);
        v198 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_75;
        if ( k >= v198->max_length )
          goto LABEL_411;
        v166 = k + 1;
        this = v271;
        v199 = deck->fields.deckInfo;
        if ( !v199 )
          goto LABEL_75;
        v200 = v199->fields.svts;
        if ( !v200 )
          goto LABEL_75;
        if ( k >= v200->max_length )
          goto LABEL_411;
        v201 = *(__int64 *)((char *)&v200->obj.klass + v168);
        if ( !v201 )
          goto LABEL_75;
        v202 = *(__int64 *)((char *)&v198->obj.klass + v168);
        if ( !v202 )
          goto LABEL_75;
        *(_DWORD *)(v202 + 348) = *(_DWORD *)(v201 + 76);
        ++v266;
        goto LABEL_280;
      }
      if ( v261 || *(_DWORD *)(v171 + 16) == FollowerIndex )
      {
        v203 = v286;
        v204 = (unsigned int *)*p_memberList;
        if ( v286 )
        {
          v253 = (unsigned int *)*p_memberList;
          v205 = v285;
          v206 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
          v207 = v205;
          v204 = v253;
          v208 = v206;
          PartyOrganizationListViewItem___ctor_32029524(
            v206,
            k,
            v203,
            v207,
            v165,
            questRestrictionInfo,
            0LL,
            isFixNpca,
            v265,
            v177,
            0LL);
          if ( !v253 )
            goto LABEL_75;
          v32 = v278;
          if ( !v208 )
          {
LABEL_365:
            if ( k >= v204[6] )
              goto LABEL_411;
            *(_QWORD *)((char *)v204 + v168) = v208;
            sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v204 + v168), (int32_t)v208, v209, v210);
            v225 = *p_memberList;
            if ( !*p_memberList )
              goto LABEL_75;
            if ( k >= v225->max_length )
              goto LABEL_411;
            v226 = deck->fields.deckInfo;
            if ( !v226 )
              goto LABEL_75;
            v227 = v226->fields.svts;
            if ( !v227 )
              goto LABEL_75;
            if ( k >= v227->max_length )
              goto LABEL_411;
            v228 = *(__int64 *)((char *)&v227->obj.klass + v168);
            if ( !v228 )
              goto LABEL_75;
            v229 = *(__int64 *)((char *)&v225->obj.klass + v168);
            if ( !v229 )
              goto LABEL_75;
            *(_DWORD *)(v229 + 348) = *(_DWORD *)(v228 + 76);
            v266 += v257 || v261;
            goto LABEL_280;
          }
        }
        else
        {
          v211 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
          v208 = v211;
          if ( v268 )
            PartyOrganizationListViewItem___ctor_32029524(
              v211,
              k,
              v268,
              v264,
              v165,
              questRestrictionInfo,
              0LL,
              isFixNpca,
              v265,
              v177,
              0LL);
          else
            PartyOrganizationListViewItem___ctor_32066372(v211, k, 1, v165, questRestrictionInfo, 1, v177, 0LL);
          v32 = v278;
          if ( !v204 )
            goto LABEL_75;
          if ( !v208 )
            goto LABEL_365;
        }
        Instance = sub_1B886EC(v208, *(_QWORD *)(*(_QWORD *)v204 + 64LL));
        if ( !Instance )
          goto LABEL_412;
        goto LABEL_365;
      }
      v212 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v212,
        (Il2CppObject *)v171,
        Method_PartyListViewItem___c__DisplayClass27_3___ctor_b__3__,
        0LL);
      v213 = System_Linq_Enumerable__Where_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v279,
               (System_Func_TSource__bool__o *)v212,
               (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v214 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B886EC(v213, FollowerInfo___TypeInfo);
      if ( !v214 )
        v214 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                      v213,
                                                                      (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
      Instance = System_Linq_Enumerable__Any_object_(
                   v214,
                   (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( v266 < v274 && (Instance & 1) == 0 )
      {
        if ( (v183 & 1) != 0 )
        {
          v215 = userServantList;
          if ( !userServantList )
            goto LABEL_75;
          if ( k >= userServantList->max_length )
            goto LABEL_411;
          v216 = *(__int64 *)((char *)&userServantList->obj.klass + v168);
          if ( v216 )
          {
            v218 = *(_QWORD *)(v216 + 80);
            v217 = *(_QWORD *)(v216 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v291.fields.currentCryptoKey = v218;
            *(_QWORD *)&v291.fields.fakeValue = v217;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v291, 0LL);
            if ( k >= userServantList->max_length )
              goto LABEL_411;
            v219 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&userServantList->obj.klass + v168);
            if ( !v219 )
              goto LABEL_75;
            v220 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v219[6], 0LL);
            if ( k >= userServantList->max_length )
              goto LABEL_411;
            v221 = Instance;
            Instance = *(__int64 *)((char *)&userServantList->obj.klass + v168);
            if ( !Instance )
              goto LABEL_75;
            v222 = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
            questRestrictionInfo = v276;
            Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(v276, v220, v221, v222, v177, 0, 0LL);
            v215 = userServantList;
            if ( (Instance & 1) != 0 )
            {
              if ( k >= userServantList->max_length )
                goto LABEL_411;
              *(Il2CppClass **)((char *)&userServantList->obj.klass + v168) = 0LL;
              sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)userServantList + v168), 0, v223, v224);
            }
          }
        }
        else
        {
          v215 = userServantList;
          if ( !userServantList )
            goto LABEL_75;
        }
        if ( k >= v215->max_length )
          goto LABEL_411;
        v238 = *(UserServantEntity_o **)((char *)&v215->obj.klass + v168);
        v239 = (unsigned int *)*p_memberList;
        if ( v238 )
        {
          v240 = UserEventDeckEntity__GetEquipList(deck, k, 0LL);
          v241 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32057164(
            v241,
            k,
            v238,
            v240,
            setupInfoa,
            questRestrictionInfo,
            0LL,
            v177,
            0LL,
            0,
            0LL);
          v166 = k + 1;
          if ( !v239 )
            goto LABEL_75;
          v32 = v278;
        }
        else
        {
          v241 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32066372(v241, k, 0, setupInfoa, questRestrictionInfo, 1, v177, 0LL);
          v32 = v278;
          v166 = k + 1;
          if ( !v239 )
            goto LABEL_75;
        }
        if ( v241 )
        {
          Instance = sub_1B886EC(v241, *(_QWORD *)(*(_QWORD *)v239 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        if ( k >= v239[6] )
          goto LABEL_411;
        *(_QWORD *)((char *)v239 + v168) = v241;
        sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v239 + v168), (int32_t)v241, v242, v243);
        ++v266;
        goto LABEL_402;
      }
      if ( System_Linq_Enumerable__Any_object_(
             v214,
             (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
      {
        Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                              v214,
                              0,
                              (const MethodInfo_2E9FD1C *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
        goto LABEL_377;
      }
      Instance = (__int64)v279;
      if ( !v279 )
        goto LABEL_75;
      if ( v279->fields._size <= (int)k - v266 )
      {
        v231 = (unsigned int *)*p_memberList;
      }
      else
      {
        Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                              v279,
                              (int)k - v266,
                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
LABEL_377:
        v230 = (FollowerInfo_o *)Instance;
        v231 = (unsigned int *)*p_memberList;
        if ( Instance )
        {
          v232 = *(_QWORD *)(Instance + 40);
          if ( !v232 )
            goto LABEL_75;
          if ( !*(_DWORD *)(v232 + 24) )
            goto LABEL_411;
          v233 = *(_QWORD *)(v232 + 32);
          if ( !v233 )
            goto LABEL_75;
          v234 = *(_DWORD *)(v233 + 32);
          v235 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32029524(
            v235,
            k,
            v230,
            v234,
            setupInfoa,
            questRestrictionInfo,
            0LL,
            1,
            v265,
            v177,
            0LL);
          if ( !v231 )
            goto LABEL_75;
          v32 = v278;
          if ( v235 )
          {
            Instance = sub_1B886EC(v235, *(_QWORD *)(*(_QWORD *)v231 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          if ( k >= v231[6] )
            goto LABEL_411;
          *(_QWORD *)((char *)v231 + v168) = v235;
          sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v231 + v168), (int32_t)v235, v236, v237);
LABEL_402:
          v247 = this->fields.memberList;
          v165 = setupInfoa;
          if ( !v247 )
            goto LABEL_75;
          if ( k >= v247->max_length )
            goto LABEL_411;
          Instance = *(__int64 *)((char *)&v247->obj.klass + v168);
          if ( !Instance )
            goto LABEL_75;
          v248 = this->fields.cost;
          this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                                (PartyOrganizationListViewItem_o *)Instance,
                                0LL)
                            + v248;
          goto LABEL_280;
        }
      }
      v244 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32066372(v244, k, 0, setupInfoa, questRestrictionInfo, 0, v177, 0LL);
      if ( !v231 )
        goto LABEL_75;
      if ( v244 )
      {
        Instance = sub_1B886EC(v244, *(_QWORD *)(*(_QWORD *)v231 + 64LL));
        if ( !Instance )
          goto LABEL_412;
      }
      if ( k >= v231[6] )
        goto LABEL_411;
      *(_QWORD *)((char *)v231 + v168) = v244;
      sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v231 + v168), (int32_t)v244, v245, v246);
      v32 = v278;
      goto LABEL_402;
    }
    v178 = (unsigned int *)*p_memberList;
    v179 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_32066372(v179, k, 0, v165, questRestrictionInfo, 1, v177, 0LL);
    if ( !v178 )
      goto LABEL_75;
    if ( v179 )
    {
      Instance = sub_1B886EC(v179, *(_QWORD *)(*(_QWORD *)v178 + 64LL));
      if ( !Instance )
        goto LABEL_412;
    }
    if ( k >= v178[6] )
      goto LABEL_411;
    *(_QWORD *)((char *)v178 + v168) = v179;
    sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v178 + v168), (int32_t)v179, v180, v181);
    v168 += 8LL;
  }
LABEL_406:
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)v26);
  if ( (questRestrictionInfo->fields.isNpcEditablePos || !questRestrictionInfo->fields.isNpcOnlyBattle)
    && !PartyListViewItem__GetStartDeckCondition(this, v249) )
  {
    *isBaseModify = 1;
  }
}


void __fastcall PartyListViewItem___ctor_31935548(
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
  int32_t v15; // w2
  int32_t v16; // w3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x29
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 Master_object; // x0
  __int64 v21; // x1
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *UserServantList; // x0
  BalanceConfig_c *v24; // x8
  struct PartyOrganizationListViewItem_array *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_List_int__o *v28; // x28
  int v29; // w8
  __int64 v30; // x29
  unsigned int v31; // w19
  __int64 v32; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  struct System_Int32_array *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w28
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v41; // w24
  struct DeckServant_o *v42; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v44; // x8
  UserServantEntity_array *v45; // x9
  int32_t initPos; // w27
  UserServantEntity_o *v47; // x29
  struct PartyOrganizationListViewItem_array *v48; // x19
  __int128 v49; // q0
  int64_t v50; // x0
  System_Int64_array *v51; // x21
  struct DeckServant_o *v52; // x8
  struct DeckServantData_array *v53; // x8
  DeckServantData_o *v54; // x8
  System_Int32_array *equipSvtIdList; // x24
  PartyOrganizationListViewItem_o *v56; // x20
  int32_t v57; // w2
  int32_t v58; // w3
  unsigned int max_length; // w8
  Il2CppClass **v60; // x0
  struct PartyOrganizationListViewItem_array *v61; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v64; // x0
  UserEventDeckEntity_o *v65; // [xsp+18h] [xbp-D8h]
  int v66; // [xsp+24h] [xbp-CCh]
  UserServantEntity_array *v67; // [xsp+28h] [xbp-C8h]
  int32_t v70; // [xsp+44h] [xbp-ACh]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+48h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+70h] [xbp-80h]

  if ( (byte_4A56F71 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItem___TypeInfo);
    sub_1B885B0(&PartyOrganizationListViewItem_TypeInfo);
    byte_4A56F71 = 1;
  }
  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v15, v16);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v18,
    v19);
  if ( !deck )
    goto LABEL_69;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_69;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  this->fields._IsWaveBattleRestart_k__BackingField = restartWave > 0;
  v70 = index + 1;
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, index + 1, restartWave > 0, 0LL);
  v24 = BalanceConfig_TypeInfo;
  v67 = UserServantList;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v24 = BalanceConfig_TypeInfo;
  }
  v25 = (struct PartyOrganizationListViewItem_array *)sub_1B88658(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v24->static_fields->DeckMemberMax);
  this->fields.memberList = v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.memberList, (int32_t)v25, v26, v27);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  v28 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
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
  v29 = *(_DWORD *)(Master_object + 24);
  v30 = Master_object;
  if ( v29 >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      if ( v31 >= v29 )
LABEL_70:
        sub_1B88814(Master_object, v21);
      v32 = *(_QWORD *)(v30 + 8LL * (int)v31 + 32);
      if ( !v32 )
        break;
      if ( *(_DWORD *)(v32 + 56) == v70 )
      {
        if ( !v28 )
          break;
        Master_object = System_Collections_Generic_List_int___Contains(
                          v28,
                          *(_DWORD *)(v32 + 32),
                          (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Master_object & 1) == 0 )
        {
          v21 = *(unsigned int *)(v32 + 32);
          items = v28->fields._items;
          v34 = Method_System_Collections_Generic_List_int__Add__;
          ++v28->fields._version;
          if ( !items )
            break;
          size = v28->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v28,
              v21,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v28->fields._size = size + 1;
            items->m_Items[size + 1] = v21;
          }
        }
      }
      v29 = *(_DWORD *)(v30 + 24);
      if ( (int)++v31 >= v29 )
        goto LABEL_24;
    }
LABEL_69:
    sub_1B8880C(Master_object, v21);
  }
LABEL_24:
  if ( !v28 )
    goto LABEL_69;
  v36 = System_Collections_Generic_List_int___ToArray(
          v28,
          (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.waveBattleEnemyClassIds = v36;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.waveBattleEnemyClassIds, (int32_t)v36, v37, v38);
  this->fields._IsClearedWave_k__BackingField = v70 < restartWave;
  Master_object = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Master_object = (__int64)BalanceConfig_TypeInfo;
  }
  v39 = 0;
  v65 = deck;
  v66 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 160LL) * index;
  while ( 1 )
  {
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      Master_object = (__int64)BalanceConfig_TypeInfo;
    }
    static_fields = *(struct BalanceConfig_StaticFields **)(Master_object + 184);
    if ( v39 >= static_fields->DeckMemberMax )
      break;
    if ( !*(_DWORD *)(Master_object + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_object);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v41 = v66 + v39;
    if ( v39 < static_fields->DeckMainMemberMax )
    {
      v42 = deck->fields.deckInfo;
      if ( !v42 )
        goto LABEL_69;
      svts = v42->fields.svts;
      if ( !svts )
        goto LABEL_69;
      if ( v41 >= svts->max_length )
        goto LABEL_70;
      v44 = svts->m_Items[v41];
      v45 = v67;
      if ( !v44 )
        goto LABEL_69;
      initPos = v44->fields.initPos;
    }
    else
    {
      v45 = v67;
      initPos = v39 + 1;
    }
    if ( !v45 )
      goto LABEL_69;
    if ( v39 >= v45->max_length )
      goto LABEL_70;
    v47 = v45->m_Items[v39];
    v48 = *p_memberList;
    if ( v47 )
    {
      v49 = *(_OWORD *)&v47->fields.id.fields.fakeValue;
      *(_OWORD *)&v73.fields.currentCryptoKey = *(_OWORD *)&v47->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v73.fields.fakeValue = v49;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v72 = v73;
      v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v72, 0LL);
      Master_object = (__int64)UserEventDeckEntity__GetEquipList_40074356(deck, v50, restartWave > 0, 0LL);
      v51 = (System_Int64_array *)Master_object;
      if ( restartWave < 1 )
      {
        equipSvtIdList = 0LL;
      }
      else
      {
        v52 = deck->fields.deckInfo;
        if ( !v52 )
          goto LABEL_69;
        v53 = v52->fields.svts;
        if ( !v53 )
          goto LABEL_69;
        if ( v41 >= v53->max_length )
          goto LABEL_70;
        v54 = v53->m_Items[v41];
        if ( !v54 )
          goto LABEL_69;
        equipSvtIdList = v54->fields.svtEquipIds;
      }
      v56 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32057164(
        v56,
        v39,
        v47,
        v51,
        setupInfo,
        questRestrictionInfo,
        0LL,
        initPos,
        equipSvtIdList,
        v70 < restartWave,
        0LL);
      if ( !v48 )
        goto LABEL_69;
      if ( v56 )
      {
        Master_object = sub_1B886EC(v56, v48->obj.klass->_1.element_class);
        if ( !Master_object )
        {
LABEL_71:
          v64 = sub_1B88830();
          sub_1B886D8(v64, 0LL);
        }
      }
      max_length = v48->max_length;
      deck = v65;
    }
    else
    {
      v56 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32066372(v56, v39, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
      if ( !v48 )
        goto LABEL_69;
      if ( v56 )
      {
        Master_object = sub_1B886EC(v56, v48->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_71;
      }
      max_length = v48->max_length;
    }
    if ( v39 >= max_length )
      goto LABEL_70;
    v60 = &v48->obj.klass + v39;
    v60[4] = (Il2CppClass *)v56;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v60 + 4), (int32_t)v56, v57, v58);
    v61 = *p_memberList;
    if ( !*p_memberList )
      goto LABEL_69;
    if ( v39 >= v61->max_length )
      goto LABEL_70;
    Master_object = (__int64)v61->m_Items[v39];
    if ( !Master_object )
      goto LABEL_69;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)Master_object,
      this->fields.waveBattleEnemyClassIds,
      0LL);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_69;
    if ( v39 >= memberList->max_length )
      goto LABEL_70;
    Master_object = (__int64)memberList->m_Items[v39];
    if ( !Master_object )
      goto LABEL_69;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)Master_object,
                          0LL)
                      + cost;
    Master_object = (__int64)BalanceConfig_TypeInfo;
    ++v39;
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

  if ( (byte_4A56F84 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A56F84 = 1;
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
    type = questRestrictionInfo->fields.fixedSupportPositionRestrictionEntity[2].fields.type;
    if ( deckMemberCount - v13 >= 1 && v13 < type )
      return 0;
    v18 = this->fields.questRestrictionInfo;
    if ( v18 )
    {
      servantNumMin = v18->fields.servantNumMin;
      if ( !LODWORD(questRestrictionInfo->fields.fixedServantPositionRestrictionEntity) )
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
    sub_1B8880C(questRestrictionInfo, *(_QWORD *)&deckMemberCount);
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

  if ( (byte_4A56F78 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A56F78 = 1;
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
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( IsUseOldMaster )
        {
          sortValue2 = IsUseOldMaster->fields.sortValue2;
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
        sub_1B8880C(IsUseOldMaster, method);
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
    sub_1B88814(IsUseOldMaster, method);
  }
}


void __fastcall PartyListViewItem__ClearDeckName(PartyListViewItem_o *this, const MethodInfo *method)
{
  struct System_String_o *DefaultDeckName; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, method);
  this->fields.deckName = DefaultDeckName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.deckName, (int32_t)DefaultDeckName, v4, v5);
}


void __fastcall PartyListViewItem__ClearEquip(PartyListViewItem_o *this, const MethodInfo *method)
{
  il2cpp_array_size_t i; // w20
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w22

  if ( (byte_4A56F7E & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A56F7E = 1;
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
      sub_1B88814(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v4 )
LABEL_14:
      sub_1B8880C(v4, method);
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

  if ( (byte_4A56F7F & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A56F7F = 1;
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
      sub_1B88814(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v4 )
LABEL_12:
      sub_1B8880C(v4, method);
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
    sub_1B8880C(this, *(_QWORD *)&num);
  }
  if ( v7->max_length <= num )
LABEL_9:
    sub_1B88814(this, *(_QWORD *)&num);
  this = (PartyListViewItem_o *)v7->m_Items[num];
  if ( !this )
    goto LABEL_8;
  PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)this, 0LL);
  PartyListViewItem__CheckRestriction(v5, v8);
}


void __fastcall PartyListViewItem__ClearMember_31938956(PartyListViewItem_o *this, const MethodInfo *method)
{
  il2cpp_array_size_t i; // w20
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8

  if ( (byte_4A56F7D & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A56F7D = 1;
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
      sub_1B88814(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v4 )
LABEL_14:
      sub_1B8880C(v4, method);
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

  if ( (byte_4A56F77 & 1) == 0 )
  {
    sub_1B885B0(&PartyListViewItem_TypeInfo);
    byte_4A56F77 = 1;
  }
  v3 = (PartyListViewItem_o *)sub_1B887FC(PartyListViewItem_TypeInfo);
  PartyListViewItem___ctor(v3, v4);
  if ( !v3 )
    sub_1B8880C(v5, v6);
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
  if ( (byte_4A56F88 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A56F88 = 1;
  }
  if ( !item )
LABEL_17:
    sub_1B8880C(this, item);
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
      sub_1B88814(this, item);
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
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppObject *v14; // x1
  Il2CppClass **v15; // x0

  if ( (byte_4A56F94 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    byte_4A56F94 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
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
      sub_1B88814(AssetName, v4);
    v8 = memberList->m_Items[i];
    if ( v8 )
    {
      AssetName = (Il2CppObject *)PartyOrganizationListViewItem__GetAssetName(v8, 0LL);
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
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            AssetName,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v14;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
        }
      }
    }
  }
  if ( !v3 )
LABEL_21:
    sub_1B8880C(AssetName, v4);
  if ( v3->fields._size < 1 )
    return 0LL;
  else
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    v3,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_4A56F93 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    byte_4A56F93 = 1;
  }
  v6 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)typeMax);
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
      sub_1B8880C(p_image, v5);
    if ( i >= memberList->max_length )
LABEL_21:
      sub_1B88814(p_image, v5);
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
  const MethodInfo_34FD564 **v32; // x25
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
  const MethodInfo_34FD564 **v44; // x28
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

  if ( (byte_4A56F86 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Intersect_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int____get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A56F86 = 1;
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
      sub_1B88814(DeckConditionServantNumAndPosition, method);
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(SvtId, 0LL) >= 1 )
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22, 0LL) >= 1 )
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
      v32 = (const MethodInfo_34FD564 **)&Method_System_Collections_Generic_List_int____get_Item__;
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
    DeckConditionServantNumAndPosition = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
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
                  (const MethodInfo_2EA51C8 *)Method_System_Linq_Enumerable_Intersect_int___);
          v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       v50,
                                                                       (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( System_Collections_Generic_List_Int32Enum___get_Item(
                 v66,
                 v42,
                 (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
          {
            DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                           v51,
                                                           (const MethodInfo_2E8CDAC *)Method_System_Linq_Enumerable_Any_int___);
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
                                                         (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          v32 = v44;
          if ( (_DWORD)DeckConditionServantNumAndPosition == 2 )
          {
            DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                           v51,
                                                           (const MethodInfo_2E8CDAC *)Method_System_Linq_Enumerable_Any_int___);
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
    sub_1B8880C(DeckConditionServantNumAndPosition, method);
  v57 = *(_QWORD *)&v55->fields.baseSvtId.fields.currentCryptoKey;
  v56 = *(_QWORD *)&v55->fields.baseSvtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v67.fields.currentCryptoKey = v57;
  *(_QWORD *)&v67.fields.fakeValue = v56;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v67, 0LL);
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
        if ( v58 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v68, 0LL) )
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

  if ( (byte_4A56F85 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A56F85 = 1;
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
    sub_1B8880C(questRestrictionInfo, v11);
  FixedServantPositionCount = QuestRestrictionInfo__GetFixedServantPositionCount(questRestrictionInfo, 0LL);
  v15 = 0;
  questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
  while ( 1 )
  {
    if ( !LODWORD(questRestrictionInfo->fields.fixedServantPositionRestrictionEntity) )
    {
      j_il2cpp_runtime_class_init_0(questRestrictionInfo);
      questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v15 >= SHIDWORD(questRestrictionInfo->fields.fixedSupportPositionRestrictionEntity[2].fields.name) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( v15 >= memberList->max_length )
      sub_1B88814(questRestrictionInfo, v11);
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

  if ( (byte_4A56F8B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    byte_4A56F8B = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
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
      sub_1B88814(EquipUserSvtId, v5);
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
          *(const MethodInfo_34E5868 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
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
    sub_1B8880C(EquipUserSvtId, v5);
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
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
  int32_t v11; // w2
  int32_t v12; // w3
  unsigned __int64 i; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  EventUpValInfo_array *v15; // x8

  v6 = this;
  if ( (byte_4A56F92 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    this = (PartyListViewItem_o *)sub_1B885B0(&EventUpValInfo___TypeInfo);
    byte_4A56F92 = 1;
  }
  setupInfo = v6->fields.setupInfo;
  if ( setupInfo )
  {
    setupInfo = (struct EventUpValSetupInfo_o *)setupInfo->fields.eventIdList;
    if ( !setupInfo )
LABEL_23:
      sub_1B8880C(this, eventId);
    v8 = *(_QWORD *)&setupInfo->fields.questPhase;
    if ( v8 )
    {
      if ( !(_DWORD)v8 )
LABEL_24:
        sub_1B88814(this, eventId);
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
  v10 = (EventUpValInfo_array *)sub_1B88658(EventUpValInfo___TypeInfo, (unsigned int)v9->static_fields->DeckMemberMax);
  *eventUpValList = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)eventUpValList, (int32_t)v10, v11, v12);
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

  if ( (byte_4A56F74 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_FollowerInfo___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_PartyListViewItem___c__DisplayClass32_0__GetFollowerIndex_b__0__);
    sub_1B885B0(&PartyListViewItem___c__DisplayClass32_0_TypeInfo);
    byte_4A56F74 = 1;
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
      (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v23 = v22;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_int___MoveNext(
             &v23,
             (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
      if ( !v8 )
        break;
      deckInfo = deck->fields.deckInfo;
      if ( !deckInfo )
        sub_1B8880C(v8, v9);
      svts = deckInfo->fields.svts;
      if ( !svts )
        sub_1B8880C(v8, v9);
      current = v23.fields._current;
      if ( v23.fields._current - 1 >= svts->max_length )
        sub_1B88814(v8, v9);
      v13 = svts->m_Items[v23.fields._current - 1];
      if ( !v13 )
        sub_1B8880C(v8, v9);
      v14 = this->fields.questRestrictionInfo;
      if ( !v14 )
        sub_1B8880C(0LL, v9);
      if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(v14, v13->fields.initPos, 0LL) )
        goto LABEL_38;
    }
    current = 0;
LABEL_38:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v23,
      (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    v18 = sub_1B887FC(PartyListViewItem___c__DisplayClass32_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v18, 0LL);
    if ( v18 )
    {
      *(_DWORD *)(v18 + 16) = current;
      v19 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v19,
        (Il2CppObject *)v18,
        Method_PartyListViewItem___c__DisplayClass32_0__GetFollowerIndex_b__0__,
        0LL);
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)fixNpcFollowerInfoList,
              (System_Func_T__bool__o *)v19,
              (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_FollowerInfo___) )
        return current;
      goto LABEL_31;
    }
LABEL_39:
    sub_1B8880C(questRestrictionInfo, deck);
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

  if ( (byte_4A56F91 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A56F91 = 1;
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
      sub_1B8880C(v5, method);
    if ( v3 >= memberList->max_length )
      sub_1B88814(v5, method);
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

  if ( (byte_4A56F90 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&bool___TypeInfo);
    byte_4A56F90 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v5 = (System_Boolean_array *)sub_1B88658(bool___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
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
        sub_1B8880C(v6, v4);
      if ( i >= v5->max_length )
LABEL_18:
        sub_1B88814(v6, v4);
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
    sub_1B8880C(this, num);
  if ( memberList->max_length <= num )
    sub_1B88814(this, num);
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
    sub_1B8880C(this, npcSvtIds);
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
        sub_1B88814(myServantNumMax, npcSvtIds);
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

  if ( (byte_4A56F87 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A56F87 = 1;
  }
  menuKind = this->fields.menuKind;
  if ( menuKind == 1 )
    goto LABEL_4;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( menuKind == 3 )
  {
    if ( !questRestrictionInfo )
LABEL_47:
      sub_1B8880C(questRestrictionInfo, method);
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
        questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
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
        if ( (signed int)v13 >= SHIDWORD(questRestrictionInfo->fields.fixedSupportPositionRestrictionEntity[2].fields.name) )
          break;
        v17 = this->fields.memberList;
        if ( !v17 )
          goto LABEL_47;
        if ( v13 >= v17->max_length )
LABEL_48:
          sub_1B88814(questRestrictionInfo, method);
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
  if ( (byte_4A56F75 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_FollowerInfo___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_FollowerInfo___);
    sub_1B885B0(&System_Func_FollowerInfo__bool__TypeInfo);
    sub_1B885B0(&Method_PartyListViewItem___c__DisplayClass33_0__GetSupportInitIndex_b__0__);
    this = (PartyListViewItem_o *)sub_1B885B0(&PartyListViewItem___c__DisplayClass33_0_TypeInfo);
    byte_4A56F75 = 1;
  }
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_15:
    sub_1B8880C(this, fixNpcFollowerInfoList);
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
      v10 = sub_1B887FC(PartyListViewItem___c__DisplayClass33_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v10, 0LL);
      if ( !v10 )
        goto LABEL_15;
      *(_DWORD *)(v10 + 16) = ++v8;
      v11 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v11,
        (Il2CppObject *)v10,
        Method_PartyListViewItem___c__DisplayClass33_0__GetSupportInitIndex_b__0__,
        0LL);
      v12 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)fixNpcFollowerInfoList,
              (System_Func_TSource__bool__o *)v11,
              (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      if ( !System_Linq_Enumerable__Any_object_(
              v12,
              (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
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
  int32_t v5; // w2
  int32_t v6; // w3
  ServantEntity_array *v7; // x20
  unsigned __int64 v8; // x24
  ServantStatusBattleListViewItem_o *i; // x21
  BalanceConfig_c *v10; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v12; // x8
  ServantStatusBattleListViewItem_c *servantEntity; // x22
  __int64 v15; // x0

  if ( (byte_4A56F8E & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&ServantEntity___TypeInfo);
    byte_4A56F8E = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v7 = (ServantEntity_array *)sub_1B88658(ServantEntity___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  v8 = 0LL;
  for ( i = (ServantStatusBattleListViewItem_o *)v7->m_Items; ; i = (ServantStatusBattleListViewItem_o *)((char *)i + 8) )
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
    if ( v8 >= memberList->max_length )
      goto LABEL_20;
    v12 = memberList->m_Items[v8];
    if ( v12 )
    {
      if ( !v7 )
LABEL_19:
        sub_1B8880C(v10, v4);
      servantEntity = (ServantStatusBattleListViewItem_c *)v12->fields.servantEntity;
      if ( servantEntity )
      {
        v10 = (BalanceConfig_c *)sub_1B886EC(servantEntity, v7->obj.klass->_1.element_class);
        if ( !v10 )
        {
          v15 = sub_1B88830();
          sub_1B886D8(v15, 0LL);
        }
      }
      if ( v8 >= v7->max_length )
LABEL_20:
        sub_1B88814(v10, v4);
      i->klass = servantEntity;
      sub_1B88554(i, (int32_t)servantEntity, v5, v6);
    }
    ++v8;
  }
  return v7;
}


System_String_array *__fastcall PartyListViewItem__GetSvtNameList(PartyListViewItem_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  __int64 v4; // x1
  System_String_array *v5; // x20
  unsigned __int64 v6; // x23
  ServantStatusBattleListViewItem_o *i; // x21
  ServantStatusBattleListViewItem_c *SvtNameText; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A56F8F & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    byte_4A56F8F = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v5 = (System_String_array *)sub_1B88658(string___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  v6 = 0LL;
  for ( i = (ServantStatusBattleListViewItem_o *)v5->m_Items; ; i = (ServantStatusBattleListViewItem_o *)((char *)i + 8) )
  {
    SvtNameText = (ServantStatusBattleListViewItem_c *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      SvtNameText = (ServantStatusBattleListViewItem_c *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v6 >= *((int *)SvtNameText->static_fields + 39) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( v6 >= memberList->max_length )
      goto LABEL_18;
    v10 = memberList->m_Items[v6];
    if ( v10 )
    {
      SvtNameText = (ServantStatusBattleListViewItem_c *)PartyOrganizationListViewItem__get_SvtNameText(v10, 0LL);
      if ( !v5 )
LABEL_17:
        sub_1B8880C(SvtNameText, v4);
      if ( v6 >= v5->max_length )
LABEL_18:
        sub_1B88814(SvtNameText, v4);
      i->klass = SvtNameText;
      sub_1B88554(i, (int32_t)SvtNameText, v11, v12);
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
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_String_o *deckName; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v12; // x23
  int32_t max_length; // w22
  int64_t userEquipId; // x20
  DeckServant_o *v15; // x21
  __int64 v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  struct PartyOrganizationListViewItem_array *v19; // x24
  __int64 v20; // x25
  __int64 v21; // x29
  int v22; // w28
  PartyOrganizationListViewItem_o *v23; // x22
  __int64 v24; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v26; // q0
  System_Int64_array *EquipList; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  _DWORD *v30; // x22
  __int64 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  _DWORD *v35; // x0
  __int64 v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+40h] [xbp-80h]

  if ( (byte_4A56F89 & 1) == 0 )
  {
    sub_1B885B0(&DeckServantData_TypeInfo);
    sub_1B885B0(&DeckServant_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&UserDeckEntity_TypeInfo);
    byte_4A56F89 = 1;
  }
  v5 = sub_1B887FC(UserDeckEntity_TypeInfo);
  UserDeckEntity___ctor((UserDeckEntity_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_29;
  *(_QWORD *)(v5 + 16) = this->fields.id;
  *(_DWORD *)(v5 + 32) = this->fields.index + 1;
  deckName = this->fields.deckName;
  *(_QWORD *)(v5 + 40) = deckName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)deckName, v8, v9);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_29;
  v12 = baseItem ? baseItem : this;
  max_length = memberList->max_length;
  userEquipId = v12->fields.userEquipId;
  v15 = (DeckServant_o *)sub_1B887FC(DeckServant_TypeInfo);
  DeckServant___ctor_38870860(v15, max_length, userEquipId, 0LL);
  *(_QWORD *)(v5 + 48) = v15;
  v16 = v5 + 48;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)v15, v17, v18);
  v19 = v12->fields.memberList;
  if ( !v19 )
    goto LABEL_29;
  v20 = *(_QWORD *)&v19->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = 0LL;
    v22 = 1;
    while ( 1 )
    {
      v23 = v19->m_Items[v21];
      v24 = sub_1B887FC(DeckServantData_TypeInfo);
      DeckServantData___ctor((DeckServantData_o *)v24, 0LL);
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
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v40, 0LL, 0LL);
        v41 = v40;
      }
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v39 = v41;
      *(_QWORD *)(v24 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v39, 0LL);
      *(_BYTE *)(v24 + 56) = v23->fields.isFollower;
      EquipList = PartyOrganizationListViewItem__GetEquipList(v23, 0LL);
      *(_QWORD *)(v24 + 40) = EquipList;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 40), (int32_t)EquipList, v28, v29);
      *(_DWORD *)(v24 + 76) = v23->fields._InitPos_k__BackingField;
      if ( !*(_QWORD *)v16 )
        break;
      v30 = *(_DWORD **)(*(_QWORD *)v16 + 16LL);
      if ( !v30 )
        break;
      v31 = sub_1B886EC(v24, *(_QWORD *)(*(_QWORD *)v30 + 64LL));
      if ( !v31 )
      {
        v38 = sub_1B88830();
        sub_1B886D8(v38, 0LL);
      }
      if ( (unsigned int)(v22 - 1) < v30[6] )
      {
        v35 = &v30[2 * v21];
        *((_QWORD *)v35 + 4) = v24;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 8), v24, v33, v34);
        if ( (_DWORD)v20 == v22 )
          return (UserDeckEntity_o *)v5;
        v21 = v22;
        if ( v22++ < v19->max_length )
          continue;
      }
      sub_1B88814(v31, v32);
    }
LABEL_29:
    sub_1B8880C(v6, v7);
  }
  return (UserDeckEntity_o *)v5;
}


UserEventDeckEntity_o *__fastcall PartyListViewItem__GetUserEventDeck(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 UserId; // x0
  __int64 v5; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x22
  int64_t userEquipId; // x21
  DeckServant_o *v8; // x0
  int32_t max_length; // w1
  DeckServant_o *v10; // x22
  __int64 v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  struct PartyOrganizationListViewItem_array *v14; // x8
  unsigned __int64 v15; // x28
  unsigned __int64 v16; // x9
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
  int32_t v27; // w3
  int32_t InitPos_k__BackingField; // w8
  int v29; // w8
  unsigned int *v30; // x22
  int32_t v31; // w2
  int32_t v32; // w3
  unsigned int *v33; // x0
  __int64 v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+40h] [xbp-80h]

  if ( (byte_4A56F8A & 1) == 0 )
  {
    sub_1B885B0(&DeckServantData_TypeInfo);
    sub_1B885B0(&DeckServant_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&UserEventDeckEntity_TypeInfo);
    byte_4A56F8A = 1;
  }
  v3 = sub_1B887FC(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor((UserEventDeckEntity_o *)v3, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v3 )
    goto LABEL_51;
  *(_QWORD *)(v3 + 16) = UserId;
  *(_DWORD *)(v3 + 24) = this->fields.id;
  *(_DWORD *)(v3 + 28) = this->fields.index + 1;
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_51;
  userEquipId = this->fields.userEquipId;
  v8 = (DeckServant_o *)sub_1B887FC(DeckServant_TypeInfo);
  max_length = memberList->max_length;
  v10 = v8;
  DeckServant___ctor_38870860(v8, max_length, userEquipId, 0LL);
  *(_QWORD *)(v3 + 32) = v10;
  v11 = v3 + 32;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)v10, v12, v13);
  v14 = this->fields.memberList;
  if ( !v14 )
LABEL_51:
    sub_1B8880C(UserId, v5);
  v15 = 0LL;
  while ( 1 )
  {
    v16 = v14->max_length;
    if ( (__int64)v15 >= (int)v16 )
      return (UserEventDeckEntity_o *)v3;
    if ( v15 >= v16 )
      goto LABEL_52;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v18 = v14->m_Items[v15];
    if ( !questRestrictionInfo )
    {
      isNpcEditablePos = 0;
      goto LABEL_24;
    }
    UserId = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
    v19 = this->fields.questRestrictionInfo;
    if ( (UserId & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_51;
      isNpcEditablePos = v19->fields.isNpcEditablePos;
    }
    else
    {
      if ( !v18 || !v19 )
        goto LABEL_51;
      IsEditablePos = QuestRestrictionInfo__IsEditablePos(
                        this->fields.questRestrictionInfo,
                        v18->fields._InitPos_k__BackingField,
                        0LL);
      v19 = this->fields.questRestrictionInfo;
      isNpcEditablePos = IsEditablePos;
      if ( !v19 )
        goto LABEL_24;
    }
    UserId = QuestRestrictionInfo__IsNpcMulitipleOrOnly(v19, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( !v18 )
        goto LABEL_51;
      if ( v18->fields.isFixNpc
        && v18->fields.isFollower
        && !isNpcEditablePos
        && !v18->fields.isMyServantOrNpcRestriction )
      {
        ++v15;
        goto LABEL_47;
      }
    }
LABEL_24:
    v22 = sub_1B887FC(DeckServantData_TypeInfo);
    DeckServantData___ctor((DeckServantData_o *)v22, 0LL);
    if ( !v22 )
      goto LABEL_51;
    *(_DWORD *)(v22 + 16) = v15 + 1;
    if ( !v18 )
      goto LABEL_51;
    userServantEntity = v18->fields.userServantEntity;
    if ( userServantEntity )
    {
      v24 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v38.fields.fakeValue = v24;
    }
    else
    {
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v37, 0LL, 0LL);
      v38 = v37;
    }
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v36 = v38;
    *(_QWORD *)(v22 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v36, 0LL);
    *(_BYTE *)(v22 + 56) = v18->fields.isFollower;
    EquipList = PartyOrganizationListViewItem__GetEquipList(v18, 0LL);
    *(_QWORD *)(v22 + 40) = EquipList;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 40), (int32_t)EquipList, v26, v27);
    InitPos_k__BackingField = v18->fields._InitPos_k__BackingField;
    *(_QWORD *)(v22 + 64) = 0LL;
    *(_DWORD *)(v22 + 76) = InitPos_k__BackingField;
    if ( *(_QWORD *)(v22 + 24) )
    {
      v29 = 0;
LABEL_39:
      if ( (isNpcEditablePos & v29 & 1) != 0 )
      {
        *(_QWORD *)(v22 + 64) = v18->fields.npcFollowerSvtId;
        if ( v18->fields.isFixNpc )
          *(_BYTE *)(v22 + 56) = 0;
      }
      goto LABEL_42;
    }
    if ( !v18->fields.isMyServantOrNpcRestriction || !v18->fields.isFollower )
    {
      v29 = !v18->fields.isMyServantOrNpcRestriction;
      goto LABEL_39;
    }
    *(_QWORD *)(v22 + 64) = v18->fields.npcFollowerSvtId;
LABEL_42:
    if ( !*(_QWORD *)v11 )
      goto LABEL_51;
    v30 = *(unsigned int **)(*(_QWORD *)v11 + 16LL);
    if ( !v30 )
      goto LABEL_51;
    UserId = sub_1B886EC(v22, *(_QWORD *)(*(_QWORD *)v30 + 64LL));
    if ( !UserId )
    {
      v35 = sub_1B88830();
      sub_1B886D8(v35, 0LL);
    }
    if ( v15 >= v30[6] )
LABEL_52:
      sub_1B88814(UserId, v5);
    v33 = &v30[2 * v15];
    *((_QWORD *)v33 + 4) = v22;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v33 + 8), v22, v31, v32);
    ++v15;
LABEL_47:
    v14 = this->fields.memberList;
    if ( !v14 )
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

  if ( (byte_4A56F73 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A56F73 = 1;
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
        sub_1B8880C(v6, userServantList);
      if ( i >= npcSvtIds->max_length )
LABEL_17:
        sub_1B88814(v6, userServantList);
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
      sub_1B8880C(this, userSvtId);
    v6 = 0LL;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
        sub_1B88814(this, userSvtId);
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

  if ( (byte_4A56F82 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A56F82 = 1;
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
      sub_1B88814(v3, method);
    v8 = memberList->m_Items[v5];
    if ( !v8 )
LABEL_12:
      sub_1B8880C(v3, method);
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

  if ( (byte_4A56F81 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A56F81 = 1;
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
      sub_1B88814(v3, method);
    v6 = memberList->m_Items[i];
    if ( !v6 )
LABEL_15:
      sub_1B8880C(v3, method);
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

  if ( (byte_4A56F83 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A56F83 = 1;
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
      sub_1B88814(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[v5];
    if ( !v4 )
LABEL_12:
      sub_1B8880C(v4, method);
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
  if ( (byte_4A56F8C & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A56F8C = 1;
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
          sub_1B88814(this, *(_QWORD *)&svtId);
        this = (PartyListViewItem_o *)memberList->m_Items[v7];
        if ( !this )
          break;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)this, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(EquipSvtId, 0LL) == svtId;
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
      sub_1B8880C(this, *(_QWORD *)&svtId);
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

  if ( (byte_4A56F72 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A56F72 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_29:
    sub_1B8880C(questRestrictionInfo, deck);
  IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  for ( i = 0LL; ; ++i )
  {
    questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    }
    name_high = SHIDWORD(questRestrictionInfo->fields.fixedSupportPositionRestrictionEntity[2].fields.name);
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
      sub_1B88814(questRestrictionInfo, deck);
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
      if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(
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


bool __fastcall PartyListViewItem__IsSpecificMenuKind_31947944(
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

  if ( (byte_4A56F80 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A56F80 = 1;
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
    sub_1B88814(v4, method);
  v4 = memberList->m_Items[0];
  if ( !v4 )
LABEL_16:
    sub_1B8880C(v4, method);
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

  if ( (byte_4A56F79 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A56F79 = 1;
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
      sub_1B88814(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[v5];
    if ( !v4 )
LABEL_12:
      sub_1B8880C(v4, method);
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
  int32_t v7; // w2
  int32_t v8; // w3
  struct EventUpValSetupInfo_o *setupInfo; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int v15; // w23
  il2cpp_array_size_t v16; // w24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v18; // x26
  int32_t v19; // w2
  int32_t v20; // w3
  PartyOrganizationListViewItem_o *v21; // x21
  Il2CppClass **v22; // x0
  struct PartyOrganizationListViewItem_array *v23; // x8
  PartyOrganizationListViewItem_o *v24; // x8
  struct System_String_o *deckName; // x1
  struct System_Int32_array *waveBattleEnemyClassIds; // x1
  struct System_Int32_array **p_waveBattleEnemyClassIds; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x0

  if ( (byte_4A56F7A & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A56F7A = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
LABEL_20:
    sub_1B8880C(v5, v6);
  *(_QWORD *)&this->fields.menuKind = *(_QWORD *)&item->fields.menuKind;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v7, v8);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v11,
    v12);
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
      v5 = (PartyOrganizationListViewItem_o *)sub_1B886EC(v5, v18->obj.klass->_1.element_class);
      if ( !v5 )
      {
        v30 = sub_1B88830();
        sub_1B886D8(v30, 0LL);
      }
    }
    if ( v16 >= v18->max_length )
      goto LABEL_21;
    v22 = &v18->obj.klass + (int)v16;
    v22[4] = (Il2CppClass *)v21;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v21, v19, v20);
    v23 = this->fields.memberList;
    if ( !v23 )
      goto LABEL_20;
    if ( v16 >= v23->max_length )
LABEL_21:
      sub_1B88814(v5, v6);
    v24 = v23->m_Items[v16];
    if ( !v24 )
      goto LABEL_20;
    v24->fields._NowPos_k__BackingField = v15++;
  }
  this->fields.cost = item->fields.cost;
  this->fields.isDeckNameDefault = item->fields.isDeckNameDefault;
  deckName = item->fields.deckName;
  this->fields.deckName = deckName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.deckName, (int32_t)deckName, v13, v14);
  this->fields.userEquipId = item->fields.userEquipId;
  waveBattleEnemyClassIds = item->fields.waveBattleEnemyClassIds;
  this->fields.waveBattleEnemyClassIds = waveBattleEnemyClassIds;
  p_waveBattleEnemyClassIds = &this->fields.waveBattleEnemyClassIds;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)p_waveBattleEnemyClassIds,
    (int32_t)waveBattleEnemyClassIds,
    v28,
    v29);
  *((_BYTE *)p_waveBattleEnemyClassIds + 8) = item->fields._IsWaveBattleRestart_k__BackingField;
  *((_BYTE *)p_waveBattleEnemyClassIds + 9) = item->fields._IsClearedWave_k__BackingField;
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
  int32_t v8; // w3
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_deckName, (int32_t)v3, v7, v8);
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

  if ( (byte_4A56F7B & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A56F7B = 1;
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
      sub_1B88814(v8, *(_QWORD *)&num);
    v10 = &memberList->obj.klass + (int)i;
    v11 = (PartyOrganizationListViewItem_o *)v10[4];
    if ( !v11 )
LABEL_15:
      sub_1B8880C(v8, *(_QWORD *)&num);
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
    || (PartyOrganizationListViewItem__Modify_32069156((PartyOrganizationListViewItem_o *)this, item, 0LL),
        (v10 = v6->fields.memberList) == 0LL) )
  {
LABEL_11:
    sub_1B8880C(this, *(_QWORD *)&num);
  }
  if ( v10->max_length <= num )
LABEL_12:
    sub_1B88814(this, *(_QWORD *)&num);
  this = (PartyListViewItem_o *)v10->m_Items[num];
  if ( !this )
    goto LABEL_11;
  v11 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0LL) + v11;
  PartyListViewItem__CheckRestriction(v6, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__SetMember_31947968(
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
    sub_1B8880C(this, *(_QWORD *)&idx);
  }
  if ( member )
  {
    this = (PartyListViewItem_o *)sub_1B886EC(member, v11->obj.klass->_1.element_class);
    if ( !this )
    {
      v16 = sub_1B88830();
      sub_1B886D8(v16, 0LL);
    }
  }
  if ( v11->max_length <= idx )
    goto LABEL_18;
  v12 = &v11->obj.klass + idx;
  v12[4] = (Il2CppClass *)member;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 4), (int32_t)member, v9, v10);
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
    sub_1B88814(this, *(_QWORD *)&idx);
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
  System_Int32_array *Master_object; // x0
  __int64 v13; // x1
  signed int max_length; // w8
  bool v15; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x19
  signed int v17; // w20
  FollowerInfo_o *v18; // x26
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w0
  ServantLeaderInfo_o *ServantLeaderInfo; // x27
  struct QuestRestrictionInfo_o *v22; // x8
  int32_t v23; // w0
  int32_t v24; // w2
  int32_t v25; // w3
  QuestRestrictionInfo_o *v26; // x28
  QuestRestrictionInfo_o *v27; // x28
  __int64 v28; // x24
  int32_t *v30; // [xsp+0h] [xbp-90h]
  __int64 value; // [xsp+10h] [xbp-80h]
  PartyListViewItem_o *v33; // [xsp+18h] [xbp-78h]
  Il2CppObject *v34; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4A56F76 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_NpcServantFollowerMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56F76 = 1;
  }
  v34 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  if ( !npcFollowerInfoList )
    goto LABEL_37;
  max_length = npcFollowerInfoList->max_length;
  v15 = max_length > 0;
  if ( max_length >= 1 )
  {
    v30 = followerClassId;
    v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v17 = 0;
    v33 = this;
    do
    {
      if ( v17 >= (unsigned int)max_length )
        sub_1B88814(Master_object, v13);
      v18 = npcFollowerInfoList->m_Items[v17];
      if ( !v18 )
        goto LABEL_37;
      if ( v18->fields.npcFollowerSvtId == npcFollowerSvtId )
      {
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_37;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
        ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v18, 0, ReturnTypeByQuestId, 0LL);
        Master_object = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Master_object )
          goto LABEL_37;
        Master_object = (System_Int32_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Master_object,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
        if ( !Master_object )
          goto LABEL_37;
        Master_object = (System_Int32_array *)DataMasterBase_object__object__long___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                &entity,
                                                npcFollowerSvtId,
                                                (const MethodInfo_311DB34 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          v22 = this->fields.questRestrictionInfo;
          if ( !v22 )
            goto LABEL_37;
          v23 = FollowerInfo__GetReturnTypeByQuestId(v22->fields.questId, 0LL);
          Master_object = FollowerInfo__GetNpcServantIndividuality(v18, 0, v23, 0LL);
          if ( !this->fields.questRestrictionInfo )
            goto LABEL_37;
          Master_object = (System_Int32_array *)QuestRestrictionInfo__IsRestrictionServantIndividuality_40456936(
                                                  this->fields.questRestrictionInfo,
                                                  Master_object,
                                                  pos,
                                                  0LL);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
            goto LABEL_34;
        }
        else
        {
          if ( !v16 )
            goto LABEL_37;
          Master_object = (System_Int32_array *)DataMasterBase_object__object__long___TryGetEntity(
                                                  v16,
                                                  &v34,
                                                  npcFollowerSvtId,
                                                  (const MethodInfo_311DB34 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
            goto LABEL_41;
          Master_object = (System_Int32_array *)v34;
          if ( !v34 )
            goto LABEL_37;
          Master_object = (System_Int32_array *)NpcServantFollowerEntity__IsOverwriteIndividuality(
                                                  (NpcServantFollowerEntity_o *)v34,
                                                  0LL);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = (System_Int32_array *)v34;
            if ( !v34 )
              goto LABEL_37;
            v26 = this->fields.questRestrictionInfo;
            Master_object = NpcServantFollowerEntity__GetOverwriteIndividuality((NpcServantFollowerEntity_o *)v34, 0LL);
            if ( !v26 )
              goto LABEL_37;
            Master_object = (System_Int32_array *)QuestRestrictionInfo__IsRestrictionServantIndividuality_40456936(
                                                    v26,
                                                    Master_object,
                                                    pos,
                                                    0LL);
          }
          else
          {
LABEL_41:
            if ( !ServantLeaderInfo )
              goto LABEL_37;
            v27 = this->fields.questRestrictionInfo;
            v28 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
            *(_QWORD *)&v36.fields.fakeValue = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              value = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v36.fields.fakeValue = value;
            }
            *(_QWORD *)&v36.fields.currentCryptoKey = v28;
            Master_object = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                    v36,
                                                    0LL);
            if ( !v27 )
              goto LABEL_37;
            Master_object = (System_Int32_array *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                    v27,
                                                    (int32_t)Master_object,
                                                    ServantLeaderInfo->fields.limitCount,
                                                    ServantLeaderInfo->fields.dispLimitCount,
                                                    pos,
                                                    0,
                                                    0LL);
            this = v33;
          }
          if ( ((unsigned __int8)Master_object & 1) == 0 )
          {
LABEL_34:
            *follower = v18;
            sub_1B88554((ServantStatusBattleListViewItem_o *)follower, (int32_t)v18, v24, v25);
            if ( ServantLeaderInfo )
            {
              *v30 = ServantLeaderInfo->fields.classId;
              return v15;
            }
LABEL_37:
            sub_1B8880C(Master_object, v13);
          }
        }
      }
      max_length = npcFollowerInfoList->max_length;
      v15 = ++v17 < max_length;
    }
    while ( v17 < max_length );
  }
  return v15;
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
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppClass **v19; // x0
  const MethodInfo *v20; // x1
  __int64 v21; // x0

  if ( (byte_4A56F7C & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationListViewItem_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A56F7C = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance
    || (PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, initPos, follower, 0LL),
        memberList = this->fields.memberList,
        setupInfo = this->fields.setupInfo,
        questRestrictionInfo = this->fields.questRestrictionInfo,
        v16 = (PartyOrganizationListViewItem_o *)sub_1B887FC(PartyOrganizationListViewItem_TypeInfo),
        PartyOrganizationListViewItem___ctor_32029524(
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
    sub_1B8880C(Instance, v12);
  }
  if ( v16 )
  {
    Instance = (Il2CppObject *)sub_1B886EC(v16, memberList->obj.klass->_1.element_class);
    if ( !Instance )
    {
      v21 = sub_1B88830();
      sub_1B886D8(v21, 0LL);
    }
  }
  if ( memberList->max_length <= num )
    sub_1B88814(Instance, v12);
  v19 = &memberList->obj.klass + num;
  v19[4] = (Il2CppClass *)v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v16, v17, v18);
  PartyListViewItem__CheckRestriction(this, v20);
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
    sub_1B88814(this, num1);
  this = (PartyListViewItem_o *)memberList->m_Items[num1];
  if ( !this )
LABEL_7:
    sub_1B8880C(this, num1);
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
        sub_1B88814(this, method);
      this = (PartyListViewItem_o *)memberList->m_Items[v4];
      if ( !this )
        break;
      PartyOrganizationListViewItem__UpdateEventEffect((PartyOrganizationListViewItem_o *)this, 0LL);
      max_length = memberList->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1B8880C(this, method);
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
        sub_1B88814(this, method);
      this = (PartyListViewItem_o *)memberList->m_Items[v4];
      if ( !this )
        break;
      PartyOrganizationListViewItem__UpdateServantInfo((PartyOrganizationListViewItem_o *)this, 0LL);
      max_length = memberList->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1B8880C(this, method);
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

  if ( (byte_4A56F8D & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10276/*"PARTY_ORGANIZATION_NAME_BASE"*/);
    byte_4A56F8D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_10276/*"PARTY_ORGANIZATION_NAME_BASE"*/, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}