void __fastcall BattleSetupInfo___ctor(BattleSetupInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSetupInfo___ctor_29930344(
        BattleSetupInfo_o *this,
        BattleSetupInfo_BattleSetupSaveInfo_o *saveInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_String_o *demoInfo; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  struct System_String_o *choiceRandomLimitCounts; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveInfo )
    sub_B2C434(v5, v6);
  this->fields.warId = saveInfo->fields.warId;
  this->fields.questId = saveInfo->fields.questId;
  this->fields.questPhase = saveInfo->fields.questPhase;
  this->fields.deckId = saveInfo->fields.deckId;
  this->fields.followerId = saveInfo->fields.followerId;
  this->fields.followerClassId = saveInfo->fields.followerClassId;
  this->fields.itemId = saveInfo->fields.itemId;
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.demoInfo,
    (System_Int32_array **)demoInfo,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.selectedBranchIdx = saveInfo->fields.selectedBranchIdx;
  this->fields.followerType = saveInfo->fields.followerType;
  this->fields.originQuestId = saveInfo->fields.originQuestId;
  BattleSetupInfo__SetEventUpValues(this, v14);
  BattleSetupInfo__SetRestriction(this, 0, v15);
  BattleSetupInfo__SetSelectableQuests(this, v16);
  this->fields.followrRandomLimitCount = saveInfo->fields.followrRandomLimitCount;
  choiceRandomLimitCounts = saveInfo->fields.choiceRandomLimitCounts;
  this->fields.choiceRandomLimitCounts = choiceRandomLimitCounts;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.choiceRandomLimitCounts,
    (System_Int32_array **)choiceRandomLimitCounts,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.followerSpoilerProtectionLimitCount = saveInfo->fields.followerSpoilerProtectionLimitCount;
  this->fields.isScriptBeforeWarBoard = saveInfo->fields.isScriptBeforeWarBoard;
  this->fields.followerSupportDeckId = saveInfo->fields.followerSupportDeckId;
  this->fields.campaignItemId = saveInfo->fields.campaignItemId;
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
  __int64 v18; // x1
  __int64 v19; // x20
  clsQuestCheck_o *Instance; // x0
  __int64 v21; // x1
  bool v22; // w8
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x1
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_418A592 & 1) == 0 )
  {
    sub_B2C35C(&BattleSetupInfo_TypeInfo, *(_QWORD *)&warId);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v16);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v17);
    sub_B2C35C(&StringLiteral_1/*""*/, v18);
    byte_418A592 = 1;
  }
  v19 = sub_B2C42C(BattleSetupInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_14;
  *(_DWORD *)(v19 + 16) = warId;
  *(_DWORD *)(v19 + 20) = qId;
  *(_DWORD *)(v19 + 124) = selectedBranch;
  *(_DWORD *)(v19 + 24) = qPhase;
  if ( !isScriptBeforePartySelect )
  {
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( Instance )
    {
      v22 = clsQuestCheck__mfCheck_IsQuestNew(Instance, qId, 0LL);
      goto LABEL_11;
    }
LABEL_14:
    sub_B2C434(Instance, v21);
  }
  v22 = 0;
LABEL_11:
  *(_BYTE *)(v19 + 72) = v22;
  *(_QWORD *)(v19 + 40) = 0LL;
  *(_QWORD *)(v19 + 48) = 0LL;
  *(_DWORD *)(v19 + 56) = 0;
  *(_BYTE *)(v19 + 73) = isScriptBeforePartySelect;
  Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (clsQuestCheck_o *)BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)v19, v24);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  *(_DWORD *)(v19 + 76) = QuestGroupMaster__GetEventId(MasterData_WarQuestSelectionMaster, (int32_t)Instance, 0LL);
  BattleSetupInfo__SetEventUpValues((BattleSetupInfo_o *)v19, v25);
  BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)v19, 1, v26);
  BattleSetupInfo__SetSelectableQuests((BattleSetupInfo_o *)v19, v27);
  *(_DWORD *)(v19 + 136) = 0;
  v28 = (System_Int32_array **)StringLiteral_1/*""*/;
  *(_QWORD *)(v19 + 144) = StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)(v19 + 144), v28, v29, v30, v31, v32, v33, v34);
  *(_DWORD *)(v19 + 152) = 0;
  *(_BYTE *)(v19 + 156) = isScriptBeforeWarBoard;
  return (BattleSetupInfo_o *)v19;
}


BattleSetupInfo_BattleSetupSaveInfo_o *__fastcall BattleSetupInfo__GetInfoForSave(
        BattleSetupInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **demoInfo; // x1
  System_Int32_array **choiceRandomLimitCounts; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleSetupInfo_BattleSetupSaveInfo_o *result; // x0

  if ( (byte_418A58E & 1) == 0 )
  {
    sub_B2C35C(&BattleSetupInfo_BattleSetupSaveInfo_TypeInfo, method);
    byte_418A58E = 1;
  }
  v3 = sub_B2C42C(BattleSetupInfo_BattleSetupSaveInfo_TypeInfo);
  BattleSetupInfo_BattleSetupSaveInfo___ctor((BattleSetupInfo_BattleSetupSaveInfo_o *)v3, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_DWORD *)(v3 + 16) = this->fields.warId;
  *(_DWORD *)(v3 + 20) = this->fields.questId;
  *(_DWORD *)(v3 + 24) = this->fields.questPhase;
  *(_QWORD *)(v3 + 32) = this->fields.deckId;
  *(_QWORD *)(v3 + 40) = this->fields.followerId;
  *(_DWORD *)(v3 + 48) = this->fields.followerClassId;
  *(_DWORD *)(v3 + 52) = this->fields.itemId;
  *(_DWORD *)(v3 + 56) = this->fields.boostId;
  *(_QWORD *)(v3 + 64) = this->fields.userEquipId;
  *(_BYTE *)(v3 + 72) = this->fields.isQuestNew;
  *(_BYTE *)(v3 + 73) = this->fields.isScriptBeforePartySelect;
  *(_BYTE *)(v3 + 74) = this->fields.isChildFollower;
  *(_DWORD *)(v3 + 76) = this->fields.eventId;
  *(_BYTE *)(v3 + 80) = this->fields.battleBefore;
  *(_BYTE *)(v3 + 81) = this->fields.isBefore;
  demoInfo = (System_Int32_array **)this->fields.demoInfo;
  *(_QWORD *)(v3 + 88) = demoInfo;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 88), demoInfo, v6, v7, v8, v9, v10, v11);
  *(_DWORD *)(v3 + 96) = this->fields.selectedBranchIdx;
  *(_DWORD *)(v3 + 100) = this->fields.followerType;
  *(_DWORD *)(v3 + 104) = this->fields.originQuestId;
  *(_DWORD *)(v3 + 108) = this->fields.followrRandomLimitCount;
  choiceRandomLimitCounts = (System_Int32_array **)this->fields.choiceRandomLimitCounts;
  *(_QWORD *)(v3 + 112) = choiceRandomLimitCounts;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 112), choiceRandomLimitCounts, v14, v15, v16, v17, v18, v19);
  result = (BattleSetupInfo_BattleSetupSaveInfo_o *)v3;
  *(_DWORD *)(v3 + 120) = this->fields.followerSpoilerProtectionLimitCount;
  *(_BYTE *)(v3 + 124) = this->fields.isScriptBeforeWarBoard;
  *(_DWORD *)(v3 + 128) = this->fields.followerSupportDeckId;
  *(_DWORD *)(v3 + 132) = this->fields.campaignItemId;
  return result;
}


void __fastcall BattleSetupInfo__SetEventUpValues(BattleSetupInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  EventDetailEntity_o *Entity; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w0
  int32_t questPhase; // w20
  int32_t eventId; // w21
  int32_t v13; // w22
  EventUpValSetupInfo_o *v14; // x23
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_418A58F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v3);
    sub_B2C35C(&EventUpValSetupInfo_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418A58F = 1;
  }
  if ( this->fields.eventId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
    {
      sub_B2C434(Instance, v7);
    }
    Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.eventId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( Entity )
    {
      if ( EventDetailEntity__IsBonusSkill(Entity, 0LL) )
      {
        v10 = BattleSetupInfo__TargetQuestId(this, v9);
        questPhase = this->fields.questPhase;
        eventId = this->fields.eventId;
        v13 = v10;
        v14 = (EventUpValSetupInfo_o *)sub_B2C42C(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor(v14, v13, questPhase, eventId, 0LL);
        this->fields.eventUpValSetupInfo = v14;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.eventUpValSetupInfo,
          (System_Int32_array **)v14,
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v18; // x1
  UserGameEntity_o *v19; // x20
  int64_t ActiveUserEquipId; // x0
  int64_t activeDeckId; // x8

  if ( (byte_418A590 & 1) == 0 )
  {
    sub_B2C35C(&QuestRestrictionInfo_TypeInfo, isResetDeck);
    byte_418A590 = 1;
  }
  eventId = this->fields.eventId;
  v6 = BattleSetupInfo__TargetQuestId(this, (const MethodInfo *)isResetDeck);
  questPhase = this->fields.questPhase;
  v8 = v6;
  v9 = (QuestRestrictionInfo_o *)sub_B2C42C(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_31206600(v9, eventId, v8, questPhase, 0LL);
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = v9;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)v9,
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
    sub_B2C434(SelfUserGame, v18);
  }
}


void __fastcall BattleSetupInfo__SetSelectableQuests(BattleSetupInfo_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  struct System_Int32_array *SelectableQuests; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A591 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418A591 = 1;
  }
  this->fields.selectableQuestIds = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.selectableQuestIds, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.selectableRouteQuestId = 0;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.selectableQuestIds,
          (System_Int32_array **)SelectableQuests,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        (Instance = (DataManager_o *)entity) == 0LL) )
  {
LABEL_10:
    sub_B2C434(Instance, v11);
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
  __int64 v8; // x0

  selectableQuestIds = this->fields.selectableQuestIds;
  if ( selectableQuestIds )
  {
    selectedBranchIdx = this->fields.selectedBranchIdx;
    max_length = selectableQuestIds->max_length;
    if ( (int)selectedBranchIdx < max_length )
    {
      if ( (unsigned int)selectedBranchIdx >= max_length )
      {
        v8 = sub_B2C460(this);
        sub_B2C400(v8, 0LL);
      }
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