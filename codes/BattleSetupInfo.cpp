void __fastcall BattleSetupInfo___ctor(BattleSetupInfo_o *this, const MethodInfo *method)
{
  this->fields.needFirstOpenAutoOrganizationConfirmDialog = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSetupInfo___ctor_38761052(
        BattleSetupInfo_o *this,
        BattleSetupInfo_BattleSetupSaveInfo_o *saveInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_String_o *demoInfo; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  struct System_String_o *choiceRandomLimitCounts; // x1
  struct System_String_o **p_choiceRandomLimitCounts; // x20
  int32_t v15; // w2
  int32_t v16; // w3

  this->fields.needFirstOpenAutoOrganizationConfirmDialog = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveInfo )
    sub_1B8880C(v5, v6);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.demoInfo, (int32_t)demoInfo, v7, v8);
  *(_QWORD *)&this->fields.selectedBranchIdx = *(_QWORD *)&saveInfo->fields.selectedBranchIdx;
  this->fields.originQuestId = saveInfo->fields.originQuestId;
  BattleSetupInfo__SetEventUpValues(this, v10);
  BattleSetupInfo__SetRestriction(this, 0, v11);
  BattleSetupInfo__SetSelectableQuests(this, v12);
  this->fields.followrRandomLimitCount = saveInfo->fields.followrRandomLimitCount;
  choiceRandomLimitCounts = saveInfo->fields.choiceRandomLimitCounts;
  this->fields.choiceRandomLimitCounts = choiceRandomLimitCounts;
  p_choiceRandomLimitCounts = &this->fields.choiceRandomLimitCounts;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)p_choiceRandomLimitCounts,
    (int32_t)choiceRandomLimitCounts,
    v15,
    v16);
  *((_DWORD *)p_choiceRandomLimitCounts + 2) = saveInfo->fields.followerSpoilerProtectionLimitCount;
  *((_BYTE *)p_choiceRandomLimitCounts + 12) = saveInfo->fields.isScriptBeforeWarBoard;
  *((_OWORD *)p_choiceRandomLimitCounts + 1) = *(_OWORD *)&saveInfo->fields.recommendSupportIdx;
}


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
  __int64 v14; // x20
  bool v15; // w0
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3

  if ( (byte_4A5AC5C & 1) == 0 )
  {
    sub_1B885B0(&BattleSetupInfo_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AC5C = 1;
  }
  v14 = sub_1B887FC(BattleSetupInfo_TypeInfo);
  *(_BYTE *)(v14 + 177) = 1;
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  *(_DWORD *)(v14 + 16) = warId;
  *(_DWORD *)(v14 + 20) = qId;
  *(_DWORD *)(v14 + 124) = selectedBranch;
  *(_DWORD *)(v14 + 24) = qPhase;
  if ( isScriptBeforePartySelect )
  {
    v15 = 0;
  }
  else
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    v15 = clsQuestCheck__mfCheck_IsQuestNew((clsQuestCheck_o *)Instance, qId, 0LL);
  }
  *(_QWORD *)(v14 + 40) = 0LL;
  *(_QWORD *)(v14 + 48) = 0LL;
  *(_BYTE *)(v14 + 72) = v15;
  *(_BYTE *)(v14 + 73) = isScriptBeforePartySelect;
  *(_DWORD *)(v14 + 56) = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___),
        Instance = (Il2CppObject *)BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)v14, v19),
        !MasterData_object) )
  {
LABEL_10:
    sub_1B8880C(Instance, v17);
  }
  *(_DWORD *)(v14 + 76) = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)MasterData_object, (int32_t)Instance, 0LL);
  BattleSetupInfo__SetEventUpValues((BattleSetupInfo_o *)v14, v20);
  BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)v14, 1, v21);
  BattleSetupInfo__SetSelectableQuests((BattleSetupInfo_o *)v14, v22);
  *(_DWORD *)(v14 + 136) = 0;
  v23 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v14 + 144) = StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 144), v23, v24, v25);
  *(_DWORD *)(v14 + 152) = 0;
  *(_BYTE *)(v14 + 156) = isScriptBeforeWarBoard;
  return (BattleSetupInfo_o *)v14;
}


BattleSetupInfo_BattleSetupSaveInfo_o *__fastcall BattleSetupInfo__GetInfoForSave(
        BattleSetupInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_String_o *demoInfo; // x1
  struct System_String_o *choiceRandomLimitCounts; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  BattleSetupInfo_BattleSetupSaveInfo_o *result; // x0

  if ( (byte_4A5AC58 & 1) == 0 )
  {
    sub_1B885B0(&BattleSetupInfo_BattleSetupSaveInfo_TypeInfo);
    byte_4A5AC58 = 1;
  }
  v3 = sub_1B887FC(BattleSetupInfo_BattleSetupSaveInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 88), (int32_t)demoInfo, v6, v7);
  *(_OWORD *)(v3 + 96) = *(_OWORD *)&this->fields.selectedBranchIdx;
  choiceRandomLimitCounts = this->fields.choiceRandomLimitCounts;
  *(_QWORD *)(v3 + 112) = choiceRandomLimitCounts;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 112), (int32_t)choiceRandomLimitCounts, v10, v11);
  result = (BattleSetupInfo_BattleSetupSaveInfo_o *)v3;
  *(_DWORD *)(v3 + 120) = this->fields.followerSpoilerProtectionLimitCount;
  *(_BYTE *)(v3 + 124) = this->fields.isScriptBeforeWarBoard;
  *(_OWORD *)(v3 + 128) = *(_OWORD *)&this->fields.recommendSupportIdx;
  return result;
}


void __fastcall BattleSetupInfo__SetEventUpValues(BattleSetupInfo_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w0
  int32_t questPhase; // w20
  int32_t eventId; // w21
  int32_t v10; // w22
  EventUpValSetupInfo_o *v11; // x23
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5AC59 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1B885B0(&EventUpValSetupInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AC59 = 1;
  }
  if ( this->fields.eventId >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
    {
      sub_1B8880C(Instance, v4);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.eventId,
               (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( Entity )
    {
      if ( EventDetailEntity__IsBonusSkill((EventDetailEntity_o *)Entity, 0LL) )
      {
        v7 = BattleSetupInfo__TargetQuestId(this, v6);
        questPhase = this->fields.questPhase;
        eventId = this->fields.eventId;
        v10 = v7;
        v11 = (EventUpValSetupInfo_o *)sub_1B887FC(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor(v11, v10, questPhase, eventId, 0LL);
        this->fields.eventUpValSetupInfo = v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventUpValSetupInfo, (int32_t)v11, v12, v13);
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
  int32_t v11; // w2
  int32_t v12; // w3
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v14; // x1
  UserGameEntity_o *v15; // x20
  int64_t ActiveUserEquipId; // x0
  int64_t activeDeckId; // x8

  if ( (byte_4A5AC5A & 1) == 0 )
  {
    sub_1B885B0(&QuestRestrictionInfo_TypeInfo);
    byte_4A5AC5A = 1;
  }
  eventId = this->fields.eventId;
  v6 = BattleSetupInfo__TargetQuestId(this, (const MethodInfo *)isResetDeck);
  questPhase = this->fields.questPhase;
  v8 = v6;
  v9 = (QuestRestrictionInfo_o *)sub_1B887FC(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_40416380(v9, eventId, v8, questPhase, 0LL);
  this->fields.questRestrictionInfo = v9;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.questRestrictionInfo, (int32_t)v9, v11, v12);
  if ( isResetDeck )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !*p_questRestrictionInfo )
      goto LABEL_19;
    v15 = SelfUserGame;
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
      if ( v15 )
      {
        ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(v15, 0LL);
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
      if ( v15 )
      {
        activeDeckId = v15->fields.activeDeckId;
        goto LABEL_15;
      }
    }
LABEL_19:
    sub_1B8880C(SelfUserGame, v14);
  }
}


void __fastcall BattleSetupInfo__SetSelectableQuests(BattleSetupInfo_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct System_Int32_array *SelectableQuests; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5AC5B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AC5B = 1;
  }
  this->fields.selectableQuestIds = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectableQuestIds, 0, v2, v3);
  this->fields.selectableRouteQuestId = 0;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.selectableQuestIds,
          (int32_t)SelectableQuests,
          v8,
          v9),
        (Instance = (DataManager_o *)entity) == 0LL) )
  {
LABEL_10:
    sub_1B8880C(Instance, v6);
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
        sub_1B88814(this, method);
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