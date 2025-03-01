void __fastcall BattleSetupInfo___ctor(BattleSetupInfo_o *this, const MethodInfo *method)
{
  this->fields.needFirstOpenAutoOrganizationConfirmDialog = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSetupInfo___ctor_40086428(
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Int32_array *useRewardAddItemIds; // x1
  struct System_Int32_array **p_useRewardAddItemIds; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  this->fields.needFirstOpenAutoOrganizationConfirmDialog = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveInfo )
    sub_1C2E388(v5, v6);
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
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.demoInfo, (int64_t)demoInfo, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)&this->fields.selectedBranchIdx = *(_QWORD *)&saveInfo->fields.selectedBranchIdx;
  this->fields.originQuestId = saveInfo->fields.originQuestId;
  BattleSetupInfo__SetEventUpValues(this, v14);
  BattleSetupInfo__SetRestriction(this, 0, v15);
  BattleSetupInfo__SetSelectableQuests(this, v16);
  this->fields.followrRandomLimitCount = saveInfo->fields.followrRandomLimitCount;
  choiceRandomLimitCounts = saveInfo->fields.choiceRandomLimitCounts;
  this->fields.choiceRandomLimitCounts = choiceRandomLimitCounts;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.choiceRandomLimitCounts,
    (int64_t)choiceRandomLimitCounts,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.followerSpoilerProtectionLimitCount = saveInfo->fields.followerSpoilerProtectionLimitCount;
  this->fields.isScriptBeforeWarBoard = saveInfo->fields.isScriptBeforeWarBoard;
  *(_QWORD *)&this->fields.recommendSupportIdx = *(_QWORD *)&saveInfo->fields.recommendSupportIdx;
  this->fields.campaignItemId = saveInfo->fields.campaignItemId;
  useRewardAddItemIds = saveInfo->fields.useRewardAddItemIds;
  this->fields.useRewardAddItemIds = useRewardAddItemIds;
  p_useRewardAddItemIds = &this->fields.useRewardAddItemIds;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)p_useRewardAddItemIds,
    (int64_t)useRewardAddItemIds,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  *((_DWORD *)p_useRewardAddItemIds + 2) = saveInfo->fields.restartWave;
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
  bool v19; // w0
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x1
  void *v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4BFD22B & 1) == 0 )
  {
    sub_1C2E12C(&BattleSetupInfo_TypeInfo, *(_QWORD *)&warId);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v14);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1C2E12C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v16);
    sub_1C2E12C(&StringLiteral_1/*""*/, v17);
    byte_4BFD22B = 1;
  }
  v18 = sub_1C2E378(BattleSetupInfo_TypeInfo);
  *(_BYTE *)(v18 + 189) = 1;
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  *(_DWORD *)(v18 + 16) = warId;
  *(_DWORD *)(v18 + 20) = qId;
  *(_DWORD *)(v18 + 124) = selectedBranch;
  *(_DWORD *)(v18 + 24) = qPhase;
  if ( isScriptBeforePartySelect )
  {
    v19 = 0;
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    v19 = clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)Instance, qId, 0LL);
  }
  *(_QWORD *)(v18 + 40) = 0LL;
  *(_QWORD *)(v18 + 48) = 0LL;
  *(_BYTE *)(v18 + 72) = v19;
  *(_BYTE *)(v18 + 73) = isScriptBeforePartySelect;
  *(_DWORD *)(v18 + 56) = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestGroupMaster___),
        Instance = (Il2CppObject *)BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)v18, v23),
        !MasterData_object) )
  {
LABEL_10:
    sub_1C2E388(Instance, v21);
  }
  *(_DWORD *)(v18 + 76) = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)MasterData_object, (int32_t)Instance, 0LL);
  BattleSetupInfo__SetEventUpValues((BattleSetupInfo_o *)v18, v24);
  BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)v18, 1, v25);
  BattleSetupInfo__SetSelectableQuests((BattleSetupInfo_o *)v18, v26);
  *(_DWORD *)(v18 + 136) = 0;
  v27 = StringLiteral_1/*""*/;
  *(_QWORD *)(v18 + 144) = StringLiteral_1/*""*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v18 + 144), (int64_t)v27, v28, v29, v30, v31, v32, v33);
  *(_DWORD *)(v18 + 152) = 0;
  *(_BYTE *)(v18 + 156) = isScriptBeforeWarBoard;
  return (BattleSetupInfo_o *)v18;
}


BattleSetupInfo_BattleSetupSaveInfo_o *__fastcall BattleSetupInfo__GetInfoForSave(
        BattleSetupInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_String_o *demoInfo; // x1
  struct System_String_o *choiceRandomLimitCounts; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Int32_array *useRewardAddItemIds; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  BattleSetupInfo_BattleSetupSaveInfo_o *result; // x0

  if ( (byte_4BFD227 & 1) == 0 )
  {
    sub_1C2E12C(&BattleSetupInfo_BattleSetupSaveInfo_TypeInfo, method);
    byte_4BFD227 = 1;
  }
  v3 = sub_1C2E378(BattleSetupInfo_BattleSetupSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    sub_1C2E388(v4, v5);
  *(_QWORD *)(v3 + 16) = *(_QWORD *)&this->fields.warId;
  *(_DWORD *)(v3 + 24) = this->fields.questPhase;
  *(_OWORD *)(v3 + 32) = *(_OWORD *)&this->fields.deckId;
  *(_QWORD *)(v3 + 48) = *(_QWORD *)&this->fields.followerClassId;
  *(_DWORD *)(v3 + 56) = this->fields.boostId;
  *(_QWORD *)(v3 + 64) = this->fields.userEquipId;
  *(_BYTE *)(v3 + 72) = this->fields.isQuestNew;
  *(_BYTE *)(v3 + 73) = this->fields.isScriptBeforePartySelect;
  *(_BYTE *)(v3 + 74) = this->fields.isChildFollower;
  *(_DWORD *)(v3 + 76) = this->fields.eventId;
  *(_BYTE *)(v3 + 80) = this->fields.battleBefore;
  *(_BYTE *)(v3 + 81) = this->fields.isBefore;
  demoInfo = this->fields.demoInfo;
  *(_QWORD *)(v3 + 88) = demoInfo;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v3 + 88), (int64_t)demoInfo, v6, v7, v8, v9, v10, v11);
  *(_OWORD *)(v3 + 96) = *(_OWORD *)&this->fields.selectedBranchIdx;
  choiceRandomLimitCounts = this->fields.choiceRandomLimitCounts;
  *(_QWORD *)(v3 + 112) = choiceRandomLimitCounts;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v3 + 112), (int64_t)choiceRandomLimitCounts, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v3 + 120) = this->fields.followerSpoilerProtectionLimitCount;
  *(_BYTE *)(v3 + 124) = this->fields.isScriptBeforeWarBoard;
  *(_QWORD *)(v3 + 128) = *(_QWORD *)&this->fields.recommendSupportIdx;
  *(_DWORD *)(v3 + 136) = this->fields.campaignItemId;
  useRewardAddItemIds = this->fields.useRewardAddItemIds;
  *(_QWORD *)(v3 + 144) = useRewardAddItemIds;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v3 + 144), (int64_t)useRewardAddItemIds, v21, v22, v23, v24, v25, v26);
  result = (BattleSetupInfo_BattleSetupSaveInfo_o *)v3;
  *(_DWORD *)(v3 + 140) = this->fields.restartWave;
  return result;
}


void __fastcall BattleSetupInfo__SetEventUpValues(BattleSetupInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w0
  int32_t questPhase; // w20
  int32_t eventId; // w21
  int32_t v13; // w22
  EventUpValSetupInfo_o *v14; // x23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4BFD228 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1C2E12C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v3);
    sub_1C2E12C(&EventUpValSetupInfo_TypeInfo, v4);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BFD228 = 1;
  }
  if ( this->fields.eventId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
    {
      sub_1C2E388(Instance, v7);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.eventId,
               (const MethodInfo_327B180 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( Entity )
    {
      if ( EventDetailEntity__IsBonusSkill((EventDetailEntity_o *)Entity, 0LL) )
      {
        v10 = BattleSetupInfo__TargetQuestId(this, v9);
        questPhase = this->fields.questPhase;
        eventId = this->fields.eventId;
        v13 = v10;
        v14 = (EventUpValSetupInfo_o *)sub_1C2E378(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor(v14, v13, questPhase, eventId, 0LL);
        this->fields.eventUpValSetupInfo = v14;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&this->fields.eventUpValSetupInfo,
          (int64_t)v14,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
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
  QuestRestrictionInfo_o *v9; // x24
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v18; // x1
  UserGameEntity_o *v19; // x20
  int64_t ActiveUserEquipId; // x0
  int64_t activeDeckId; // x8

  if ( (byte_4BFD229 & 1) == 0 )
  {
    sub_1C2E12C(&QuestRestrictionInfo_TypeInfo, isResetDeck);
    byte_4BFD229 = 1;
  }
  eventId = this->fields.eventId;
  v6 = BattleSetupInfo__TargetQuestId(this, (const MethodInfo *)isResetDeck);
  questPhase = this->fields.questPhase;
  v8 = v6;
  v9 = (QuestRestrictionInfo_o *)sub_1C2E378(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_41781356(v9, eventId, v8, questPhase, 0LL);
  this->fields.questRestrictionInfo = v9;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo,
    (int64_t)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( isResetDeck )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !*p_questRestrictionInfo )
      goto LABEL_19;
    v19 = SelfUserGame;
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
      if ( v19 )
      {
        ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(v19, 0LL);
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
      if ( v19 )
      {
        activeDeckId = v19->fields.activeDeckId;
        goto LABEL_15;
      }
    }
LABEL_19:
    sub_1C2E388(SelfUserGame, v18);
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
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  struct System_Int32_array *SelectableQuests; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BFD22A & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, method);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BFD22A = 1;
  }
  this->fields.selectableQuestIds = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.selectableQuestIds, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.selectableRouteQuestId = 0;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&this->fields.selectableQuestIds,
          (int64_t)SelectableQuests,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        (Instance = (DataManager_o *)entity) == 0LL) )
  {
LABEL_10:
    sub_1C2E388(Instance, v11);
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
        sub_1C2E390(this, method);
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