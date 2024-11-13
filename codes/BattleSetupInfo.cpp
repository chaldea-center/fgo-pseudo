void __fastcall BattleSetupInfo___ctor(BattleSetupInfo_o *this, const MethodInfo *method)
{
  this->fields.needFirstOpenAutoOrganizationConfirmDialog = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSetupInfo___ctor_39477656(
        BattleSetupInfo_o *this,
        BattleSetupInfo_BattleSetupSaveInfo_o *saveInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_String_o *demoInfo; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  struct System_String_o *choiceRandomLimitCounts; // x1
  struct System_String_o **p_choiceRandomLimitCounts; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  this->fields.needFirstOpenAutoOrganizationConfirmDialog = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveInfo )
    sub_1BCAA3C(v5, v6);
  *(_QWORD *)&this->fields.warId = *(_QWORD *)&saveInfo->fields.warId;
  this->fields.questPhase = saveInfo->fields.questPhase;
  *(_OWORD *)&this->fields.deckId = *(_OWORD *)&saveInfo->fields.deckId;
  *(_QWORD *)&this->fields.followerClassId = *(_QWORD *)&saveInfo->fields.followerClassId;
  this->fields.boostId = saveInfo->fields.boostId;
  this->fields.userEquipId = saveInfo->fields.userEquipId;
  this->fields.isQuestNew = saveInfo->fields.isQuestNew;
  this->fields.isScriptBeforePartySelect = saveInfo->fields.isScriptBeforePartySelect;
  this->fields.isChildFollower = saveInfo->fields.isChildFollower;
  this->fields.eventId = saveInfo->fields.eventId;
  this->fields.battleBefore = saveInfo->fields.battleBefore;
  this->fields.isBefore = saveInfo->fields.isBefore;
  demoInfo = saveInfo->fields.demoInfo;
  this->fields.demoInfo = demoInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.demoInfo, (int64_t)demoInfo, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)&this->fields.selectedBranchIdx = *(_QWORD *)&saveInfo->fields.selectedBranchIdx;
  this->fields.originQuestId = saveInfo->fields.originQuestId;
  BattleSetupInfo__SetEventUpValues(this, v14);
  BattleSetupInfo__SetRestriction(this, 0, v15);
  BattleSetupInfo__SetSelectableQuests(this, v16);
  this->fields.followrRandomLimitCount = saveInfo->fields.followrRandomLimitCount;
  choiceRandomLimitCounts = saveInfo->fields.choiceRandomLimitCounts;
  this->fields.choiceRandomLimitCounts = choiceRandomLimitCounts;
  p_choiceRandomLimitCounts = &this->fields.choiceRandomLimitCounts;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)p_choiceRandomLimitCounts,
    (int64_t)choiceRandomLimitCounts,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  *((_DWORD *)p_choiceRandomLimitCounts + 2) = saveInfo->fields.followerSpoilerProtectionLimitCount;
  *((_BYTE *)p_choiceRandomLimitCounts + 12) = saveInfo->fields.isScriptBeforeWarBoard;
  *((_OWORD *)p_choiceRandomLimitCounts + 1) = *(_OWORD *)&saveInfo->fields.recommendSupportIdx;
}


// local variable allocation has failed, the output may be wrong!
BattleSetupInfo_o *__fastcall BattleSetupInfo__ConvertBattleSetupInfo(
        BattleSetupInfo_o *this,
        int32_t warId,
        int32_t qId,
        int32_t qPhase,
        bool isScriptBeforePartySelect,
        bool isScriptBeforeWarBoard,
        int32_t selectedBranch,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x20
  bool v23; // w0
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x1
  void *v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4B15CE1 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSetupInfo_TypeInfo, *(_QWORD *)&warId, *(_QWORD *)&qId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v18, v19);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v20, v21);
    byte_4B15CE1 = 1;
  }
  v22 = sub_1BCAA2C(BattleSetupInfo_TypeInfo, *(_QWORD *)&warId, *(_QWORD *)&qId, *(_QWORD *)&qPhase);
  *(_BYTE *)(v22 + 177) = 1;
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  *(_DWORD *)(v22 + 16) = warId;
  *(_DWORD *)(v22 + 20) = qId;
  *(_DWORD *)(v22 + 124) = selectedBranch;
  *(_DWORD *)(v22 + 24) = qPhase;
  if ( isScriptBeforePartySelect )
  {
    v23 = 0;
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    v23 = clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)Instance, qId, 0LL);
  }
  *(_QWORD *)(v22 + 40) = 0LL;
  *(_QWORD *)(v22 + 48) = 0LL;
  *(_BYTE *)(v22 + 72) = v23;
  *(_BYTE *)(v22 + 73) = isScriptBeforePartySelect;
  *(_DWORD *)(v22 + 56) = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___),
        Instance = (Il2CppObject *)BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)v22, v27),
        !MasterData_object) )
  {
LABEL_10:
    sub_1BCAA3C(Instance, v25);
  }
  *(_DWORD *)(v22 + 76) = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)MasterData_object, (int32_t)Instance, 0LL);
  BattleSetupInfo__SetEventUpValues((BattleSetupInfo_o *)v22, v28);
  BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)v22, 1, v29);
  BattleSetupInfo__SetSelectableQuests((BattleSetupInfo_o *)v22, v30);
  *(_DWORD *)(v22 + 136) = 0;
  v31 = StringLiteral_1/*""*/;
  *(_QWORD *)(v22 + 144) = StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 144), (int64_t)v31, v32, v33, v34, v35, v36, v37);
  *(_DWORD *)(v22 + 152) = 0;
  *(_BYTE *)(v22 + 156) = isScriptBeforeWarBoard;
  return (BattleSetupInfo_o *)v22;
}


BattleSetupInfo_BattleSetupSaveInfo_o *__fastcall BattleSetupInfo__GetInfoForSave(
        BattleSetupInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_String_o *demoInfo; // x1
  struct System_String_o *choiceRandomLimitCounts; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  BattleSetupInfo_BattleSetupSaveInfo_o *result; // x0

  if ( (byte_4B15CDD & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSetupInfo_BattleSetupSaveInfo_TypeInfo, method, v2);
    byte_4B15CDD = 1;
  }
  v5 = sub_1BCAA2C(BattleSetupInfo_BattleSetupSaveInfo_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 16) = *(_QWORD *)&this->fields.warId;
  *(_DWORD *)(v5 + 24) = this->fields.questPhase;
  *(_OWORD *)(v5 + 32) = *(_OWORD *)&this->fields.deckId;
  *(_QWORD *)(v5 + 48) = *(_QWORD *)&this->fields.followerClassId;
  *(_DWORD *)(v5 + 56) = this->fields.boostId;
  *(_QWORD *)(v5 + 64) = this->fields.userEquipId;
  *(_BYTE *)(v5 + 72) = this->fields.isQuestNew;
  *(_BYTE *)(v5 + 73) = this->fields.isScriptBeforePartySelect;
  *(_BYTE *)(v5 + 74) = this->fields.isChildFollower;
  *(_DWORD *)(v5 + 76) = this->fields.eventId;
  *(_BYTE *)(v5 + 80) = this->fields.battleBefore;
  *(_BYTE *)(v5 + 81) = this->fields.isBefore;
  demoInfo = this->fields.demoInfo;
  *(_QWORD *)(v5 + 88) = demoInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 88), (int64_t)demoInfo, v8, v9, v10, v11, v12, v13);
  *(_OWORD *)(v5 + 96) = *(_OWORD *)&this->fields.selectedBranchIdx;
  choiceRandomLimitCounts = this->fields.choiceRandomLimitCounts;
  *(_QWORD *)(v5 + 112) = choiceRandomLimitCounts;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 112), (int64_t)choiceRandomLimitCounts, v16, v17, v18, v19, v20, v21);
  result = (BattleSetupInfo_BattleSetupSaveInfo_o *)v5;
  *(_DWORD *)(v5 + 120) = this->fields.followerSpoilerProtectionLimitCount;
  *(_BYTE *)(v5 + 124) = this->fields.isScriptBeforeWarBoard;
  *(_OWORD *)(v5 + 128) = *(_OWORD *)&this->fields.recommendSupportIdx;
  return result;
}


void __fastcall BattleSetupInfo__SetEventUpValues(BattleSetupInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v13; // x1
  int32_t v14; // w0
  int32_t questPhase; // w20
  int32_t eventId; // w21
  int32_t v17; // w22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  EventUpValSetupInfo_o *v21; // x23
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B15CDE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&EventUpValSetupInfo_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B15CDE = 1;
  }
  if ( this->fields.eventId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
    {
      sub_1BCAA3C(Instance, v11);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.eventId,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( Entity )
    {
      if ( EventDetailEntity__IsBonusSkill((EventDetailEntity_o *)Entity, 0LL) )
      {
        v14 = BattleSetupInfo__TargetQuestId(this, v13);
        questPhase = this->fields.questPhase;
        eventId = this->fields.eventId;
        v17 = v14;
        v21 = (EventUpValSetupInfo_o *)sub_1BCAA2C(EventUpValSetupInfo_TypeInfo, v18, v19, v20);
        EventUpValSetupInfo___ctor(v21, v17, questPhase, eventId, 0LL);
        this->fields.eventUpValSetupInfo = v21;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.eventUpValSetupInfo,
          (int64_t)v21,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSetupInfo__SetRestriction(BattleSetupInfo_o *this, bool isResetDeck, const MethodInfo *method)
{
  int32_t eventId; // w21
  int32_t v6; // w0
  int32_t questPhase; // w22
  int32_t v8; // w23
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  QuestRestrictionInfo_o *v12; // x24
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v21; // x1
  UserGameEntity_o *v22; // x20
  int64_t ActiveUserEquipId; // x0
  int64_t activeDeckId; // x8

  if ( (byte_4B15CDF & 1) == 0 )
  {
    sub_1BCA7E0(&QuestRestrictionInfo_TypeInfo, isResetDeck, method);
    byte_4B15CDF = 1;
  }
  eventId = this->fields.eventId;
  v6 = BattleSetupInfo__TargetQuestId(this, (const MethodInfo *)isResetDeck);
  questPhase = this->fields.questPhase;
  v8 = v6;
  v12 = (QuestRestrictionInfo_o *)sub_1BCAA2C(QuestRestrictionInfo_TypeInfo, v9, v10, v11);
  QuestRestrictionInfo___ctor_41151748(v12, eventId, v8, questPhase, 0LL);
  this->fields.questRestrictionInfo = v12;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo,
    (int64_t)v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( isResetDeck )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !*p_questRestrictionInfo )
      goto LABEL_19;
    v22 = SelfUserGame;
    if ( (*p_questRestrictionInfo)->fields.isNoSupportBattle )
      goto LABEL_13;
    SelfUserGame = (UserGameEntity_o *)QuestRestrictionInfo__IsSupportOnly(*p_questRestrictionInfo, 0LL);
    if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
      goto LABEL_13;
    SelfUserGame = (UserGameEntity_o *)*p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_19;
    SelfUserGame = (UserGameEntity_o *)QuestRestrictionInfo__IsServantNum((QuestRestrictionInfo_o *)SelfUserGame, 0LL);
    if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
      goto LABEL_13;
    SelfUserGame = (UserGameEntity_o *)*p_questRestrictionInfo;
    if ( !*p_questRestrictionInfo )
      goto LABEL_19;
    SelfUserGame = (UserGameEntity_o *)QuestRestrictionInfo__IsNpcMulitipleOrOnly(
                                         (QuestRestrictionInfo_o *)SelfUserGame,
                                         0LL);
    if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
      goto LABEL_13;
    if ( !*p_questRestrictionInfo )
      goto LABEL_19;
    if ( (*p_questRestrictionInfo)->fields.eventDeckNum >= 1 )
    {
LABEL_13:
      if ( v22 )
      {
        ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(v22, 0LL);
        activeDeckId = 0LL;
        this->fields.userEquipId = ActiveUserEquipId;
LABEL_15:
        this->fields.deckId = activeDeckId;
        this->fields.isChildFollower = 0;
        return;
      }
    }
    else
    {
      this->fields.userEquipId = 0LL;
      if ( v22 )
      {
        activeDeckId = v22->fields.activeDeckId;
        goto LABEL_15;
      }
    }
LABEL_19:
    sub_1BCAA3C(SelfUserGame, v21);
  }
}


void __fastcall BattleSetupInfo__SetSelectableQuests(BattleSetupInfo_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct System_Int32_array *SelectableQuests; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15CE0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B15CE0 = 1;
  }
  this->fields.selectableQuestIds = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectableQuestIds, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.selectableRouteQuestId = 0;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !QuestPhaseMaster__TryGetEntity(
          (QuestPhaseMaster_o *)Instance,
          &entity,
          this->fields.questId,
          this->fields.questPhase,
          0LL) )
    return;
  Instance = (DataManager_o *)entity;
  if ( !entity
    || (SelectableQuests = QuestPhaseEntity__GetSelectableQuests(entity, 0LL),
        this->fields.selectableQuestIds = SelectableQuests,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.selectableQuestIds,
          (int64_t)SelectableQuests,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        (Instance = (DataManager_o *)entity) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(Instance, v12);
  }
  this->fields.selectableRouteQuestId = QuestPhaseEntity__GetQuestPhaseSelectRoute(entity, 0LL);
}


int32_t __fastcall BattleSetupInfo__TargetQuestBranchIdx(BattleSetupInfo_o *this, const MethodInfo *method)
{
  struct System_Int32_array *selectableQuestIds; // x8

  selectableQuestIds = this->fields.selectableQuestIds;
  if ( !selectableQuestIds )
    return 0;
  if ( this->fields.selectedBranchIdx >= (signed int)selectableQuestIds->max_length )
    return 0;
  return this->fields.selectedBranchIdx;
}


int32_t __fastcall BattleSetupInfo__TargetQuestId(BattleSetupInfo_o *this, const MethodInfo *method)
{
  struct System_Int32_array *selectableQuestIds; // x8
  __int64 selectedBranchIdx; // x9
  int max_length; // w10
  int32_t *p_questId; // x8
  int32_t selectableRouteQuestId; // w8

  selectableQuestIds = this->fields.selectableQuestIds;
  if ( selectableQuestIds )
  {
    selectedBranchIdx = this->fields.selectedBranchIdx;
    max_length = selectableQuestIds->max_length;
    if ( (int)selectedBranchIdx < max_length )
    {
      if ( (unsigned int)selectedBranchIdx >= max_length )
        sub_1BCAA44(this, method);
      p_questId = &selectableQuestIds->m_Items[selectedBranchIdx + 1];
      return *p_questId;
    }
  }
  selectableRouteQuestId = this->fields.selectableRouteQuestId;
  if ( !selectableRouteQuestId )
  {
    p_questId = &this->fields.questId;
    return *p_questId;
  }
  return selectableRouteQuestId;
}


void __fastcall BattleSetupInfo_BattleSetupSaveInfo___ctor(
        BattleSetupInfo_BattleSetupSaveInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}