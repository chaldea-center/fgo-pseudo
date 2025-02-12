void __fastcall PartyListViewItem___ctor(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0

  if ( (byte_4BC364B & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    sub_1C1ABD4(&PartyOrganizationListViewItem___TypeInfo, v3);
    byte_4BC364B = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  this->fields.memberList = (struct PartyOrganizationListViewItem_array *)sub_1C1AC7C(
                                                                            PartyOrganizationListViewItem___TypeInfo,
                                                                            (unsigned int)v4->static_fields->DeckMemberMax);
  sub_1C1AB78(&this->fields.memberList);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_32833320(
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
  PartyOrganizationListViewItem_o *Instance; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  struct DeckServant_o *deckInfo; // x8
  int32_t FollowerIndex; // w0
  BalanceConfig_c *v27; // x8
  int32_t DeckMainMemberMax; // w23
  UserServantEntity_array *v29; // x20
  int32_t v30; // w29
  struct DeckServant_o *v31; // x8
  struct DeckServantData_array *svts; // x8
  int32_t max_length; // w9
  DeckServantData_o *v34; // x8
  int32_t initPos; // w25
  int v36; // w9
  struct PartyOrganizationListViewItem_array *v37; // x19
  PartyOrganizationListViewItem_o *v38; // x0
  PartyOrganizationListViewItem_o *v39; // x22
  PartyListViewItem_o *v40; // x26
  QuestRestrictionInfo_o *v41; // x21
  UserServantEntity_o *v42; // x28
  struct PartyOrganizationListViewItem_array *v43; // x20
  System_Int64_array *EquipList; // x19
  PartyOrganizationListViewItem_o *v45; // x0
  UserServantEntity_o *v46; // x2
  Il2CppClass **v47; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v50; // x0
  int32_t v53; // [xsp+2Ch] [xbp-84h]
  UserServantEntity_array *UserServantList; // [xsp+38h] [xbp-78h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+40h] [xbp-70h]
  int32_t v57; // [xsp+4Ch] [xbp-64h]

  v12 = questRestrictionInfo;
  if ( (byte_4BC364C & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind);
    sub_1C1ABD4(&PartyOrganizationListViewItem___TypeInfo, v19);
    sub_1C1ABD4(&PartyOrganizationListViewItem_TypeInfo, v20);
    sub_1C1ABD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v21);
    byte_4BC364C = 1;
  }
  ListViewItem___ctor_41943804((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C1AB78(&this->fields.setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  Instance = (PartyOrganizationListViewItem_o *)sub_1C1AB78(&this->fields.questRestrictionInfo);
  if ( !deck )
    goto LABEL_53;
  PartyListViewItem__SetDeckName(this, deck->fields.name, v24);
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_53;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.id;
  UserServantList = UserDeckEntity__GetUserServantList(deck, 0LL);
  FollowerIndex = UserDeckEntity__GetFollowerIndex(deck, 0LL);
  v27 = BalanceConfig_TypeInfo;
  if ( FollowerIndex <= 0 )
  {
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v27 = BalanceConfig_TypeInfo;
    }
    DeckMainMemberMax = v27->static_fields->DeckMainMemberMax;
  }
  else
  {
    DeckMainMemberMax = FollowerIndex;
  }
  if ( !v27->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v27);
    v27 = BalanceConfig_TypeInfo;
  }
  this->fields.memberList = (struct PartyOrganizationListViewItem_array *)sub_1C1AC7C(
                                                                            PartyOrganizationListViewItem___TypeInfo,
                                                                            (unsigned int)v27->static_fields->DeckMemberMax);
  sub_1C1AB78(&this->fields.memberList);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  v29 = UserServantList;
  if ( *(_QWORD *)&Instance->fields.sortIndex )
  {
    Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      follower = *(FollowerInfo_o **)&Instance->fields.sortIndex;
      Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        followerClassId = Instance->fields.sortValue0;
        Instance = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          followerDeckId = HIDWORD(Instance->fields.sortValue0);
          goto LABEL_18;
        }
      }
    }
LABEL_53:
    sub_1C1AE30(Instance, v23);
  }
LABEL_18:
  v30 = 0;
  v53 = DeckMainMemberMax;
  while ( 1 )
  {
    Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( v30 >= *(_DWORD *)(*(_QWORD *)&Instance->fields.classId + 156LL) )
      break;
    v31 = deck->fields.deckInfo;
    if ( !v31 )
      goto LABEL_53;
    svts = v31->fields.svts;
    if ( !svts )
      goto LABEL_53;
    max_length = svts->max_length;
    if ( v30 >= max_length )
    {
      v36 = v30 + 1;
      initPos = v30 + 1;
    }
    else
    {
      if ( v30 >= (unsigned int)max_length )
        goto LABEL_54;
      v34 = svts->m_Items[v30];
      if ( !v34 )
        goto LABEL_53;
      initPos = v34->fields.initPos;
      v36 = v30 + 1;
    }
    v57 = v36;
    if ( v36 == DeckMainMemberMax )
    {
      v37 = *p_memberList;
      v38 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
      v39 = v38;
      if ( follower )
      {
        PartyOrganizationListViewItem___ctor_32949872(
          v38,
          v30,
          follower,
          followerClassId,
          setupInfo,
          v12,
          friendPointCampaignEntityList,
          0,
          followerDeckId,
          initPos,
          0LL);
        if ( !v37 )
          goto LABEL_53;
      }
      else
      {
        PartyOrganizationListViewItem___ctor_32986860(v38, v30, 1, setupInfo, v12, 1, initPos, 0LL);
        if ( !v37 )
          goto LABEL_53;
      }
      if ( v39 )
      {
        Instance = (PartyOrganizationListViewItem_o *)sub_1C1AD10(v39, v37->obj.klass->_1.element_class);
        if ( !Instance )
          goto LABEL_55;
      }
      if ( v30 >= v37->max_length )
        goto LABEL_54;
      v47 = &v37->obj.klass + v30;
    }
    else
    {
      if ( !v29 )
        goto LABEL_53;
      if ( v30 >= v29->max_length )
        goto LABEL_54;
      v40 = this;
      v41 = v12;
      v42 = v29->m_Items[v30];
      v43 = *p_memberList;
      if ( v42 )
      {
        EquipList = UserDeckEntity__GetEquipList(deck, v30, 0LL);
        v45 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
        v46 = v42;
        v39 = v45;
        v12 = v41;
        PartyOrganizationListViewItem___ctor_32977504(
          v45,
          v30,
          v46,
          EquipList,
          setupInfo,
          v41,
          0LL,
          initPos,
          0LL,
          0,
          0LL);
        if ( !v43 )
          goto LABEL_53;
      }
      else
      {
        v39 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
        v12 = v41;
        PartyOrganizationListViewItem___ctor_32986860(v39, v30, 0, setupInfo, v41, 1, initPos, 0LL);
        if ( !v43 )
          goto LABEL_53;
      }
      this = v40;
      if ( v39 )
      {
        Instance = (PartyOrganizationListViewItem_o *)sub_1C1AD10(v39, v43->obj.klass->_1.element_class);
        if ( !Instance )
        {
LABEL_55:
          v50 = sub_1C1AE54();
          sub_1C1ACFC(v50, 0LL);
        }
      }
      if ( v30 >= v43->max_length )
        goto LABEL_54;
      v47 = &v43->obj.klass + v30;
      v29 = UserServantList;
      DeckMainMemberMax = v53;
    }
    v47[4] = (Il2CppClass *)v39;
    Instance = (PartyOrganizationListViewItem_o *)sub_1C1AB78(v47 + 4);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_53;
    if ( v30 >= memberList->max_length )
LABEL_54:
      sub_1C1AE38(Instance, v23);
    Instance = memberList->m_Items[v30];
    if ( !Instance )
      goto LABEL_53;
    cost = this->fields.cost;
    v30 = v57;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(Instance, 0LL) + cost;
  }
  PartyListViewItem__CheckRestriction(this, v23);
}


void __fastcall PartyListViewItem___ctor_32835892(
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
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  const MethodInfo *v26; // x1
  __int64 Instance; // x0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x2
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo *v31; // x3
  int32_t FollowerIndex; // w25
  BalanceConfig_c *v33; // x0
  PartyListViewItem_o *v34; // x24
  int v35; // w27
  const MethodInfo *v36; // x2
  int32_t v37; // w23
  BalanceConfig_c *v38; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x28
  int32_t v40; // w8
  const MethodInfo *v41; // x2
  unsigned int v42; // w24
  struct DeckServant_o *v43; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v45; // x8
  int32_t *p_initPos; // x8
  int32_t initPos; // w19
  const MethodInfo *v48; // x6
  int v49; // w25
  struct DeckServant_o *v50; // x8
  struct DeckServantData_array *v51; // x8
  DeckServantData_o *v52; // x8
  _BOOL4 v53; // w27
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *v55; // x23
  int32_t v56; // w27
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v58; // x26
  int32_t v59; // w29
  PartyOrganizationListViewItem_o *v60; // x25
  PartyOrganizationListViewItem_o **v61; // x0
  FollowerInfo_o *v62; // x23
  struct PartyOrganizationListViewItem_array *v63; // x29
  int32_t v64; // w27
  UserServantEntity_array *v65; // x26
  Il2CppClass **v66; // x25
  Il2CppClass *v67; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v68; // x25
  Il2CppClass *v69; // t1
  Il2CppClass *parent; // x23
  Il2CppClass *declaringType; // x27
  int32_t v72; // w23
  int32_t v73; // w27
  int32_t DispLimitCount; // w0
  UserServantEntity_o *v75; // x23
  struct PartyOrganizationListViewItem_array *v76; // x26
  System_Int64_array *EquipList; // x27
  PartyOrganizationListViewItem_o *v78; // x0
  Il2CppClass **v79; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v82; // x1
  __int64 v83; // x0
  bool *v84; // [xsp+20h] [xbp-C0h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+30h] [xbp-B0h]
  UserServantEntity_array *UserServantList; // [xsp+38h] [xbp-A8h]
  int v88; // [xsp+40h] [xbp-A0h]
  int v89; // [xsp+44h] [xbp-9Ch]
  PartyListViewItem_o *v90; // [xsp+48h] [xbp-98h]
  int32_t v92; // [xsp+60h] [xbp-80h]
  _BOOL4 v93; // [xsp+64h] [xbp-7Ch]
  int32_t followerClassIda; // [xsp+74h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16

  if ( (byte_4BC364D & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, isBaseModify);
    sub_1C1ABD4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v19);
    sub_1C1ABD4(&DataManager_TypeInfo, v20);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1C1ABD4(&PartyOrganizationListViewItem___TypeInfo, v22);
    sub_1C1ABD4(&PartyOrganizationListViewItem_TypeInfo, v23);
    sub_1C1ABD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v24);
    byte_4BC364D = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_41943804((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C1AB78(&this->fields.setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C1AB78(&this->fields.questRestrictionInfo);
  this->fields.isDeckNameDefault = 1;
  this->fields.deckName = PartyListViewItem__get_DefaultDeckName(this, v26);
  Instance = sub_1C1AB78(&this->fields.deckName);
  if ( !deck )
    goto LABEL_110;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_110;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v29) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_110;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0LL);
  }
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0LL, v31);
  if ( FollowerIndex <= 0 )
  {
    v33 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v33 = BalanceConfig_TypeInfo;
    }
    FollowerIndex = v33->static_fields->DeckMainMemberMax;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  if ( *(int *)(Instance + 48) < 1 )
  {
    v34 = 0LL;
    v35 = 0;
    v93 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    v34 = *(PartyListViewItem_o **)(Instance + 72);
    v35 = 0;
    v93 = v34 == 0LL;
    if ( follower && v34 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_110;
      v35 = *(_DWORD *)(Instance + 48);
      Instance = (__int64)PartyListViewItem__GetMember(v34, v35 - 1, v36);
      if ( !Instance )
        goto LABEL_110;
      v37 = *(_DWORD *)(Instance + 348);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_110;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v37, follower, 0LL);
      v93 = 0;
    }
  }
  v38 = BalanceConfig_TypeInfo;
  v84 = isBaseModify;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v38 = BalanceConfig_TypeInfo;
  }
  this->fields.memberList = (struct PartyOrganizationListViewItem_array *)sub_1C1AC7C(
                                                                            PartyOrganizationListViewItem___TypeInfo,
                                                                            (unsigned int)v38->static_fields->DeckMemberMax);
  p_memberList = &this->fields.memberList;
  sub_1C1AB78(&this->fields.memberList);
  this->fields.cost = 0;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_110;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    follower = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    followerClassId = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    v40 = *(_DWORD *)(Instance + 36);
  }
  else
  {
    v40 = followerDeckId;
  }
  v92 = v40;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || (v90 = v34, !Instance) )
LABEL_110:
    sub_1C1AE30(Instance, v28);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)Instance,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0LL);
  v42 = 0;
  v88 = v35 - 1;
  v89 = FollowerIndex - 1;
  while ( 1 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v42 >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 156LL) )
      break;
    if ( v93 )
    {
      v43 = deck->fields.deckInfo;
      if ( !v43 )
        goto LABEL_110;
      svts = v43->fields.svts;
      if ( !svts )
        goto LABEL_110;
      if ( v42 >= svts->max_length )
        goto LABEL_114;
      v45 = svts->m_Items[v42];
      if ( !v45 )
        goto LABEL_110;
      p_initPos = &v45->fields.initPos;
    }
    else
    {
      Instance = (__int64)PartyListViewItem__GetMember(v90, v42, v41);
      if ( !Instance )
        goto LABEL_110;
      p_initPos = (int32_t *)(Instance + 348);
    }
    initPos = *p_initPos;
    followera = 0LL;
    followerClassIda = 0;
    if ( !questRestrictionInfo )
      goto LABEL_110;
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41685668(questRestrictionInfo, initPos, 0LL);
    v49 = Instance;
    if ( (Instance & 1) != 0 )
    {
      v50 = deck->fields.deckInfo;
      if ( !v50 )
        goto LABEL_110;
      v51 = v50->fields.svts;
      if ( !v51 )
        goto LABEL_110;
      if ( v42 >= v51->max_length )
        goto LABEL_114;
      v52 = v51->m_Items[v42];
      if ( !v52 )
        goto LABEL_110;
      v53 = 0;
      if ( v88 != v42 )
      {
        npcFollowerSvtId = v52->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v53 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v48);
      }
    }
    else
    {
      v53 = 0;
    }
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_110;
    Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                          (PartyOrganizationUtility_o *)Instance,
                          initPos,
                          0LL);
    if ( !Instance || ((v49 ^ 1) & 1) != 0 )
    {
      if ( v89 != v42 && !v53 )
      {
        if ( (v49 & 1) != 0 )
        {
          v65 = UserServantList;
          if ( !UserServantList )
            goto LABEL_110;
          if ( v42 >= UserServantList->max_length )
            goto LABEL_114;
          v66 = &UserServantList->obj.klass + (int)v42;
          v69 = v66[4];
          v68 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v66 + 4);
          v67 = v69;
          if ( v69 )
          {
            declaringType = v67->_1.declaringType;
            parent = v67->_1.parent;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v96.fields.currentCryptoKey = declaringType;
            *(_QWORD *)&v96.fields.fakeValue = parent;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v96, 0LL);
            if ( v42 >= UserServantList->max_length )
              goto LABEL_114;
            if ( !*v68 )
              goto LABEL_110;
            v72 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128((*v68)[6], 0LL);
            if ( v42 >= UserServantList->max_length )
              goto LABEL_114;
            v73 = Instance;
            Instance = (__int64)*v68;
            if ( !*v68 )
              goto LABEL_110;
            DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
            Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                         questRestrictionInfo,
                         v72,
                         v73,
                         DispLimitCount,
                         initPos,
                         0,
                         0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( v42 >= UserServantList->max_length )
                goto LABEL_114;
              *v68 = 0LL;
              Instance = sub_1C1AB78(v68);
            }
          }
        }
        else
        {
          v65 = UserServantList;
          if ( !UserServantList )
            goto LABEL_110;
        }
        if ( v42 >= v65->max_length )
          goto LABEL_114;
        v75 = v65->m_Items[v42];
        v76 = *p_memberList;
        if ( v75 )
        {
          EquipList = UserEventDeckEntity__GetEquipList(deck, v42, 0LL);
          v60 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32977504(
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
            goto LABEL_110;
        }
        else
        {
          v60 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32986860(v60, v42, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
          if ( !v76 )
            goto LABEL_110;
        }
        if ( v60 )
        {
          Instance = sub_1C1AD10(v60, v76->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_115:
            v83 = sub_1C1AE54();
            sub_1C1ACFC(v83, 0LL);
          }
        }
        if ( v42 >= v76->max_length )
          goto LABEL_114;
        v79 = &v76->obj.klass + (int)v42;
      }
      else
      {
        v62 = followera;
        v63 = *p_memberList;
        if ( followera )
        {
          v64 = followerClassIda;
          v60 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32949872(
            v60,
            v42,
            v62,
            v64,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v92,
            initPos,
            0LL);
LABEL_94:
          if ( !v63 )
            goto LABEL_110;
        }
        else
        {
          v78 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
          v60 = v78;
          if ( follower )
          {
            PartyOrganizationListViewItem___ctor_32949872(
              v78,
              v42,
              follower,
              followerClassId,
              setupInfo,
              questRestrictionInfo,
              friendPointCampaignEntityList,
              0,
              v92,
              initPos,
              0LL);
            goto LABEL_94;
          }
          PartyOrganizationListViewItem___ctor_32986860(v78, v42, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
          if ( !v63 )
            goto LABEL_110;
        }
        if ( v60 )
        {
          Instance = sub_1C1AD10(v60, v63->obj.klass->_1.element_class);
          if ( !Instance )
            goto LABEL_115;
        }
        if ( v42 >= v63->max_length )
          goto LABEL_114;
        v79 = &v63->obj.klass + (int)v42;
      }
      v61 = (PartyOrganizationListViewItem_o **)(v79 + 4);
      goto LABEL_105;
    }
    v55 = (FollowerInfo_o *)Instance;
    if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0LL) )
      v56 = 0;
    else
      v56 = followerClassId;
    IsNpc = FollowerInfo__get_IsNpc(v55, 0LL);
    v58 = *p_memberList;
    if ( IsNpc )
      v59 = 0;
    else
      v59 = v92;
    v60 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_32949872(
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
      goto LABEL_110;
    if ( v60 )
    {
      Instance = sub_1C1AD10(v60, v58->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_115;
    }
    if ( v42 >= v58->max_length )
      goto LABEL_114;
    v61 = &v58->m_Items[v42];
LABEL_105:
    *v61 = v60;
    Instance = sub_1C1AB78(v61);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_110;
    if ( v42 >= memberList->max_length )
LABEL_114:
      sub_1C1AE38(Instance, v28);
    Instance = (__int64)memberList->m_Items[v42];
    if ( !Instance )
      goto LABEL_110;
    cost = this->fields.cost;
    ++v42;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, v28);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v82) )
    *v84 = 1;
}


void __fastcall PartyListViewItem___ctor_32840484(
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
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x24
  const MethodInfo *v28; // x1
  __int64 Instance; // x0
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x2
  struct DeckServant_o *deckInfo; // x8
  const MethodInfo_387ACC8 **v33; // x28
  PartyListViewItem_o *v34; // x27
  unsigned int v35; // w25
  const MethodInfo *v36; // x2
  int32_t v37; // w19
  int32_t v38; // w8
  BalanceConfig_c *v39; // x0
  int32_t v40; // w8
  FollowerInfo_array *QuestFollowerList; // x0
  const MethodInfo *v42; // x2
  unsigned int *v43; // x23
  __int64 v44; // x8
  unsigned __int64 v45; // x24
  __int64 v46; // x25
  int32_t *p_initPos; // x8
  struct DeckServant_o *v48; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v50; // x8
  int32_t initPos; // w25
  unsigned __int64 max_length; // x8
  UserServantEntity_o *v53; // x9
  __int64 v54; // x20
  __int64 v55; // x26
  __int64 v56; // x20
  const MethodInfo *v57; // x6
  int v58; // w26
  struct DeckServant_o *v59; // x8
  struct DeckServantData_array *v60; // x8
  DeckServantData_o *v61; // x8
  _BOOL4 v62; // w27
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *v64; // x20
  PartyListViewItem_o *v65; // x23
  const MethodInfo_387ACC8 **v66; // x21
  UserEventDeckEntity_o *v67; // x28
  int32_t v68; // w27
  bool IsNpc; // w0
  unsigned int *v70; // x19
  int32_t v71; // w29
  PartyOrganizationListViewItem_o *v72; // x26
  __int64 v73; // x25
  unsigned __int64 v74; // x8
  FollowerInfo_o *v75; // x20
  int32_t v76; // w27
  unsigned int *v77; // x19
  PartyOrganizationListViewItem_o *v78; // x26
  UserServantEntity_o *v79; // x8
  __int64 v80; // x20
  __int64 v81; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v82; // x8
  int32_t v83; // w20
  int32_t v84; // w26
  int32_t DispLimitCount; // w0
  UserServantEntity_o *v86; // x20
  System_Int64_array *EquipList; // x27
  PartyOrganizationListViewItem_o *v88; // x0
  int32_t v89; // w1
  bool v90; // w2
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  const MethodInfo *v93; // x1
  __int64 v94; // x0
  UserServantMaster_o *Master_object; // [xsp+20h] [xbp-100h]
  FollowerInfo_o *v97; // [xsp+30h] [xbp-F0h]
  int32_t *v98; // [xsp+38h] [xbp-E8h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+40h] [xbp-E0h]
  UserServantEntity_array *UserServantList; // [xsp+50h] [xbp-D0h]
  struct System_Int32_array *svtIdForceBattleList; // [xsp+60h] [xbp-C0h]
  UserServantEntity_o **m_Items; // [xsp+70h] [xbp-B0h]
  __int64 v104; // [xsp+78h] [xbp-A8h]
  int32_t v105; // [xsp+84h] [xbp-9Ch]
  PartyListViewItem_o *v106; // [xsp+88h] [xbp-98h]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+90h] [xbp-90h]
  __int64 v108; // [xsp+98h] [xbp-88h]
  __int64 v109; // [xsp+A8h] [xbp-78h]
  int32_t followerClassIda; // [xsp+B4h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16

  if ( (byte_4BC364E & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, isBaseModify);
    sub_1C1ABD4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v20);
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserServantMaster___, v21);
    sub_1C1ABD4(&DataManager_TypeInfo, v22);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1C1ABD4(&PartyOrganizationListViewItem___TypeInfo, v24);
    sub_1C1ABD4(&PartyOrganizationListViewItem_TypeInfo, v25);
    sub_1C1ABD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v26);
    byte_4BC364E = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_41943804((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C1AB78(&this->fields.setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C1AB78(&this->fields.questRestrictionInfo);
  this->fields.isDeckNameDefault = 1;
  this->fields.deckName = PartyListViewItem__get_DefaultDeckName(this, v28);
  Instance = sub_1C1AB78(&this->fields.deckName);
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
  v33 = (const MethodInfo_387ACC8 **)&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, 0, 0, 0LL);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  if ( *(int *)(Instance + 48) < 1 )
  {
    v34 = 0LL;
    if ( !questRestrictionInfo )
      goto LABEL_15;
    goto LABEL_14;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    v35 = *(_DWORD *)(Instance + 48);
    Instance = (__int64)PartyListViewItem__GetMember(v34, v35 - 1, v36);
    if ( !Instance )
      goto LABEL_142;
    v37 = *(_DWORD *)(Instance + 348);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v37, follower, 0LL);
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    follower = *(FollowerInfo_o **)(Instance + 24);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    followerClassId = *(_DWORD *)(Instance + 32);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_142;
    v38 = *(_DWORD *)(Instance + 36);
  }
  else
  {
    v38 = followerDeckId;
  }
  v105 = v38;
  v39 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v39 = BalanceConfig_TypeInfo;
  }
  this->fields.memberList = (struct PartyOrganizationListViewItem_array *)sub_1C1AC7C(
                                                                            PartyOrganizationListViewItem___TypeInfo,
                                                                            (unsigned int)v39->static_fields->DeckMemberMax);
  sub_1C1AB78(&this->fields.memberList);
  v40 = this->fields.menuKind;
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  if ( v40 == 3 )
  {
    Instance = (__int64)*p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_142;
    Instance = (__int64)QuestRestrictionInfo__GetFixedMyServantSingleSvtIdList((QuestRestrictionInfo_o *)Instance, 0LL);
    if ( !*p_questRestrictionInfo )
      goto LABEL_142;
    v104 = Instance;
    svtIdForceBattleList = (*p_questRestrictionInfo)->fields.svtIdForceBattleList;
  }
  else
  {
    svtIdForceBattleList = 0LL;
    v104 = 0LL;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || (v97 = follower, !Instance) )
LABEL_142:
    sub_1C1AE30(Instance, v30);
  QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                        (NpcFollowerMaster_o *)Instance,
                        (*p_questRestrictionInfo)->fields.questId,
                        (*p_questRestrictionInfo)->fields.questPhase,
                        0LL);
  v43 = (unsigned int *)UserServantList;
  v44 = v35;
  v45 = 0LL;
  v46 = 0LL;
  v98 = &svtIdForceBattleList->m_Items[1];
  npcFollowerInfoList = QuestFollowerList;
  m_Items = UserServantList->m_Items;
  v108 = v44 - 1;
  v106 = v34;
  while ( 1 )
  {
    Instance = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v45 >= *(int *)(*(_QWORD *)(Instance + 184) + 156LL) )
      break;
    v109 = v46;
    if ( v34 )
    {
      Instance = (__int64)PartyListViewItem__GetMember(v34, v45, v42);
      if ( !Instance )
        goto LABEL_142;
      p_initPos = (int32_t *)(Instance + 348);
    }
    else
    {
      v48 = deck->fields.deckInfo;
      if ( !v48 )
        goto LABEL_142;
      svts = v48->fields.svts;
      if ( !svts )
        goto LABEL_142;
      if ( v45 >= svts->max_length )
        goto LABEL_143;
      v50 = svts->m_Items[v45];
      if ( !v50 )
        goto LABEL_142;
      p_initPos = &v50->fields.initPos;
    }
    initPos = *p_initPos;
    if ( this->fields.menuKind == 3 )
    {
      if ( !v104 )
        goto LABEL_142;
      if ( (__int64)v45 >= *(int *)(v104 + 24) )
      {
        v77 = (unsigned int *)*p_memberList;
        v78 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32986860(v78, v45, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v77 )
          goto LABEL_142;
        v73 = v109;
        if ( v78 )
        {
          Instance = sub_1C1AD10(v78, *(_QWORD *)(*(_QWORD *)v77 + 64LL));
          if ( !Instance )
          {
LABEL_144:
            v94 = sub_1C1AE54();
            sub_1C1ACFC(v94, 0LL);
          }
        }
        if ( v45 >= v77[6] )
          goto LABEL_143;
        *(_QWORD *)&v77[2 * v45 + 8] = v78;
        sub_1C1AB78((char *)v77 + v109 + 32);
        goto LABEL_138;
      }
      if ( svtIdForceBattleList )
      {
        if ( v108 != v45 && isFirstEnforceChange )
        {
          max_length = svtIdForceBattleList->max_length;
          if ( (__int64)v45 < (int)max_length )
          {
            if ( v45 >= max_length )
              goto LABEL_143;
            v30 = (const MethodInfo *)(unsigned int)v98[v45];
            if ( (int)v30 >= 1 )
            {
              if ( !v43 )
                goto LABEL_142;
              if ( v45 >= v43[6] )
                goto LABEL_143;
              v53 = m_Items[v45];
              if ( !v53 )
                goto LABEL_68;
              v55 = *(_QWORD *)&v53->fields.svtId.fields.currentCryptoKey;
              v54 = *(_QWORD *)&v53->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v112.fields.currentCryptoKey = v55;
              *(_QWORD *)&v112.fields.fakeValue = v54;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v112, 0LL);
              max_length = svtIdForceBattleList->max_length;
              if ( v45 >= max_length )
                goto LABEL_143;
              v30 = (const MethodInfo *)(unsigned int)v98[v45];
              if ( (_DWORD)Instance != (_DWORD)v30 )
              {
LABEL_68:
                if ( v45 >= max_length )
                  goto LABEL_143;
                Instance = (__int64)Master_object;
                if ( !Master_object )
                  goto LABEL_142;
                Instance = (__int64)UserServantMaster__getSvtIdBattle(Master_object, (int32_t)v30, 0LL);
                v56 = Instance;
                if ( Instance )
                {
                  Instance = sub_1C1AD10(Instance, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
                  if ( !Instance )
                    goto LABEL_144;
                }
                if ( v45 >= v43[6] )
                  goto LABEL_143;
                m_Items[v45] = (UserServantEntity_o *)v56;
                Instance = sub_1C1AB78((char *)m_Items + v109);
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
    Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41685668(questRestrictionInfo, initPos, 0LL);
    v58 = Instance;
    if ( (Instance & 1) != 0 )
    {
      v59 = deck->fields.deckInfo;
      if ( !v59 )
        goto LABEL_142;
      v60 = v59->fields.svts;
      if ( !v60 )
        goto LABEL_142;
      if ( v45 >= v60->max_length )
        goto LABEL_143;
      v61 = v60->m_Items[v45];
      if ( !v61 )
        goto LABEL_142;
      v62 = 0;
      if ( v108 != v45 )
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
    Instance = (__int64)SingletonTemplate_object___get_Instance(*v33);
    if ( !Instance )
      goto LABEL_142;
    Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                          (PartyOrganizationUtility_o *)Instance,
                          initPos,
                          0LL);
    if ( Instance && ((v58 ^ 1) & 1) == 0 )
    {
      v64 = (FollowerInfo_o *)Instance;
      v65 = this;
      v66 = v33;
      v67 = deck;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0LL) )
        v68 = 0;
      else
        v68 = followerClassId;
      IsNpc = FollowerInfo__get_IsNpc(v64, 0LL);
      v70 = (unsigned int *)*p_memberList;
      if ( IsNpc )
        v71 = 0;
      else
        v71 = v105;
      v72 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32949872(
        v72,
        v45,
        v64,
        v68,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v71,
        initPos,
        0LL);
      if ( !v70 )
        goto LABEL_142;
      v34 = v106;
      v73 = v109;
      deck = v67;
      if ( v72 )
      {
        Instance = sub_1C1AD10(v72, *(_QWORD *)(*(_QWORD *)v70 + 64LL));
        if ( !Instance )
          goto LABEL_144;
      }
      v74 = v70[6];
      v33 = v66;
      this = v65;
      v43 = (unsigned int *)UserServantList;
      goto LABEL_133;
    }
    if ( v108 != v45 && !v62 )
    {
      if ( (v58 & 1) != 0 )
      {
        if ( !v43 )
          goto LABEL_142;
        if ( v45 >= v43[6] )
          goto LABEL_143;
        v79 = m_Items[v45];
        if ( v79 )
        {
          v81 = *(_QWORD *)&v79->fields.svtId.fields.currentCryptoKey;
          v80 = *(_QWORD *)&v79->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v113.fields.currentCryptoKey = v81;
          *(_QWORD *)&v113.fields.fakeValue = v80;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v113, 0LL);
          if ( v45 >= v43[6] )
            goto LABEL_143;
          v82 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)m_Items[v45];
          if ( !v82 )
            goto LABEL_142;
          v83 = Instance;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v82[6], 0LL);
          if ( v45 >= v43[6] )
LABEL_143:
            sub_1C1AE38(Instance, v30);
          v84 = Instance;
          Instance = (__int64)m_Items[v45];
          if ( !Instance )
            goto LABEL_142;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
          Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                       questRestrictionInfo,
                       v83,
                       v84,
                       DispLimitCount,
                       initPos,
                       0,
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v45 >= v43[6] )
              goto LABEL_143;
            m_Items[v45] = 0LL;
            Instance = sub_1C1AB78((char *)m_Items + v109);
          }
        }
      }
      else if ( !v43 )
      {
        goto LABEL_142;
      }
      if ( v45 >= v43[6] )
        goto LABEL_143;
      v86 = m_Items[v45];
      v70 = (unsigned int *)*p_memberList;
      if ( !v86 )
      {
        v88 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
        v72 = v88;
        v89 = v45;
        v90 = 0;
        goto LABEL_128;
      }
      EquipList = UserEventDeckEntity__GetEquipList(deck, v45, 0LL);
      v72 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32977504(
        v72,
        v45,
        v86,
        EquipList,
        setupInfo,
        questRestrictionInfo,
        0LL,
        initPos,
        0LL,
        0,
        0LL);
      if ( !v70 )
        goto LABEL_142;
    }
    else
    {
      v75 = followera;
      v70 = (unsigned int *)*p_memberList;
      if ( !followera )
      {
        v88 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
        v72 = v88;
        if ( v97 )
        {
          PartyOrganizationListViewItem___ctor_32949872(
            v88,
            v45,
            v97,
            followerClassId,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v105,
            initPos,
            0LL);
        }
        else
        {
          v90 = 1;
          v89 = v45;
LABEL_128:
          PartyOrganizationListViewItem___ctor_32986860(v88, v89, v90, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        }
        v34 = v106;
        if ( !v70 )
          goto LABEL_142;
        goto LABEL_130;
      }
      v76 = followerClassIda;
      v72 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32949872(
        v72,
        v45,
        v75,
        v76,
        setupInfo,
        questRestrictionInfo,
        0LL,
        0,
        v105,
        initPos,
        0LL);
      if ( !v70 )
        goto LABEL_142;
    }
    v34 = v106;
LABEL_130:
    v73 = v109;
    if ( v72 )
    {
      Instance = sub_1C1AD10(v72, *(_QWORD *)(*(_QWORD *)v70 + 64LL));
      if ( !Instance )
        goto LABEL_144;
    }
    v74 = v70[6];
LABEL_133:
    if ( v45 >= v74 )
      goto LABEL_143;
    *(_QWORD *)&v70[2 * v45 + 8] = v72;
    Instance = sub_1C1AB78((char *)v70 + v73 + 32);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_142;
    if ( v45 >= memberList->max_length )
      goto LABEL_143;
    Instance = (__int64)memberList->m_Items[v45];
    if ( !Instance )
      goto LABEL_142;
    cost = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                      + cost;
LABEL_138:
    ++v45;
    v46 = v73 + 8;
  }
  PartyListViewItem__CheckRestriction(this, v30);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v93) )
    *isBaseModify = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_32843232(
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
  BalanceConfig_c *v23; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x22
  Il2CppObject *Instance; // x0
  __int64 v26; // x1
  int32_t klass; // w23
  int32_t klass_high; // w25
  struct PartyOrganizationListViewItem_array *v29; // x26
  PartyOrganizationListViewItem_o *v30; // x0
  PartyOrganizationListViewItem_o *v31; // x27
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w23
  const MethodInfo *v34; // x1
  int32_t i; // w23
  BalanceConfig_c *v36; // x0
  struct PartyOrganizationListViewItem_array *v37; // x25
  PartyOrganizationListViewItem_o *v38; // x24
  Il2CppClass **v39; // x0
  struct PartyOrganizationListViewItem_array *v40; // x8
  int32_t v41; // w24
  __int64 v42; // x0

  if ( (byte_4BC364F & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind);
    sub_1C1ABD4(&PartyOrganizationListViewItem___TypeInfo, v19);
    sub_1C1ABD4(&PartyOrganizationListViewItem_TypeInfo, v20);
    sub_1C1ABD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v21);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v22);
    byte_4BC364F = 1;
  }
  ListViewItem___ctor_41943804((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C1AB78(&this->fields.setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  sub_1C1AB78(&this->fields.questRestrictionInfo);
  this->fields.isDeckNameDefault = 0;
  this->fields.deckName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C1AB78(&this->fields.deckName);
  this->fields.userEquipId = userEquipId;
  this->fields.id = 0LL;
  v23 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v23 = BalanceConfig_TypeInfo;
  }
  this->fields.memberList = (struct PartyOrganizationListViewItem_array *)sub_1C1AC7C(
                                                                            PartyOrganizationListViewItem___TypeInfo,
                                                                            (unsigned int)v23->static_fields->DeckMemberMax);
  p_memberList = &this->fields.memberList;
  sub_1C1AB78(&this->fields.memberList);
  this->fields.cost = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  klass = followerClassId;
  if ( Instance[1].monitor )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    follower = (FollowerInfo_o *)Instance[1].monitor;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    klass = (int32_t)Instance[2].klass;
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    klass_high = HIDWORD(Instance[2].klass);
  }
  else
  {
    klass_high = followerDeckId;
  }
  v29 = *p_memberList;
  v30 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
  v31 = v30;
  if ( follower )
  {
    PartyOrganizationListViewItem___ctor_32949872(
      v30,
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
    if ( !v29 )
      goto LABEL_35;
  }
  else
  {
    PartyOrganizationListViewItem___ctor_32986860(v30, 0, 1, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v29 )
      goto LABEL_35;
  }
  if ( v31 )
  {
    Instance = (Il2CppObject *)sub_1C1AD10(v31, v29->obj.klass->_1.element_class);
    if ( !Instance )
    {
LABEL_37:
      v42 = sub_1C1AE54();
      sub_1C1ACFC(v42, 0LL);
    }
  }
  if ( !v29->max_length )
    goto LABEL_36;
  v29->m_Items[0] = v31;
  Instance = (Il2CppObject *)sub_1C1AB78(v29->m_Items);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_35;
  if ( !memberList->max_length )
LABEL_36:
    sub_1C1AE38(Instance, v26);
  Instance = (Il2CppObject *)memberList->m_Items[0];
  if ( !Instance )
LABEL_35:
    sub_1C1AE30(Instance, v26);
  cost = this->fields.cost;
  this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                    + cost;
  for ( i = 1; ; ++i )
  {
    v36 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v36 = BalanceConfig_TypeInfo;
    }
    if ( i >= v36->static_fields->DeckMemberMax )
      break;
    v37 = *p_memberList;
    v38 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_32986860(v38, i, 0, setupInfo, questRestrictionInfo, 1, 0, 0LL);
    if ( !v37 )
      goto LABEL_35;
    if ( v38 )
    {
      Instance = (Il2CppObject *)sub_1C1AD10(v38, v37->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_37;
    }
    if ( i >= v37->max_length )
      goto LABEL_36;
    v39 = &v37->obj.klass + i;
    v39[4] = (Il2CppClass *)v38;
    Instance = (Il2CppObject *)sub_1C1AB78(v39 + 4);
    v40 = this->fields.memberList;
    if ( !v40 )
      goto LABEL_35;
    if ( i >= v40->max_length )
      goto LABEL_36;
    Instance = (Il2CppObject *)v40->m_Items[i];
    if ( !Instance )
      goto LABEL_35;
    v41 = this->fields.cost;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                      + v41;
  }
  PartyListViewItem__CheckRestriction(this, v34);
}


void __fastcall PartyListViewItem___ctor_32844124(
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
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  __int64 IsNeedDeckPosReset; // x0
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  struct DeckServant_o *deckInfo; // x8
  int32_t servantNumMax; // w26
  const MethodInfo *v31; // x3
  PartyListViewItem_o *v32; // x28
  int v33; // w25
  const MethodInfo *v34; // x2
  int32_t v35; // w23
  int32_t FollowerIndex; // w24
  BalanceConfig_c *v37; // x0
  __int64 v38; // x9
  __int64 v39; // x27
  __int64 v40; // x21
  unsigned __int64 v41; // x8
  __int64 v42; // x23
  signed __int64 v43; // x29
  BalanceConfig_c *v44; // x0
  struct PartyOrganizationListViewItem_array **p_memberList; // x28
  const MethodInfo *v46; // x2
  __int64 v47; // x19
  struct DeckServant_o *v48; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v50; // x8
  int32_t *p_initPos; // x8
  int32_t initPos; // w24
  const MethodInfo *v53; // x6
  int v54; // w25
  _BOOL4 v55; // w26
  struct DeckServant_o *v56; // x8
  struct DeckServantData_array *v57; // x8
  DeckServantData_o *v58; // x8
  int64_t npcFollowerSvtId; // x4
  FollowerInfo_o *v60; // x23
  int32_t v61; // w26
  bool IsNpc; // w0
  struct PartyOrganizationListViewItem_array *v63; // x21
  int32_t v64; // w29
  PartyOrganizationListViewItem_o *v65; // x25
  Il2CppClass **v66; // x8
  FollowerInfo_o *v67; // x23
  struct PartyOrganizationListViewItem_array *v68; // x29
  int32_t v69; // w26
  __int64 v70; // x29
  __int64 v71; // x25
  __int64 v72; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v73; // x25
  __int64 v74; // t1
  __int64 v75; // x23
  __int64 v76; // x26
  int32_t v77; // w23
  int32_t v78; // w26
  int32_t DispLimitCount; // w0
  UserServantEntity_o *v80; // x23
  struct PartyOrganizationListViewItem_array *v81; // x21
  System_Int64_array *EquipList; // x26
  PartyOrganizationListViewItem_o *v83; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w21
  const MethodInfo *v86; // x1
  __int64 v87; // x0
  FollowerInfo_o *followerInfo; // [xsp+18h] [xbp-C8h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+20h] [xbp-C0h]
  int v91; // [xsp+30h] [xbp-B0h]
  int v92; // [xsp+38h] [xbp-A8h]
  PartyListViewItem_o *v93; // [xsp+40h] [xbp-A0h]
  int32_t v94; // [xsp+4Ch] [xbp-94h]
  int32_t v95; // [xsp+58h] [xbp-88h]
  _BOOL4 v96; // [xsp+5Ch] [xbp-84h]
  UserEventDeckEntity_o *v97; // [xsp+68h] [xbp-78h]
  int32_t followerClassIda; // [xsp+74h] [xbp-6Ch] BYREF
  FollowerInfo_o *followera; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16

  if ( (byte_4BC3650 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, isBaseModify);
    sub_1C1ABD4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v19);
    sub_1C1ABD4(&DataManager_TypeInfo, v20);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1C1ABD4(&PartyOrganizationListViewItem___TypeInfo, v22);
    sub_1C1ABD4(&PartyOrganizationListViewItem_TypeInfo, v23);
    sub_1C1ABD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v24);
    byte_4BC3650 = 1;
  }
  followera = 0LL;
  followerClassIda = 0;
  ListViewItem___ctor_41943804((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C1AB78(&this->fields.setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  IsNeedDeckPosReset = sub_1C1AB78(&this->fields.questRestrictionInfo);
  if ( !deck )
    goto LABEL_121;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_121;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  IsNeedDeckPosReset = PartyListViewItem__IsNeedDeckPosReset(this, deck, v28);
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
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_121;
  if ( *(int *)(IsNeedDeckPosReset + 48) < 1 )
  {
    v32 = 0LL;
    v33 = 0;
    v96 = 1;
  }
  else
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    v32 = *(PartyListViewItem_o **)(IsNeedDeckPosReset + 72);
    v33 = 0;
    v96 = v32 == 0LL;
    if ( followerInfo && v32 )
    {
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      v33 = *(_DWORD *)(IsNeedDeckPosReset + 48);
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v32, v33 - 1, v34);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      v35 = *(_DWORD *)(IsNeedDeckPosReset + 348);
      IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      PartyOrganizationUtility__SetNpcFollowerInfo(
        (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
        v35,
        followerInfo,
        0LL);
      v96 = 0;
    }
  }
  FollowerIndex = PartyListViewItem__GetFollowerIndex(this, deck, 0LL, v31);
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
  v37 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v37 = BalanceConfig_TypeInfo;
  }
  FollowerIndex = servantNumMax;
  if ( servantNumMax > v37->static_fields->DeckMainMemberMax )
  {
    FollowerIndex = v37->static_fields->DeckMainMemberMax;
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      FollowerIndex = BalanceConfig_TypeInfo->static_fields->DeckMainMemberMax;
    }
  }
LABEL_29:
  IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !IsNeedDeckPosReset )
    goto LABEL_121;
  if ( *(_QWORD *)(IsNeedDeckPosReset + 24) )
  {
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    followerInfo = *(FollowerInfo_o **)(IsNeedDeckPosReset + 24);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    v94 = *(_DWORD *)(IsNeedDeckPosReset + 32);
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    v95 = *(_DWORD *)(IsNeedDeckPosReset + 36);
  }
  else
  {
    v95 = followerDeckId;
    v94 = followerClassId;
  }
  v93 = v32;
  v97 = deck;
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
        sub_1C1AE38(IsNeedDeckPosReset, v27);
      v43 = v41 + 1;
      if ( servantNumMax < (int)v41 + 1 && *(_QWORD *)(v42 + 8 * v41) )
      {
        *isBaseModify = 1;
        if ( v41 >= *(unsigned int *)(v39 + 24) )
          goto LABEL_125;
        *(_QWORD *)(v42 + 8 * v41) = 0LL;
        IsNeedDeckPosReset = sub_1C1AB78(v42 + v40);
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
  this->fields.memberList = (struct PartyOrganizationListViewItem_array *)sub_1C1AC7C(
                                                                            PartyOrganizationListViewItem___TypeInfo,
                                                                            (unsigned int)v44->static_fields->DeckMemberMax);
  p_memberList = &this->fields.memberList;
  sub_1C1AB78(&this->fields.memberList);
  this->fields.cost = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNeedDeckPosReset = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo || !IsNeedDeckPosReset )
LABEL_121:
    sub_1C1AE30(IsNeedDeckPosReset, v27);
  npcFollowerInfoList = NpcFollowerMaster__GetQuestFollowerList(
                          (NpcFollowerMaster_o *)IsNeedDeckPosReset,
                          (*p_questRestrictionInfo)->fields.questId,
                          (*p_questRestrictionInfo)->fields.questPhase,
                          0LL);
  v47 = 0LL;
  v91 = v33 - 1;
  v92 = FollowerIndex - 1;
  while ( 1 )
  {
    IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsNeedDeckPosReset = (__int64)BalanceConfig_TypeInfo;
    }
    if ( (int)v47 >= *(_DWORD *)(*(_QWORD *)(IsNeedDeckPosReset + 184) + 156LL) )
      break;
    if ( v96 )
    {
      v48 = v97->fields.deckInfo;
      if ( !v48 )
        goto LABEL_121;
      svts = v48->fields.svts;
      if ( !svts )
        goto LABEL_121;
      if ( (unsigned int)v47 >= svts->max_length )
        goto LABEL_125;
      v50 = svts->m_Items[(int)v47];
      if ( !v50 )
        goto LABEL_121;
      p_initPos = &v50->fields.initPos;
    }
    else
    {
      IsNeedDeckPosReset = (__int64)PartyListViewItem__GetMember(v93, v47, v46);
      if ( !IsNeedDeckPosReset )
        goto LABEL_121;
      p_initPos = (int32_t *)(IsNeedDeckPosReset + 348);
    }
    initPos = *p_initPos;
    followera = 0LL;
    followerClassIda = 0;
    IsNeedDeckPosReset = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41685668(questRestrictionInfo, initPos, 0LL);
    v54 = IsNeedDeckPosReset;
    v55 = 0;
    if ( (IsNeedDeckPosReset & 1) != 0 )
    {
      v56 = v97->fields.deckInfo;
      if ( !v56 )
        goto LABEL_121;
      v57 = v56->fields.svts;
      if ( !v57 )
        goto LABEL_121;
      if ( (unsigned int)v47 >= v57->max_length )
        goto LABEL_125;
      v58 = v57->m_Items[(int)v47];
      if ( !v58 )
        goto LABEL_121;
      v55 = 0;
      if ( v91 != (_DWORD)v47 )
      {
        npcFollowerSvtId = v58->fields.npcFollowerSvtId;
        if ( npcFollowerSvtId >= 1 )
          v55 = PartyListViewItem__SetNpcFollowerInfo(
                  this,
                  &followera,
                  &followerClassIda,
                  npcFollowerInfoList,
                  npcFollowerSvtId,
                  initPos,
                  v53);
      }
    }
    IsNeedDeckPosReset = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    IsNeedDeckPosReset = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                                    (PartyOrganizationUtility_o *)IsNeedDeckPosReset,
                                    initPos,
                                    0LL);
    if ( !IsNeedDeckPosReset || ((v54 ^ 1) & 1) != 0 )
    {
      if ( v92 == (_DWORD)v47 || v55 )
      {
        v67 = followera;
        v68 = *p_memberList;
        if ( followera )
        {
          v69 = followerClassIda;
          v65 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32949872(
            v65,
            v47,
            v67,
            v69,
            setupInfo,
            questRestrictionInfo,
            friendPointCampaignEntityList,
            0,
            v95,
            initPos,
            0LL);
LABEL_106:
          if ( !v68 )
            goto LABEL_121;
        }
        else
        {
          v83 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
          v65 = v83;
          if ( followerInfo )
          {
            PartyOrganizationListViewItem___ctor_32949872(
              v83,
              v47,
              followerInfo,
              v94,
              setupInfo,
              questRestrictionInfo,
              friendPointCampaignEntityList,
              0,
              v95,
              initPos,
              0LL);
            goto LABEL_106;
          }
          PartyOrganizationListViewItem___ctor_32986860(v83, v47, 1, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
          if ( !v68 )
            goto LABEL_121;
        }
        if ( v65 )
        {
          IsNeedDeckPosReset = sub_1C1AD10(v65, v68->obj.klass->_1.element_class);
          if ( !IsNeedDeckPosReset )
            goto LABEL_126;
        }
        if ( (unsigned int)v47 >= v68->max_length )
          goto LABEL_125;
        v66 = &v68->obj.klass + (int)v47;
        goto LABEL_116;
      }
      v70 = v47;
      if ( (v54 & 1) != 0 )
      {
        if ( (unsigned int)v47 >= *(_DWORD *)(v39 + 24) )
          goto LABEL_125;
        v71 = v39 + 8LL * (int)v47;
        v74 = *(_QWORD *)(v71 + 32);
        v73 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v71 + 32);
        v72 = v74;
        v70 = (int)v47;
        if ( v74 )
        {
          v76 = *(_QWORD *)(v72 + 80);
          v75 = *(_QWORD *)(v72 + 88);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v100.fields.currentCryptoKey = v76;
          *(_QWORD *)&v100.fields.fakeValue = v75;
          IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v100, 0LL);
          if ( (unsigned int)v47 >= *(_DWORD *)(v39 + 24) )
            goto LABEL_125;
          if ( !*v73 )
            goto LABEL_121;
          v77 = IsNeedDeckPosReset;
          IsNeedDeckPosReset = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128((*v73)[6], 0LL);
          if ( (unsigned int)v47 >= *(_DWORD *)(v39 + 24) )
            goto LABEL_125;
          v78 = IsNeedDeckPosReset;
          IsNeedDeckPosReset = (__int64)*v73;
          if ( !*v73 )
            goto LABEL_121;
          DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)IsNeedDeckPosReset, 0, 0LL);
          IsNeedDeckPosReset = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                 questRestrictionInfo,
                                 v77,
                                 v78,
                                 DispLimitCount,
                                 initPos,
                                 0,
                                 0LL);
          if ( (IsNeedDeckPosReset & 1) != 0 )
          {
            if ( (unsigned int)v47 >= *(_DWORD *)(v39 + 24) )
              goto LABEL_125;
            *v73 = 0LL;
            IsNeedDeckPosReset = sub_1C1AB78(v73);
          }
        }
      }
      if ( (unsigned int)v47 >= *(_DWORD *)(v39 + 24) )
        goto LABEL_125;
      v80 = *(UserServantEntity_o **)(v39 + 8 * v70 + 32);
      v81 = *p_memberList;
      if ( v80 )
      {
        EquipList = UserEventDeckEntity__GetEquipList(v97, v47, 0LL);
        v65 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32977504(
          v65,
          v47,
          v80,
          EquipList,
          setupInfo,
          questRestrictionInfo,
          0LL,
          initPos,
          0LL,
          0,
          0LL);
        if ( !v81 )
          goto LABEL_121;
      }
      else
      {
        v65 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32986860(v65, v47, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
        if ( !v81 )
          goto LABEL_121;
      }
      if ( v65 )
      {
        IsNeedDeckPosReset = sub_1C1AD10(v65, v81->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
        {
LABEL_126:
          v87 = sub_1C1AE54();
          sub_1C1ACFC(v87, 0LL);
        }
      }
      if ( (unsigned int)v47 >= v81->max_length )
        goto LABEL_125;
      v66 = &v81->obj.klass + v70;
    }
    else
    {
      v60 = (FollowerInfo_o *)IsNeedDeckPosReset;
      if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)IsNeedDeckPosReset, 0LL) )
        v61 = 0;
      else
        v61 = v94;
      IsNpc = FollowerInfo__get_IsNpc(v60, 0LL);
      v63 = *p_memberList;
      if ( IsNpc )
        v64 = 0;
      else
        v64 = v95;
      v65 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32949872(
        v65,
        v47,
        v60,
        v61,
        setupInfo,
        questRestrictionInfo,
        friendPointCampaignEntityList,
        0,
        v64,
        initPos,
        0LL);
      if ( !v63 )
        goto LABEL_121;
      if ( v65 )
      {
        IsNeedDeckPosReset = sub_1C1AD10(v65, v63->obj.klass->_1.element_class);
        if ( !IsNeedDeckPosReset )
          goto LABEL_126;
      }
      if ( (unsigned int)v47 >= v63->max_length )
        goto LABEL_125;
      v66 = &v63->obj.klass + (int)v47;
    }
LABEL_116:
    v66[4] = (Il2CppClass *)v65;
    IsNeedDeckPosReset = sub_1C1AB78(v66 + 4);
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_121;
    if ( (unsigned int)v47 >= memberList->max_length )
      goto LABEL_125;
    IsNeedDeckPosReset = (__int64)memberList->m_Items[(int)v47];
    if ( !IsNeedDeckPosReset )
      goto LABEL_121;
    cost = this->fields.cost;
    ++v47;
    this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                          (PartyOrganizationListViewItem_o *)IsNeedDeckPosReset,
                          0LL)
                      + cost;
  }
  PartyListViewItem__CheckRestriction(this, v27);
  if ( !PartyListViewItem__GetStartDeckCondition(this, v86) )
    *isBaseModify = 1;
}


void __fastcall PartyListViewItem___ctor_32846500(
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
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x19
  __int64 Instance; // x0
  FollowerInfo_o *v55; // x1
  const MethodInfo *v56; // x2
  UserEventDeckEntity_o *v57; // x21
  struct DeckServant_o *deckInfo; // x8
  System_Int64_array *NpcServantFollowerIds; // x29
  FollowerInfo_o *v60; // x24
  PartyListViewItem_o *v61; // x22
  int v62; // w25
  const MethodInfo *v63; // x2
  int32_t v64; // w21
  int32_t DeckMemberMax; // w25
  FollowerInfo_array *QuestFollowerList; // x28
  const MethodInfo *v67; // x3
  int max_length; // w8
  unsigned int v69; // w19
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x0
  int32_t v74; // w22
  struct QuestRestrictionInfo_SlotInfo_array *slotInfos; // x8
  int v76; // w9
  int v77; // w10
  QuestRestrictionInfo_SlotInfo_o *v78; // x11
  struct DeckServant_o *v79; // x8
  __int64 v80; // x29
  int v81; // w24
  int v82; // w28
  struct DeckServantData_array *svts; // x8
  Il2CppObject *v84; // x19
  struct DeckServant_o *v85; // x8
  struct DeckServantData_array *v86; // x8
  DeckServantData_o *v87; // x8
  int64_t userSvtId; // x21
  System_Func_object__bool__o *v89; // x21
  BalanceConfig_c *v90; // x0
  _BOOL8 v91; // x0
  __int64 v92; // x1
  const MethodInfo *v93; // x2
  Il2CppClass *klass; // x21
  int v95; // w8
  Il2CppClass **v96; // x8
  __int64 NpcDeployIdx; // x0
  __int64 v98; // x1
  BalanceConfig_c *v99; // x0
  const MethodInfo *v100; // x2
  const MethodInfo *v101; // x3
  int32_t i; // w19
  struct DeckServant_o *v103; // x8
  struct DeckServantData_array *v104; // x8
  DeckServantData_o *v105; // x8
  int32_t UserServantDeployIndex; // w0
  il2cpp_array_size_t v107; // w21
  __int64 v108; // x22
  Il2CppClass **v109; // x0
  BalanceConfig_c *v110; // x0
  unsigned __int64 v111; // x24
  EventUpValSetupInfo_o *v112; // x23
  __int64 j; // x28
  BalanceConfig_c *v114; // x0
  __int64 v115; // x25
  const MethodInfo *v116; // x2
  struct DeckServant_o *v117; // x8
  struct DeckServantData_array *v118; // x8
  DeckServantData_o *v119; // x8
  int32_t *p_initPos; // x8
  int32_t v121; // w19
  unsigned int *v122; // x21
  PartyOrganizationListViewItem_o *v123; // x25
  const MethodInfo *v124; // x6
  bool v125; // w21
  int64_t v126; // x4
  bool v127; // w22
  FollowerInfo_o *v128; // x29
  int32_t v129; // w22
  bool IsNpc; // w0
  unsigned int *v131; // x23
  int32_t v132; // w21
  PartyOrganizationListViewItem_o *v133; // x25
  unsigned int *v134; // x19
  unsigned __int64 v135; // x8
  FollowerInfo_o *v136; // x22
  unsigned int *v137; // x21
  EventUpValSetupInfo_o *v138; // x23
  int32_t v139; // w26
  PartyOrganizationListViewItem_o *v140; // x0
  int32_t v141; // w3
  PartyOrganizationListViewItem_o *v142; // x0
  System_Func_object__bool__o *v143; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v144; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v145; // x22
  FollowerInfo_o *v146; // x29
  unsigned int *v147; // x25
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x8
  ServantLeaderInfo_o *v149; // x8
  int32_t classId; // w22
  PartyOrganizationListViewItem_o *v151; // x21
  System_Collections_Generic_List_object__o *v152; // x21
  int32_t v153; // w25
  PartyOrganizationListViewItem_o *v154; // x21
  int32_t v155; // w25
  UserServantEntity_o *v156; // x8
  __int64 v157; // x22
  __int64 v158; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v159; // x8
  int32_t v160; // w22
  int32_t v161; // w25
  int32_t DispLimitCount; // w0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  unsigned int *v165; // x21
  __int64 v166; // x8
  FollowerInfo_o *v167; // x22
  __int64 v168; // x8
  PartyListViewItem_o *v169; // x21
  UserServantEntity_o *v170; // x22
  unsigned int *v171; // x27
  __int64 v172; // x23
  int v173; // w24
  unsigned __int64 v174; // x29
  UserServantEntity_o **v175; // x26
  __int64 v176; // x19
  signed __int64 v177; // x21
  System_Func_object__bool__o *v178; // x22
  unsigned __int64 v179; // x8
  EventUpValSetupInfo_o *v180; // x26
  unsigned __int64 v181; // x21
  signed __int64 v182; // x28
  __int64 v183; // x23
  unsigned __int64 k; // x24
  BalanceConfig_c *v185; // x0
  __int64 v186; // x29
  const MethodInfo *v187; // x2
  struct DeckServant_o *v188; // x8
  struct DeckServantData_array *v189; // x8
  __int64 v190; // x8
  int32_t *v191; // x8
  int32_t v192; // w19
  unsigned int *v193; // x21
  PartyOrganizationListViewItem_o *v194; // x25
  const MethodInfo *v195; // x6
  int v196; // w25
  struct DeckServant_o *v197; // x8
  struct DeckServantData_array *v198; // x8
  __int64 v199; // x8
  int64_t v200; // x4
  int v201; // w8
  FollowerInfo_o *NpcFollowerInfo; // x0
  FollowerInfo_o *v203; // x22
  int32_t v204; // w29
  bool v205; // w0
  unsigned int *v206; // x21
  int32_t v207; // w26
  PartyOrganizationListViewItem_o *v208; // x25
  struct PartyOrganizationListViewItem_array *v209; // x8
  struct DeckServant_o *v210; // x9
  struct DeckServantData_array *v211; // x9
  __int64 v212; // x9
  __int64 v213; // x8
  FollowerInfo_o *v214; // x22
  unsigned int *v215; // x29
  int32_t v216; // w29
  PartyOrganizationListViewItem_o *v217; // x0
  int32_t v218; // w3
  PartyOrganizationListViewItem_o *v219; // x25
  PartyOrganizationListViewItem_o *v220; // x0
  System_Func_object__bool__o *v221; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v222; // x29
  System_Collections_Generic_IEnumerable_TSource__o *v223; // x22
  UserServantEntity_array *v224; // x21
  __int64 v225; // x8
  __int64 v226; // x22
  __int64 v227; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v228; // x8
  int32_t v229; // w22
  int32_t v230; // w25
  int32_t v231; // w0
  struct PartyOrganizationListViewItem_array *v232; // x8
  struct DeckServant_o *v233; // x9
  struct DeckServantData_array *v234; // x9
  __int64 v235; // x9
  __int64 v236; // x8
  FollowerInfo_o *v237; // x25
  unsigned int *v238; // x26
  __int64 v239; // x8
  __int64 v240; // x8
  int32_t v241; // w22
  PartyOrganizationListViewItem_o *v242; // x29
  UserServantEntity_o *v243; // x22
  unsigned int *v244; // x26
  System_Int64_array *v245; // x29
  PartyOrganizationListViewItem_o *v246; // x25
  PartyOrganizationListViewItem_o *v247; // x22
  struct PartyOrganizationListViewItem_array *v248; // x8
  int32_t v249; // w19
  const MethodInfo *v250; // x1
  __int64 v251; // x0
  int32_t followerDeckIda; // [xsp+0h] [xbp-190h]
  int32_t initPos; // [xsp+8h] [xbp-188h]
  unsigned int *v254; // [xsp+28h] [xbp-168h]
  UserServantEntity_o **isFixNpc; // [xsp+30h] [xbp-160h]
  char isFixNpca; // [xsp+30h] [xbp-160h]
  int v257; // [xsp+3Ch] [xbp-154h]
  _BOOL4 v258; // [xsp+3Ch] [xbp-154h]
  int32_t v259; // [xsp+40h] [xbp-150h]
  int32_t v260; // [xsp+40h] [xbp-150h]
  System_Int64_array *EquipList; // [xsp+40h] [xbp-150h]
  bool v262; // [xsp+40h] [xbp-150h]
  int v264; // [xsp+54h] [xbp-13Ch]
  int32_t v265; // [xsp+60h] [xbp-130h]
  int32_t v266; // [xsp+64h] [xbp-12Ch]
  int v267; // [xsp+68h] [xbp-128h]
  int32_t FollowerIndex; // [xsp+74h] [xbp-11Ch]
  FollowerInfo_o *v269; // [xsp+78h] [xbp-118h]
  EventUpValSetupInfo_o *setupInfoa; // [xsp+80h] [xbp-110h]
  EventUpValSetupInfo_o *setupInfob; // [xsp+80h] [xbp-110h]
  PartyListViewItem_o *v272; // [xsp+88h] [xbp-108h]
  System_Int64_array *v273; // [xsp+90h] [xbp-100h]
  System_Int64_array *v274; // [xsp+90h] [xbp-100h]
  int v275; // [xsp+90h] [xbp-100h]
  FollowerInfo_array *npcFollowerInfoList; // [xsp+98h] [xbp-F8h]
  QuestRestrictionInfo_o *v277; // [xsp+A0h] [xbp-F0h]
  QuestRestrictionInfo_o *m_Items; // [xsp+A0h] [xbp-F0h]
  PartyListViewItem_o *v279; // [xsp+A8h] [xbp-E8h]
  System_Collections_Generic_List_object__o *v280; // [xsp+B0h] [xbp-E0h]
  UserServantEntity_array *userServantList; // [xsp+B8h] [xbp-D8h]
  _BOOL4 v282; // [xsp+C4h] [xbp-CCh]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+C8h] [xbp-C8h]
  System_Collections_Generic_List_Enumerator_object__o v285; // [xsp+D8h] [xbp-B8h] BYREF
  int32_t v286; // [xsp+F4h] [xbp-9Ch] BYREF
  FollowerInfo_o *v287; // [xsp+F8h] [xbp-98h] BYREF
  int32_t followerClassIda; // [xsp+104h] [xbp-8Ch] BYREF
  FollowerInfo_o *followera; // [xsp+108h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v290; // [xsp+110h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v291; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v292; // 0:x0.16

  if ( (byte_4BC3651 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, isBaseModify);
    sub_1C1ABD4(&Method_BasicHelper_Any_FollowerInfo___, v20);
    sub_1C1ABD4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v21);
    sub_1C1ABD4(&DataManager_TypeInfo, v22);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Any_FollowerInfo___, v23);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Count_FollowerInfo___, v24);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ElementAt_FollowerInfo___, v25);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_FollowerInfo___, v26);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_FollowerInfo___, v27);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__, v28);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__, v29);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_FollowerInfo__get_Current__, v30);
    sub_1C1ABD4(&FollowerInfo___TypeInfo, v31);
    sub_1C1ABD4(&System_Func_FollowerInfo__bool__TypeInfo, v32);
    sub_1C1ABD4(&long___TypeInfo, v33);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_FollowerInfo__Add__, v34);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__, v35);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_FollowerInfo___ctor__, v36);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_FollowerInfo__get_Count__, v37);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_FollowerInfo__get_Item__, v38);
    sub_1C1ABD4(&System_Collections_Generic_List_FollowerInfo__TypeInfo, v39);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40);
    sub_1C1ABD4(&PartyOrganizationListViewItem___TypeInfo, v41);
    sub_1C1ABD4(&PartyOrganizationListViewItem_TypeInfo, v42);
    sub_1C1ABD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v43);
    sub_1C1ABD4(&Method_PartyListViewItem___c__DisplayClass27_0___ctor_b__0__, v44);
    sub_1C1ABD4(&PartyListViewItem___c__DisplayClass27_0_TypeInfo, v45);
    sub_1C1ABD4(&Method_PartyListViewItem___c__DisplayClass27_1___ctor_b__1__, v46);
    sub_1C1ABD4(&PartyListViewItem___c__DisplayClass27_1_TypeInfo, v47);
    sub_1C1ABD4(&Method_PartyListViewItem___c__DisplayClass27_2___ctor_b__2__, v48);
    sub_1C1ABD4(&PartyListViewItem___c__DisplayClass27_2_TypeInfo, v49);
    sub_1C1ABD4(&Method_PartyListViewItem___c__DisplayClass27_3___ctor_b__3__, v50);
    sub_1C1ABD4(&PartyListViewItem___c__DisplayClass27_3_TypeInfo, v51);
    sub_1C1ABD4(&UserServantEntity___TypeInfo, v52);
    byte_4BC3651 = 1;
  }
  memset(&v290, 0, sizeof(v290));
  followera = 0LL;
  followerClassIda = 0;
  v287 = 0LL;
  v286 = 0;
  ListViewItem___ctor_41943804((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C1AB78(&this->fields.setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  Instance = sub_1C1AB78(&this->fields.questRestrictionInfo);
  v57 = deck;
  if ( !deck )
    goto LABEL_75;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_75;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  if ( PartyListViewItem__IsNeedDeckPosReset(this, deck, v56) )
  {
    Instance = (__int64)deck->fields.deckInfo;
    if ( !Instance )
      goto LABEL_75;
    DeckServant__ResetInitPos((DeckServant_o *)Instance, 0LL);
    v57 = deck;
  }
  NpcServantFollowerIds = UserEventDeckEntity__GetNpcServantFollowerIds(v57, 0LL);
  userServantList = UserEventDeckEntity__GetUserServantList(v57, 0, 0, 0LL);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  v60 = follower;
  if ( *(int *)(Instance + 48) < 1 )
  {
    v61 = 0LL;
    v62 = 0;
    v282 = 1;
  }
  else
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    v61 = *(PartyListViewItem_o **)(Instance + 72);
    v62 = 0;
    v282 = v61 == 0LL;
    if ( follower && v61 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      v62 = *(_DWORD *)(Instance + 48);
      Instance = (__int64)PartyListViewItem__GetMember(v61, v62 - 1, v63);
      if ( !Instance )
        goto LABEL_75;
      v64 = *(_DWORD *)(Instance + 348);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v64, follower, 0LL);
      v282 = 0;
    }
  }
  Instance = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  v264 = v62;
  if ( !questRestrictionInfo )
    goto LABEL_75;
  DeckMemberMax = BalanceConfig_TypeInfo->static_fields->DeckMemberMax;
  if ( QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0LL) )
    DeckMemberMax = questRestrictionInfo->fields.servantNumMax;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !*p_questRestrictionInfo
    || !Instance
    || (QuestFollowerList = NpcFollowerMaster__GetQuestFollowerList(
                              (NpcFollowerMaster_o *)Instance,
                              (*p_questRestrictionInfo)->fields.questId,
                              (*p_questRestrictionInfo)->fields.questPhase,
                              0LL),
        v280 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_FollowerInfo__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v280,
          (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_FollowerInfo___ctor__),
        !QuestFollowerList) )
  {
LABEL_75:
    sub_1C1AE30(Instance, v55);
  }
  max_length = QuestFollowerList->max_length;
  if ( max_length >= 1 )
  {
    v69 = 0;
    while ( v69 < max_length )
    {
      v55 = QuestFollowerList->m_Items[v69];
      if ( !v55 )
        goto LABEL_75;
      if ( !v55->fields.isMySvtOrNpc
        && (questRestrictionInfo->fields.isNotTransitionSupportList
         || !questRestrictionInfo->fields.isNpcMultipleBattle
         || v55->fields.isFixedNpc) )
      {
        if ( !v280 )
          goto LABEL_75;
        items = v280->fields._items;
        v71 = Method_System_Collections_Generic_List_FollowerInfo__Add__;
        ++v280->fields._version;
        if ( !items )
          goto LABEL_75;
        size = v280->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v280,
            (Il2CppObject *)v55,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
        }
        else
        {
          v73 = &items->obj.klass + size;
          v280->fields._size = size + 1;
          v73[4] = (Il2CppClass *)v55;
          Instance = sub_1C1AB78(v73 + 4);
        }
      }
      max_length = QuestFollowerList->max_length;
      if ( (int)++v69 >= max_length )
        goto LABEL_44;
    }
LABEL_411:
    sub_1C1AE38(Instance, v55);
  }
LABEL_44:
  FollowerIndex = PartyListViewItem__GetFollowerIndex(
                    this,
                    deck,
                    (System_Collections_Generic_List_FollowerInfo__o *)v280,
                    v67);
  setupInfoa = setupInfo;
  v272 = this;
  v277 = questRestrictionInfo;
  v279 = v61;
  npcFollowerInfoList = QuestFollowerList;
  if ( isNew || !questRestrictionInfo->fields.isNpcEditablePos )
    goto LABEL_117;
  Instance = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !v280 )
      goto LABEL_75;
    v74 = v280->fields._size;
  }
  else
  {
    slotInfos = questRestrictionInfo->fields.slotInfos;
    if ( !slotInfos )
      goto LABEL_75;
    v76 = slotInfos->max_length;
    if ( v76 >= 1 )
    {
      v74 = 0;
      v77 = 0;
      while ( v76 != v77 )
      {
        v78 = slotInfos->m_Items[v77];
        if ( !v78 )
          goto LABEL_75;
        if ( v78->fields.slotType == 1 )
          v74 += v78->fields.isMoved;
        if ( v76 == ++v77 )
          goto LABEL_59;
      }
      goto LABEL_411;
    }
    v74 = 0;
  }
LABEL_59:
  v273 = NpcServantFollowerIds;
  v79 = deck->fields.deckInfo;
  if ( !v79 )
    goto LABEL_75;
  v80 = 0LL;
  v81 = 0;
  v82 = 0;
  while ( 1 )
  {
    svts = v79->fields.svts;
    if ( !svts )
      goto LABEL_75;
    if ( (int)v80 >= (signed int)svts->max_length )
      break;
    v84 = (Il2CppObject *)sub_1C1AE20(PartyListViewItem___c__DisplayClass27_0_TypeInfo);
    System_Object___ctor(v84, 0LL);
    v85 = deck->fields.deckInfo;
    if ( !v85 )
      goto LABEL_75;
    v86 = v85->fields.svts;
    if ( !v86 )
      goto LABEL_75;
    if ( (unsigned int)v80 >= v86->max_length )
      goto LABEL_411;
    v87 = v86->m_Items[v80];
    if ( v87 && v84 )
    {
      userSvtId = v87->fields.userSvtId;
      v84[1].klass = (Il2CppClass *)v87->fields.npcFollowerSvtId;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41685668(
                   questRestrictionInfo,
                   v87->fields.initPos,
                   0LL);
      if ( (int)v80 >= DeckMemberMax && (userSvtId || v84[1].klass) )
        v81 = 1;
      if ( !(Instance & 1 | (v84[1].klass == 0LL)) )
      {
        v89 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(v89, v84, Method_PartyListViewItem___c__DisplayClass27_0___ctor_b__0__, 0LL);
        Instance = BasicHelper__Any_object_(
                     (System_Collections_Generic_List_T__o *)v280,
                     (System_Func_T__bool__o *)v89,
                     (const MethodInfo_2F8A3FC *)Method_BasicHelper_Any_FollowerInfo___);
        v82 += Instance & 1;
      }
      ++v80;
      v79 = deck->fields.deckInfo;
      if ( v79 )
        continue;
    }
    goto LABEL_75;
  }
  if ( ((v82 == v74) & (v81 ^ 1)) != 0 )
  {
    v60 = follower;
    v61 = v279;
    NpcServantFollowerIds = v273;
    goto LABEL_117;
  }
  v90 = BalanceConfig_TypeInfo;
  v60 = follower;
  v61 = v279;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v90 = BalanceConfig_TypeInfo;
  }
  NpcServantFollowerIds = (System_Int64_array *)sub_1C1AC7C(
                                                  long___TypeInfo,
                                                  (unsigned int)v90->static_fields->DeckMemberMax);
  Instance = (__int64)v280;
  if ( !v280 )
    goto LABEL_75;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v285,
    v280,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_FollowerInfo__GetEnumerator__);
  v290 = v285;
  while ( 1 )
  {
    v91 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v290,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__MoveNext__);
    if ( !v91 )
      break;
    if ( !v290.fields._current )
      sub_1C1AE30(v91, v92);
    klass = v290.fields._current[5].klass;
    if ( klass )
    {
      v95 = LODWORD(v290.fields._current[5].monitor) - 1;
      if ( v95 >= 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_1C1AE30(v91, v92);
        if ( v95 >= NpcServantFollowerIds->max_length )
          sub_1C1AE38(v91, v92);
        v96 = &NpcServantFollowerIds->obj.klass + (unsigned int)v95;
        goto LABEL_92;
      }
      NpcDeployIdx = PartyListViewItem__GetNpcDeployIdx(this, NpcServantFollowerIds, v93);
      if ( (NpcDeployIdx & 0x80000000) == 0 )
      {
        if ( !NpcServantFollowerIds )
          sub_1C1AE30(NpcDeployIdx, v98);
        if ( (unsigned int)NpcDeployIdx >= NpcServantFollowerIds->max_length )
          sub_1C1AE38(NpcDeployIdx, v98);
        v96 = &NpcServantFollowerIds->obj.klass + (unsigned int)NpcDeployIdx;
LABEL_92:
        v96[4] = klass;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v290,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_FollowerInfo__Dispose__);
  v99 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v99 = BalanceConfig_TypeInfo;
  }
  userServantList = (UserServantEntity_array *)sub_1C1AC7C(
                                                 UserServantEntity___TypeInfo,
                                                 (unsigned int)v99->static_fields->DeckMemberMax);
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
    v103 = deck->fields.deckInfo;
    if ( !v103 )
      goto LABEL_75;
    v104 = v103->fields.svts;
    if ( !v104 )
      goto LABEL_75;
    if ( i >= v104->max_length )
      goto LABEL_411;
    v105 = v104->m_Items[i];
    if ( !v105 )
      goto LABEL_75;
    if ( v105->fields.userSvtId )
    {
      UserServantDeployIndex = PartyListViewItem__GetUserServantDeployIndex(
                                 (PartyListViewItem_o *)Instance,
                                 userServantList,
                                 NpcServantFollowerIds,
                                 v101);
      if ( (UserServantDeployIndex & 0x80000000) == 0 )
      {
        v107 = UserServantDeployIndex;
        if ( UserServantDeployIndex < DeckMemberMax )
        {
          Instance = (__int64)UserEventDeckEntity__GetUserServant(deck, i, 0LL);
          if ( !userServantList )
            goto LABEL_75;
          v108 = Instance;
          if ( Instance )
          {
            Instance = sub_1C1AD10(Instance, userServantList->obj.klass->_1.element_class);
            if ( !Instance )
            {
LABEL_412:
              v251 = sub_1C1AE54();
              sub_1C1ACFC(v251, 0LL);
            }
          }
          if ( v107 >= userServantList->max_length )
            goto LABEL_411;
          v109 = &userServantList->obj.klass + v107;
          v109[4] = (Il2CppClass *)v108;
          sub_1C1AB78(v109 + 4);
          questRestrictionInfo = v277;
          v61 = v279;
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
                      (System_Collections_Generic_List_FollowerInfo__o *)v280,
                      v100);
  }
LABEL_117:
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  if ( *(_QWORD *)(Instance + 24) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      v60 = *(FollowerInfo_o **)(Instance + 24);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        v265 = *(_DWORD *)(Instance + 32);
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          v266 = *(_DWORD *)(Instance + 36);
          goto LABEL_124;
        }
      }
    }
    goto LABEL_75;
  }
  v265 = followerClassId;
  v266 = followerDeckId;
LABEL_124:
  v110 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v110 = BalanceConfig_TypeInfo;
  }
  this->fields.memberList = (struct PartyOrganizationListViewItem_array *)sub_1C1AC7C(
                                                                            PartyOrganizationListViewItem___TypeInfo,
                                                                            (unsigned int)v110->static_fields->DeckMemberMax);
  Instance = sub_1C1AB78(&this->fields.memberList);
  p_memberList = &this->fields.memberList;
  this->fields.cost = 0;
  v269 = v60;
  if ( !isNew && questRestrictionInfo->fields.isNpcEditablePos )
  {
    m_Items = (QuestRestrictionInfo_o *)NpcServantFollowerIds->m_Items;
    v111 = 0LL;
    v112 = (EventUpValSetupInfo_o *)DeckMemberMax;
    isFixNpc = userServantList->m_Items;
    v257 = -1;
    while ( 1 )
    {
      for ( j = 8 * v111; ; j += 8LL )
      {
        v114 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v114 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v111 >= v114->static_fields->DeckMemberMax )
          goto LABEL_406;
        v115 = sub_1C1AE20(PartyListViewItem___c__DisplayClass27_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v115, 0LL);
        if ( v282 )
        {
          v117 = deck->fields.deckInfo;
          if ( !v117 )
            goto LABEL_75;
          v118 = v117->fields.svts;
          if ( !v118 )
            goto LABEL_75;
          if ( v111 >= v118->max_length )
            goto LABEL_411;
          v119 = v118->m_Items[v111];
          if ( !v119 )
            goto LABEL_75;
          p_initPos = &v119->fields.initPos;
        }
        else
        {
          Instance = (__int64)PartyListViewItem__GetMember(v61, v111, v116);
          if ( !Instance )
            goto LABEL_75;
          p_initPos = (int32_t *)(Instance + 348);
        }
        v121 = *p_initPos;
        if ( (__int64)v111 < (__int64)v112 )
          break;
        v122 = (unsigned int *)*p_memberList;
        v123 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32986860(v123, v111, 0, setupInfo, questRestrictionInfo, 1, v121, 0LL);
        if ( !v122 )
          goto LABEL_75;
        if ( v123 )
        {
          Instance = sub_1C1AD10(v123, *(_QWORD *)(*(_QWORD *)v122 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        if ( v111 >= v122[6] )
          goto LABEL_411;
        *(_QWORD *)&v122[2 * v111 + 8] = v123;
        sub_1C1AB78(&v122[(unsigned __int64)j / 4 + 8]);
        ++v111;
      }
      if ( !v115 )
        goto LABEL_75;
      *(_DWORD *)(v115 + 16) = v111 + 1;
      followera = 0LL;
      followerClassIda = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41685668(questRestrictionInfo, v121, 0LL);
      v125 = 0;
      v259 = Instance;
      if ( (Instance & 1) != 0 )
      {
        if ( !NpcServantFollowerIds )
          goto LABEL_75;
        if ( v111 >= NpcServantFollowerIds->max_length )
          goto LABEL_411;
        v126 = *((_QWORD *)&m_Items->klass + v111);
        v125 = v126 >= 1
            && *(_DWORD *)(v115 + 16) != v264
            && PartyListViewItem__SetNpcFollowerInfo(
                 this,
                 &followera,
                 &followerClassIda,
                 npcFollowerInfoList,
                 v126,
                 v121,
                 v124);
      }
      setupInfob = v112;
      v127 = !QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL)
          && QuestRestrictionInfo__IsPositionFixNpc(questRestrictionInfo, v121, 0LL);
      v274 = NpcServantFollowerIds;
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      Instance = (__int64)PartyOrganizationUtility__GetNpcFollowerInfo(
                            (PartyOrganizationUtility_o *)Instance,
                            v121,
                            0LL);
      if ( !Instance || ((v259 ^ 1) & 1) != 0 )
      {
        if ( v125 || *(_DWORD *)(v115 + 16) == FollowerIndex )
        {
          v136 = followera;
          v137 = (unsigned int *)*p_memberList;
          if ( !followera )
          {
            v142 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
            v133 = v142;
            if ( v269 )
              PartyOrganizationListViewItem___ctor_32949872(
                v142,
                v111,
                v269,
                v265,
                setupInfo,
                questRestrictionInfo,
                0LL,
                0,
                v266,
                v121,
                0LL);
            else
              PartyOrganizationListViewItem___ctor_32986860(
                v142,
                v111,
                1,
                setupInfo,
                questRestrictionInfo,
                1,
                v121,
                0LL);
            v61 = v279;
            v134 = v137;
            if ( !v137 )
              goto LABEL_75;
            goto LABEL_208;
          }
          v138 = setupInfo;
          v139 = followerClassIda;
          v140 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
          v141 = v139;
          v133 = v140;
          setupInfo = v138;
          PartyOrganizationListViewItem___ctor_32949872(
            v140,
            v111,
            v136,
            v141,
            v138,
            questRestrictionInfo,
            0LL,
            0,
            v266,
            v121,
            0LL);
          v112 = setupInfob;
          if ( !v137 )
            goto LABEL_75;
          v61 = v279;
          v134 = v137;
          if ( v133 )
          {
            Instance = sub_1C1AD10(v133, *(_QWORD *)(*(_QWORD *)v137 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          v135 = v137[6];
          this = v272;
        }
        else if ( v127 )
        {
          v143 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_FollowerInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v143,
            (Il2CppObject *)v115,
            Method_PartyListViewItem___c__DisplayClass27_1___ctor_b__1__,
            0LL);
          v144 = System_Linq_Enumerable__Where_object_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v280,
                   (System_Func_TSource__bool__o *)v143,
                   (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
          v145 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C1AD10(v144, FollowerInfo___TypeInfo);
          if ( !v145 )
            v145 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                          v144,
                                                                          (const MethodInfo_2FD8E70 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
          if ( System_Linq_Enumerable__Any_object_(
                 v145,
                 (const MethodInfo_2FAA930 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
          {
            Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                                  v145,
                                  0,
                                  (const MethodInfo_2FBDAA0 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
            v61 = v279;
            v146 = (FollowerInfo_o *)Instance;
          }
          else
          {
            v61 = v279;
            Instance = (__int64)v280;
            if ( !v280 )
              goto LABEL_75;
            if ( v280->fields._size < 1 )
            {
LABEL_221:
              v147 = (unsigned int *)*p_memberList;
              goto LABEL_236;
            }
            v155 = 0;
            while ( 1 )
            {
              Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v155,
                                    (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
              if ( !Instance || !NpcServantFollowerIds )
                goto LABEL_75;
              if ( v111 >= NpcServantFollowerIds->max_length )
                goto LABEL_411;
              if ( *(_QWORD *)(Instance + 80) != *((_QWORD *)&m_Items->klass + v111) )
              {
                Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                      v280,
                                      v155,
                                      (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
                if ( !Instance )
                  goto LABEL_75;
                if ( v257 < v155 && *(int *)(Instance + 88) <= 0 )
                  break;
              }
              Instance = (__int64)v280;
              if ( ++v155 >= v280->fields._size )
                goto LABEL_221;
            }
            Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                  v280,
                                  v155,
                                  (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
            v146 = (FollowerInfo_o *)Instance;
            v257 = v155;
          }
          v147 = (unsigned int *)*p_memberList;
          if ( !v146 )
          {
            NpcServantFollowerIds = v274;
LABEL_236:
            v154 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_32986860(v154, v111, 0, setupInfo, questRestrictionInfo, 0, v121, 0LL);
            if ( !v147 )
              goto LABEL_75;
            goto LABEL_237;
          }
          userSvtLeaderHash = v146->fields.userSvtLeaderHash;
          if ( !userSvtLeaderHash )
            goto LABEL_75;
          if ( !userSvtLeaderHash->max_length )
            goto LABEL_411;
          v149 = userSvtLeaderHash->m_Items[0];
          if ( !v149 )
            goto LABEL_75;
          classId = v149->fields.classId;
          v151 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32949872(
            v151,
            v111,
            v146,
            classId,
            setupInfo,
            questRestrictionInfo,
            0LL,
            1,
            v266,
            v121,
            0LL);
          if ( !v147 )
            goto LABEL_75;
          v61 = v279;
          NpcServantFollowerIds = v274;
          v134 = v147;
          v133 = v151;
          if ( v151 )
          {
            Instance = sub_1C1AD10(v151, *(_QWORD *)(*(_QWORD *)v134 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          v135 = v134[6];
        }
        else
        {
          if ( !NpcServantFollowerIds )
            goto LABEL_75;
          v61 = v279;
          if ( v111 >= NpcServantFollowerIds->max_length )
            goto LABEL_411;
          if ( *((_QWORD *)&m_Items->klass + v111) )
          {
            Instance = System_Linq_Enumerable__Count_object_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v280,
                         (const MethodInfo_2FBA498 *)Method_System_Linq_Enumerable_Count_FollowerInfo___);
            if ( (int)Instance < 1 )
            {
LABEL_203:
              v147 = (unsigned int *)*p_memberList;
            }
            else
            {
              if ( !v280 )
                goto LABEL_75;
              v152 = v280;
              v153 = 0;
              while ( 1 )
              {
                Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                      v152,
                                      v153,
                                      (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
                if ( !Instance )
                  goto LABEL_75;
                if ( v111 >= NpcServantFollowerIds->max_length )
                  goto LABEL_411;
                if ( *(_QWORD *)(Instance + 80) == *((_QWORD *)&m_Items->klass + v111) )
                  break;
                v152 = v280;
                if ( ++v153 >= System_Linq_Enumerable__Count_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)v280,
                                 (const MethodInfo_2FBA498 *)Method_System_Linq_Enumerable_Count_FollowerInfo___) )
                  goto LABEL_203;
              }
              Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                    v280,
                                    v153,
                                    (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
              v165 = (unsigned int *)*p_memberList;
              if ( Instance )
              {
                v166 = *(_QWORD *)(Instance + 40);
                v167 = (FollowerInfo_o *)Instance;
                if ( !v166 )
                  goto LABEL_75;
                if ( !*(_DWORD *)(v166 + 24) )
                  goto LABEL_411;
                v168 = *(_QWORD *)(v166 + 32);
                if ( !v168 )
                  goto LABEL_75;
                v260 = *(_DWORD *)(v168 + 32);
                v133 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
                PartyOrganizationListViewItem___ctor_32949872(
                  v133,
                  v111,
                  v167,
                  v260,
                  setupInfo,
                  questRestrictionInfo,
                  0LL,
                  1,
                  v266,
                  v121,
                  0LL);
                if ( !v165 )
                  goto LABEL_75;
                v61 = v279;
                v134 = v165;
LABEL_208:
                if ( !v133 )
                {
LABEL_239:
                  v135 = v134[6];
                  goto LABEL_240;
                }
LABEL_238:
                Instance = sub_1C1AD10(v133, *(_QWORD *)(*(_QWORD *)v134 + 64LL));
                if ( !Instance )
                  goto LABEL_412;
                goto LABEL_239;
              }
              v61 = v279;
              v147 = (unsigned int *)*p_memberList;
            }
            v154 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_32986860(v154, v111, 0, setupInfo, questRestrictionInfo, 1, v121, 0LL);
            if ( !v147 )
              goto LABEL_75;
LABEL_237:
            v134 = v147;
            v133 = v154;
            if ( !v154 )
              goto LABEL_239;
            goto LABEL_238;
          }
          if ( (v259 & 1) != 0 )
          {
            if ( !userServantList )
              goto LABEL_75;
            if ( v111 >= userServantList->max_length )
              goto LABEL_411;
            v156 = isFixNpc[v111];
            if ( v156 )
            {
              v158 = *(_QWORD *)&v156->fields.svtId.fields.currentCryptoKey;
              v157 = *(_QWORD *)&v156->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v291.fields.currentCryptoKey = v158;
              *(_QWORD *)&v291.fields.fakeValue = v157;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v291, 0LL);
              if ( v111 >= userServantList->max_length )
                goto LABEL_411;
              v159 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)isFixNpc[v111];
              if ( !v159 )
                goto LABEL_75;
              v160 = Instance;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v159[6], 0LL);
              if ( v111 >= userServantList->max_length )
                goto LABEL_411;
              v161 = Instance;
              Instance = (__int64)isFixNpc[v111];
              if ( !Instance )
                goto LABEL_75;
              DispLimitCount = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
              Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                           questRestrictionInfo,
                           v160,
                           v161,
                           DispLimitCount,
                           v121,
                           0,
                           0LL);
              if ( (Instance & 1) != 0 )
              {
                if ( v111 >= userServantList->max_length )
                  goto LABEL_411;
                isFixNpc[v111] = 0LL;
                Instance = sub_1C1AB78(&isFixNpc[(unsigned __int64)j / 8]);
              }
            }
          }
          else if ( !userServantList )
          {
            goto LABEL_75;
          }
          if ( v111 >= userServantList->max_length )
            goto LABEL_411;
          v169 = this;
          v170 = isFixNpc[v111];
          v171 = (unsigned int *)*p_memberList;
          if ( !v170 )
          {
            v133 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
            PartyOrganizationListViewItem___ctor_32986860(v133, v111, 0, setupInfo, questRestrictionInfo, 1, v121, 0LL);
            v61 = v279;
            if ( !v171 )
              goto LABEL_75;
            v134 = v171;
            this = v169;
            goto LABEL_208;
          }
          EquipList = UserEventDeckEntity__GetEquipList(deck, v111, 0LL);
          v133 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32977504(
            v133,
            v111,
            v170,
            EquipList,
            setupInfo,
            questRestrictionInfo,
            0LL,
            v121,
            0LL,
            0,
            0LL);
          if ( !v171 )
            goto LABEL_75;
          v61 = v279;
          v134 = v171;
          if ( v133 )
          {
            Instance = sub_1C1AD10(v133, *(_QWORD *)(*(_QWORD *)v171 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          v135 = v171[6];
          this = v169;
        }
      }
      else
      {
        v128 = (FollowerInfo_o *)Instance;
        if ( FollowerInfo__get_IsNpc((FollowerInfo_o *)Instance, 0LL) )
          v129 = 0;
        else
          v129 = v265;
        IsNpc = FollowerInfo__get_IsNpc(v128, 0LL);
        v131 = (unsigned int *)*p_memberList;
        if ( IsNpc )
          v132 = 0;
        else
          v132 = v266;
        v133 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
        initPos = v121;
        v134 = v131;
        PartyOrganizationListViewItem___ctor_32949872(
          v133,
          v111,
          v128,
          v129,
          setupInfo,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          v132,
          initPos,
          0LL);
        if ( !v131 )
          goto LABEL_75;
        v61 = v279;
        if ( v133 )
        {
          Instance = sub_1C1AD10(v133, *(_QWORD *)(*(_QWORD *)v131 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        v135 = v131[6];
        this = v272;
        NpcServantFollowerIds = v274;
        v112 = setupInfob;
      }
LABEL_240:
      if ( v111 >= v135 )
        goto LABEL_411;
      *(_QWORD *)&v134[2 * v111 + 8] = v133;
      Instance = sub_1C1AB78(&v134[(unsigned __int64)j / 4 + 8]);
      memberList = this->fields.memberList;
      if ( !memberList )
        goto LABEL_75;
      if ( v111 >= memberList->max_length )
        goto LABEL_411;
      Instance = (__int64)memberList->m_Items[v111];
      if ( !Instance )
        goto LABEL_75;
      cost = this->fields.cost;
      this->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)Instance, 0LL)
                        + cost;
      ++v111;
    }
  }
  v275 = questRestrictionInfo->fields.myServantNumMax
       + (FollowerIndex > 0 && !questRestrictionInfo->fields.isNotTransitionSupportList);
  if ( !isNew )
  {
    if ( !userServantList )
      goto LABEL_75;
    if ( (int)userServantList->max_length >= 1 )
    {
      v172 = 0LL;
      v173 = 0;
      v174 = 0LL;
      v175 = userServantList->m_Items;
      while ( 1 )
      {
        v176 = sub_1C1AE20(PartyListViewItem___c__DisplayClass27_2_TypeInfo);
        System_Object___ctor((Il2CppObject *)v176, 0LL);
        if ( !v176 )
          goto LABEL_75;
        v177 = v174 + 1;
        *(_DWORD *)(v176 + 16) = v174 + 1;
        if ( v174 >= userServantList->max_length )
          goto LABEL_411;
        if ( v175[v174] )
          ++v173;
        v178 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_FollowerInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v178,
          (Il2CppObject *)v176,
          Method_PartyListViewItem___c__DisplayClass27_2___ctor_b__2__,
          0LL);
        Instance = (__int64)System_Linq_Enumerable__Where_object_(
                              (System_Collections_Generic_IEnumerable_TSource__o *)npcFollowerInfoList,
                              (System_Func_TSource__bool__o *)v178,
                              (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
        v179 = userServantList->max_length;
        if ( v174 >= v179 )
          goto LABEL_411;
        questRestrictionInfo = v277;
        v61 = v279;
        if ( v175[v174] )
        {
          if ( *(_DWORD *)(v176 + 16) > DeckMemberMax )
            goto LABEL_276;
          Instance = System_Linq_Enumerable__Any_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)Instance,
                       (const MethodInfo_2FAA930 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
          if ( v173 > v275 || (Instance & 1) != 0 )
            break;
        }
LABEL_278:
        ++v172;
        ++v174;
        if ( v177 >= (int)userServantList->max_length )
          goto LABEL_279;
      }
      v179 = userServantList->max_length;
LABEL_276:
      if ( v174 >= v179 )
        goto LABEL_411;
      v175[v174] = 0LL;
      sub_1C1AB78(&v175[v172]);
      goto LABEL_278;
    }
  }
LABEL_279:
  v180 = setupInfoa;
  v181 = 0LL;
  v182 = DeckMemberMax;
  v267 = 0;
LABEL_280:
  v183 = 8 * v181 + 32;
  for ( k = v181; ; ++k )
  {
    v185 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v185 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)k >= v185->static_fields->DeckMemberMax )
      break;
    v186 = sub_1C1AE20(PartyListViewItem___c__DisplayClass27_3_TypeInfo);
    System_Object___ctor((Il2CppObject *)v186, 0LL);
    if ( v282 )
    {
      v188 = deck->fields.deckInfo;
      if ( !v188 )
        goto LABEL_75;
      v189 = v188->fields.svts;
      if ( !v189 )
        goto LABEL_75;
      if ( k >= v189->max_length )
        goto LABEL_411;
      v190 = *(__int64 *)((char *)&v189->obj.klass + v183);
      if ( !v190 )
        goto LABEL_75;
      v191 = (int32_t *)(v190 + 76);
    }
    else
    {
      Instance = (__int64)PartyListViewItem__GetMember(v61, k, v187);
      if ( !Instance )
        goto LABEL_75;
      v191 = (int32_t *)(Instance + 348);
    }
    v192 = *v191;
    if ( (__int64)k < v182 )
    {
      if ( !v186 )
        goto LABEL_75;
      v181 = k + 1;
      *(_DWORD *)(v186 + 16) = k + 1;
      v287 = 0LL;
      v286 = 0;
      Instance = QuestRestrictionInfo__IsMyServantOrNpcRestriction_41685668(questRestrictionInfo, v192, 0LL);
      v196 = Instance;
      if ( (Instance & 1) == 0 )
        goto LABEL_307;
      v197 = deck->fields.deckInfo;
      if ( !v197 )
        goto LABEL_75;
      v198 = v197->fields.svts;
      if ( !v198 )
        goto LABEL_75;
      if ( k >= v198->max_length )
        goto LABEL_411;
      v199 = *(__int64 *)((char *)&v198->obj.klass + v183);
      if ( !v199 )
        goto LABEL_75;
      v200 = *(_QWORD *)(v199 + 64);
      if ( v200 >= 1 )
      {
        if ( *(_DWORD *)(v186 + 16) == v264 )
        {
          isFixNpca = 1;
          v258 = 0;
          v262 = 1;
          goto LABEL_313;
        }
        v258 = 0;
        v262 = PartyListViewItem__SetNpcFollowerInfo(this, &v287, &v286, npcFollowerInfoList, v200, v192, v195);
LABEL_312:
        isFixNpca = 1;
        goto LABEL_313;
      }
LABEL_307:
      if ( !v269 || questRestrictionInfo->fields.isNotTransitionSupportList )
      {
        v258 = 0;
        v262 = 0;
        goto LABEL_312;
      }
      v201 = *(_DWORD *)(v186 + 16);
      isFixNpca = v201 != FollowerIndex;
      v258 = v201 == FollowerIndex;
      v262 = 0;
LABEL_313:
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      NpcFollowerInfo = PartyOrganizationUtility__GetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, v192, 0LL);
      if ( NpcFollowerInfo && ((v196 ^ 1) & 1) == 0 )
      {
        v203 = NpcFollowerInfo;
        if ( FollowerInfo__get_IsNpc(NpcFollowerInfo, 0LL) )
          v204 = 0;
        else
          v204 = v265;
        v205 = FollowerInfo__get_IsNpc(v203, 0LL);
        v206 = (unsigned int *)*p_memberList;
        if ( v205 )
          v207 = 0;
        else
          v207 = v266;
        followerDeckIda = v207;
        v180 = setupInfoa;
        v208 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
        PartyOrganizationListViewItem___ctor_32949872(
          v208,
          k,
          v203,
          v204,
          setupInfoa,
          questRestrictionInfo,
          friendPointCampaignEntityList,
          0,
          followerDeckIda,
          v192,
          0LL);
        if ( !v206 )
          goto LABEL_75;
        v61 = v279;
        if ( v208 )
        {
          Instance = sub_1C1AD10(v208, *(_QWORD *)(*(_QWORD *)v206 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        if ( k >= v206[6] )
          goto LABEL_411;
        *(_QWORD *)((char *)v206 + v183) = v208;
        Instance = sub_1C1AB78((char *)v206 + v183);
        v209 = *p_memberList;
        if ( !*p_memberList )
          goto LABEL_75;
        if ( k >= v209->max_length )
          goto LABEL_411;
        v181 = k + 1;
        this = v272;
        v210 = deck->fields.deckInfo;
        if ( !v210 )
          goto LABEL_75;
        v211 = v210->fields.svts;
        if ( !v211 )
          goto LABEL_75;
        if ( k >= v211->max_length )
          goto LABEL_411;
        v212 = *(__int64 *)((char *)&v211->obj.klass + v183);
        if ( !v212 )
          goto LABEL_75;
        v213 = *(__int64 *)((char *)&v209->obj.klass + v183);
        if ( !v213 )
          goto LABEL_75;
        *(_DWORD *)(v213 + 348) = *(_DWORD *)(v212 + 76);
        ++v267;
        goto LABEL_280;
      }
      if ( v262 || *(_DWORD *)(v186 + 16) == FollowerIndex )
      {
        v214 = v287;
        v215 = (unsigned int *)*p_memberList;
        if ( v287 )
        {
          v254 = (unsigned int *)*p_memberList;
          v216 = v286;
          v217 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
          v218 = v216;
          v215 = v254;
          v219 = v217;
          PartyOrganizationListViewItem___ctor_32949872(
            v217,
            k,
            v214,
            v218,
            v180,
            questRestrictionInfo,
            0LL,
            isFixNpca,
            v266,
            v192,
            0LL);
          if ( !v254 )
            goto LABEL_75;
          v61 = v279;
          if ( !v219 )
          {
LABEL_365:
            if ( k >= v215[6] )
              goto LABEL_411;
            *(_QWORD *)((char *)v215 + v183) = v219;
            Instance = sub_1C1AB78((char *)v215 + v183);
            v232 = *p_memberList;
            if ( !*p_memberList )
              goto LABEL_75;
            if ( k >= v232->max_length )
              goto LABEL_411;
            v233 = deck->fields.deckInfo;
            if ( !v233 )
              goto LABEL_75;
            v234 = v233->fields.svts;
            if ( !v234 )
              goto LABEL_75;
            if ( k >= v234->max_length )
              goto LABEL_411;
            v235 = *(__int64 *)((char *)&v234->obj.klass + v183);
            if ( !v235 )
              goto LABEL_75;
            v236 = *(__int64 *)((char *)&v232->obj.klass + v183);
            if ( !v236 )
              goto LABEL_75;
            *(_DWORD *)(v236 + 348) = *(_DWORD *)(v235 + 76);
            v267 += v258 || v262;
            goto LABEL_280;
          }
        }
        else
        {
          v220 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
          v219 = v220;
          if ( v269 )
            PartyOrganizationListViewItem___ctor_32949872(
              v220,
              k,
              v269,
              v265,
              v180,
              questRestrictionInfo,
              0LL,
              isFixNpca,
              v266,
              v192,
              0LL);
          else
            PartyOrganizationListViewItem___ctor_32986860(v220, k, 1, v180, questRestrictionInfo, 1, v192, 0LL);
          v61 = v279;
          if ( !v215 )
            goto LABEL_75;
          if ( !v219 )
            goto LABEL_365;
        }
        Instance = sub_1C1AD10(v219, *(_QWORD *)(*(_QWORD *)v215 + 64LL));
        if ( !Instance )
          goto LABEL_412;
        goto LABEL_365;
      }
      v221 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v221,
        (Il2CppObject *)v186,
        Method_PartyListViewItem___c__DisplayClass27_3___ctor_b__3__,
        0LL);
      v222 = System_Linq_Enumerable__Where_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v280,
               (System_Func_TSource__bool__o *)v221,
               (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      v223 = (System_Collections_Generic_IEnumerable_TSource__o *)sub_1C1AD10(v222, FollowerInfo___TypeInfo);
      if ( !v223 )
        v223 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                      v222,
                                                                      (const MethodInfo_2FD8E70 *)Method_System_Linq_Enumerable_ToArray_FollowerInfo___);
      Instance = System_Linq_Enumerable__Any_object_(
                   v223,
                   (const MethodInfo_2FAA930 *)Method_System_Linq_Enumerable_Any_FollowerInfo___);
      if ( v267 < v275 && (Instance & 1) == 0 )
      {
        if ( (v196 & 1) != 0 )
        {
          v224 = userServantList;
          if ( !userServantList )
            goto LABEL_75;
          if ( k >= userServantList->max_length )
            goto LABEL_411;
          v225 = *(__int64 *)((char *)&userServantList->obj.klass + v183);
          if ( v225 )
          {
            v227 = *(_QWORD *)(v225 + 80);
            v226 = *(_QWORD *)(v225 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v292.fields.currentCryptoKey = v227;
            *(_QWORD *)&v292.fields.fakeValue = v226;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v292, 0LL);
            if ( k >= userServantList->max_length )
              goto LABEL_411;
            v228 = *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)((char *)&userServantList->obj.klass + v183);
            if ( !v228 )
              goto LABEL_75;
            v229 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v228[6], 0LL);
            if ( k >= userServantList->max_length )
              goto LABEL_411;
            v230 = Instance;
            Instance = *(__int64 *)((char *)&userServantList->obj.klass + v183);
            if ( !Instance )
              goto LABEL_75;
            v231 = UserServantEntity__getDispLimitCount((UserServantEntity_o *)Instance, 0, 0LL);
            questRestrictionInfo = v277;
            Instance = QuestRestrictionInfo__IsRestrictionServantIndividuality(v277, v229, v230, v231, v192, 0, 0LL);
            v224 = userServantList;
            if ( (Instance & 1) != 0 )
            {
              if ( k >= userServantList->max_length )
                goto LABEL_411;
              *(Il2CppClass **)((char *)&userServantList->obj.klass + v183) = 0LL;
              Instance = sub_1C1AB78((char *)userServantList + v183);
            }
          }
        }
        else
        {
          v224 = userServantList;
          if ( !userServantList )
            goto LABEL_75;
        }
        if ( k >= v224->max_length )
          goto LABEL_411;
        v243 = *(UserServantEntity_o **)((char *)&v224->obj.klass + v183);
        v244 = (unsigned int *)*p_memberList;
        if ( v243 )
        {
          v245 = UserEventDeckEntity__GetEquipList(deck, k, 0LL);
          v246 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32977504(
            v246,
            k,
            v243,
            v245,
            setupInfoa,
            questRestrictionInfo,
            0LL,
            v192,
            0LL,
            0,
            0LL);
          v181 = k + 1;
          if ( !v244 )
            goto LABEL_75;
          v61 = v279;
        }
        else
        {
          v246 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32986860(v246, k, 0, setupInfoa, questRestrictionInfo, 1, v192, 0LL);
          v61 = v279;
          v181 = k + 1;
          if ( !v244 )
            goto LABEL_75;
        }
        if ( v246 )
        {
          Instance = sub_1C1AD10(v246, *(_QWORD *)(*(_QWORD *)v244 + 64LL));
          if ( !Instance )
            goto LABEL_412;
        }
        if ( k >= v244[6] )
          goto LABEL_411;
        *(_QWORD *)((char *)v244 + v183) = v246;
        Instance = sub_1C1AB78((char *)v244 + v183);
        ++v267;
        goto LABEL_402;
      }
      if ( System_Linq_Enumerable__Any_object_(
             v223,
             (const MethodInfo_2FAA930 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
      {
        Instance = (__int64)System_Linq_Enumerable__ElementAt_object_(
                              v223,
                              0,
                              (const MethodInfo_2FBDAA0 *)Method_System_Linq_Enumerable_ElementAt_FollowerInfo___);
        goto LABEL_377;
      }
      Instance = (__int64)v280;
      if ( !v280 )
        goto LABEL_75;
      if ( v280->fields._size <= (int)k - v267 )
      {
        v238 = (unsigned int *)*p_memberList;
      }
      else
      {
        Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                              v280,
                              (int)k - v267,
                              (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_FollowerInfo__get_Item__);
LABEL_377:
        v237 = (FollowerInfo_o *)Instance;
        v238 = (unsigned int *)*p_memberList;
        if ( Instance )
        {
          v239 = *(_QWORD *)(Instance + 40);
          if ( !v239 )
            goto LABEL_75;
          if ( !*(_DWORD *)(v239 + 24) )
            goto LABEL_411;
          v240 = *(_QWORD *)(v239 + 32);
          if ( !v240 )
            goto LABEL_75;
          v241 = *(_DWORD *)(v240 + 32);
          v242 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32949872(
            v242,
            k,
            v237,
            v241,
            setupInfoa,
            questRestrictionInfo,
            0LL,
            1,
            v266,
            v192,
            0LL);
          if ( !v238 )
            goto LABEL_75;
          v61 = v279;
          if ( v242 )
          {
            Instance = sub_1C1AD10(v242, *(_QWORD *)(*(_QWORD *)v238 + 64LL));
            if ( !Instance )
              goto LABEL_412;
          }
          if ( k >= v238[6] )
            goto LABEL_411;
          *(_QWORD *)((char *)v238 + v183) = v242;
          Instance = sub_1C1AB78((char *)v238 + v183);
LABEL_402:
          v248 = this->fields.memberList;
          v180 = setupInfoa;
          if ( !v248 )
            goto LABEL_75;
          if ( k >= v248->max_length )
            goto LABEL_411;
          Instance = *(__int64 *)((char *)&v248->obj.klass + v183);
          if ( !Instance )
            goto LABEL_75;
          v249 = this->fields.cost;
          this->fields.cost = PartyOrganizationListViewItem__get_MargeCost(
                                (PartyOrganizationListViewItem_o *)Instance,
                                0LL)
                            + v249;
          goto LABEL_280;
        }
      }
      v247 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32986860(v247, k, 0, setupInfoa, questRestrictionInfo, 0, v192, 0LL);
      if ( !v238 )
        goto LABEL_75;
      if ( v247 )
      {
        Instance = sub_1C1AD10(v247, *(_QWORD *)(*(_QWORD *)v238 + 64LL));
        if ( !Instance )
          goto LABEL_412;
      }
      if ( k >= v238[6] )
        goto LABEL_411;
      *(_QWORD *)((char *)v238 + v183) = v247;
      Instance = sub_1C1AB78((char *)v238 + v183);
      v61 = v279;
      goto LABEL_402;
    }
    v193 = (unsigned int *)*p_memberList;
    v194 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
    PartyOrganizationListViewItem___ctor_32986860(v194, k, 0, v180, questRestrictionInfo, 1, v192, 0LL);
    if ( !v193 )
      goto LABEL_75;
    if ( v194 )
    {
      Instance = sub_1C1AD10(v194, *(_QWORD *)(*(_QWORD *)v193 + 64LL));
      if ( !Instance )
        goto LABEL_412;
    }
    if ( k >= v193[6] )
      goto LABEL_411;
    *(_QWORD *)((char *)v193 + v183) = v194;
    sub_1C1AB78((char *)v193 + v183);
    v183 += 8LL;
  }
LABEL_406:
  PartyListViewItem__CheckRestriction(this, (const MethodInfo *)v55);
  if ( (questRestrictionInfo->fields.isNpcEditablePos || !questRestrictionInfo->fields.isNpcOnlyBattle)
    && !PartyListViewItem__GetStartDeckCondition(this, v250) )
  {
    *isBaseModify = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem___ctor_32855516(
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
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x29
  __int64 Master_object; // x0
  __int64 v27; // x1
  struct DeckServant_o *deckInfo; // x8
  UserServantEntity_array *UserServantList; // x0
  BalanceConfig_c *v30; // x8
  System_Collections_Generic_List_int__o *v31; // x28
  int v32; // w8
  __int64 v33; // x29
  unsigned int v34; // w19
  __int64 v35; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
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
  unsigned int max_length; // w8
  Il2CppClass **v58; // x0
  struct PartyOrganizationListViewItem_array *v59; // x8
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w19
  __int64 v62; // x0
  UserEventDeckEntity_o *v63; // [xsp+18h] [xbp-D8h]
  int v64; // [xsp+24h] [xbp-CCh]
  UserServantEntity_array *v65; // [xsp+28h] [xbp-C8h]
  int32_t v68; // [xsp+44h] [xbp-ACh]
  struct PartyOrganizationListViewItem_array **p_memberList; // [xsp+48h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+50h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+70h] [xbp-80h]

  if ( (byte_4BC3652 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, *(_QWORD *)&menuKind);
    sub_1C1ABD4(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___, v15);
    sub_1C1ABD4(&DataManager_TypeInfo, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Contains__, v18);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v19);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v21);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_1C1ABD4(&PartyOrganizationListViewItem___TypeInfo, v23);
    sub_1C1ABD4(&PartyOrganizationListViewItem_TypeInfo, v24);
    byte_4BC3652 = 1;
  }
  ListViewItem___ctor_41943804((ListViewItem_o *)this, index, 0LL);
  this->fields.menuKind = menuKind;
  this->fields.maxCost = maxCost;
  this->fields.setupInfo = setupInfo;
  sub_1C1AB78(&this->fields.setupInfo);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  Master_object = sub_1C1AB78(&this->fields.questRestrictionInfo);
  if ( !deck )
    goto LABEL_69;
  deckInfo = deck->fields.deckInfo;
  if ( !deckInfo )
    goto LABEL_69;
  this->fields.userEquipId = deckInfo->fields.userEquipId;
  this->fields.id = deck->fields.eventId;
  this->fields._IsWaveBattleRestart_k__BackingField = restartWave > 0;
  v68 = index + 1;
  UserServantList = UserEventDeckEntity__GetUserServantList(deck, index + 1, restartWave > 0, 0LL);
  v30 = BalanceConfig_TypeInfo;
  v65 = UserServantList;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v30 = BalanceConfig_TypeInfo;
  }
  this->fields.memberList = (struct PartyOrganizationListViewItem_array *)sub_1C1AC7C(
                                                                            PartyOrganizationListViewItem___TypeInfo,
                                                                            (unsigned int)v30->static_fields->DeckMemberMax);
  sub_1C1AB78(&this->fields.memberList);
  this->fields.cost = 0;
  p_memberList = &this->fields.memberList;
  v31 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
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
  v32 = *(_DWORD *)(Master_object + 24);
  v33 = Master_object;
  if ( v32 >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      if ( v34 >= v32 )
LABEL_70:
        sub_1C1AE38(Master_object, v27);
      v35 = *(_QWORD *)(v33 + 8LL * (int)v34 + 32);
      if ( !v35 )
        break;
      if ( *(_DWORD *)(v35 + 56) == v68 )
      {
        if ( !v31 )
          break;
        Master_object = System_Collections_Generic_List_int___Contains(
                          v31,
                          *(_DWORD *)(v35 + 32),
                          (const MethodInfo_361FBE4 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( (Master_object & 1) == 0 )
        {
          v27 = *(unsigned int *)(v35 + 32);
          items = v31->fields._items;
          v37 = Method_System_Collections_Generic_List_int__Add__;
          ++v31->fields._version;
          if ( !items )
            break;
          size = v31->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v31,
              v27,
              *(const MethodInfo_361F86C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v31->fields._size = size + 1;
            items->m_Items[size + 1] = v27;
          }
        }
      }
      v32 = *(_DWORD *)(v33 + 24);
      if ( (int)++v34 >= v32 )
        goto LABEL_24;
    }
LABEL_69:
    sub_1C1AE30(Master_object, v27);
  }
LABEL_24:
  if ( !v31 )
    goto LABEL_69;
  this->fields.waveBattleEnemyClassIds = System_Collections_Generic_List_int___ToArray(
                                           v31,
                                           (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
  sub_1C1AB78(&this->fields.waveBattleEnemyClassIds);
  this->fields._IsClearedWave_k__BackingField = v68 < restartWave;
  Master_object = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Master_object = (__int64)BalanceConfig_TypeInfo;
  }
  v39 = 0;
  v63 = deck;
  v64 = *(_DWORD *)(*(_QWORD *)(Master_object + 184) + 160LL) * index;
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
    v41 = v64 + v39;
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
      v45 = v65;
      if ( !v44 )
        goto LABEL_69;
      initPos = v44->fields.initPos;
    }
    else
    {
      v45 = v65;
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
      *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)&v47->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v71.fields.fakeValue = v49;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v70 = v71;
      v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v70, 0LL);
      Master_object = (__int64)UserEventDeckEntity__GetEquipList_41293584(deck, v50, restartWave > 0, 0LL);
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
      v56 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32977504(
        v56,
        v39,
        v47,
        v51,
        setupInfo,
        questRestrictionInfo,
        0LL,
        initPos,
        equipSvtIdList,
        v68 < restartWave,
        0LL);
      if ( !v48 )
        goto LABEL_69;
      if ( v56 )
      {
        Master_object = sub_1C1AD10(v56, v48->obj.klass->_1.element_class);
        if ( !Master_object )
        {
LABEL_71:
          v62 = sub_1C1AE54();
          sub_1C1ACFC(v62, 0LL);
        }
      }
      max_length = v48->max_length;
      deck = v63;
    }
    else
    {
      v56 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo);
      PartyOrganizationListViewItem___ctor_32986860(v56, v39, 0, setupInfo, questRestrictionInfo, 1, initPos, 0LL);
      if ( !v48 )
        goto LABEL_69;
      if ( v56 )
      {
        Master_object = sub_1C1AD10(v56, v48->obj.klass->_1.element_class);
        if ( !Master_object )
          goto LABEL_71;
      }
      max_length = v48->max_length;
    }
    if ( v39 >= max_length )
      goto LABEL_70;
    v58 = &v48->obj.klass + v39;
    v58[4] = (Il2CppClass *)v56;
    Master_object = sub_1C1AB78(v58 + 4);
    v59 = *p_memberList;
    if ( !*p_memberList )
      goto LABEL_69;
    if ( v39 >= v59->max_length )
      goto LABEL_70;
    Master_object = (__int64)v59->m_Items[v39];
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

  if ( (byte_4BC3664 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, *(_QWORD *)&deckMemberCount);
    byte_4BC3664 = 1;
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
    sub_1C1AE30(questRestrictionInfo, *(_QWORD *)&deckMemberCount);
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

  if ( (byte_4BC3658 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    sub_1C1ABD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_4BC3658 = 1;
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
        IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( IsUseOldMaster )
        {
          sortValue2 = IsUseOldMaster->fields.sortValue2;
          IsUseOldMaster = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
        sub_1C1AE30(IsUseOldMaster, method);
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
    sub_1C1AE38(IsUseOldMaster, method);
  }
}


void __fastcall PartyListViewItem__ClearDeckName(PartyListViewItem_o *this, const MethodInfo *method)
{
  this->fields.isDeckNameDefault = 1;
  this->fields.deckName = PartyListViewItem__get_DefaultDeckName(this, method);
  sub_1C1AB78(&this->fields.deckName);
}


void __fastcall PartyListViewItem__ClearEquip(PartyListViewItem_o *this, const MethodInfo *method)
{
  il2cpp_array_size_t i; // w20
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  int32_t cost; // w22

  if ( (byte_4BC365E & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    byte_4BC365E = 1;
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
      sub_1C1AE38(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v4 )
LABEL_14:
      sub_1C1AE30(v4, method);
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

  if ( (byte_4BC365F & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    byte_4BC365F = 1;
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
      sub_1C1AE38(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v4 )
LABEL_12:
      sub_1C1AE30(v4, method);
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
    sub_1C1AE30(this, *(_QWORD *)&num);
  }
  if ( v7->max_length <= num )
LABEL_9:
    sub_1C1AE38(this, *(_QWORD *)&num);
  this = (PartyListViewItem_o *)v7->m_Items[num];
  if ( !this )
    goto LABEL_8;
  PartyOrganizationListViewItem__Empty((PartyOrganizationListViewItem_o *)this, 0LL);
  PartyListViewItem__CheckRestriction(v5, v8);
}


void __fastcall PartyListViewItem__ClearMember_32858924(PartyListViewItem_o *this, const MethodInfo *method)
{
  il2cpp_array_size_t i; // w20
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8

  if ( (byte_4BC365D & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    byte_4BC365D = 1;
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
      sub_1C1AE38(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[i];
    if ( !v4 )
LABEL_14:
      sub_1C1AE30(v4, method);
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

  if ( (byte_4BC3657 & 1) == 0 )
  {
    sub_1C1ABD4(&PartyListViewItem_TypeInfo, method);
    byte_4BC3657 = 1;
  }
  v3 = (PartyListViewItem_o *)sub_1C1AE20(PartyListViewItem_TypeInfo);
  PartyListViewItem___ctor(v3, v4);
  if ( !v3 )
    sub_1C1AE30(v5, v6);
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
  if ( (byte_4BC3668 & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1C1ABD4(&BalanceConfig_TypeInfo, item);
    byte_4BC3668 = 1;
  }
  if ( !item )
LABEL_17:
    sub_1C1AE30(this, item);
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
      sub_1C1AE38(this, item);
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
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppObject *v17; // x1
  Il2CppClass **v18; // x0

  if ( (byte_4BC3674 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__ToArray__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v7);
    byte_4BC3674 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
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
      sub_1C1AE38(AssetName, v9);
    v13 = memberList->m_Items[i];
    if ( v13 )
    {
      AssetName = (Il2CppObject *)PartyOrganizationListViewItem__GetAssetName(v13, 0LL);
      if ( AssetName )
      {
        if ( !v8 )
          goto LABEL_21;
        items = v8->fields._items;
        v15 = Method_System_Collections_Generic_List_string__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v8->fields._size;
        v17 = AssetName;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            AssetName,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v17;
          sub_1C1AB78(v18 + 4);
        }
      }
    }
  }
  if ( !v8 )
LABEL_21:
    sub_1C1AE30(AssetName, v9);
  if ( v8->fields._size < 1 )
    return 0LL;
  else
    return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    v8,
                                    (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_4BC3673 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, *(_QWORD *)&typeMax);
    sub_1C1ABD4(&int___TypeInfo, v5);
    byte_4BC3673 = 1;
  }
  v7 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, (unsigned int)typeMax);
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
      sub_1C1AE30(p_image, v6);
    if ( i >= memberList->max_length )
LABEL_21:
      sub_1C1AE38(p_image, v6);
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
  const MethodInfo_363C5C0 **v40; // x25
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
  const MethodInfo_363C5C0 **v52; // x28
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

  if ( (byte_4BC3666 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Any_int___, v4);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Intersect_int___, v5);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int____get_Count__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Count__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int____get_Item__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__, v10);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4BC3666 = 1;
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
      sub_1C1AE38(DeckConditionServantNumAndPosition, method);
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(SvtId, 0LL) >= 1 )
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v30, 0LL) >= 1 )
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
      v40 = (const MethodInfo_363C5C0 **)&Method_System_Collections_Generic_List_int____get_Item__;
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
    DeckConditionServantNumAndPosition = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
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
                  (const MethodInfo_2FC3904 *)Method_System_Linq_Enumerable_Intersect_int___);
          v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       v58,
                                                                       (const MethodInfo_2FD8CD8 *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( System_Collections_Generic_List_Int32Enum___get_Item(
                 v74,
                 v50,
                 (const MethodInfo_3621DA8 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__) == 1 )
          {
            DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                           v59,
                                                           (const MethodInfo_2FAA400 *)Method_System_Linq_Enumerable_Any_int___);
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
                                                         (const MethodInfo_3621DA8 *)Method_System_Collections_Generic_List_Restriction_RangeType__get_Item__);
          v40 = v52;
          if ( (_DWORD)DeckConditionServantNumAndPosition == 2 )
          {
            DeckConditionServantNumAndPosition = (void *)System_Linq_Enumerable__Any_int_(
                                                           v59,
                                                           (const MethodInfo_2FAA400 *)Method_System_Linq_Enumerable_Any_int___);
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
    sub_1C1AE30(DeckConditionServantNumAndPosition, method);
  v65 = *(_QWORD *)&v63->fields.baseSvtId.fields.currentCryptoKey;
  v64 = *(_QWORD *)&v63->fields.baseSvtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v75.fields.currentCryptoKey = v65;
  *(_QWORD *)&v75.fields.fakeValue = v64;
  v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v75, 0LL);
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
        if ( v66 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v76, 0LL) )
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

  if ( (byte_4BC3665 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, *(_QWORD *)&deckMemberCount);
    byte_4BC3665 = 1;
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
    sub_1C1AE30(questRestrictionInfo, v11);
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
      sub_1C1AE38(questRestrictionInfo, v11);
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

  if ( (byte_4BC366B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__ToArray__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long___ctor__, v4);
    sub_1C1ABD4(&System_Collections_Generic_List_long__TypeInfo, v5);
    byte_4BC366B = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
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
      sub_1C1AE38(EquipUserSvtId, v8);
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
          *(const MethodInfo_36248C4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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
    sub_1C1AE30(EquipUserSvtId, v8);
  return System_Collections_Generic_List_long___ToArray(
           v6,
           (const MethodInfo_362637C *)Method_System_Collections_Generic_List_long__ToArray__);
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
  unsigned __int64 i; // x21
  struct PartyOrganizationListViewItem_array *memberList; // x8
  EventUpValInfo_array *v13; // x8

  v6 = this;
  if ( (byte_4BC3672 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, eventId);
    this = (PartyListViewItem_o *)sub_1C1ABD4(&EventUpValInfo___TypeInfo, v7);
    byte_4BC3672 = 1;
  }
  setupInfo = v6->fields.setupInfo;
  if ( setupInfo )
  {
    setupInfo = (struct EventUpValSetupInfo_o *)setupInfo->fields.eventIdList;
    if ( !setupInfo )
LABEL_23:
      sub_1C1AE30(this, eventId);
    v9 = *(_QWORD *)&setupInfo->fields.questPhase;
    if ( v9 )
    {
      if ( !(_DWORD)v9 )
LABEL_24:
        sub_1C1AE38(this, eventId);
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
  *eventUpValList = (EventUpValInfo_array *)sub_1C1AC7C(
                                              EventUpValInfo___TypeInfo,
                                              (unsigned int)v10->static_fields->DeckMemberMax);
  sub_1C1AB78(eventUpValList);
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
  __int64 v25; // x21
  System_Func_object__bool__o *v26; // x23
  struct QuestRestrictionInfo_o *v27; // x8
  System_Collections_Generic_List_Enumerator_int__o v29; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BC3655 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Any_FollowerInfo___, deck);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9);
    sub_1C1ABD4(&System_Func_FollowerInfo__bool__TypeInfo, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11);
    sub_1C1ABD4(&Method_PartyListViewItem___c__DisplayClass32_0__GetFollowerIndex_b__0__, v12);
    sub_1C1ABD4(&PartyListViewItem___c__DisplayClass32_0_TypeInfo, v13);
    byte_4BC3655 = 1;
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
      (const MethodInfo_3620340 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v30 = v29;
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v30,
              (const MethodInfo_33CA42C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
      if ( !v15 )
        break;
      deckInfo = deck->fields.deckInfo;
      if ( !deckInfo )
        sub_1C1AE30(v15, v16);
      svts = deckInfo->fields.svts;
      if ( !svts )
        sub_1C1AE30(v15, v16);
      current = v30.fields._current;
      if ( v30.fields._current - 1 >= svts->max_length )
        sub_1C1AE38(v15, v16);
      v20 = svts->m_Items[v30.fields._current - 1];
      if ( !v20 )
        sub_1C1AE30(v15, v16);
      v21 = this->fields.questRestrictionInfo;
      if ( !v21 )
        sub_1C1AE30(0LL, v16);
      if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction_41685668(v21, v20->fields.initPos, 0LL) )
        goto LABEL_38;
    }
    current = 0;
LABEL_38:
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v30,
      (const MethodInfo_33CA428 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    v25 = sub_1C1AE20(PartyListViewItem___c__DisplayClass32_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v25, 0LL);
    if ( v25 )
    {
      *(_DWORD *)(v25 + 16) = current;
      v26 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v26,
        (Il2CppObject *)v25,
        Method_PartyListViewItem___c__DisplayClass32_0__GetFollowerIndex_b__0__,
        0LL);
      if ( !BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)fixNpcFollowerInfoList,
              (System_Func_T__bool__o *)v26,
              (const MethodInfo_2F8A3FC *)Method_BasicHelper_Any_FollowerInfo___) )
        return current;
      goto LABEL_31;
    }
LABEL_39:
    sub_1C1AE30(questRestrictionInfo, deck);
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

  if ( (byte_4BC3671 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    byte_4BC3671 = 1;
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
      sub_1C1AE30(v5, method);
    if ( v3 >= memberList->max_length )
      sub_1C1AE38(v5, method);
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

  if ( (byte_4BC3670 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    sub_1C1ABD4(&bool___TypeInfo, v3);
    byte_4BC3670 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v6 = (System_Boolean_array *)sub_1C1AC7C(bool___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
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
        sub_1C1AE30(v7, v5);
      if ( i >= v6->max_length )
LABEL_18:
        sub_1C1AE38(v7, v5);
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
    sub_1C1AE30(this, num);
  if ( memberList->max_length <= num )
    sub_1C1AE38(this, *(_QWORD *)&num);
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
    sub_1C1AE30(this, npcSvtIds);
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
        sub_1C1AE38(myServantNumMax, npcSvtIds);
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

  if ( (byte_4BC3667 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4BC3667 = 1;
  }
  menuKind = this->fields.menuKind;
  if ( menuKind == 1 )
    goto LABEL_4;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( menuKind == 3 )
  {
    if ( !questRestrictionInfo )
LABEL_47:
      sub_1C1AE30(questRestrictionInfo, method);
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
        questRestrictionInfo = (QuestRestrictionInfo_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
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
          sub_1C1AE38(questRestrictionInfo, method);
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
  __int64 v15; // x21
  System_Func_object__bool__o *v16; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  int myServantNumMax; // [xsp+Ch] [xbp-64h]

  v4 = this;
  if ( (byte_4BC3656 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, fixNpcFollowerInfoList);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Any_FollowerInfo___, v5);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_FollowerInfo___, v6);
    sub_1C1ABD4(&System_Func_FollowerInfo__bool__TypeInfo, v7);
    sub_1C1ABD4(&Method_PartyListViewItem___c__DisplayClass33_0__GetSupportInitIndex_b__0__, v8);
    this = (PartyListViewItem_o *)sub_1C1ABD4(&PartyListViewItem___c__DisplayClass33_0_TypeInfo, v9);
    byte_4BC3656 = 1;
  }
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_15:
    sub_1C1AE30(this, fixNpcFollowerInfoList);
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
      v15 = sub_1C1AE20(PartyListViewItem___c__DisplayClass33_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0LL);
      if ( !v15 )
        goto LABEL_15;
      *(_DWORD *)(v15 + 16) = ++v13;
      v16 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_FollowerInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v16,
        (Il2CppObject *)v15,
        Method_PartyListViewItem___c__DisplayClass33_0__GetSupportInitIndex_b__0__,
        0LL);
      v17 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)fixNpcFollowerInfoList,
              (System_Func_TSource__bool__o *)v16,
              (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_FollowerInfo___);
      if ( !System_Linq_Enumerable__Any_object_(
              v17,
              (const MethodInfo_2FAA930 *)Method_System_Linq_Enumerable_Any_FollowerInfo___) )
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
  ServantEntity_array *v6; // x20
  unsigned __int64 v7; // x24
  ServantEntity_o **i; // x21
  BalanceConfig_c *v9; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v11; // x8
  ServantEntity_o *servantEntity; // x22
  __int64 v14; // x0

  if ( (byte_4BC366E & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    sub_1C1ABD4(&ServantEntity___TypeInfo, v3);
    byte_4BC366E = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v6 = (ServantEntity_array *)sub_1C1AC7C(ServantEntity___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
  v7 = 0LL;
  for ( i = v6->m_Items; ; ++i )
  {
    v9 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v7 >= v9->static_fields->DeckMemberMax )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_19;
    if ( v7 >= memberList->max_length )
      goto LABEL_20;
    v11 = memberList->m_Items[v7];
    if ( v11 )
    {
      if ( !v6 )
LABEL_19:
        sub_1C1AE30(v9, v5);
      servantEntity = v11->fields.servantEntity;
      if ( servantEntity )
      {
        v9 = (BalanceConfig_c *)sub_1C1AD10(servantEntity, v6->obj.klass->_1.element_class);
        if ( !v9 )
        {
          v14 = sub_1C1AE54();
          sub_1C1ACFC(v14, 0LL);
        }
      }
      if ( v7 >= v6->max_length )
LABEL_20:
        sub_1C1AE38(v9, v5);
      *i = servantEntity;
      sub_1C1AB78(i);
    }
    ++v7;
  }
  return v6;
}


System_String_array *__fastcall PartyListViewItem__GetSvtNameList(PartyListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  System_String_array *v6; // x20
  unsigned __int64 v7; // x23
  System_String_o **i; // x21
  System_String_o *SvtNameText; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyOrganizationListViewItem_o *v11; // x0

  if ( (byte_4BC366F & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    sub_1C1ABD4(&string___TypeInfo, v3);
    byte_4BC366F = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v6 = (System_String_array *)sub_1C1AC7C(string___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
  v7 = 0LL;
  for ( i = v6->m_Items; ; ++i )
  {
    SvtNameText = (System_String_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      SvtNameText = (System_String_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v7 >= *(int *)(*(_QWORD *)&SvtNameText[7].fields + 156LL) )
      break;
    memberList = this->fields.memberList;
    if ( !memberList )
      goto LABEL_17;
    if ( v7 >= memberList->max_length )
      goto LABEL_18;
    v11 = memberList->m_Items[v7];
    if ( v11 )
    {
      SvtNameText = PartyOrganizationListViewItem__get_SvtNameText(v11, 0LL);
      if ( !v6 )
LABEL_17:
        sub_1C1AE30(SvtNameText, v5);
      if ( v7 >= v6->max_length )
LABEL_18:
        sub_1C1AE38(SvtNameText, v5);
      *i = SvtNameText;
      sub_1C1AB78(i);
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
  UserDeckEntity_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  struct PartyOrganizationListViewItem_array *memberList; // x8
  PartyListViewItem_o *v12; // x23
  int32_t max_length; // w22
  int64_t userEquipId; // x20
  DeckServant_o *v15; // x21
  struct DeckServant_o **p_deckInfo; // x20
  struct PartyOrganizationListViewItem_array *v17; // x24
  __int64 v18; // x25
  __int64 v19; // x29
  int v20; // w28
  PartyOrganizationListViewItem_o *v21; // x22
  DeckServantData_o *v22; // x21
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v24; // q0
  struct DeckServantData_array *svts; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  Il2CppClass **v28; // x0
  __int64 v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+40h] [xbp-80h]

  if ( (byte_4BC3669 & 1) == 0 )
  {
    sub_1C1ABD4(&DeckServantData_TypeInfo, baseItem);
    sub_1C1ABD4(&DeckServant_TypeInfo, v5);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_1C1ABD4(&UserDeckEntity_TypeInfo, v7);
    byte_4BC3669 = 1;
  }
  v8 = (UserDeckEntity_o *)sub_1C1AE20(UserDeckEntity_TypeInfo);
  UserDeckEntity___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_29;
  v8->fields.id = this->fields.id;
  v8->fields.deckNo = this->fields.index + 1;
  v8->fields.name = this->fields.deckName;
  v9 = sub_1C1AB78(&v8->fields.name);
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_29;
  v12 = baseItem ? baseItem : this;
  max_length = memberList->max_length;
  userEquipId = v12->fields.userEquipId;
  v15 = (DeckServant_o *)sub_1C1AE20(DeckServant_TypeInfo);
  DeckServant___ctor_40082464(v15, max_length, userEquipId, 0LL);
  v8->fields.deckInfo = v15;
  p_deckInfo = &v8->fields.deckInfo;
  v9 = sub_1C1AB78(&v8->fields.deckInfo);
  v17 = v12->fields.memberList;
  if ( !v17 )
    goto LABEL_29;
  v18 = *(_QWORD *)&v17->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = 0LL;
    v20 = 1;
    while ( 1 )
    {
      v21 = v17->m_Items[v19];
      v22 = (DeckServantData_o *)sub_1C1AE20(DeckServantData_TypeInfo);
      DeckServantData___ctor(v22, 0LL);
      if ( !v22 )
        break;
      v22->fields.id = v20;
      if ( !v21 )
        break;
      userServantEntity = v21->fields.userServantEntity;
      if ( userServantEntity )
      {
        v24 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v34.fields.fakeValue = v24;
      }
      else
      {
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v33, 0LL, 0LL);
        v34 = v33;
      }
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v32 = v34;
      v22->fields.userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v32, 0LL);
      v22->fields.isFollowerSvt = v21->fields.isFollower;
      v22->fields.userSvtEquipIds = PartyOrganizationListViewItem__GetEquipList(v21, 0LL);
      v9 = sub_1C1AB78(&v22->fields.userSvtEquipIds);
      v22->fields.initPos = v21->fields._InitPos_k__BackingField;
      if ( !*p_deckInfo )
        break;
      svts = (*p_deckInfo)->fields.svts;
      if ( !svts )
        break;
      v26 = sub_1C1AD10(v22, svts->obj.klass->_1.element_class);
      if ( !v26 )
      {
        v31 = sub_1C1AE54();
        sub_1C1ACFC(v31, 0LL);
      }
      if ( v20 - 1 < svts->max_length )
      {
        v28 = &svts->obj.klass + v19;
        v28[4] = (Il2CppClass *)v22;
        v26 = sub_1C1AB78(v28 + 4);
        if ( (_DWORD)v18 == v20 )
          return v8;
        v19 = v20;
        if ( v20++ < v17->max_length )
          continue;
      }
      sub_1C1AE38(v26, v27);
    }
LABEL_29:
    sub_1C1AE30(v9, v10);
  }
  return v8;
}


UserEventDeckEntity_o *__fastcall PartyListViewItem__GetUserEventDeck(
        PartyListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserEventDeckEntity_o *v7; // x20
  __int64 v8; // x1
  __int64 IsUseOldMaster; // x0
  struct PartyOrganizationListViewItem_array *memberList; // x22
  int64_t userEquipId; // x21
  DeckServant_o *v12; // x0
  int32_t max_length; // w1
  struct DeckServant_o *v14; // x22
  struct DeckServant_o **p_deckInfo; // x21
  struct PartyOrganizationListViewItem_array *v16; // x8
  unsigned __int64 v17; // x28
  unsigned __int64 v18; // x9
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  PartyOrganizationListViewItem_o *v20; // x22
  struct QuestRestrictionInfo_o *v21; // x8
  _BOOL4 isNpcEditablePos; // w23
  _BOOL4 IsEditablePos; // w0
  DeckServantData_o *v24; // x24
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v26; // q0
  int32_t InitPos_k__BackingField; // w8
  int v28; // w8
  unsigned int *svts; // x22
  unsigned int *v30; // x0
  __int64 v32; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34[2]; // [xsp+20h] [xbp-A0h] BYREF

  if ( (byte_4BC366A & 1) == 0 )
  {
    sub_1C1ABD4(&DeckServantData_TypeInfo, method);
    sub_1C1ABD4(&DeckServant_TypeInfo, v3);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v4);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1C1ABD4(&UserEventDeckEntity_TypeInfo, v6);
    byte_4BC366A = 1;
  }
  memset(&v34[1], 0, sizeof(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o));
  v7 = (UserEventDeckEntity_o *)sub_1C1AE20(UserEventDeckEntity_TypeInfo);
  UserEventDeckEntity___ctor(v7, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v8);
    byte_4BC2585 = 1;
  }
  IsUseOldMaster = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    IsUseOldMaster = (__int64)NetworkManager_TypeInfo;
  }
  if ( !v7 )
    goto LABEL_55;
  v7->fields.userId = *(_QWORD *)(*(_QWORD *)(IsUseOldMaster + 184) + 64LL);
  v7->fields.eventId = this->fields.id;
  v7->fields.deckNo = this->fields.index + 1;
  memberList = this->fields.memberList;
  if ( !memberList )
    goto LABEL_55;
  userEquipId = this->fields.userEquipId;
  v12 = (DeckServant_o *)sub_1C1AE20(DeckServant_TypeInfo);
  max_length = memberList->max_length;
  v14 = v12;
  DeckServant___ctor_40082464(v12, max_length, userEquipId, 0LL);
  v7->fields.deckInfo = v14;
  p_deckInfo = &v7->fields.deckInfo;
  IsUseOldMaster = sub_1C1AB78(&v7->fields.deckInfo);
  v16 = this->fields.memberList;
  if ( !v16 )
LABEL_55:
    sub_1C1AE30(IsUseOldMaster, v8);
  v17 = 0LL;
  while ( 1 )
  {
    v18 = v16->max_length;
    if ( (__int64)v17 >= (int)v18 )
      return v7;
    if ( v17 >= v18 )
      goto LABEL_56;
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v20 = v16->m_Items[v17];
    if ( !questRestrictionInfo )
    {
      isNpcEditablePos = 0;
      goto LABEL_28;
    }
    IsUseOldMaster = QuestRestrictionInfo__IsUseOldMaster(questRestrictionInfo, 0LL);
    v21 = this->fields.questRestrictionInfo;
    if ( (IsUseOldMaster & 1) != 0 )
    {
      if ( !v21 )
        goto LABEL_55;
      isNpcEditablePos = v21->fields.isNpcEditablePos;
    }
    else
    {
      if ( !v20 || !v21 )
        goto LABEL_55;
      IsEditablePos = QuestRestrictionInfo__IsEditablePos(
                        this->fields.questRestrictionInfo,
                        v20->fields._InitPos_k__BackingField,
                        0LL);
      v21 = this->fields.questRestrictionInfo;
      isNpcEditablePos = IsEditablePos;
      if ( !v21 )
        goto LABEL_28;
    }
    IsUseOldMaster = QuestRestrictionInfo__IsNpcMulitipleOrOnly(v21, 0LL);
    if ( (IsUseOldMaster & 1) != 0 )
    {
      if ( !v20 )
        goto LABEL_55;
      if ( v20->fields.isFixNpc
        && v20->fields.isFollower
        && !isNpcEditablePos
        && !v20->fields.isMyServantOrNpcRestriction )
      {
        ++v17;
        goto LABEL_51;
      }
    }
LABEL_28:
    v24 = (DeckServantData_o *)sub_1C1AE20(DeckServantData_TypeInfo);
    DeckServantData___ctor(v24, 0LL);
    if ( !v24 )
      goto LABEL_55;
    v24->fields.id = v17 + 1;
    if ( !v20 )
      goto LABEL_55;
    userServantEntity = v20->fields.userServantEntity;
    if ( userServantEntity )
    {
      v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v34[1].fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v34[1].fields.fakeValue = v26;
    }
    else
    {
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v34, 0LL, 0LL);
      v34[1] = v34[0];
    }
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v33 = v34[1];
    v24->fields.userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v33, 0LL);
    v24->fields.isFollowerSvt = v20->fields.isFollower;
    v24->fields.userSvtEquipIds = PartyOrganizationListViewItem__GetEquipList(v20, 0LL);
    IsUseOldMaster = sub_1C1AB78(&v24->fields.userSvtEquipIds);
    InitPos_k__BackingField = v20->fields._InitPos_k__BackingField;
    v24->fields.npcFollowerSvtId = 0LL;
    v24->fields.initPos = InitPos_k__BackingField;
    if ( v24->fields.userSvtId )
    {
      v28 = 0;
LABEL_43:
      if ( (isNpcEditablePos & v28 & 1) != 0 )
      {
        v24->fields.npcFollowerSvtId = v20->fields.npcFollowerSvtId;
        if ( v20->fields.isFixNpc )
          v24->fields.isFollowerSvt = 0;
      }
      goto LABEL_46;
    }
    if ( !v20->fields.isMyServantOrNpcRestriction || !v20->fields.isFollower )
    {
      v28 = !v20->fields.isMyServantOrNpcRestriction;
      goto LABEL_43;
    }
    v24->fields.npcFollowerSvtId = v20->fields.npcFollowerSvtId;
LABEL_46:
    if ( !*p_deckInfo )
      goto LABEL_55;
    svts = (unsigned int *)(*p_deckInfo)->fields.svts;
    if ( !svts )
      goto LABEL_55;
    IsUseOldMaster = sub_1C1AD10(v24, *(_QWORD *)(*(_QWORD *)svts + 64LL));
    if ( !IsUseOldMaster )
    {
      v32 = sub_1C1AE54();
      sub_1C1ACFC(v32, 0LL);
    }
    if ( v17 >= svts[6] )
LABEL_56:
      sub_1C1AE38(IsUseOldMaster, v8);
    v30 = &svts[2 * v17];
    *((_QWORD *)v30 + 4) = v24;
    IsUseOldMaster = sub_1C1AB78(v30 + 8);
    ++v17;
LABEL_51:
    v16 = this->fields.memberList;
    if ( !v16 )
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

  if ( (byte_4BC3654 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, userServantList);
    byte_4BC3654 = 1;
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
        sub_1C1AE30(v6, userServantList);
      if ( i >= npcSvtIds->max_length )
LABEL_17:
        sub_1C1AE38(v6, userServantList);
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
      sub_1C1AE30(this, userSvtId);
    v6 = 0LL;
    while ( 1 )
    {
      max_length = memberList->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
        sub_1C1AE38(this, userSvtId);
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

  if ( (byte_4BC3662 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    byte_4BC3662 = 1;
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
      sub_1C1AE38(v3, method);
    v8 = memberList->m_Items[v5];
    if ( !v8 )
LABEL_12:
      sub_1C1AE30(v3, method);
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

  if ( (byte_4BC3661 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    byte_4BC3661 = 1;
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
      sub_1C1AE38(v3, method);
    v6 = memberList->m_Items[i];
    if ( !v6 )
LABEL_15:
      sub_1C1AE30(v3, method);
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

  if ( (byte_4BC3663 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    byte_4BC3663 = 1;
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
      sub_1C1AE38(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[v5];
    if ( !v4 )
LABEL_12:
      sub_1C1AE30(v4, method);
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
  if ( (byte_4BC366C & 1) == 0 )
  {
    this = (PartyListViewItem_o *)sub_1C1ABD4(
                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                    *(_QWORD *)&svtId);
    byte_4BC366C = 1;
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
          sub_1C1AE38(this, *(_QWORD *)&svtId);
        this = (PartyListViewItem_o *)memberList->m_Items[v7];
        if ( !this )
          break;
        EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId((PartyOrganizationListViewItem_o *)this, 0LL);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(EquipSvtId, 0LL) == svtId;
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
      sub_1C1AE30(this, *(_QWORD *)&svtId);
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

  if ( (byte_4BC3653 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, deck);
    byte_4BC3653 = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
LABEL_29:
    sub_1C1AE30(questRestrictionInfo, deck);
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
      sub_1C1AE38(questRestrictionInfo, deck);
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
      if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_41685668(
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


bool __fastcall PartyListViewItem__IsSpecificMenuKind_32867972(
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

  if ( (byte_4BC3660 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    byte_4BC3660 = 1;
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
    sub_1C1AE38(v4, method);
  v4 = memberList->m_Items[0];
  if ( !v4 )
LABEL_16:
    sub_1C1AE30(v4, method);
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

  if ( (byte_4BC3659 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, method);
    byte_4BC3659 = 1;
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
      sub_1C1AE38(v4, method);
    v4 = (BalanceConfig_c *)memberList->m_Items[v5];
    if ( !v4 )
LABEL_12:
      sub_1C1AE30(v4, method);
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
  int v7; // w23
  il2cpp_array_size_t v8; // w24
  struct PartyOrganizationListViewItem_array *memberList; // x8
  struct PartyOrganizationListViewItem_array *v10; // x26
  PartyOrganizationListViewItem_o *v11; // x21
  Il2CppClass **v12; // x0
  struct PartyOrganizationListViewItem_array *v13; // x8
  PartyOrganizationListViewItem_o *v14; // x8
  struct System_Int32_array **p_waveBattleEnemyClassIds; // x20
  __int64 v16; // x0

  if ( (byte_4BC365A & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, item);
    byte_4BC365A = 1;
  }
  ListViewItem__Set((ListViewItem_o *)this, (ListViewItem_o *)item, 0LL);
  if ( !item )
LABEL_20:
    sub_1C1AE30(v5, v6);
  *(_QWORD *)&this->fields.menuKind = *(_QWORD *)&item->fields.menuKind;
  this->fields.setupInfo = item->fields.setupInfo;
  sub_1C1AB78(&this->fields.setupInfo);
  this->fields.questRestrictionInfo = item->fields.questRestrictionInfo;
  sub_1C1AB78(&this->fields.questRestrictionInfo);
  v7 = 1;
  this->fields.id = item->fields.id;
  while ( 1 )
  {
    v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    v8 = v7 - 1;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v5 = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)v8 >= *(_DWORD *)(*(_QWORD *)&v5->fields.classId + 156LL) )
      break;
    memberList = item->fields.memberList;
    if ( !memberList )
      goto LABEL_20;
    if ( v8 >= memberList->max_length )
      goto LABEL_21;
    v5 = memberList->m_Items[v8];
    if ( !v5 )
      goto LABEL_20;
    v10 = this->fields.memberList;
    v5 = PartyOrganizationListViewItem__Clone(v5, -1, 0LL);
    if ( !v10 )
      goto LABEL_20;
    v11 = v5;
    if ( v5 )
    {
      v5 = (PartyOrganizationListViewItem_o *)sub_1C1AD10(v5, v10->obj.klass->_1.element_class);
      if ( !v5 )
      {
        v16 = sub_1C1AE54();
        sub_1C1ACFC(v16, 0LL);
      }
    }
    if ( v8 >= v10->max_length )
      goto LABEL_21;
    v12 = &v10->obj.klass + (int)v8;
    v12[4] = (Il2CppClass *)v11;
    v5 = (PartyOrganizationListViewItem_o *)sub_1C1AB78(v12 + 4);
    v13 = this->fields.memberList;
    if ( !v13 )
      goto LABEL_20;
    if ( v8 >= v13->max_length )
LABEL_21:
      sub_1C1AE38(v5, v6);
    v14 = v13->m_Items[v8];
    if ( !v14 )
      goto LABEL_20;
    v14->fields._NowPos_k__BackingField = v7++;
  }
  this->fields.cost = item->fields.cost;
  this->fields.isDeckNameDefault = item->fields.isDeckNameDefault;
  this->fields.deckName = item->fields.deckName;
  sub_1C1AB78(&this->fields.deckName);
  this->fields.userEquipId = item->fields.userEquipId;
  this->fields.waveBattleEnemyClassIds = item->fields.waveBattleEnemyClassIds;
  p_waveBattleEnemyClassIds = &this->fields.waveBattleEnemyClassIds;
  sub_1C1AB78(p_waveBattleEnemyClassIds);
  *((_BYTE *)p_waveBattleEnemyClassIds + 8) = item->fields._IsWaveBattleRestart_k__BackingField;
  *((_BYTE *)p_waveBattleEnemyClassIds + 9) = item->fields._IsClearedWave_k__BackingField;
}


void __fastcall PartyListViewItem__SetDeckName(
        PartyListViewItem_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_String_o *DefaultDeckName; // x0
  struct System_String_o **p_deckName; // x19

  if ( System_String__IsNullOrEmpty(name, 0LL)
    || (DefaultDeckName = PartyListViewItem__get_DefaultDeckName(this, v5),
        System_String__op_Equality(name, DefaultDeckName, 0LL)) )
  {
    this->fields.isDeckNameDefault = 1;
    this->fields.deckName = PartyListViewItem__get_DefaultDeckName(this, v5);
    p_deckName = &this->fields.deckName;
  }
  else
  {
    this->fields.deckName = name;
    p_deckName = &this->fields.deckName;
    *((_BYTE *)p_deckName - 4) = 0;
  }
  sub_1C1AB78(p_deckName);
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

  if ( (byte_4BC365B & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, *(_QWORD *)&num);
    byte_4BC365B = 1;
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
      sub_1C1AE38(v8, *(_QWORD *)&num);
    v10 = &memberList->obj.klass + (int)i;
    v11 = (PartyOrganizationListViewItem_o *)v10[4];
    if ( !v11 )
LABEL_15:
      sub_1C1AE30(v8, *(_QWORD *)&num);
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
    || (PartyOrganizationListViewItem__Modify_32989708((PartyOrganizationListViewItem_o *)this, item, 0LL),
        (v10 = v6->fields.memberList) == 0LL) )
  {
LABEL_11:
    sub_1C1AE30(this, *(_QWORD *)&num);
  }
  if ( v10->max_length <= num )
LABEL_12:
    sub_1C1AE38(this, *(_QWORD *)&num);
  this = (PartyListViewItem_o *)v10->m_Items[num];
  if ( !this )
    goto LABEL_11;
  v11 = v6->fields.cost;
  v6->fields.cost = PartyOrganizationListViewItem__get_MargeCost((PartyOrganizationListViewItem_o *)this, 0LL) + v11;
  PartyListViewItem__CheckRestriction(v6, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItem__SetMember_32867996(
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
    sub_1C1AE30(this, *(_QWORD *)&idx);
  }
  if ( member )
  {
    this = (PartyListViewItem_o *)sub_1C1AD10(member, v9->obj.klass->_1.element_class);
    if ( !this )
    {
      v14 = sub_1C1AE54();
      sub_1C1ACFC(v14, 0LL);
    }
  }
  if ( v9->max_length <= idx )
    goto LABEL_18;
  v10 = &v9->obj.klass + idx;
  v10[4] = (Il2CppClass *)member;
  this = (PartyListViewItem_o *)sub_1C1AB78(v10 + 4);
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
    sub_1C1AE38(this, *(_QWORD *)&idx);
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
    sub_1C1AE30(this, follower);
  max_length = npcFollowerInfoList->max_length;
  v9 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = this;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1C1AE38(this, follower);
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
        this = (PartyListViewItem_o *)QuestRestrictionInfo__IsRestriction_41667260(
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
          this = (PartyListViewItem_o *)QuestRestrictionInfo__IsRestrictionServantIndividuality_41688668(
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
    sub_1C1AB78(follower);
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
  Il2CppClass **v18; // x0
  const MethodInfo *v19; // x1
  __int64 v20; // x0

  if ( (byte_4BC365C & 1) == 0 )
  {
    sub_1C1ABD4(&PartyOrganizationListViewItem_TypeInfo, *(_QWORD *)&num);
    sub_1C1ABD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v11);
    byte_4BC365C = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance
    || (PartyOrganizationUtility__SetNpcFollowerInfo((PartyOrganizationUtility_o *)Instance, initPos, follower, 0LL),
        memberList = this->fields.memberList,
        setupInfo = this->fields.setupInfo,
        questRestrictionInfo = this->fields.questRestrictionInfo,
        v17 = (PartyOrganizationListViewItem_o *)sub_1C1AE20(PartyOrganizationListViewItem_TypeInfo),
        PartyOrganizationListViewItem___ctor_32949872(
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
    sub_1C1AE30(Instance, v13);
  }
  if ( v17 )
  {
    Instance = (Il2CppObject *)sub_1C1AD10(v17, memberList->obj.klass->_1.element_class);
    if ( !Instance )
    {
      v20 = sub_1C1AE54();
      sub_1C1ACFC(v20, 0LL);
    }
  }
  if ( memberList->max_length <= num )
    sub_1C1AE38(Instance, v13);
  v18 = &memberList->obj.klass + num;
  v18[4] = (Il2CppClass *)v17;
  sub_1C1AB78(v18 + 4);
  PartyListViewItem__CheckRestriction(this, v19);
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
    sub_1C1AE38(this, *(_QWORD *)&num1);
  this = (PartyListViewItem_o *)memberList->m_Items[num1];
  if ( !this )
LABEL_7:
    sub_1C1AE30(this, num1);
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
        sub_1C1AE38(this, method);
      this = (PartyListViewItem_o *)memberList->m_Items[v4];
      if ( !this )
        break;
      PartyOrganizationListViewItem__UpdateEventEffect((PartyOrganizationListViewItem_o *)this, 0LL);
      max_length = memberList->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1C1AE30(this, method);
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
        sub_1C1AE38(this, method);
      this = (PartyListViewItem_o *)memberList->m_Items[v4];
      if ( !this )
        break;
      PartyOrganizationListViewItem__UpdateServantInfo((PartyOrganizationListViewItem_o *)this, 0LL);
      max_length = memberList->max_length;
      if ( (int)++v4 >= max_length )
        return;
    }
LABEL_9:
    sub_1C1AE30(this, method);
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

  if ( (byte_4BC366D & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_10469/*"PARTY_ORGANIZATION_NAME_BASE"*/, v3);
    byte_4BC366D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_10469/*"PARTY_ORGANIZATION_NAME_BASE"*/, 0LL);
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
    sub_1C1AE30(this, 0LL);
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
    sub_1C1AE30(this, 0LL);
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
    sub_1C1AE30(this, 0LL);
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
    sub_1C1AE30(this, 0LL);
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
    sub_1C1AE30(this, 0LL);
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
    sub_1C1AE30(this, 0LL);
  return x->fields.npcInitIdx == this->fields.chkIdx;
}