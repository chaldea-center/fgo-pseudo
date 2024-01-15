void __fastcall BattleSetupInfo___ctor(BattleSetupInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSetupInfo___ctor_30312308(
        BattleSetupInfo_o *this,
        BattleSetupInfo_BattleSetupSaveInfo_o *saveInfo,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_String_o *demoInfo; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  struct System_String_o *choiceRandomLimitCounts; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !saveInfo )
    sub_B170D4();
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.demoInfo,
    (System_Int32_array **)demoInfo,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  this->fields.selectedBranchIdx = saveInfo->fields.selectedBranchIdx;
  this->fields.followerType = saveInfo->fields.followerType;
  this->fields.originQuestId = saveInfo->fields.originQuestId;
  BattleSetupInfo__SetEventUpValues(this, v12);
  BattleSetupInfo__SetRestriction(this, 0, v13);
  BattleSetupInfo__SetSelectableQuests(this, v14);
  this->fields.followrRandomLimitCount = saveInfo->fields.followrRandomLimitCount;
  choiceRandomLimitCounts = saveInfo->fields.choiceRandomLimitCounts;
  this->fields.choiceRandomLimitCounts = choiceRandomLimitCounts;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.choiceRandomLimitCounts,
    (System_Int32_array **)choiceRandomLimitCounts,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
  bool v20; // w8
  clsQuestCheck_o *v21; // x0
  WebViewManager_o *Instance; // x0
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v24; // x1
  int32_t v25; // w0
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_40FCD49 & 1) == 0 )
  {
    sub_B16FFC(&BattleSetupInfo_TypeInfo, *(_QWORD *)&warId);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v16);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v17);
    sub_B16FFC(&StringLiteral_1/*""*/, v18);
    byte_40FCD49 = 1;
  }
  v19 = sub_B170CC(
          BattleSetupInfo_TypeInfo,
          *(_QWORD *)&warId,
          *(_QWORD *)&qId,
          *(_QWORD *)&qPhase,
          isScriptBeforePartySelect);
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
    v21 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( v21 )
    {
      v20 = clsQuestCheck__mfCheck_IsQuestNew(v21, qId, 0LL);
      goto LABEL_11;
    }
LABEL_14:
    sub_B170D4();
  }
  v20 = 0;
LABEL_11:
  *(_BYTE *)(v19 + 72) = v20;
  *(_QWORD *)(v19 + 40) = 0LL;
  *(_QWORD *)(v19 + 48) = 0LL;
  *(_DWORD *)(v19 + 56) = 0;
  *(_BYTE *)(v19 + 73) = isScriptBeforePartySelect;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  v25 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)v19, v24);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  *(_DWORD *)(v19 + 76) = QuestGroupMaster__GetEventId(MasterData_WarQuestSelectionMaster, v25, 0LL);
  BattleSetupInfo__SetEventUpValues((BattleSetupInfo_o *)v19, v26);
  BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)v19, 1, v27);
  BattleSetupInfo__SetSelectableQuests((BattleSetupInfo_o *)v19, v28);
  *(_DWORD *)(v19 + 136) = 0;
  v29 = (System_Int32_array **)StringLiteral_1/*""*/;
  *(_QWORD *)(v19 + 144) = StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)(v19 + 144), v29, v30, v31, v32, v33, v34, v35);
  *(_DWORD *)(v19 + 152) = 0;
  *(_BYTE *)(v19 + 156) = isScriptBeforeWarBoard;
  return (BattleSetupInfo_o *)v19;
}


BattleSetupInfo_BattleSetupSaveInfo_o *__fastcall BattleSetupInfo__GetInfoForSave(
        BattleSetupInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **demoInfo; // x1
  System_Int32_array **choiceRandomLimitCounts; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BattleSetupInfo_BattleSetupSaveInfo_o *result; // x0

  if ( (byte_40FCD45 & 1) == 0 )
  {
    sub_B16FFC(&BattleSetupInfo_BattleSetupSaveInfo_TypeInfo, method);
    byte_40FCD45 = 1;
  }
  v6 = sub_B170CC(BattleSetupInfo_BattleSetupSaveInfo_TypeInfo, method, v2, v3, v4);
  BattleSetupInfo_BattleSetupSaveInfo___ctor((BattleSetupInfo_BattleSetupSaveInfo_o *)v6, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_DWORD *)(v6 + 16) = this->fields.warId;
  *(_DWORD *)(v6 + 20) = this->fields.questId;
  *(_DWORD *)(v6 + 24) = this->fields.questPhase;
  *(_QWORD *)(v6 + 32) = this->fields.deckId;
  *(_QWORD *)(v6 + 40) = this->fields.followerId;
  *(_DWORD *)(v6 + 48) = this->fields.followerClassId;
  *(_DWORD *)(v6 + 52) = this->fields.itemId;
  *(_DWORD *)(v6 + 56) = this->fields.boostId;
  *(_QWORD *)(v6 + 64) = this->fields.userEquipId;
  *(_BYTE *)(v6 + 72) = this->fields.isQuestNew;
  *(_BYTE *)(v6 + 73) = this->fields.isScriptBeforePartySelect;
  *(_BYTE *)(v6 + 74) = this->fields.isChildFollower;
  *(_DWORD *)(v6 + 76) = this->fields.eventId;
  *(_BYTE *)(v6 + 80) = this->fields.battleBefore;
  *(_BYTE *)(v6 + 81) = this->fields.isBefore;
  demoInfo = (System_Int32_array **)this->fields.demoInfo;
  *(_QWORD *)(v6 + 88) = demoInfo;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 88), demoInfo, v7, v8, v9, v10, v11, v12);
  *(_DWORD *)(v6 + 96) = this->fields.selectedBranchIdx;
  *(_DWORD *)(v6 + 100) = this->fields.followerType;
  *(_DWORD *)(v6 + 104) = this->fields.originQuestId;
  *(_DWORD *)(v6 + 108) = this->fields.followrRandomLimitCount;
  choiceRandomLimitCounts = (System_Int32_array **)this->fields.choiceRandomLimitCounts;
  *(_QWORD *)(v6 + 112) = choiceRandomLimitCounts;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 112), choiceRandomLimitCounts, v15, v16, v17, v18, v19, v20);
  result = (BattleSetupInfo_BattleSetupSaveInfo_o *)v6;
  *(_DWORD *)(v6 + 120) = this->fields.followerSpoilerProtectionLimitCount;
  *(_BYTE *)(v6 + 124) = this->fields.isScriptBeforeWarBoard;
  *(_DWORD *)(v6 + 128) = this->fields.followerSupportDeckId;
  *(_DWORD *)(v6 + 132) = this->fields.campaignItemId;
  return result;
}


void __fastcall BattleSetupInfo__SetEventUpValues(BattleSetupInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  EventDetailEntity_o *Entity; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w0
  int32_t questPhase; // w20
  int32_t eventId; // w21
  int32_t v13; // w22
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  EventUpValSetupInfo_o *v18; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40FCD46 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v3);
    sub_B16FFC(&EventUpValSetupInfo_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FCD46 = 1;
  }
  if ( this->fields.eventId >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Instance,
                                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      this->fields.eventId,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( Entity )
    {
      if ( EventDetailEntity__IsBonusSkill(Entity, 0LL) )
      {
        v10 = BattleSetupInfo__TargetQuestId(this, v9);
        questPhase = this->fields.questPhase;
        eventId = this->fields.eventId;
        v13 = v10;
        v18 = (EventUpValSetupInfo_o *)sub_B170CC(EventUpValSetupInfo_TypeInfo, v14, v15, v16, v17);
        EventUpValSetupInfo___ctor(v18, v13, questPhase, eventId, 0LL);
        this->fields.eventUpValSetupInfo = v18;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.eventUpValSetupInfo,
          (System_Int32_array **)v18,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
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
  __int64 v12; // x4
  QuestRestrictionInfo_o *v13; // x24
  QuestRestrictionInfo_o **p_questRestrictionInfo; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v22; // x20
  int64_t ActiveUserEquipId; // x0
  int64_t activeDeckId; // x8

  if ( (byte_40FCD47 & 1) == 0 )
  {
    sub_B16FFC(&QuestRestrictionInfo_TypeInfo, isResetDeck);
    byte_40FCD47 = 1;
  }
  eventId = this->fields.eventId;
  v6 = BattleSetupInfo__TargetQuestId(this, (const MethodInfo *)isResetDeck);
  questPhase = this->fields.questPhase;
  v8 = v6;
  v13 = (QuestRestrictionInfo_o *)sub_B170CC(QuestRestrictionInfo_TypeInfo, v9, v10, v11, v12);
  QuestRestrictionInfo___ctor_31223888(v13, eventId, v8, questPhase, 0LL);
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  this->fields.questRestrictionInfo = v13;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( isResetDeck )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !*p_questRestrictionInfo )
      goto LABEL_19;
    v22 = SelfUserGame;
    if ( (*p_questRestrictionInfo)->fields.isNoSupportBattle
      || QuestRestrictionInfo__IsSupportOnly(*p_questRestrictionInfo, 0LL) )
    {
      goto LABEL_13;
    }
    if ( !*p_questRestrictionInfo )
      goto LABEL_19;
    if ( QuestRestrictionInfo__IsServantNum(*p_questRestrictionInfo, 0LL) )
      goto LABEL_13;
    if ( !*p_questRestrictionInfo )
      goto LABEL_19;
    if ( QuestRestrictionInfo__IsNpcMulitipleOrOnly(*p_questRestrictionInfo, 0LL) )
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
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  QuestPhaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Int32_array *SelectableQuests; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FCD48 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FCD48 = 1;
  }
  this->fields.selectableQuestIds = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectableQuestIds, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.selectableRouteQuestId = 0;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( !QuestPhaseMaster__TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          this->fields.questId,
          this->fields.questPhase,
          0LL) )
    return;
  if ( !entity
    || (SelectableQuests = QuestPhaseEntity__GetSelectableQuests(entity, 0LL),
        this->fields.selectableQuestIds = SelectableQuests,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.selectableQuestIds,
          (System_Int32_array **)SelectableQuests,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        !entity) )
  {
LABEL_10:
    sub_B170D4();
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
  __int64 v2; // x2
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
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
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