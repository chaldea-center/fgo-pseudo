void __fastcall BattleSetupInfo___ctor(BattleSetupInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSetupInfo___ctor_29943608(
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
    sub_B5D69C(v5, v6);
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
  sub_B5D560(
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
  sub_B5D560(
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
  this->fields.restartWave = saveInfo->fields.restartWave;
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  __int64 v29; // x20
  clsQuestCheck_o *Instance; // x0
  __int64 v31; // x1
  bool v32; // w8
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x1
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_42EB2B8 & 1) == 0 )
  {
    sub_B5D5C4(&BattleSetupInfo_TypeInfo, warId, qId, *(_QWORD *)&qPhase);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_1/*""*/, v26, v27, v28);
    byte_42EB2B8 = 1;
  }
  v29 = sub_B5D694(BattleSetupInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_14;
  *(_DWORD *)(v29 + 16) = warId;
  *(_DWORD *)(v29 + 20) = qId;
  *(_DWORD *)(v29 + 124) = selectedBranch;
  *(_DWORD *)(v29 + 24) = qPhase;
  if ( !isScriptBeforePartySelect )
  {
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( Instance )
    {
      v32 = clsQuestCheck__mfCheck_IsQuestNew(Instance, qId, 0LL);
      goto LABEL_11;
    }
LABEL_14:
    sub_B5D69C(Instance, v31);
  }
  v32 = 0;
LABEL_11:
  *(_BYTE *)(v29 + 72) = v32;
  *(_QWORD *)(v29 + 40) = 0LL;
  *(_QWORD *)(v29 + 48) = 0LL;
  *(_DWORD *)(v29 + 56) = 0;
  *(_BYTE *)(v29 + 73) = isScriptBeforePartySelect;
  Instance = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  Instance = (clsQuestCheck_o *)BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)v29, v34);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  *(_DWORD *)(v29 + 76) = QuestGroupMaster__GetEventId(MasterData_WarQuestSelectionMaster, (int32_t)Instance, 0LL);
  BattleSetupInfo__SetEventUpValues((BattleSetupInfo_o *)v29, v35);
  BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)v29, 1, v36);
  BattleSetupInfo__SetSelectableQuests((BattleSetupInfo_o *)v29, v37);
  *(_DWORD *)(v29 + 136) = 0;
  v38 = (System_Int32_array **)StringLiteral_1/*""*/;
  *(_QWORD *)(v29 + 144) = StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)(v29 + 144), v38, v39, v40, v41, v42, v43, v44);
  *(_DWORD *)(v29 + 152) = 0;
  *(_BYTE *)(v29 + 156) = isScriptBeforeWarBoard;
  return (BattleSetupInfo_o *)v29;
}


BattleSetupInfo_BattleSetupSaveInfo_o *__fastcall BattleSetupInfo__GetInfoForSave(
        BattleSetupInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **demoInfo; // x1
  System_Int32_array **choiceRandomLimitCounts; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BattleSetupInfo_BattleSetupSaveInfo_o *result; // x0

  if ( (byte_42EB2B4 & 1) == 0 )
  {
    sub_B5D5C4(&BattleSetupInfo_BattleSetupSaveInfo_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB2B4 = 1;
  }
  v5 = sub_B5D694(BattleSetupInfo_BattleSetupSaveInfo_TypeInfo);
  BattleSetupInfo_BattleSetupSaveInfo___ctor((BattleSetupInfo_BattleSetupSaveInfo_o *)v5, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_DWORD *)(v5 + 16) = this->fields.warId;
  *(_DWORD *)(v5 + 20) = this->fields.questId;
  *(_DWORD *)(v5 + 24) = this->fields.questPhase;
  *(_QWORD *)(v5 + 32) = this->fields.deckId;
  *(_QWORD *)(v5 + 40) = this->fields.followerId;
  *(_DWORD *)(v5 + 48) = this->fields.followerClassId;
  *(_DWORD *)(v5 + 52) = this->fields.itemId;
  *(_DWORD *)(v5 + 56) = this->fields.boostId;
  *(_QWORD *)(v5 + 64) = this->fields.userEquipId;
  *(_BYTE *)(v5 + 72) = this->fields.isQuestNew;
  *(_BYTE *)(v5 + 73) = this->fields.isScriptBeforePartySelect;
  *(_BYTE *)(v5 + 74) = this->fields.isChildFollower;
  *(_DWORD *)(v5 + 76) = this->fields.eventId;
  *(_BYTE *)(v5 + 80) = this->fields.battleBefore;
  *(_BYTE *)(v5 + 81) = this->fields.isBefore;
  demoInfo = (System_Int32_array **)this->fields.demoInfo;
  *(_QWORD *)(v5 + 88) = demoInfo;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 88), demoInfo, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 96) = this->fields.selectedBranchIdx;
  *(_DWORD *)(v5 + 100) = this->fields.followerType;
  *(_DWORD *)(v5 + 104) = this->fields.originQuestId;
  *(_DWORD *)(v5 + 108) = this->fields.followrRandomLimitCount;
  choiceRandomLimitCounts = (System_Int32_array **)this->fields.choiceRandomLimitCounts;
  *(_QWORD *)(v5 + 112) = choiceRandomLimitCounts;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 112), choiceRandomLimitCounts, v16, v17, v18, v19, v20, v21);
  result = (BattleSetupInfo_BattleSetupSaveInfo_o *)v5;
  *(_DWORD *)(v5 + 120) = this->fields.followerSpoilerProtectionLimitCount;
  *(_BYTE *)(v5 + 124) = this->fields.isScriptBeforeWarBoard;
  *(_DWORD *)(v5 + 128) = this->fields.followerSupportDeckId;
  *(_DWORD *)(v5 + 132) = this->fields.campaignItemId;
  *(_DWORD *)(v5 + 136) = this->fields.restartWave;
  return result;
}


void __fastcall BattleSetupInfo__SetEventUpValues(BattleSetupInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  EventDetailEntity_o *Entity; // x0
  const MethodInfo *v17; // x1
  int32_t v18; // w0
  int32_t questPhase; // w20
  int32_t eventId; // w21
  int32_t v21; // w22
  EventUpValSetupInfo_o *v22; // x23
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42EB2B5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&EventUpValSetupInfo_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EB2B5 = 1;
  }
  if ( this->fields.eventId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
    {
      sub_B5D69C(Instance, v15);
    }
    Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.eventId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( Entity )
    {
      if ( EventDetailEntity__IsBonusSkill(Entity, 0LL) )
      {
        v18 = BattleSetupInfo__TargetQuestId(this, v17);
        questPhase = this->fields.questPhase;
        eventId = this->fields.eventId;
        v21 = v18;
        v22 = (EventUpValSetupInfo_o *)sub_B5D694(EventUpValSetupInfo_TypeInfo);
        EventUpValSetupInfo___ctor(v22, v21, questPhase, eventId, 0LL);
        this->fields.eventUpValSetupInfo = v22;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.eventUpValSetupInfo,
          (System_Int32_array **)v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSetupInfo__SetRestriction(BattleSetupInfo_o *this, bool isResetDeck, const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t eventId; // w21
  int32_t v7; // w0
  int32_t questPhase; // w22
  int32_t v9; // w23
  QuestRestrictionInfo_o *v10; // x24
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v19; // x1
  UserGameEntity_o *v20; // x20
  int64_t ActiveUserEquipId; // x0
  int64_t activeDeckId; // x8

  if ( (byte_42EB2B6 & 1) == 0 )
  {
    sub_B5D5C4(&QuestRestrictionInfo_TypeInfo, isResetDeck, (_DWORD)method, v3);
    byte_42EB2B6 = 1;
  }
  eventId = this->fields.eventId;
  v7 = BattleSetupInfo__TargetQuestId(this, (const MethodInfo *)isResetDeck);
  questPhase = this->fields.questPhase;
  v9 = v7;
  v10 = (QuestRestrictionInfo_o *)sub_B5D694(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_34244212(v10, eventId, v9, questPhase, 0LL);
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( isResetDeck )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !*p_questRestrictionInfo )
      goto LABEL_19;
    v20 = SelfUserGame;
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
      if ( v20 )
      {
        ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(v20, 0LL);
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
      if ( v20 )
      {
        activeDeckId = v20->fields.activeDeckId;
        goto LABEL_15;
      }
    }
LABEL_19:
    sub_B5D69C(SelfUserGame, v19);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  struct System_Int32_array *SelectableQuests; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB2B7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42EB2B7 = 1;
  }
  this->fields.selectableQuestIds = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectableQuestIds, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.selectableRouteQuestId = 0;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.selectableQuestIds,
          (System_Int32_array **)SelectableQuests,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        (Instance = (DataManager_o *)entity) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(Instance, v13);
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
        v8 = sub_B5D6C8(this);
        sub_B5D668(v8, 0LL);
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