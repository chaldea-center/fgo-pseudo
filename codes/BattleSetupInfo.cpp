void __fastcall BattleSetupInfo___ctor(BattleSetupInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSetupInfo___ctor_38445928(
        BattleSetupInfo_o *this,
        BattleSetupInfo_BattleSetupSaveInfo_o *saveInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_String_o *demoInfo; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  struct System_String_o *choiceRandomLimitCounts; // x1
  struct System_String_o **p_choiceRandomLimitCounts; // x20
  int32_t v14; // w2
  int32_t v15; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveInfo )
    sub_1B64324(v5);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.demoInfo, (int32_t)demoInfo, v6, v7);
  *(_QWORD *)&this->fields.selectedBranchIdx = *(_QWORD *)&saveInfo->fields.selectedBranchIdx;
  this->fields.originQuestId = saveInfo->fields.originQuestId;
  BattleSetupInfo__SetEventUpValues(this, v9);
  BattleSetupInfo__SetRestriction(this, 0, v10);
  BattleSetupInfo__SetSelectableQuests(this, v11);
  this->fields.followrRandomLimitCount = saveInfo->fields.followrRandomLimitCount;
  choiceRandomLimitCounts = saveInfo->fields.choiceRandomLimitCounts;
  this->fields.choiceRandomLimitCounts = choiceRandomLimitCounts;
  p_choiceRandomLimitCounts = &this->fields.choiceRandomLimitCounts;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)p_choiceRandomLimitCounts,
    (int32_t)choiceRandomLimitCounts,
    v14,
    v15);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
  Il2CppObject *Instance; // x0
  bool v20; // w0
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x1
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_49FBF1A & 1) == 0 )
  {
    sub_1B640C8(&BattleSetupInfo_TypeInfo, *(_QWORD *)&warId);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v16);
    sub_1B640C8(&StringLiteral_1/*""*/, v17);
    byte_49FBF1A = 1;
  }
  v18 = sub_1B64314(BattleSetupInfo_TypeInfo, *(_QWORD *)&warId, *(_QWORD *)&qId);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_11;
  *(_DWORD *)(v18 + 16) = warId;
  *(_DWORD *)(v18 + 20) = qId;
  *(_DWORD *)(v18 + 124) = selectedBranch;
  *(_DWORD *)(v18 + 24) = qPhase;
  if ( isScriptBeforePartySelect )
  {
    v20 = 0;
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !Instance )
      goto LABEL_11;
    v20 = clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)Instance, qId, 0LL);
  }
  *(_QWORD *)(v18 + 40) = 0LL;
  *(_QWORD *)(v18 + 48) = 0LL;
  *(_BYTE *)(v18 + 72) = v20;
  *(_BYTE *)(v18 + 73) = isScriptBeforePartySelect;
  *(_DWORD *)(v18 + 56) = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestGroupMaster___),
        Instance = (Il2CppObject *)BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)v18, v22),
        !MasterData_object) )
  {
LABEL_11:
    sub_1B64324(Instance);
  }
  *(_DWORD *)(v18 + 76) = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)MasterData_object, (int32_t)Instance, 0LL);
  BattleSetupInfo__SetEventUpValues((BattleSetupInfo_o *)v18, v23);
  BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)v18, 1, v24);
  BattleSetupInfo__SetSelectableQuests((BattleSetupInfo_o *)v18, v25);
  *(_DWORD *)(v18 + 136) = 0;
  v26 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v18 + 144) = StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 144), v26, v27, v28);
  *(_DWORD *)(v18 + 152) = 0;
  *(_BYTE *)(v18 + 156) = isScriptBeforeWarBoard;
  return (BattleSetupInfo_o *)v18;
}


BattleSetupInfo_BattleSetupSaveInfo_o *__fastcall BattleSetupInfo__GetInfoForSave(
        BattleSetupInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_String_o *demoInfo; // x1
  struct System_String_o *choiceRandomLimitCounts; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  BattleSetupInfo_BattleSetupSaveInfo_o *result; // x0

  if ( (byte_49FBF16 & 1) == 0 )
  {
    sub_1B640C8(&BattleSetupInfo_BattleSetupSaveInfo_TypeInfo, method);
    byte_49FBF16 = 1;
  }
  v4 = sub_1B64314(BattleSetupInfo_BattleSetupSaveInfo_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    sub_1B64324(v5);
  *(_QWORD *)(v4 + 16) = *(_QWORD *)&this->fields.warId;
  *(_DWORD *)(v4 + 24) = this->fields.questPhase;
  *(_OWORD *)(v4 + 32) = *(_OWORD *)&this->fields.deckId;
  *(_QWORD *)(v4 + 48) = *(_QWORD *)&this->fields.followerClassId;
  *(_DWORD *)(v4 + 56) = this->fields.boostId;
  *(_QWORD *)(v4 + 64) = this->fields.userEquipId;
  *(_BYTE *)(v4 + 72) = this->fields.isQuestNew;
  *(_BYTE *)(v4 + 73) = this->fields.isScriptBeforePartySelect;
  *(_BYTE *)(v4 + 74) = this->fields.isChildFollower;
  *(_DWORD *)(v4 + 76) = this->fields.eventId;
  *(_BYTE *)(v4 + 80) = this->fields.battleBefore;
  *(_BYTE *)(v4 + 81) = this->fields.isBefore;
  demoInfo = this->fields.demoInfo;
  *(_QWORD *)(v4 + 88) = demoInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 88), (int32_t)demoInfo, v6, v7);
  *(_OWORD *)(v4 + 96) = *(_OWORD *)&this->fields.selectedBranchIdx;
  choiceRandomLimitCounts = this->fields.choiceRandomLimitCounts;
  *(_QWORD *)(v4 + 112) = choiceRandomLimitCounts;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 112), (int32_t)choiceRandomLimitCounts, v10, v11);
  result = (BattleSetupInfo_BattleSetupSaveInfo_o *)v4;
  *(_DWORD *)(v4 + 120) = this->fields.followerSpoilerProtectionLimitCount;
  *(_BYTE *)(v4 + 124) = this->fields.isScriptBeforeWarBoard;
  *(_OWORD *)(v4 + 128) = *(_OWORD *)&this->fields.recommendSupportIdx;
  return result;
}


void __fastcall BattleSetupInfo__SetEventUpValues(BattleSetupInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0
  const MethodInfo *v8; // x1
  int32_t v9; // w0
  int32_t questPhase; // w20
  int32_t eventId; // w21
  int32_t v12; // w22
  __int64 v13; // x1
  __int64 v14; // x2
  EventUpValSetupInfo_o *v15; // x23
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_49FBF17 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v3);
    sub_1B640C8(&EventUpValSetupInfo_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FBF17 = 1;
  }
  if ( this->fields.eventId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
    {
      sub_1B64324(Instance);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.eventId,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( Entity )
    {
      if ( EventDetailEntity__IsBonusSkill((EventDetailEntity_o *)Entity, 0LL) )
      {
        v9 = BattleSetupInfo__TargetQuestId(this, v8);
        questPhase = this->fields.questPhase;
        eventId = this->fields.eventId;
        v12 = v9;
        v15 = (EventUpValSetupInfo_o *)sub_1B64314(EventUpValSetupInfo_TypeInfo, v13, v14);
        EventUpValSetupInfo___ctor(v15, v12, questPhase, eventId, 0LL);
        this->fields.eventUpValSetupInfo = v15;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventUpValSetupInfo, (int32_t)v15, v16, v17);
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
  QuestRestrictionInfo_o *v11; // x24
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v16; // x20
  int64_t ActiveUserEquipId; // x0
  int64_t activeDeckId; // x8

  if ( (byte_49FBF18 & 1) == 0 )
  {
    sub_1B640C8(&QuestRestrictionInfo_TypeInfo, isResetDeck);
    byte_49FBF18 = 1;
  }
  eventId = this->fields.eventId;
  v6 = BattleSetupInfo__TargetQuestId(this, (const MethodInfo *)isResetDeck);
  questPhase = this->fields.questPhase;
  v8 = v6;
  v11 = (QuestRestrictionInfo_o *)sub_1B64314(QuestRestrictionInfo_TypeInfo, v9, v10);
  QuestRestrictionInfo___ctor_40081728(v11, eventId, v8, questPhase, 0LL);
  this->fields.questRestrictionInfo = v11;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo, (int32_t)v11, v13, v14);
  if ( isResetDeck )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !*p_questRestrictionInfo )
      goto LABEL_19;
    v16 = SelfUserGame;
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
      if ( v16 )
      {
        ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(v16, 0LL);
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
      if ( v16 )
      {
        activeDeckId = v16->fields.activeDeckId;
        goto LABEL_15;
      }
    }
LABEL_19:
    sub_1B64324(SelfUserGame);
  }
}


void __fastcall BattleSetupInfo__SetSelectableQuests(BattleSetupInfo_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  struct System_Int32_array *SelectableQuests; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FBF19 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FBF19 = 1;
  }
  this->fields.selectableQuestIds = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectableQuestIds, 0, v2, v3);
  this->fields.selectableRouteQuestId = 0;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields.selectableQuestIds,
          (int32_t)SelectableQuests,
          v8,
          v9),
        (Instance = (DataManager_o *)entity) == 0LL) )
  {
LABEL_10:
    sub_1B64324(Instance);
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
        sub_1B6432C(this, method);
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