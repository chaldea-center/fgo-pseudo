void __fastcall PartyListViewItem___ctor(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationListViewItem_array *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49F82A5 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&PartyOrganizationListViewItem___TypeInfo, v3);
    byte_49F82A5 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct PartyOrganizationListViewItem_array *)sub_1B64170(
                                                       PartyOrganizationListViewItem___TypeInfo,
                                                       (unsigned int)v4->static_fields->DeckMemberMax);
  this->fields.memberList = v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.memberList, (int32_t)v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_31652160(
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
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  PartyOrganizationListViewItem_o *Instance; // x0
  const MethodInfo *v27; // x2
  struct DeckServant_o *deckInfo; // x8
  int32_t FollowerIndex; // w0
  BalanceConfig_c *v30; // x8
  int32_t DeckMainMemberMax; // w23
  struct PartyOrganizationListViewItem_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  const MethodInfo *v35; // x1
  __int64 v36; // x2
  UserServantEntity_array *v37; // x20
  int32_t v38; // w29
  struct DeckServant_o *v39; // x8
  struct DeckServantData_array *svts; // x8
  int32_t max_length; // w9
  DeckServantData_o *v42; // x8
  int32_t initPos; // w25
  int v44; // w9
  struct PartyOrganizationListViewItem_array *v45; // x19
  PartyOrganizationListViewItem_o *v46; // x0
  PartyOrganizationListViewItem_o *v47; // x22
  int32_t v48; // w2
  int32_t v49; // w3
  PartyListViewItem_o *v50; // x26
  QuestRestrictionInfo_o *v51; // x21
  UserServantEntity_o *v52; // x28
  struct PartyOrganizationListViewItem_array *v53; // x20
  System_Int64_array *EquipList; // x19
  __int64 v55; // x1
  __int64 v56; // x2
  PartyOrganizationListViewItem_o *v57; // x0
  UserServantEntity_o *v58; // x2
  Il2CppClass **v59; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v62; // x0
  int32_t v65; // [xsp+2Ch] [xbp-84h]
  UserServantEntity_array *UserServantList; // [xsp+38h] [xbp-78h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+40h] [xbp-70h]
  int32_t v69; // [xsp+4Ch] [xbp-64h]

  v12 = questRestrictionInfo;
  if ( (byte_49F82A6 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind);
    sub_1B640C8(&PartyOrganizationListViewItem___TypeInfo, v19);
    sub_1B640C8(&PartyOrganizationListViewItem_TypeInfo, v20);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v21);
    byte_49F82A6 = 1;
  }
  ListViewItem___ctor_40370988((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v22, v23);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v24,
    v25);
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
  v30 = BalanceConfig_TypeInfo;
  if ( FollowerIndex <= 0 )
  {
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v30 = BalanceConfig_TypeInfo;
    }
    DeckMainMemberMax = v30->static_fields->DeckMainMemberMax;
  }
  else
  {
    DeckMainMemberMax = FollowerIndex;
  }
  if ( !v30->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v30);
    v30 = BalanceConfig_TypeInfo;
  }
  v32 = (struct PartyOrganizationListViewItem_array *)sub_1B64170(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v30->static_fields->DeckMemberMax);
  this->fields.memberList = v32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.memberList, (int32_t)v32, v33, v34);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  v37 = UserServantList;
  if ( *(_QWORD *)&Instance->fields.sortIndex )
  {
    Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      follower = *(FollowerInfo_o **)&Instance->fields.sortIndex;
      Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        followerClassId = Instance->fields.sortValue0;
        Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          followerDeckId = HIDWORD(Instance->fields.sortValue0);
          goto LABEL_18;
        }
      }
    }
LABEL_53:
    sub_1B64324(Instance);
  }
LABEL_18:
  v38 = 0;
  v65 = DeckMainMemberMax;
  while ( 1 )
  {
    Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( v38 >= *(_DWORD *)(*(_QWORD *)&Instance->fields.classId + 156LL) )
      break;
    v39 = deck->fields.deckInfo;
    if ( !v39 )
      goto LABEL_53;
    svts = v39->fields.svts;
    if ( !svts )
      goto LABEL_53;
    max_length = svts->max_length;
    if ( v38 >= max_length )
    {
      v44 = v38 + 1;
      initPos = v38 + 1;
    }
    else
    {
      if ( v38 >= (unsigned int)max_length )
        goto LABEL_54;
      v42 = svts->m_Items[v38];
      if ( !v42 )
        goto LABEL_53;
      initPos = v42->fields.initPos;
      v44 = v38 + 1;
    }
    v69 = v44;
    if ( v44 == DeckMainMemberMax )
    {
      v45 = *p_memberList;
      v46 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v35, v36);
      v47 = v46;
      if ( follower )
      {
        PartyOrganizationListViewItem___ctor_31768112(
          v46,
          v38,
          follower,
          followerClassId,
          setupInfo,
          v12,
          friendPointCampaignEntityList,
          0,
          followerDeckId,
          initPos,
          0LL);
        if ( !v45 )
          goto LABEL_53;
      }
      else
      {
        PartyOrganizationListViewItem___ctor_31804960(v46, v38, 1, setupInfo, v12, 1, initPos, 0LL);
        if ( !v45 )
          goto LABEL_53;
      }
      if ( v47 )
      {
        Instance = (PartyOrganizationListViewItem_o *)sub_1B64204(v47, v45->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_55;
      }
      if ( v38 >= v45->max_length )
        goto LABEL_54;
      v59 = &v45->obj.klass + v38;
    }
    else
    {
      if ( !v37 )
        goto LABEL_53;
      if ( v38 >= v37->max_length )
        goto LABEL_54;
      v50 = this;
      v51 = v12;
      v52 = v37->m_Items[v38];
      v53 = *p_memberList;
      if ( v52 )
      {
        EquipList = UserDeckEntity__GetEquipList(deck, v38, 0LL);
        v57 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v55, v56);
        v58 = v52;
        v47 = v57;
        v12 = v51;
        PartyOrganizationListViewItem___ctor_31795752(
          v57,
          v38,
          v58,
          EquipList,
          setupInfo,
          v51,
          0LL,
          initPos,
          0LL,
          0,
          0LL);
        if ( !v53 )
          goto LABEL_53;
      }
      else
      {
        v47 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v35, v36);
        v12 = v51;
        PartyOrganizationListViewItem___ctor_31804960(v47, v38, 0, setupInfo, v51, 1, initPos, 0LL);
        if ( !v53 )
          goto LABEL_53;
      }
      this = v50;
      if ( v47 )
      {
        Instance = (PartyOrganizationListViewItem_o *)sub_1B64204(v47, v53->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_55:
          v62 = sub_1B64348();
          sub_1B641F0(v62, 0LL);
        }
      }
      if ( v38 >= v53->max_length )
        goto LABEL_54;
      v59 = &v53->obj.klass + v38;
      v37 = UserServantList;
      DeckMainMemberMax = v65;
    }
    v59[4] = (Il2CppClass *)v47;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v59 + 4), (int32_t)v47, v48, v49);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_53;
    if ( v38 >= memberList->max_length )
LABEL_54:
      sub_1B6432C(Instance, v35);
    Instance = memberList->m_Items[v38];
    if ( !Instance )
      goto LABEL_53;
    cost = this->fields.cost;
    v38 = v69;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(Instance, 0LL) + cost;
  }
  PartyListViewItem__CheckRestriction(this, v35);
}


void __fastcall PartyListViewItem___ctor_31654732(
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
  int32_t v26; // w3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  int32_t v28; // w2
  int32_t v29; // w3
  const MethodInfo *v30; // x1
  struct System_String_o *DefaultDeckName; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 Instance; // x0
  const MethodInfo *v35; // x2
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo *v37; // x3
  int32_t FollowerIndex; // w25
  BalanceConfig_c *v39; // x0
  PartyListViewItem_o *v40; // x24
  int v41; // w27
  const MethodInfo *v42; // x2
  int32_t v43; // w23
  BalanceConfig_c *v44; // x0
  struct PartyOrganizationListViewItem_array *v45; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x28
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w8
  const MethodInfo *v50; // x1
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
  __int64 v65; // x2
  FollowerInfo_o *v66; // x23
  int32_t v67; // w27
  bool IsNpc; // w0
  __int64 v69; // x1
  __int64 v70; // x2
  struct PartyOrganizationListViewItem_array *v71; // x26
  int32_t v72; // w29
  PartyOrganizationListViewItem_o *v73; // x25
  int32_t v74; // w2
  int32_t v75; // w3
  ServantStatusBattleListViewItem_o *v76; // x0
  FollowerInfo_o *v77; // x23
  struct PartyOrganizationListViewItem_array *v78; // x29
  int32_t v79; // w27
  UserServantEntity_array *v80; // x26
  Il2CppClass **v81; // x25
  Il2CppClass *v82; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v83; // x25
  Il2CppClass *v84; // t1
  Il2CppClass *parent; // x23
  Il2CppClass *declaringType; // x27
  int32_t v87; // w23
  int32_t v88; // w27
  int32_t DispLimitCount; // w0
  int32_t v90; // w3
  UserServantEntity_o *v91; // x23
  struct PartyOrganizationListViewItem_array *v92; // x26
  System_Int64_array *EquipList; // x27
  __int64 v94; // x1
  __int64 v95; // x2
  PartyOrganizationListViewItem_o *v96; // x0
  Il2CppClass **v97; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v100; // x1
  __int64 v101; // x0
  bool *v102; // [xsp+20h] [xbp-C0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+30h] [xbp-B0h]
  UserServantEntity_array *UserServantList; // [xsp+38h] [xbp-A8h]
  int v106; // [xsp+40h] [xbp-A0h]
  int v107; // [xsp+44h] [xbp-9Ch]
  PartyListViewItem_o *v108; // [xsp+48h] [xbp-98h]
  int32_t v110; // [xsp+60h] [xbp-80h]
  _BOOL4 v111; // [xsp+64h] [xbp-7Ch]
  int32_t followerClassIda; // [xsp+74h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16

  if ( (byte_49F82A7 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, isBaseModify);
    sub_1B640C8(&Method_DataManager_GetMaster_NpcFollowerMaster___, v19);
    sub_1B640C8(&DataManager_TypeInfo, v20);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1B640C8(&PartyOrganizationListViewItem___TypeInfo, v22);
    sub_1B640C8(&PartyOrganizationListViewItem_TypeInfo, v23);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v24);
    byte_49F82A7 = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_40370988((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v25, v26);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v28,
    v29);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v30);
  this->fields.deckName = DefaultDeckName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.deckName, (int32_t)DefaultDeckName, v32, v33);
  if ( !deck )
    goto LABEL_110;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_110;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v35) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_110;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0LL);
  }
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0LL, v37);
  if ( FollowerIndex <= 0 )
  {
    v39 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v39 = BalanceConfig_TypeInfo;
    }
    FollowerIndex = v39->static_fields->DeckMainMemberMax;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  if ( *(int *)(Instance + 48) < 1 )
  {
    v40 = 0LL;
    v41 = 0;
    v111 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    v40 = *(PartyListViewItem_o **)(Instance + 72);
    v41 = 0;
    v111 = v40 == 0LL;
    if ( follower && v40 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_110;
      v41 = *(_DWORD *)(Instance + 48);
      Instance = (__int64)PartyListViewItem__GetMember(v40, v41 - 1, v42);
      if ( !Instance )
        goto LABEL_110;
      v43 = *(_DWORD *)(Instance + 348);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_110;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v43, follower, 0LL);
      v111 = 0;
    }
  }
  v44 = BalanceConfig_TypeInfo;
  v102 = isBaseModify;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v44 = BalanceConfig_TypeInfo;
  }
  v45 = (struct PartyOrganizationListViewItem_array *)sub_1B64170(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v44->static_fields->DeckMemberMax);
  this->fields.memberList = v45;
  p_memberList = &this->fields.memberList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.memberList, (int32_t)v45, v47, v48);
  this->fields.cost = 0;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    follower = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    followerClassId = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    v49 = *(_DWORD *)(Instance + 36);
  }
  else
  {
    v49 = followerDeckId;
  }
  v110 = v49;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || (v108 = v40, !Instance) )
LABEL_110:
    sub_1B64324(Instance);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)Instance,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0LL);
  v52 = 0;
  v106 = v41 - 1;
  v107 = FollowerIndex - 1;
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
    if ( v111 )
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
      Instance = (__int64)PartyListViewItem__GetMember(v108, v52, v51);
      if ( !Instance )
        goto LABEL_110;
      p_initPos = (int32_t *)(Instance + 348);
    }
    initPos = *p_initPos;
    followera = 0LL;
    followerClassIda = 0;
    if ( !questRestrictionInfo )
      goto LABEL_110;
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40118712(questRestrictionInfo, initPos, 0LL);
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
      if ( v106 != v52 )
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
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                          (PartyOrganizationUtility_o *)Instance,
                          initPos,
                          0LL);
    if ( !Instance || ((v59 ^ 1) & 1) != 0 )
    {
      if ( v107 != v52 && !v63 )
      {
        if ( (v59 & 1) != 0 )
        {
          v80 = UserServantList;
          if ( !UserServantList )
            goto LABEL_110;
          if ( v52 >= UserServantList->max_length )
            goto LABEL_114;
          v81 = &UserServantList->obj.klass + (int)v52;
          v84 = v81[4];
          v83 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v81 + 4);
          v82 = v84;
          if ( v84 )
          {
            declaringType = v82->_1.declaringType;
            parent = v82->_1.parent;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v114.fields.currentCryptoKey = declaringType;
            *(_QWORD *)&v114.fields.fakeValue = parent;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v114, 0LL);
            if ( v52 >= UserServantList->max_length )
              goto LABEL_114;
            if ( !*v83 )
              goto LABEL_110;
            v87 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608((*v83)[6], 0LL);
            if ( v52 >= UserServantList->max_length )
              goto LABEL_114;
            v88 = Instance;
            Instance = (__int64)*v83;
            if ( !*v83 )
              goto LABEL_110;
            DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
            Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                         questRestrictionInfo,
                         v87,
                         v88,
                         DispLimitCount,
                         initPos,
                         0,
                         0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( v52 >= UserServantList->max_length )
                goto LABEL_114;
              *v83 = 0LL;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)v83, 0, v65, v90);
            }
          }
        }
        else
        {
          v80 = UserServantList;
          if ( !UserServantList )
            goto LABEL_110;
        }
        if ( v52 >= v80->max_length )
          goto LABEL_114;
        v91 = v80->m_Items[v52];
        v92 = *p_memberList;
        if ( v91 )
        {
          EquipList = UserEventDeckEntity__GetEquipList(deck, v52, 0LL);
          v73 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v94, v95);
          PartyOrganizationListViewItem___ctor_31795752(
            v73,
            v52,
            v91,
            EquipList,
            setupInfo,
            questRestrictionInfo,
            0LL,
            initPos,
            0LL,
            0,
            0LL);
          if ( !v92 )
            goto LABEL_110;
        }
        else
        {
          v73 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v50, v65);
          PartyOrganizationListViewItem___ctor_31804960(v73, v52, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
          if ( !v92 )
            goto LABEL_110;
        }
        if ( v73 )
        {
          Instance = sub_1B64204(v73, v92->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_115:
            v101 = sub_1B64348();
            sub_1B641F0(v101, 0LL);
          }
        }
        if ( v52 >= v92->max_length )
          goto LABEL_114;
        v97 = &v92->obj.klass + (int)v52;
      }
      else
      {
        v77 = followera;
        v78 = *p_memberList;
        if ( followera )
        {
          v79 = followerClassIda;
          v73 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v50, v65);
          PartyOrganizationListViewItem___ctor_31768112(
            v73,
            v52,
            v77,
            v79,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v110,
            initPos,
            0LL);
LABEL_94:
          if ( !v78 )
            goto LABEL_110;
        }
        else
        {
          v96 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v50, v65);
          v73 = v96;
          if ( follower )
          {
            PartyOrganizationListViewItem___ctor_31768112(
              v96,
              v52,
              follower,
              followerClassId,
              setupInfo,
              questRestrictionInfo,
              friendPointCampaignEntityList,
              0,
              v110,
              initPos,
              0LL);
            goto LABEL_94;
          }
          PartyOrganizationListViewItem___ctor_31804960(v96, v52, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
          if ( !v78 )
            goto LABEL_110;
        }
        if ( v73 )
        {
          Instance = sub_1B64204(v73, v78->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_115;
        }
        if ( v52 >= v78->max_length )
          goto LABEL_114;
        v97 = &v78->obj.klass + (int)v52;
      }
      v76 = (ServantStatusBattleListViewItem_o *)(v97 + 4);
      goto LABEL_105;
    }
    v66 = (FollowerInfo_o *)Instance;
    if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0LL) )
      v67 = 0;
    else
      v67 = followerClassId;
    IsNpc = FollowerInfo__get_IsNpc(v66, 0LL);
    v71 = *p_memberList;
    if ( IsNpc )
      v72 = 0;
    else
      v72 = v110;
    v73 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v69, v70);
    PartyOrganizationListViewItem___ctor_31768112(
      v73,
      v52,
      v66,
      v67,
      setupInfo,
      questRestrictionInfo,
      friendPointCampaignEntityList,
      0,
      v72,
      initPos,
      0LL);
    if ( !v71 )
      goto LABEL_110;
    if ( v73 )
    {
      Instance = sub_1B64204(v73, v71->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_115;
    }
    if ( v52 >= v71->max_length )
      goto LABEL_114;
    v76 = (ServantStatusBattleListViewItem_o *)&v71->m_Items[v52];
LABEL_105:
    v76->klass = (ServantStatusBattleListViewItem_c *)v73;
    sub_1B6406C(v76, (int32_t)v73, v74, v75);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_110;
    if ( v52 >= memberList->max_length )
LABEL_114:
      sub_1B6432C(Instance, v50);
    Instance = (__int64)memberList->m_Items[v52];
    if ( !Instance )
      goto LABEL_110;
    cost = this->fields.cost;
    ++v52;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, v50);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v100) )
    *v102 = 1;
}


void __fastcall PartyListViewItem___ctor_31659708(
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
  int32_t v28; // w3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x24
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo *v32; // x1
  struct System_String_o *DefaultDeckName; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 Instance; // x0
  const MethodInfo *v37; // x2
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo_36EC45C **v39; // x28
  PartyListViewItem_o *v40; // x27
  unsigned int v41; // w25
  const MethodInfo *v42; // x2
  int32_t v43; // w19
  int32_t v44; // w8
  BalanceConfig_c *v45; // x0
  struct PartyOrganizationListViewItem_array *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w8
  FollowerInfo_array *QuestFollowerList; // x0
  const MethodInfo *v51; // x1
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
  int32_t v67; // w3
  __int64 v68; // x20
  const MethodInfo *v69; // x6
  int v70; // w26
  struct DeckServant_o *v71; // x8
  struct DeckServantData_array *v72; // x8
  DeckServantData_o *v73; // x8
  _BOOL4 v74; // w27
  int64_t npcFollowerSvtId; // x4
  __int64 v76; // x2
  FollowerInfo_o *v77; // x20
  PartyListViewItem_o *v78; // x23
  const MethodInfo_36EC45C **v79; // x21
  UserEventDeckEntity_o *v80; // x28
  int32_t v81; // w27
  bool IsNpc; // w0
  __int64 v83; // x1
  __int64 v84; // x2
  unsigned int *v85; // x19
  int32_t v86; // w29
  PartyOrganizationListViewItem_o *v87; // x26
  int32_t v88; // w2
  int32_t v89; // w3
  __int64 v90; // x25
  unsigned __int64 v91; // x8
  FollowerInfo_o *v92; // x20
  int32_t v93; // w27
  unsigned int *v94; // x19
  PartyOrganizationListViewItem_o *v95; // x26
  int32_t v96; // w2
  int32_t v97; // w3
  UserServantEntity_o *v98; // x8
  __int64 v99; // x20
  __int64 v100; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v101; // x8
  int32_t v102; // w20
  int32_t v103; // w26
  int32_t DispLimitCount; // w0
  int32_t v105; // w3
  UserServantEntity_o *v106; // x20
  System_Int64_array *EquipList; // x27
  __int64 v108; // x1
  __int64 v109; // x2
  PartyOrganizationListViewItem_o *v110; // x0
  int32_t v111; // w1
  bool v112; // w2
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v115; // x1
  __int64 v116; // x0
  UserServantMaster_o *Master_object; // [xsp+20h] [xbp-100h]
  FollowerInfo_o *v119; // [xsp+30h] [xbp-F0h]
  int32_t *v120; // [xsp+38h] [xbp-E8h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+40h] [xbp-E0h]
  UserServantEntity_array *UserServantList; // [xsp+50h] [xbp-D0h]
  struct System_Int32_array *svtIdForceBattleList; // [xsp+60h] [xbp-C0h]
  UserServantEntity_o **m_Items; // [xsp+70h] [xbp-B0h]
  __int64 v126; // [xsp+78h] [xbp-A8h]
  int32_t v127; // [xsp+84h] [xbp-9Ch]
  PartyListViewItem_o *v128; // [xsp+88h] [xbp-98h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+90h] [xbp-90h]
  __int64 v130; // [xsp+98h] [xbp-88h]
  __int64 v131; // [xsp+A8h] [xbp-78h]
  int32_t followerClassIda; // [xsp+B4h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16

  if ( (byte_49F82A8 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, isBaseModify);
    sub_1B640C8(&Method_DataManager_GetMaster_NpcFollowerMaster___, v20);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v21);
    sub_1B640C8(&DataManager_TypeInfo, v22);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1B640C8(&PartyOrganizationListViewItem___TypeInfo, v24);
    sub_1B640C8(&PartyOrganizationListViewItem_TypeInfo, v25);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v26);
    byte_49F82A8 = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_40370988((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v27, v28);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v30,
    v31);
  this->fields.isDeckNameDefault = 1;
  DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v32);
  this->fields.deckName = DefaultDeckName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.deckName, (int32_t)DefaultDeckName, v34, v35);
  if ( !deck )
    goto LABEL_142;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_142;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v37) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_142;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0LL);
  }
  v39 = (const MethodInfo_36EC45C **)&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  if ( *(int *)(Instance + 48) < 1 )
  {
    v40 = 0LL;
    if ( !questRestrictionInfo )
      goto LABEL_15;
    goto LABEL_14;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  v40 = *(PartyListViewItem_o **)(Instance + 72);
  if ( questRestrictionInfo )
LABEL_14:
    QuestRestrictionInfo__IsMyServantOrNpcRestriction(questRestrictionInfo, 0LL);
LABEL_15:
  v41 = 0;
  if ( follower && v40 )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    v41 = *(_DWORD *)(Instance + 48);
    Instance = (__int64)PartyListViewItem__GetMember(v40, v41 - 1, v42);
    if ( !Instance )
      goto LABEL_142;
    v43 = *(_DWORD *)(Instance + 348);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v43, follower, 0LL);
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    follower = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    followerClassId = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    v44 = *(_DWORD *)(Instance + 36);
  }
  else
  {
    v44 = followerDeckId;
  }
  v127 = v44;
  v45 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v45 = BalanceConfig_TypeInfo;
  }
  v46 = (struct PartyOrganizationListViewItem_array *)sub_1B64170(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v45->static_fields->DeckMemberMax);
  this->fields.memberList = v46;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.memberList, (int32_t)v46, v47, v48);
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
    v126 = Instance;
    svtIdForceBattleList = (*p_questRestrictionInfo)->fields.svtIdForceBattleList;
  }
  else
  {
    svtIdForceBattleList = 0LL;
    v126 = 0LL;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || (v119 = follower, !Instance) )
LABEL_142:
    sub_1B64324(Instance);
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Instance,
                        (*p_questRestrictionInfo)->fields.questId,
                        (*p_questRestrictionInfo)->fields.questPhase,
                        0LL);
  v53 = (unsigned int *)UserServantList;
  v54 = v41;
  v55 = 0LL;
  v56 = 0LL;
  v120 = &svtIdForceBattleList->m_Items[1];
  npcFollowerInfoList = QuestFollowerList;
  m_Items = UserServantList->m_Items;
  v130 = v54 - 1;
  v128 = v40;
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
    v131 = v56;
    if ( v40 )
    {
      Instance = (__int64)PartyListViewItem__GetMember(v40, v55, v52);
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
      if ( !v126 )
        goto LABEL_142;
      if ( (__int64)v55 >= *(int *)(v126 + 24) )
      {
        v94 = (unsigned int *)*p_memberList;
        v95 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v51, v52);
        PartyOrganizationListViewItem___ctor_31804960(v95, v55, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v94 )
          goto LABEL_142;
        v90 = v131;
        if ( v95 )
        {
          Instance = sub_1B64204(v95, *(_QWORD *)(*(_QWORD *)v94 + 64LL));
          if ( !Instance )
          {
LABEL_144:
            v116 = sub_1B64348();
            sub_1B641F0(v116, 0LL);
          }
        }
        if ( v55 >= v94[6] )
          goto LABEL_143;
        *(_QWORD *)&v94[2 * v55 + 8] = v95;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v94 + v131 + 32), (int32_t)v95, v96, v97);
        goto LABEL_138;
      }
      if ( svtIdForceBattleList )
      {
        if ( v130 != v55 && isFirstEnforceChange )
        {
          max_length = svtIdForceBattleList->max_length;
          if ( (__int64)v55 < (int)max_length )
          {
            if ( v55 >= max_length )
              goto LABEL_143;
            v51 = (const MethodInfo *)(unsigned int)v120[v55];
            if ( (int)v51 >= 1 )
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
              *(_QWORD *)&v134.fields.currentCryptoKey = v65;
              *(_QWORD *)&v134.fields.fakeValue = v64;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v134, 0LL);
              max_length = svtIdForceBattleList->max_length;
              if ( v55 >= max_length )
                goto LABEL_143;
              v51 = (const MethodInfo *)(unsigned int)v120[v55];
              if ( (_DWORD)Instance != (_DWORD)v51 )
              {
LABEL_68:
                if ( v55 >= max_length )
                  goto LABEL_143;
                Instance = (__int64)Master_object;
                if ( !Master_object )
                  goto LABEL_142;
                Instance = (__int64)UserServantMaster__getSvtIdBattle(Master_object, (int32_t)v51, 0LL);
                v68 = Instance;
                if ( Instance )
                {
                  Instance = sub_1B64204(Instance, *(_QWORD *)(*(_QWORD *)v53 + 64LL));
                  if ( !Instance )
                    goto LABEL_144;
                }
                if ( v55 >= v53[6] )
                  goto LABEL_143;
                m_Items[v55] = (UserServantEntity_o *)v68;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)m_Items + v131), v68, v66, v67);
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
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40118712(questRestrictionInfo, initPos, 0LL);
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
      if ( v130 != v55 )
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
    Instance = (__int64)SingletonTemplate_object___get_Instance(*v39);
    if ( !Instance )
      goto LABEL_142;
    Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                          (PartyOrganizationUtility_o *)Instance,
                          initPos,
                          0LL);
    if ( Instance && ((v70 ^ 1) & 1) == 0 )
    {
      v77 = (FollowerInfo_o *)Instance;
      v78 = this;
      v79 = v39;
      v80 = deck;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0LL) )
        v81 = 0;
      else
        v81 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v77, 0LL);
      v85 = (unsigned int *)*p_memberList;
      if ( IsNpc )
        v86 = 0;
      else
        v86 = v127;
      v87 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v83, v84);
      PartyOrganizationListViewItem___ctor_31768112(
        v87,
        v55,
        v77,
        v81,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v86,
        initPos,
        0LL);
      if ( !v85 )
        goto LABEL_142;
      v40 = v128;
      v90 = v131;
      deck = v80;
      if ( v87 )
      {
        Instance = sub_1B64204(v87, *(_QWORD *)(*(_QWORD *)v85 + 64LL));
        if ( !Instance )
          goto LABEL_144;
      }
      v91 = v85[6];
      v39 = v79;
      this = v78;
      v53 = (unsigned int *)UserServantList;
      goto LABEL_133;
    }
    if ( v130 != v55 && !v74 )
    {
      if ( (v70 & 1) != 0 )
      {
        if ( !v53 )
          goto LABEL_142;
        if ( v55 >= v53[6] )
          goto LABEL_143;
        v98 = m_Items[v55];
        if ( v98 )
        {
          v100 = *(_QWORD *)&v98->fields.svtId.fields.currentCryptoKey;
          v99 = *(_QWORD *)&v98->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v135.fields.currentCryptoKey = v100;
          *(_QWORD *)&v135.fields.fakeValue = v99;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v135, 0LL);
          if ( v55 >= v53[6] )
            goto LABEL_143;
          v101 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)m_Items[v55];
          if ( !v101 )
            goto LABEL_142;
          v102 = Instance;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v101[6], 0LL);
          if ( v55 >= v53[6] )
LABEL_143:
            sub_1B6432C(Instance, v51);
          v103 = Instance;
          Instance = (__int64)m_Items[v55];
          if ( !Instance )
            goto LABEL_142;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
          Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                       questRestrictionInfo,
                       v102,
                       v103,
                       DispLimitCount,
                       initPos,
                       0,
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v55 >= v53[6] )
              goto LABEL_143;
            m_Items[v55] = 0LL;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)m_Items + v131), 0, v76, v105);
          }
        }
      }
      else if ( !v53 )
      {
        goto LABEL_142;
      }
      if ( v55 >= v53[6] )
        goto LABEL_143;
      v106 = m_Items[v55];
      v85 = (unsigned int *)*p_memberList;
      if ( !v106 )
      {
        v110 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v51, v76);
        v87 = v110;
        v111 = v55;
        v112 = 0;
        goto LABEL_128;
      }
      EquipList = UserEventDeckEntity__GetEquipList(deck, v55, 0LL);
      v87 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v108, v109);
      PartyOrganizationListViewItem___ctor_31795752(
        v87,
        v55,
        v106,
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
      v92 = followera;
      v85 = (unsigned int *)*p_memberList;
      if ( !followera )
      {
        v110 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v51, v76);
        v87 = v110;
        if ( v119 )
        {
          PartyOrganizationListViewItem___ctor_31768112(
            v110,
            v55,
            v119,
            followerClassId,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v127,
            initPos,
            0LL);
        }
        else
        {
          v112 = 1;
          v111 = v55;
LABEL_128:
          PartyOrganizationListViewItem___ctor_31804960(
            v110,
            v111,
            v112,
            setupInfo,
            questRestrictionInfo,
            1,
            initPos,
            0LL);
        }
        v40 = v128;
        if ( !v85 )
          goto LABEL_142;
        goto LABEL_130;
      }
      v93 = followerClassIda;
      v87 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v51, v76);
      PartyOrganizationListViewItem___ctor_31768112(
        v87,
        v55,
        v92,
        v93,
        setupInfo,
        questRestrictionInfo,
        0LL,
        0,
        v127,
        initPos,
        0LL);
      if ( !v85 )
        goto LABEL_142;
    }
    v40 = v128;
LABEL_130:
    v90 = v131;
    if ( v87 )
    {
      Instance = sub_1B64204(v87, *(_QWORD *)(*(_QWORD *)v85 + 64LL));
      if ( !Instance )
        goto LABEL_144;
    }
    v91 = v85[6];
LABEL_133:
    if ( v55 >= v91 )
      goto LABEL_143;
    *(_QWORD *)&v85[2 * v55 + 8] = v87;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v85 + v90 + 32), (int32_t)v87, v88, v89);
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
    v56 = v90 + 8;
  }
  PartyListViewItem__CheckRestriction(this, v51);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v115) )
    *isBaseModify = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_31662456(
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
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  BalanceConfig_c *v30; // x0
  struct PartyOrganizationListViewItem_array *v31; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x22
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *Instance; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  int32_t klass; // w23
  int32_t klass_high; // w25
  struct PartyOrganizationListViewItem_array *v40; // x26
  PartyOrganizationListViewItem_o *v41; // x0
  PartyOrganizationListViewItem_o *v42; // x27
  __int64 v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w23
  const MethodInfo *v48; // x1
  __int64 v49; // x2
  int32_t i; // w23
  BalanceConfig_c *v51; // x0
  struct PartyOrganizationListViewItem_array *v52; // x25
  PartyOrganizationListViewItem_o *v53; // x24
  int32_t v54; // w2
  int32_t v55; // w3
  Il2CppClass **v56; // x0
  struct PartyOrganizationListViewItem_array *v57; // x8
  int32_t v58; // w24
  __int64 v59; // x0

  if ( (byte_49F82A9 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind);
    sub_1B640C8(&PartyOrganizationListViewItem___TypeInfo, v19);
    sub_1B640C8(&PartyOrganizationListViewItem_TypeInfo, v20);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v21);
    sub_1B640C8(&StringLiteral_1/*""*/, v22);
    byte_49F82A9 = 1;
  }
  ListViewItem___ctor_40370988((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v23, v24);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v25,
    v26);
  this->fields.isDeckNameDefault = 0;
  v27 = (int)StringLiteral_1/*""*/;
  this->fields.deckName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.deckName, v27, v28, v29);
  this->fields.userEquipId = userEquipId;
  this->fields.id = 0LL;
  v30 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v30 = BalanceConfig_TypeInfo;
  }
  v31 = (struct PartyOrganizationListViewItem_array *)sub_1B64170(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v30->static_fields->DeckMemberMax);
  this->fields.memberList = v31;
  p_memberList = &this->fields.memberList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.memberList, (int32_t)v31, v33, v34);
  this->fields.cost = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  klass = followerClassId;
  if ( Instance[1].monitor )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    follower = (FollowerInfo_o *)Instance[1].monitor;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    klass = (int32_t)Instance[2].klass;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    klass_high = HIDWORD(Instance[2].klass);
  }
  else
  {
    klass_high = followerDeckId;
  }
  v40 = *p_memberList;
  v41 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v36, v37);
  v42 = v41;
  if ( follower )
  {
    PartyOrganizationListViewItem___ctor_31768112(
      v41,
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
    if ( !v40 )
      goto LABEL_35;
  }
  else
  {
    PartyOrganizationListViewItem___ctor_31804960(v41, 0, 1, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v40 )
      goto LABEL_35;
  }
  if ( v42 )
  {
    Instance = (Il2CppObject *)sub_1B64204(v42, v40->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_37:
      v59 = sub_1B64348();
      sub_1B641F0(v59, 0LL);
    }
  }
  if ( !v40->max_length )
    goto LABEL_36;
  v40->m_Items[0] = v42;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v40->m_Items, (int32_t)v42, v44, v45);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_35;
  if ( !memberList->max_length )
LABEL_36:
    sub_1B6432C(Instance, v43);
  Instance = (Il2CppObject *)memberList->m_Items[0];
  if ( !Instance )
LABEL_35:
    sub_1B64324(Instance);
  cost = this->fields.cost;
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                    + cost;
  for ( i = 1; ; ++i )
  {
    v51 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v51 = BalanceConfig_TypeInfo;
    }
    if ( i >= v51->static_fields->DeckMemberMax )
      break;
    v52 = *p_memberList;
    v53 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v48, v49);
    PartyOrganizationListViewItem___ctor_31804960(v53, i, 0, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v52 )
      goto LABEL_35;
    if ( v53 )
    {
      Instance = (Il2CppObject *)sub_1B64204(v53, v52->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_37;
    }
    if ( i >= v52->max_length )
      goto LABEL_36;
    v56 = &v52->obj.klass + i;
    v56[4] = (Il2CppClass *)v53;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v53, v54, v55);
    v57 = this->fields.memberList;
    if ( !v57 )
      goto LABEL_35;
    if ( i >= v57->max_length )
      goto LABEL_36;
    Instance = (Il2CppObject *)v57->m_Items[i];
    if ( !Instance )
      goto LABEL_35;
    v58 = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                      + v58;
  }
  PartyListViewItem__CheckRestriction(this, v48);
}


void __fastcall PartyListViewItem___ctor_31663348(
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
  int32_t v26; // w3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 IsNeedDeckPosReset; // x0
  const MethodInfo *v31; // x2
  struct DeckServant_o *deckInfo; // x8
  int32_t servantNumMax; // w26
  const MethodInfo *v34; // x3
  PartyListViewItem_o *v35; // x28
  int v36; // w25
  const MethodInfo *v37; // x2
  int32_t v38; // w23
  int32_t FollowerIndex; // w24
  BalanceConfig_c *v40; // x0
  const MethodInfo *v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
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
  int32_t v54; // w3
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
  FollowerInfo_o *v70; // x23
  int32_t v71; // w26
  bool IsNpc; // w0
  __int64 v73; // x1
  __int64 v74; // x2
  struct PartyOrganizationListViewItem_array *v75; // x21
  int32_t v76; // w29
  PartyOrganizationListViewItem_o *v77; // x25
  int32_t v78; // w2
  int32_t v79; // w3
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
  int32_t v94; // w3
  UserServantEntity_o *v95; // x23
  struct PartyOrganizationListViewItem_array *v96; // x21
  System_Int64_array *EquipList; // x26
  __int64 v98; // x1
  __int64 v99; // x2
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

  if ( (byte_49F82AA & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, isBaseModify);
    sub_1B640C8(&Method_DataManager_GetMaster_NpcFollowerMaster___, v19);
    sub_1B640C8(&DataManager_TypeInfo, v20);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1B640C8(&PartyOrganizationListViewItem___TypeInfo, v22);
    sub_1B640C8(&PartyOrganizationListViewItem_TypeInfo, v23);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v24);
    byte_49F82AA = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_40370988((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v25, v26);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v28,
    v29);
  if ( !deck )
    goto LABEL_121;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_121;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  IsNeedDeckPosReset = PartyListViewItem__IsNeedDeckPosReset(this, deck, v31);
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
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_121;
  if ( *(int *)(IsNeedDeckPosReset + 48) < 1 )
  {
    v35 = 0LL;
    v36 = 0;
    v113 = 1;
  }
  else
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    v35 = *(PartyListViewItem_o **)(IsNeedDeckPosReset + 72);
    v36 = 0;
    v113 = v35 == 0LL;
    if ( followerInfo && v35 )
    {
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      v36 = *(_DWORD *)(IsNeedDeckPosReset + 48);
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v35, v36 - 1, v37);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      v38 = *(_DWORD *)(IsNeedDeckPosReset + 348);
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      PartyOrganizationUtility__SetNpcFollowerInfo(
        (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
        v38,
        followerInfo,
        0LL);
      v113 = 0;
    }
  }
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0LL, v34);
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
  v40 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v40 = BalanceConfig_TypeInfo;
  }
  FollowerIndex = servantNumMax;
  if ( servantNumMax > v40->static_fields->DeckMainMemberMax )
  {
    FollowerIndex = v40->static_fields->DeckMainMemberMax;
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      FollowerIndex = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
    }
  }
LABEL_29:
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_121;
  if ( *(_QWORD *)(IsNeedDeckPosReset + 24) )
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    followerInfo = *(FollowerInfo_o **)(IsNeedDeckPosReset + 24);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    v111 = *(_DWORD *)(IsNeedDeckPosReset + 32);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    v112 = *(_DWORD *)(IsNeedDeckPosReset + 36);
  }
  else
  {
    v112 = followerDeckId;
    v111 = followerClassId;
  }
  v110 = v35;
  v114 = deck;
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
        sub_1B6432C(IsNeedDeckPosReset, v41);
      v49 = v47 + 1;
      if ( servantNumMax < (int)v47 + 1 && *(_QWORD *)(v48 + 8 * v47) )
      {
        *isBaseModify = 1;
        if ( v47 >= *(unsigned int *)(v45 + 24) )
          goto LABEL_125;
        *(_QWORD *)(v48 + 8 * v47) = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + v46), 0, v42, v43);
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
  v51 = (struct PartyOrganizationListViewItem_array *)sub_1B64170(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v50->static_fields->DeckMemberMax);
  this->fields.memberList = v51;
  p_memberList = &this->fields.memberList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.memberList, (int32_t)v51, v53, v54);
  this->fields.cost = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNeedDeckPosReset = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || !IsNeedDeckPosReset )
LABEL_121:
    sub_1B64324(IsNeedDeckPosReset);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)IsNeedDeckPosReset,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0LL);
  v56 = 0LL;
  v108 = v36 - 1;
  v109 = FollowerIndex - 1;
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
    IsNeedDeckPosReset = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40118712(questRestrictionInfo, initPos, 0LL);
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
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
          v77 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v41, v69);
          PartyOrganizationListViewItem___ctor_31768112(
            v77,
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
          v100 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v41, v69);
          v77 = v100;
          if ( followerInfo )
          {
            PartyOrganizationListViewItem___ctor_31768112(
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
          PartyOrganizationListViewItem___ctor_31804960(v100, v56, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
          if ( !v82 )
            goto LABEL_121;
        }
        if ( v77 )
        {
          IsNeedDeckPosReset = sub_1B64204(v77, v82->obj.klass->_1.element_class);
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
        if ( (unsigned int)v56 >= *(_DWORD *)(v45 + 24) )
          goto LABEL_125;
        v85 = v45 + 8LL * (int)v56;
        v88 = *(_QWORD *)(v85 + 32);
        v87 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v85 + 32);
        v86 = v88;
        v84 = (int)v56;
        if ( v88 )
        {
          v90 = *(_QWORD *)(v86 + 80);
          v89 = *(_QWORD *)(v86 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v117.fields.currentCryptoKey = v90;
          *(_QWORD *)&v117.fields.fakeValue = v89;
          IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v117, 0LL);
          if ( (unsigned int)v56 >= *(_DWORD *)(v45 + 24) )
            goto LABEL_125;
          if ( !*v87 )
            goto LABEL_121;
          v91 = IsNeedDeckPosReset;
          IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608((*v87)[6], 0LL);
          if ( (unsigned int)v56 >= *(_DWORD *)(v45 + 24) )
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
            if ( (unsigned int)v56 >= *(_DWORD *)(v45 + 24) )
              goto LABEL_125;
            *v87 = 0LL;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)v87, 0, v69, v94);
          }
        }
      }
      if ( (unsigned int)v56 >= *(_DWORD *)(v45 + 24) )
        goto LABEL_125;
      v95 = *(UserServantEntity_o **)(v45 + 8 * v84 + 32);
      v96 = *p_memberList;
      if ( v95 )
      {
        EquipList = UserEventDeckEntity__GetEquipList(v114, v56, 0LL);
        v77 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v98, v99);
        PartyOrganizationListViewItem___ctor_31795752(
          v77,
          v56,
          v95,
          EquipList,
          setupInfo,
          questRestrictionInfo,
          0LL,
          initPos,
          0LL,
          0,
          0LL);
        if ( !v96 )
          goto LABEL_121;
      }
      else
      {
        v77 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v41, v69);
        PartyOrganizationListViewItem___ctor_31804960(v77, v56, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v96 )
          goto LABEL_121;
      }
      if ( v77 )
      {
        IsNeedDeckPosReset = sub_1B64204(v77, v96->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
        {
LABEL_126:
          v104 = sub_1B64348();
          sub_1B641F0(v104, 0LL);
        }
      }
      if ( (unsigned int)v56 >= v96->max_length )
        goto LABEL_125;
      v80 = &v96->obj.klass + v84;
    }
    else
    {
      v70 = (FollowerInfo_o *)IsNeedDeckPosReset;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)IsNeedDeckPosReset, 0LL) )
        v71 = 0;
      else
        v71 = v111;
      IsNpc = FollowerInfo__get_IsNpc(v70, 0LL);
      v75 = *p_memberList;
      if ( IsNpc )
        v76 = 0;
      else
        v76 = v112;
      v77 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v73, v74);
      PartyOrganizationListViewItem___ctor_31768112(
        v77,
        v56,
        v70,
        v71,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v76,
        initPos,
        0LL);
      if ( !v75 )
        goto LABEL_121;
      if ( v77 )
      {
        IsNeedDeckPosReset = sub_1B64204(v77, v75->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
          goto LABEL_126;
      }
      if ( (unsigned int)v56 >= v75->max_length )
        goto LABEL_125;
      v80 = &v75->obj.klass + (int)v56;
    }
LABEL_116:
    v80[4] = (Il2CppClass *)v77;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v80 + 4), (int32_t)v77, v78, v79);
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
  PartyListViewItem__CheckRestriction(this, v41);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v103) )
    *isBaseModify = 1;
}


void __fastcall PartyListViewItem___ctor_31665724(
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
  int32_t v54; // w3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  int32_t v56; // w2
  int32_t v57; // w3
  __int64 Instance; // x0
  const MethodInfo *v59; // x2
  UserEventDeckEntity_o *v60; // x21
  struct DeckServant_o *deckInfo; // x8
  System_Int64_array *NpcServantFollowerIds; // x29
  FollowerInfo_o *v63; // x24
  PartyListViewItem_o *v64; // x22
  int v65; // w25
  const MethodInfo *v66; // x2
  int32_t v67; // w21
  int32_t DeckMemberMax; // w25
  FollowerInfo_array *QuestFollowerList; // x28
  __int64 v70; // x1
  __int64 v71; // x2
  FollowerInfo_o *v72; // x1
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  int max_length; // w8
  unsigned int v76; // w19
  struct System_Object_array *items; // x8
  _QWORD *v78; // x9
  __int64 size; // x10
  Il2CppClass **v80; // x0
  __int64 v81; // x2
  int32_t v82; // w22
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v84; // w9
  int v85; // w10
  QuestRestrictionInfo_SlotInfo_o *v86; // x11
  struct DeckServant_o *v87; // x8
  __int64 v88; // x29
  int v89; // w24
  int v90; // w28
  struct DeckServantData_array *svts; // x8
  Il2CppObject *v92; // x19
  struct DeckServant_o *v93; // x8
  struct DeckServantData_array *v94; // x8
  DeckServantData_o *v95; // x8
  int64_t userSvtId; // x21
  System_Func_object__bool__o *v97; // x21
  BalanceConfig_c *v98; // x0
  _BOOL8 v99; // x0
  __int64 v100; // x1
  const MethodInfo *v101; // x2
  Il2CppClass *klass; // x21
  int v103; // w8
  Il2CppClass **v104; // x8
  __int64 NpcDeployIdx; // x0
  __int64 v106; // x1
  BalanceConfig_c *v107; // x0
  const MethodInfo *v108; // x2
  const MethodInfo *v109; // x3
  int32_t i; // w19
  struct DeckServant_o *v111; // x8
  struct DeckServantData_array *v112; // x8
  DeckServantData_o *v113; // x8
  int32_t UserServantDeployIndex; // w0
  il2cpp_array_size_t v115; // w21
  int32_t v116; // w2
  int32_t v117; // w3
  __int64 v118; // x22
  Il2CppClass **v119; // x0
  BalanceConfig_c *v120; // x0
  struct PartyOrganizationListViewItem_array *v121; // x0
  int32_t v122; // w2
  int32_t v123; // w3
  __int64 v124; // x2
  unsigned __int64 v125; // x24
  EventUpValSetupInfo_o *v126; // x23
  __int64 j; // x28
  BalanceConfig_c *v128; // x0
  __int64 v129; // x25
  const MethodInfo *v130; // x2
  struct DeckServant_o *v131; // x8
  struct DeckServantData_array *v132; // x8
  DeckServantData_o *v133; // x8
  int32_t *p_initPos; // x8
  int32_t v135; // w19
  unsigned int *v136; // x21
  PartyOrganizationListViewItem_o *v137; // x25
  int32_t v138; // w2
  int32_t v139; // w3
  const MethodInfo *v140; // x6
  bool v141; // w21
  int64_t v142; // x4
  bool v143; // w22
  __int64 v144; // x2
  FollowerInfo_o *v145; // x29
  int32_t v146; // w22
  bool IsNpc; // w0
  __int64 v148; // x1
  __int64 v149; // x2
  unsigned int *v150; // x23
  int32_t v151; // w21
  PartyOrganizationListViewItem_o *v152; // x25
  unsigned int *v153; // x19
  int32_t v154; // w2
  int32_t v155; // w3
  unsigned __int64 v156; // x8
  FollowerInfo_o *v157; // x22
  unsigned int *v158; // x21
  EventUpValSetupInfo_o *v159; // x23
  int32_t v160; // w26
  PartyOrganizationListViewItem_o *v161; // x0
  int32_t v162; // w3
  PartyOrganizationListViewItem_o *v163; // x0
  System_Func_object__bool__o *v164; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v165; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v166; // x22
  __int64 v167; // x2
  FollowerInfo_o *v168; // x29
  unsigned int *v169; // x25
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v171; // x8
  int32_t classId; // w22
  PartyOrganizationListViewItem_o *v173; // x21
  __int64 v174; // x2
  System_Collections_Generic_List_object__o *v175; // x21
  int32_t v176; // w25
  PartyOrganizationListViewItem_o *v177; // x21
  int32_t v178; // w25
  UserServantEntity_o *v179; // x8
  __int64 v180; // x22
  __int64 v181; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v182; // x8
  int32_t v183; // w22
  int32_t v184; // w25
  int32_t DispLimitCount; // w0
  int32_t v186; // w3
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  unsigned int *v189; // x21
  __int64 v190; // x8
  FollowerInfo_o *v191; // x22
  __int64 v192; // x8
  PartyListViewItem_o *v193; // x21
  UserServantEntity_o *v194; // x22
  unsigned int *v195; // x27
  __int64 v196; // x1
  __int64 v197; // x2
  __int64 v198; // x23
  int v199; // w24
  unsigned __int64 v200; // x29
  UserServantEntity_o **v201; // x26
  __int64 v202; // x19
  __int64 v203; // x2
  signed __int64 v204; // x21
  System_Func_object__bool__o *v205; // x22
  int32_t v206; // w3
  unsigned __int64 v207; // x8
  EventUpValSetupInfo_o *v208; // x26
  unsigned __int64 v209; // x21
  signed __int64 v210; // x28
  __int64 v211; // x23
  unsigned __int64 k; // x24
  BalanceConfig_c *v213; // x0
  __int64 v214; // x29
  const MethodInfo *v215; // x2
  struct DeckServant_o *v216; // x8
  struct DeckServantData_array *v217; // x8
  __int64 v218; // x8
  int32_t *v219; // x8
  int32_t v220; // w19
  unsigned int *v221; // x21
  PartyOrganizationListViewItem_o *v222; // x25
  int32_t v223; // w2
  int32_t v224; // w3
  const MethodInfo *v225; // x6
  int v226; // w25
  struct DeckServant_o *v227; // x8
  struct DeckServantData_array *v228; // x8
  __int64 v229; // x8
  int64_t v230; // x4
  int v231; // w8
  FollowerInfo_o *NpcFollowerInfo; // x0
  __int64 v233; // x1
  __int64 v234; // x2
  FollowerInfo_o *v235; // x22
  int32_t v236; // w29
  bool v237; // w0
  __int64 v238; // x1
  __int64 v239; // x2
  unsigned int *v240; // x21
  int32_t v241; // w26
  PartyOrganizationListViewItem_o *v242; // x25
  int32_t v243; // w2
  int32_t v244; // w3
  struct PartyOrganizationListViewItem_array *v245; // x8
  struct DeckServant_o *v246; // x9
  struct DeckServantData_array *v247; // x9
  __int64 v248; // x9
  __int64 v249; // x8
  FollowerInfo_o *v250; // x22
  unsigned int *v251; // x29
  int32_t v252; // w29
  PartyOrganizationListViewItem_o *v253; // x0
  int32_t v254; // w3
  PartyOrganizationListViewItem_o *v255; // x25
  int32_t v256; // w2
  int32_t v257; // w3
  PartyOrganizationListViewItem_o *v258; // x0
  System_Func_object__bool__o *v259; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v260; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v261; // x22
  __int64 v262; // x2
  UserServantEntity_array *v263; // x21
  __int64 v264; // x8
  __int64 v265; // x22
  __int64 v266; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v267; // x8
  int32_t v268; // w22
  int32_t v269; // w25
  int32_t v270; // w0
  int32_t v271; // w3
  __int64 v272; // x2
  struct PartyOrganizationListViewItem_array *v273; // x8
  struct DeckServant_o *v274; // x9
  struct DeckServantData_array *v275; // x9
  __int64 v276; // x9
  __int64 v277; // x8
  FollowerInfo_o *v278; // x25
  unsigned int *v279; // x26
  __int64 v280; // x8
  __int64 v281; // x8
  int32_t v282; // w22
  PartyOrganizationListViewItem_o *v283; // x29
  int32_t v284; // w2
  int32_t v285; // w3
  UserServantEntity_o *v286; // x22
  unsigned int *v287; // x26
  System_Int64_array *v288; // x29
  __int64 v289; // x1
  __int64 v290; // x2
  PartyOrganizationListViewItem_o *v291; // x25
  int32_t v292; // w2
  int32_t v293; // w3
  PartyOrganizationListViewItem_o *v294; // x22
  int32_t v295; // w2
  int32_t v296; // w3
  struct PartyOrganizationListViewItem_array *v297; // x8
  int32_t v298; // w19
  const MethodInfo *v299; // x1
  __int64 v300; // x0
  int32_t followerDeckIda; // [xsp+0h] [xbp-190h]
  int32_t initPos; // [xsp+8h] [xbp-188h]
  unsigned int *v303; // [xsp+28h] [xbp-168h]
  UserServantEntity_o **isFixNpc; // [xsp+30h] [xbp-160h]
  char isFixNpca; // [xsp+30h] [xbp-160h]
  int v306; // [xsp+3Ch] [xbp-154h]
  _BOOL4 v307; // [xsp+3Ch] [xbp-154h]
  int32_t v308; // [xsp+40h] [xbp-150h]
  int32_t v309; // [xsp+40h] [xbp-150h]
  System_Int64_array *EquipList; // [xsp+40h] [xbp-150h]
  bool v311; // [xsp+40h] [xbp-150h]
  int v313; // [xsp+54h] [xbp-13Ch]
  int32_t v314; // [xsp+60h] [xbp-130h]
  int32_t v315; // [xsp+64h] [xbp-12Ch]
  int v316; // [xsp+68h] [xbp-128h]
  int32_t FollowerIndex; // [xsp+74h] [xbp-11Ch]
  FollowerInfo_o *v318; // [xsp+78h] [xbp-118h]
  EventUpValSetupInfo_o *setupInfoa; // [xsp+80h] [xbp-110h]
  EventUpValSetupInfo_o *setupInfob; // [xsp+80h] [xbp-110h]
  PartyListViewItem_o *v321; // [xsp+88h] [xbp-108h]
  System_Int64_array *v322; // [xsp+90h] [xbp-100h]
  System_Int64_array *v323; // [xsp+90h] [xbp-100h]
  int v324; // [xsp+90h] [xbp-100h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+98h] [xbp-F8h]
  QuestRestrictionInfo_o *v326; // [xsp+A0h] [xbp-F0h]
  QuestRestrictionInfo_o *m_Items; // [xsp+A0h] [xbp-F0h]
  PartyListViewItem_o *v328; // [xsp+A8h] [xbp-E8h]
  System_Collections_Generic_List_object__o *v329; // [xsp+B0h] [xbp-E0h]
  UserServantEntity_array *userServantList; // [xsp+B8h] [xbp-D8h]
  _BOOL4 v331; // [xsp+C4h] [xbp-CCh]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+C8h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_object__o v334; // [xsp+D8h] [xbp-B8h] BYREF
  int32_t v335; // [xsp+F4h] [xbp-9Ch] BYREF
  FollowerInfo_o *v336; // [xsp+F8h] [xbp-98h] BYREF
  int32_t followerClassIda; // [xsp+104h] [xbp-8Ch] BYREF
  FollowerInfo_o *followera; // [xsp+108h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v339; // [xsp+110h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v340; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v341; // 0:x0.16

  if ( (byte_49F82AB & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, isBaseModify);
    sub_1B640C8(&Method_BasicHelper_Any_FollowerInfo___, v20);
    sub_1B640C8(&Method_DataManager_GetMaster_NpcFollowerMaster___, v21);
    sub_1B640C8(&DataManager_TypeInfo, v22);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_FollowerInfo___, v23);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_FollowerInfo___, v24);
    sub_1B640C8(&Method_System_Linq_Enumerable_ElementAt_FollowerInfo___, v25);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___, v26);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_FollowerInfo___, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__, v29);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__get_Current__, v30);
    sub_1B640C8(&FollowerInfo___TypeInfo, v31);
    sub_1B640C8(&System_Func_FollowerInfo__bool__TypeInfo, v32);
    sub_1B640C8(&long___TypeInfo, v33);
    sub_1B640C8(&Method_System_Collections_Generic_List_FollowerInfo__Add__, v34);
    sub_1B640C8(&Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__, v35);
    sub_1B640C8(&Method_System_Collections_Generic_List_FollowerInfo___ctor__, v36);
    sub_1B640C8(&Method_System_Collections_Generic_List_FollowerInfo__get_Count__, v37);
    sub_1B640C8(&Method_System_Collections_Generic_List_FollowerInfo__get_Item__, v38);
    sub_1B640C8(&System_Collections_Generic_List_FollowerInfo__TypeInfo, v39);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40);
    sub_1B640C8(&PartyOrganizationListViewItem___TypeInfo, v41);
    sub_1B640C8(&PartyOrganizationListViewItem_TypeInfo, v42);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v43);
    sub_1B640C8(&Method_PartyListViewItem___c__DisplayClass27_0___ctor_b__0__, v44);
    sub_1B640C8(&PartyListViewItem___c__DisplayClass27_0_TypeInfo, v45);
    sub_1B640C8(&Method_PartyListViewItem___c__DisplayClass27_1___ctor_b__1__, v46);
    sub_1B640C8(&PartyListViewItem___c__DisplayClass27_1_TypeInfo, v47);
    sub_1B640C8(&Method_PartyListViewItem___c__DisplayClass27_2___ctor_b__2__, v48);
    sub_1B640C8(&PartyListViewItem___c__DisplayClass27_2_TypeInfo, v49);
    sub_1B640C8(&Method_PartyListViewItem___c__DisplayClass27_3___ctor_b__3__, v50);
    sub_1B640C8(&PartyListViewItem___c__DisplayClass27_3_TypeInfo, v51);
    sub_1B640C8(&UserServantEntity___TypeInfo, v52);
    byte_49F82AB = 1;
  }
  memset(&v339, 0, sizeof(v339));
  followera = 0LL;
  followerClassIda = 0;
  v336 = 0LL;
  v335 = 0;
  ListViewItem___ctor_40370988((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v53, v54);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v56,
    v57);
  v60 = deck;
  if ( !deck )
    goto LABEL_75;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_75;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v59) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_75;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0LL);
    v60 = deck;
  }
  NpcServantFollowerIds = UserEventDeckEntity__GetNpcServantFollowerIds(v60, 0LL);
  userServantList = UserEventDeckEntity__GetUserServantList(v60, 0, 0, 0LL);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  v63 = follower;
  if ( *(int *)(Instance + 48) < 1 )
  {
    v64 = 0LL;
    v65 = 0;
    v331 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v64 = *(PartyListViewItem_o **)(Instance + 72);
    v65 = 0;
    v331 = v64 == 0LL;
    if ( follower && v64 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      v65 = *(_DWORD *)(Instance + 48);
      Instance = (__int64)PartyListViewItem__GetMember(v64, v65 - 1, v66);
      if ( !Instance )
        goto LABEL_75;
      v67 = *(_DWORD *)(Instance + 348);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v67, follower, 0LL);
      v331 = 0;
    }
  }
  Instance = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  v313 = v65;
  if ( !questRestrictionInfo )
    goto LABEL_75;
  DeckMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMemberMax;
  if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0LL) )
    DeckMemberMax = questRestrictionInfo->fields.servantNumMax;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo
    || !Instance
    || (QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                              (NpcFollowerMaster_o *)Instance,
                              (*p_questRestrictionInfo)->fields.questId,
                              (*p_questRestrictionInfo)->fields.questPhase,
                              0LL),
        v329 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                              System_Collections_Generic_List_FollowerInfo__TypeInfo,
                                                              v70,
                                                              v71),
        System_Collections_Generic_List_object____ctor(
          v329,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_FollowerInfo___ctor__),
        !QuestFollowerList) )
  {
LABEL_75:
    sub_1B64324(Instance);
  }
  max_length = QuestFollowerList->max_length;
  if ( max_length >= 1 )
  {
    v76 = 0;
    while ( v76 < max_length )
    {
      v72 = QuestFollowerList->m_Items[v76];
      if ( !v72 )
        goto LABEL_75;
      if ( !v72->fields.isMySvtOrNpc
        && (questRestrictionInfo->fields.isNotTransitionSupportList
         || !questRestrictionInfo->fields.isNpcMultipleBattle
         || v72->fields.isFixedNpc) )
      {
        if ( !v329 )
          goto LABEL_75;
        items = v329->fields._items;
        v78 = Method_System_Collections_Generic_List_FollowerInfo__Add__;
        ++v329->fields._version;
        if ( !items )
          goto LABEL_75;
        size = v329->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v329,
            (Il2CppObject *)v72,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
        }
        else
        {
          v80 = &items->obj.klass + size;
          v329->fields._size = size + 1;
          v80[4] = (Il2CppClass *)v72;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v80 + 4), (int32_t)v72, v73, (int32_t)v74);
        }
      }
      max_length = QuestFollowerList->max_length;
      if ( (int)++v76 >= max_length )
        goto LABEL_44;
    }
LABEL_411:
    sub_1B6432C(Instance, v72);
  }
LABEL_44:
  FollowerIndex = PartyListViewItem__GetFollowerIndex(
                    this,
                    deck,
                    (System_Collections_Generic_List_FollowerInfo__o *)v329,
                    v74);
  setupInfoa = setupInfo;
  v321 = this;
  v326 = questRestrictionInfo;
  v328 = v64;
  npcFollowerInfoList = QuestFollowerList;
  if ( isNew || !questRestrictionInfo->fields.isNpcEditablePos )
    goto LABEL_117;
  Instance = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !v329 )
      goto LABEL_75;
    v82 = v329->fields._size;
  }
  else
  {
    slotInfos = questRestrictionInfo->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_75;
    v84 = slotInfos->max_length;
    if ( v84 >= 1 )
    {
      v82 = 0;
      v85 = 0;
      while ( v84 != v85 )
      {
        v86 = slotInfos->m_Items[v85];
        if ( !v86 )
          goto LABEL_75;
        if ( v86->fields.slotType == 1 )
          v82 += v86->fields.isMoved;
        if ( v84 == ++v85 )
          goto LABEL_59;
      }
      goto LABEL_411;
    }
    v82 = 0;
  }
LABEL_59:
  v322 = NpcServantFollowerIds;
  v87 = deck->fields.deckInfo;
  if ( !v87 )
    goto LABEL_75;
  v88 = 0LL;
  v89 = 0;
  v90 = 0;
  while ( 1 )
  {
    svts = v87->fields.svts;
    if ( !svts )
      goto LABEL_75;
    if ( (int)v88 >= (signed int)svts->max_length )
      break;
    v92 = (Il2CppObject *)sub_1B64314(PartyListViewItem___c__DisplayClass27_0_TypeInfo, v72, v81);
    System_Object___ctor(v92, 0LL);
    v93 = deck->fields.deckInfo;
    if ( !v93 )
      goto LABEL_75;
    v94 = v93->fields.svts;
    if ( !v94 )
      goto LABEL_75;
    if ( (unsigned int)v88 >= v94->max_length )
      goto LABEL_411;
    v95 = v94->m_Items[v88];
    if ( v95 && v92 )
    {
      userSvtId = v95->fields.userSvtId;
      v92[1].klass = (Il2CppClass *)v95->fields.npcFollowerSvtId;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40118712(
                   questRestrictionInfo,
                   v95->fields.initPos,
                   0LL);
      if ( (int)v88 >= DeckMemberMax && (userSvtId || v92[1].klass) )
        v89 = 1;
      if ( !(Instance & 1 | (v92[1].klass == 0LL)) )
      {
        v97 = (System_Func_object__bool__o *)sub_1B64314(System_Func_FollowerInfo__bool__TypeInfo, v72, v81);
        System_Func_object__bool____ctor(v97, v92, Method_PartyListViewItem___c__DisplayClass27_0___ctor_b__0__, 0LL);
        Instance = BasicHelper__Any_object_(
                     (System_Collections_Generic_List_T__o *)v329,
                     (System_Func_T__bool__o *)v97,
                     (const MethodInfo_2E24870 *)Method_BasicHelper_Any_FollowerInfo___);
        v90 += Instance & 1;
      }
      ++v88;
      v87 = deck->fields.deckInfo;
      if ( v87 )
        continue;
    }
    goto LABEL_75;
  }
  if ( ((v90 == v82) & (v89 ^ 1)) != 0 )
  {
    v63 = follower;
    v64 = v328;
    NpcServantFollowerIds = v322;
    goto LABEL_117;
  }
  v98 = BalanceConfig_TypeInfo;
  v63 = follower;
  v64 = v328;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v98 = BalanceConfig_TypeInfo;
  }
  NpcServantFollowerIds = (System_Int64_array *)sub_1B64170(
                                                  long___TypeInfo,
                                                  (unsigned int)v98->static_fields->DeckMemberMax);
  Instance = (__int64)v329;
  if ( !v329 )
    goto LABEL_75;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v334,
    v329,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
  v339 = v334;
  while ( 1 )
  {
    v99 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v339,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    if ( !v99 )
      break;
    if ( !v339.fields._current )
      sub_1B64324(v99);
    klass = v339.fields._current[5].klass;
    if ( klass )
    {
      v103 = LODWORD(v339.fields._current[5].monitor) - 1;
      if ( v103 >= 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_1B64324(v99);
        if ( v103 >= NpcServantFollowerIds->max_length )
          sub_1B6432C(v99, v100);
        v104 = &NpcServantFollowerIds->obj.klass + (unsigned int)v103;
        goto LABEL_92;
      }
      NpcDeployIdx = PartyListViewItem__GetNpcDeployIdx(this, NpcServantFollowerIds, v101);
      if ( (NpcDeployIdx & 0x80000000) == 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_1B64324(NpcDeployIdx);
        if ( (unsigned int)NpcDeployIdx >= NpcServantFollowerIds->max_length )
          sub_1B6432C(NpcDeployIdx, v106);
        v104 = &NpcServantFollowerIds->obj.klass + (unsigned int)NpcDeployIdx;
LABEL_92:
        v104[4] = klass;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v339,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
  v107 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v107 = BalanceConfig_TypeInfo;
  }
  userServantList = (UserServantEntity_array *)sub_1B64170(
                                                 UserServantEntity___TypeInfo,
                                                 (unsigned int)v107->static_fields->DeckMemberMax);
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
    v111 = deck->fields.deckInfo;
    if ( !v111 )
      goto LABEL_75;
    v112 = v111->fields.svts;
    if ( !v112 )
      goto LABEL_75;
    if ( i >= v112->max_length )
      goto LABEL_411;
    v113 = v112->m_Items[i];
    if ( !v113 )
      goto LABEL_75;
    if ( v113->fields.userSvtId )
    {
      UserServantDeployIndex = PartyListViewItem__GetUserServantDeployIndex(
                                 (PartyListViewItem_o *)Instance,
                                 userServantList,
                                 NpcServantFollowerIds,
                                 v109);
      if ( (UserServantDeployIndex & 0x80000000) == 0 )
      {
        v115 = UserServantDeployIndex;
        if ( UserServantDeployIndex < DeckMemberMax )
        {
          Instance = (__int64)UserEventDeckEntity__GetUserServant(deck, i, 0LL);
          if ( !userServantList )
            goto LABEL_75;
          v118 = Instance;
          if ( Instance )
          {
            Instance = sub_1B64204(Instance, userServantList->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_412:
              v300 = sub_1B64348();
              sub_1B641F0(v300, 0LL);
            }
          }
          if ( v115 >= userServantList->max_length )
            goto LABEL_411;
          v119 = &userServantList->obj.klass + v115;
          v119[4] = (Il2CppClass *)v118;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v119 + 4), v118, v116, v117);
          questRestrictionInfo = v326;
          v64 = v328;
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
                      (System_Collections_Generic_List_FollowerInfo__o *)v329,
                      v108);
  }
LABEL_117:
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      v63 = *(FollowerInfo_o **)(Instance + 24);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        v314 = *(_DWORD *)(Instance + 32);
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          v315 = *(_DWORD *)(Instance + 36);
          goto LABEL_124;
        }
      }
    }
    goto LABEL_75;
  }
  v314 = followerClassId;
  v315 = followerDeckId;
LABEL_124:
  v120 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v120 = BalanceConfig_TypeInfo;
  }
  v121 = (struct PartyOrganizationListViewItem_array *)sub_1B64170(
                                                         PartyOrganizationListViewItem___TypeInfo,
                                                         (unsigned int)v120->static_fields->DeckMemberMax);
  this->fields.memberList = v121;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.memberList, (int32_t)v121, v122, v123);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  v318 = v63;
  if ( !isNew && questRestrictionInfo->fields.isNpcEditablePos )
  {
    m_Items = (QuestRestrictionInfo_o *)NpcServantFollowerIds->m_Items;
    v125 = 0LL;
    v126 = (EventUpValSetupInfo_o *)DeckMemberMax;
    isFixNpc = userServantList->m_Items;
    v306 = -1;
    while ( 1 )
    {
      for ( j = 8 * v125; ; j += 8LL )
      {
        v128 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v128 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v125 >= v128->static_fields->DeckMemberMax )
          goto LABEL_406;
        v129 = sub_1B64314(PartyListViewItem___c__DisplayClass27_1_TypeInfo, v72, v124);
        System_Object___ctor((Il2CppObject *)v129, 0LL);
        if ( v331 )
        {
          v131 = deck->fields.deckInfo;
          if ( !v131 )
            goto LABEL_75;
          v132 = v131->fields.svts;
          if ( !v132 )
            goto LABEL_75;
          if ( v125 >= v132->max_length )
            goto LABEL_411;
          v133 = v132->m_Items[v125];
          if ( !v133 )
            goto LABEL_75;
          p_initPos = &v133->fields.initPos;
        }
        else
        {
          Instance = (__int64)PartyListViewItem__GetMember(v64, v125, v130);
          if ( !Instance )
            goto LABEL_75;
          p_initPos = (int32_t *)(Instance + 348);
        }
        v135 = *p_initPos;
        if ( (__int64)v125 < (__int64)v126 )
          break;
        v136 = (unsigned int *)*p_memberList;
        v137 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v72, v130);
        PartyOrganizationListViewItem___ctor_31804960(v137, v125, 0, setupInfo, questRestrictionInfo, 1, v135, 0LL);
        if ( !v136 )
          goto LABEL_75;
        if ( v137 )
        {
          Instance = sub_1B64204(v137, *(_QWORD *)(*(_QWORD *)v136 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        if ( v125 >= v136[6] )
          goto LABEL_411;
        *(_QWORD *)&v136[2 * v125 + 8] = v137;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v136[(unsigned __int64)j / 4 + 8], (int32_t)v137, v138, v139);
        ++v125;
      }
      if ( !v129 )
        goto LABEL_75;
      *(_DWORD *)(v129 + 16) = v125 + 1;
      followera = 0LL;
      followerClassIda = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40118712(questRestrictionInfo, v135, 0LL);
      v141 = 0;
      v308 = Instance;
      if ( (Instance & 1) != 0 )
      {
        if ( !NpcServantFollowerIds )
          goto LABEL_75;
        if ( v125 >= NpcServantFollowerIds->max_length )
          goto LABEL_411;
        v142 = *((_QWORD *)&m_Items->klass + v125);
        v141 = v142 >= 1
            && *(_DWORD *)(v129 + 16) != v313
            && PartyListViewItem__SetNpcFollowerInfo(
                 this,
                 &followera,
                 &followerClassIda,
                 npcFollowerInfoList,
                 v142,
                 v135,
                 v140);
      }
      setupInfob = v126;
      v143 = !QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL)
          && QuestRestrictionInfo__IsPositionFixNpc(questRestrictionInfo, v135, 0LL);
      v323 = NpcServantFollowerIds;
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                            (PartyOrganizationUtility_o *)Instance,
                            v135,
                            0LL);
      if ( !Instance || ((v308 ^ 1) & 1) != 0 )
      {
        if ( v141 || *(_DWORD *)(v129 + 16) == FollowerIndex )
        {
          v157 = followera;
          v158 = (unsigned int *)*p_memberList;
          if ( !followera )
          {
            v163 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v72, v144);
            v152 = v163;
            if ( v318 )
              PartyOrganizationListViewItem___ctor_31768112(
                v163,
                v125,
                v318,
                v314,
                setupInfo,
                questRestrictionInfo,
                0LL,
                0,
                v315,
                v135,
                0LL);
            else
              PartyOrganizationListViewItem___ctor_31804960(
                v163,
                v125,
                1,
                setupInfo,
                questRestrictionInfo,
                1,
                v135,
                0LL);
            v64 = v328;
            v153 = v158;
            if ( !v158 )
              goto LABEL_75;
            goto LABEL_208;
          }
          v159 = setupInfo;
          v160 = followerClassIda;
          v161 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v72, v144);
          v162 = v160;
          v152 = v161;
          setupInfo = v159;
          PartyOrganizationListViewItem___ctor_31768112(
            v161,
            v125,
            v157,
            v162,
            v159,
            questRestrictionInfo,
            0LL,
            0,
            v315,
            v135,
            0LL);
          v126 = setupInfob;
          if ( !v158 )
            goto LABEL_75;
          v64 = v328;
          v153 = v158;
          if ( v152 )
          {
            Instance = sub_1B64204(v152, *(_QWORD *)(*(_QWORD *)v158 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          v156 = v158[6];
          this = v321;
        }
        else if ( v143 )
        {
          v164 = (System_Func_object__bool__o *)sub_1B64314(System_Func_FollowerInfo__bool__TypeInfo, v72, v144);
          System_Func_object__bool____ctor(
            v164,
            (Il2CppObject *)v129,
            Method_PartyListViewItem___c__DisplayClass27_1___ctor_b__1__,
            0LL);
          v165 = System_Linq_Enumerable__Where_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v329,
                   (System_Func_TSource__bool__o *)v164,
                   (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
          v166 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B64204(v165, FollowerInfo___TypeInfo);
          if ( !v166 )
            v166 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                          v165,
                                                                          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
          if ( System_Linq_Enumerable__Any_object_(
                 v166,
                 (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
          {
            Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                                  v166,
                                  0,
                                  (const MethodInfo_2E58FB0 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
            v64 = v328;
            v168 = (FollowerInfo_o *)Instance;
          }
          else
          {
            v64 = v328;
            Instance = (__int64)v329;
            if ( !v329 )
              goto LABEL_75;
            if ( v329->fields._size < 1 )
            {
LABEL_221:
              v169 = (unsigned int *)*p_memberList;
              goto LABEL_236;
            }
            v178 = 0;
            while ( 1 )
            {
              Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v178,
                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
              if ( !Instance || !NpcServantFollowerIds )
                goto LABEL_75;
              if ( v125 >= NpcServantFollowerIds->max_length )
                goto LABEL_411;
              if ( *(_QWORD *)(Instance + 80) != *((_QWORD *)&m_Items->klass + v125) )
              {
                Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                      v329,
                                      v178,
                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
                if ( !Instance )
                  goto LABEL_75;
                if ( v306 < v178 && *(int *)(Instance + 88) <= 0 )
                  break;
              }
              Instance = (__int64)v329;
              if ( ++v178 >= v329->fields._size )
                goto LABEL_221;
            }
            Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                  v329,
                                  v178,
                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
            v168 = (FollowerInfo_o *)Instance;
            v306 = v178;
          }
          v169 = (unsigned int *)*p_memberList;
          if ( !v168 )
          {
            NpcServantFollowerIds = v323;
LABEL_236:
            v177 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v72, v167);
            PartyOrganizationListViewItem___ctor_31804960(v177, v125, 0, setupInfo, questRestrictionInfo, 0, v135, 0LL);
            if ( !v169 )
              goto LABEL_75;
            goto LABEL_237;
          }
          userSvtLeaderHash = v168->fields.userSvtLeaderHash;
          if ( !userSvtLeaderHash )
            goto LABEL_75;
          if ( !userSvtLeaderHash->max_length )
            goto LABEL_411;
          v171 = userSvtLeaderHash->m_Items[0];
          if ( !v171 )
            goto LABEL_75;
          classId = v171->fields.classId;
          v173 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v72, v167);
          PartyOrganizationListViewItem___ctor_31768112(
            v173,
            v125,
            v168,
            classId,
            setupInfo,
            questRestrictionInfo,
            0LL,
            1,
            v315,
            v135,
            0LL);
          if ( !v169 )
            goto LABEL_75;
          v64 = v328;
          NpcServantFollowerIds = v323;
          v153 = v169;
          v152 = v173;
          if ( v173 )
          {
            Instance = sub_1B64204(v173, *(_QWORD *)(*(_QWORD *)v153 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          v156 = v153[6];
        }
        else
        {
          if ( !NpcServantFollowerIds )
            goto LABEL_75;
          v64 = v328;
          if ( v125 >= NpcServantFollowerIds->max_length )
            goto LABEL_411;
          if ( *((_QWORD *)&m_Items->klass + v125) )
          {
            Instance = System_Linq_Enumerable__Count_object_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v329,
                         (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
            if ( (int)Instance < 1 )
            {
LABEL_203:
              v169 = (unsigned int *)*p_memberList;
            }
            else
            {
              if ( !v329 )
                goto LABEL_75;
              v175 = v329;
              v176 = 0;
              while ( 1 )
              {
                Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                      v175,
                                      v176,
                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
                if ( !Instance )
                  goto LABEL_75;
                if ( v125 >= NpcServantFollowerIds->max_length )
                  goto LABEL_411;
                if ( *(_QWORD *)(Instance + 80) == *((_QWORD *)&m_Items->klass + v125) )
                  break;
                v175 = v329;
                if ( ++v176 >= System_Linq_Enumerable__Count_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)v329,
                                 (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_FollowerInfo___) )
                  goto LABEL_203;
              }
              Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                    v329,
                                    v176,
                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
              v189 = (unsigned int *)*p_memberList;
              if ( Instance )
              {
                v190 = *(_QWORD *)(Instance + 40);
                v191 = (FollowerInfo_o *)Instance;
                if ( !v190 )
                  goto LABEL_75;
                if ( !*(_DWORD *)(v190 + 24) )
                  goto LABEL_411;
                v192 = *(_QWORD *)(v190 + 32);
                if ( !v192 )
                  goto LABEL_75;
                v309 = *(_DWORD *)(v192 + 32);
                v152 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v72, v174);
                PartyOrganizationListViewItem___ctor_31768112(
                  v152,
                  v125,
                  v191,
                  v309,
                  setupInfo,
                  questRestrictionInfo,
                  0LL,
                  1,
                  v315,
                  v135,
                  0LL);
                if ( !v189 )
                  goto LABEL_75;
                v64 = v328;
                v153 = v189;
LABEL_208:
                if ( !v152 )
                {
LABEL_239:
                  v156 = v153[6];
                  goto LABEL_240;
                }
LABEL_238:
                Instance = sub_1B64204(v152, *(_QWORD *)(*(_QWORD *)v153 + 64LL));
                if ( !Instance )
                  goto LABEL_412;
                goto LABEL_239;
              }
              v64 = v328;
              v169 = (unsigned int *)*p_memberList;
            }
            v177 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v72, v174);
            PartyOrganizationListViewItem___ctor_31804960(v177, v125, 0, setupInfo, questRestrictionInfo, 1, v135, 0LL);
            if ( !v169 )
              goto LABEL_75;
LABEL_237:
            v153 = v169;
            v152 = v177;
            if ( !v177 )
              goto LABEL_239;
            goto LABEL_238;
          }
          if ( (v308 & 1) != 0 )
          {
            if ( !userServantList )
              goto LABEL_75;
            if ( v125 >= userServantList->max_length )
              goto LABEL_411;
            v179 = isFixNpc[v125];
            if ( v179 )
            {
              v181 = *(_QWORD *)&v179->fields.svtId.fields.currentCryptoKey;
              v180 = *(_QWORD *)&v179->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v340.fields.currentCryptoKey = v181;
              *(_QWORD *)&v340.fields.fakeValue = v180;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v340, 0LL);
              if ( v125 >= userServantList->max_length )
                goto LABEL_411;
              v182 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)isFixNpc[v125];
              if ( !v182 )
                goto LABEL_75;
              v183 = Instance;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v182[6], 0LL);
              if ( v125 >= userServantList->max_length )
                goto LABEL_411;
              v184 = Instance;
              Instance = (__int64)isFixNpc[v125];
              if ( !Instance )
                goto LABEL_75;
              DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
              Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                           questRestrictionInfo,
                           v183,
                           v184,
                           DispLimitCount,
                           v135,
                           0,
                           0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( v125 >= userServantList->max_length )
                  goto LABEL_411;
                isFixNpc[v125] = 0LL;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&isFixNpc[(unsigned __int64)j / 8], 0, v144, v186);
              }
            }
          }
          else if ( !userServantList )
          {
            goto LABEL_75;
          }
          if ( v125 >= userServantList->max_length )
            goto LABEL_411;
          v193 = this;
          v194 = isFixNpc[v125];
          v195 = (unsigned int *)*p_memberList;
          if ( !v194 )
          {
            v152 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v72, v144);
            PartyOrganizationListViewItem___ctor_31804960(v152, v125, 0, setupInfo, questRestrictionInfo, 1, v135, 0LL);
            v64 = v328;
            if ( !v195 )
              goto LABEL_75;
            v153 = v195;
            this = v193;
            goto LABEL_208;
          }
          EquipList = UserEventDeckEntity__GetEquipList(deck, v125, 0LL);
          v152 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v196, v197);
          PartyOrganizationListViewItem___ctor_31795752(
            v152,
            v125,
            v194,
            EquipList,
            setupInfo,
            questRestrictionInfo,
            0LL,
            v135,
            0LL,
            0,
            0LL);
          if ( !v195 )
            goto LABEL_75;
          v64 = v328;
          v153 = v195;
          if ( v152 )
          {
            Instance = sub_1B64204(v152, *(_QWORD *)(*(_QWORD *)v195 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          v156 = v195[6];
          this = v193;
        }
      }
      else
      {
        v145 = (FollowerInfo_o *)Instance;
        if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0LL) )
          v146 = 0;
        else
          v146 = v314;
        IsNpc = FollowerInfo__get_IsNpc(v145, 0LL);
        v150 = (unsigned int *)*p_memberList;
        if ( IsNpc )
          v151 = 0;
        else
          v151 = v315;
        v152 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v148, v149);
        initPos = v135;
        v153 = v150;
        PartyOrganizationListViewItem___ctor_31768112(
          v152,
          v125,
          v145,
          v146,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v151,
          initPos,
          0LL);
        if ( !v150 )
          goto LABEL_75;
        v64 = v328;
        if ( v152 )
        {
          Instance = sub_1B64204(v152, *(_QWORD *)(*(_QWORD *)v150 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        v156 = v150[6];
        this = v321;
        NpcServantFollowerIds = v323;
        v126 = setupInfob;
      }
LABEL_240:
      if ( v125 >= v156 )
        goto LABEL_411;
      *(_QWORD *)&v153[2 * v125 + 8] = v152;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v153[(unsigned __int64)j / 4 + 8], (int32_t)v152, v154, v155);
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_75;
      if ( v125 >= memberList->max_length )
        goto LABEL_411;
      Instance = (__int64)memberList->m_Items[v125];
      if ( !Instance )
        goto LABEL_75;
      cost = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                        + cost;
      ++v125;
    }
  }
  v324 = questRestrictionInfo->fields.myServantNumMax
       + (FollowerIndex > 0 && !questRestrictionInfo->fields.isNotTransitionSupportList);
  if ( !isNew )
  {
    if ( !userServantList )
      goto LABEL_75;
    if ( (int)userServantList->max_length >= 1 )
    {
      v198 = 0LL;
      v199 = 0;
      v200 = 0LL;
      v201 = userServantList->m_Items;
      while ( 1 )
      {
        v202 = sub_1B64314(PartyListViewItem___c__DisplayClass27_2_TypeInfo, v72, v124);
        System_Object___ctor((Il2CppObject *)v202, 0LL);
        if ( !v202 )
          goto LABEL_75;
        v204 = v200 + 1;
        *(_DWORD *)(v202 + 16) = v200 + 1;
        if ( v200 >= userServantList->max_length )
          goto LABEL_411;
        if ( v201[v200] )
          ++v199;
        v205 = (System_Func_object__bool__o *)sub_1B64314(System_Func_FollowerInfo__bool__TypeInfo, v72, v203);
        System_Func_object__bool____ctor(
          v205,
          (Il2CppObject *)v202,
          Method_PartyListViewItem___c__DisplayClass27_2___ctor_b__2__,
          0LL);
        Instance = (__int64)System_Linq_Enumerable__Where_object_(
                              (System_Collections_Generic_IEnumerable_TSource__o *)npcFollowerInfoList,
                              (System_Func_TSource__bool__o *)v205,
                              (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
        v207 = userServantList->max_length;
        if ( v200 >= v207 )
          goto LABEL_411;
        questRestrictionInfo = v326;
        v64 = v328;
        if ( v201[v200] )
        {
          if ( *(_DWORD *)(v202 + 16) > DeckMemberMax )
            goto LABEL_276;
          Instance = System_Linq_Enumerable__Any_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                       (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
          if ( v199 > v324 || (Instance & 1) != 0 )
            break;
        }
LABEL_278:
        ++v198;
        ++v200;
        if ( v204 >= (int)userServantList->max_length )
          goto LABEL_279;
      }
      v207 = userServantList->max_length;
LABEL_276:
      if ( v200 >= v207 )
        goto LABEL_411;
      v201[v200] = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v201[v198], 0, v124, v206);
      goto LABEL_278;
    }
  }
LABEL_279:
  v208 = setupInfoa;
  v209 = 0LL;
  v210 = DeckMemberMax;
  v316 = 0;
LABEL_280:
  v211 = 8 * v209 + 32;
  for ( k = v209; ; ++k )
  {
    v213 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v213 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)k >= v213->static_fields->DeckMemberMax )
      break;
    v214 = sub_1B64314(PartyListViewItem___c__DisplayClass27_3_TypeInfo, v72, v124);
    System_Object___ctor((Il2CppObject *)v214, 0LL);
    if ( v331 )
    {
      v216 = deck->fields.deckInfo;
      if ( !v216 )
        goto LABEL_75;
      v217 = v216->fields.svts;
      if ( !v217 )
        goto LABEL_75;
      if ( k >= v217->max_length )
        goto LABEL_411;
      v218 = *(__int64 *)((char *)&v217->obj.klass + v211);
      if ( !v218 )
        goto LABEL_75;
      v219 = (int32_t *)(v218 + 76);
    }
    else
    {
      Instance = (__int64)PartyListViewItem__GetMember(v64, k, v215);
      if ( !Instance )
        goto LABEL_75;
      v219 = (int32_t *)(Instance + 348);
    }
    v220 = *v219;
    if ( (__int64)k < v210 )
    {
      if ( !v214 )
        goto LABEL_75;
      v209 = k + 1;
      *(_DWORD *)(v214 + 16) = k + 1;
      v336 = 0LL;
      v335 = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_40118712(questRestrictionInfo, v220, 0LL);
      v226 = Instance;
      if ( (Instance & 1) == 0 )
        goto LABEL_307;
      v227 = deck->fields.deckInfo;
      if ( !v227 )
        goto LABEL_75;
      v228 = v227->fields.svts;
      if ( !v228 )
        goto LABEL_75;
      if ( k >= v228->max_length )
        goto LABEL_411;
      v229 = *(__int64 *)((char *)&v228->obj.klass + v211);
      if ( !v229 )
        goto LABEL_75;
      v230 = *(_QWORD *)(v229 + 64);
      if ( v230 >= 1 )
      {
        if ( *(_DWORD *)(v214 + 16) == v313 )
        {
          isFixNpca = 1;
          v307 = 0;
          v311 = 1;
          goto LABEL_313;
        }
        v307 = 0;
        v311 = PartyListViewItem__SetNpcFollowerInfo(this, &v336, &v335, npcFollowerInfoList, v230, v220, v225);
LABEL_312:
        isFixNpca = 1;
        goto LABEL_313;
      }
LABEL_307:
      if ( !v318 || questRestrictionInfo->fields.isNotTransitionSupportList )
      {
        v307 = 0;
        v311 = 0;
        goto LABEL_312;
      }
      v231 = *(_DWORD *)(v214 + 16);
      isFixNpca = v231 != FollowerIndex;
      v307 = v231 == FollowerIndex;
      v311 = 0;
LABEL_313:
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v220, 0LL);
      if ( NpcFollowerInfo && ((v226 ^ 1) & 1) == 0 )
      {
        v235 = NpcFollowerInfo;
        if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0LL) )
          v236 = 0;
        else
          v236 = v314;
        v237 = FollowerInfo__get_IsNpc(v235, 0LL);
        v240 = (unsigned int *)*p_memberList;
        if ( v237 )
          v241 = 0;
        else
          v241 = v315;
        followerDeckIda = v241;
        v208 = setupInfoa;
        v242 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v238, v239);
        PartyOrganizationListViewItem___ctor_31768112(
          v242,
          k,
          v235,
          v236,
          setupInfoa,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          followerDeckIda,
          v220,
          0LL);
        if ( !v240 )
          goto LABEL_75;
        v64 = v328;
        if ( v242 )
        {
          Instance = sub_1B64204(v242, *(_QWORD *)(*(_QWORD *)v240 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        if ( k >= v240[6] )
          goto LABEL_411;
        *(_QWORD *)((char *)v240 + v211) = v242;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v240 + v211), (int32_t)v242, v243, v244);
        v245 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_75;
        if ( k >= v245->max_length )
          goto LABEL_411;
        v209 = k + 1;
        this = v321;
        v246 = deck->fields.deckInfo;
        if ( !v246 )
          goto LABEL_75;
        v247 = v246->fields.svts;
        if ( !v247 )
          goto LABEL_75;
        if ( k >= v247->max_length )
          goto LABEL_411;
        v248 = *(__int64 *)((char *)&v247->obj.klass + v211);
        if ( !v248 )
          goto LABEL_75;
        v249 = *(__int64 *)((char *)&v245->obj.klass + v211);
        if ( !v249 )
          goto LABEL_75;
        *(_DWORD *)(v249 + 348) = *(_DWORD *)(v248 + 76);
        ++v316;
        goto LABEL_280;
      }
      if ( v311 || *(_DWORD *)(v214 + 16) == FollowerIndex )
      {
        v250 = v336;
        v251 = (unsigned int *)*p_memberList;
        if ( v336 )
        {
          v303 = (unsigned int *)*p_memberList;
          v252 = v335;
          v253 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v233, v234);
          v254 = v252;
          v251 = v303;
          v255 = v253;
          PartyOrganizationListViewItem___ctor_31768112(
            v253,
            k,
            v250,
            v254,
            v208,
            questRestrictionInfo,
            0LL,
            isFixNpca,
            v315,
            v220,
            0LL);
          if ( !v303 )
            goto LABEL_75;
          v64 = v328;
          if ( !v255 )
          {
LABEL_365:
            if ( k >= v251[6] )
              goto LABEL_411;
            *(_QWORD *)((char *)v251 + v211) = v255;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v251 + v211), (int32_t)v255, v256, v257);
            v273 = *p_memberList;
            if ( !*p_memberList )
              goto LABEL_75;
            if ( k >= v273->max_length )
              goto LABEL_411;
            v274 = deck->fields.deckInfo;
            if ( !v274 )
              goto LABEL_75;
            v275 = v274->fields.svts;
            if ( !v275 )
              goto LABEL_75;
            if ( k >= v275->max_length )
              goto LABEL_411;
            v276 = *(__int64 *)((char *)&v275->obj.klass + v211);
            if ( !v276 )
              goto LABEL_75;
            v277 = *(__int64 *)((char *)&v273->obj.klass + v211);
            if ( !v277 )
              goto LABEL_75;
            *(_DWORD *)(v277 + 348) = *(_DWORD *)(v276 + 76);
            v316 += v307 || v311;
            goto LABEL_280;
          }
        }
        else
        {
          v258 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v233, v234);
          v255 = v258;
          if ( v318 )
            PartyOrganizationListViewItem___ctor_31768112(
              v258,
              k,
              v318,
              v314,
              v208,
              questRestrictionInfo,
              0LL,
              isFixNpca,
              v315,
              v220,
              0LL);
          else
            PartyOrganizationListViewItem___ctor_31804960(v258, k, 1, v208, questRestrictionInfo, 1, v220, 0LL);
          v64 = v328;
          if ( !v251 )
            goto LABEL_75;
          if ( !v255 )
            goto LABEL_365;
        }
        Instance = sub_1B64204(v255, *(_QWORD *)(*(_QWORD *)v251 + 64LL));
        if ( !Instance )
          goto LABEL_412;
        goto LABEL_365;
      }
      v259 = (System_Func_object__bool__o *)sub_1B64314(System_Func_FollowerInfo__bool__TypeInfo, v233, v234);
      System_Func_object__bool____ctor(
        v259,
        (Il2CppObject *)v214,
        Method_PartyListViewItem___c__DisplayClass27_3___ctor_b__3__,
        0LL);
      v260 = System_Linq_Enumerable__Where_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v329,
               (System_Func_TSource__bool__o *)v259,
               (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v261 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1B64204(v260, FollowerInfo___TypeInfo);
      if ( !v261 )
        v261 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                      v260,
                                                                      (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
      Instance = System_Linq_Enumerable__Any_object_(
                   v261,
                   (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( v316 < v324 && (Instance & 1) == 0 )
      {
        if ( (v226 & 1) != 0 )
        {
          v263 = userServantList;
          if ( !userServantList )
            goto LABEL_75;
          if ( k >= userServantList->max_length )
            goto LABEL_411;
          v264 = *(__int64 *)((char *)&userServantList->obj.klass + v211);
          if ( v264 )
          {
            v266 = *(_QWORD *)(v264 + 80);
            v265 = *(_QWORD *)(v264 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v341.fields.currentCryptoKey = v266;
            *(_QWORD *)&v341.fields.fakeValue = v265;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v341, 0LL);
            if ( k >= userServantList->max_length )
              goto LABEL_411;
            v267 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&userServantList->obj.klass + v211);
            if ( !v267 )
              goto LABEL_75;
            v268 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v267[6], 0LL);
            if ( k >= userServantList->max_length )
              goto LABEL_411;
            v269 = Instance;
            Instance = *(__int64 *)((char *)&userServantList->obj.klass + v211);
            if ( !Instance )
              goto LABEL_75;
            v270 = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
            questRestrictionInfo = v326;
            Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(v326, v268, v269, v270, v220, 0, 0LL);
            v263 = userServantList;
            if ( (Instance & 1) != 0 )
            {
              if ( k >= userServantList->max_length )
                goto LABEL_411;
              *(Il2CppClass **)((char *)&userServantList->obj.klass + v211) = 0LL;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)userServantList + v211), 0, v262, v271);
            }
          }
        }
        else
        {
          v263 = userServantList;
          if ( !userServantList )
            goto LABEL_75;
        }
        if ( k >= v263->max_length )
          goto LABEL_411;
        v286 = *(UserServantEntity_o **)((char *)&v263->obj.klass + v211);
        v287 = (unsigned int *)*p_memberList;
        if ( v286 )
        {
          v288 = UserEventDeckEntity__GetEquipList(deck, k, 0LL);
          v291 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v289, v290);
          PartyOrganizationListViewItem___ctor_31795752(
            v291,
            k,
            v286,
            v288,
            setupInfoa,
            questRestrictionInfo,
            0LL,
            v220,
            0LL,
            0,
            0LL);
          v209 = k + 1;
          if ( !v287 )
            goto LABEL_75;
          v64 = v328;
        }
        else
        {
          v291 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v72, v262);
          PartyOrganizationListViewItem___ctor_31804960(v291, k, 0, setupInfoa, questRestrictionInfo, 1, v220, 0LL);
          v64 = v328;
          v209 = k + 1;
          if ( !v287 )
            goto LABEL_75;
        }
        if ( v291 )
        {
          Instance = sub_1B64204(v291, *(_QWORD *)(*(_QWORD *)v287 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        if ( k >= v287[6] )
          goto LABEL_411;
        *(_QWORD *)((char *)v287 + v211) = v291;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v287 + v211), (int32_t)v291, v292, v293);
        ++v316;
        goto LABEL_402;
      }
      if ( System_Linq_Enumerable__Any_object_(
             v261,
             (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
      {
        Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                              v261,
                              0,
                              (const MethodInfo_2E58FB0 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
        goto LABEL_377;
      }
      Instance = (__int64)v329;
      if ( !v329 )
        goto LABEL_75;
      v72 = (FollowerInfo_o *)((unsigned int)-v316 + k);
      if ( v329->fields._size <= (int)k - v316 )
      {
        v279 = (unsigned int *)*p_memberList;
      }
      else
      {
        Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                              v329,
                              (int)k - v316,
                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
LABEL_377:
        v278 = (FollowerInfo_o *)Instance;
        v279 = (unsigned int *)*p_memberList;
        if ( Instance )
        {
          v280 = *(_QWORD *)(Instance + 40);
          if ( !v280 )
            goto LABEL_75;
          if ( !*(_DWORD *)(v280 + 24) )
            goto LABEL_411;
          v281 = *(_QWORD *)(v280 + 32);
          if ( !v281 )
            goto LABEL_75;
          v282 = *(_DWORD *)(v281 + 32);
          v283 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v72, v272);
          PartyOrganizationListViewItem___ctor_31768112(
            v283,
            k,
            v278,
            v282,
            setupInfoa,
            questRestrictionInfo,
            0LL,
            1,
            v315,
            v220,
            0LL);
          if ( !v279 )
            goto LABEL_75;
          v64 = v328;
          if ( v283 )
          {
            Instance = sub_1B64204(v283, *(_QWORD *)(*(_QWORD *)v279 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          if ( k >= v279[6] )
            goto LABEL_411;
          *(_QWORD *)((char *)v279 + v211) = v283;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v279 + v211), (int32_t)v283, v284, v285);
LABEL_402:
          v297 = this->fields.memberList;
          v208 = setupInfoa;
          if ( !v297 )
            goto LABEL_75;
          if ( k >= v297->max_length )
            goto LABEL_411;
          Instance = *(__int64 *)((char *)&v297->obj.klass + v211);
          if ( !Instance )
            goto LABEL_75;
          v298 = this->fields.cost;
          this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                                (PartyOrganizationListViewItem_o *)Instance,
                                0LL)
                            + v298;
          goto LABEL_280;
        }
      }
      v294 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v72, v272);
      PartyOrganizationListViewItem___ctor_31804960(v294, k, 0, setupInfoa, questRestrictionInfo, 0, v220, 0LL);
      if ( !v279 )
        goto LABEL_75;
      if ( v294 )
      {
        Instance = sub_1B64204(v294, *(_QWORD *)(*(_QWORD *)v279 + 64LL));
        if ( !Instance )
          goto LABEL_412;
      }
      if ( k >= v279[6] )
        goto LABEL_411;
      *(_QWORD *)((char *)v279 + v211) = v294;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v279 + v211), (int32_t)v294, v295, v296);
      v64 = v328;
      goto LABEL_402;
    }
    v221 = (unsigned int *)*p_memberList;
    v222 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v72, v215);
    PartyOrganizationListViewItem___ctor_31804960(v222, k, 0, v208, questRestrictionInfo, 1, v220, 0LL);
    if ( !v221 )
      goto LABEL_75;
    if ( v222 )
    {
      Instance = sub_1B64204(v222, *(_QWORD *)(*(_QWORD *)v221 + 64LL));
      if ( !Instance )
        goto LABEL_412;
    }
    if ( k >= v221[6] )
      goto LABEL_411;
    *(_QWORD *)((char *)v221 + v211) = v222;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v221 + v211), (int32_t)v222, v223, v224);
    v211 += 8LL;
  }
LABEL_406:
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)v72);
  if ( (questRestrictionInfo->fields.isNpcEditablePos || !questRestrictionInfo->fields.isNpcOnlyBattle)
    && !PartyListViewItem__GetStartDeckCondition(this, v299) )
  {
    *isBaseModify = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_31674740(
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x29
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 Master_object; // x0
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *UserServantList; // x0
  BalanceConfig_c *v33; // x8
  struct PartyOrganizationListViewItem_array *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_int__o *v39; // x28
  __int64 v40; // x1
  int v41; // w8
  __int64 v42; // x29
  unsigned int v43; // w19
  __int64 v44; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  struct System_Int32_array *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  __int64 v51; // x2
  int32_t v52; // w28
  struct BalanceConfig_StaticFields *static_fields; // x8
  int v54; // w24
  struct DeckServant_o *v55; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v57; // x8
  UserServantEntity_array *v58; // x9
  int32_t initPos; // w27
  UserServantEntity_o *v60; // x29
  struct PartyOrganizationListViewItem_array *v61; // x19
  __int128 v62; // q0
  int64_t v63; // x0
  __int64 v64; // x2
  System_Int64_array *v65; // x21
  struct DeckServant_o *v66; // x8
  struct DeckServantData_array *v67; // x8
  DeckServantData_o *v68; // x8
  System_Int32_array *equipSvtIdList; // x24
  PartyOrganizationListViewItem_o *v70; // x20
  int32_t v71; // w2
  int32_t v72; // w3
  unsigned int max_length; // w8
  Il2CppClass **v74; // x0
  struct PartyOrganizationListViewItem_array *v75; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v78; // x0
  UserEventDeckEntity_o *v79; // [xsp+18h] [xbp-D8h]
  int v80; // [xsp+24h] [xbp-CCh]
  UserServantEntity_array *v81; // [xsp+28h] [xbp-C8h]
  int32_t v84; // [xsp+44h] [xbp-ACh]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+48h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+70h] [xbp-80h]

  if ( (byte_49F82AC & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind);
    sub_1B640C8(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___, v15);
    sub_1B640C8(&DataManager_TypeInfo, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_1B640C8(&PartyOrganizationListViewItem___TypeInfo, v23);
    sub_1B640C8(&PartyOrganizationListViewItem_TypeInfo, v24);
    byte_49F82AC = 1;
  }
  ListViewItem___ctor_40370988((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v25, v26);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v28,
    v29);
  if ( !deck )
    goto LABEL_69;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_69;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  this->fields._IsWaveBattleRestart_k__BackingField = restartWave > 0;
  v84 = index + 1;
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, index + 1, restartWave > 0, 0LL);
  v33 = BalanceConfig_TypeInfo;
  v81 = UserServantList;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v33 = BalanceConfig_TypeInfo;
  }
  v34 = (struct PartyOrganizationListViewItem_array *)sub_1B64170(
                                                        PartyOrganizationListViewItem___TypeInfo,
                                                        (unsigned int)v33->static_fields->DeckMemberMax);
  this->fields.memberList = v34;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.memberList, (int32_t)v34, v35, v36);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  v39 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v37, v38);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
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
  v41 = *(_DWORD *)(Master_object + 24);
  v42 = Master_object;
  if ( v41 >= 1 )
  {
    v43 = 0;
    while ( 1 )
    {
      if ( v43 >= v41 )
LABEL_70:
        sub_1B6432C(Master_object, v40);
      v44 = *(_QWORD *)(v42 + 8LL * (int)v43 + 32);
      if ( !v44 )
        break;
      if ( *(_DWORD *)(v44 + 56) == v84 )
      {
        if ( !v39 )
          break;
        Master_object = System_Collections_Generic_List_int___Contains(
                          v39,
                          *(_DWORD *)(v44 + 32),
                          (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Master_object & 1) == 0 )
        {
          v40 = *(unsigned int *)(v44 + 32);
          items = v39->fields._items;
          v46 = Method_System_Collections_Generic_List_int__Add__;
          ++v39->fields._version;
          if ( !items )
            break;
          size = v39->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v39,
              v40,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            v39->fields._size = size + 1;
            items->m_Items[size + 1] = v40;
          }
        }
      }
      v41 = *(_DWORD *)(v42 + 24);
      if ( (int)++v43 >= v41 )
        goto LABEL_24;
    }
LABEL_69:
    sub_1B64324(Master_object);
  }
LABEL_24:
  if ( !v39 )
    goto LABEL_69;
  v48 = System_Collections_Generic_List_int___ToArray(
          v39,
          (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.waveBattleEnemyClassIds = v48;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.waveBattleEnemyClassIds, (int32_t)v48, v49, v50);
  this->fields._IsClearedWave_k__BackingField = v84 < restartWave;
  Master_object = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Master_object = (__int64)BalanceConfig_TypeInfo;
  }
  v52 = 0;
  v79 = deck;
  v80 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 160LL) * index;
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
    v54 = v80 + v52;
    if ( v52 < static_fields->DeckMainMemberMax )
    {
      v55 = deck->fields.deckInfo;
      if ( !v55 )
        goto LABEL_69;
      svts = v55->fields.svts;
      if ( !svts )
        goto LABEL_69;
      if ( v54 >= svts->max_length )
        goto LABEL_70;
      v57 = svts->m_Items[v54];
      v58 = v81;
      if ( !v57 )
        goto LABEL_69;
      initPos = v57->fields.initPos;
    }
    else
    {
      v58 = v81;
      initPos = v52 + 1;
    }
    if ( !v58 )
      goto LABEL_69;
    if ( v52 >= v58->max_length )
      goto LABEL_70;
    v60 = v58->m_Items[v52];
    v61 = *p_memberList;
    if ( v60 )
    {
      v62 = *(_OWORD *)&v60->fields.id.fields.fakeValue;
      *(_OWORD *)&v87.fields.currentCryptoKey = *(_OWORD *)&v60->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v87.fields.fakeValue = v62;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v86 = v87;
      v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v86, 0LL);
      Master_object = (__int64)UserEventDeckEntity__GetEquipList_39742360(deck, v63, restartWave > 0, 0LL);
      v65 = (System_Int64_array *)Master_object;
      if ( restartWave < 1 )
      {
        equipSvtIdList = 0LL;
      }
      else
      {
        v66 = deck->fields.deckInfo;
        if ( !v66 )
          goto LABEL_69;
        v67 = v66->fields.svts;
        if ( !v67 )
          goto LABEL_69;
        if ( v54 >= v67->max_length )
          goto LABEL_70;
        v68 = v67->m_Items[v54];
        if ( !v68 )
          goto LABEL_69;
        equipSvtIdList = v68->fields.svtEquipIds;
      }
      v70 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v40, v64);
      PartyOrganizationListViewItem___ctor_31795752(
        v70,
        v52,
        v60,
        v65,
        setupInfo,
        questRestrictionInfo,
        0LL,
        initPos,
        equipSvtIdList,
        v84 < restartWave,
        0LL);
      if ( !v61 )
        goto LABEL_69;
      if ( v70 )
      {
        Master_object = sub_1B64204(v70, v61->obj.klass->_1.element_class);
        if ( !Master_object )
        {
LABEL_71:
          v78 = sub_1B64348();
          sub_1B641F0(v78, 0LL);
        }
      }
      max_length = v61->max_length;
      deck = v79;
    }
    else
    {
      v70 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v40, v51);
      PartyOrganizationListViewItem___ctor_31804960(v70, v52, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
      if ( !v61 )
        goto LABEL_69;
      if ( v70 )
      {
        Master_object = sub_1B64204(v70, v61->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_71;
      }
      max_length = v61->max_length;
    }
    if ( v52 >= max_length )
      goto LABEL_70;
    v74 = &v61->obj.klass + v52;
    v74[4] = (Il2CppClass *)v70;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v74 + 4), (int32_t)v70, v71, v72);
    v75 = *p_memberList;
    if ( !*p_memberList )
      goto LABEL_69;
    if ( v52 >= v75->max_length )
      goto LABEL_70;
    Master_object = (__int64)v75->m_Items[v52];
    if ( !Master_object )
      goto LABEL_69;
    PartyOrganizationListViewItem__SetWaveEnemyClassIconIds(
      (PartyOrganizationListViewItem_o *)Master_object,
      this->fields.waveBattleEnemyClassIds,
      0LL);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_69;
    if ( v52 >= memberList->max_length )
      goto LABEL_70;
    Master_object = (__int64)memberList->m_Items[v52];
    if ( !Master_object )
      goto LABEL_69;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)Master_object,
                          0LL)
                      + cost;
    Master_object = (__int64)BalanceConfig_TypeInfo;
    ++v52;
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

  if ( (byte_49F82BE & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&deckMemberCount);
    byte_49F82BE = 1;
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
    sub_1B64324(questRestrictionInfo);
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

  if ( (byte_49F82B3 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_49F82B3 = 1;
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
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( IsUseOldMaster )
        {
          sortValue2 = IsUseOldMaster->fields.sortValue2;
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
        sub_1B64324(IsUseOldMaster);
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
    sub_1B6432C(IsUseOldMaster, method);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.deckName, (int32_t)DefaultDeckName, v4, v5);
}


void __fastcall PartyListViewItem__ClearEquip(PartyListViewItem_o *this, const MethodInfo *method)
{
  il2cpp_array_size_t i; // w20
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w22

  if ( (byte_49F82B8 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    byte_49F82B8 = 1;
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
      sub_1B6432C(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v4 )
LABEL_14:
      sub_1B64324(v4);
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

  if ( (byte_49F82B9 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    byte_49F82B9 = 1;
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
      sub_1B6432C(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v4 )
LABEL_12:
      sub_1B64324(v4);
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
    sub_1B64324(this);
  }
  if ( v7->max_length <= num )
LABEL_9:
    sub_1B6432C(this, *(_QWORD *)&num);
  this = (PartyListViewItem_o *)v7->m_Items[num];
  if ( !this )
    goto LABEL_8;
  PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)this, 0LL);
  PartyListViewItem__CheckRestriction(v5, v8);
}


void __fastcall PartyListViewItem__ClearMember_31677844(PartyListViewItem_o *this, const MethodInfo *method)
{
  il2cpp_array_size_t i; // w20
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8

  if ( (byte_49F82B7 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    byte_49F82B7 = 1;
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
      sub_1B6432C(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v4 )
LABEL_14:
      sub_1B64324(v4);
    if ( !LOBYTE(v4->_1.fields) )
      PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)v4, 0LL);
  }
  this->fields.cost = 0;
  PartyListViewItem__CheckRestriction(this, method);
}


PartyListViewItem_o *__fastcall PartyListViewItem__Clone(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyListViewItem_o *v4; // x20
  const MethodInfo *v5; // x1
  __int64 v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_49F82B2 & 1) == 0 )
  {
    sub_1B640C8(&PartyListViewItem_TypeInfo, method);
    byte_49F82B2 = 1;
  }
  v4 = (PartyListViewItem_o *)sub_1B64314(PartyListViewItem_TypeInfo, method, v2);
  PartyListViewItem___ctor(v4, v5);
  if ( !v4 )
    sub_1B64324(v6);
  PartyListViewItem__Set(v4, this, v7);
  return v4;
}


bool __fastcall PartyListViewItem__CompMember(
        PartyListViewItem_o *this,
        PartyListViewItem_o *item,
        const MethodInfo *method)
{
  PartyListViewItem_o *v4; // x20
  __int64 v5; // x1
  int v7; // w21
  int v8; // w24
  int v9; // w23
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v11; // x9

  v4 = this;
  if ( (byte_49F82C2 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1B640C8(&BalanceConfig_TypeInfo, item);
    byte_49F82C2 = 1;
  }
  if ( !item )
LABEL_17:
    sub_1B64324(this);
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
    v9 = *(_DWORD *)(*(_QWORD *)&this->fields._IsWaveBattleRestart_k__BackingField + 156LL);
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
      sub_1B6432C(this, v5);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x1
  unsigned __int64 i; // x24
  Il2CppObject *AssetName; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppObject *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_49F82CE & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v8);
    byte_49F82CE = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_string__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
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
      sub_1B6432C(AssetName, v10);
    v14 = memberList->m_Items[i];
    if ( v14 )
    {
      AssetName = (Il2CppObject *)PartyOrganizationListViewItem__GetAssetName(v14, 0LL);
      if ( AssetName )
      {
        if ( !v9 )
          goto LABEL_21;
        items = v9->fields._items;
        v18 = Method_System_Collections_Generic_List_string__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v9->fields._size;
        v20 = AssetName;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            AssetName,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
        }
      }
    }
  }
  if ( !v9 )
LABEL_21:
    sub_1B64324(AssetName);
  if ( v9->fields._size < 1 )
    return 0LL;
  else
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_49F82CD & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&typeMax);
    sub_1B640C8(&int___TypeInfo, v5);
    byte_49F82CD = 1;
  }
  v7 = (System_Int32_array *)sub_1B64170(int___TypeInfo, (unsigned int)typeMax);
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
      sub_1B64324(p_image);
    if ( i >= memberList->max_length )
LABEL_21:
      sub_1B6432C(p_image, v6);
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
  const MethodInfo_34AD404 **v40; // x25
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
  const MethodInfo_34AD404 **v52; // x28
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

  if ( (byte_49F82C0 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_int___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Intersect_int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int____get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int____get_Item__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_49F82C0 = 1;
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
      sub_1B6432C(DeckConditionServantNumAndPosition, method);
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(SvtId, 0LL) >= 1 )
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v30, 0LL) >= 1 )
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
      v40 = (const MethodInfo_34AD404 **)&Method_System_Collections_Generic_List_int____get_Item__;
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
    DeckConditionServantNumAndPosition = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
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
                  (const MethodInfo_2E5E45C *)Method_System_Linq_Enumerable_Intersect_int___);
          v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       v58,
                                                                       (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( System_Collections_Generic_List_Int32Enum___get_Item(
                 v74,
                 v50,
                 (const MethodInfo_34924B8 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
          {
            DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                           v59,
                                                           (const MethodInfo_2E46564 *)Method_System_Linq_Enumerable_Any_int___);
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
                                                         (const MethodInfo_34924B8 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          v40 = v52;
          if ( (_DWORD)DeckConditionServantNumAndPosition == 2 )
          {
            DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                           v59,
                                                           (const MethodInfo_2E46564 *)Method_System_Linq_Enumerable_Any_int___);
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
    sub_1B64324(DeckConditionServantNumAndPosition);
  v65 = *(_QWORD *)&v63->fields.baseSvtId.fields.currentCryptoKey;
  v64 = *(_QWORD *)&v63->fields.baseSvtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v75.fields.currentCryptoKey = v65;
  *(_QWORD *)&v75.fields.fakeValue = v64;
  v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v75, 0LL);
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
        if ( v66 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v76, 0LL) )
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
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v13; // x1
  int32_t FixedServantPositionCount; // w20
  il2cpp_array_size_t v15; // w22
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v17; // x8

  if ( (byte_49F82BF & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&deckMemberCount);
    byte_49F82BF = 1;
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
    sub_1B64324(questRestrictionInfo);
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
      sub_1B6432C(questRestrictionInfo, v13);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_long__o *v7; // x20
  __int64 EquipUserSvtId; // x0
  __int64 v9; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x8
  __int64 v11; // x23
  int max_length; // w9
  Il2CppClass **v13; // x8
  PartyOrganizationListViewItem_o *v14; // x21
  struct System_Int64_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_49F82C5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v6);
    byte_49F82C5 = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                    System_Collections_Generic_List_long__TypeInfo,
                                                    method,
                                                    v2);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
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
      sub_1B6432C(EquipUserSvtId, v9);
    v13 = &memberList->obj.klass + v11;
    v14 = (PartyOrganizationListViewItem_o *)v13[4];
    if ( !v14 )
      goto LABEL_15;
    EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId((PartyOrganizationListViewItem_o *)v13[4], 0LL);
    if ( EquipUserSvtId >= 1 )
    {
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v14, 0LL);
      if ( !v7 )
        goto LABEL_15;
      items = v7->fields._items;
      v16 = Method_System_Collections_Generic_List_long__Add__;
      ++v7->fields._version;
      if ( !items )
        goto LABEL_15;
      size = v7->fields._size;
      v9 = EquipUserSvtId;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v7,
          EquipUserSvtId,
          *(const MethodInfo_3495074 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v7->fields._size = size + 1;
        items->m_Items[size] = EquipUserSvtId;
      }
    }
    memberList = this->fields.memberList;
    ++v11;
    if ( !memberList )
      goto LABEL_15;
  }
  if ( !v7 )
LABEL_15:
    sub_1B64324(EquipUserSvtId);
  return System_Collections_Generic_List_long___ToArray(
           v7,
           (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
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
  int32_t v13; // w3
  unsigned __int64 i; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  EventUpValInfo_array *v16; // x8

  v6 = this;
  if ( (byte_49F82CC & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, eventId);
    this = (PartyListViewItem_o *)sub_1B640C8(&EventUpValInfo___TypeInfo, v7);
    byte_49F82CC = 1;
  }
  setupInfo = v6->fields.setupInfo;
  if ( setupInfo )
  {
    setupInfo = (struct EventUpValSetupInfo_o *)setupInfo->fields.eventIdList;
    if ( !setupInfo )
LABEL_23:
      sub_1B64324(this);
    v9 = *(_QWORD *)&setupInfo->fields.questPhase;
    if ( v9 )
    {
      if ( !(_DWORD)v9 )
LABEL_24:
        sub_1B6432C(this, eventId);
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
  v11 = (EventUpValInfo_array *)sub_1B64170(EventUpValInfo___TypeInfo, (unsigned int)v10->static_fields->DeckMemberMax);
  *eventUpValList = v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)eventUpValList, (int32_t)v11, v12, v13);
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
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  struct QuestRestrictionInfo_o *v24; // x8
  int servantNumMax; // w9
  __int64 v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  System_Func_object__bool__o *v29; // x23
  struct QuestRestrictionInfo_o *v30; // x8
  System_Collections_Generic_List_Enumerator_int__o v32; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v33; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49F82AF & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_FollowerInfo___, deck);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9);
    sub_1B640C8(&System_Func_FollowerInfo__bool__TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11);
    sub_1B640C8(&Method_PartyListViewItem___c__DisplayClass32_0__GetFollowerIndex_b__0__, v12);
    sub_1B640C8(&PartyListViewItem___c__DisplayClass32_0_TypeInfo, v13);
    byte_49F82AF = 1;
  }
  memset(&v33, 0, sizeof(v33));
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      (System_Collections_Generic_List_int__o *)questRestrictionInfo,
      (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v33 = v32;
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v33,
              (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
      if ( !v15 )
        break;
      deckInfo = deck->fields.deckInfo;
      if ( !deckInfo )
        sub_1B64324(v15);
      svts = deckInfo->fields.svts;
      if ( !svts )
        sub_1B64324(v15);
      current = v33.fields._current;
      if ( v33.fields._current - 1 >= svts->max_length )
        sub_1B6432C(v15, v16);
      v20 = svts->m_Items[v33.fields._current - 1];
      if ( !v20 )
        sub_1B64324(v15);
      v21 = this->fields.questRestrictionInfo;
      if ( !v21 )
        sub_1B64324(0LL);
      if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_40118712(v21, v20->fields.initPos, 0LL) )
        goto LABEL_38;
    }
    current = 0;
LABEL_38:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v33,
      (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    v30 = this->fields.questRestrictionInfo;
    if ( v30 )
    {
      if ( fixNpcFollowerInfoList )
        return PartyListViewItem__GetSupportInitIndex(this, fixNpcFollowerInfoList, v23);
      else
        return v30->fields.supportInitIndex;
    }
    return 0;
  }
  if ( fixNpcFollowerInfoList && !v24->fields.isNpcEditablePos )
  {
    v26 = sub_1B64314(PartyListViewItem___c__DisplayClass32_0_TypeInfo, v22, v23);
    System_Object___ctor((Il2CppObject *)v26, 0LL);
    if ( v26 )
    {
      *(_DWORD *)(v26 + 16) = current;
      v29 = (System_Func_object__bool__o *)sub_1B64314(System_Func_FollowerInfo__bool__TypeInfo, v27, v28);
      System_Func_object__bool____ctor(
        v29,
        (Il2CppObject *)v26,
        Method_PartyListViewItem___c__DisplayClass32_0__GetFollowerIndex_b__0__,
        0LL);
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)fixNpcFollowerInfoList,
              (System_Func_T__bool__o *)v29,
              (const MethodInfo_2E24870 *)Method_BasicHelper_Any_FollowerInfo___) )
        return current;
      goto LABEL_31;
    }
LABEL_39:
    sub_1B64324(questRestrictionInfo);
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

  if ( (byte_49F82CB & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    byte_49F82CB = 1;
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
      sub_1B64324(v5);
    if ( v3 >= memberList->max_length )
      sub_1B6432C(v5, method);
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

  if ( (byte_49F82CA & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&bool___TypeInfo, v3);
    byte_49F82CA = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v6 = (System_Boolean_array *)sub_1B64170(bool___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
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
        sub_1B64324(v7);
      if ( i >= v6->max_length )
LABEL_18:
        sub_1B6432C(v7, v5);
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
    sub_1B64324(this);
  if ( memberList->max_length <= num )
    sub_1B6432C(this, *(_QWORD *)&num);
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
    sub_1B64324(this);
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
        sub_1B6432C(myServantNumMax, npcSvtIds);
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
  __int64 v6; // x1
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

  if ( (byte_49F82C1 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_49F82C1 = 1;
  }
  menuKind = this->fields.menuKind;
  if ( menuKind == 1 )
    goto LABEL_4;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( menuKind == 3 )
  {
    if ( !questRestrictionInfo )
LABEL_47:
      sub_1B64324(questRestrictionInfo);
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
        questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
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
        if ( (signed int)v15 >= SHIDWORD(questRestrictionInfo->fields.fixedSupportPositionRestrictionEntity[2].fields.name) )
          break;
        v19 = this->fields.memberList;
        if ( !v19 )
          goto LABEL_47;
        if ( v15 >= v19->max_length )
LABEL_48:
          sub_1B6432C(questRestrictionInfo, v6);
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
        v18 |= BYTE2(v21->_2.unity_user_data) != 0;
        v17 |= BYTE3(v21->_2.unity_user_data) != 0;
        FixedServantPositionCount -= BYTE6(v21->_2.unity_user_data) & 1;
        v16 |= BYTE4(v21->_2.unity_user_data) != 0;
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
  __int64 v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  System_Func_object__bool__o *v18; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  int myServantNumMax; // [xsp+Ch] [xbp-64h]

  v4 = this;
  if ( (byte_49F82B0 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, fixNpcFollowerInfoList);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_FollowerInfo___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_FollowerInfo___, v6);
    sub_1B640C8(&System_Func_FollowerInfo__bool__TypeInfo, v7);
    sub_1B640C8(&Method_PartyListViewItem___c__DisplayClass33_0__GetSupportInitIndex_b__0__, v8);
    this = (PartyListViewItem_o *)sub_1B640C8(&PartyListViewItem___c__DisplayClass33_0_TypeInfo, v9);
    byte_49F82B0 = 1;
  }
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_15:
    sub_1B64324(this);
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
      v15 = sub_1B64314(PartyListViewItem___c__DisplayClass33_0_TypeInfo, fixNpcFollowerInfoList, method);
      System_Object___ctor((Il2CppObject *)v15, 0LL);
      if ( !v15 )
        goto LABEL_15;
      *(_DWORD *)(v15 + 16) = ++v13;
      v18 = (System_Func_object__bool__o *)sub_1B64314(System_Func_FollowerInfo__bool__TypeInfo, v16, v17);
      System_Func_object__bool____ctor(
        v18,
        (Il2CppObject *)v15,
        Method_PartyListViewItem___c__DisplayClass33_0__GetSupportInitIndex_b__0__,
        0LL);
      v19 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)fixNpcFollowerInfoList,
              (System_Func_TSource__bool__o *)v18,
              (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      if ( !System_Linq_Enumerable__Any_object_(
              v19,
              (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
      {
        if ( myServantNumMax < 1 )
          return *(_DWORD *)(v15 + 16);
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
  int32_t v7; // w3
  ServantEntity_array *v8; // x20
  unsigned __int64 v9; // x24
  ServantStatusBattleListViewItem_o *i; // x21
  BalanceConfig_c *v11; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v13; // x8
  ServantStatusBattleListViewItem_c *servantEntity; // x22
  __int64 v16; // x0

  if ( (byte_49F82C8 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&ServantEntity___TypeInfo, v3);
    byte_49F82C8 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v8 = (ServantEntity_array *)sub_1B64170(ServantEntity___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
  v9 = 0LL;
  for ( i = (ServantStatusBattleListViewItem_o *)v8->m_Items; ; i = (ServantStatusBattleListViewItem_o *)((char *)i + 8) )
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
        sub_1B64324(v11);
      servantEntity = (ServantStatusBattleListViewItem_c *)v13->fields.servantEntity;
      if ( servantEntity )
      {
        v11 = (BalanceConfig_c *)sub_1B64204(servantEntity, v8->obj.klass->_1.element_class);
        if ( !v11 )
        {
          v16 = sub_1B64348();
          sub_1B641F0(v16, 0LL);
        }
      }
      if ( v9 >= v8->max_length )
LABEL_20:
        sub_1B6432C(v11, v5);
      i->klass = servantEntity;
      sub_1B6406C(i, (int32_t)servantEntity, v6, v7);
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
  ServantStatusBattleListViewItem_o *i; // x21
  ServantStatusBattleListViewItem_c *SvtNameText; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49F82C9 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&string___TypeInfo, v3);
    byte_49F82C9 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v6 = (System_String_array *)sub_1B64170(string___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
  v7 = 0LL;
  for ( i = (ServantStatusBattleListViewItem_o *)v6->m_Items; ; i = (ServantStatusBattleListViewItem_o *)((char *)i + 8) )
  {
    SvtNameText = (ServantStatusBattleListViewItem_c *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      SvtNameText = (ServantStatusBattleListViewItem_c *)BalanceConfig_TypeInfo;
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
      SvtNameText = (ServantStatusBattleListViewItem_c *)PartyOrganizationListViewItem__get_SvtNameText(v11, 0LL);
      if ( !v6 )
LABEL_17:
        sub_1B64324(SvtNameText);
      if ( v7 >= v6->max_length )
LABEL_18:
        sub_1B6432C(SvtNameText, v5);
      i->klass = SvtNameText;
      sub_1B6406C(i, (int32_t)SvtNameText, v12, v13);
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
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_String_o *deckName; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v16; // x23
  int32_t max_length; // w22
  int64_t userEquipId; // x20
  DeckServant_o *v19; // x21
  __int64 v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  __int64 v24; // x2
  struct PartyOrganizationListViewItem_array *v25; // x24
  __int64 v26; // x25
  __int64 v27; // x29
  int v28; // w28
  PartyOrganizationListViewItem_o *v29; // x22
  __int64 v30; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v32; // q0
  System_Int64_array *EquipList; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  _DWORD *v36; // x22
  __int64 v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  _DWORD *v40; // x0
  __int64 v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+40h] [xbp-80h]

  if ( (byte_49F82C3 & 1) == 0 )
  {
    sub_1B640C8(&DeckServantData_TypeInfo, baseItem);
    sub_1B640C8(&DeckServant_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1B640C8(&UserDeckEntity_TypeInfo, v7);
    byte_49F82C3 = 1;
  }
  v8 = sub_1B64314(UserDeckEntity_TypeInfo, baseItem, method);
  UserDeckEntity___ctor((UserDeckEntity_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_29;
  *(_QWORD *)(v8 + 16) = this->fields.id;
  *(_DWORD *)(v8 + 32) = this->fields.index + 1;
  deckName = this->fields.deckName;
  *(_QWORD *)(v8 + 40) = deckName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 40), (int32_t)deckName, v10, v11);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_29;
  v16 = baseItem ? baseItem : this;
  max_length = memberList->max_length;
  userEquipId = v16->fields.userEquipId;
  v19 = (DeckServant_o *)sub_1B64314(DeckServant_TypeInfo, v13, v14);
  DeckServant___ctor_38554240(v19, max_length, userEquipId, 0LL);
  *(_QWORD *)(v8 + 48) = v19;
  v20 = v8 + 48;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 48), (int32_t)v19, v21, v22);
  v25 = v16->fields.memberList;
  if ( !v25 )
    goto LABEL_29;
  v26 = *(_QWORD *)&v25->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = 0LL;
    v28 = 1;
    while ( 1 )
    {
      v29 = v25->m_Items[v27];
      v30 = sub_1B64314(DeckServantData_TypeInfo, v23, v24);
      DeckServantData___ctor((DeckServantData_o *)v30, 0LL);
      if ( !v30 )
        break;
      *(_DWORD *)(v30 + 16) = v28;
      if ( !v29 )
        break;
      userServantEntity = v29->fields.userServantEntity;
      if ( userServantEntity )
      {
        v32 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v46.fields.fakeValue = v32;
      }
      else
      {
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v45, 0LL, 0LL);
        v46 = v45;
      }
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v44 = v46;
      *(_QWORD *)(v30 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v44, 0LL);
      *(_BYTE *)(v30 + 56) = v29->fields.isFollower;
      EquipList = PartyOrganizationListViewItem__GetEquipList(v29, 0LL);
      *(_QWORD *)(v30 + 40) = EquipList;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 40), (int32_t)EquipList, v34, v35);
      *(_DWORD *)(v30 + 76) = v29->fields._InitPos_k__BackingField;
      if ( !*(_QWORD *)v20 )
        break;
      v36 = *(_DWORD **)(*(_QWORD *)v20 + 16LL);
      if ( !v36 )
        break;
      v37 = sub_1B64204(v30, *(_QWORD *)(*(_QWORD *)v36 + 64LL));
      if ( !v37 )
      {
        v43 = sub_1B64348();
        sub_1B641F0(v43, 0LL);
      }
      if ( (unsigned int)(v28 - 1) < v36[6] )
      {
        v40 = &v36[2 * v27];
        *((_QWORD *)v40 + 4) = v30;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v40 + 8), v30, v38, v39);
        if ( (_DWORD)v26 == v28 )
          return (UserDeckEntity_o *)v8;
        v27 = v28;
        if ( v28++ < v25->max_length )
          continue;
      }
      sub_1B6432C(v37, v23);
    }
LABEL_29:
    sub_1B64324(v9);
  }
  return (UserDeckEntity_o *)v8;
}


UserEventDeckEntity_o *__fastcall PartyListViewItem__GetUserEventDeck(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 UserId; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct PartyOrganizationListViewItem_array *memberList; // x22
  int64_t userEquipId; // x21
  DeckServant_o *v14; // x0
  int32_t max_length; // w1
  DeckServant_o *v16; // x22
  __int64 v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  __int64 v21; // x2
  struct PartyOrganizationListViewItem_array *v22; // x8
  unsigned __int64 v23; // x28
  unsigned __int64 v24; // x9
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  PartyOrganizationListViewItem_o *v26; // x22
  struct QuestRestrictionInfo_o *v27; // x8
  _BOOL4 isNpcEditablePos; // w23
  _BOOL4 IsEditablePos; // w0
  __int64 v30; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v32; // q0
  System_Int64_array *EquipList; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t InitPos_k__BackingField; // w8
  int v37; // w8
  unsigned int *v38; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  unsigned int *v41; // x0
  __int64 v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+40h] [xbp-80h]

  if ( (byte_49F82C4 & 1) == 0 )
  {
    sub_1B640C8(&DeckServantData_TypeInfo, method);
    sub_1B640C8(&DeckServant_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1B640C8(&UserEventDeckEntity_TypeInfo, v7);
    byte_49F82C4 = 1;
  }
  v8 = sub_1B64314(UserEventDeckEntity_TypeInfo, method, v2);
  UserEventDeckEntity___ctor((UserEventDeckEntity_o *)v8, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v8 )
    goto LABEL_51;
  *(_QWORD *)(v8 + 16) = UserId;
  *(_DWORD *)(v8 + 24) = this->fields.id;
  *(_DWORD *)(v8 + 28) = this->fields.index + 1;
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_51;
  userEquipId = this->fields.userEquipId;
  v14 = (DeckServant_o *)sub_1B64314(DeckServant_TypeInfo, v10, v11);
  max_length = memberList->max_length;
  v16 = v14;
  DeckServant___ctor_38554240(v14, max_length, userEquipId, 0LL);
  *(_QWORD *)(v8 + 32) = v16;
  v17 = v8 + 32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 32), (int32_t)v16, v18, v19);
  v22 = this->fields.memberList;
  if ( !v22 )
LABEL_51:
    sub_1B64324(UserId);
  v23 = 0LL;
  while ( 1 )
  {
    v24 = v22->max_length;
    if ( (__int64)v23 >= (int)v24 )
      return (UserEventDeckEntity_o *)v8;
    if ( v23 >= v24 )
      goto LABEL_52;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v26 = v22->m_Items[v23];
    if ( !questRestrictionInfo )
    {
      isNpcEditablePos = 0;
      goto LABEL_24;
    }
    UserId = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
    v27 = this->fields.questRestrictionInfo;
    if ( (UserId & 1) != 0 )
    {
      if ( !v27 )
        goto LABEL_51;
      isNpcEditablePos = v27->fields.isNpcEditablePos;
    }
    else
    {
      if ( !v26 || !v27 )
        goto LABEL_51;
      IsEditablePos = QuestRestrictionInfo__IsEditablePos(
                        this->fields.questRestrictionInfo,
                        v26->fields._InitPos_k__BackingField,
                        0LL);
      v27 = this->fields.questRestrictionInfo;
      isNpcEditablePos = IsEditablePos;
      if ( !v27 )
        goto LABEL_24;
    }
    UserId = QuestRestrictionInfo__IsNpcMulitipleOrOnly(v27, 0LL);
    if ( (UserId & 1) != 0 )
    {
      if ( !v26 )
        goto LABEL_51;
      if ( v26->fields.isFixNpc
        && v26->fields.isFollower
        && !isNpcEditablePos
        && !v26->fields.isMyServantOrNpcRestriction )
      {
        ++v23;
        goto LABEL_47;
      }
    }
LABEL_24:
    v30 = sub_1B64314(DeckServantData_TypeInfo, v20, v21);
    DeckServantData___ctor((DeckServantData_o *)v30, 0LL);
    if ( !v30 )
      goto LABEL_51;
    *(_DWORD *)(v30 + 16) = v23 + 1;
    if ( !v26 )
      goto LABEL_51;
    userServantEntity = v26->fields.userServantEntity;
    if ( userServantEntity )
    {
      v32 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v46.fields.fakeValue = v32;
    }
    else
    {
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v45, 0LL, 0LL);
      v46 = v45;
    }
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v44 = v46;
    *(_QWORD *)(v30 + 24) = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v44, 0LL);
    *(_BYTE *)(v30 + 56) = v26->fields.isFollower;
    EquipList = PartyOrganizationListViewItem__GetEquipList(v26, 0LL);
    *(_QWORD *)(v30 + 40) = EquipList;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 40), (int32_t)EquipList, v34, v35);
    InitPos_k__BackingField = v26->fields._InitPos_k__BackingField;
    *(_QWORD *)(v30 + 64) = 0LL;
    *(_DWORD *)(v30 + 76) = InitPos_k__BackingField;
    if ( *(_QWORD *)(v30 + 24) )
    {
      v37 = 0;
LABEL_39:
      if ( (isNpcEditablePos & v37 & 1) != 0 )
      {
        *(_QWORD *)(v30 + 64) = v26->fields.npcFollowerSvtId;
        if ( v26->fields.isFixNpc )
          *(_BYTE *)(v30 + 56) = 0;
      }
      goto LABEL_42;
    }
    if ( !v26->fields.isMyServantOrNpcRestriction || !v26->fields.isFollower )
    {
      v37 = !v26->fields.isMyServantOrNpcRestriction;
      goto LABEL_39;
    }
    *(_QWORD *)(v30 + 64) = v26->fields.npcFollowerSvtId;
LABEL_42:
    if ( !*(_QWORD *)v17 )
      goto LABEL_51;
    v38 = *(unsigned int **)(*(_QWORD *)v17 + 16LL);
    if ( !v38 )
      goto LABEL_51;
    UserId = sub_1B64204(v30, *(_QWORD *)(*(_QWORD *)v38 + 64LL));
    if ( !UserId )
    {
      v43 = sub_1B64348();
      sub_1B641F0(v43, 0LL);
    }
    if ( v23 >= v38[6] )
LABEL_52:
      sub_1B6432C(UserId, v20);
    v41 = &v38[2 * v23];
    *((_QWORD *)v41 + 4) = v30;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 8), v30, v39, v40);
    ++v23;
LABEL_47:
    v22 = this->fields.memberList;
    if ( !v22 )
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

  if ( (byte_49F82AE & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, userServantList);
    byte_49F82AE = 1;
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
        sub_1B64324(v6);
      if ( i >= npcSvtIds->max_length )
LABEL_17:
        sub_1B6432C(v6, userServantList);
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
      sub_1B64324(this);
    v6 = 0LL;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
        sub_1B6432C(this, userSvtId);
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

  if ( (byte_49F82BC & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    byte_49F82BC = 1;
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
      sub_1B6432C(v3, method);
    v8 = memberList->m_Items[v5];
    if ( !v8 )
LABEL_12:
      sub_1B64324(v3);
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

  if ( (byte_49F82BB & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    byte_49F82BB = 1;
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
      sub_1B6432C(v3, method);
    v6 = memberList->m_Items[i];
    if ( !v6 )
LABEL_15:
      sub_1B64324(v3);
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

  if ( (byte_49F82BD & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    byte_49F82BD = 1;
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
      sub_1B6432C(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[v5];
    if ( !v4 )
LABEL_12:
      sub_1B64324(v4);
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
  if ( (byte_49F82C6 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1B640C8(
                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                    *(_QWORD *)&svtId);
    byte_49F82C6 = 1;
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
          sub_1B6432C(this, *(_QWORD *)&svtId);
        this = (PartyListViewItem_o *)memberList->m_Items[v7];
        if ( !this )
          break;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)this, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(EquipSvtId, 0LL) == svtId;
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
      sub_1B64324(this);
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
  __int64 v6; // x1
  bool IsUseOldMaster; // w21
  signed __int64 i; // x23
  signed __int64 name_high; // x24
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v12; // x25
  struct QuestRestrictionInfo_o *v13; // x8

  if ( (byte_49F82AD & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, deck);
    byte_49F82AD = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_29:
    sub_1B64324(questRestrictionInfo);
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
      sub_1B6432C(questRestrictionInfo, v6);
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
            return i < name_high;
          continue;
        }
      }
      if ( !v12 || !v13 )
        goto LABEL_29;
      if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_40118712(
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


bool __fastcall PartyListViewItem__IsSpecificMenuKind_31686832(
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

  if ( (byte_49F82BA & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    byte_49F82BA = 1;
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
    sub_1B6432C(v4, method);
  v4 = memberList->m_Items[0];
  if ( !v4 )
LABEL_16:
    sub_1B64324(v4);
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

  if ( (byte_49F82B4 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    byte_49F82B4 = 1;
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
      sub_1B6432C(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[v5];
    if ( !v4 )
LABEL_12:
      sub_1B64324(v4);
    LODWORD(v4->vtable._3_ToString.methodPtr) = i;
    PartyOrganizationListViewItem__Modify((PartyOrganizationListViewItem_o *)v4, 0LL);
  }
  PartyListViewItem__CheckRestriction(this, method);
  PartyListViewItem__UpdateEventEffect(this, v7);
}


void __fastcall PartyListViewItem__Set(PartyListViewItem_o *this, PartyListViewItem_o *item, const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct EventUpValSetupInfo_o *setupInfo; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
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

  if ( (byte_49F82B5 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, item);
    byte_49F82B5 = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
LABEL_20:
    sub_1B64324(v5);
  *(_QWORD *)&this->fields.menuKind = *(_QWORD *)&item->fields.menuKind;
  setupInfo = item->fields.setupInfo;
  this->fields.setupInfo = setupInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v6, v7);
  questRestrictionInfo = item->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)questRestrictionInfo,
    v10,
    v11);
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
      v5 = (PartyOrganizationListViewItem_o *)sub_1B64204(v5, v18->obj.klass->_1.element_class);
      if ( !v5 )
      {
        v30 = sub_1B64348();
        sub_1B641F0(v30, 0LL);
      }
    }
    if ( v16 >= v18->max_length )
      goto LABEL_21;
    v22 = &v18->obj.klass + (int)v16;
    v22[4] = (Il2CppClass *)v21;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v21, v19, v20);
    v23 = this->fields.memberList;
    if ( !v23 )
      goto LABEL_20;
    if ( v16 >= v23->max_length )
LABEL_21:
      sub_1B6432C(v5, v12);
    v24 = v23->m_Items[v16];
    if ( !v24 )
      goto LABEL_20;
    v24->fields._NowPos_k__BackingField = v15++;
  }
  this->fields.cost = item->fields.cost;
  this->fields.isDeckNameDefault = item->fields.isDeckNameDefault;
  deckName = item->fields.deckName;
  this->fields.deckName = deckName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.deckName, (int32_t)deckName, v13, v14);
  this->fields.userEquipId = item->fields.userEquipId;
  waveBattleEnemyClassIds = item->fields.waveBattleEnemyClassIds;
  this->fields.waveBattleEnemyClassIds = waveBattleEnemyClassIds;
  p_waveBattleEnemyClassIds = &this->fields.waveBattleEnemyClassIds;
  sub_1B6406C(
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_deckName, (int32_t)v3, v7, v8);
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

  if ( (byte_49F82B6 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&num);
    byte_49F82B6 = 1;
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
      sub_1B6432C(v8, *(_QWORD *)&num);
    v10 = &memberList->obj.klass + (int)i;
    v11 = (PartyOrganizationListViewItem_o *)v10[4];
    if ( !v11 )
LABEL_15:
      sub_1B64324(v8);
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
    || (PartyOrganizationListViewItem__Modify_31807744((PartyOrganizationListViewItem_o *)this, item, 0LL),
        (v10 = v6->fields.memberList) == 0LL) )
  {
LABEL_11:
    sub_1B64324(this);
  }
  if ( v10->max_length <= num )
LABEL_12:
    sub_1B6432C(this, *(_QWORD *)&num);
  this = (PartyListViewItem_o *)v10->m_Items[num];
  if ( !this )
    goto LABEL_11;
  v11 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0LL) + v11;
  PartyListViewItem__CheckRestriction(v6, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__SetMember_31686856(
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
    sub_1B64324(this);
  }
  if ( member )
  {
    this = (PartyListViewItem_o *)sub_1B64204(member, v11->obj.klass->_1.element_class);
    if ( !this )
    {
      v16 = sub_1B64348();
      sub_1B641F0(v16, 0LL);
    }
  }
  if ( v11->max_length <= idx )
    goto LABEL_18;
  v12 = &v11->obj.klass + idx;
  v12[4] = (Il2CppClass *)member;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 4), (int32_t)member, v9, v10);
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
    sub_1B6432C(this, *(_QWORD *)&idx);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Int32_array *Master_object; // x0
  __int64 v19; // x1
  signed int max_length; // w8
  bool v21; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x19
  signed int v23; // w20
  FollowerInfo_o *v24; // x26
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t ReturnTypeByQuestId; // w0
  ServantLeaderInfo_o *ServantLeaderInfo; // x27
  struct QuestRestrictionInfo_o *v28; // x8
  int32_t v29; // w0
  int32_t v30; // w2
  int32_t v31; // w3
  QuestRestrictionInfo_o *v32; // x28
  QuestRestrictionInfo_o *v33; // x28
  __int64 v34; // x24
  int32_t *v36; // [xsp+0h] [xbp-90h]
  __int64 value; // [xsp+10h] [xbp-80h]
  PartyListViewItem_o *v39; // [xsp+18h] [xbp-78h]
  Il2CppObject *v40; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_49F82B1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___, follower);
    sub_1B640C8(&Method_DataManager_GetMaster_NpcServantFollowerMaster___, v12);
    sub_1B640C8(&DataManager_TypeInfo, v13);
    sub_1B640C8(
      &Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__,
      v14);
    sub_1B640C8(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_49F82B1 = 1;
  }
  v40 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_NpcServantFollowerMaster___);
  if ( !npcFollowerInfoList )
    goto LABEL_37;
  max_length = npcFollowerInfoList->max_length;
  v21 = max_length > 0;
  if ( max_length >= 1 )
  {
    v36 = followerClassId;
    v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    v23 = 0;
    v39 = this;
    do
    {
      if ( v23 >= (unsigned int)max_length )
        sub_1B6432C(Master_object, v19);
      v24 = npcFollowerInfoList->m_Items[v23];
      if ( !v24 )
        goto LABEL_37;
      if ( v24->fields.npcFollowerSvtId == npcFollowerSvtId )
      {
        questRestrictionInfo = this->fields.questRestrictionInfo;
        if ( !questRestrictionInfo )
          goto LABEL_37;
        ReturnTypeByQuestId = FollowerInfo__GetReturnTypeByQuestId(questRestrictionInfo->fields.questId, 0LL);
        ServantLeaderInfo = FollowerInfo__getServantLeaderInfo(v24, 0, ReturnTypeByQuestId, 0LL);
        Master_object = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Master_object )
          goto LABEL_37;
        Master_object = (System_Int32_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Master_object,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_NpcServantFollowerIndividualityMaster___);
        if ( !Master_object )
          goto LABEL_37;
        Master_object = (System_Int32_array *)DataMasterBase_object__object__long___TryGetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                &entity,
                                                npcFollowerSvtId,
                                                (const MethodInfo_30D40A4 *)Method_DataMasterBase_NpcServantFollowerIndividualityMaster__NpcServantFollowerIndividualityEntity__long__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          v28 = this->fields.questRestrictionInfo;
          if ( !v28 )
            goto LABEL_37;
          v29 = FollowerInfo__GetReturnTypeByQuestId(v28->fields.questId, 0LL);
          Master_object = FollowerInfo__GetNpcServantIndividuality(v24, 0, v29, 0LL);
          if ( !this->fields.questRestrictionInfo )
            goto LABEL_37;
          Master_object = (System_Int32_array *)QuestRestrictionInfo__IsRestrictionServantIndividuality_40121688(
                                                  this->fields.questRestrictionInfo,
                                                  Master_object,
                                                  pos,
                                                  0LL);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
            goto LABEL_34;
        }
        else
        {
          if ( !v22 )
            goto LABEL_37;
          Master_object = (System_Int32_array *)DataMasterBase_object__object__long___TryGetEntity(
                                                  v22,
                                                  &v40,
                                                  npcFollowerSvtId,
                                                  (const MethodInfo_30D40A4 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
            goto LABEL_41;
          Master_object = (System_Int32_array *)v40;
          if ( !v40 )
            goto LABEL_37;
          Master_object = (System_Int32_array *)NpcServantFollowerEntity__IsOverwriteIndividuality(
                                                  (NpcServantFollowerEntity_o *)v40,
                                                  0LL);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            Master_object = (System_Int32_array *)v40;
            if ( !v40 )
              goto LABEL_37;
            v32 = this->fields.questRestrictionInfo;
            Master_object = NpcServantFollowerEntity__GetOverwriteIndividuality((NpcServantFollowerEntity_o *)v40, 0LL);
            if ( !v32 )
              goto LABEL_37;
            Master_object = (System_Int32_array *)QuestRestrictionInfo__IsRestrictionServantIndividuality_40121688(
                                                    v32,
                                                    Master_object,
                                                    pos,
                                                    0LL);
          }
          else
          {
LABEL_41:
            if ( !ServantLeaderInfo )
              goto LABEL_37;
            v33 = this->fields.questRestrictionInfo;
            v34 = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.currentCryptoKey;
            *(_QWORD *)&v42.fields.fakeValue = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              value = *(_QWORD *)&ServantLeaderInfo->fields.svtId.fields.fakeValue;
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v42.fields.fakeValue = value;
            }
            *(_QWORD *)&v42.fields.currentCryptoKey = v34;
            Master_object = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                    v42,
                                                    0LL);
            if ( !v33 )
              goto LABEL_37;
            Master_object = (System_Int32_array *)QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                    v33,
                                                    (int32_t)Master_object,
                                                    ServantLeaderInfo->fields.limitCount,
                                                    ServantLeaderInfo->fields.dispLimitCount,
                                                    pos,
                                                    0,
                                                    0LL);
            this = v39;
          }
          if ( ((unsigned __int8)Master_object & 1) == 0 )
          {
LABEL_34:
            *follower = v24;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)follower, (int32_t)v24, v30, v31);
            if ( ServantLeaderInfo )
            {
              *v36 = ServantLeaderInfo->fields.classId;
              return v21;
            }
LABEL_37:
            sub_1B64324(Master_object);
          }
        }
      }
      max_length = npcFollowerInfoList->max_length;
      v21 = ++v23 < max_length;
    }
    while ( v23 < max_length );
  }
  return v21;
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
    sub_1B6432C(this, *(_QWORD *)&num1);
  this = (PartyListViewItem_o *)memberList->m_Items[num1];
  if ( !this )
LABEL_7:
    sub_1B64324(this);
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
        sub_1B6432C(this, method);
      this = (PartyListViewItem_o *)memberList->m_Items[v4];
      if ( !this )
        break;
      PartyOrganizationListViewItem__UpdateEventEffect((PartyOrganizationListViewItem_o *)this, 0LL);
      max_length = memberList->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1B64324(this);
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
        sub_1B6432C(this, method);
      this = (PartyListViewItem_o *)memberList->m_Items[v4];
      if ( !this )
        break;
      PartyOrganizationListViewItem__UpdateServantInfo((PartyOrganizationListViewItem_o *)this, 0LL);
      max_length = memberList->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1B64324(this);
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

  if ( (byte_49F82C7 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_10227/*"PARTY_ORGANIZATION_NAME_BASE"*/, v3);
    byte_49F82C7 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_10227/*"PARTY_ORGANIZATION_NAME_BASE"*/, 0LL);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}